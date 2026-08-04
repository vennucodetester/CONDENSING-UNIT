model MinRepro
  "Minimal reproducer: ExternalMedia ThermodynamicState record dragged into a
   nonlinear system => OMC emits .nominal on the Integer field 'phase'.
   Depends on ExternalMedia + CoolProp only. No ThermoCycle."
  package Med = ExternalMedia.Media.CoolPropMedium(
      mediumName = "propane",
      substanceNames = {"propane"},
      ThermoStates = Modelica.Media.Interfaces.Choices.IndependentVariables.ph);

  Med.ThermodynamicState st "state record; contains Integer phase";
  Real p(start = 4.85e5, nominal = 1e5);
  Real h(start = 4.20e5, nominal = 1e5);
equation
  st = Med.setState_ph(p, h);
  // Two implicit relations that force p and h (and therefore every field of st)
  // into one nonlinear block. Physically meaningless on purpose - this is a
  // codegen probe, not a model.
  p = 4.85e5 + 1.0e3*(Med.density(st)      - 11.0);
  h = 4.20e5 + 1.0e2*(Med.specificEntropy(st) - 2000.0);
end MinRepro;
