from __future__ import annotations

from twin.engine_base import Capability


def unavailable_reasons(capabilities: tuple[Capability, ...]) -> list[str]:
    return [f"{cap.label}: {cap.reason}" for cap in capabilities if not cap.available]
