from __future__ import annotations

import math
import sys
from pathlib import Path

from PyQt6.QtCore import QEvent, QPointF, QRectF, Qt, pyqtSignal
from PyQt6.QtGui import QShortcut, QKeySequence, QAction, QColor, QFont, QPainter, QPen, QPolygonF
from PyQt6.QtWidgets import (
    QAbstractItemView,
    QApplication,
    QCheckBox,
    QFrame,
    QGridLayout,
    QHBoxLayout,
    QHeaderView,
    QLabel,
    QMainWindow,
    QMessageBox,
    QPushButton,
    QScrollArea,
    QSlider,
    QDoubleSpinBox,
    QProgressBar,
    QTableWidget,
    QTableWidgetItem,
    QTextEdit,
    QToolTip,
    QVBoxLayout,
    QWidget,
)

from twin.demo_engine import DemoAirflowEngine
from twin.engine_fmu import FmuEngine, FmuUnavailable
from twin.engine_base import EngineInput, EngineResult, Quantity, SourceKind
from twin.explain import airflow_narration
from twin.units import display_unit, display_value


DISPLAY_KEYS = (
    "p_suction_pa",
    "T_evap_sat_k",
    "p_discharge_pa",
    "p_txv_inlet_pa",
    "superheat_mixed_k",
    "subcooling_k",
    "m_dot_kg_s",
    "Q_evap_w",
    "T_air_in_evap_k",
    "T_air_off_evap_k",
    "txv_opening_frac",
    "W_comp_w",
    "T_cond_sat_k",
    "T_suction_k",
    "T_discharge_k",
    "T_liquid_k",
)

SOURCE_LABELS = {
    SourceKind.FMU: "FMU",
    SourceKind.DEMO_MODEL: "Demo response",
    SourceKind.ASSUMED: "Assumed",
    SourceKind.DERIVED: "Derived",
    SourceKind.MISSING: "Missing",
}


def _precision(key: str) -> int:
    if "m_dot" in key:
        return 4
    if key == "txv_opening_frac":
        return 0
    if key in {"Q_evap_w", "Q_cond_w", "W_comp_w"}:
        return 0
    return 2


def _format_value(key: str, value: float, include_sign: bool = False) -> str:
    value = display_value(key, value, delta=include_sign)
    sign = "+" if include_sign and value > 0 else ""
    return f"{sign}{value:.{_precision(key)}f}"


def _format_quantity(key: str, quantity: Quantity) -> str:
    return f"{_format_value(key, quantity.value)} {display_unit(key, quantity.unit)}"


def _format_delta(key: str, quantity: Quantity) -> str:
    if quantity.delta is None:
        return "—"
    unit = display_unit(key, quantity.unit)
    delta = display_value(key, quantity.delta, delta=True)
    threshold = 0.005
    arrow = "▲" if delta > threshold else "▼" if delta < -threshold else "•"
    return f"{arrow} {_format_value(key, quantity.delta, include_sign=True)} {unit}"


class PHPlot(QWidget):
    """An explicitly schematic p-h teaching view until property calculations exist."""

    def __init__(self) -> None:
        super().__init__()
        self.current: EngineResult | None = None
        self.baseline: EngineResult | None = None
        self.previous: EngineResult | None = None
        self.defrost_visual_only = False
        self.setMinimumHeight(330)

    def set_results(self, current: EngineResult, baseline: EngineResult | None) -> None:
        self.current = current
        self.baseline = baseline
        self.update()

    def set_defrost_visual_only(self, active: bool) -> None:
        self.defrost_visual_only = active
        self.update()

    def paintEvent(self, event) -> None:  # noqa: N802
        painter = QPainter(self)
        painter.setRenderHint(QPainter.RenderHint.Antialiasing)
        painter.fillRect(self.rect(), QColor("#ffffff"))
        area = self.rect().adjusted(62, 54, -26, -54)

        painter.setPen(QColor("#526176"))
        painter.drawText(12, 22, "Normalized p-h teaching view")
        painter.setPen(QColor("#8a5a12"))
        status = (
            "Hot-gas path only — thermodynamic response unavailable"
            if self.defrost_visual_only
            else "Illustrative geometry — not property-calculated"
        )
        painter.drawText(12, 42, status)

        painter.setPen(QPen(QColor("#d7dee8"), 1))
        painter.drawRect(area)
        for pressure in (4, 8, 12, 16):
            y = self._pressure_y(area, pressure)
            painter.setPen(QPen(QColor("#e7ebf1"), 1))
            painter.drawLine(QPointF(area.left(), y), QPointF(area.right(), y))
            painter.setPen(QColor("#526176"))
            painter.drawText(QRectF(8, y - 10, 46, 20), Qt.AlignmentFlag.AlignRight | Qt.AlignmentFlag.AlignVCenter, f"{pressure}")

        painter.setPen(QColor("#526176"))
        painter.drawText(QPointF(area.left(), self.height() - 16), "Relative enthalpy → (not to scale)")
        painter.save()
        painter.translate(18, area.center().y() + 42)
        painter.rotate(-90)
        painter.drawText(0, 0, "Pressure (psig)")
        painter.restore()

        dome = QRectF(
            area.left() + area.width() * 0.16,
            area.top() + area.height() * 0.10,
            area.width() * 0.68,
            area.height() * 1.18,
        )
        painter.setPen(QPen(QColor("#aeb9c8"), 2))
        painter.drawArc(dome, 20 * 16, 140 * 16)
        painter.setPen(QColor("#718096"))
        painter.drawText(QPointF(area.left() + 8, area.top() + 18), "schematic saturation envelope")

        if self.baseline:
            self._draw_cycle(painter, area, self.baseline, QColor("#8b98aa"), dashed=True, label_points=False)
        if self.current:
            self._draw_cycle(painter, area, self.current, QColor("#087f73"), dashed=False, label_points=True)

        painter.setPen(QPen(QColor("#8b98aa"), 2, Qt.PenStyle.DashLine))
        painter.drawLine(
            QPointF(area.right() - 154, area.top() + 16),
            QPointF(area.right() - 126, area.top() + 16),
        )
        painter.setPen(QColor("#526176"))
        painter.drawText(QPointF(area.right() - 118, area.top() + 21), "baseline")
        painter.end()

    def _pressure_y(self, area: QRectF, pressure: float) -> float:
        normalized = (pressure - 20.0) / 240.0
        return area.bottom() - max(0.0, min(1.0, normalized)) * area.height()

    def _draw_cycle(
        self,
        painter: QPainter,
        area: QRectF,
        result: EngineResult,
        color: QColor,
        dashed: bool,
        label_points: bool,
    ) -> None:
        q = result.quantities
        suction = display_value("p_suction_pa", q["p_suction_pa"].value)
        discharge = display_value("p_discharge_pa", q["p_discharge_pa"].value)
        liquid = display_value("p_txv_inlet_pa", q["p_txv_inlet_pa"].value)
        superheat = display_value("superheat_mixed_k", q["superheat_mixed_k"].value)
        subcool = q["subcooling_k"].value

        x_low = area.left() + area.width() * (0.30 + min(subcool, 14.0) * 0.004)
        x_vapor = area.left() + area.width() * (0.74 + min(superheat, 16.0) * 0.004)
        points = [
            QPointF(x_vapor, self._pressure_y(area, suction)),
            QPointF(area.left() + area.width() * 0.82, self._pressure_y(area, discharge)),
            QPointF(x_low, self._pressure_y(area, liquid)),
            QPointF(x_low, self._pressure_y(area, suction)),
        ]

        pen = QPen(color, 3)
        if dashed:
            pen.setStyle(Qt.PenStyle.DashLine)
        painter.setPen(pen)
        for start, end in zip(points, points[1:] + points[:1]):
            self._draw_arrow(painter, start, end, color, dashed)

        painter.setBrush(color)
        painter.setPen(QPen(color, 1))
        for index, point in enumerate(points, 1):
            painter.drawEllipse(point, 5, 5)
            if label_points:
                painter.drawText(
                    QRectF(point.x() + 7, point.y() - 18, 92, 20),
                    Qt.AlignmentFlag.AlignLeft | Qt.AlignmentFlag.AlignVCenter,
                    f"{index}",
                )

        if label_points:
            painter.setPen(QColor("#344054"))
            legend_y = area.bottom() + 28
            painter.drawText(
                QPointF(area.left(), legend_y),
                "1 suction   2 discharge   3 liquid   4 evaporator inlet",
            )

    def _draw_arrow(self, painter: QPainter, start: QPointF, end: QPointF, color: QColor, dashed: bool) -> None:
        painter.drawLine(start, end)
        if dashed:
            return
        angle = math.atan2(end.y() - start.y(), end.x() - start.x())
        middle = QPointF(start.x() + (end.x() - start.x()) * 0.58, start.y() + (end.y() - start.y()) * 0.58)
        size = 8
        arrow = QPolygonF(
            [
                middle,
                QPointF(middle.x() - size * math.cos(angle - 0.5), middle.y() - size * math.sin(angle - 0.5)),
                QPointF(middle.x() - size * math.cos(angle + 0.5), middle.y() - size * math.sin(angle + 0.5)),
            ]
        )
        painter.setBrush(color)
        painter.drawPolygon(arrow)


class Schematic(QWidget):
    """Field-traced unit topology with cooling and hot-gas flow paths."""

    componentSelected = pyqtSignal(str)

    def __init__(self) -> None:
        super().__init__()
        self.current: EngineResult | None = None
        self.baseline: EngineResult | None = None
        self.previous: EngineResult | None = None
        self.show_conceptual = True
        self.selected_component = "evaporator"
        self.valve_states = {"liquid_line_solenoid": True, "hot_gas_solenoid": False}
        self._component_rects: dict[str, QRectF] = {}
        self.setMinimumHeight(650)
        self.setMouseTracking(True)

    def set_results(
        self,
        current: EngineResult,
        baseline: EngineResult | None,
        previous: EngineResult | None = None,
    ) -> None:
        self.current = current
        self.baseline = baseline
        # Result from BEFORE the latest Calculate, drawn dulled beneath each value so
        # the effect of the change just made is visible without remembering it.
        self.previous = previous
        self.update()

    def set_conceptual_visible(self, visible: bool) -> None:
        self.show_conceptual = visible
        self.update()

    def set_selected_component(self, component: str) -> None:
        self.selected_component = component
        self.update()

    def set_valve_states(self, states: dict[str, bool]) -> None:
        self.valve_states.update(states)
        self.update()

    def mousePressEvent(self, event) -> None:  # noqa: N802
        point = event.position()
        for component, rect in self._component_rects.items():
            if rect.contains(point):
                target = "evaporator" if component in {"evaporator_1", "evaporator_2"} else component
                self.set_selected_component(target)
                self.componentSelected.emit(target)
                event.accept()
                return
        super().mousePressEvent(event)

    def mouseMoveEvent(self, event) -> None:  # noqa: N802
        point = event.position()
        component = next((name for name, rect in self._component_rects.items() if rect.contains(point)), None)
        if component:
            self.setCursor(Qt.CursorShape.PointingHandCursor)
            QToolTip.showText(event.globalPosition().toPoint(), self._hover_text(component), self)
        else:
            self.unsetCursor()
            QToolTip.hideText()
        super().mouseMoveEvent(event)

    def leaveEvent(self, event) -> None:  # noqa: N802
        self.unsetCursor()
        QToolTip.hideText()
        super().leaveEvent(event)

    def _hover_text(self, component: str) -> str:
        if not self.current:
            return ""
        q = self.current.quantities
        inputs = self.current.inputs
        def shown(key: str) -> str:
            return _format_quantity(key, q[key])

        details = {
            "compressor": (
                "Compressor",
                [
                    f"Speed: {inputs.compressor_speed_frac * 100:.0f}%",
                    f"Suction: {shown('p_suction_pa')}",
                    f"Suction saturation: {shown('T_evap_sat_k')}",
                    f"Suction line actual: {shown('T_suction_k')}",
                    f"Discharge: {shown('p_discharge_pa')}",
                    f"Discharge line actual: {shown('T_discharge_k')}",
                    f"Electrical power: {shown('W_comp_w')}",
                ],
            ),
            "condenser": (
                "Condenser",
                [
                    f"Airflow: {inputs.condenser_airflow_frac * 100:.0f}%",
                    f"Installed size: {inputs.condenser_capacity_frac * 100:.0f}%",
                    f"Discharge pressure: {shown('p_discharge_pa')}",
                    f"Condensing saturation: {shown('T_cond_sat_k')}",
                    f"Liquid line actual: {shown('T_liquid_k')}",
                    f"Subcooling: {shown('subcooling_k')}",
                ],
            ),
            "txv": (
                "TXV",
                [
                    f"Opening: {inputs.txv_opening_frac * 100:.0f}%",
                    f"Installed size: {inputs.txv_size_frac * 100:.0f}%",
                    f"Liquid pressure: {shown('p_txv_inlet_pa')}",
                    f"Liquid temperature: {shown('T_liquid_k')}",
                    f"Evaporator superheat: {shown('superheat_mixed_k')}",
                ],
            ),
            "evaporator_1": (
                "Evaporator circuit 1",
                [
                    f"Airflow: {inputs.airflow_frac * 100:.0f}%",
                    f"Installed size: {inputs.evaporator_capacity_frac * 100:.0f}%",
                    f"Suction pressure: {shown('p_suction_pa')}",
                    f"Evaporating saturation: {shown('T_evap_sat_k')}",
                    f"Refrigerant outlet actual: {shown('T_suction_k')}",
                    f"Circuit superheat: {shown('superheat_circuit_k_1')}",
                    f"Circuit mass flow: {shown('m_dot_circuit_kg_s_1')}",
                    f"Air entering / leaving: {shown('T_air_in_evap_k')} / {shown('T_air_off_evap_k')}",
                    f"Cooling capacity: {shown('Q_evap_w')}",
                ],
            ),
            "evaporator_2": (
                "Evaporator circuit 2",
                [
                    f"Airflow: {inputs.airflow_frac * 100:.0f}%",
                    f"Installed size: {inputs.evaporator_capacity_frac * 100:.0f}%",
                    f"Suction pressure: {shown('p_suction_pa')}",
                    f"Evaporating saturation: {shown('T_evap_sat_k')}",
                    f"Refrigerant outlet actual: {shown('T_suction_k')}",
                    f"Circuit superheat: {shown('superheat_circuit_k_2')}",
                    f"Circuit mass flow: {shown('m_dot_circuit_kg_s_2')}",
                    f"Air entering / leaving: {shown('T_air_in_evap_k')} / {shown('T_air_off_evap_k')}",
                    f"Cooling capacity: {shown('Q_evap_w')}",
                ],
            ),
            "evaporator": (
                "Evaporator — two circuits",
                [
                    f"Airflow: {inputs.airflow_frac * 100:.0f}%",
                    f"Installed size: {inputs.evaporator_capacity_frac * 100:.0f}%",
                    f"Suction pressure: {shown('p_suction_pa')}",
                    f"Evaporating saturation: {shown('T_evap_sat_k')}",
                    f"Refrigerant outlet actual: {shown('T_suction_k')}",
                    f"Circuit 1 / 2 superheat: {shown('superheat_circuit_k_1')} / {shown('superheat_circuit_k_2')}",
                    f"Circuit 1 / 2 flow: {shown('m_dot_circuit_kg_s_1')} / {shown('m_dot_circuit_kg_s_2')}",
                    f"Air entering / leaving: {shown('T_air_in_evap_k')} / {shown('T_air_off_evap_k')}",
                    f"Cooling capacity: {shown('Q_evap_w')}",
                ],
            ),
            "header": (
                "Suction header / charge",
                [
                    "System charge: awaiting nameplate value (g)",
                    f"Suction pressure: {shown('p_suction_pa')}",
                    f"Saturation temperature: {shown('T_evap_sat_k')}",
                    f"Actual line temperature: {shown('T_suction_k')}",
                    f"Mass flow: {shown('m_dot_kg_s')}",
                ],
            ),
            "hot_gas_solenoid": (
                "Hot-gas solenoid",
                [f"Command: {'OPEN' if self.valve_states['hot_gas_solenoid'] else 'CLOSED'}", "Feeds compressor discharge gas through the check valve to the distributor side inlet."],
            ),
            "liquid_line_solenoid": (
                "Liquid-line solenoid",
                [f"Command: {'OPEN' if self.valve_states['liquid_line_solenoid'] else 'CLOSED'}", "Opens for cooling and closes when the hot-gas branch is selected."],
            ),
            "check_valve": (
                "Hot-gas branch check valve",
                ["No user command", "Allows flow toward the distributor and blocks reverse flow into the compressor-discharge branch."],
            ),
            "high_pressure_switch": (
                "High-pressure switch",
                [f"Discharge pressure sensed: {shown('p_discharge_pa')}", "This is a sensing branch, not a refrigerant-flow path."],
            ),
            "condensate_pan_coil": (
                "Condensate-pan hot-gas coil",
                [f"Discharge pressure: {shown('p_discharge_pa')}", f"Discharge temperature: {shown('T_discharge_k')}", "Uses discharge heat to evaporate condensate before the condenser."],
            ),
            "filter_drier": (
                "Filter-drier",
                [f"Liquid pressure: {shown('p_txv_inlet_pa')}", f"Liquid temperature: {shown('T_liquid_k')}", "Removes moisture, acid and debris from the liquid line."],
            ),
            "distributor": (
                "Distributor",
                ["Normal inlet: TXV", "Side inlet: hot-gas check valve", "Outlet split: evaporator circuits 1 and 2"],
            ),
        }
        title, lines = details.get(component, (component, []))
        return f"<b>{title}</b><br>" + "<br>".join(lines)

    def paintEvent(self, event) -> None:  # noqa: N802
        painter = QPainter(self)
        painter.setRenderHint(QPainter.RenderHint.Antialiasing)
        painter.fillRect(self.rect(), QColor("#ffffff"))
        if not self.current:
            painter.end()
            return

        area = self.rect().adjusted(18, 58, -18, -22)
        w, h = area.width(), area.height()

        def box(x: float, y: float, width: float, height: float) -> QRectF:
            return QRectF(area.left() + x * w, area.top() + y * h, width * w, height * h)

        def point(x: float, y: float) -> QPointF:
            return QPointF(area.left() + x * w, area.top() + y * h)

        components = {
            "compressor": ("Compressor", box(0.02, 0.35, 0.12, 0.18)),
            "high_pressure_switch": ("High-pressure\nswitch", box(0.04, 0.03, 0.13, 0.11)),
            "condensate_pan_coil": ("Condensate-pan\nhot-gas coil", box(0.23, 0.03, 0.15, 0.14)),
            "condenser": ("Condenser", box(0.41, 0.03, 0.14, 0.14)),
            "filter_drier": ("Filter-drier", box(0.58, 0.045, 0.09, 0.11)),
            "liquid_line_solenoid": ("Liquid-line solenoid", box(0.70, 0.03, 0.15, 0.14)),
            "txv": ("TXV", box(0.87, 0.03, 0.09, 0.14)),
            "hot_gas_solenoid": ("Hot-gas solenoid", box(0.27, 0.34, 0.17, 0.13)),
            "distributor": ("Distributor", box(0.84, 0.34, 0.13, 0.16)),
            "evaporator": ("Evaporator", box(0.68, 0.59, 0.29, 0.25)),
            "header": ("Suction header", box(0.42, 0.66, 0.17, 0.14)),
        }
        check_point = point(0.49, 0.405)
        components["check_valve"] = ("", QRectF(check_point.x() - 20, check_point.y() - 20, 40, 40))

        compressor = components["compressor"][1]
        hp_switch = components["high_pressure_switch"][1]
        pan_coil = components["condensate_pan_coil"][1]
        condenser = components["condenser"][1]
        filter_drier = components["filter_drier"][1]
        liquid_solenoid = components["liquid_line_solenoid"][1]
        txv = components["txv"][1]
        hot_solenoid = components["hot_gas_solenoid"][1]
        distributor = components["distributor"][1]
        evaporator = components["evaporator"][1]
        header = components["header"][1]

        hot_mode = self.valve_states["hot_gas_solenoid"]
        liquid_open = self.valve_states["liquid_line_solenoid"]
        teal = QColor("#087f73")
        amber = QColor("#b66a0a")
        inactive = QColor("#9aa6b5")
        structure = QColor("#344054")
        cooling_color = teal if liquid_open else inactive
        common_color = amber if hot_mode else teal
        shared_color = amber if hot_mode else teal

        tee_1 = point(0.17, 0.44)
        tee_2 = point(0.20, 0.44)
        painter.setPen(QPen(shared_color, 3))
        for start, end in (
            (QPointF(compressor.right(), compressor.center().y()), tee_1),
            (tee_1, tee_2),
        ):
            self._draw_arrow(painter, start, end, shared_color)

        painter.setPen(QPen(structure, 2))
        painter.drawLine(tee_1, QPointF(tee_1.x(), hp_switch.bottom()))
        painter.drawLine(QPointF(tee_1.x(), hp_switch.bottom()), QPointF(hp_switch.center().x(), hp_switch.bottom()))

        main_segments = (
            (tee_2, QPointF(tee_2.x(), pan_coil.center().y())),
            (QPointF(tee_2.x(), pan_coil.center().y()), QPointF(pan_coil.left(), pan_coil.center().y())),
            (QPointF(pan_coil.right(), pan_coil.center().y()), QPointF(condenser.left(), condenser.center().y())),
            (QPointF(condenser.right(), condenser.center().y()), QPointF(filter_drier.left(), filter_drier.center().y())),
            (QPointF(filter_drier.right(), filter_drier.center().y()), QPointF(liquid_solenoid.left(), liquid_solenoid.center().y())),
            (QPointF(liquid_solenoid.right(), liquid_solenoid.center().y()), QPointF(txv.left(), txv.center().y())),
            (QPointF(txv.center().x(), txv.bottom()), QPointF(txv.center().x(), distributor.top())),
            (QPointF(txv.center().x(), distributor.top()), QPointF(distributor.center().x(), distributor.top())),
        )
        painter.setPen(QPen(cooling_color, 3))
        for start, end in main_segments:
            self._draw_arrow(painter, start, end, cooling_color)

        hot_route = (
            (tee_2, QPointF(tee_2.x(), hot_solenoid.center().y())),
            (QPointF(tee_2.x(), hot_solenoid.center().y()), QPointF(hot_solenoid.left(), hot_solenoid.center().y())),
            (QPointF(hot_solenoid.right(), hot_solenoid.center().y()), check_point),
            (check_point, QPointF(distributor.left(), check_point.y())),
            (QPointF(distributor.left(), check_point.y()), QPointF(distributor.left(), distributor.center().y())),
        )
        hot_pen = QPen(amber, 3 if hot_mode else 2.5)
        if not hot_mode:
            hot_pen.setStyle(Qt.PenStyle.DashLine)
        painter.setPen(hot_pen)
        for start, end in hot_route:
            if hot_mode:
                self._draw_arrow(painter, start, end, amber)
            else:
                painter.drawLine(start, end)
        self._draw_check_valve(painter, check_point, amber)

        split = point(0.905, 0.55)
        inlet_1 = QPointF(area.left() + 0.78 * w, evaporator.top())
        inlet_2 = QPointF(area.left() + 0.90 * w, evaporator.top())
        feed_segments = (
            (QPointF(distributor.center().x(), distributor.bottom()), split),
            (split, QPointF(inlet_1.x(), split.y())),
            (QPointF(inlet_1.x(), split.y()), inlet_1),
            (split, QPointF(inlet_2.x(), split.y())),
            (QPointF(inlet_2.x(), split.y()), inlet_2),
        )
        painter.setPen(QPen(common_color, 3))
        for start, end in feed_segments:
            self._draw_arrow(painter, start, end, common_color)

        outlet_1 = QPointF(evaporator.left(), area.top() + 0.68 * h)
        outlet_2 = QPointF(evaporator.left(), area.top() + 0.77 * h)
        merge = point(0.64, 0.73)
        return_segments = (
            (outlet_1, QPointF(merge.x(), outlet_1.y())),
            (QPointF(merge.x(), outlet_1.y()), merge),
            (outlet_2, QPointF(merge.x(), outlet_2.y())),
            (QPointF(merge.x(), outlet_2.y()), merge),
            (merge, QPointF(header.right(), header.center().y())),
            (QPointF(header.left(), header.center().y()), QPointF(compressor.center().x(), header.center().y())),
            (QPointF(compressor.center().x(), header.center().y()), QPointF(compressor.center().x(), compressor.bottom())),
        )
        painter.setPen(QPen(common_color, 3))
        for start, end in return_segments:
            self._draw_arrow(painter, start, end, common_color)

        def draw_component(component: str, label: str, rect: QRectF) -> None:
            selected = self.selected_component == component
            if component == "hot_gas_solenoid":
                state = "OPEN" if hot_mode else "CLOSED"
                fill = QColor("#fff1db") if hot_mode else QColor("#fff8ed")
                label = f"{label}\n{state}"
            elif component == "liquid_line_solenoid":
                state = "OPEN" if liquid_open else "CLOSED"
                fill = QColor("#e9f8f4") if liquid_open else QColor("#f2f4f7")
                label = f"{label}\n{state}"
            else:
                fill = QColor("#f5f8fb")
            painter.setBrush(fill)
            painter.setPen(QPen(QColor("#2563a6") if selected else structure, 3 if selected else 1.5))
            painter.drawRoundedRect(rect, 7, 7)
            painter.setPen(QColor("#172033"))
            painter.drawText(rect, Qt.AlignmentFlag.AlignCenter, label)

        for component, (label, rect) in components.items():
            if component not in {"check_valve", "evaporator"}:
                draw_component(component, label, rect)

        selected_evap = self.selected_component == "evaporator"
        painter.setBrush(QColor("#f5f8fb"))
        painter.setPen(QPen(QColor("#2563a6") if selected_evap else structure, 3 if selected_evap else 1.5))
        painter.drawRoundedRect(evaporator, 8, 8)
        painter.setPen(QColor("#172033"))
        painter.drawText(QRectF(evaporator.left(), evaporator.top() + 5, evaporator.width(), 22), Qt.AlignmentFlag.AlignCenter, "Evaporator — two circuits")

        circuit_1_y = outlet_1.y()
        circuit_2_y = outlet_2.y()
        painter.setPen(QPen(common_color, 3))
        internal_segments = (
            (inlet_1, QPointF(inlet_1.x(), circuit_1_y)),
            (QPointF(inlet_1.x(), circuit_1_y), outlet_1),
            (inlet_2, QPointF(inlet_2.x(), circuit_2_y)),
            (QPointF(inlet_2.x(), circuit_2_y), outlet_2),
        )
        for start, end in internal_segments:
            self._draw_arrow(painter, start, end, common_color)
        q = self.current.quantities
        painter.setPen(QColor("#344054"))
        painter.drawText(QPointF(evaporator.left() + 14, circuit_1_y - 7), f"C1  SH {_format_quantity('superheat_circuit_k_1', q['superheat_circuit_k_1'])}")
        painter.drawText(QPointF(evaporator.left() + 14, circuit_2_y - 7), f"C2  SH {_format_quantity('superheat_circuit_k_2', q['superheat_circuit_k_2'])}")

        painter.setPen(QColor("#7a4300"))
        painter.drawText(QRectF(check_point.x() - 48, check_point.y() - 31, 96, 22), Qt.AlignmentFlag.AlignCenter, "Check valve")
        self._label(painter, compressor.left(), compressor.bottom() + 19, f"{_format_quantity('p_discharge_pa', q['p_discharge_pa'])} discharge", common_color)
        self._label(painter, condenser.left(), condenser.bottom() + 19, f"Cond sat {_format_quantity('T_cond_sat_k', q['T_cond_sat_k'])}", cooling_color)
        self._label(painter, txv.left(), txv.bottom() + 18, f"Open {q['txv_opening_frac'].value * 100:.0f}%", cooling_color)
        self._prev_label(painter, txv.left(), txv.bottom() + 18, ("txv_opening_frac",))
        self._label(painter, header.left(), header.bottom() + 18, f"{_format_quantity('p_suction_pa', q['p_suction_pa'])}  •  {_format_quantity('m_dot_kg_s', q['m_dot_kg_s'])}", common_color)
        self._prev_label(painter, header.left(), header.bottom() + 18, ("p_suction_pa", "m_dot_kg_s"))

        painter.setPen(QColor("#344054"))
        painter.drawText(QRectF(area.left(), area.top() - 32, area.width(), 24), Qt.AlignmentFlag.AlignCenter, "FIELD-TRACED CONDENSING-UNIT TUBING TOPOLOGY")
        # Legend on the TOP band beside the title. It used to sit at the bottom and
        # consume the space the editor now needs, forcing the controls off screen.
        legend_y = 18
        lx = int(area.left())
        painter.setPen(QPen(teal, 3))
        painter.drawLine(lx, legend_y, lx + 24, legend_y)
        painter.setPen(QColor("#344054"))
        painter.drawText(lx + 30, legend_y + 5, "cooling path")
        painter.setPen(QPen(amber, 3))
        painter.drawLine(lx + 128, legend_y, lx + 152, legend_y)
        painter.setPen(QColor("#344054"))
        painter.drawText(lx + 158, legend_y + 5, "hot-gas path")
        painter.setPen(QPen(structure, 2))
        painter.drawLine(lx + 262, legend_y, lx + 286, legend_y)
        painter.drawText(lx + 292, legend_y + 5, "pressure-sensing branch")

        self._component_rects = {component: rect for component, (_, rect) in components.items()}
        painter.end()

    def _draw_arrow(self, painter: QPainter, start: QPointF, end: QPointF, color: QColor) -> None:
        painter.drawLine(start, end)
        angle = math.atan2(end.y() - start.y(), end.x() - start.x())
        middle = QPointF(start.x() + (end.x() - start.x()) * 0.60, start.y() + (end.y() - start.y()) * 0.60)
        size = 8
        arrow = QPolygonF(
            [
                middle,
                QPointF(middle.x() - size * math.cos(angle - 0.5), middle.y() - size * math.sin(angle - 0.5)),
                QPointF(middle.x() - size * math.cos(angle + 0.5), middle.y() - size * math.sin(angle + 0.5)),
            ]
        )
        painter.setBrush(color)
        painter.drawPolygon(arrow)

    def _draw_check_valve(self, painter: QPainter, center: QPointF, color: QColor, reverse: bool = False) -> None:
        size = 10
        direction = -1 if reverse else 1
        triangle = QPolygonF(
            [
                QPointF(center.x() - direction * size, center.y() - size),
                QPointF(center.x() - direction * size, center.y() + size),
                QPointF(center.x() + direction * 2, center.y()),
            ]
        )
        painter.setBrush(QColor("#fff7e8"))
        painter.setPen(QPen(color, 2))
        painter.drawPolygon(triangle)
        stop_x = center.x() + direction * 3
        painter.drawLine(QPointF(stop_x, center.y() - size), QPointF(stop_x, center.y() + size))

    def _label(self, painter: QPainter, x: float, y: float, text: str, color: QColor) -> None:
        painter.setPen(color)
        painter.drawText(QPointF(x, y), text)

    def _prev_label(self, painter: QPainter, x: float, y: float, keys: tuple[str, ...]) -> None:
        """Draw the PREVIOUS value dulled under the current one.

        Deliberately grey and one line down: it must read as history, not as a
        second live reading. Silent when there is no previous result (first solve)
        or when nothing moved.
        """
        if not self.previous:
            return
        parts = []
        for key in keys:
            was = self.previous.quantities.get(key)
            now = self.current.quantities.get(key) if self.current else None
            if was is None or now is None:
                return
            if abs(was.value - now.value) <= abs(now.value) * 1e-6:
                continue
            parts.append(
                f"{was.value * 100:.0f}%" if key == "txv_opening_frac"
                else _format_quantity(key, was)
            )
        if not parts:
            return
        font = painter.font()
        original = font.pointSizeF()
        font.setPointSizeF(max(6.5, original - 1.0))
        painter.setFont(font)
        painter.setPen(QColor("#98a2b3"))
        painter.drawText(QPointF(x, y + 13), "was " + "  •  ".join(parts))
        font.setPointSizeF(original)
        painter.setFont(font)



# --- ENGINEERING UNITS FOR THE CONTROLS ---------------------------------------
# The engine boundary is SI (SCOPE 6.4); the USER works in field units. This table
# is the only place the two meet.
#
#   kind="frac"   value stored is a FRACTION of `nominal`; shown as frac*nominal
#   kind="direct" value stored is the engine value; shown via to_disp/from_disp
#
# Nominals come from the model, not guesses:
#   evaporator airflow 0.15 m3/s (fan curve x coil dP, 2 fans) = 318 CFM
#   condenser airflow  0.076 m3/s (1 fan)                      = 161 CFM
#   compressor         50 rev/s                                = 3000 RPM
#   TXV orifice        Afull = 9.6e-8 m2                       = 0.096 mm2
K2F = lambda k: (k - 273.15) * 9.0 / 5.0 + 32.0
F2K = lambda f: (f - 32.0) * 5.0 / 9.0 + 273.15

CONTROL_UNITS: dict[str, dict] = {
    "compressor_speed_frac":  dict(kind="frac", unit="RPM", nominal=3000.0, lo=0.50, hi=1.20, dp=0),
    "condenser_airflow_frac": dict(kind="frac", unit="CFM", nominal=161.0,  lo=0.40, hi=1.20, dp=0),
    "airflow_frac":           dict(kind="frac", unit="CFM", nominal=318.0,  lo=0.40, hi=1.20, dp=0),
    "txv_opening_frac":       dict(kind="frac", unit="% open", nominal=100.0, lo=0.20, hi=1.00, dp=0),
    "txv_size_frac":          dict(kind="frac", unit="mm2 orifice", nominal=0.096, lo=0.70, hi=1.30, dp=3),
    # absolute engine values
    "v_s_cm3":            dict(kind="direct", unit="cm3/rev", lo=8.0,   hi=40.0,  dp=1),
    "superheat_target_k": dict(kind="direct", unit="F superheat", lo=2.0, hi=15.0, dp=1,
                               to_disp=lambda k: k * 9.0 / 5.0, from_disp=lambda f: f * 5.0 / 9.0),
    "t_amb_k":            dict(kind="direct", unit="F ambient", lo=F2K(50.0),  hi=F2K(120.0), dp=0,
                               to_disp=K2F, from_disp=F2K),
    "t_box_k":            dict(kind="direct", unit="F return air", lo=F2K(-25.0), hi=F2K(45.0), dp=0,
                               to_disp=K2F, from_disp=F2K),
    "ua_evap_nom_w_k":    dict(kind="direct", unit="W/K air-side", lo=40.0,  hi=400.0, dp=0),
    "ua_cond_nom_w_k":    dict(kind="direct", unit="W/K air-side", lo=150.0, hi=1400.0, dp=0),
}


def frac_to_display(parameter: str, stored: float) -> float:
    spec = CONTROL_UNITS[parameter]
    if spec["kind"] == "frac":
        return stored * spec["nominal"]
    return spec.get("to_disp", lambda v: v)(stored)


def display_to_frac(parameter: str, shown: float) -> float:
    spec = CONTROL_UNITS[parameter]
    if spec["kind"] == "frac":
        return shown / spec["nominal"]
    return spec.get("from_disp", lambda v: v)(shown)


def control_bounds(parameter: str) -> tuple[float, float]:
    """(min, max) in DISPLAY units."""
    spec = CONTROL_UNITS[parameter]
    return frac_to_display(parameter, spec["lo"]), frac_to_display(parameter, spec["hi"])


class ComponentControls(QFrame):
    """Direct equipment editor shown inside the process-diagram card."""

    inputChanged = pyqtSignal(str, float)
    calculateRequested = pyqtSignal()
    valveChanged = pyqtSignal(str, bool)

    CONFIG = {
        "compressor": (
            "Compressor",
            (
                ("Displacement", "v_s_cm3", 0, 0),
                ("Speed", "compressor_speed_frac", 0, 0),
            ),
            "Displacement is the physical compressor size. Shaft power in HP is a "
            "calculated output, shown beside it.",
        ),
        "condenser": (
            "Condenser",
            (
                ("Condenser airflow", "condenser_airflow_frac", 0, 0),
                ("Ambient air", "t_amb_k", 0, 0),
                ("Air-side UA", "ua_cond_nom_w_k", 0, 0),
            ),
            "Airflow, the air the condenser rejects into, and the coil's conductance "
            "are three separate physical changes.",
        ),
        "txv": (
            "Thermostatic expansion valve",
            (
                ("Manual opening", "txv_opening_frac", 0, 0),
                ("Installed valve size", "txv_size_frac", 0, 0),
                ("Superheat setpoint", "superheat_target_k", 0, 0),
            ),
            "Opening, orifice size and the superheat the valve is set to hold.",
        ),
        "evaporator": (
            "Evaporator",
            (
                ("Evaporator airflow", "airflow_frac", 0, 0),
                ("Return air", "t_box_k", 0, 0),
                ("Air-side UA", "ua_evap_nom_w_k", 0, 0),
            ),
            "Airflow, the return air entering the coil, and the coil's conductance "
            "are three separate physical changes.",
        ),
        "header": (
            "Suction header",
            (),
            "Charge will be entered here in grams. It is disabled until the nameplate charge and M3 inventory model are available.",
        ),
        "liquid_line_solenoid": (
            "Liquid-line solenoid",
            (),
            "Cooling: open. Hot-gas mode: closed so refrigerant is routed through the hot-gas branch.",
        ),
        "hot_gas_solenoid": (
            "Hot-gas solenoid",
            (),
            "Cooling: closed. Hot-gas mode: open to feed the distributor side inlet.",
        ),
        "check_valve": (
            "Hot-gas branch check valve",
            (),
            "Passive: permits flow toward the distributor and prevents backflow into the discharge branch.",
        ),
        "high_pressure_switch": (
            "High-pressure switch",
            (),
            "Pressure sensing only; this branch does not carry circulation flow.",
        ),
        "condensate_pan_coil": (
            "Condensate-pan hot-gas coil",
            (),
            "Uses discharge heat to evaporate condensate before refrigerant enters the condenser.",
        ),
        "filter_drier": (
            "Filter-drier",
            (),
            "Liquid-line protection between the condenser outlet and liquid-line solenoid.",
        ),
        "distributor": (
            "Distributor",
            (),
            "Receives the TXV outlet or hot gas through its side inlet, then divides flow into two evaporator circuits.",
        ),
    }

    def __init__(self) -> None:
        super().__init__()
        self.setObjectName("componentEditor")
        self.component = "evaporator"
        self.values: dict[str, float] = {}
        self.defrost_active = False

        layout = QVBoxLayout(self)
        layout.setContentsMargins(13, 10, 13, 10)
        layout.setSpacing(7)
        top = QHBoxLayout()
        self.title = QLabel()
        self.title.setObjectName("sectionTitle")
        self.help = QLabel()
        self.help.setObjectName("secondaryText")
        self.help.setWordWrap(True)
        top.addWidget(self.title)
        top.addSpacing(12)
        top.addWidget(self.help, 1)
        layout.addLayout(top)

        # Numeric entry in real units, not percentage sliders. Type the number you
        # know (RPM, CFM), the bar follows. Compact so the whole editor fits beside
        # the schematic without scrolling.
        self.rows: list[dict] = []
        for index in range(3):
            row_widget = QWidget()
            row = QHBoxLayout(row_widget)
            row.setContentsMargins(0, 0, 0, 0)
            row.setSpacing(8)
            label = QLabel()
            label.setMinimumWidth(132)
            spin = QDoubleSpinBox()
            spin.setMinimumWidth(88)
            spin.setMaximumWidth(110)
            spin.setKeyboardTracking(False)
            spin.valueChanged.connect(lambda value, r=index: self._spin_changed(r, value))
            # Enter must recalculate. A QShortcut does NOT work here: QDoubleSpinBox
            # consumes Return itself to commit the text, so the key never reaches the
            # shortcut. setDefault(True) on the button does not fire outside a dialog
            # either - Enter simply left the results stale.
            spin.installEventFilter(self)
            unit_label = QLabel()
            unit_label.setObjectName("secondaryText")
            unit_label.setMinimumWidth(74)
            # Calculated companion (e.g. shaft HP beside displacement). Output, not input.
            derived = QLabel()
            derived.setObjectName("secondaryText")
            derived.setMinimumWidth(96)
            bar = QProgressBar()
            bar.setTextVisible(False)
            bar.setFixedHeight(6)
            bar.setRange(0, 1000)
            row.addWidget(label)
            row.addWidget(spin)
            row.addWidget(unit_label)
            row.addWidget(derived)
            row.addWidget(bar, 1)
            layout.addWidget(row_widget)
            self.rows.append(dict(widget=row_widget, label=label, spin=spin,
                                  unit=unit_label, derived=derived, bar=bar, parameter=None))

        self.disabled_note = QLabel()
        self.disabled_note.setObjectName("secondaryText")
        self.disabled_note.setWordWrap(True)
        self.disabled_note.hide()
        layout.addWidget(self.disabled_note)

        self.valve_toggle = QCheckBox()
        self.valve_toggle.toggled.connect(self._valve_changed)
        layout.addWidget(self.valve_toggle)

        # Calculate lives HERE, beside the inputs, so a change and its recompute
        # happen in one place without scrolling.
        action_row = QHBoxLayout()
        self.pending_note = QLabel("")
        self.pending_note.setObjectName("secondaryText")
        self.calculate_button = QPushButton("Calculate")
        self.calculate_button.setDefault(True)
        self.calculate_button.clicked.connect(self.calculateRequested.emit)

        action_row.addWidget(self.pending_note, 1)
        action_row.addWidget(self.calculate_button)
        layout.addLayout(action_row)

        self.select_component("evaporator", {"airflow_frac": 1.0})

    def eventFilter(self, obj, event):  # noqa: N802
        """Enter COMMITS the typed number. It deliberately does NOT solve.

        An FMU solve is ~8 s. Firing one per Enter is exactly the behaviour the
        Calculate button exists to avoid: set every value you want, then solve once.
        """
        if event.type() == QEvent.Type.KeyPress and event.key() in (
            Qt.Key.Key_Return,
            Qt.Key.Key_Enter,
        ):
            if hasattr(obj, "interpretText"):
                obj.interpretText()
            return True
        return super().eventFilter(obj, event)

    def set_derived(self, values: dict[str, str]) -> None:
        """Calculated companions keyed by the input parameter they sit beside."""
        self._derived = dict(values)
        for row in self.rows:
            if row["parameter"]:
                row["derived"].setText(self._derived_text(row["parameter"]))

    def _derived_text(self, parameter: str) -> str:
        return getattr(self, "_derived", {}).get(parameter, "")

    def set_pending(self, pending: bool) -> None:
        """Results are stale relative to the inputs."""
        if pending:
            self.pending_note.setText("Inputs changed — press Calculate")
            self.pending_note.setStyleSheet("color:#b54708; font-weight:600;")
        self.calculate_button.setEnabled(True)
        self.calculate_button.setText("Calculate")

    def set_busy(self) -> None:
        """Solving. The UI blocks for the duration, so say so before it does."""
        self.pending_note.setText("Calculating… about 8 seconds")
        self.pending_note.setStyleSheet("color:#175cd3; font-weight:600;")
        self.calculate_button.setEnabled(False)
        self.calculate_button.setText("Calculating…")

    def set_done(self, stamp: str) -> None:
        """Solve finished; what is on screen matches the inputs."""
        self.pending_note.setText(f"Up to date — calculated {stamp}")
        self.pending_note.setStyleSheet("color:#027a48; font-weight:600;")
        self.calculate_button.setEnabled(True)
        self.calculate_button.setText("Calculate")

    def select_component(self, component: str, values: dict[str, float] | None = None) -> None:
        if values is not None:
            self.values.update(values)
        self.component = component
        title, controls, help_text = self.CONFIG[component]
        self.title.setText(f"Selected: {title}")
        self.help.setText(help_text)

        for index, row in enumerate(self.rows):
            if index >= len(controls):
                row["widget"].hide()
                row["parameter"] = None
                continue
            row["widget"].show()
            control_label, parameter, _min_pct, _max_pct = controls[index]
            spec = CONTROL_UNITS[parameter]
            row["parameter"] = parameter
            row["label"].setText(control_label)
            row["unit"].setText(spec["unit"])
            row["derived"].setText(self._derived_text(parameter))
            spin, bar = row["spin"], row["bar"]
            spin.blockSignals(True)
            spin.setDecimals(spec["dp"])
            spin.setRange(*control_bounds(parameter))
            spin.setSingleStep(max(10 ** -spec["dp"],
                                   round((spin.maximum() - spin.minimum()) / 40, spec["dp"])))
            frac = self.values.get(parameter, 1.0)
            spin.setValue(frac_to_display(parameter, frac))
            spin.blockSignals(False)
            lo_d, hi_d = control_bounds(parameter)
            shown = frac_to_display(parameter, frac)
            bar.setValue(int(1000 * max(0.0, min(1.0, (shown - lo_d) / (hi_d - lo_d)))))
        self.disabled_note.hide()

        is_defrost_control = component in {"hot_gas_solenoid", "liquid_line_solenoid"}
        self.valve_toggle.setVisible(is_defrost_control)
        if is_defrost_control:
            self.valve_toggle.blockSignals(True)
            self.valve_toggle.setChecked(self.defrost_active)
            self.valve_toggle.setText("Hot-gas path selected" if self.defrost_active else "Cooling path selected")
            self.valve_toggle.blockSignals(False)

    def sync_values(self, values: dict[str, float]) -> None:
        self.select_component(self.component, values)

    def _spin_changed(self, row_index: int, shown: float) -> None:
        row = self.rows[row_index]
        parameter = row["parameter"]
        if not parameter:
            return
        frac = display_to_frac(parameter, shown)
        self.values[str(parameter)] = frac
        lo_d, hi_d = control_bounds(parameter)
        row["bar"].setValue(int(1000 * max(0.0, min(1.0, (shown - lo_d) / (hi_d - lo_d)))))
        # Emits the PENDING value only. Nothing is simulated until Calculate is
        # pressed - an FMU solve is ~8 s, so recomputing per keystroke is unusable.
        self.inputChanged.emit(str(parameter), frac)

    def _valve_changed(self, checked: bool) -> None:
        if self.component not in {"hot_gas_solenoid", "liquid_line_solenoid"}:
            return
        self.defrost_active = checked
        self.valve_toggle.setText("Hot-gas path selected" if checked else "Cooling path selected")
        self.valveChanged.emit("defrost_mode", checked)


class MainWindow(QMainWindow):
    def __init__(self) -> None:
        super().__init__()
        self.setWindowTitle("Refrigeration Trainer")
        # --- ENGINE SELECTION -------------------------------------------------
        # Prefer the Modelica FMU; fall back to the placeholder only if it cannot
        # be loaded. The fallback is NOT silent -- `engine_is_fmu` drives the
        # warning banner, so the user always knows which physics is on screen.
        #
        # Nominal airflows are the fan-curve x coil-resistance intersection
        # (NEXT_STEPS Step 2): evaporator 2 fans, condenser 1 fan.
        #
        # NOTE ON SPEED: an FMU solve is ~7-9 s, because every input change is a
        # fresh simulation from t=0 to steady state (the loop needs ~340 s of
        # simulated time to settle, and controls are causality=parameter so they
        # cannot be changed mid-run). SCOPE 17 targets ~2 s. That gap is a real
        # architecture question -- precomputed operating maps, a faster-settling
        # formulation, or a revised target -- and is NOT solved here.
        self.engine_error: str | None = None
        try:
            self.engine = FmuEngine(
                Path(__file__).resolve().parent / "fmu" / "RefrigerationTrainer.fmu",
                nominal_evap_airflow_m3_s=0.15,
                nominal_condenser_airflow_m3_s=0.076,
            )
            self.engine_is_fmu = True
        except FmuUnavailable as exc:
            self.engine = DemoAirflowEngine()
            self.engine_is_fmu = False
            self.engine_error = str(exc)
        self.input_values = {
            "airflow_frac": 1.0,
            "compressor_speed_frac": 1.0,
            "condenser_airflow_frac": 1.0,
            "txv_opening_frac": 0.50,
            "txv_size_frac": 1.0,
            "v_s_cm3": 20.0,
            "ua_evap_nom_w_k": 132.8,
            "ua_cond_nom_w_k": 575.0,
            "superheat_target_k": 7.0,
            "t_amb_k": 305.15,
            "t_box_k": 255.37,
            "hot_gas_solenoid_open": False,
            "liquid_line_solenoid_open": True,
        }
        self.valve_states = {"liquid_line_solenoid": True, "hot_gas_solenoid": False}
        self.current: EngineResult | None = None
        self.previous: EngineResult | None = None
        self.baseline: EngineResult | None = self.engine.run(EngineInput())

        self._build_ui()
        self._build_menu()
        self._update_result()

    def _build_menu(self) -> None:
        about = QAction("About", self)
        about.triggered.connect(self._show_about)
        self.menuBar().addAction(about)

    def _build_ui(self) -> None:
        root = QWidget()
        root.setObjectName("appRoot")
        root_layout = QVBoxLayout(root)
        root_layout.setContentsMargins(0, 0, 0, 0)

        scroll = QScrollArea()
        scroll.setWidgetResizable(True)
        scroll.setFrameShape(QFrame.Shape.NoFrame)
        content = QWidget()
        content.setObjectName("scrollContent")
        content.setMinimumWidth(1060)
        layout = QVBoxLayout(content)
        layout.setContentsMargins(20, 16, 20, 24)
        layout.setSpacing(14)

        layout.addWidget(self._build_defect_banner())

        hero = QFrame()
        hero.setObjectName("hero")
        hero_layout = QHBoxLayout(hero)
        title_stack = QVBoxLayout()
        title = QLabel("Refrigeration Trainer")
        title.setObjectName("title")
        subtitle = QLabel("RLN5MA interactive refrigeration-process prototype")
        subtitle.setObjectName("subtitle")
        title_stack.addWidget(title)
        title_stack.addWidget(subtitle)
        hero_layout.addLayout(title_stack, 1)
        self.status_badge = QLabel("ILLUSTRATIVE DEMO • NOT VALIDATED")
        self.status_badge.setObjectName("statusBadge")
        self.status_badge.setAlignment(Qt.AlignmentFlag.AlignCenter)
        hero_layout.addWidget(self.status_badge)
        layout.addWidget(hero)

        instruction = QLabel(
            "Click equipment on the process diagram to change a physical input. "
            "Pressures, temperatures, capacity, superheat and mass flow respond automatically."
        )
        instruction.setObjectName("instruction")
        instruction.setWordWrap(True)
        layout.addWidget(instruction)

        visual_grid = QGridLayout()
        visual_grid.setHorizontalSpacing(14)
        self.schematic = Schematic()
        self.schematic.componentSelected.connect(self._select_component)
        schematic_frame = self._framed("System flow — click a component to change it", self.schematic)
        schematic_controls = QHBoxLayout()
        provenance_note = QLabel(
            "Topology source: your field tubing trace  •  Hot-gas thermodynamic response still awaits Modelica"
        )
        provenance_note.setObjectName("secondaryText")
        schematic_controls.addStretch()
        schematic_controls.addWidget(provenance_note)
        schematic_frame.layout().insertLayout(1, schematic_controls)

        self.component_controls = ComponentControls()
        self.component_controls.inputChanged.connect(self._set_physical_input)
        self.component_controls.valveChanged.connect(self._set_valve_state)
        self.component_controls.calculateRequested.connect(self._recalculate)
        self.component_controls.sync_values(self.input_values)
        schematic_frame.layout().addWidget(self.component_controls)

        reference_row = QHBoxLayout()
        reference = QLabel("Reference comparison: nominal configuration")
        reference.setObjectName("secondaryText")
        reset = QPushButton("Restore All to Nominal")
        reset.clicked.connect(self._reset)
        reference_row.addWidget(reference)
        reference_row.addStretch()
        reference_row.addWidget(reset)
        schematic_frame.layout().addLayout(reference_row)

        self.ph_plot = PHPlot()
        visual_grid.addWidget(schematic_frame, 0, 0)
        self.ph_plot.setMinimumHeight(460)
        visual_grid.addWidget(self._framed("Pressure–enthalpy learning view", self.ph_plot), 1, 0)
        visual_grid.setColumnStretch(0, 1)
        layout.addLayout(visual_grid)

        detail_grid = QGridLayout()
        detail_grid.setHorizontalSpacing(14)
        self.table = QTableWidget(0, 5)
        self.table.setHorizontalHeaderLabels(["Measurement", "Baseline", "Current", "Change", "Source"])
        self.table.setEditTriggers(QAbstractItemView.EditTrigger.NoEditTriggers)
        self.table.setSelectionBehavior(QAbstractItemView.SelectionBehavior.SelectRows)
        self.table.verticalHeader().setVisible(False)
        self.table.horizontalHeader().setSectionResizeMode(0, QHeaderView.ResizeMode.Stretch)
        for column in (1, 2, 3, 4):
            self.table.horizontalHeader().setSectionResizeMode(column, QHeaderView.ResizeMode.ResizeToContents)
        self.table.setMinimumHeight(390)
        detail_grid.addWidget(self._framed("State comparison", self.table), 0, 0)

        right = QVBoxLayout()
        self.narration = QTextEdit()
        self.narration.setReadOnly(True)
        self.narration.setMinimumHeight(145)
        right.addWidget(self._framed("What changed and why", self.narration))

        assumptions = QLabel()
        assumptions.setObjectName("bodyText")
        assumptions.setWordWrap(True)
        self.assumptions_label = assumptions
        right.addWidget(self._framed("Shared assumptions", assumptions))

        self.capabilities = QTextEdit()
        self.capabilities.setReadOnly(True)
        self.capabilities.setMinimumHeight(150)
        right.addWidget(self._framed("Available now / later", self.capabilities))
        detail_grid.addLayout(right, 0, 1)
        detail_grid.setColumnStretch(0, 3)
        detail_grid.setColumnStretch(1, 2)
        layout.addLayout(detail_grid)

        safety = QLabel(
            "Safety: educational visualization only. R290 is flammable. Do not use these demo values "
            "to set charge, pressure limits, controls, or service decisions."
        )
        safety.setObjectName("safety")
        safety.setWordWrap(True)
        layout.addWidget(safety)

        scroll.setWidget(content)
        root_layout.addWidget(scroll)
        self.setCentralWidget(root)
        self.resize(1440, 930)

    def _build_defect_banner(self) -> QFrame:
        """Known-wrong-physics warning.

        The provenance labels elsewhere are accurate but quiet. These responses are not
        merely uncalibrated — several are known to be backwards, and this application
        exists to teach someone who cannot yet tell the difference. Remove this banner
        only when docs/VALIDATION.md records the defects as fixed and the expected-fail
        tests in tests/test_scenarios.py pass.
        """
        banner = QFrame()
        banner.setObjectName("defectBanner")
        banner.setStyleSheet(
            "#defectBanner {"
            "  background-color: #7f1d1d;"
            "  border: 2px solid #b91c1c;"
            "  border-radius: 8px;"
            "}"
            "#defectBannerTitle {"
            "  color: #ffffff; font-size: 15px; font-weight: 700;"
            "}"
            "#defectBannerBody {"
            "  color: #fee2e2; font-size: 12px;"
            "}"
        )
        box = QVBoxLayout(banner)
        box.setContentsMargins(14, 10, 14, 12)
        box.setSpacing(4)

        title = QLabel("⚠  DO NOT LEARN FROM THESE NUMBERS YET — known incorrect physics")
        title.setObjectName("defectBannerTitle")
        title.setWordWrap(True)
        box.addWidget(title)

        body = QLabel(
            "These are placeholder demo correlations, not a refrigeration model, and several "
            "responses are known to be <b>backwards</b>:<br>"
            "• Restricting the condenser produces <b>no low-side response at all</b> — real systems "
            "raise suction pressure.<br>"
            "• Superheat <b>rises</b> when evaporator airflow falls — it should fall, which is why low "
            "airflow risks liquid floodback.<br>"
            "• Opening the TXV pushes <b>74% more refrigerant</b> through the condenser and "
            "discharge pressure does not move at all.<br>"
            "• State points disagree with capacity and mass flow by ~62%, so the p-h view is not "
            "thermodynamically valid.<br>"
            "Full list and status: <b>docs/VALIDATION.md</b> (defects D1–D11). "
            "Real physics arrives at milestone M1e — the closed ThermoCycle refrigeration loop."
        )
        body.setObjectName("defectBannerBody")
        body.setWordWrap(True)
        body.setTextFormat(Qt.TextFormat.RichText)
        box.addWidget(body)
        return banner

    def _framed(self, title: str, widget: QWidget) -> QFrame:
        frame = QFrame()
        frame.setObjectName("card")
        box = QVBoxLayout(frame)
        box.setContentsMargins(12, 10, 12, 12)
        box.setSpacing(8)
        label = QLabel(title)
        label.setObjectName("sectionTitle")
        label.setMaximumHeight(28)
        box.addWidget(label)
        box.addWidget(widget)
        box.setStretch(0, 0)
        box.setStretch(1, 1)
        return frame

    def _update_result(self) -> None:
        result = self.engine.run(EngineInput(**self.input_values))
        # Calculated companions shown beside their inputs (outputs, never editable).
        self.component_controls.set_derived({
            "v_s_cm3": f"= {result.quantities['W_comp_w'].value / 745.7:.2f} HP shaft",
        })
        if self.baseline:
            result = self._with_baseline(result, self.baseline)
        # Keep the result being replaced so the schematic can show what moved.
        self.previous = self.current
        self.current = result
        self._render()

    def _select_component(self, component: str) -> None:
        self.schematic.set_selected_component(component)
        self.component_controls.select_component(component, self.input_values)

    def _set_physical_input(self, parameter: str, value: float) -> None:
        # Store only. An FMU solve is ~8 s, so recomputing on every edit is
        # unusable; the user batches their changes and presses Calculate.
        self.input_values[parameter] = value
        self.component_controls.set_pending(True)

    def _recalculate(self) -> None:
        from datetime import datetime

        # The solve blocks the UI thread for ~8 s. Paint the busy state BEFORE it
        # starts, otherwise the window simply freezes with no explanation.
        self.component_controls.set_busy()
        QApplication.processEvents()
        try:
            self._update_result()
        finally:
            self.component_controls.set_done(datetime.now().strftime("%H:%M:%S"))

    def _set_valve_state(self, component: str, is_open: bool) -> None:
        if component == "defrost_mode":
            self.valve_states["hot_gas_solenoid"] = is_open
            self.valve_states["liquid_line_solenoid"] = not is_open
            self.input_values["hot_gas_solenoid_open"] = is_open
            self.input_values["liquid_line_solenoid_open"] = not is_open
            self.ph_plot.set_defrost_visual_only(is_open)
        self.schematic.set_valve_states(self.valve_states)
        self._update_result()

    def _with_baseline(self, result: EngineResult, baseline: EngineResult) -> EngineResult:
        quantities: dict[str, Quantity] = {}
        for key, quantity in result.quantities.items():
            base_value = baseline.quantities[key].value if key in baseline.quantities else None
            quantities[key] = Quantity(
                quantity.name,
                quantity.value,
                quantity.unit,
                quantity.provenance,
                base_value,
            )
        return EngineResult(
            result.engine_name,
            result.validated,
            result.status,
            result.inputs,
            quantities,
            result.capabilities,
            result.assumptions,
            result.warnings,
        )

    def _render(self) -> None:
        if not self.current:
            return
        self.schematic.set_results(self.current, self.baseline, self.previous)
        self.ph_plot.set_results(self.current, self.baseline)
        self.narration.setPlainText(airflow_narration(self.current))
        self.assumptions_label.setText("\n".join(f"• {item}" for item in self.current.assumptions))
        capability_lines = []
        for capability in self.current.capabilities:
            state = "AVAILABLE" if capability.available else "LATER"
            capability_lines.append(f"{state}  |  {capability.label}\n{capability.reason}")
        self.capabilities.setPlainText("\n\n".join(capability_lines))
        self._render_table()

    def _render_table(self) -> None:
        assert self.current is not None
        self.table.setRowCount(len(DISPLAY_KEYS))
        for row, key in enumerate(DISPLAY_KEYS):
            quantity = self.current.quantities[key]
            baseline = "—"
            if quantity.baseline_value is not None:
                baseline_q = Quantity(quantity.name, quantity.baseline_value, quantity.unit, quantity.provenance)
                baseline = _format_quantity(key, baseline_q)
            cells = [
                quantity.name,
                baseline,
                _format_quantity(key, quantity),
                _format_delta(key, quantity),
                SOURCE_LABELS[quantity.provenance.source],
            ]
            for column, value in enumerate(cells):
                item = QTableWidgetItem(value)
                if column in (1, 2, 3):
                    item.setTextAlignment(Qt.AlignmentFlag.AlignRight | Qt.AlignmentFlag.AlignVCenter)
                if column == 3 and quantity.delta is not None and abs(quantity.delta) >= 0.005:
                    item.setForeground(QColor("#087f73"))
                self.table.setItem(row, column, item)
        self.table.resizeRowsToContents()

    def _reset(self) -> None:
        self.input_values.update(
            airflow_frac=1.0,
            evaporator_capacity_frac=1.0,
            compressor_speed_frac=1.0,
            condenser_airflow_frac=1.0,
            condenser_capacity_frac=1.0,
            txv_opening_frac=0.54,
            txv_size_frac=1.0,
            hot_gas_solenoid_open=False,
            liquid_line_solenoid_open=True,
        )
        self.valve_states.update(liquid_line_solenoid=True, hot_gas_solenoid=False)
        self.component_controls.defrost_active = False
        self.component_controls.sync_values(self.input_values)
        self.schematic.set_valve_states(self.valve_states)
        self.ph_plot.set_defrost_visual_only(False)
        self._update_result()

    def _show_about(self) -> None:
        QMessageBox.information(
            self,
            "About Refrigeration Trainer",
            "R290 propane is flammable. This app is educational and diagnostic only. "
            "It does not control equipment and must never be used to set charge, pressure, "
            "or operating limits. Current values come from a labelled illustrative response, "
            "not a validated FMU. Dashed hot-gas components are generic teaching concepts and "
            "are not verified as the RLN5MA piping layout.",
        )


APP_STYLE = """
QWidget {
    font-size: 10pt;
    color: #172033;
}
QMainWindow, QWidget#appRoot, QScrollArea, QWidget#scrollContent {
    background-color: #f2f5f9;
}
QMenuBar {
    background: #ffffff;
    color: #172033;
    border-bottom: 1px solid #d7dee8;
}
QFrame#hero {
    background: #16283e;
    border-radius: 10px;
}
QLabel#title {
    color: #ffffff;
    font-size: 20pt;
    font-weight: 700;
    background: transparent;
}
QLabel#subtitle {
    color: #dce7f3;
    background: transparent;
}
QLabel#statusBadge {
    color: #633600;
    background: #ffe5b5;
    border: 1px solid #f1bd62;
    border-radius: 12px;
    padding: 7px 11px;
    font-weight: 700;
}
QLabel#instruction {
    color: #26364a;
    background: #e9f1fb;
    border: 1px solid #c8d9ee;
    border-radius: 7px;
    padding: 9px 12px;
    font-weight: 600;
}
QFrame#card, QFrame#metricCard {
    background: #ffffff;
    border: 1px solid #d7dee8;
    border-radius: 8px;
}
QFrame#componentEditor {
    background: #f7fafc;
    border: 1px solid #cbd7e5;
    border-radius: 7px;
}
QFrame#metricCard {
    border-top: 3px solid #087f73;
}
QLabel {
    background: transparent;
}
QLabel#sectionTitle {
    font-size: 11pt;
    font-weight: 700;
    color: #172033;
}
QLabel#controlValue {
    font-size: 12pt;
    font-weight: 700;
    color: #075e57;
}
QLabel#baselineLabel {
    color: #075e57;
    font-weight: 600;
}
QLabel#metricLabel, QLabel#secondaryText {
    color: #667085;
}
QLabel#metricValue {
    color: #172033;
    font-size: 17pt;
    font-weight: 700;
}
QLabel#metricDelta {
    color: #667085;
}
QLabel#bodyText {
    color: #344054;
    padding: 4px;
}
QLabel#safety {
    color: #7a2e0e;
    background: #fff2e8;
    border: 1px solid #f3c7a8;
    border-radius: 7px;
    padding: 9px 12px;
}
QPushButton {
    color: #172033;
    background: #ffffff;
    border: 1px solid #b9c5d3;
    border-radius: 6px;
    padding: 7px 12px;
}
QPushButton:hover {
    background: #eef3f8;
    border-color: #7d8da1;
}
QPushButton#primaryButton {
    color: #ffffff;
    background: #087f73;
    border-color: #087f73;
    font-weight: 600;
}
QPushButton#primaryButton:hover {
    background: #066b62;
}
QCheckBox {
    color: #26364a;
    spacing: 6px;
}
QDoubleSpinBox {
    background: #ffffff;
    color: #101828;
    border: 1px solid #d0d5dd;
    border-radius: 5px;
    padding: 3px 6px;
    font-weight: 600;
    selection-background-color: #b692f6;
}
QDoubleSpinBox:focus { border: 1px solid #7f56d9; }
QDoubleSpinBox:disabled { background: #f2f4f7; color: #98a2b3; }
QProgressBar {
    background: #eaecf0;
    border: none;
    border-radius: 3px;
}
QProgressBar::chunk {
    background: #7f56d9;
    border-radius: 3px;
}
QSlider::groove:horizontal {
    background: #cfd8e4;
    height: 6px;
    border-radius: 3px;
}
QSlider::sub-page:horizontal {
    background: #087f73;
    border-radius: 3px;
}
QSlider::handle:horizontal {
    background: #ffffff;
    border: 2px solid #087f73;
    width: 18px;
    margin: -7px 0;
    border-radius: 9px;
}
QTableWidget, QTextEdit {
    color: #172033;
    background: #ffffff;
    border: 1px solid #d7dee8;
    border-radius: 5px;
    selection-background-color: #d9eee9;
    selection-color: #172033;
}
QTableWidget {
    gridline-color: #e7ebf1;
}
QHeaderView::section {
    color: #344054;
    background: #edf2f7;
    border: none;
    border-bottom: 1px solid #cbd5df;
    padding: 7px;
    font-weight: 700;
}
QScrollBar:vertical {
    background: #edf1f5;
    width: 12px;
}
QScrollBar::handle:vertical {
    background: #aeb9c8;
    min-height: 30px;
    border-radius: 5px;
}
QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {
    height: 0px;
}
"""


def main() -> int:
    app = QApplication(sys.argv)
    app.setStyle("Fusion")
    app.setStyleSheet(APP_STYLE)
    window = MainWindow()
    window.show()
    return app.exec()


if __name__ == "__main__":
    raise SystemExit(main())
