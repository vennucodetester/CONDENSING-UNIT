model VariantB
  "Same physics as MinRepro, no ThermodynamicState record.
   density(setState_ph(p,h)) == density_ph(p,h) -- identical maths, no Integer."
  package Med = ExternalMedia.Media.CoolPropMedium(
      mediumName = "propane", substanceNames = {"propane"},
      ThermoStates = Modelica.Media.Interfaces.Choices.IndependentVariables.ph);
  Real p(start = 4.85e5, nominal = 1e5);
  Real h(start = 4.20e5, nominal = 1e5);
  Real d, s;
equation
  d = Med.density_ph(p, h);
  s = Med.specificEntropy_ph(p, h);
  p = 4.85e5 + 1.0e3*(d - 11.0);
  h = 4.20e5 + 1.0e2*(s - 2000.0);
end VariantB;
