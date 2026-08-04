#if defined(__cplusplus)
  extern "C" {
#endif
  int RefrigerationTrainer_ClosedLoopM1e_mayer(DATA* data, modelica_real** res, short*);
  int RefrigerationTrainer_ClosedLoopM1e_lagrange(DATA* data, modelica_real** res, short *, short *);
  int RefrigerationTrainer_ClosedLoopM1e_getInputVarIndicesInOptimization(DATA* data, int* input_var_indices);
  int RefrigerationTrainer_ClosedLoopM1e_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int RefrigerationTrainer_ClosedLoopM1e_setInputData(DATA *data, const modelica_boolean file);
  int RefrigerationTrainer_ClosedLoopM1e_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif
