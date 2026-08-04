within RefrigerationTrainer;

model WallTemperatureSource
  "Imposes a uniform temperature on a distributed ThermoCycle ThermalPort.
   Stand-in for the air side until the real coil model is built (M1e)."
  parameter Integer N = 5 "number of nodes";
  input Real T_k(unit="K") = 278.15 "imposed wall temperature";
  ThermoCycle.Interfaces.HeatTransfer.ThermalPort port(N = N);
equation
  port.T = fill(T_k, N);
end WallTemperatureSource;
