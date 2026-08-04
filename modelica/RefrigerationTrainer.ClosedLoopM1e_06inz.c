/* Initialization */
#include "RefrigerationTrainer.ClosedLoopM1e_model.h"
#include "RefrigerationTrainer.ClosedLoopM1e_11mix.h"
#include "RefrigerationTrainer.ClosedLoopM1e_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void RefrigerationTrainer_ClosedLoopM1e_functionInitialEquations_0(DATA *data, threadData_t *threadData);
void RefrigerationTrainer_ClosedLoopM1e_functionInitialEquations_1(DATA *data, threadData_t *threadData);

int RefrigerationTrainer_ClosedLoopM1e_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->discreteCall = 1;
  RefrigerationTrainer_ClosedLoopM1e_functionInitialEquations_0(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_functionInitialEquations_1(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  return 0;
}

/* No RefrigerationTrainer_ClosedLoopM1e_functionInitialEquations_lambda0 function */

int RefrigerationTrainer_ClosedLoopM1e_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  return 0;
}


#if defined(__cplusplus)
}
#endif
