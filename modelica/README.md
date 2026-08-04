# Modelica implementation

`RefrigerationTrainer.SmokeContract` is the M0 toolchain and interface test. It is
explicitly not cycle physics. It proves that OpenModelica can export the intended SI
contract as an FMI 2.0 Co-Simulation FMU and that Python can execute it through FMPy.

The validated R290 cycle will replace this model incrementally in M1–M5 without
changing display units or leaking US-customary units into the FMU boundary.
