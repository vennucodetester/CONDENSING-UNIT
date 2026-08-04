/* Linear Systems */
#include "RefrigerationTrainer.ClosedLoopM1eCS_model.h"
#include "RefrigerationTrainer.ClosedLoopM1eCS_12jac.h"
#include "simulation/arrayIndex.h"

#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 1121
type: SIMPLE_ASSIGN
coil_evap.T_air[2] = (T_box_k * coil_evap.cp_air * coil_evap.m_dot_air - coil_evap.Q_cell[1]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[620]] /* coil_evap.T_air[2] variable */) = DIVISION_SIM((((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* T_box_k PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* coil_evap.Q_cell[1] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air",equationIndexes);
  threadData->lastEquationSolved = 1121;
}
/*
equation index: 1122
type: SIMPLE_ASSIGN
evap.Wall_int.T[1] = 0.5 * (T_box_k + coil_evap.T_air[2]) - coil_evap.Q_cell[1] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* evap.Wall_int.T[1] variable */) = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* T_box_k PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[620]] /* coil_evap.T_air[2] variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* coil_evap.Q_cell[1] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 1122;
}
/*
equation index: 1123
type: SIMPLE_ASSIGN
evap.Cells[1].qdot = evap.Cells[1].heatTransfer.U[1] * (evap.Wall_int.T[1] - evap.Cells[1].T)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* evap.Cells[1].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* evap.Cells[1].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* evap.Wall_int.T[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[933]] /* evap.Cells[1].T variable */));
  threadData->lastEquationSolved = 1123;
}

void residualFunc1129(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1129};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* coil_evap.Q_cell[1] variable */) = xloc[0];
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1121(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1122(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1123(data, threadData);
  res[0] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* evap.Cells[1].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* coil_evap.Q_cell[1] variable */);
  threadData->lastEquationSolved = 1124;
  threadData->lastEquationSolved = 1129;
}
OMC_DISABLE_OPT
void initializeStaticLSData1129(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[1] = {
    -1 /* coil_evap.Q_cell[1] */
  };
  for (int i = 0; i < 1; ++i) {
    if (indices[i] == -1) {
      linearSystemData->nominal[i] = 1.0;
      linearSystemData->min[i]     = -DBL_MAX;
      linearSystemData->max[i]     = DBL_MAX;
    } else {
      linearSystemData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->max[i]     = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
    }
  }
}



/*
equation index: 841
type: SIMPLE_ASSIGN
coil_cond.T_air[2] = (T_amb_k * coil_cond.cp_air * coil_cond.m_dot_air - coil_cond.Q_cell[1]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,841};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* coil_cond.T_air[2] variable */) = DIVISION_SIM((((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* T_amb_k PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* coil_cond.Q_cell[1] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air",equationIndexes);
  threadData->lastEquationSolved = 841;
}
/*
equation index: 842
type: SIMPLE_ASSIGN
cond.Wall_int.T[1] = 0.5 * (T_amb_k + coil_cond.T_air[2]) - coil_cond.Q_cell[1] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,842};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* cond.Wall_int.T[1] variable */) = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* T_amb_k PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* coil_cond.T_air[2] variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* coil_cond.Q_cell[1] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 842;
}
/*
equation index: 843
type: SIMPLE_ASSIGN
cond.Cells[1].qdot = cond.Cells[1].heatTransfer.U[1] * (cond.Wall_int.T[1] - cond.Cells[1].T)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,843};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cond.Cells[1].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* cond.Cells[1].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* cond.Wall_int.T[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* cond.Cells[1].T variable */));
  threadData->lastEquationSolved = 843;
}

void residualFunc849(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,849};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* coil_cond.Q_cell[1] variable */) = xloc[0];
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_841(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_842(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_843(data, threadData);
  res[0] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cond.Cells[1].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* coil_cond.Q_cell[1] variable */);
  threadData->lastEquationSolved = 844;
  threadData->lastEquationSolved = 849;
}
OMC_DISABLE_OPT
void initializeStaticLSData849(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[1] = {
    -1 /* coil_cond.Q_cell[1] */
  };
  for (int i = 0; i < 1; ++i) {
    if (indices[i] == -1) {
      linearSystemData->nominal[i] = 1.0;
      linearSystemData->min[i]     = -DBL_MAX;
      linearSystemData->max[i]     = DBL_MAX;
    } else {
      linearSystemData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->max[i]     = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
    }
  }
}



/*
equation index: 582
type: SIMPLE_ASSIGN
evap.Cells[1].qdot = evap.Cells[1].heatTransfer.U[1] * (evap.Wall_int.T[1] - evap.Cells[1].T)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,582};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* evap.Cells[1].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* evap.Cells[1].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* evap.Wall_int.T[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[933]] /* evap.Cells[1].T variable */));
  threadData->lastEquationSolved = 582;
}
/*
equation index: 583
type: SIMPLE_ASSIGN
coil_evap.Q_cell[1] = evap.Cells[1].qdot * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* coil_evap.Q_cell[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* evap.Cells[1].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 583;
}
/*
equation index: 584
type: SIMPLE_ASSIGN
coil_evap.T_air[2] = ((T_box_k * 0.5 - evap.Wall_int.T[1]) * coil_evap.UA_cell - coil_evap.Q_cell[1]) / (coil_evap.UA_cell * (-0.5))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,584};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[620]] /* coil_evap.T_air[2] variable */) = DIVISION_SIM((((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* T_box_k PARAM */)) * (0.5) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* evap.Wall_int.T[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* coil_evap.Q_cell[1] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */)) * (-0.5),"coil_evap.UA_cell * (-0.5)",equationIndexes);
  threadData->lastEquationSolved = 584;
}

void residualFunc590(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,590};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* evap.Wall_int.T[1] variable */) = xloc[0];
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_582(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_583(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_584(data, threadData);
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* coil_evap.Q_cell[1] variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* T_box_k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[620]] /* coil_evap.T_air[2] variable */))));
  threadData->lastEquationSolved = 585;
  threadData->lastEquationSolved = 590;
}
OMC_DISABLE_OPT
void initializeStaticLSData590(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[1] = {
    -1 /* evap.Wall_int.T[1] */
  };
  for (int i = 0; i < 1; ++i) {
    if (indices[i] == -1) {
      linearSystemData->nominal[i] = 1.0;
      linearSystemData->min[i]     = -DBL_MAX;
      linearSystemData->max[i]     = DBL_MAX;
    } else {
      linearSystemData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->max[i]     = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
    }
  }
}



/*
equation index: 555
type: SIMPLE_ASSIGN
cond.Cells[1].qdot = cond.Cells[1].heatTransfer.U[1] * (cond.Wall_int.T[1] - cond.Cells[1].T)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,555};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cond.Cells[1].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* cond.Cells[1].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* cond.Wall_int.T[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* cond.Cells[1].T variable */));
  threadData->lastEquationSolved = 555;
}
/*
equation index: 556
type: SIMPLE_ASSIGN
coil_cond.Q_cell[1] = cond.Cells[1].qdot * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,556};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* coil_cond.Q_cell[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cond.Cells[1].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 556;
}
/*
equation index: 557
type: SIMPLE_ASSIGN
coil_cond.T_air[2] = ((T_amb_k * 0.5 - cond.Wall_int.T[1]) * coil_cond.UA_cell - coil_cond.Q_cell[1]) / (coil_cond.UA_cell * (-0.5))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,557};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* coil_cond.T_air[2] variable */) = DIVISION_SIM((((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* T_amb_k PARAM */)) * (0.5) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* cond.Wall_int.T[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* coil_cond.Q_cell[1] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */)) * (-0.5),"coil_cond.UA_cell * (-0.5)",equationIndexes);
  threadData->lastEquationSolved = 557;
}

void residualFunc563(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,563};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* cond.Wall_int.T[1] variable */) = xloc[0];
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_555(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_556(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_557(data, threadData);
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* coil_cond.Q_cell[1] variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* T_amb_k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* coil_cond.T_air[2] variable */))));
  threadData->lastEquationSolved = 558;
  threadData->lastEquationSolved = 563;
}
OMC_DISABLE_OPT
void initializeStaticLSData563(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[1] = {
    -1 /* cond.Wall_int.T[1] */
  };
  for (int i = 0; i < 1; ++i) {
    if (indices[i] == -1) {
      linearSystemData->nominal[i] = 1.0;
      linearSystemData->min[i]     = -DBL_MAX;
      linearSystemData->max[i]     = DBL_MAX;
    } else {
      linearSystemData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->max[i]     = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
    }
  }
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void RefrigerationTrainer_ClosedLoopM1eCS_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[3].equationIndex = 1129;
  linearSystemData[3].size = 1;
  linearSystemData[3].nnz = 0;
  linearSystemData[3].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[3].residualFunc = residualFunc1129;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].analyticalJacobianColumn = RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac8_column;
  linearSystemData[3].initialAnalyticalJacobian = RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianLSJac8;
  linearSystemData[3].jacobianIndex = 6 /*jacInx*/;
  linearSystemData[3].setA = NULL;  //setLinearMatrixA1129;
  linearSystemData[3].setb = NULL;  //setLinearVectorb1129;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData1129;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[2].equationIndex = 849;
  linearSystemData[2].size = 1;
  linearSystemData[2].nnz = 0;
  linearSystemData[2].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[2].residualFunc = residualFunc849;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].analyticalJacobianColumn = RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac6_column;
  linearSystemData[2].initialAnalyticalJacobian = RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianLSJac6;
  linearSystemData[2].jacobianIndex = 4 /*jacInx*/;
  linearSystemData[2].setA = NULL;  //setLinearMatrixA849;
  linearSystemData[2].setb = NULL;  //setLinearVectorb849;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData849;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 590;
  linearSystemData[1].size = 1;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc590;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac2_column;
  linearSystemData[1].initialAnalyticalJacobian = RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianLSJac2;
  linearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA590;
  linearSystemData[1].setb = NULL;  //setLinearVectorb590;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData590;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 563;
  linearSystemData[0].size = 1;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc563;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac1_column;
  linearSystemData[0].initialAnalyticalJacobian = RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianLSJac1;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA563;
  linearSystemData[0].setb = NULL;  //setLinearVectorb563;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData563;
}

#if defined(__cplusplus)
}
#endif
