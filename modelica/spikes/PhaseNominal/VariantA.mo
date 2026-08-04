model VariantA "Same as MinRepro but phase pinned to 1 in the setState call"
  package Med = ExternalMedia.Media.CoolPropMedium(
      mediumName = "propane", substanceNames = {"propane"},
      ThermoStates = Modelica.Media.Interfaces.Choices.IndependentVariables.ph);
  Med.ThermodynamicState st;
  Real p(start = 4.85e5, nominal = 1e5);
  Real h(start = 4.20e5, nominal = 1e5);
equation
  st = Med.setState_ph(p, h, 1);
  p = 4.85e5 + 1.0e3*(Med.density(st)          - 11.0);
  h = 4.20e5 + 1.0e2*(Med.specificEntropy(st)  - 2000.0);
end VariantA;
