/* Jacobians 15 */
#include "RefrigerationTrainer.ClosedLoopM1eCS_model.h"
#include "RefrigerationTrainer.ClosedLoopM1eCS_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 559
type: SIMPLE_ASSIGN
cond.Cells.1.qdot.$pDERLSJac1.dummyVarLSJac1 = cond.Cells[1].heatTransfer.U[1] * cond.Wall_int.T.SeedLSJac1[1]
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_559(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,559};
  jacobian->tmpVars[0] /* cond.Cells.1.qdot.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* cond.Cells[1].heatTransfer.U[1] variable */)) * (jacobian->seedVars[0] /* cond.Wall_int.T.SeedLSJac1[1] SEED_VAR */);
  threadData->lastEquationSolved = 559;
}

/*
equation index: 560
type: SIMPLE_ASSIGN
coil_cond.Q_cell.$pDERLSJac1.dummyVarLSJac1[1] = cond.Cells.1.qdot.$pDERLSJac1.dummyVarLSJac1 * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_560(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,560};
  jacobian->tmpVars[1] /* coil_cond.Q_cell.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[0] /* cond.Cells.1.qdot.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 560;
}

/*
equation index: 561
type: SIMPLE_ASSIGN
coil_cond.T_air.$pDERLSJac1.dummyVarLSJac1[2] = ((-cond.Wall_int.T.SeedLSJac1[1]) * coil_cond.UA_cell - coil_cond.Q_cell.$pDERLSJac1.dummyVarLSJac1[1]) / (coil_cond.UA_cell * (-0.5))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_561(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,561};
  jacobian->tmpVars[2] /* coil_cond.T_air.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[0] /* cond.Wall_int.T.SeedLSJac1[1] SEED_VAR */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */)) - jacobian->tmpVars[1] /* coil_cond.Q_cell.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */,((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */)) * (-0.5),"coil_cond.UA_cell * (-0.5)");
  threadData->lastEquationSolved = 561;
}

/*
equation index: 562
type: SIMPLE_ASSIGN
$res_LSJac1_1.$pDERLSJac1.dummyVarLSJac1 = coil_cond.Q_cell.$pDERLSJac1.dummyVarLSJac1[1] + coil_cond.m_dot_air * coil_cond.cp_air * coil_cond.T_air.$pDERLSJac1.dummyVarLSJac1[2]
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_562(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,562};
  jacobian->resultVars[0] /* $res_LSJac1_1.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* coil_cond.Q_cell.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */ + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)) * (jacobian->tmpVars[2] /* coil_cond.T_air.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 562;
}

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac1_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_LSJac1;
  
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac1_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_LSJac1;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_559,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_560,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_561,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_562
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 4; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_JacLSJac1_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {559, 560, 561, 562};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 586
type: SIMPLE_ASSIGN
evap.Cells.1.qdot.$pDERLSJac2.dummyVarLSJac2 = evap.Cells[1].heatTransfer.U[1] * evap.Wall_int.T.SeedLSJac2[1]
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_586(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,586};
  jacobian->tmpVars[0] /* evap.Cells.1.qdot.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_TMP_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* evap.Cells[1].heatTransfer.U[1] variable */)) * (jacobian->seedVars[0] /* evap.Wall_int.T.SeedLSJac2[1] SEED_VAR */);
  threadData->lastEquationSolved = 586;
}

/*
equation index: 587
type: SIMPLE_ASSIGN
coil_evap.Q_cell.$pDERLSJac2.dummyVarLSJac2[1] = evap.Cells.1.qdot.$pDERLSJac2.dummyVarLSJac2 * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_587(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,587};
  jacobian->tmpVars[1] /* coil_evap.Q_cell.$pDERLSJac2.dummyVarLSJac2[1] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[0] /* evap.Cells.1.qdot.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 587;
}

/*
equation index: 588
type: SIMPLE_ASSIGN
coil_evap.T_air.$pDERLSJac2.dummyVarLSJac2[2] = ((-evap.Wall_int.T.SeedLSJac2[1]) * coil_evap.UA_cell - coil_evap.Q_cell.$pDERLSJac2.dummyVarLSJac2[1]) / (coil_evap.UA_cell * (-0.5))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_588(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,588};
  jacobian->tmpVars[2] /* coil_evap.T_air.$pDERLSJac2.dummyVarLSJac2[2] JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[0] /* evap.Wall_int.T.SeedLSJac2[1] SEED_VAR */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */)) - jacobian->tmpVars[1] /* coil_evap.Q_cell.$pDERLSJac2.dummyVarLSJac2[1] JACOBIAN_TMP_VAR */,((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */)) * (-0.5),"coil_evap.UA_cell * (-0.5)");
  threadData->lastEquationSolved = 588;
}

/*
equation index: 589
type: SIMPLE_ASSIGN
$res_LSJac2_1.$pDERLSJac2.dummyVarLSJac2 = coil_evap.Q_cell.$pDERLSJac2.dummyVarLSJac2[1] + coil_evap.m_dot_air * coil_evap.cp_air * coil_evap.T_air.$pDERLSJac2.dummyVarLSJac2[2]
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_589(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,589};
  jacobian->resultVars[0] /* $res_LSJac2_1.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* coil_evap.Q_cell.$pDERLSJac2.dummyVarLSJac2[1] JACOBIAN_TMP_VAR */ + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)) * (jacobian->tmpVars[2] /* coil_evap.T_air.$pDERLSJac2.dummyVarLSJac2[2] JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 589;
}

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac2_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_LSJac2;
  
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac2_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_LSJac2;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_586,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_587,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_588,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_589
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 4; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_JacLSJac2_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {586, 587, 588, 589};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 639
type: SIMPLE_ASSIGN
$DER.evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells[1].rho * $DER.evap.Cells[1].h.SeedNLSJac3
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_639(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,639};
  jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3) JACOBIAN_TMP_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* evap.Cells[1].rho variable */)) * (jacobian->seedVars[0] /* der(evap.Cells[1].h.SeedNLSJac3) SEED_VAR */);
  threadData->lastEquationSolved = 639;
}

/*
equation index: 640
type: SIMPLE_ASSIGN
evap.Cells.1.dMdt.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells[1].Vi * (evap.Cells[1].drdh * $DER.evap.Cells[1].h.SeedNLSJac3 + evap.Cells[1].drdp * $DER.evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_640(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,640};
  jacobian->tmpVars[1] /* evap.Cells.1.dMdt.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* evap.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[943]] /* evap.Cells[1].drdh variable */)) * (jacobian->seedVars[0] /* der(evap.Cells[1].h.SeedNLSJac3) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* evap.Cells[1].drdp variable */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 640;
}

/*
equation index: 641
type: SIMPLE_ASSIGN
evap.Cells.2.InFlow.m_flow.$pDERNLSJac3.dummyVarNLSJac3 = (-evap.Cells.1.dMdt.$pDERNLSJac3.dummyVarNLSJac3) * (*Real*)(evap.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_641(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,641};
  jacobian->tmpVars[7] /* evap.Cells.2.InFlow.m_flow.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = ((-jacobian->tmpVars[1] /* evap.Cells.1.dMdt.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[1].Nt PARAM */)));
  threadData->lastEquationSolved = 641;
}

/*
equation index: 642
type: SIMPLE_ASSIGN
evap.Cells.2.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells.2.InFlow.m_flow.$pDERNLSJac3.dummyVarNLSJac3 / (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_642(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,642};
  jacobian->tmpVars[8] /* evap.Cells.2.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[7] /* evap.Cells.2.InFlow.m_flow.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* evap.Cells[2].Nt PARAM */)),"/*Real*/(evap.Cells[2].Nt)");
  threadData->lastEquationSolved = 642;
}

/*
equation index: 643
type: SIMPLE_ASSIGN
evap.Cells.2.heatTransfer.U.$pDERNLSJac3.dummyVarNLSJac3[1] = 0.8 * evap.Cells[2].heatTransfer.Unom * (1e-6 + (evap.Cells[2].M_dot_su / evap.Cells[2].heatTransfer.Mdotnom) ^ 2.0) ^ (-0.6) * evap.Cells[2].M_dot_su * evap.Cells.2.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 / evap.Cells[2].heatTransfer.Mdotnom ^ 2.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_643(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,643};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  tmp0 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* evap.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* evap.Cells[2].heatTransfer.Mdotnom variable */),"evap.Cells[2].heatTransfer.Mdotnom");
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = -0.6;
  if(tmp1 < 0.0 && tmp2 != 0.0)
  {
    tmp4 = modf(tmp2, &tmp5);
    
    if(tmp4 > 0.5)
    {
      tmp4 -= 1.0;
      tmp5 += 1.0;
    }
    else if(tmp4 < -0.5)
    {
      tmp4 += 1.0;
      tmp5 -= 1.0;
    }
    
    if(fabs(tmp4) < 1e-10)
      tmp3 = pow(tmp1, tmp5);
    else
    {
      tmp7 = modf(1.0/tmp2, &tmp6);
      if(tmp7 > 0.5)
      {
        tmp7 -= 1.0;
        tmp6 += 1.0;
      }
      else if(tmp7 < -0.5)
      {
        tmp7 += 1.0;
        tmp6 -= 1.0;
      }
      if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
      {
        tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
      }
    }
  }
  else
  {
    tmp3 = pow(tmp1, tmp2);
  }
  if(isnan(tmp3) || isinf(tmp3))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
  }tmp8 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* evap.Cells[2].heatTransfer.Mdotnom variable */);
  jacobian->tmpVars[10] /* evap.Cells.2.heatTransfer.U.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* evap.Cells[2].heatTransfer.Unom variable */)) * ((tmp3) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* evap.Cells[2].M_dot_su variable */)) * (DIVISION(jacobian->tmpVars[8] /* evap.Cells.2.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,(tmp8 * tmp8),"evap.Cells[2].heatTransfer.Mdotnom ^ 2.0")))));
  threadData->lastEquationSolved = 643;
}

/*
equation index: 644
type: SIMPLE_ASSIGN
evap.Cells.2.dMdt.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells[2].Vi * (evap.Cells[2].drdh * $DER.evap.Cells[2].h.SeedNLSJac3 + evap.Cells[2].drdp * $DER.evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_644(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,644};
  jacobian->tmpVars[2] /* evap.Cells.2.dMdt.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* evap.Cells[2].drdh variable */)) * (jacobian->seedVars[1] /* der(evap.Cells[2].h.SeedNLSJac3) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* evap.Cells[2].drdp variable */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 644;
}

/*
equation index: 645
type: SIMPLE_ASSIGN
evap.Cells.2.M_dot_ex.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells.2.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 - evap.Cells.2.dMdt.$pDERNLSJac3.dummyVarNLSJac3
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_645(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,645};
  jacobian->tmpVars[12] /* evap.Cells.2.M_dot_ex.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[8] /* evap.Cells.2.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* evap.Cells.2.dMdt.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 645;
}

/*
equation index: 646
type: SIMPLE_ASSIGN
evap.Cells.3.InFlow.m_flow.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells.2.M_dot_ex.$pDERNLSJac3.dummyVarNLSJac3 * (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_646(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,646};
  jacobian->tmpVars[13] /* evap.Cells.3.InFlow.m_flow.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[12] /* evap.Cells.2.M_dot_ex.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* evap.Cells[2].Nt PARAM */)));
  threadData->lastEquationSolved = 646;
}

/*
equation index: 647
type: SIMPLE_ASSIGN
evap.Cells.3.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells.3.InFlow.m_flow.$pDERNLSJac3.dummyVarNLSJac3 / (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_647(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,647};
  jacobian->tmpVars[14] /* evap.Cells.3.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[13] /* evap.Cells.3.InFlow.m_flow.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* evap.Cells[3].Nt PARAM */)),"/*Real*/(evap.Cells[3].Nt)");
  threadData->lastEquationSolved = 647;
}

/*
equation index: 648
type: SIMPLE_ASSIGN
evap.Cells.3.heatTransfer.U.$pDERNLSJac3.dummyVarNLSJac3[1] = 0.8 * evap.Cells[3].heatTransfer.Unom * (1e-6 + (evap.Cells[3].M_dot_su / evap.Cells[3].heatTransfer.Mdotnom) ^ 2.0) ^ (-0.6) * evap.Cells[3].M_dot_su * evap.Cells.3.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 / evap.Cells[3].heatTransfer.Mdotnom ^ 2.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_648(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,648};
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  tmp9 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* evap.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* evap.Cells[3].heatTransfer.Mdotnom variable */),"evap.Cells[3].heatTransfer.Mdotnom");
  tmp10 = 1e-6 + (tmp9 * tmp9);
  tmp11 = -0.6;
  if(tmp10 < 0.0 && tmp11 != 0.0)
  {
    tmp13 = modf(tmp11, &tmp14);
    
    if(tmp13 > 0.5)
    {
      tmp13 -= 1.0;
      tmp14 += 1.0;
    }
    else if(tmp13 < -0.5)
    {
      tmp13 += 1.0;
      tmp14 -= 1.0;
    }
    
    if(fabs(tmp13) < 1e-10)
      tmp12 = pow(tmp10, tmp14);
    else
    {
      tmp16 = modf(1.0/tmp11, &tmp15);
      if(tmp16 > 0.5)
      {
        tmp16 -= 1.0;
        tmp15 += 1.0;
      }
      else if(tmp16 < -0.5)
      {
        tmp16 += 1.0;
        tmp15 -= 1.0;
      }
      if(fabs(tmp16) < 1e-10 && ((unsigned long)tmp15 & 1))
      {
        tmp12 = -pow(-tmp10, tmp13)*pow(tmp10, tmp14);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
      }
    }
  }
  else
  {
    tmp12 = pow(tmp10, tmp11);
  }
  if(isnan(tmp12) || isinf(tmp12))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
  }tmp17 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* evap.Cells[3].heatTransfer.Mdotnom variable */);
  jacobian->tmpVars[15] /* evap.Cells.3.heatTransfer.U.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* evap.Cells[3].heatTransfer.Unom variable */)) * ((tmp12) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* evap.Cells[3].M_dot_su variable */)) * (DIVISION(jacobian->tmpVars[14] /* evap.Cells.3.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,(tmp17 * tmp17),"evap.Cells[3].heatTransfer.Mdotnom ^ 2.0")))));
  threadData->lastEquationSolved = 648;
}

/*
equation index: 649
type: SIMPLE_ASSIGN
evap.Cells.5.dMdt.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells[5].Vi * (evap.Cells[5].drdh * $DER.evap.Cells[5].h.SeedNLSJac3 + evap.Cells[5].drdp * $DER.evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_649(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,649};
  jacobian->tmpVars[3] /* evap.Cells.5.dMdt.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* evap.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* evap.Cells[5].drdh variable */)) * (jacobian->seedVars[2] /* der(evap.Cells[5].h.SeedNLSJac3) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* evap.Cells[5].drdp variable */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 649;
}

/*
equation index: 650
type: SIMPLE_ASSIGN
evap.Cells.4.dMdt.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells[4].Vi * (evap.Cells[4].drdh * $DER.evap.Cells[4].h.SeedNLSJac3 + evap.Cells[4].drdp * $DER.evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_650(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,650};
  jacobian->tmpVars[4] /* evap.Cells.4.dMdt.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[946]] /* evap.Cells[4].drdh variable */)) * (jacobian->seedVars[3] /* der(evap.Cells[4].h.SeedNLSJac3) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[951]] /* evap.Cells[4].drdp variable */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 650;
}

/*
equation index: 651
type: SIMPLE_ASSIGN
evap.Cells.3.dMdt.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells[3].Vi * (evap.Cells[3].drdh * $DER.evap.Cells[3].h.SeedNLSJac3 + evap.Cells[3].drdp * $DER.evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_651(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,651};
  jacobian->tmpVars[5] /* evap.Cells.3.dMdt.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[945]] /* evap.Cells[3].drdh variable */)) * (jacobian->seedVars[4] /* der(evap.Cells[3].h.SeedNLSJac3) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[950]] /* evap.Cells[3].drdp variable */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 651;
}

/*
equation index: 652
type: SIMPLE_ASSIGN
evap.Cells.3.M_dot_ex.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells.3.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 - evap.Cells.3.dMdt.$pDERNLSJac3.dummyVarNLSJac3
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_652(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,652};
  jacobian->tmpVars[18] /* evap.Cells.3.M_dot_ex.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[14] /* evap.Cells.3.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[5] /* evap.Cells.3.dMdt.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 652;
}

/*
equation index: 653
type: SIMPLE_ASSIGN
evap.Cells.4.InFlow.m_flow.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells.3.M_dot_ex.$pDERNLSJac3.dummyVarNLSJac3 * (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_653(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,653};
  jacobian->tmpVars[19] /* evap.Cells.4.InFlow.m_flow.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[18] /* evap.Cells.3.M_dot_ex.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* evap.Cells[3].Nt PARAM */)));
  threadData->lastEquationSolved = 653;
}

/*
equation index: 654
type: SIMPLE_ASSIGN
evap.Cells.4.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells.4.InFlow.m_flow.$pDERNLSJac3.dummyVarNLSJac3 / (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_654(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,654};
  jacobian->tmpVars[20] /* evap.Cells.4.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[19] /* evap.Cells.4.InFlow.m_flow.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* evap.Cells[4].Nt PARAM */)),"/*Real*/(evap.Cells[4].Nt)");
  threadData->lastEquationSolved = 654;
}

/*
equation index: 655
type: SIMPLE_ASSIGN
evap.Cells.4.heatTransfer.U.$pDERNLSJac3.dummyVarNLSJac3[1] = 0.8 * evap.Cells[4].heatTransfer.Unom * (1e-6 + (evap.Cells[4].M_dot_su / evap.Cells[4].heatTransfer.Mdotnom) ^ 2.0) ^ (-0.6) * evap.Cells[4].M_dot_su * evap.Cells.4.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 / evap.Cells[4].heatTransfer.Mdotnom ^ 2.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_655(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,655};
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  tmp18 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* evap.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* evap.Cells[4].heatTransfer.Mdotnom variable */),"evap.Cells[4].heatTransfer.Mdotnom");
  tmp19 = 1e-6 + (tmp18 * tmp18);
  tmp20 = -0.6;
  if(tmp19 < 0.0 && tmp20 != 0.0)
  {
    tmp22 = modf(tmp20, &tmp23);
    
    if(tmp22 > 0.5)
    {
      tmp22 -= 1.0;
      tmp23 += 1.0;
    }
    else if(tmp22 < -0.5)
    {
      tmp22 += 1.0;
      tmp23 -= 1.0;
    }
    
    if(fabs(tmp22) < 1e-10)
      tmp21 = pow(tmp19, tmp23);
    else
    {
      tmp25 = modf(1.0/tmp20, &tmp24);
      if(tmp25 > 0.5)
      {
        tmp25 -= 1.0;
        tmp24 += 1.0;
      }
      else if(tmp25 < -0.5)
      {
        tmp25 += 1.0;
        tmp24 -= 1.0;
      }
      if(fabs(tmp25) < 1e-10 && ((unsigned long)tmp24 & 1))
      {
        tmp21 = -pow(-tmp19, tmp22)*pow(tmp19, tmp23);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp19, tmp20);
      }
    }
  }
  else
  {
    tmp21 = pow(tmp19, tmp20);
  }
  if(isnan(tmp21) || isinf(tmp21))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp19, tmp20);
  }tmp26 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* evap.Cells[4].heatTransfer.Mdotnom variable */);
  jacobian->tmpVars[21] /* evap.Cells.4.heatTransfer.U.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* evap.Cells[4].heatTransfer.Unom variable */)) * ((tmp21) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* evap.Cells[4].M_dot_su variable */)) * (DIVISION(jacobian->tmpVars[20] /* evap.Cells.4.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,(tmp26 * tmp26),"evap.Cells[4].heatTransfer.Mdotnom ^ 2.0")))));
  threadData->lastEquationSolved = 655;
}

/*
equation index: 656
type: SIMPLE_ASSIGN
evap.Cells.4.M_dot_ex.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells.4.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 - evap.Cells.4.dMdt.$pDERNLSJac3.dummyVarNLSJac3
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_656(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,656};
  jacobian->tmpVars[24] /* evap.Cells.4.M_dot_ex.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[20] /* evap.Cells.4.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[4] /* evap.Cells.4.dMdt.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 656;
}

/*
equation index: 657
type: SIMPLE_ASSIGN
evap.Cells.5.InFlow.m_flow.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells.4.M_dot_ex.$pDERNLSJac3.dummyVarNLSJac3 * (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_657(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,657};
  jacobian->tmpVars[25] /* evap.Cells.5.InFlow.m_flow.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[24] /* evap.Cells.4.M_dot_ex.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* evap.Cells[4].Nt PARAM */)));
  threadData->lastEquationSolved = 657;
}

/*
equation index: 658
type: SIMPLE_ASSIGN
evap.Cells.5.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells.5.InFlow.m_flow.$pDERNLSJac3.dummyVarNLSJac3 / (*Real*)(evap.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_658(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,658};
  jacobian->tmpVars[26] /* evap.Cells.5.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[25] /* evap.Cells.5.InFlow.m_flow.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[35]] /* evap.Cells[5].Nt PARAM */)),"/*Real*/(evap.Cells[5].Nt)");
  threadData->lastEquationSolved = 658;
}

/*
equation index: 659
type: SIMPLE_ASSIGN
evap.Cells.5.heatTransfer.U.$pDERNLSJac3.dummyVarNLSJac3[1] = 0.8 * evap.Cells[5].heatTransfer.Unom * (1e-6 + (evap.Cells[5].M_dot_su / evap.Cells[5].heatTransfer.Mdotnom) ^ 2.0) ^ (-0.6) * evap.Cells[5].M_dot_su * evap.Cells.5.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 / evap.Cells[5].heatTransfer.Mdotnom ^ 2.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_659(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,659};
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  tmp27 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* evap.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* evap.Cells[5].heatTransfer.Mdotnom variable */),"evap.Cells[5].heatTransfer.Mdotnom");
  tmp28 = 1e-6 + (tmp27 * tmp27);
  tmp29 = -0.6;
  if(tmp28 < 0.0 && tmp29 != 0.0)
  {
    tmp31 = modf(tmp29, &tmp32);
    
    if(tmp31 > 0.5)
    {
      tmp31 -= 1.0;
      tmp32 += 1.0;
    }
    else if(tmp31 < -0.5)
    {
      tmp31 += 1.0;
      tmp32 -= 1.0;
    }
    
    if(fabs(tmp31) < 1e-10)
      tmp30 = pow(tmp28, tmp32);
    else
    {
      tmp34 = modf(1.0/tmp29, &tmp33);
      if(tmp34 > 0.5)
      {
        tmp34 -= 1.0;
        tmp33 += 1.0;
      }
      else if(tmp34 < -0.5)
      {
        tmp34 += 1.0;
        tmp33 -= 1.0;
      }
      if(fabs(tmp34) < 1e-10 && ((unsigned long)tmp33 & 1))
      {
        tmp30 = -pow(-tmp28, tmp31)*pow(tmp28, tmp32);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp28, tmp29);
      }
    }
  }
  else
  {
    tmp30 = pow(tmp28, tmp29);
  }
  if(isnan(tmp30) || isinf(tmp30))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp28, tmp29);
  }tmp35 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* evap.Cells[5].heatTransfer.Mdotnom variable */);
  jacobian->tmpVars[27] /* evap.Cells.5.heatTransfer.U.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* evap.Cells[5].heatTransfer.Unom variable */)) * ((tmp30) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* evap.Cells[5].M_dot_su variable */)) * (DIVISION(jacobian->tmpVars[26] /* evap.Cells.5.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,(tmp35 * tmp35),"evap.Cells[5].heatTransfer.Mdotnom ^ 2.0")))));
  threadData->lastEquationSolved = 659;
}

/*
equation index: 660
type: SIMPLE_ASSIGN
$res_NLSJac3_1.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells.5.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 - evap.Cells.5.dMdt.$pDERNLSJac3.dummyVarNLSJac3
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_660(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,660};
  jacobian->resultVars[0] /* $res_NLSJac3_1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[26] /* evap.Cells.5.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[3] /* evap.Cells.5.dMdt.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 660;
}

/*
equation index: 661
type: SIMPLE_ASSIGN
evap.Cells.2.Q_tot.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells[2].Vi * evap.Cells[2].rho * $DER.evap.Cells[2].h.SeedNLSJac3 + evap.Cells.2.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 * (evap.Cells[2].h - evap.Cells[1].h) - evap.Cells[2].Vi * $DER.evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_661(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 22;
  const int equationIndexes[2] = {1,661};
  jacobian->tmpVars[9] /* evap.Cells.2.Q_tot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* evap.Cells[2].rho variable */)) * (jacobian->seedVars[1] /* der(evap.Cells[2].h.SeedNLSJac3) SEED_VAR */)) + (jacobian->tmpVars[8] /* evap.Cells.2.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Cells[2].Vi PARAM */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 661;
}

/*
equation index: 662
type: SIMPLE_ASSIGN
evap.Cells.2.qdot.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells.2.Q_tot.$pDERNLSJac3.dummyVarNLSJac3 / evap.Cells[2].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_662(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 23;
  const int equationIndexes[2] = {1,662};
  jacobian->tmpVars[11] /* evap.Cells.2.qdot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[9] /* evap.Cells.2.Q_tot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* evap.Cells[2].Ai PARAM */),"evap.Cells[2].Ai");
  threadData->lastEquationSolved = 662;
}

/*
equation index: 663
type: SIMPLE_ASSIGN
coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[2] = evap.Cells.2.qdot.$pDERNLSJac3.dummyVarNLSJac3 * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_663(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 24;
  const int equationIndexes[2] = {1,663};
  jacobian->tmpVars[30] /* coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[11] /* evap.Cells.2.qdot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 663;
}

/*
equation index: 664
type: SIMPLE_ASSIGN
coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[3] = (-coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[2]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_664(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 25;
  const int equationIndexes[2] = {1,664};
  jacobian->tmpVars[31] /* coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_TMP_VAR */ = DIVISION((-jacobian->tmpVars[30] /* coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_TMP_VAR */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air");
  threadData->lastEquationSolved = 664;
}

/*
equation index: 665
type: SIMPLE_ASSIGN
evap.Wall_int.T.$pDERNLSJac3.dummyVarNLSJac3[2] = 0.5 * coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[3] - coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[2] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_665(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 26;
  const int equationIndexes[2] = {1,665};
  jacobian->tmpVars[32] /* evap.Wall_int.T.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[31] /* coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->tmpVars[30] /* coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell"));
  threadData->lastEquationSolved = 665;
}

/*
equation index: 666
type: SIMPLE_ASSIGN
$res_NLSJac3_4.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells[2].heatTransfer.U[1] * evap.Wall_int.T.$pDERNLSJac3.dummyVarNLSJac3[2] + evap.Cells.2.heatTransfer.U.$pDERNLSJac3.dummyVarNLSJac3[1] * (evap.Wall_int.T[2] - evap.Cells[2].T) - evap.Cells.2.qdot.$pDERNLSJac3.dummyVarNLSJac3
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_666(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 27;
  const int equationIndexes[2] = {1,666};
  jacobian->resultVars[3] /* $res_NLSJac3_4.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* evap.Cells[2].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[32] /* evap.Wall_int.T.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[10] /* evap.Cells.2.heatTransfer.U.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* evap.Wall_int.T[2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* evap.Cells[2].T variable */)) - jacobian->tmpVars[11] /* evap.Cells.2.qdot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 666;
}

/*
equation index: 667
type: SIMPLE_ASSIGN
evap.Cells.3.Q_tot.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells[3].Vi * evap.Cells[3].rho * $DER.evap.Cells[3].h.SeedNLSJac3 + evap.Cells.3.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 * (evap.Cells[3].h - evap.Cells[2].h) - evap.Cells[3].Vi * $DER.evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_667(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 28;
  const int equationIndexes[2] = {1,667};
  jacobian->tmpVars[16] /* evap.Cells.3.Q_tot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* evap.Cells[3].rho variable */)) * (jacobian->seedVars[4] /* der(evap.Cells[3].h.SeedNLSJac3) SEED_VAR */)) + (jacobian->tmpVars[14] /* evap.Cells.3.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Cells[3].Vi PARAM */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 667;
}

/*
equation index: 668
type: SIMPLE_ASSIGN
evap.Cells.3.qdot.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells.3.Q_tot.$pDERNLSJac3.dummyVarNLSJac3 / evap.Cells[3].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_668(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 29;
  const int equationIndexes[2] = {1,668};
  jacobian->tmpVars[17] /* evap.Cells.3.qdot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[16] /* evap.Cells.3.Q_tot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* evap.Cells[3].Ai PARAM */),"evap.Cells[3].Ai");
  threadData->lastEquationSolved = 668;
}

/*
equation index: 669
type: SIMPLE_ASSIGN
coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[3] = evap.Cells.3.qdot.$pDERNLSJac3.dummyVarNLSJac3 * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_669(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 30;
  const int equationIndexes[2] = {1,669};
  jacobian->tmpVars[35] /* coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[17] /* evap.Cells.3.qdot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 669;
}

/*
equation index: 670
type: SIMPLE_ASSIGN
coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[4] = (coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[3] * coil_evap.cp_air * coil_evap.m_dot_air - coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[3]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_670(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 31;
  const int equationIndexes[2] = {1,670};
  jacobian->tmpVars[36] /* coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[4] JACOBIAN_TMP_VAR */ = DIVISION(((jacobian->tmpVars[31] /* coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) - jacobian->tmpVars[35] /* coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_TMP_VAR */,((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air");
  threadData->lastEquationSolved = 670;
}

/*
equation index: 671
type: SIMPLE_ASSIGN
evap.Wall_int.T.$pDERNLSJac3.dummyVarNLSJac3[3] = 0.5 * (coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[3] + coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[4]) - coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[3] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_671(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 32;
  const int equationIndexes[2] = {1,671};
  jacobian->tmpVars[37] /* evap.Wall_int.T.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[31] /* coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_TMP_VAR */ + jacobian->tmpVars[36] /* coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[4] JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->tmpVars[35] /* coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell"));
  threadData->lastEquationSolved = 671;
}

/*
equation index: 672
type: SIMPLE_ASSIGN
$res_NLSJac3_5.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells[3].heatTransfer.U[1] * evap.Wall_int.T.$pDERNLSJac3.dummyVarNLSJac3[3] + evap.Cells.3.heatTransfer.U.$pDERNLSJac3.dummyVarNLSJac3[1] * (evap.Wall_int.T[3] - evap.Cells[3].T) - evap.Cells.3.qdot.$pDERNLSJac3.dummyVarNLSJac3
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_672(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 33;
  const int equationIndexes[2] = {1,672};
  jacobian->resultVars[4] /* $res_NLSJac3_5.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* evap.Cells[3].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[37] /* evap.Wall_int.T.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[15] /* evap.Cells.3.heatTransfer.U.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* evap.Wall_int.T[3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* evap.Cells[3].T variable */)) - jacobian->tmpVars[17] /* evap.Cells.3.qdot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 672;
}

/*
equation index: 673
type: SIMPLE_ASSIGN
evap.Cells.4.Q_tot.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells[4].Vi * evap.Cells[4].rho * $DER.evap.Cells[4].h.SeedNLSJac3 + evap.Cells.4.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 * (evap.Cells[4].h - evap.Cells[3].h) - evap.Cells[4].Vi * $DER.evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_673(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 34;
  const int equationIndexes[2] = {1,673};
  jacobian->tmpVars[22] /* evap.Cells.4.Q_tot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* evap.Cells[4].rho variable */)) * (jacobian->seedVars[3] /* der(evap.Cells[4].h.SeedNLSJac3) SEED_VAR */)) + (jacobian->tmpVars[20] /* evap.Cells.4.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Cells[4].Vi PARAM */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 673;
}

/*
equation index: 674
type: SIMPLE_ASSIGN
evap.Cells.4.qdot.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells.4.Q_tot.$pDERNLSJac3.dummyVarNLSJac3 / evap.Cells[4].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_674(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 35;
  const int equationIndexes[2] = {1,674};
  jacobian->tmpVars[23] /* evap.Cells.4.qdot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[22] /* evap.Cells.4.Q_tot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[107]] /* evap.Cells[4].Ai PARAM */),"evap.Cells[4].Ai");
  threadData->lastEquationSolved = 674;
}

/*
equation index: 675
type: SIMPLE_ASSIGN
coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[4] = evap.Cells.4.qdot.$pDERNLSJac3.dummyVarNLSJac3 * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_675(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 36;
  const int equationIndexes[2] = {1,675};
  jacobian->tmpVars[33] /* coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[4] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[23] /* evap.Cells.4.qdot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 675;
}

/*
equation index: 676
type: SIMPLE_ASSIGN
coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[5] = (coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[4] * coil_evap.cp_air * coil_evap.m_dot_air - coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[4]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_676(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 37;
  const int equationIndexes[2] = {1,676};
  jacobian->tmpVars[38] /* coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[5] JACOBIAN_TMP_VAR */ = DIVISION(((jacobian->tmpVars[36] /* coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[4] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) - jacobian->tmpVars[33] /* coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[4] JACOBIAN_TMP_VAR */,((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air");
  threadData->lastEquationSolved = 676;
}

/*
equation index: 677
type: SIMPLE_ASSIGN
evap.Wall_int.T.$pDERNLSJac3.dummyVarNLSJac3[4] = 0.5 * (coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[4] + coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[5]) - coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[4] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_677(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 38;
  const int equationIndexes[2] = {1,677};
  jacobian->tmpVars[39] /* evap.Wall_int.T.$pDERNLSJac3.dummyVarNLSJac3[4] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[36] /* coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[4] JACOBIAN_TMP_VAR */ + jacobian->tmpVars[38] /* coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[5] JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->tmpVars[33] /* coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[4] JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell"));
  threadData->lastEquationSolved = 677;
}

/*
equation index: 678
type: SIMPLE_ASSIGN
$res_NLSJac3_3.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells[4].heatTransfer.U[1] * evap.Wall_int.T.$pDERNLSJac3.dummyVarNLSJac3[4] + evap.Cells.4.heatTransfer.U.$pDERNLSJac3.dummyVarNLSJac3[1] * (evap.Wall_int.T[4] - evap.Cells[4].T) - evap.Cells.4.qdot.$pDERNLSJac3.dummyVarNLSJac3
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_678(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 39;
  const int equationIndexes[2] = {1,678};
  jacobian->resultVars[2] /* $res_NLSJac3_3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* evap.Cells[4].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[39] /* evap.Wall_int.T.$pDERNLSJac3.dummyVarNLSJac3[4] JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[21] /* evap.Cells.4.heatTransfer.U.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* evap.Wall_int.T[4] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[936]] /* evap.Cells[4].T variable */)) - jacobian->tmpVars[23] /* evap.Cells.4.qdot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 678;
}

/*
equation index: 679
type: SIMPLE_ASSIGN
evap.Cells.5.Q_tot.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells[5].Vi * evap.Cells[5].rho * $DER.evap.Cells[5].h.SeedNLSJac3 + evap.Cells.5.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 * (evap.Cells[5].h - evap.Cells[4].h) - evap.Cells[5].Vi * $DER.evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_679(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 40;
  const int equationIndexes[2] = {1,679};
  jacobian->tmpVars[28] /* evap.Cells.5.Q_tot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* evap.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* evap.Cells[5].rho variable */)) * (jacobian->seedVars[2] /* der(evap.Cells[5].h.SeedNLSJac3) SEED_VAR */)) + (jacobian->tmpVars[26] /* evap.Cells.5.M_dot_su.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* evap.Cells[5].Vi PARAM */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac3.dummyVarNLSJac3) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 679;
}

/*
equation index: 680
type: SIMPLE_ASSIGN
evap.Cells.5.qdot.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells.5.Q_tot.$pDERNLSJac3.dummyVarNLSJac3 / evap.Cells[5].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_680(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 41;
  const int equationIndexes[2] = {1,680};
  jacobian->tmpVars[29] /* evap.Cells.5.qdot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[28] /* evap.Cells.5.Q_tot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* evap.Cells[5].Ai PARAM */),"evap.Cells[5].Ai");
  threadData->lastEquationSolved = 680;
}

/*
equation index: 681
type: SIMPLE_ASSIGN
coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[5] = evap.Cells.5.qdot.$pDERNLSJac3.dummyVarNLSJac3 * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_681(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 42;
  const int equationIndexes[2] = {1,681};
  jacobian->tmpVars[34] /* coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[5] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[29] /* evap.Cells.5.qdot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 681;
}

/*
equation index: 682
type: SIMPLE_ASSIGN
T_air_off_evap_k.$pDERNLSJac3.dummyVarNLSJac3 = (coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[5] * coil_evap.cp_air * coil_evap.m_dot_air - coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[5]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_682(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 43;
  const int equationIndexes[2] = {1,682};
  jacobian->tmpVars[40] /* T_air_off_evap_k.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */ = DIVISION(((jacobian->tmpVars[38] /* coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[5] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) - jacobian->tmpVars[34] /* coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[5] JACOBIAN_TMP_VAR */,((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air");
  threadData->lastEquationSolved = 682;
}

/*
equation index: 683
type: SIMPLE_ASSIGN
evap.Wall_int.T.$pDERNLSJac3.dummyVarNLSJac3[5] = 0.5 * (coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[5] + T_air_off_evap_k.$pDERNLSJac3.dummyVarNLSJac3) - coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[5] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_683(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 44;
  const int equationIndexes[2] = {1,683};
  jacobian->tmpVars[41] /* evap.Wall_int.T.$pDERNLSJac3.dummyVarNLSJac3[5] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[38] /* coil_evap.T_air.$pDERNLSJac3.dummyVarNLSJac3[5] JACOBIAN_TMP_VAR */ + jacobian->tmpVars[40] /* T_air_off_evap_k.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->tmpVars[34] /* coil_evap.Q_cell.$pDERNLSJac3.dummyVarNLSJac3[5] JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell"));
  threadData->lastEquationSolved = 683;
}

/*
equation index: 684
type: SIMPLE_ASSIGN
$res_NLSJac3_2.$pDERNLSJac3.dummyVarNLSJac3 = evap.Cells[5].heatTransfer.U[1] * evap.Wall_int.T.$pDERNLSJac3.dummyVarNLSJac3[5] + evap.Cells.5.heatTransfer.U.$pDERNLSJac3.dummyVarNLSJac3[1] * (evap.Wall_int.T[5] - evap.Cells[5].T) - evap.Cells.5.qdot.$pDERNLSJac3.dummyVarNLSJac3
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_684(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 45;
  const int equationIndexes[2] = {1,684};
  jacobian->resultVars[1] /* $res_NLSJac3_2.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* evap.Cells[5].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[41] /* evap.Wall_int.T.$pDERNLSJac3.dummyVarNLSJac3[5] JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[27] /* evap.Cells.5.heatTransfer.U.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* evap.Wall_int.T[5] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[937]] /* evap.Cells[5].T variable */)) - jacobian->tmpVars[29] /* evap.Cells.5.qdot.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 684;
}

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac3_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_NLSJac3;
  
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac3_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_NLSJac3;
  
  static void (*const eqFunctions[46])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_639,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_640,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_641,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_642,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_643,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_644,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_645,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_646,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_647,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_648,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_649,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_650,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_651,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_652,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_653,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_654,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_655,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_656,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_657,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_658,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_659,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_660,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_661,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_662,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_663,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_664,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_665,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_666,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_667,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_668,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_669,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_670,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_671,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_672,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_673,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_674,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_675,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_676,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_677,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_678,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_679,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_680,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_681,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_682,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_683,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_684
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 46; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_JacNLSJac3_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 736
type: SIMPLE_ASSIGN
$DER.cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[1].rho * $DER.cond.Cells[1].h.SeedNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_736(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,736};
  jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4) JACOBIAN_TMP_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cond.Cells[1].rho variable */)) * (jacobian->seedVars[2] /* der(cond.Cells[1].h.SeedNLSJac4) SEED_VAR */);
  threadData->lastEquationSolved = 736;
}

/*
equation index: 737
type: SIMPLE_ASSIGN
cond.Cells.5.dMdt.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[5].Vi * (cond.Cells[5].drdh * $DER.cond.Cells[5].h.SeedNLSJac4 + cond.Cells[5].drdp * $DER.cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_737(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,737};
  jacobian->tmpVars[1] /* cond.Cells.5.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* cond.Cells[5].drdh variable */)) * (jacobian->seedVars[0] /* der(cond.Cells[5].h.SeedNLSJac4) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cond.Cells[5].drdp variable */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 737;
}

/*
equation index: 738
type: SIMPLE_ASSIGN
cond.Cells.5.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] = 0.8 * cond.Cells[5].heatTransfer.Unom * (1e-6 + (cond.Cells[5].M_dot_su / cond.Cells[5].heatTransfer.Mdotnom) ^ 2.0) ^ (-0.6) * cond.Cells[5].M_dot_su * cond.Cells.5.dMdt.$pDERNLSJac4.dummyVarNLSJac4 / cond.Cells[5].heatTransfer.Mdotnom ^ 2.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_738(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,738};
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  tmp36 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cond.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* cond.Cells[5].heatTransfer.Mdotnom variable */),"cond.Cells[5].heatTransfer.Mdotnom");
  tmp37 = 1e-6 + (tmp36 * tmp36);
  tmp38 = -0.6;
  if(tmp37 < 0.0 && tmp38 != 0.0)
  {
    tmp40 = modf(tmp38, &tmp41);
    
    if(tmp40 > 0.5)
    {
      tmp40 -= 1.0;
      tmp41 += 1.0;
    }
    else if(tmp40 < -0.5)
    {
      tmp40 += 1.0;
      tmp41 -= 1.0;
    }
    
    if(fabs(tmp40) < 1e-10)
      tmp39 = pow(tmp37, tmp41);
    else
    {
      tmp43 = modf(1.0/tmp38, &tmp42);
      if(tmp43 > 0.5)
      {
        tmp43 -= 1.0;
        tmp42 += 1.0;
      }
      else if(tmp43 < -0.5)
      {
        tmp43 += 1.0;
        tmp42 -= 1.0;
      }
      if(fabs(tmp43) < 1e-10 && ((unsigned long)tmp42 & 1))
      {
        tmp39 = -pow(-tmp37, tmp40)*pow(tmp37, tmp41);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp37, tmp38);
      }
    }
  }
  else
  {
    tmp39 = pow(tmp37, tmp38);
  }
  if(isnan(tmp39) || isinf(tmp39))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp37, tmp38);
  }tmp44 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* cond.Cells[5].heatTransfer.Mdotnom variable */);
  jacobian->tmpVars[7] /* cond.Cells.5.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cond.Cells[5].heatTransfer.Unom variable */)) * ((tmp39) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cond.Cells[5].M_dot_su variable */)) * (DIVISION(jacobian->tmpVars[1] /* cond.Cells.5.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,(tmp44 * tmp44),"cond.Cells[5].heatTransfer.Mdotnom ^ 2.0")))));
  threadData->lastEquationSolved = 738;
}

/*
equation index: 739
type: SIMPLE_ASSIGN
cond.Cells.5.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.5.dMdt.$pDERNLSJac4.dummyVarNLSJac4 * (*Real*)(cond.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_739(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,739};
  jacobian->tmpVars[10] /* cond.Cells.5.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[1] /* cond.Cells.5.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* cond.Cells[5].Nt PARAM */)));
  threadData->lastEquationSolved = 739;
}

/*
equation index: 740
type: SIMPLE_ASSIGN
cond.Cells.4.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.5.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 / (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_740(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,740};
  jacobian->tmpVars[11] /* cond.Cells.4.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[10] /* cond.Cells.5.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* cond.Cells[4].Nt PARAM */)),"/*Real*/(cond.Cells[4].Nt)");
  threadData->lastEquationSolved = 740;
}

/*
equation index: 741
type: SIMPLE_ASSIGN
cond.Cells.4.dMdt.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[4].Vi * (cond.Cells[4].drdh * $DER.cond.Cells[4].h.SeedNLSJac4 + cond.Cells[4].drdp * $DER.cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_741(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,741};
  jacobian->tmpVars[2] /* cond.Cells.4.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* cond.Cells[4].drdh variable */)) * (jacobian->seedVars[1] /* der(cond.Cells[4].h.SeedNLSJac4) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cond.Cells[4].drdp variable */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 741;
}

/*
equation index: 742
type: SIMPLE_ASSIGN
cond.Cells.4.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.4.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 + cond.Cells.4.dMdt.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_742(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,742};
  jacobian->tmpVars[12] /* cond.Cells.4.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[11] /* cond.Cells.4.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[2] /* cond.Cells.4.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 742;
}

/*
equation index: 743
type: SIMPLE_ASSIGN
cond.Cells.4.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] = 0.8 * cond.Cells[4].heatTransfer.Unom * (1e-6 + (cond.Cells[4].M_dot_su / cond.Cells[4].heatTransfer.Mdotnom) ^ 2.0) ^ (-0.6) * cond.Cells[4].M_dot_su * cond.Cells.4.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 / cond.Cells[4].heatTransfer.Mdotnom ^ 2.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_743(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,743};
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  tmp45 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cond.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* cond.Cells[4].heatTransfer.Mdotnom variable */),"cond.Cells[4].heatTransfer.Mdotnom");
  tmp46 = 1e-6 + (tmp45 * tmp45);
  tmp47 = -0.6;
  if(tmp46 < 0.0 && tmp47 != 0.0)
  {
    tmp49 = modf(tmp47, &tmp50);
    
    if(tmp49 > 0.5)
    {
      tmp49 -= 1.0;
      tmp50 += 1.0;
    }
    else if(tmp49 < -0.5)
    {
      tmp49 += 1.0;
      tmp50 -= 1.0;
    }
    
    if(fabs(tmp49) < 1e-10)
      tmp48 = pow(tmp46, tmp50);
    else
    {
      tmp52 = modf(1.0/tmp47, &tmp51);
      if(tmp52 > 0.5)
      {
        tmp52 -= 1.0;
        tmp51 += 1.0;
      }
      else if(tmp52 < -0.5)
      {
        tmp52 += 1.0;
        tmp51 -= 1.0;
      }
      if(fabs(tmp52) < 1e-10 && ((unsigned long)tmp51 & 1))
      {
        tmp48 = -pow(-tmp46, tmp49)*pow(tmp46, tmp50);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp46, tmp47);
      }
    }
  }
  else
  {
    tmp48 = pow(tmp46, tmp47);
  }
  if(isnan(tmp48) || isinf(tmp48))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp46, tmp47);
  }tmp53 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* cond.Cells[4].heatTransfer.Mdotnom variable */);
  jacobian->tmpVars[14] /* cond.Cells.4.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* cond.Cells[4].heatTransfer.Unom variable */)) * ((tmp48) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cond.Cells[4].M_dot_su variable */)) * (DIVISION(jacobian->tmpVars[12] /* cond.Cells.4.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,(tmp53 * tmp53),"cond.Cells[4].heatTransfer.Mdotnom ^ 2.0")))));
  threadData->lastEquationSolved = 743;
}

/*
equation index: 744
type: SIMPLE_ASSIGN
cond.Cells.4.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.4.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 * (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_744(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,744};
  jacobian->tmpVars[15] /* cond.Cells.4.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[12] /* cond.Cells.4.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* cond.Cells[4].Nt PARAM */)));
  threadData->lastEquationSolved = 744;
}

/*
equation index: 745
type: SIMPLE_ASSIGN
cond.Cells.3.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.4.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 / (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_745(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,745};
  jacobian->tmpVars[16] /* cond.Cells.3.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[15] /* cond.Cells.4.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* cond.Cells[3].Nt PARAM */)),"/*Real*/(cond.Cells[3].Nt)");
  threadData->lastEquationSolved = 745;
}

/*
equation index: 746
type: SIMPLE_ASSIGN
cond.Cells.1.dMdt.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[1].Vi * (cond.Cells[1].drdh * $DER.cond.Cells[1].h.SeedNLSJac4 + cond.Cells[1].drdp * $DER.cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_746(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,746};
  jacobian->tmpVars[3] /* cond.Cells.1.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* cond.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* cond.Cells[1].drdh variable */)) * (jacobian->seedVars[2] /* der(cond.Cells[1].h.SeedNLSJac4) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* cond.Cells[1].drdp variable */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 746;
}

/*
equation index: 747
type: SIMPLE_ASSIGN
cond.Cells.2.dMdt.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[2].Vi * (cond.Cells[2].drdh * $DER.cond.Cells[2].h.SeedNLSJac4 + cond.Cells[2].drdp * $DER.cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_747(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,747};
  jacobian->tmpVars[4] /* cond.Cells.2.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[670]] /* cond.Cells[2].drdh variable */)) * (jacobian->seedVars[3] /* der(cond.Cells[2].h.SeedNLSJac4) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* cond.Cells[2].drdp variable */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 747;
}

/*
equation index: 748
type: SIMPLE_ASSIGN
cond.Cells.3.dMdt.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[3].Vi * (cond.Cells[3].drdh * $DER.cond.Cells[3].h.SeedNLSJac4 + cond.Cells[3].drdp * $DER.cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_748(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,748};
  jacobian->tmpVars[5] /* cond.Cells.3.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* cond.Cells[3].drdh variable */)) * (jacobian->seedVars[4] /* der(cond.Cells[3].h.SeedNLSJac4) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* cond.Cells[3].drdp variable */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 748;
}

/*
equation index: 749
type: SIMPLE_ASSIGN
cond.Cells.3.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.3.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 + cond.Cells.3.dMdt.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_749(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,749};
  jacobian->tmpVars[18] /* cond.Cells.3.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[16] /* cond.Cells.3.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[5] /* cond.Cells.3.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 749;
}

/*
equation index: 750
type: SIMPLE_ASSIGN
cond.Cells.3.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] = 0.8 * cond.Cells[3].heatTransfer.Unom * (1e-6 + (cond.Cells[3].M_dot_su / cond.Cells[3].heatTransfer.Mdotnom) ^ 2.0) ^ (-0.6) * cond.Cells[3].M_dot_su * cond.Cells.3.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 / cond.Cells[3].heatTransfer.Mdotnom ^ 2.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_750(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,750};
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  tmp54 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cond.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cond.Cells[3].heatTransfer.Mdotnom variable */),"cond.Cells[3].heatTransfer.Mdotnom");
  tmp55 = 1e-6 + (tmp54 * tmp54);
  tmp56 = -0.6;
  if(tmp55 < 0.0 && tmp56 != 0.0)
  {
    tmp58 = modf(tmp56, &tmp59);
    
    if(tmp58 > 0.5)
    {
      tmp58 -= 1.0;
      tmp59 += 1.0;
    }
    else if(tmp58 < -0.5)
    {
      tmp58 += 1.0;
      tmp59 -= 1.0;
    }
    
    if(fabs(tmp58) < 1e-10)
      tmp57 = pow(tmp55, tmp59);
    else
    {
      tmp61 = modf(1.0/tmp56, &tmp60);
      if(tmp61 > 0.5)
      {
        tmp61 -= 1.0;
        tmp60 += 1.0;
      }
      else if(tmp61 < -0.5)
      {
        tmp61 += 1.0;
        tmp60 -= 1.0;
      }
      if(fabs(tmp61) < 1e-10 && ((unsigned long)tmp60 & 1))
      {
        tmp57 = -pow(-tmp55, tmp58)*pow(tmp55, tmp59);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp55, tmp56);
      }
    }
  }
  else
  {
    tmp57 = pow(tmp55, tmp56);
  }
  if(isnan(tmp57) || isinf(tmp57))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp55, tmp56);
  }tmp62 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cond.Cells[3].heatTransfer.Mdotnom variable */);
  jacobian->tmpVars[19] /* cond.Cells.3.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cond.Cells[3].heatTransfer.Unom variable */)) * ((tmp57) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cond.Cells[3].M_dot_su variable */)) * (DIVISION(jacobian->tmpVars[18] /* cond.Cells.3.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,(tmp62 * tmp62),"cond.Cells[3].heatTransfer.Mdotnom ^ 2.0")))));
  threadData->lastEquationSolved = 750;
}

/*
equation index: 751
type: SIMPLE_ASSIGN
cond.Cells.3.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.3.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 * (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_751(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,751};
  jacobian->tmpVars[21] /* cond.Cells.3.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[18] /* cond.Cells.3.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* cond.Cells[3].Nt PARAM */)));
  threadData->lastEquationSolved = 751;
}

/*
equation index: 752
type: SIMPLE_ASSIGN
cond.Cells.2.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.3.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 / (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_752(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,752};
  jacobian->tmpVars[22] /* cond.Cells.2.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[21] /* cond.Cells.3.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* cond.Cells[2].Nt PARAM */)),"/*Real*/(cond.Cells[2].Nt)");
  threadData->lastEquationSolved = 752;
}

/*
equation index: 753
type: SIMPLE_ASSIGN
cond.Cells.2.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.2.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 + cond.Cells.2.dMdt.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_753(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,753};
  jacobian->tmpVars[24] /* cond.Cells.2.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[22] /* cond.Cells.2.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[4] /* cond.Cells.2.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 753;
}

/*
equation index: 754
type: SIMPLE_ASSIGN
cond.Cells.2.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] = 0.8 * cond.Cells[2].heatTransfer.Unom * (1e-6 + (cond.Cells[2].M_dot_su / cond.Cells[2].heatTransfer.Mdotnom) ^ 2.0) ^ (-0.6) * cond.Cells[2].M_dot_su * cond.Cells.2.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 / cond.Cells[2].heatTransfer.Mdotnom ^ 2.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_754(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,754};
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_real tmp71;
  tmp63 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cond.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cond.Cells[2].heatTransfer.Mdotnom variable */),"cond.Cells[2].heatTransfer.Mdotnom");
  tmp64 = 1e-6 + (tmp63 * tmp63);
  tmp65 = -0.6;
  if(tmp64 < 0.0 && tmp65 != 0.0)
  {
    tmp67 = modf(tmp65, &tmp68);
    
    if(tmp67 > 0.5)
    {
      tmp67 -= 1.0;
      tmp68 += 1.0;
    }
    else if(tmp67 < -0.5)
    {
      tmp67 += 1.0;
      tmp68 -= 1.0;
    }
    
    if(fabs(tmp67) < 1e-10)
      tmp66 = pow(tmp64, tmp68);
    else
    {
      tmp70 = modf(1.0/tmp65, &tmp69);
      if(tmp70 > 0.5)
      {
        tmp70 -= 1.0;
        tmp69 += 1.0;
      }
      else if(tmp70 < -0.5)
      {
        tmp70 += 1.0;
        tmp69 -= 1.0;
      }
      if(fabs(tmp70) < 1e-10 && ((unsigned long)tmp69 & 1))
      {
        tmp66 = -pow(-tmp64, tmp67)*pow(tmp64, tmp68);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp64, tmp65);
      }
    }
  }
  else
  {
    tmp66 = pow(tmp64, tmp65);
  }
  if(isnan(tmp66) || isinf(tmp66))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp64, tmp65);
  }tmp71 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cond.Cells[2].heatTransfer.Mdotnom variable */);
  jacobian->tmpVars[25] /* cond.Cells.2.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* cond.Cells[2].heatTransfer.Unom variable */)) * ((tmp66) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cond.Cells[2].M_dot_su variable */)) * (DIVISION(jacobian->tmpVars[24] /* cond.Cells.2.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,(tmp71 * tmp71),"cond.Cells[2].heatTransfer.Mdotnom ^ 2.0")))));
  threadData->lastEquationSolved = 754;
}

/*
equation index: 755
type: SIMPLE_ASSIGN
cond.Cells.2.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.2.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 * (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_755(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,755};
  jacobian->tmpVars[27] /* cond.Cells.2.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[24] /* cond.Cells.2.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* cond.Cells[2].Nt PARAM */)));
  threadData->lastEquationSolved = 755;
}

/*
equation index: 756
type: SIMPLE_ASSIGN
cond.Cells.1.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.2.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 / (*Real*)(cond.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_756(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,756};
  jacobian->tmpVars[28] /* cond.Cells.1.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[27] /* cond.Cells.2.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[1].Nt PARAM */)),"/*Real*/(cond.Cells[1].Nt)");
  threadData->lastEquationSolved = 756;
}

/*
equation index: 757
type: SIMPLE_ASSIGN
$res_NLSJac4_4.$pDERNLSJac4.dummyVarNLSJac4 = (-cond.Cells.1.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4) - cond.Cells.1.dMdt.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_757(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,757};
  jacobian->resultVars[3] /* $res_NLSJac4_4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (-jacobian->tmpVars[28] /* cond.Cells.1.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[3] /* cond.Cells.1.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 757;
}

/*
equation index: 758
type: SIMPLE_ASSIGN
cond.Cells.5.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[5].Vi * cond.Cells[5].rho * $DER.cond.Cells[5].h.SeedNLSJac4 + cond.Cells.5.dMdt.$pDERNLSJac4.dummyVarNLSJac4 * (cond.Cells[5].h - cond.Cells[4].h) - cond.Cells[5].Vi * $DER.cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_758(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 22;
  const int equationIndexes[2] = {1,758};
  jacobian->tmpVars[8] /* cond.Cells.5.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cond.Cells[5].rho variable */)) * (jacobian->seedVars[0] /* der(cond.Cells[5].h.SeedNLSJac4) SEED_VAR */)) + (jacobian->tmpVars[1] /* cond.Cells.5.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Cells[5].Vi PARAM */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 758;
}

/*
equation index: 759
type: SIMPLE_ASSIGN
cond.Cells.5.qdot.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.5.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 / cond.Cells[5].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_759(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 23;
  const int equationIndexes[2] = {1,759};
  jacobian->tmpVars[9] /* cond.Cells.5.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[8] /* cond.Cells.5.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* cond.Cells[5].Ai PARAM */),"cond.Cells[5].Ai");
  threadData->lastEquationSolved = 759;
}

/*
equation index: 760
type: SIMPLE_ASSIGN
coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[5] = cond.Cells.5.qdot.$pDERNLSJac4.dummyVarNLSJac4 * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_760(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 24;
  const int equationIndexes[2] = {1,760};
  jacobian->tmpVars[30] /* coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[5] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[9] /* cond.Cells.5.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 760;
}

/*
equation index: 761
type: SIMPLE_ASSIGN
cond.Cells.4.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[4].Vi * cond.Cells[4].rho * $DER.cond.Cells[4].h.SeedNLSJac4 + cond.Cells.4.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 * (cond.Cells[4].h - cond.Cells[3].h) - cond.Cells[4].Vi * $DER.cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_761(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 25;
  const int equationIndexes[2] = {1,761};
  jacobian->tmpVars[13] /* cond.Cells.4.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cond.Cells[4].rho variable */)) * (jacobian->seedVars[1] /* der(cond.Cells[4].h.SeedNLSJac4) SEED_VAR */)) + (jacobian->tmpVars[12] /* cond.Cells.4.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Cells[4].Vi PARAM */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 761;
}

/*
equation index: 762
type: SIMPLE_ASSIGN
cond.Cells.4.qdot.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.4.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 / cond.Cells[4].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_762(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 26;
  const int equationIndexes[2] = {1,762};
  jacobian->tmpVars[17] /* cond.Cells.4.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[13] /* cond.Cells.4.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[36]] /* cond.Cells[4].Ai PARAM */),"cond.Cells[4].Ai");
  threadData->lastEquationSolved = 762;
}

/*
equation index: 763
type: SIMPLE_ASSIGN
coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[4] = cond.Cells.4.qdot.$pDERNLSJac4.dummyVarNLSJac4 * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_763(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 27;
  const int equationIndexes[2] = {1,763};
  jacobian->tmpVars[32] /* coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[4] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[17] /* cond.Cells.4.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 763;
}

/*
equation index: 764
type: SIMPLE_ASSIGN
cond.Cells.3.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[3].Vi * cond.Cells[3].rho * $DER.cond.Cells[3].h.SeedNLSJac4 + cond.Cells.3.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 * (cond.Cells[3].h - cond.Cells[2].h) - cond.Cells[3].Vi * $DER.cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_764(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 28;
  const int equationIndexes[2] = {1,764};
  jacobian->tmpVars[20] /* cond.Cells.3.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cond.Cells[3].rho variable */)) * (jacobian->seedVars[4] /* der(cond.Cells[3].h.SeedNLSJac4) SEED_VAR */)) + (jacobian->tmpVars[18] /* cond.Cells.3.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Cells[3].Vi PARAM */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 764;
}

/*
equation index: 765
type: SIMPLE_ASSIGN
cond.Cells.3.qdot.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.3.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 / cond.Cells[3].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_765(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 29;
  const int equationIndexes[2] = {1,765};
  jacobian->tmpVars[23] /* cond.Cells.3.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[20] /* cond.Cells.3.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[35]] /* cond.Cells[3].Ai PARAM */),"cond.Cells[3].Ai");
  threadData->lastEquationSolved = 765;
}

/*
equation index: 766
type: SIMPLE_ASSIGN
coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[3] = cond.Cells.3.qdot.$pDERNLSJac4.dummyVarNLSJac4 * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_766(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 30;
  const int equationIndexes[2] = {1,766};
  jacobian->tmpVars[31] /* coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[23] /* cond.Cells.3.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 766;
}

/*
equation index: 767
type: SIMPLE_ASSIGN
cond.Cells.2.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[2].Vi * cond.Cells[2].rho * $DER.cond.Cells[2].h.SeedNLSJac4 + cond.Cells.2.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 * (cond.Cells[2].h - cond.Cells[1].h) - cond.Cells[2].Vi * $DER.cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_767(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 31;
  const int equationIndexes[2] = {1,767};
  jacobian->tmpVars[26] /* cond.Cells.2.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cond.Cells[2].rho variable */)) * (jacobian->seedVars[3] /* der(cond.Cells[2].h.SeedNLSJac4) SEED_VAR */)) + (jacobian->tmpVars[24] /* cond.Cells.2.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Cells[2].Vi PARAM */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac4.dummyVarNLSJac4) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 767;
}

/*
equation index: 768
type: SIMPLE_ASSIGN
cond.Cells.2.qdot.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.2.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 / cond.Cells[2].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_768(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 32;
  const int equationIndexes[2] = {1,768};
  jacobian->tmpVars[29] /* cond.Cells.2.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[26] /* cond.Cells.2.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[34]] /* cond.Cells[2].Ai PARAM */),"cond.Cells[2].Ai");
  threadData->lastEquationSolved = 768;
}

/*
equation index: 769
type: SIMPLE_ASSIGN
coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[2] = cond.Cells.2.qdot.$pDERNLSJac4.dummyVarNLSJac4 * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_769(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 33;
  const int equationIndexes[2] = {1,769};
  jacobian->tmpVars[33] /* coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[29] /* cond.Cells.2.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 769;
}

/*
equation index: 770
type: SIMPLE_ASSIGN
coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[3] = (-coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[2]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_770(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 34;
  const int equationIndexes[2] = {1,770};
  jacobian->tmpVars[34] /* coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_TMP_VAR */ = DIVISION((-jacobian->tmpVars[33] /* coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_TMP_VAR */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air");
  threadData->lastEquationSolved = 770;
}

/*
equation index: 771
type: SIMPLE_ASSIGN
coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[4] = (coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[3] * coil_cond.cp_air * coil_cond.m_dot_air - coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[3]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_771(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 35;
  const int equationIndexes[2] = {1,771};
  jacobian->tmpVars[35] /* coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[4] JACOBIAN_TMP_VAR */ = DIVISION(((jacobian->tmpVars[34] /* coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) - jacobian->tmpVars[31] /* coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_TMP_VAR */,((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air");
  threadData->lastEquationSolved = 771;
}

/*
equation index: 772
type: SIMPLE_ASSIGN
coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[5] = (coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[4] * coil_cond.cp_air * coil_cond.m_dot_air - coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[4]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_772(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 36;
  const int equationIndexes[2] = {1,772};
  jacobian->tmpVars[37] /* coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[5] JACOBIAN_TMP_VAR */ = DIVISION(((jacobian->tmpVars[35] /* coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[4] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) - jacobian->tmpVars[32] /* coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[4] JACOBIAN_TMP_VAR */,((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air");
  threadData->lastEquationSolved = 772;
}

/*
equation index: 773
type: SIMPLE_ASSIGN
T_air_off_cond_k.$pDERNLSJac4.dummyVarNLSJac4 = (coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[5] * coil_cond.cp_air * coil_cond.m_dot_air - coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[5]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_773(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 37;
  const int equationIndexes[2] = {1,773};
  jacobian->tmpVars[39] /* T_air_off_cond_k.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = DIVISION(((jacobian->tmpVars[37] /* coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[5] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) - jacobian->tmpVars[30] /* coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[5] JACOBIAN_TMP_VAR */,((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air");
  threadData->lastEquationSolved = 773;
}

/*
equation index: 774
type: SIMPLE_ASSIGN
cond.Wall_int.T.$pDERNLSJac4.dummyVarNLSJac4[5] = 0.5 * (coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[5] + T_air_off_cond_k.$pDERNLSJac4.dummyVarNLSJac4) - coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[5] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_774(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 38;
  const int equationIndexes[2] = {1,774};
  jacobian->tmpVars[40] /* cond.Wall_int.T.$pDERNLSJac4.dummyVarNLSJac4[5] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[37] /* coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[5] JACOBIAN_TMP_VAR */ + jacobian->tmpVars[39] /* T_air_off_cond_k.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->tmpVars[30] /* coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[5] JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell"));
  threadData->lastEquationSolved = 774;
}

/*
equation index: 775
type: SIMPLE_ASSIGN
$res_NLSJac4_5.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[5].heatTransfer.U[1] * cond.Wall_int.T.$pDERNLSJac4.dummyVarNLSJac4[5] + cond.Cells.5.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] * (cond.Wall_int.T[5] - cond.Cells[5].T) - cond.Cells.5.qdot.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_775(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 39;
  const int equationIndexes[2] = {1,775};
  jacobian->resultVars[4] /* $res_NLSJac4_5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cond.Cells[5].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[40] /* cond.Wall_int.T.$pDERNLSJac4.dummyVarNLSJac4[5] JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[7] /* cond.Cells.5.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* cond.Wall_int.T[5] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* cond.Cells[5].T variable */)) - jacobian->tmpVars[9] /* cond.Cells.5.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 775;
}

/*
equation index: 776
type: SIMPLE_ASSIGN
cond.Wall_int.T.$pDERNLSJac4.dummyVarNLSJac4[4] = 0.5 * (coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[4] + coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[5]) - coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[4] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_776(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 40;
  const int equationIndexes[2] = {1,776};
  jacobian->tmpVars[38] /* cond.Wall_int.T.$pDERNLSJac4.dummyVarNLSJac4[4] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[35] /* coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[4] JACOBIAN_TMP_VAR */ + jacobian->tmpVars[37] /* coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[5] JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->tmpVars[32] /* coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[4] JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell"));
  threadData->lastEquationSolved = 776;
}

/*
equation index: 777
type: SIMPLE_ASSIGN
$res_NLSJac4_1.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[4].heatTransfer.U[1] * cond.Wall_int.T.$pDERNLSJac4.dummyVarNLSJac4[4] + cond.Cells.4.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] * (cond.Wall_int.T[4] - cond.Cells[4].T) - cond.Cells.4.qdot.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_777(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 41;
  const int equationIndexes[2] = {1,777};
  jacobian->resultVars[0] /* $res_NLSJac4_1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cond.Cells[4].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[38] /* cond.Wall_int.T.$pDERNLSJac4.dummyVarNLSJac4[4] JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[14] /* cond.Cells.4.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* cond.Wall_int.T[4] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[662]] /* cond.Cells[4].T variable */)) - jacobian->tmpVars[17] /* cond.Cells.4.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 777;
}

/*
equation index: 778
type: SIMPLE_ASSIGN
cond.Wall_int.T.$pDERNLSJac4.dummyVarNLSJac4[3] = 0.5 * (coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[3] + coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[4]) - coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[3] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_778(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 42;
  const int equationIndexes[2] = {1,778};
  jacobian->tmpVars[36] /* cond.Wall_int.T.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[34] /* coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_TMP_VAR */ + jacobian->tmpVars[35] /* coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[4] JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->tmpVars[31] /* coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell"));
  threadData->lastEquationSolved = 778;
}

/*
equation index: 779
type: SIMPLE_ASSIGN
$res_NLSJac4_2.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[3].heatTransfer.U[1] * cond.Wall_int.T.$pDERNLSJac4.dummyVarNLSJac4[3] + cond.Cells.3.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] * (cond.Wall_int.T[3] - cond.Cells[3].T) - cond.Cells.3.qdot.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_779(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 43;
  const int equationIndexes[2] = {1,779};
  jacobian->resultVars[1] /* $res_NLSJac4_2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cond.Cells[3].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[36] /* cond.Wall_int.T.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[19] /* cond.Cells.3.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* cond.Wall_int.T[3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* cond.Cells[3].T variable */)) - jacobian->tmpVars[23] /* cond.Cells.3.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 779;
}

/*
equation index: 780
type: SIMPLE_ASSIGN
cond.Wall_int.T.$pDERNLSJac4.dummyVarNLSJac4[2] = 0.5 * coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[3] - coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[2] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_780(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 44;
  const int equationIndexes[2] = {1,780};
  jacobian->tmpVars[41] /* cond.Wall_int.T.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[34] /* coil_cond.T_air.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->tmpVars[33] /* coil_cond.Q_cell.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell"));
  threadData->lastEquationSolved = 780;
}

/*
equation index: 781
type: SIMPLE_ASSIGN
$res_NLSJac4_3.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[2].heatTransfer.U[1] * cond.Wall_int.T.$pDERNLSJac4.dummyVarNLSJac4[2] + cond.Cells.2.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] * (cond.Wall_int.T[2] - cond.Cells[2].T) - cond.Cells.2.qdot.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_781(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 45;
  const int equationIndexes[2] = {1,781};
  jacobian->resultVars[2] /* $res_NLSJac4_3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* cond.Cells[2].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[41] /* cond.Wall_int.T.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[25] /* cond.Cells.2.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* cond.Wall_int.T[2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[660]] /* cond.Cells[2].T variable */)) - jacobian->tmpVars[29] /* cond.Cells.2.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 781;
}

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac4_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_NLSJac4;
  
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac4_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_NLSJac4;
  
  static void (*const eqFunctions[46])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_736,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_737,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_738,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_739,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_740,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_741,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_742,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_743,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_744,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_745,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_746,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_747,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_748,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_749,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_750,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_751,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_752,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_753,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_754,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_755,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_756,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_757,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_758,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_759,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_760,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_761,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_762,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_763,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_764,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_765,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_766,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_767,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_768,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_769,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_770,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_771,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_772,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_773,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_774,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_775,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_776,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_777,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_778,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_779,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_780,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_781
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 46; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_JacNLSJac4_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 845
type: SIMPLE_ASSIGN
coil_cond.T_air.$pDERLSJac6.dummyVarLSJac6[2] = (-coil_cond.Q_cell.SeedLSJac6[1]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_845(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,845};
  jacobian->tmpVars[0] /* coil_cond.T_air.$pDERLSJac6.dummyVarLSJac6[2] JACOBIAN_TMP_VAR */ = DIVISION((-jacobian->seedVars[0] /* coil_cond.Q_cell.SeedLSJac6[1] SEED_VAR */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air");
  threadData->lastEquationSolved = 845;
}

/*
equation index: 846
type: SIMPLE_ASSIGN
cond.Wall_int.T.$pDERLSJac6.dummyVarLSJac6[1] = 0.5 * coil_cond.T_air.$pDERLSJac6.dummyVarLSJac6[2] - coil_cond.Q_cell.SeedLSJac6[1] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_846(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,846};
  jacobian->tmpVars[1] /* cond.Wall_int.T.$pDERLSJac6.dummyVarLSJac6[1] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[0] /* coil_cond.T_air.$pDERLSJac6.dummyVarLSJac6[2] JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->seedVars[0] /* coil_cond.Q_cell.SeedLSJac6[1] SEED_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell"));
  threadData->lastEquationSolved = 846;
}

/*
equation index: 847
type: SIMPLE_ASSIGN
cond.Cells.1.qdot.$pDERLSJac6.dummyVarLSJac6 = cond.Cells[1].heatTransfer.U[1] * cond.Wall_int.T.$pDERLSJac6.dummyVarLSJac6[1]
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_847(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,847};
  jacobian->tmpVars[2] /* cond.Cells.1.qdot.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_TMP_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* cond.Cells[1].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[1] /* cond.Wall_int.T.$pDERLSJac6.dummyVarLSJac6[1] JACOBIAN_TMP_VAR */);
  threadData->lastEquationSolved = 847;
}

/*
equation index: 848
type: SIMPLE_ASSIGN
$res_LSJac6_1.$pDERLSJac6.dummyVarLSJac6 = cond.Cells.1.qdot.$pDERLSJac6.dummyVarLSJac6 * coil_cond.A_cell - coil_cond.Q_cell.SeedLSJac6[1]
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_848(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,848};
  jacobian->resultVars[0] /* $res_LSJac6_1.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_VAR */ = (jacobian->tmpVars[2] /* cond.Cells.1.qdot.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */)) - jacobian->seedVars[0] /* coil_cond.Q_cell.SeedLSJac6[1] SEED_VAR */;
  threadData->lastEquationSolved = 848;
}

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac6_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_LSJac6;
  
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac6_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_LSJac6;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_845,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_846,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_847,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_848
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 4; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_JacLSJac6_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {845, 846, 847, 848};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 1039
type: SIMPLE_ASSIGN
$DER.cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells[1].rho * $DER.cond.Cells[1].h.SeedNLSJac7
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1039(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1039};
  jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7) JACOBIAN_TMP_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cond.Cells[1].rho variable */)) * (jacobian->seedVars[4] /* der(cond.Cells[1].h.SeedNLSJac7) SEED_VAR */);
  threadData->lastEquationSolved = 1039;
}

/*
equation index: 1040
type: SIMPLE_ASSIGN
cond.Cells.5.dMdt.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells[5].Vi * (cond.Cells[5].drdh * $DER.cond.Cells[5].h.SeedNLSJac7 + cond.Cells[5].drdp * $DER.cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1040(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1040};
  jacobian->tmpVars[1] /* cond.Cells.5.dMdt.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* cond.Cells[5].drdh variable */)) * (jacobian->seedVars[0] /* der(cond.Cells[5].h.SeedNLSJac7) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cond.Cells[5].drdp variable */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1040;
}

/*
equation index: 1041
type: SIMPLE_ASSIGN
cond.Cells.5.heatTransfer.U.$pDERNLSJac7.dummyVarNLSJac7[1] = 0.8 * cond.Cells[5].heatTransfer.Unom * (1e-6 + (cond.Cells[5].M_dot_su / cond.Cells[5].heatTransfer.Mdotnom) ^ 2.0) ^ (-0.6) * cond.Cells[5].M_dot_su * cond.Cells.5.dMdt.$pDERNLSJac7.dummyVarNLSJac7 / cond.Cells[5].heatTransfer.Mdotnom ^ 2.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1041(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1041};
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  tmp72 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cond.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* cond.Cells[5].heatTransfer.Mdotnom variable */),"cond.Cells[5].heatTransfer.Mdotnom");
  tmp73 = 1e-6 + (tmp72 * tmp72);
  tmp74 = -0.6;
  if(tmp73 < 0.0 && tmp74 != 0.0)
  {
    tmp76 = modf(tmp74, &tmp77);
    
    if(tmp76 > 0.5)
    {
      tmp76 -= 1.0;
      tmp77 += 1.0;
    }
    else if(tmp76 < -0.5)
    {
      tmp76 += 1.0;
      tmp77 -= 1.0;
    }
    
    if(fabs(tmp76) < 1e-10)
      tmp75 = pow(tmp73, tmp77);
    else
    {
      tmp79 = modf(1.0/tmp74, &tmp78);
      if(tmp79 > 0.5)
      {
        tmp79 -= 1.0;
        tmp78 += 1.0;
      }
      else if(tmp79 < -0.5)
      {
        tmp79 += 1.0;
        tmp78 -= 1.0;
      }
      if(fabs(tmp79) < 1e-10 && ((unsigned long)tmp78 & 1))
      {
        tmp75 = -pow(-tmp73, tmp76)*pow(tmp73, tmp77);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp73, tmp74);
      }
    }
  }
  else
  {
    tmp75 = pow(tmp73, tmp74);
  }
  if(isnan(tmp75) || isinf(tmp75))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp73, tmp74);
  }tmp80 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* cond.Cells[5].heatTransfer.Mdotnom variable */);
  jacobian->tmpVars[8] /* cond.Cells.5.heatTransfer.U.$pDERNLSJac7.dummyVarNLSJac7[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cond.Cells[5].heatTransfer.Unom variable */)) * ((tmp75) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cond.Cells[5].M_dot_su variable */)) * (DIVISION(jacobian->tmpVars[1] /* cond.Cells.5.dMdt.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */,(tmp80 * tmp80),"cond.Cells[5].heatTransfer.Mdotnom ^ 2.0")))));
  threadData->lastEquationSolved = 1041;
}

/*
equation index: 1042
type: SIMPLE_ASSIGN
cond.Cells.5.InFlow.m_flow.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells.5.dMdt.$pDERNLSJac7.dummyVarNLSJac7 * (*Real*)(cond.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1042(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1042};
  jacobian->tmpVars[10] /* cond.Cells.5.InFlow.m_flow.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[1] /* cond.Cells.5.dMdt.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* cond.Cells[5].Nt PARAM */)));
  threadData->lastEquationSolved = 1042;
}

/*
equation index: 1043
type: SIMPLE_ASSIGN
cond.Cells.4.M_dot_ex.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells.5.InFlow.m_flow.$pDERNLSJac7.dummyVarNLSJac7 / (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1043(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,1043};
  jacobian->tmpVars[11] /* cond.Cells.4.M_dot_ex.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[10] /* cond.Cells.5.InFlow.m_flow.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* cond.Cells[4].Nt PARAM */)),"/*Real*/(cond.Cells[4].Nt)");
  threadData->lastEquationSolved = 1043;
}

/*
equation index: 1044
type: SIMPLE_ASSIGN
cond.Cells.4.dMdt.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells[4].Vi * (cond.Cells[4].drdh * $DER.cond.Cells[4].h.SeedNLSJac7 + cond.Cells[4].drdp * $DER.cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1044(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,1044};
  jacobian->tmpVars[2] /* cond.Cells.4.dMdt.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* cond.Cells[4].drdh variable */)) * (jacobian->seedVars[1] /* der(cond.Cells[4].h.SeedNLSJac7) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cond.Cells[4].drdp variable */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1044;
}

/*
equation index: 1045
type: SIMPLE_ASSIGN
cond.Cells.4.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells.4.M_dot_ex.$pDERNLSJac7.dummyVarNLSJac7 + cond.Cells.4.dMdt.$pDERNLSJac7.dummyVarNLSJac7
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1045(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,1045};
  jacobian->tmpVars[12] /* cond.Cells.4.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[11] /* cond.Cells.4.M_dot_ex.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[2] /* cond.Cells.4.dMdt.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1045;
}

/*
equation index: 1046
type: SIMPLE_ASSIGN
cond.Cells.4.heatTransfer.U.$pDERNLSJac7.dummyVarNLSJac7[1] = 0.8 * cond.Cells[4].heatTransfer.Unom * (1e-6 + (cond.Cells[4].M_dot_su / cond.Cells[4].heatTransfer.Mdotnom) ^ 2.0) ^ (-0.6) * cond.Cells[4].M_dot_su * cond.Cells.4.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 / cond.Cells[4].heatTransfer.Mdotnom ^ 2.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1046(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,1046};
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  tmp81 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cond.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* cond.Cells[4].heatTransfer.Mdotnom variable */),"cond.Cells[4].heatTransfer.Mdotnom");
  tmp82 = 1e-6 + (tmp81 * tmp81);
  tmp83 = -0.6;
  if(tmp82 < 0.0 && tmp83 != 0.0)
  {
    tmp85 = modf(tmp83, &tmp86);
    
    if(tmp85 > 0.5)
    {
      tmp85 -= 1.0;
      tmp86 += 1.0;
    }
    else if(tmp85 < -0.5)
    {
      tmp85 += 1.0;
      tmp86 -= 1.0;
    }
    
    if(fabs(tmp85) < 1e-10)
      tmp84 = pow(tmp82, tmp86);
    else
    {
      tmp88 = modf(1.0/tmp83, &tmp87);
      if(tmp88 > 0.5)
      {
        tmp88 -= 1.0;
        tmp87 += 1.0;
      }
      else if(tmp88 < -0.5)
      {
        tmp88 += 1.0;
        tmp87 -= 1.0;
      }
      if(fabs(tmp88) < 1e-10 && ((unsigned long)tmp87 & 1))
      {
        tmp84 = -pow(-tmp82, tmp85)*pow(tmp82, tmp86);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp82, tmp83);
      }
    }
  }
  else
  {
    tmp84 = pow(tmp82, tmp83);
  }
  if(isnan(tmp84) || isinf(tmp84))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp82, tmp83);
  }tmp89 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* cond.Cells[4].heatTransfer.Mdotnom variable */);
  jacobian->tmpVars[14] /* cond.Cells.4.heatTransfer.U.$pDERNLSJac7.dummyVarNLSJac7[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* cond.Cells[4].heatTransfer.Unom variable */)) * ((tmp84) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cond.Cells[4].M_dot_su variable */)) * (DIVISION(jacobian->tmpVars[12] /* cond.Cells.4.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */,(tmp89 * tmp89),"cond.Cells[4].heatTransfer.Mdotnom ^ 2.0")))));
  threadData->lastEquationSolved = 1046;
}

/*
equation index: 1047
type: SIMPLE_ASSIGN
cond.Cells.4.InFlow.m_flow.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells.4.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 * (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1047(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,1047};
  jacobian->tmpVars[16] /* cond.Cells.4.InFlow.m_flow.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[12] /* cond.Cells.4.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* cond.Cells[4].Nt PARAM */)));
  threadData->lastEquationSolved = 1047;
}

/*
equation index: 1048
type: SIMPLE_ASSIGN
cond.Cells.3.M_dot_ex.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells.4.InFlow.m_flow.$pDERNLSJac7.dummyVarNLSJac7 / (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1048(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,1048};
  jacobian->tmpVars[17] /* cond.Cells.3.M_dot_ex.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[16] /* cond.Cells.4.InFlow.m_flow.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* cond.Cells[3].Nt PARAM */)),"/*Real*/(cond.Cells[3].Nt)");
  threadData->lastEquationSolved = 1048;
}

/*
equation index: 1049
type: SIMPLE_ASSIGN
cond.Cells.3.dMdt.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells[3].Vi * (cond.Cells[3].drdh * $DER.cond.Cells[3].h.SeedNLSJac7 + cond.Cells[3].drdp * $DER.cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1049(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,1049};
  jacobian->tmpVars[3] /* cond.Cells.3.dMdt.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* cond.Cells[3].drdh variable */)) * (jacobian->seedVars[2] /* der(cond.Cells[3].h.SeedNLSJac7) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* cond.Cells[3].drdp variable */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1049;
}

/*
equation index: 1050
type: SIMPLE_ASSIGN
cond.Cells.3.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells.3.M_dot_ex.$pDERNLSJac7.dummyVarNLSJac7 + cond.Cells.3.dMdt.$pDERNLSJac7.dummyVarNLSJac7
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1050(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,1050};
  jacobian->tmpVars[18] /* cond.Cells.3.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[17] /* cond.Cells.3.M_dot_ex.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[3] /* cond.Cells.3.dMdt.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1050;
}

/*
equation index: 1051
type: SIMPLE_ASSIGN
cond.Cells.3.heatTransfer.U.$pDERNLSJac7.dummyVarNLSJac7[1] = 0.8 * cond.Cells[3].heatTransfer.Unom * (1e-6 + (cond.Cells[3].M_dot_su / cond.Cells[3].heatTransfer.Mdotnom) ^ 2.0) ^ (-0.6) * cond.Cells[3].M_dot_su * cond.Cells.3.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 / cond.Cells[3].heatTransfer.Mdotnom ^ 2.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1051(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,1051};
  modelica_real tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  tmp90 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cond.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cond.Cells[3].heatTransfer.Mdotnom variable */),"cond.Cells[3].heatTransfer.Mdotnom");
  tmp91 = 1e-6 + (tmp90 * tmp90);
  tmp92 = -0.6;
  if(tmp91 < 0.0 && tmp92 != 0.0)
  {
    tmp94 = modf(tmp92, &tmp95);
    
    if(tmp94 > 0.5)
    {
      tmp94 -= 1.0;
      tmp95 += 1.0;
    }
    else if(tmp94 < -0.5)
    {
      tmp94 += 1.0;
      tmp95 -= 1.0;
    }
    
    if(fabs(tmp94) < 1e-10)
      tmp93 = pow(tmp91, tmp95);
    else
    {
      tmp97 = modf(1.0/tmp92, &tmp96);
      if(tmp97 > 0.5)
      {
        tmp97 -= 1.0;
        tmp96 += 1.0;
      }
      else if(tmp97 < -0.5)
      {
        tmp97 += 1.0;
        tmp96 -= 1.0;
      }
      if(fabs(tmp97) < 1e-10 && ((unsigned long)tmp96 & 1))
      {
        tmp93 = -pow(-tmp91, tmp94)*pow(tmp91, tmp95);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp91, tmp92);
      }
    }
  }
  else
  {
    tmp93 = pow(tmp91, tmp92);
  }
  if(isnan(tmp93) || isinf(tmp93))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp91, tmp92);
  }tmp98 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cond.Cells[3].heatTransfer.Mdotnom variable */);
  jacobian->tmpVars[20] /* cond.Cells.3.heatTransfer.U.$pDERNLSJac7.dummyVarNLSJac7[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cond.Cells[3].heatTransfer.Unom variable */)) * ((tmp93) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cond.Cells[3].M_dot_su variable */)) * (DIVISION(jacobian->tmpVars[18] /* cond.Cells.3.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */,(tmp98 * tmp98),"cond.Cells[3].heatTransfer.Mdotnom ^ 2.0")))));
  threadData->lastEquationSolved = 1051;
}

/*
equation index: 1052
type: SIMPLE_ASSIGN
cond.Cells.3.InFlow.m_flow.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells.3.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 * (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1052(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,1052};
  jacobian->tmpVars[22] /* cond.Cells.3.InFlow.m_flow.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[18] /* cond.Cells.3.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* cond.Cells[3].Nt PARAM */)));
  threadData->lastEquationSolved = 1052;
}

/*
equation index: 1053
type: SIMPLE_ASSIGN
cond.Cells.2.M_dot_ex.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells.3.InFlow.m_flow.$pDERNLSJac7.dummyVarNLSJac7 / (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1053(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,1053};
  jacobian->tmpVars[23] /* cond.Cells.2.M_dot_ex.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[22] /* cond.Cells.3.InFlow.m_flow.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* cond.Cells[2].Nt PARAM */)),"/*Real*/(cond.Cells[2].Nt)");
  threadData->lastEquationSolved = 1053;
}

/*
equation index: 1054
type: SIMPLE_ASSIGN
cond.Cells.2.dMdt.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells[2].Vi * (cond.Cells[2].drdh * $DER.cond.Cells[2].h.SeedNLSJac7 + cond.Cells[2].drdp * $DER.cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1054(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,1054};
  jacobian->tmpVars[4] /* cond.Cells.2.dMdt.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[670]] /* cond.Cells[2].drdh variable */)) * (jacobian->seedVars[3] /* der(cond.Cells[2].h.SeedNLSJac7) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* cond.Cells[2].drdp variable */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1054;
}

/*
equation index: 1055
type: SIMPLE_ASSIGN
cond.Cells.2.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells.2.M_dot_ex.$pDERNLSJac7.dummyVarNLSJac7 + cond.Cells.2.dMdt.$pDERNLSJac7.dummyVarNLSJac7
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1055(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,1055};
  jacobian->tmpVars[24] /* cond.Cells.2.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[23] /* cond.Cells.2.M_dot_ex.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[4] /* cond.Cells.2.dMdt.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1055;
}

/*
equation index: 1056
type: SIMPLE_ASSIGN
cond.Cells.2.heatTransfer.U.$pDERNLSJac7.dummyVarNLSJac7[1] = 0.8 * cond.Cells[2].heatTransfer.Unom * (1e-6 + (cond.Cells[2].M_dot_su / cond.Cells[2].heatTransfer.Mdotnom) ^ 2.0) ^ (-0.6) * cond.Cells[2].M_dot_su * cond.Cells.2.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 / cond.Cells[2].heatTransfer.Mdotnom ^ 2.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1056(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,1056};
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_real tmp101;
  modelica_real tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  tmp99 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cond.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cond.Cells[2].heatTransfer.Mdotnom variable */),"cond.Cells[2].heatTransfer.Mdotnom");
  tmp100 = 1e-6 + (tmp99 * tmp99);
  tmp101 = -0.6;
  if(tmp100 < 0.0 && tmp101 != 0.0)
  {
    tmp103 = modf(tmp101, &tmp104);
    
    if(tmp103 > 0.5)
    {
      tmp103 -= 1.0;
      tmp104 += 1.0;
    }
    else if(tmp103 < -0.5)
    {
      tmp103 += 1.0;
      tmp104 -= 1.0;
    }
    
    if(fabs(tmp103) < 1e-10)
      tmp102 = pow(tmp100, tmp104);
    else
    {
      tmp106 = modf(1.0/tmp101, &tmp105);
      if(tmp106 > 0.5)
      {
        tmp106 -= 1.0;
        tmp105 += 1.0;
      }
      else if(tmp106 < -0.5)
      {
        tmp106 += 1.0;
        tmp105 -= 1.0;
      }
      if(fabs(tmp106) < 1e-10 && ((unsigned long)tmp105 & 1))
      {
        tmp102 = -pow(-tmp100, tmp103)*pow(tmp100, tmp104);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp100, tmp101);
      }
    }
  }
  else
  {
    tmp102 = pow(tmp100, tmp101);
  }
  if(isnan(tmp102) || isinf(tmp102))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp100, tmp101);
  }tmp107 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cond.Cells[2].heatTransfer.Mdotnom variable */);
  jacobian->tmpVars[26] /* cond.Cells.2.heatTransfer.U.$pDERNLSJac7.dummyVarNLSJac7[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* cond.Cells[2].heatTransfer.Unom variable */)) * ((tmp102) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cond.Cells[2].M_dot_su variable */)) * (DIVISION(jacobian->tmpVars[24] /* cond.Cells.2.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */,(tmp107 * tmp107),"cond.Cells[2].heatTransfer.Mdotnom ^ 2.0")))));
  threadData->lastEquationSolved = 1056;
}

/*
equation index: 1057
type: SIMPLE_ASSIGN
cond.Cells.2.InFlow.m_flow.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells.2.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 * (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1057(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,1057};
  jacobian->tmpVars[28] /* cond.Cells.2.InFlow.m_flow.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[24] /* cond.Cells.2.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* cond.Cells[2].Nt PARAM */)));
  threadData->lastEquationSolved = 1057;
}

/*
equation index: 1058
type: SIMPLE_ASSIGN
cond.Cells.1.M_dot_ex.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells.2.InFlow.m_flow.$pDERNLSJac7.dummyVarNLSJac7 / (*Real*)(cond.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1058(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,1058};
  jacobian->tmpVars[29] /* cond.Cells.1.M_dot_ex.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[28] /* cond.Cells.2.InFlow.m_flow.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[1].Nt PARAM */)),"/*Real*/(cond.Cells[1].Nt)");
  threadData->lastEquationSolved = 1058;
}

/*
equation index: 1059
type: SIMPLE_ASSIGN
cond.Cells.1.dMdt.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells[1].Vi * (cond.Cells[1].drdh * $DER.cond.Cells[1].h.SeedNLSJac7 + cond.Cells[1].drdp * $DER.cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1059(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,1059};
  jacobian->tmpVars[5] /* cond.Cells.1.dMdt.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* cond.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* cond.Cells[1].drdh variable */)) * (jacobian->seedVars[4] /* der(cond.Cells[1].h.SeedNLSJac7) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* cond.Cells[1].drdp variable */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1059;
}

/*
equation index: 1060
type: SIMPLE_ASSIGN
$res_NLSJac7_1.$pDERNLSJac7.dummyVarNLSJac7 = (-cond.Cells.1.M_dot_ex.$pDERNLSJac7.dummyVarNLSJac7) - cond.Cells.1.dMdt.$pDERNLSJac7.dummyVarNLSJac7
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1060(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,1060};
  jacobian->resultVars[0] /* $res_NLSJac7_1.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (-jacobian->tmpVars[29] /* cond.Cells.1.M_dot_ex.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[5] /* cond.Cells.1.dMdt.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1060;
}

/*
equation index: 1061
type: SIMPLE_ASSIGN
cond.Cells.5.Q_tot.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells[5].Vi * cond.Cells[5].rho * $DER.cond.Cells[5].h.SeedNLSJac7 + cond.Cells.5.dMdt.$pDERNLSJac7.dummyVarNLSJac7 * (cond.Cells[5].h - cond.Cells[4].h) - cond.Cells[5].Vi * $DER.cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1061(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 22;
  const int equationIndexes[2] = {1,1061};
  jacobian->tmpVars[7] /* cond.Cells.5.Q_tot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cond.Cells[5].rho variable */)) * (jacobian->seedVars[0] /* der(cond.Cells[5].h.SeedNLSJac7) SEED_VAR */)) + (jacobian->tmpVars[1] /* cond.Cells.5.dMdt.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Cells[5].Vi PARAM */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1061;
}

/*
equation index: 1062
type: SIMPLE_ASSIGN
cond.Cells.5.qdot.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells.5.Q_tot.$pDERNLSJac7.dummyVarNLSJac7 / cond.Cells[5].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1062(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 23;
  const int equationIndexes[2] = {1,1062};
  jacobian->tmpVars[9] /* cond.Cells.5.qdot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[7] /* cond.Cells.5.Q_tot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* cond.Cells[5].Ai PARAM */),"cond.Cells[5].Ai");
  threadData->lastEquationSolved = 1062;
}

/*
equation index: 1063
type: SIMPLE_ASSIGN
coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[5] = cond.Cells.5.qdot.$pDERNLSJac7.dummyVarNLSJac7 * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1063(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 24;
  const int equationIndexes[2] = {1,1063};
  jacobian->tmpVars[30] /* coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[5] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[9] /* cond.Cells.5.qdot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 1063;
}

/*
equation index: 1064
type: SIMPLE_ASSIGN
cond.Cells.4.Q_tot.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells[4].Vi * cond.Cells[4].rho * $DER.cond.Cells[4].h.SeedNLSJac7 + cond.Cells.4.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 * (cond.Cells[4].h - cond.Cells[3].h) - cond.Cells[4].Vi * $DER.cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1064(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 25;
  const int equationIndexes[2] = {1,1064};
  jacobian->tmpVars[13] /* cond.Cells.4.Q_tot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cond.Cells[4].rho variable */)) * (jacobian->seedVars[1] /* der(cond.Cells[4].h.SeedNLSJac7) SEED_VAR */)) + (jacobian->tmpVars[12] /* cond.Cells.4.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Cells[4].Vi PARAM */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1064;
}

/*
equation index: 1065
type: SIMPLE_ASSIGN
cond.Cells.4.qdot.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells.4.Q_tot.$pDERNLSJac7.dummyVarNLSJac7 / cond.Cells[4].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1065(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 26;
  const int equationIndexes[2] = {1,1065};
  jacobian->tmpVars[15] /* cond.Cells.4.qdot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[13] /* cond.Cells.4.Q_tot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[36]] /* cond.Cells[4].Ai PARAM */),"cond.Cells[4].Ai");
  threadData->lastEquationSolved = 1065;
}

/*
equation index: 1066
type: SIMPLE_ASSIGN
coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[4] = cond.Cells.4.qdot.$pDERNLSJac7.dummyVarNLSJac7 * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1066(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 27;
  const int equationIndexes[2] = {1,1066};
  jacobian->tmpVars[31] /* coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[4] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[15] /* cond.Cells.4.qdot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 1066;
}

/*
equation index: 1067
type: SIMPLE_ASSIGN
cond.Cells.3.Q_tot.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells[3].Vi * cond.Cells[3].rho * $DER.cond.Cells[3].h.SeedNLSJac7 + cond.Cells.3.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 * (cond.Cells[3].h - cond.Cells[2].h) - cond.Cells[3].Vi * $DER.cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1067(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 28;
  const int equationIndexes[2] = {1,1067};
  jacobian->tmpVars[19] /* cond.Cells.3.Q_tot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cond.Cells[3].rho variable */)) * (jacobian->seedVars[2] /* der(cond.Cells[3].h.SeedNLSJac7) SEED_VAR */)) + (jacobian->tmpVars[18] /* cond.Cells.3.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Cells[3].Vi PARAM */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1067;
}

/*
equation index: 1068
type: SIMPLE_ASSIGN
cond.Cells.3.qdot.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells.3.Q_tot.$pDERNLSJac7.dummyVarNLSJac7 / cond.Cells[3].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1068(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 29;
  const int equationIndexes[2] = {1,1068};
  jacobian->tmpVars[21] /* cond.Cells.3.qdot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[19] /* cond.Cells.3.Q_tot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[35]] /* cond.Cells[3].Ai PARAM */),"cond.Cells[3].Ai");
  threadData->lastEquationSolved = 1068;
}

/*
equation index: 1069
type: SIMPLE_ASSIGN
coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[3] = cond.Cells.3.qdot.$pDERNLSJac7.dummyVarNLSJac7 * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1069(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 30;
  const int equationIndexes[2] = {1,1069};
  jacobian->tmpVars[32] /* coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[3] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[21] /* cond.Cells.3.qdot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 1069;
}

/*
equation index: 1070
type: SIMPLE_ASSIGN
cond.Cells.2.Q_tot.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells[2].Vi * cond.Cells[2].rho * $DER.cond.Cells[2].h.SeedNLSJac7 + cond.Cells.2.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 * (cond.Cells[2].h - cond.Cells[1].h) - cond.Cells[2].Vi * $DER.cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1070(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 31;
  const int equationIndexes[2] = {1,1070};
  jacobian->tmpVars[25] /* cond.Cells.2.Q_tot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cond.Cells[2].rho variable */)) * (jacobian->seedVars[3] /* der(cond.Cells[2].h.SeedNLSJac7) SEED_VAR */)) + (jacobian->tmpVars[24] /* cond.Cells.2.M_dot_su.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Cells[2].Vi PARAM */)) * (jacobian->tmpVars[0] /* der(cond.Cells.1.p.$pDERNLSJac7.dummyVarNLSJac7) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1070;
}

/*
equation index: 1071
type: SIMPLE_ASSIGN
cond.Cells.2.qdot.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells.2.Q_tot.$pDERNLSJac7.dummyVarNLSJac7 / cond.Cells[2].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1071(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 32;
  const int equationIndexes[2] = {1,1071};
  jacobian->tmpVars[27] /* cond.Cells.2.qdot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[25] /* cond.Cells.2.Q_tot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[34]] /* cond.Cells[2].Ai PARAM */),"cond.Cells[2].Ai");
  threadData->lastEquationSolved = 1071;
}

/*
equation index: 1072
type: SIMPLE_ASSIGN
coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[2] = cond.Cells.2.qdot.$pDERNLSJac7.dummyVarNLSJac7 * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1072(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 33;
  const int equationIndexes[2] = {1,1072};
  jacobian->tmpVars[33] /* coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[2] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[27] /* cond.Cells.2.qdot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 1072;
}

/*
equation index: 1073
type: SIMPLE_ASSIGN
coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[3] = (-coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[2]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1073(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 34;
  const int equationIndexes[2] = {1,1073};
  jacobian->tmpVars[34] /* coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[3] JACOBIAN_TMP_VAR */ = DIVISION((-jacobian->tmpVars[33] /* coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[2] JACOBIAN_TMP_VAR */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air");
  threadData->lastEquationSolved = 1073;
}

/*
equation index: 1074
type: SIMPLE_ASSIGN
coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[4] = (coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[3] * coil_cond.cp_air * coil_cond.m_dot_air - coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[3]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1074(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 35;
  const int equationIndexes[2] = {1,1074};
  jacobian->tmpVars[35] /* coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[4] JACOBIAN_TMP_VAR */ = DIVISION(((jacobian->tmpVars[34] /* coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[3] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) - jacobian->tmpVars[32] /* coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[3] JACOBIAN_TMP_VAR */,((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air");
  threadData->lastEquationSolved = 1074;
}

/*
equation index: 1075
type: SIMPLE_ASSIGN
coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[5] = (coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[4] * coil_cond.cp_air * coil_cond.m_dot_air - coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[4]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1075(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 36;
  const int equationIndexes[2] = {1,1075};
  jacobian->tmpVars[37] /* coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[5] JACOBIAN_TMP_VAR */ = DIVISION(((jacobian->tmpVars[35] /* coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[4] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) - jacobian->tmpVars[31] /* coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[4] JACOBIAN_TMP_VAR */,((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air");
  threadData->lastEquationSolved = 1075;
}

/*
equation index: 1076
type: SIMPLE_ASSIGN
T_air_off_cond_k.$pDERNLSJac7.dummyVarNLSJac7 = (coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[5] * coil_cond.cp_air * coil_cond.m_dot_air - coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[5]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1076(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 37;
  const int equationIndexes[2] = {1,1076};
  jacobian->tmpVars[39] /* T_air_off_cond_k.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */ = DIVISION(((jacobian->tmpVars[37] /* coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[5] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) - jacobian->tmpVars[30] /* coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[5] JACOBIAN_TMP_VAR */,((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air");
  threadData->lastEquationSolved = 1076;
}

/*
equation index: 1077
type: SIMPLE_ASSIGN
cond.Wall_int.T.$pDERNLSJac7.dummyVarNLSJac7[5] = 0.5 * (coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[5] + T_air_off_cond_k.$pDERNLSJac7.dummyVarNLSJac7) - coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[5] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1077(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 38;
  const int equationIndexes[2] = {1,1077};
  jacobian->tmpVars[40] /* cond.Wall_int.T.$pDERNLSJac7.dummyVarNLSJac7[5] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[37] /* coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[5] JACOBIAN_TMP_VAR */ + jacobian->tmpVars[39] /* T_air_off_cond_k.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->tmpVars[30] /* coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[5] JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell"));
  threadData->lastEquationSolved = 1077;
}

/*
equation index: 1078
type: SIMPLE_ASSIGN
$res_NLSJac7_5.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells[5].heatTransfer.U[1] * cond.Wall_int.T.$pDERNLSJac7.dummyVarNLSJac7[5] + cond.Cells.5.heatTransfer.U.$pDERNLSJac7.dummyVarNLSJac7[1] * (cond.Wall_int.T[5] - cond.Cells[5].T) - cond.Cells.5.qdot.$pDERNLSJac7.dummyVarNLSJac7
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1078(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 39;
  const int equationIndexes[2] = {1,1078};
  jacobian->resultVars[4] /* $res_NLSJac7_5.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cond.Cells[5].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[40] /* cond.Wall_int.T.$pDERNLSJac7.dummyVarNLSJac7[5] JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[8] /* cond.Cells.5.heatTransfer.U.$pDERNLSJac7.dummyVarNLSJac7[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* cond.Wall_int.T[5] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* cond.Cells[5].T variable */)) - jacobian->tmpVars[9] /* cond.Cells.5.qdot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1078;
}

/*
equation index: 1079
type: SIMPLE_ASSIGN
cond.Wall_int.T.$pDERNLSJac7.dummyVarNLSJac7[4] = 0.5 * (coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[4] + coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[5]) - coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[4] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1079(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 40;
  const int equationIndexes[2] = {1,1079};
  jacobian->tmpVars[38] /* cond.Wall_int.T.$pDERNLSJac7.dummyVarNLSJac7[4] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[35] /* coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[4] JACOBIAN_TMP_VAR */ + jacobian->tmpVars[37] /* coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[5] JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->tmpVars[31] /* coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[4] JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell"));
  threadData->lastEquationSolved = 1079;
}

/*
equation index: 1080
type: SIMPLE_ASSIGN
$res_NLSJac7_3.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells[4].heatTransfer.U[1] * cond.Wall_int.T.$pDERNLSJac7.dummyVarNLSJac7[4] + cond.Cells.4.heatTransfer.U.$pDERNLSJac7.dummyVarNLSJac7[1] * (cond.Wall_int.T[4] - cond.Cells[4].T) - cond.Cells.4.qdot.$pDERNLSJac7.dummyVarNLSJac7
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1080(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 41;
  const int equationIndexes[2] = {1,1080};
  jacobian->resultVars[2] /* $res_NLSJac7_3.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cond.Cells[4].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[38] /* cond.Wall_int.T.$pDERNLSJac7.dummyVarNLSJac7[4] JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[14] /* cond.Cells.4.heatTransfer.U.$pDERNLSJac7.dummyVarNLSJac7[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* cond.Wall_int.T[4] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[662]] /* cond.Cells[4].T variable */)) - jacobian->tmpVars[15] /* cond.Cells.4.qdot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1080;
}

/*
equation index: 1081
type: SIMPLE_ASSIGN
cond.Wall_int.T.$pDERNLSJac7.dummyVarNLSJac7[3] = 0.5 * (coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[3] + coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[4]) - coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[3] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1081(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 42;
  const int equationIndexes[2] = {1,1081};
  jacobian->tmpVars[36] /* cond.Wall_int.T.$pDERNLSJac7.dummyVarNLSJac7[3] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[34] /* coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[3] JACOBIAN_TMP_VAR */ + jacobian->tmpVars[35] /* coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[4] JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->tmpVars[32] /* coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[3] JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell"));
  threadData->lastEquationSolved = 1081;
}

/*
equation index: 1082
type: SIMPLE_ASSIGN
$res_NLSJac7_4.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells[3].heatTransfer.U[1] * cond.Wall_int.T.$pDERNLSJac7.dummyVarNLSJac7[3] + cond.Cells.3.heatTransfer.U.$pDERNLSJac7.dummyVarNLSJac7[1] * (cond.Wall_int.T[3] - cond.Cells[3].T) - cond.Cells.3.qdot.$pDERNLSJac7.dummyVarNLSJac7
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1082(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 43;
  const int equationIndexes[2] = {1,1082};
  jacobian->resultVars[3] /* $res_NLSJac7_4.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cond.Cells[3].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[36] /* cond.Wall_int.T.$pDERNLSJac7.dummyVarNLSJac7[3] JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[20] /* cond.Cells.3.heatTransfer.U.$pDERNLSJac7.dummyVarNLSJac7[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* cond.Wall_int.T[3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* cond.Cells[3].T variable */)) - jacobian->tmpVars[21] /* cond.Cells.3.qdot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1082;
}

/*
equation index: 1083
type: SIMPLE_ASSIGN
cond.Wall_int.T.$pDERNLSJac7.dummyVarNLSJac7[2] = 0.5 * coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[3] - coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[2] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1083(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 44;
  const int equationIndexes[2] = {1,1083};
  jacobian->tmpVars[41] /* cond.Wall_int.T.$pDERNLSJac7.dummyVarNLSJac7[2] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[34] /* coil_cond.T_air.$pDERNLSJac7.dummyVarNLSJac7[3] JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->tmpVars[33] /* coil_cond.Q_cell.$pDERNLSJac7.dummyVarNLSJac7[2] JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell"));
  threadData->lastEquationSolved = 1083;
}

/*
equation index: 1084
type: SIMPLE_ASSIGN
$res_NLSJac7_2.$pDERNLSJac7.dummyVarNLSJac7 = cond.Cells[2].heatTransfer.U[1] * cond.Wall_int.T.$pDERNLSJac7.dummyVarNLSJac7[2] + cond.Cells.2.heatTransfer.U.$pDERNLSJac7.dummyVarNLSJac7[1] * (cond.Wall_int.T[2] - cond.Cells[2].T) - cond.Cells.2.qdot.$pDERNLSJac7.dummyVarNLSJac7
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1084(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 45;
  const int equationIndexes[2] = {1,1084};
  jacobian->resultVars[1] /* $res_NLSJac7_2.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* cond.Cells[2].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[41] /* cond.Wall_int.T.$pDERNLSJac7.dummyVarNLSJac7[2] JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[26] /* cond.Cells.2.heatTransfer.U.$pDERNLSJac7.dummyVarNLSJac7[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* cond.Wall_int.T[2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[660]] /* cond.Cells[2].T variable */)) - jacobian->tmpVars[27] /* cond.Cells.2.qdot.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1084;
}

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac7_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_NLSJac7;
  
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac7_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_NLSJac7;
  
  static void (*const eqFunctions[46])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1039,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1040,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1041,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1042,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1043,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1044,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1045,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1046,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1047,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1048,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1049,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1050,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1051,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1052,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1053,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1054,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1055,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1056,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1057,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1058,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1059,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1060,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1061,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1062,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1063,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1064,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1065,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1066,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1067,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1068,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1069,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1070,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1071,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1072,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1073,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1074,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1075,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1076,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1077,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1078,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1079,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1080,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1081,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1082,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1083,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1084
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 46; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_JacNLSJac7_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 1125
type: SIMPLE_ASSIGN
coil_evap.T_air.$pDERLSJac8.dummyVarLSJac8[2] = (-coil_evap.Q_cell.SeedLSJac8[1]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1125(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1125};
  jacobian->tmpVars[0] /* coil_evap.T_air.$pDERLSJac8.dummyVarLSJac8[2] JACOBIAN_TMP_VAR */ = DIVISION((-jacobian->seedVars[0] /* coil_evap.Q_cell.SeedLSJac8[1] SEED_VAR */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air");
  threadData->lastEquationSolved = 1125;
}

/*
equation index: 1126
type: SIMPLE_ASSIGN
evap.Wall_int.T.$pDERLSJac8.dummyVarLSJac8[1] = 0.5 * coil_evap.T_air.$pDERLSJac8.dummyVarLSJac8[2] - coil_evap.Q_cell.SeedLSJac8[1] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1126(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1126};
  jacobian->tmpVars[1] /* evap.Wall_int.T.$pDERLSJac8.dummyVarLSJac8[1] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[0] /* coil_evap.T_air.$pDERLSJac8.dummyVarLSJac8[2] JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->seedVars[0] /* coil_evap.Q_cell.SeedLSJac8[1] SEED_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell"));
  threadData->lastEquationSolved = 1126;
}

/*
equation index: 1127
type: SIMPLE_ASSIGN
evap.Cells.1.qdot.$pDERLSJac8.dummyVarLSJac8 = evap.Cells[1].heatTransfer.U[1] * evap.Wall_int.T.$pDERLSJac8.dummyVarLSJac8[1]
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1127(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1127};
  jacobian->tmpVars[2] /* evap.Cells.1.qdot.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_TMP_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* evap.Cells[1].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[1] /* evap.Wall_int.T.$pDERLSJac8.dummyVarLSJac8[1] JACOBIAN_TMP_VAR */);
  threadData->lastEquationSolved = 1127;
}

/*
equation index: 1128
type: SIMPLE_ASSIGN
$res_LSJac8_1.$pDERLSJac8.dummyVarLSJac8 = evap.Cells.1.qdot.$pDERLSJac8.dummyVarLSJac8 * coil_evap.A_cell - coil_evap.Q_cell.SeedLSJac8[1]
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1128(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1128};
  jacobian->resultVars[0] /* $res_LSJac8_1.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_VAR */ = (jacobian->tmpVars[2] /* evap.Cells.1.qdot.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */)) - jacobian->seedVars[0] /* coil_evap.Q_cell.SeedLSJac8[1] SEED_VAR */;
  threadData->lastEquationSolved = 1128;
}

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac8_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_LSJac8;
  
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac8_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_LSJac8;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1125,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1126,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1127,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1128
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 4; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_JacLSJac8_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {1125, 1126, 1127, 1128};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 1313
type: SIMPLE_ASSIGN
$DER.evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells[1].rho * $DER.evap.Cells[1].h.SeedNLSJac9
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1313(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1313};
  jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9) JACOBIAN_TMP_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* evap.Cells[1].rho variable */)) * (jacobian->seedVars[1] /* der(evap.Cells[1].h.SeedNLSJac9) SEED_VAR */);
  threadData->lastEquationSolved = 1313;
}

/*
equation index: 1314
type: SIMPLE_ASSIGN
evap.Cells.5.dMdt.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells[5].Vi * (evap.Cells[5].drdh * $DER.evap.Cells[5].h.SeedNLSJac9 + evap.Cells[5].drdp * $DER.evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1314(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1314};
  jacobian->tmpVars[1] /* evap.Cells.5.dMdt.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* evap.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* evap.Cells[5].drdh variable */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].h.SeedNLSJac9) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* evap.Cells[5].drdp variable */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1314;
}

/*
equation index: 1315
type: SIMPLE_ASSIGN
evap.Cells.1.dMdt.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells[1].Vi * (evap.Cells[1].drdh * $DER.evap.Cells[1].h.SeedNLSJac9 + evap.Cells[1].drdp * $DER.evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1315(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1315};
  jacobian->tmpVars[2] /* evap.Cells.1.dMdt.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* evap.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[943]] /* evap.Cells[1].drdh variable */)) * (jacobian->seedVars[1] /* der(evap.Cells[1].h.SeedNLSJac9) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* evap.Cells[1].drdp variable */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1315;
}

/*
equation index: 1316
type: SIMPLE_ASSIGN
evap.Cells.2.InFlow.m_flow.$pDERNLSJac9.dummyVarNLSJac9 = (-evap.Cells.1.dMdt.$pDERNLSJac9.dummyVarNLSJac9) * (*Real*)(evap.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1316(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1316};
  jacobian->tmpVars[7] /* evap.Cells.2.InFlow.m_flow.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = ((-jacobian->tmpVars[2] /* evap.Cells.1.dMdt.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[1].Nt PARAM */)));
  threadData->lastEquationSolved = 1316;
}

/*
equation index: 1317
type: SIMPLE_ASSIGN
evap.Cells.2.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells.2.InFlow.m_flow.$pDERNLSJac9.dummyVarNLSJac9 / (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1317(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,1317};
  jacobian->tmpVars[8] /* evap.Cells.2.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[7] /* evap.Cells.2.InFlow.m_flow.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* evap.Cells[2].Nt PARAM */)),"/*Real*/(evap.Cells[2].Nt)");
  threadData->lastEquationSolved = 1317;
}

/*
equation index: 1318
type: SIMPLE_ASSIGN
evap.Cells.2.heatTransfer.U.$pDERNLSJac9.dummyVarNLSJac9[1] = 0.8 * evap.Cells[2].heatTransfer.Unom * (1e-6 + (evap.Cells[2].M_dot_su / evap.Cells[2].heatTransfer.Mdotnom) ^ 2.0) ^ (-0.6) * evap.Cells[2].M_dot_su * evap.Cells.2.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 / evap.Cells[2].heatTransfer.Mdotnom ^ 2.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1318(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,1318};
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_real tmp110;
  modelica_real tmp111;
  modelica_real tmp112;
  modelica_real tmp113;
  modelica_real tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  tmp108 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* evap.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* evap.Cells[2].heatTransfer.Mdotnom variable */),"evap.Cells[2].heatTransfer.Mdotnom");
  tmp109 = 1e-6 + (tmp108 * tmp108);
  tmp110 = -0.6;
  if(tmp109 < 0.0 && tmp110 != 0.0)
  {
    tmp112 = modf(tmp110, &tmp113);
    
    if(tmp112 > 0.5)
    {
      tmp112 -= 1.0;
      tmp113 += 1.0;
    }
    else if(tmp112 < -0.5)
    {
      tmp112 += 1.0;
      tmp113 -= 1.0;
    }
    
    if(fabs(tmp112) < 1e-10)
      tmp111 = pow(tmp109, tmp113);
    else
    {
      tmp115 = modf(1.0/tmp110, &tmp114);
      if(tmp115 > 0.5)
      {
        tmp115 -= 1.0;
        tmp114 += 1.0;
      }
      else if(tmp115 < -0.5)
      {
        tmp115 += 1.0;
        tmp114 -= 1.0;
      }
      if(fabs(tmp115) < 1e-10 && ((unsigned long)tmp114 & 1))
      {
        tmp111 = -pow(-tmp109, tmp112)*pow(tmp109, tmp113);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp109, tmp110);
      }
    }
  }
  else
  {
    tmp111 = pow(tmp109, tmp110);
  }
  if(isnan(tmp111) || isinf(tmp111))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp109, tmp110);
  }tmp116 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* evap.Cells[2].heatTransfer.Mdotnom variable */);
  jacobian->tmpVars[10] /* evap.Cells.2.heatTransfer.U.$pDERNLSJac9.dummyVarNLSJac9[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* evap.Cells[2].heatTransfer.Unom variable */)) * ((tmp111) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* evap.Cells[2].M_dot_su variable */)) * (DIVISION(jacobian->tmpVars[8] /* evap.Cells.2.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */,(tmp116 * tmp116),"evap.Cells[2].heatTransfer.Mdotnom ^ 2.0")))));
  threadData->lastEquationSolved = 1318;
}

/*
equation index: 1319
type: SIMPLE_ASSIGN
evap.Cells.2.dMdt.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells[2].Vi * (evap.Cells[2].drdh * $DER.evap.Cells[2].h.SeedNLSJac9 + evap.Cells[2].drdp * $DER.evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1319(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,1319};
  jacobian->tmpVars[3] /* evap.Cells.2.dMdt.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* evap.Cells[2].drdh variable */)) * (jacobian->seedVars[2] /* der(evap.Cells[2].h.SeedNLSJac9) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* evap.Cells[2].drdp variable */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1319;
}

/*
equation index: 1320
type: SIMPLE_ASSIGN
evap.Cells.2.M_dot_ex.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells.2.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 - evap.Cells.2.dMdt.$pDERNLSJac9.dummyVarNLSJac9
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1320(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,1320};
  jacobian->tmpVars[12] /* evap.Cells.2.M_dot_ex.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[8] /* evap.Cells.2.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[3] /* evap.Cells.2.dMdt.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1320;
}

/*
equation index: 1321
type: SIMPLE_ASSIGN
evap.Cells.3.InFlow.m_flow.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells.2.M_dot_ex.$pDERNLSJac9.dummyVarNLSJac9 * (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1321(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,1321};
  jacobian->tmpVars[13] /* evap.Cells.3.InFlow.m_flow.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[12] /* evap.Cells.2.M_dot_ex.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* evap.Cells[2].Nt PARAM */)));
  threadData->lastEquationSolved = 1321;
}

/*
equation index: 1322
type: SIMPLE_ASSIGN
evap.Cells.3.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells.3.InFlow.m_flow.$pDERNLSJac9.dummyVarNLSJac9 / (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1322(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,1322};
  jacobian->tmpVars[14] /* evap.Cells.3.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[13] /* evap.Cells.3.InFlow.m_flow.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* evap.Cells[3].Nt PARAM */)),"/*Real*/(evap.Cells[3].Nt)");
  threadData->lastEquationSolved = 1322;
}

/*
equation index: 1323
type: SIMPLE_ASSIGN
evap.Cells.3.heatTransfer.U.$pDERNLSJac9.dummyVarNLSJac9[1] = 0.8 * evap.Cells[3].heatTransfer.Unom * (1e-6 + (evap.Cells[3].M_dot_su / evap.Cells[3].heatTransfer.Mdotnom) ^ 2.0) ^ (-0.6) * evap.Cells[3].M_dot_su * evap.Cells.3.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 / evap.Cells[3].heatTransfer.Mdotnom ^ 2.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1323(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,1323};
  modelica_real tmp117;
  modelica_real tmp118;
  modelica_real tmp119;
  modelica_real tmp120;
  modelica_real tmp121;
  modelica_real tmp122;
  modelica_real tmp123;
  modelica_real tmp124;
  modelica_real tmp125;
  tmp117 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* evap.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* evap.Cells[3].heatTransfer.Mdotnom variable */),"evap.Cells[3].heatTransfer.Mdotnom");
  tmp118 = 1e-6 + (tmp117 * tmp117);
  tmp119 = -0.6;
  if(tmp118 < 0.0 && tmp119 != 0.0)
  {
    tmp121 = modf(tmp119, &tmp122);
    
    if(tmp121 > 0.5)
    {
      tmp121 -= 1.0;
      tmp122 += 1.0;
    }
    else if(tmp121 < -0.5)
    {
      tmp121 += 1.0;
      tmp122 -= 1.0;
    }
    
    if(fabs(tmp121) < 1e-10)
      tmp120 = pow(tmp118, tmp122);
    else
    {
      tmp124 = modf(1.0/tmp119, &tmp123);
      if(tmp124 > 0.5)
      {
        tmp124 -= 1.0;
        tmp123 += 1.0;
      }
      else if(tmp124 < -0.5)
      {
        tmp124 += 1.0;
        tmp123 -= 1.0;
      }
      if(fabs(tmp124) < 1e-10 && ((unsigned long)tmp123 & 1))
      {
        tmp120 = -pow(-tmp118, tmp121)*pow(tmp118, tmp122);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp118, tmp119);
      }
    }
  }
  else
  {
    tmp120 = pow(tmp118, tmp119);
  }
  if(isnan(tmp120) || isinf(tmp120))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp118, tmp119);
  }tmp125 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* evap.Cells[3].heatTransfer.Mdotnom variable */);
  jacobian->tmpVars[16] /* evap.Cells.3.heatTransfer.U.$pDERNLSJac9.dummyVarNLSJac9[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* evap.Cells[3].heatTransfer.Unom variable */)) * ((tmp120) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* evap.Cells[3].M_dot_su variable */)) * (DIVISION(jacobian->tmpVars[14] /* evap.Cells.3.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */,(tmp125 * tmp125),"evap.Cells[3].heatTransfer.Mdotnom ^ 2.0")))));
  threadData->lastEquationSolved = 1323;
}

/*
equation index: 1324
type: SIMPLE_ASSIGN
evap.Cells.3.dMdt.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells[3].Vi * (evap.Cells[3].drdh * $DER.evap.Cells[3].h.SeedNLSJac9 + evap.Cells[3].drdp * $DER.evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1324(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,1324};
  jacobian->tmpVars[4] /* evap.Cells.3.dMdt.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[945]] /* evap.Cells[3].drdh variable */)) * (jacobian->seedVars[3] /* der(evap.Cells[3].h.SeedNLSJac9) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[950]] /* evap.Cells[3].drdp variable */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1324;
}

/*
equation index: 1325
type: SIMPLE_ASSIGN
evap.Cells.3.M_dot_ex.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells.3.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 - evap.Cells.3.dMdt.$pDERNLSJac9.dummyVarNLSJac9
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1325(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,1325};
  jacobian->tmpVars[18] /* evap.Cells.3.M_dot_ex.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[14] /* evap.Cells.3.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[4] /* evap.Cells.3.dMdt.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1325;
}

/*
equation index: 1326
type: SIMPLE_ASSIGN
evap.Cells.4.InFlow.m_flow.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells.3.M_dot_ex.$pDERNLSJac9.dummyVarNLSJac9 * (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1326(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,1326};
  jacobian->tmpVars[19] /* evap.Cells.4.InFlow.m_flow.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[18] /* evap.Cells.3.M_dot_ex.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* evap.Cells[3].Nt PARAM */)));
  threadData->lastEquationSolved = 1326;
}

/*
equation index: 1327
type: SIMPLE_ASSIGN
evap.Cells.4.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells.4.InFlow.m_flow.$pDERNLSJac9.dummyVarNLSJac9 / (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1327(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,1327};
  jacobian->tmpVars[20] /* evap.Cells.4.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[19] /* evap.Cells.4.InFlow.m_flow.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* evap.Cells[4].Nt PARAM */)),"/*Real*/(evap.Cells[4].Nt)");
  threadData->lastEquationSolved = 1327;
}

/*
equation index: 1328
type: SIMPLE_ASSIGN
evap.Cells.4.heatTransfer.U.$pDERNLSJac9.dummyVarNLSJac9[1] = 0.8 * evap.Cells[4].heatTransfer.Unom * (1e-6 + (evap.Cells[4].M_dot_su / evap.Cells[4].heatTransfer.Mdotnom) ^ 2.0) ^ (-0.6) * evap.Cells[4].M_dot_su * evap.Cells.4.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 / evap.Cells[4].heatTransfer.Mdotnom ^ 2.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1328(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,1328};
  modelica_real tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_real tmp129;
  modelica_real tmp130;
  modelica_real tmp131;
  modelica_real tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  tmp126 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* evap.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* evap.Cells[4].heatTransfer.Mdotnom variable */),"evap.Cells[4].heatTransfer.Mdotnom");
  tmp127 = 1e-6 + (tmp126 * tmp126);
  tmp128 = -0.6;
  if(tmp127 < 0.0 && tmp128 != 0.0)
  {
    tmp130 = modf(tmp128, &tmp131);
    
    if(tmp130 > 0.5)
    {
      tmp130 -= 1.0;
      tmp131 += 1.0;
    }
    else if(tmp130 < -0.5)
    {
      tmp130 += 1.0;
      tmp131 -= 1.0;
    }
    
    if(fabs(tmp130) < 1e-10)
      tmp129 = pow(tmp127, tmp131);
    else
    {
      tmp133 = modf(1.0/tmp128, &tmp132);
      if(tmp133 > 0.5)
      {
        tmp133 -= 1.0;
        tmp132 += 1.0;
      }
      else if(tmp133 < -0.5)
      {
        tmp133 += 1.0;
        tmp132 -= 1.0;
      }
      if(fabs(tmp133) < 1e-10 && ((unsigned long)tmp132 & 1))
      {
        tmp129 = -pow(-tmp127, tmp130)*pow(tmp127, tmp131);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp127, tmp128);
      }
    }
  }
  else
  {
    tmp129 = pow(tmp127, tmp128);
  }
  if(isnan(tmp129) || isinf(tmp129))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp127, tmp128);
  }tmp134 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* evap.Cells[4].heatTransfer.Mdotnom variable */);
  jacobian->tmpVars[22] /* evap.Cells.4.heatTransfer.U.$pDERNLSJac9.dummyVarNLSJac9[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* evap.Cells[4].heatTransfer.Unom variable */)) * ((tmp129) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* evap.Cells[4].M_dot_su variable */)) * (DIVISION(jacobian->tmpVars[20] /* evap.Cells.4.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */,(tmp134 * tmp134),"evap.Cells[4].heatTransfer.Mdotnom ^ 2.0")))));
  threadData->lastEquationSolved = 1328;
}

/*
equation index: 1329
type: SIMPLE_ASSIGN
evap.Cells.4.dMdt.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells[4].Vi * (evap.Cells[4].drdh * $DER.evap.Cells[4].h.SeedNLSJac9 + evap.Cells[4].drdp * $DER.evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1329(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,1329};
  jacobian->tmpVars[5] /* evap.Cells.4.dMdt.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[946]] /* evap.Cells[4].drdh variable */)) * (jacobian->seedVars[4] /* der(evap.Cells[4].h.SeedNLSJac9) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[951]] /* evap.Cells[4].drdp variable */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1329;
}

/*
equation index: 1330
type: SIMPLE_ASSIGN
evap.Cells.4.M_dot_ex.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells.4.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 - evap.Cells.4.dMdt.$pDERNLSJac9.dummyVarNLSJac9
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1330(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,1330};
  jacobian->tmpVars[24] /* evap.Cells.4.M_dot_ex.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[20] /* evap.Cells.4.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[5] /* evap.Cells.4.dMdt.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1330;
}

/*
equation index: 1331
type: SIMPLE_ASSIGN
evap.Cells.5.InFlow.m_flow.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells.4.M_dot_ex.$pDERNLSJac9.dummyVarNLSJac9 * (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1331(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,1331};
  jacobian->tmpVars[25] /* evap.Cells.5.InFlow.m_flow.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[24] /* evap.Cells.4.M_dot_ex.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* evap.Cells[4].Nt PARAM */)));
  threadData->lastEquationSolved = 1331;
}

/*
equation index: 1332
type: SIMPLE_ASSIGN
evap.Cells.5.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells.5.InFlow.m_flow.$pDERNLSJac9.dummyVarNLSJac9 / (*Real*)(evap.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1332(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,1332};
  jacobian->tmpVars[26] /* evap.Cells.5.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[25] /* evap.Cells.5.InFlow.m_flow.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[35]] /* evap.Cells[5].Nt PARAM */)),"/*Real*/(evap.Cells[5].Nt)");
  threadData->lastEquationSolved = 1332;
}

/*
equation index: 1333
type: SIMPLE_ASSIGN
evap.Cells.5.heatTransfer.U.$pDERNLSJac9.dummyVarNLSJac9[1] = 0.8 * evap.Cells[5].heatTransfer.Unom * (1e-6 + (evap.Cells[5].M_dot_su / evap.Cells[5].heatTransfer.Mdotnom) ^ 2.0) ^ (-0.6) * evap.Cells[5].M_dot_su * evap.Cells.5.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 / evap.Cells[5].heatTransfer.Mdotnom ^ 2.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1333(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,1333};
  modelica_real tmp135;
  modelica_real tmp136;
  modelica_real tmp137;
  modelica_real tmp138;
  modelica_real tmp139;
  modelica_real tmp140;
  modelica_real tmp141;
  modelica_real tmp142;
  modelica_real tmp143;
  tmp135 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* evap.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* evap.Cells[5].heatTransfer.Mdotnom variable */),"evap.Cells[5].heatTransfer.Mdotnom");
  tmp136 = 1e-6 + (tmp135 * tmp135);
  tmp137 = -0.6;
  if(tmp136 < 0.0 && tmp137 != 0.0)
  {
    tmp139 = modf(tmp137, &tmp140);
    
    if(tmp139 > 0.5)
    {
      tmp139 -= 1.0;
      tmp140 += 1.0;
    }
    else if(tmp139 < -0.5)
    {
      tmp139 += 1.0;
      tmp140 -= 1.0;
    }
    
    if(fabs(tmp139) < 1e-10)
      tmp138 = pow(tmp136, tmp140);
    else
    {
      tmp142 = modf(1.0/tmp137, &tmp141);
      if(tmp142 > 0.5)
      {
        tmp142 -= 1.0;
        tmp141 += 1.0;
      }
      else if(tmp142 < -0.5)
      {
        tmp142 += 1.0;
        tmp141 -= 1.0;
      }
      if(fabs(tmp142) < 1e-10 && ((unsigned long)tmp141 & 1))
      {
        tmp138 = -pow(-tmp136, tmp139)*pow(tmp136, tmp140);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp136, tmp137);
      }
    }
  }
  else
  {
    tmp138 = pow(tmp136, tmp137);
  }
  if(isnan(tmp138) || isinf(tmp138))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp136, tmp137);
  }tmp143 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* evap.Cells[5].heatTransfer.Mdotnom variable */);
  jacobian->tmpVars[28] /* evap.Cells.5.heatTransfer.U.$pDERNLSJac9.dummyVarNLSJac9[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* evap.Cells[5].heatTransfer.Unom variable */)) * ((tmp138) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* evap.Cells[5].M_dot_su variable */)) * (DIVISION(jacobian->tmpVars[26] /* evap.Cells.5.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */,(tmp143 * tmp143),"evap.Cells[5].heatTransfer.Mdotnom ^ 2.0")))));
  threadData->lastEquationSolved = 1333;
}

/*
equation index: 1334
type: SIMPLE_ASSIGN
$res_NLSJac9_1.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells.5.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 - evap.Cells.5.dMdt.$pDERNLSJac9.dummyVarNLSJac9
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1334(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,1334};
  jacobian->resultVars[0] /* $res_NLSJac9_1.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = jacobian->tmpVars[26] /* evap.Cells.5.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* evap.Cells.5.dMdt.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1334;
}

/*
equation index: 1335
type: SIMPLE_ASSIGN
evap.Cells.2.Q_tot.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells[2].Vi * evap.Cells[2].rho * $DER.evap.Cells[2].h.SeedNLSJac9 + evap.Cells.2.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 * (evap.Cells[2].h - evap.Cells[1].h) - evap.Cells[2].Vi * $DER.evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1335(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 22;
  const int equationIndexes[2] = {1,1335};
  jacobian->tmpVars[9] /* evap.Cells.2.Q_tot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* evap.Cells[2].rho variable */)) * (jacobian->seedVars[2] /* der(evap.Cells[2].h.SeedNLSJac9) SEED_VAR */)) + (jacobian->tmpVars[8] /* evap.Cells.2.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Cells[2].Vi PARAM */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1335;
}

/*
equation index: 1336
type: SIMPLE_ASSIGN
evap.Cells.2.qdot.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells.2.Q_tot.$pDERNLSJac9.dummyVarNLSJac9 / evap.Cells[2].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1336(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 23;
  const int equationIndexes[2] = {1,1336};
  jacobian->tmpVars[11] /* evap.Cells.2.qdot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[9] /* evap.Cells.2.Q_tot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* evap.Cells[2].Ai PARAM */),"evap.Cells[2].Ai");
  threadData->lastEquationSolved = 1336;
}

/*
equation index: 1337
type: SIMPLE_ASSIGN
coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[2] = evap.Cells.2.qdot.$pDERNLSJac9.dummyVarNLSJac9 * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1337(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 24;
  const int equationIndexes[2] = {1,1337};
  jacobian->tmpVars[30] /* coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[2] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[11] /* evap.Cells.2.qdot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 1337;
}

/*
equation index: 1338
type: SIMPLE_ASSIGN
coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[3] = (-coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[2]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1338(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 25;
  const int equationIndexes[2] = {1,1338};
  jacobian->tmpVars[31] /* coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_TMP_VAR */ = DIVISION((-jacobian->tmpVars[30] /* coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[2] JACOBIAN_TMP_VAR */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air");
  threadData->lastEquationSolved = 1338;
}

/*
equation index: 1339
type: SIMPLE_ASSIGN
evap.Wall_int.T.$pDERNLSJac9.dummyVarNLSJac9[2] = 0.5 * coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[3] - coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[2] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1339(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 26;
  const int equationIndexes[2] = {1,1339};
  jacobian->tmpVars[32] /* evap.Wall_int.T.$pDERNLSJac9.dummyVarNLSJac9[2] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[31] /* coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->tmpVars[30] /* coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[2] JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell"));
  threadData->lastEquationSolved = 1339;
}

/*
equation index: 1340
type: SIMPLE_ASSIGN
$res_NLSJac9_5.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells[2].heatTransfer.U[1] * evap.Wall_int.T.$pDERNLSJac9.dummyVarNLSJac9[2] + evap.Cells.2.heatTransfer.U.$pDERNLSJac9.dummyVarNLSJac9[1] * (evap.Wall_int.T[2] - evap.Cells[2].T) - evap.Cells.2.qdot.$pDERNLSJac9.dummyVarNLSJac9
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1340(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 27;
  const int equationIndexes[2] = {1,1340};
  jacobian->resultVars[4] /* $res_NLSJac9_5.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* evap.Cells[2].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[32] /* evap.Wall_int.T.$pDERNLSJac9.dummyVarNLSJac9[2] JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[10] /* evap.Cells.2.heatTransfer.U.$pDERNLSJac9.dummyVarNLSJac9[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* evap.Wall_int.T[2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* evap.Cells[2].T variable */)) - jacobian->tmpVars[11] /* evap.Cells.2.qdot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1340;
}

/*
equation index: 1341
type: SIMPLE_ASSIGN
evap.Cells.3.Q_tot.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells[3].Vi * evap.Cells[3].rho * $DER.evap.Cells[3].h.SeedNLSJac9 + evap.Cells.3.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 * (evap.Cells[3].h - evap.Cells[2].h) - evap.Cells[3].Vi * $DER.evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1341(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 28;
  const int equationIndexes[2] = {1,1341};
  jacobian->tmpVars[15] /* evap.Cells.3.Q_tot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* evap.Cells[3].rho variable */)) * (jacobian->seedVars[3] /* der(evap.Cells[3].h.SeedNLSJac9) SEED_VAR */)) + (jacobian->tmpVars[14] /* evap.Cells.3.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Cells[3].Vi PARAM */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1341;
}

/*
equation index: 1342
type: SIMPLE_ASSIGN
evap.Cells.3.qdot.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells.3.Q_tot.$pDERNLSJac9.dummyVarNLSJac9 / evap.Cells[3].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1342(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 29;
  const int equationIndexes[2] = {1,1342};
  jacobian->tmpVars[17] /* evap.Cells.3.qdot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[15] /* evap.Cells.3.Q_tot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* evap.Cells[3].Ai PARAM */),"evap.Cells[3].Ai");
  threadData->lastEquationSolved = 1342;
}

/*
equation index: 1343
type: SIMPLE_ASSIGN
coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[3] = evap.Cells.3.qdot.$pDERNLSJac9.dummyVarNLSJac9 * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1343(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 30;
  const int equationIndexes[2] = {1,1343};
  jacobian->tmpVars[33] /* coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[17] /* evap.Cells.3.qdot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 1343;
}

/*
equation index: 1344
type: SIMPLE_ASSIGN
coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[4] = (coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[3] * coil_evap.cp_air * coil_evap.m_dot_air - coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[3]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1344(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 31;
  const int equationIndexes[2] = {1,1344};
  jacobian->tmpVars[34] /* coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[4] JACOBIAN_TMP_VAR */ = DIVISION(((jacobian->tmpVars[31] /* coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) - jacobian->tmpVars[33] /* coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_TMP_VAR */,((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air");
  threadData->lastEquationSolved = 1344;
}

/*
equation index: 1345
type: SIMPLE_ASSIGN
evap.Wall_int.T.$pDERNLSJac9.dummyVarNLSJac9[3] = 0.5 * (coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[3] + coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[4]) - coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[3] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1345(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 32;
  const int equationIndexes[2] = {1,1345};
  jacobian->tmpVars[35] /* evap.Wall_int.T.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[31] /* coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_TMP_VAR */ + jacobian->tmpVars[34] /* coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[4] JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->tmpVars[33] /* coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell"));
  threadData->lastEquationSolved = 1345;
}

/*
equation index: 1346
type: SIMPLE_ASSIGN
$res_NLSJac9_4.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells[3].heatTransfer.U[1] * evap.Wall_int.T.$pDERNLSJac9.dummyVarNLSJac9[3] + evap.Cells.3.heatTransfer.U.$pDERNLSJac9.dummyVarNLSJac9[1] * (evap.Wall_int.T[3] - evap.Cells[3].T) - evap.Cells.3.qdot.$pDERNLSJac9.dummyVarNLSJac9
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1346(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 33;
  const int equationIndexes[2] = {1,1346};
  jacobian->resultVars[3] /* $res_NLSJac9_4.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* evap.Cells[3].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[35] /* evap.Wall_int.T.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[16] /* evap.Cells.3.heatTransfer.U.$pDERNLSJac9.dummyVarNLSJac9[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* evap.Wall_int.T[3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* evap.Cells[3].T variable */)) - jacobian->tmpVars[17] /* evap.Cells.3.qdot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1346;
}

/*
equation index: 1347
type: SIMPLE_ASSIGN
evap.Cells.4.Q_tot.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells[4].Vi * evap.Cells[4].rho * $DER.evap.Cells[4].h.SeedNLSJac9 + evap.Cells.4.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 * (evap.Cells[4].h - evap.Cells[3].h) - evap.Cells[4].Vi * $DER.evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1347(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 34;
  const int equationIndexes[2] = {1,1347};
  jacobian->tmpVars[21] /* evap.Cells.4.Q_tot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* evap.Cells[4].rho variable */)) * (jacobian->seedVars[4] /* der(evap.Cells[4].h.SeedNLSJac9) SEED_VAR */)) + (jacobian->tmpVars[20] /* evap.Cells.4.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Cells[4].Vi PARAM */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1347;
}

/*
equation index: 1348
type: SIMPLE_ASSIGN
evap.Cells.4.qdot.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells.4.Q_tot.$pDERNLSJac9.dummyVarNLSJac9 / evap.Cells[4].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1348(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 35;
  const int equationIndexes[2] = {1,1348};
  jacobian->tmpVars[23] /* evap.Cells.4.qdot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[21] /* evap.Cells.4.Q_tot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[107]] /* evap.Cells[4].Ai PARAM */),"evap.Cells[4].Ai");
  threadData->lastEquationSolved = 1348;
}

/*
equation index: 1349
type: SIMPLE_ASSIGN
coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[4] = evap.Cells.4.qdot.$pDERNLSJac9.dummyVarNLSJac9 * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1349(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 36;
  const int equationIndexes[2] = {1,1349};
  jacobian->tmpVars[36] /* coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[4] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[23] /* evap.Cells.4.qdot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 1349;
}

/*
equation index: 1350
type: SIMPLE_ASSIGN
coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[5] = (coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[4] * coil_evap.cp_air * coil_evap.m_dot_air - coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[4]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1350(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 37;
  const int equationIndexes[2] = {1,1350};
  jacobian->tmpVars[37] /* coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[5] JACOBIAN_TMP_VAR */ = DIVISION(((jacobian->tmpVars[34] /* coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[4] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) - jacobian->tmpVars[36] /* coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[4] JACOBIAN_TMP_VAR */,((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air");
  threadData->lastEquationSolved = 1350;
}

/*
equation index: 1351
type: SIMPLE_ASSIGN
evap.Wall_int.T.$pDERNLSJac9.dummyVarNLSJac9[4] = 0.5 * (coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[4] + coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[5]) - coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[4] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1351(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 38;
  const int equationIndexes[2] = {1,1351};
  jacobian->tmpVars[38] /* evap.Wall_int.T.$pDERNLSJac9.dummyVarNLSJac9[4] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[34] /* coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[4] JACOBIAN_TMP_VAR */ + jacobian->tmpVars[37] /* coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[5] JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->tmpVars[36] /* coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[4] JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell"));
  threadData->lastEquationSolved = 1351;
}

/*
equation index: 1352
type: SIMPLE_ASSIGN
$res_NLSJac9_3.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells[4].heatTransfer.U[1] * evap.Wall_int.T.$pDERNLSJac9.dummyVarNLSJac9[4] + evap.Cells.4.heatTransfer.U.$pDERNLSJac9.dummyVarNLSJac9[1] * (evap.Wall_int.T[4] - evap.Cells[4].T) - evap.Cells.4.qdot.$pDERNLSJac9.dummyVarNLSJac9
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1352(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 39;
  const int equationIndexes[2] = {1,1352};
  jacobian->resultVars[2] /* $res_NLSJac9_3.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* evap.Cells[4].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[38] /* evap.Wall_int.T.$pDERNLSJac9.dummyVarNLSJac9[4] JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[22] /* evap.Cells.4.heatTransfer.U.$pDERNLSJac9.dummyVarNLSJac9[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* evap.Wall_int.T[4] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[936]] /* evap.Cells[4].T variable */)) - jacobian->tmpVars[23] /* evap.Cells.4.qdot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1352;
}

/*
equation index: 1353
type: SIMPLE_ASSIGN
evap.Cells.5.Q_tot.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells[5].Vi * evap.Cells[5].rho * $DER.evap.Cells[5].h.SeedNLSJac9 + evap.Cells.5.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 * (evap.Cells[5].h - evap.Cells[4].h) - evap.Cells[5].Vi * $DER.evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1353(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 40;
  const int equationIndexes[2] = {1,1353};
  jacobian->tmpVars[27] /* evap.Cells.5.Q_tot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* evap.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* evap.Cells[5].rho variable */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].h.SeedNLSJac9) SEED_VAR */)) + (jacobian->tmpVars[26] /* evap.Cells.5.M_dot_su.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* evap.Cells[5].Vi PARAM */)) * (jacobian->tmpVars[0] /* der(evap.Cells.5.p.$pDERNLSJac9.dummyVarNLSJac9) JACOBIAN_TMP_VAR */));
  threadData->lastEquationSolved = 1353;
}

/*
equation index: 1354
type: SIMPLE_ASSIGN
evap.Cells.5.qdot.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells.5.Q_tot.$pDERNLSJac9.dummyVarNLSJac9 / evap.Cells[5].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1354(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 41;
  const int equationIndexes[2] = {1,1354};
  jacobian->tmpVars[29] /* evap.Cells.5.qdot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[27] /* evap.Cells.5.Q_tot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* evap.Cells[5].Ai PARAM */),"evap.Cells[5].Ai");
  threadData->lastEquationSolved = 1354;
}

/*
equation index: 1355
type: SIMPLE_ASSIGN
coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[5] = evap.Cells.5.qdot.$pDERNLSJac9.dummyVarNLSJac9 * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1355(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 42;
  const int equationIndexes[2] = {1,1355};
  jacobian->tmpVars[39] /* coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[5] JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[29] /* evap.Cells.5.qdot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 1355;
}

/*
equation index: 1356
type: SIMPLE_ASSIGN
T_air_off_evap_k.$pDERNLSJac9.dummyVarNLSJac9 = (coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[5] * coil_evap.cp_air * coil_evap.m_dot_air - coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[5]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1356(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 43;
  const int equationIndexes[2] = {1,1356};
  jacobian->tmpVars[40] /* T_air_off_evap_k.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */ = DIVISION(((jacobian->tmpVars[37] /* coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[5] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) - jacobian->tmpVars[39] /* coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[5] JACOBIAN_TMP_VAR */,((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air");
  threadData->lastEquationSolved = 1356;
}

/*
equation index: 1357
type: SIMPLE_ASSIGN
evap.Wall_int.T.$pDERNLSJac9.dummyVarNLSJac9[5] = 0.5 * (coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[5] + T_air_off_evap_k.$pDERNLSJac9.dummyVarNLSJac9) - coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[5] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1357(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 44;
  const int equationIndexes[2] = {1,1357};
  jacobian->tmpVars[41] /* evap.Wall_int.T.$pDERNLSJac9.dummyVarNLSJac9[5] JACOBIAN_TMP_VAR */ = (0.5) * (jacobian->tmpVars[37] /* coil_evap.T_air.$pDERNLSJac9.dummyVarNLSJac9[5] JACOBIAN_TMP_VAR */ + jacobian->tmpVars[40] /* T_air_off_evap_k.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */) - (DIVISION(jacobian->tmpVars[39] /* coil_evap.Q_cell.$pDERNLSJac9.dummyVarNLSJac9[5] JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell"));
  threadData->lastEquationSolved = 1357;
}

/*
equation index: 1358
type: SIMPLE_ASSIGN
$res_NLSJac9_2.$pDERNLSJac9.dummyVarNLSJac9 = evap.Cells[5].heatTransfer.U[1] * evap.Wall_int.T.$pDERNLSJac9.dummyVarNLSJac9[5] + evap.Cells.5.heatTransfer.U.$pDERNLSJac9.dummyVarNLSJac9[1] * (evap.Wall_int.T[5] - evap.Cells[5].T) - evap.Cells.5.qdot.$pDERNLSJac9.dummyVarNLSJac9
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1358(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 45;
  const int equationIndexes[2] = {1,1358};
  jacobian->resultVars[1] /* $res_NLSJac9_2.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* evap.Cells[5].heatTransfer.U[1] variable */)) * (jacobian->tmpVars[41] /* evap.Wall_int.T.$pDERNLSJac9.dummyVarNLSJac9[5] JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[28] /* evap.Cells.5.heatTransfer.U.$pDERNLSJac9.dummyVarNLSJac9[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* evap.Wall_int.T[5] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[937]] /* evap.Cells[5].T variable */)) - jacobian->tmpVars[29] /* evap.Cells.5.qdot.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1358;
}

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac9_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_NLSJac9;
  
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac9_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_NLSJac9;
  
  static void (*const eqFunctions[46])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1313,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1314,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1315,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1316,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1317,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1318,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1319,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1320,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1321,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1322,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1323,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1324,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1325,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1326,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1327,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1328,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1329,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1330,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1331,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1332,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1333,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1334,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1335,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1336,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1337,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1338,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1339,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1340,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1341,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1342,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1343,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1344,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1345,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1346,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1347,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1348,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1349,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1350,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1351,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1352,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1353,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1354,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1355,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1356,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1357,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1358
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 46; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_JacNLSJac9_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {1313, 1314, 1315, 1316, 1317, 1318, 1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

int RefrigerationTrainer_ClosedLoopM1eCS_functionJacADJ_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_JacADJ_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int RefrigerationTrainer_ClosedLoopM1eCS_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_JacH_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int RefrigerationTrainer_ClosedLoopM1eCS_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_JacF_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int RefrigerationTrainer_ClosedLoopM1eCS_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_JacD_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int RefrigerationTrainer_ClosedLoopM1eCS_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_JacC_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int RefrigerationTrainer_ClosedLoopM1eCS_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_JacB_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacA_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_A;
  
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_A;
  
  
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_JacA_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianLSJac1(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "RefrigerationTrainer.ClosedLoopM1eCS_JacLSJac1.bin");
  
  initJacobian(jacobian, 1, 1, 4, NULL, RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac1_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 1);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianLSJac2(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "RefrigerationTrainer.ClosedLoopM1eCS_JacLSJac2.bin");
  
  initJacobian(jacobian, 1, 1, 4, NULL, RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac2_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 1);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianNLSJac3(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "RefrigerationTrainer.ClosedLoopM1eCS_JacNLSJac3.bin");
  
  initJacobian(jacobian, 5, 5, 47, NULL, RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac3_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(5, 19, 5);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 5+1, pFile, FALSE);
  if (count != 5+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 5+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 19, pFile, FALSE);
  if (count != 19) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 19, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 5);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 5);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 5);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 5);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 5);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianNLSJac4(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "RefrigerationTrainer.ClosedLoopM1eCS_JacNLSJac4.bin");
  
  initJacobian(jacobian, 5, 5, 47, NULL, RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac4_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(5, 25, 5);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 5+1, pFile, FALSE);
  if (count != 5+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 5+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 25, pFile, FALSE);
  if (count != 25) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 25, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 5);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 5);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 5);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 5);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 5);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianLSJac6(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "RefrigerationTrainer.ClosedLoopM1eCS_JacLSJac6.bin");
  
  initJacobian(jacobian, 1, 1, 4, NULL, RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac6_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 1);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianNLSJac7(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "RefrigerationTrainer.ClosedLoopM1eCS_JacNLSJac7.bin");
  
  initJacobian(jacobian, 5, 5, 47, NULL, RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac7_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(5, 25, 5);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 5+1, pFile, FALSE);
  if (count != 5+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 5+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 25, pFile, FALSE);
  if (count != 25) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 25, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 5);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 5);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 5);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 5);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 5);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianLSJac8(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "RefrigerationTrainer.ClosedLoopM1eCS_JacLSJac8.bin");
  
  initJacobian(jacobian, 1, 1, 4, NULL, RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac8_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 1);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianNLSJac9(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "RefrigerationTrainer.ClosedLoopM1eCS_JacNLSJac9.bin");
  
  initJacobian(jacobian, 5, 5, 47, NULL, RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac9_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(5, 19, 5);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 5+1, pFile, FALSE);
  if (count != 5+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 5+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 19, pFile, FALSE);
  if (count != 19) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 19, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 5);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 5);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 5);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 5);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 5);
  
  omc_fclose(pFile);
  
  return 0;
}
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianADJ(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "RefrigerationTrainer.ClosedLoopM1eCS_JacA.bin");
  
  initJacobian(jacobian, 14, 14, 0, NULL, RefrigerationTrainer_ClosedLoopM1eCS_functionJacA_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(14, 111, 9);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 14+1, pFile, FALSE);
  if (count != 14+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 14+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 111, pFile, FALSE);
  if (count != 111) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 111, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 14);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 14);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 14);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 14);
  /* color 5 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 2, 14);
  /* color 6 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 2, 14);
  /* color 7 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 7, 2, 14);
  /* color 8 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 8, 2, 14);
  /* color 9 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 9, 2, 14);
  
  omc_fclose(pFile);
  
  return 0;
}


