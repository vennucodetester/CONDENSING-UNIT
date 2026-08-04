/* Jacobians 11 */
#include "RefrigerationTrainer.ClosedLoopM1e_model.h"
#include "RefrigerationTrainer.ClosedLoopM1e_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 626
type: SIMPLE_ASSIGN
cond.Cells.3.dMdt.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells[3].Vi * (cond.Cells[3].drdh * $DER.cond.Cells[3].h.SeedNLSJac1 + cond.Cells[3].drdp * $DER.cond.Cells[1].p.SeedNLSJac1)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_626(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,626};
  jacobian->tmpVars[4] /* cond.Cells.3.dMdt.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* cond.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cond.Cells[3].drdh variable */)) * (jacobian->seedVars[5] /* der(cond.Cells[3].h.SeedNLSJac1) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cond.Cells[3].drdp variable */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac1) SEED_VAR */));
  threadData->lastEquationSolved = 626;
}

/*
equation index: 627
type: SIMPLE_ASSIGN
cond.Cells.2.dMdt.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells[2].Vi * (cond.Cells[2].drdh * $DER.cond.Cells[2].h.SeedNLSJac1 + cond.Cells[2].drdp * $DER.cond.Cells[1].p.SeedNLSJac1)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_627(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,627};
  jacobian->tmpVars[3] /* cond.Cells.2.dMdt.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* cond.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cond.Cells[2].drdh variable */)) * (jacobian->seedVars[4] /* der(cond.Cells[2].h.SeedNLSJac1) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cond.Cells[2].drdp variable */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac1) SEED_VAR */));
  threadData->lastEquationSolved = 627;
}

/*
equation index: 628
type: SIMPLE_ASSIGN
cond.Cells.1.dMdt.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells[1].Vi * (cond.Cells[1].drdh * $DER.cond.Cells[1].h.SeedNLSJac1 + cond.Cells[1].drdp * $DER.cond.Cells[1].p.SeedNLSJac1)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_628(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,628};
  jacobian->tmpVars[2] /* cond.Cells.1.dMdt.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* cond.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cond.Cells[1].drdh variable */)) * (jacobian->seedVars[3] /* der(cond.Cells[1].h.SeedNLSJac1) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* cond.Cells[1].drdp variable */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac1) SEED_VAR */));
  threadData->lastEquationSolved = 628;
}

/*
equation index: 629
type: SIMPLE_ASSIGN
cond.Cells.4.dMdt.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells[4].Vi * (cond.Cells[4].drdh * $DER.cond.Cells[4].h.SeedNLSJac1 + cond.Cells[4].drdp * $DER.cond.Cells[1].p.SeedNLSJac1)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_629(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,629};
  jacobian->tmpVars[1] /* cond.Cells.4.dMdt.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* cond.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* cond.Cells[4].drdh variable */)) * (jacobian->seedVars[2] /* der(cond.Cells[4].h.SeedNLSJac1) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cond.Cells[4].drdp variable */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac1) SEED_VAR */));
  threadData->lastEquationSolved = 629;
}

/*
equation index: 630
type: SIMPLE_ASSIGN
cond.Cells.5.dMdt.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells[5].Vi * (cond.Cells[5].drdh * $DER.cond.Cells[5].h.SeedNLSJac1 + cond.Cells[5].drdp * $DER.cond.Cells[1].p.SeedNLSJac1)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_630(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,630};
  jacobian->tmpVars[0] /* cond.Cells.5.dMdt.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* cond.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cond.Cells[5].drdh variable */)) * (jacobian->seedVars[1] /* der(cond.Cells[5].h.SeedNLSJac1) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cond.Cells[5].drdp variable */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac1) SEED_VAR */));
  threadData->lastEquationSolved = 630;
}

/*
equation index: 631
type: SIMPLE_ASSIGN
cond.Cells.5.heatTransfer.U.$pDERNLSJac1.dummyVarNLSJac1[1] = 0.8 * cond.Cells[5].heatTransfer.Unom * abs(cond.Cells[5].M_dot_su / cond.Cells[5].heatTransfer.Mdotnom) ^ (-0.19999999999999996) * sign(cond.Cells[5].M_dot_su / cond.Cells[5].heatTransfer.Mdotnom) * cond.Cells.5.dMdt.$pDERNLSJac1.dummyVarNLSJac1 / cond.Cells[5].heatTransfer.Mdotnom
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_631(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,631};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* cond.Cells[5].heatTransfer.Mdotnom variable */),"cond.Cells[5].heatTransfer.Mdotnom"));
  tmp1 = -0.19999999999999996;
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  jacobian->tmpVars[6] /* cond.Cells.5.heatTransfer.U.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[831]] /* cond.Cells[5].heatTransfer.Unom variable */)) * ((tmp2) * ((sign(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* cond.Cells[5].heatTransfer.Mdotnom variable */),"cond.Cells[5].heatTransfer.Mdotnom"))) * (DIVISION(jacobian->tmpVars[0] /* cond.Cells.5.dMdt.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* cond.Cells[5].heatTransfer.Mdotnom variable */),"cond.Cells[5].heatTransfer.Mdotnom")))));
  threadData->lastEquationSolved = 631;
}

/*
equation index: 632
type: SIMPLE_ASSIGN
cond.Cells.5.qdot.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells.5.heatTransfer.U.$pDERNLSJac1.dummyVarNLSJac1[1] * (T_amb_k - cond.Cells[5].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_632(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,632};
  jacobian->tmpVars[8] /* cond.Cells.5.qdot.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[6] /* cond.Cells.5.heatTransfer.U.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cond.Cells[5].T variable */));
  threadData->lastEquationSolved = 632;
}

/*
equation index: 633
type: SIMPLE_ASSIGN
cond.Cells.5.Q_tot.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells[5].Vi * cond.Cells[5].rho * $DER.cond.Cells[5].h.SeedNLSJac1 + cond.Cells.5.dMdt.$pDERNLSJac1.dummyVarNLSJac1 * (cond.Cells[5].h - cond.Cells[5].hnode_su) - cond.Cells[5].Vi * $DER.cond.Cells[1].p.SeedNLSJac1
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_633(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,633};
  jacobian->tmpVars[7] /* cond.Cells.5.Q_tot.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* cond.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* cond.Cells[5].rho variable */)) * (jacobian->seedVars[1] /* der(cond.Cells[5].h.SeedNLSJac1) SEED_VAR */)) + (jacobian->tmpVars[0] /* cond.Cells.5.dMdt.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* cond.Cells[5].Vi PARAM */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac1) SEED_VAR */));
  threadData->lastEquationSolved = 633;
}

/*
equation index: 634
type: SIMPLE_ASSIGN
$res_NLSJac1_6.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells[5].Ai * cond.Cells.5.qdot.$pDERNLSJac1.dummyVarNLSJac1 - cond.Cells.5.Q_tot.$pDERNLSJac1.dummyVarNLSJac1
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_634(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,634};
  jacobian->resultVars[5] /* $res_NLSJac1_6.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[16]] /* cond.Cells[5].Ai PARAM */)) * (jacobian->tmpVars[8] /* cond.Cells.5.qdot.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[7] /* cond.Cells.5.Q_tot.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 634;
}

/*
equation index: 635
type: SIMPLE_ASSIGN
cond.Cells.5.InFlow.m_flow.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells.5.dMdt.$pDERNLSJac1.dummyVarNLSJac1 * (*Real*)(cond.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_635(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,635};
  jacobian->tmpVars[9] /* cond.Cells.5.InFlow.m_flow.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[0] /* cond.Cells.5.dMdt.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[5].Nt PARAM */)));
  threadData->lastEquationSolved = 635;
}

/*
equation index: 636
type: SIMPLE_ASSIGN
cond.Cells.4.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells.5.InFlow.m_flow.$pDERNLSJac1.dummyVarNLSJac1 / (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_636(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,636};
  jacobian->tmpVars[10] /* cond.Cells.4.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[9] /* cond.Cells.5.InFlow.m_flow.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[4].Nt PARAM */)),"/*Real*/(cond.Cells[4].Nt)");
  threadData->lastEquationSolved = 636;
}

/*
equation index: 637
type: SIMPLE_ASSIGN
cond.Cells.4.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells.4.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 + cond.Cells.4.dMdt.$pDERNLSJac1.dummyVarNLSJac1
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_637(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,637};
  jacobian->tmpVars[11] /* cond.Cells.4.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[10] /* cond.Cells.4.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[1] /* cond.Cells.4.dMdt.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 637;
}

/*
equation index: 638
type: SIMPLE_ASSIGN
cond.Cells.4.heatTransfer.U.$pDERNLSJac1.dummyVarNLSJac1[1] = 0.8 * cond.Cells[4].heatTransfer.Unom * abs(cond.Cells[4].M_dot_su / cond.Cells[4].heatTransfer.Mdotnom) ^ (-0.19999999999999996) * sign(cond.Cells[4].M_dot_su / cond.Cells[4].heatTransfer.Mdotnom) * cond.Cells.4.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 / cond.Cells[4].heatTransfer.Mdotnom
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_638(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,638};
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  tmp7 = fabs(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* cond.Cells[4].heatTransfer.Mdotnom variable */),"cond.Cells[4].heatTransfer.Mdotnom"));
  tmp8 = -0.19999999999999996;
  if(tmp7 < 0.0 && tmp8 != 0.0)
  {
    tmp10 = modf(tmp8, &tmp11);
    
    if(tmp10 > 0.5)
    {
      tmp10 -= 1.0;
      tmp11 += 1.0;
    }
    else if(tmp10 < -0.5)
    {
      tmp10 += 1.0;
      tmp11 -= 1.0;
    }
    
    if(fabs(tmp10) < 1e-10)
      tmp9 = pow(tmp7, tmp11);
    else
    {
      tmp13 = modf(1.0/tmp8, &tmp12);
      if(tmp13 > 0.5)
      {
        tmp13 -= 1.0;
        tmp12 += 1.0;
      }
      else if(tmp13 < -0.5)
      {
        tmp13 += 1.0;
        tmp12 -= 1.0;
      }
      if(fabs(tmp13) < 1e-10 && ((unsigned long)tmp12 & 1))
      {
        tmp9 = -pow(-tmp7, tmp10)*pow(tmp7, tmp11);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp7, tmp8);
      }
    }
  }
  else
  {
    tmp9 = pow(tmp7, tmp8);
  }
  if(isnan(tmp9) || isinf(tmp9))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp7, tmp8);
  }
  jacobian->tmpVars[13] /* cond.Cells.4.heatTransfer.U.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[830]] /* cond.Cells[4].heatTransfer.Unom variable */)) * ((tmp9) * ((sign(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* cond.Cells[4].heatTransfer.Mdotnom variable */),"cond.Cells[4].heatTransfer.Mdotnom"))) * (DIVISION(jacobian->tmpVars[11] /* cond.Cells.4.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* cond.Cells[4].heatTransfer.Mdotnom variable */),"cond.Cells[4].heatTransfer.Mdotnom")))));
  threadData->lastEquationSolved = 638;
}

/*
equation index: 639
type: SIMPLE_ASSIGN
cond.Cells.4.qdot.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells.4.heatTransfer.U.$pDERNLSJac1.dummyVarNLSJac1[1] * (T_amb_k - cond.Cells[4].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_639(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,639};
  jacobian->tmpVars[14] /* cond.Cells.4.qdot.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[13] /* cond.Cells.4.heatTransfer.U.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cond.Cells[4].T variable */));
  threadData->lastEquationSolved = 639;
}

/*
equation index: 640
type: SIMPLE_ASSIGN
cond.Cells.4.InFlow.m_flow.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells.4.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 * (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_640(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,640};
  jacobian->tmpVars[15] /* cond.Cells.4.InFlow.m_flow.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[11] /* cond.Cells.4.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[4].Nt PARAM */)));
  threadData->lastEquationSolved = 640;
}

/*
equation index: 641
type: SIMPLE_ASSIGN
cond.Cells.3.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells.4.InFlow.m_flow.$pDERNLSJac1.dummyVarNLSJac1 / (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_641(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,641};
  jacobian->tmpVars[16] /* cond.Cells.3.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[15] /* cond.Cells.4.InFlow.m_flow.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[3].Nt PARAM */)),"/*Real*/(cond.Cells[3].Nt)");
  threadData->lastEquationSolved = 641;
}

/*
equation index: 642
type: SIMPLE_ASSIGN
cond.Cells.3.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells.3.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 + cond.Cells.3.dMdt.$pDERNLSJac1.dummyVarNLSJac1
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_642(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,642};
  jacobian->tmpVars[17] /* cond.Cells.3.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[16] /* cond.Cells.3.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[4] /* cond.Cells.3.dMdt.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 642;
}

/*
equation index: 643
type: SIMPLE_ASSIGN
cond.Cells.3.heatTransfer.U.$pDERNLSJac1.dummyVarNLSJac1[1] = 0.8 * cond.Cells[3].heatTransfer.Unom * abs(cond.Cells[3].M_dot_su / cond.Cells[3].heatTransfer.Mdotnom) ^ (-0.19999999999999996) * sign(cond.Cells[3].M_dot_su / cond.Cells[3].heatTransfer.Mdotnom) * cond.Cells.3.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 / cond.Cells[3].heatTransfer.Mdotnom
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_643(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,643};
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  tmp14 = fabs(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* cond.Cells[3].heatTransfer.Mdotnom variable */),"cond.Cells[3].heatTransfer.Mdotnom"));
  tmp15 = -0.19999999999999996;
  if(tmp14 < 0.0 && tmp15 != 0.0)
  {
    tmp17 = modf(tmp15, &tmp18);
    
    if(tmp17 > 0.5)
    {
      tmp17 -= 1.0;
      tmp18 += 1.0;
    }
    else if(tmp17 < -0.5)
    {
      tmp17 += 1.0;
      tmp18 -= 1.0;
    }
    
    if(fabs(tmp17) < 1e-10)
      tmp16 = pow(tmp14, tmp18);
    else
    {
      tmp20 = modf(1.0/tmp15, &tmp19);
      if(tmp20 > 0.5)
      {
        tmp20 -= 1.0;
        tmp19 += 1.0;
      }
      else if(tmp20 < -0.5)
      {
        tmp20 += 1.0;
        tmp19 -= 1.0;
      }
      if(fabs(tmp20) < 1e-10 && ((unsigned long)tmp19 & 1))
      {
        tmp16 = -pow(-tmp14, tmp17)*pow(tmp14, tmp18);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp14, tmp15);
      }
    }
  }
  else
  {
    tmp16 = pow(tmp14, tmp15);
  }
  if(isnan(tmp16) || isinf(tmp16))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp14, tmp15);
  }
  jacobian->tmpVars[19] /* cond.Cells.3.heatTransfer.U.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* cond.Cells[3].heatTransfer.Unom variable */)) * ((tmp16) * ((sign(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* cond.Cells[3].heatTransfer.Mdotnom variable */),"cond.Cells[3].heatTransfer.Mdotnom"))) * (DIVISION(jacobian->tmpVars[17] /* cond.Cells.3.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* cond.Cells[3].heatTransfer.Mdotnom variable */),"cond.Cells[3].heatTransfer.Mdotnom")))));
  threadData->lastEquationSolved = 643;
}

/*
equation index: 644
type: SIMPLE_ASSIGN
cond.Cells.3.qdot.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells.3.heatTransfer.U.$pDERNLSJac1.dummyVarNLSJac1[1] * (T_amb_k - cond.Cells[3].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_644(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,644};
  jacobian->tmpVars[20] /* cond.Cells.3.qdot.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[19] /* cond.Cells.3.heatTransfer.U.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[739]] /* cond.Cells[3].T variable */));
  threadData->lastEquationSolved = 644;
}

/*
equation index: 645
type: SIMPLE_ASSIGN
cond.Cells.3.InFlow.m_flow.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells.3.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 * (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_645(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,645};
  jacobian->tmpVars[21] /* cond.Cells.3.InFlow.m_flow.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[17] /* cond.Cells.3.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[3].Nt PARAM */)));
  threadData->lastEquationSolved = 645;
}

/*
equation index: 646
type: SIMPLE_ASSIGN
cond.Cells.2.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells.3.InFlow.m_flow.$pDERNLSJac1.dummyVarNLSJac1 / (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_646(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,646};
  jacobian->tmpVars[22] /* cond.Cells.2.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[21] /* cond.Cells.3.InFlow.m_flow.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[2].Nt PARAM */)),"/*Real*/(cond.Cells[2].Nt)");
  threadData->lastEquationSolved = 646;
}

/*
equation index: 647
type: SIMPLE_ASSIGN
cond.Cells.2.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells.2.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 + cond.Cells.2.dMdt.$pDERNLSJac1.dummyVarNLSJac1
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_647(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,647};
  jacobian->tmpVars[23] /* cond.Cells.2.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[22] /* cond.Cells.2.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[3] /* cond.Cells.2.dMdt.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 647;
}

/*
equation index: 648
type: SIMPLE_ASSIGN
cond.Cells.2.heatTransfer.U.$pDERNLSJac1.dummyVarNLSJac1[1] = 0.8 * cond.Cells[2].heatTransfer.Unom * abs(cond.Cells[2].M_dot_su / cond.Cells[2].heatTransfer.Mdotnom) ^ (-0.19999999999999996) * sign(cond.Cells[2].M_dot_su / cond.Cells[2].heatTransfer.Mdotnom) * cond.Cells.2.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 / cond.Cells[2].heatTransfer.Mdotnom
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_648(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 22;
  const int equationIndexes[2] = {1,648};
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  tmp21 = fabs(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* cond.Cells[2].heatTransfer.Mdotnom variable */),"cond.Cells[2].heatTransfer.Mdotnom"));
  tmp22 = -0.19999999999999996;
  if(tmp21 < 0.0 && tmp22 != 0.0)
  {
    tmp24 = modf(tmp22, &tmp25);
    
    if(tmp24 > 0.5)
    {
      tmp24 -= 1.0;
      tmp25 += 1.0;
    }
    else if(tmp24 < -0.5)
    {
      tmp24 += 1.0;
      tmp25 -= 1.0;
    }
    
    if(fabs(tmp24) < 1e-10)
      tmp23 = pow(tmp21, tmp25);
    else
    {
      tmp27 = modf(1.0/tmp22, &tmp26);
      if(tmp27 > 0.5)
      {
        tmp27 -= 1.0;
        tmp26 += 1.0;
      }
      else if(tmp27 < -0.5)
      {
        tmp27 += 1.0;
        tmp26 -= 1.0;
      }
      if(fabs(tmp27) < 1e-10 && ((unsigned long)tmp26 & 1))
      {
        tmp23 = -pow(-tmp21, tmp24)*pow(tmp21, tmp25);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp21, tmp22);
      }
    }
  }
  else
  {
    tmp23 = pow(tmp21, tmp22);
  }
  if(isnan(tmp23) || isinf(tmp23))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp21, tmp22);
  }
  jacobian->tmpVars[25] /* cond.Cells.2.heatTransfer.U.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[828]] /* cond.Cells[2].heatTransfer.Unom variable */)) * ((tmp23) * ((sign(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* cond.Cells[2].heatTransfer.Mdotnom variable */),"cond.Cells[2].heatTransfer.Mdotnom"))) * (DIVISION(jacobian->tmpVars[23] /* cond.Cells.2.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* cond.Cells[2].heatTransfer.Mdotnom variable */),"cond.Cells[2].heatTransfer.Mdotnom")))));
  threadData->lastEquationSolved = 648;
}

/*
equation index: 649
type: SIMPLE_ASSIGN
cond.Cells.2.qdot.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells.2.heatTransfer.U.$pDERNLSJac1.dummyVarNLSJac1[1] * (T_amb_k - cond.Cells[2].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_649(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 23;
  const int equationIndexes[2] = {1,649};
  jacobian->tmpVars[26] /* cond.Cells.2.qdot.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[25] /* cond.Cells.2.heatTransfer.U.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cond.Cells[2].T variable */));
  threadData->lastEquationSolved = 649;
}

/*
equation index: 650
type: SIMPLE_ASSIGN
cond.Cells.2.InFlow.m_flow.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells.2.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 * (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_650(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 24;
  const int equationIndexes[2] = {1,650};
  jacobian->tmpVars[27] /* cond.Cells.2.InFlow.m_flow.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[23] /* cond.Cells.2.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[2].Nt PARAM */)));
  threadData->lastEquationSolved = 650;
}

/*
equation index: 651
type: SIMPLE_ASSIGN
cond.Cells.1.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells.2.InFlow.m_flow.$pDERNLSJac1.dummyVarNLSJac1 / (*Real*)(cond.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_651(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 25;
  const int equationIndexes[2] = {1,651};
  jacobian->tmpVars[28] /* cond.Cells.1.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[27] /* cond.Cells.2.InFlow.m_flow.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* cond.Cells[1].Nt PARAM */)),"/*Real*/(cond.Cells[1].Nt)");
  threadData->lastEquationSolved = 651;
}

/*
equation index: 652
type: SIMPLE_ASSIGN
$res_NLSJac1_4.$pDERNLSJac1.dummyVarNLSJac1 = (-cond.Cells.1.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1) - cond.Cells.1.dMdt.$pDERNLSJac1.dummyVarNLSJac1
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_652(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 26;
  const int equationIndexes[2] = {1,652};
  jacobian->resultVars[3] /* $res_NLSJac1_4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (-jacobian->tmpVars[28] /* cond.Cells.1.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[2] /* cond.Cells.1.dMdt.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 652;
}

/*
equation index: 653
type: SIMPLE_ASSIGN
$res_NLSJac1_5.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells.1.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 * (cond.Cells[2].hnode_su - cond.Cells[1].h) + cond.Cells[1].Vi * (cond.Cells[1].rho * $DER.cond.Cells[1].h.SeedNLSJac1 - $DER.cond.Cells[1].p.SeedNLSJac1)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_653(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 27;
  const int equationIndexes[2] = {1,653};
  jacobian->resultVars[4] /* $res_NLSJac1_5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (jacobian->tmpVars[28] /* cond.Cells.1.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* cond.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* cond.Cells[1].rho variable */)) * (jacobian->seedVars[3] /* der(cond.Cells[1].h.SeedNLSJac1) SEED_VAR */) - jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac1) SEED_VAR */);
  threadData->lastEquationSolved = 653;
}

/*
equation index: 654
type: SIMPLE_ASSIGN
cond.Cells.2.Q_tot.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells[2].Vi * cond.Cells[2].rho * $DER.cond.Cells[2].h.SeedNLSJac1 + cond.Cells.2.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 * (cond.Cells[3].hnode_su - cond.Cells[2].h) + cond.Cells.2.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 * (cond.Cells[2].h - cond.Cells[2].hnode_su) - cond.Cells[2].Vi * $DER.cond.Cells[1].p.SeedNLSJac1
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_654(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 28;
  const int equationIndexes[2] = {1,654};
  jacobian->tmpVars[24] /* cond.Cells.2.Q_tot.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* cond.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* cond.Cells[2].rho variable */)) * (jacobian->seedVars[4] /* der(cond.Cells[2].h.SeedNLSJac1) SEED_VAR */)) + (jacobian->tmpVars[22] /* cond.Cells.2.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */)) + (jacobian->tmpVars[23] /* cond.Cells.2.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* cond.Cells[2].Vi PARAM */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac1) SEED_VAR */));
  threadData->lastEquationSolved = 654;
}

/*
equation index: 655
type: SIMPLE_ASSIGN
$res_NLSJac1_3.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells[2].Ai * cond.Cells.2.qdot.$pDERNLSJac1.dummyVarNLSJac1 - cond.Cells.2.Q_tot.$pDERNLSJac1.dummyVarNLSJac1
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_655(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 29;
  const int equationIndexes[2] = {1,655};
  jacobian->resultVars[2] /* $res_NLSJac1_3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* cond.Cells[2].Ai PARAM */)) * (jacobian->tmpVars[26] /* cond.Cells.2.qdot.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[24] /* cond.Cells.2.Q_tot.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 655;
}

/*
equation index: 656
type: SIMPLE_ASSIGN
cond.Cells.3.Q_tot.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells[3].Vi * cond.Cells[3].rho * $DER.cond.Cells[3].h.SeedNLSJac1 + cond.Cells.3.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 * (cond.Cells[4].hnode_su - cond.Cells[3].h) + cond.Cells.3.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 * (cond.Cells[3].h - cond.Cells[3].hnode_su) - cond.Cells[3].Vi * $DER.cond.Cells[1].p.SeedNLSJac1
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_656(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 30;
  const int equationIndexes[2] = {1,656};
  jacobian->tmpVars[18] /* cond.Cells.3.Q_tot.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* cond.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[844]] /* cond.Cells[3].rho variable */)) * (jacobian->seedVars[5] /* der(cond.Cells[3].h.SeedNLSJac1) SEED_VAR */)) + (jacobian->tmpVars[16] /* cond.Cells.3.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */)) + (jacobian->tmpVars[17] /* cond.Cells.3.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* cond.Cells[3].Vi PARAM */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac1) SEED_VAR */));
  threadData->lastEquationSolved = 656;
}

/*
equation index: 657
type: SIMPLE_ASSIGN
$res_NLSJac1_2.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells[3].Ai * cond.Cells.3.qdot.$pDERNLSJac1.dummyVarNLSJac1 - cond.Cells.3.Q_tot.$pDERNLSJac1.dummyVarNLSJac1
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_657(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 31;
  const int equationIndexes[2] = {1,657};
  jacobian->resultVars[1] /* $res_NLSJac1_2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* cond.Cells[3].Ai PARAM */)) * (jacobian->tmpVars[20] /* cond.Cells.3.qdot.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[18] /* cond.Cells.3.Q_tot.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 657;
}

/*
equation index: 658
type: SIMPLE_ASSIGN
cond.Cells.4.Q_tot.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells[4].Vi * cond.Cells[4].rho * $DER.cond.Cells[4].h.SeedNLSJac1 + cond.Cells.4.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 * (cond.Cells[5].hnode_su - cond.Cells[4].h) + cond.Cells.4.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 * (cond.Cells[4].h - cond.Cells[4].hnode_su) - cond.Cells[4].Vi * $DER.cond.Cells[1].p.SeedNLSJac1
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_658(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 32;
  const int equationIndexes[2] = {1,658};
  jacobian->tmpVars[12] /* cond.Cells.4.Q_tot.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* cond.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* cond.Cells[4].rho variable */)) * (jacobian->seedVars[2] /* der(cond.Cells[4].h.SeedNLSJac1) SEED_VAR */)) + (jacobian->tmpVars[10] /* cond.Cells.4.M_dot_ex.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */)) + (jacobian->tmpVars[11] /* cond.Cells.4.M_dot_su.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* cond.Cells[4].Vi PARAM */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac1) SEED_VAR */));
  threadData->lastEquationSolved = 658;
}

/*
equation index: 659
type: SIMPLE_ASSIGN
$res_NLSJac1_1.$pDERNLSJac1.dummyVarNLSJac1 = cond.Cells[4].Ai * cond.Cells.4.qdot.$pDERNLSJac1.dummyVarNLSJac1 - cond.Cells.4.Q_tot.$pDERNLSJac1.dummyVarNLSJac1
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_659(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 33;
  const int equationIndexes[2] = {1,659};
  jacobian->resultVars[0] /* $res_NLSJac1_1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* cond.Cells[4].Ai PARAM */)) * (jacobian->tmpVars[14] /* cond.Cells.4.qdot.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[12] /* cond.Cells.4.Q_tot.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 659;
}

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac1_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_NLSJac1;
  
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac1_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_NLSJac1;
  
  static void (*const eqFunctions[34])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_626,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_627,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_628,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_629,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_630,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_631,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_632,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_633,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_634,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_635,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_636,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_637,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_638,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_639,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_640,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_641,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_642,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_643,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_644,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_645,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_646,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_647,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_648,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_649,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_650,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_651,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_652,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_653,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_654,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_655,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_656,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_657,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_658,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_659
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 34; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1e_JacNLSJac1_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 705
type: SIMPLE_ASSIGN
evap.Cells.2.dMdt.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells[2].Vi * (evap.Cells[2].drdh * $DER.evap.Cells[2].h.SeedNLSJac2 + evap.Cells[2].drdp * $DER.evap.Cells[5].p.SeedNLSJac2)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_705(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,705};
  jacobian->tmpVars[4] /* evap.Cells.2.dMdt.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* evap.Cells[2].drdh variable */)) * (jacobian->seedVars[5] /* der(evap.Cells[2].h.SeedNLSJac2) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* evap.Cells[2].drdp variable */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac2) SEED_VAR */));
  threadData->lastEquationSolved = 705;
}

/*
equation index: 706
type: SIMPLE_ASSIGN
evap.Cells.1.dMdt.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells[1].Vi * (evap.Cells[1].drdh * $DER.evap.Cells[1].h.SeedNLSJac2 + evap.Cells[1].drdp * $DER.evap.Cells[5].p.SeedNLSJac2)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_706(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,706};
  jacobian->tmpVars[3] /* evap.Cells.1.dMdt.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* evap.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* evap.Cells[1].drdh variable */)) * (jacobian->seedVars[4] /* der(evap.Cells[1].h.SeedNLSJac2) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* evap.Cells[1].drdp variable */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac2) SEED_VAR */));
  threadData->lastEquationSolved = 706;
}

/*
equation index: 707
type: SIMPLE_ASSIGN
evap.Cells.3.dMdt.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells[3].Vi * (evap.Cells[3].drdh * $DER.evap.Cells[3].h.SeedNLSJac2 + evap.Cells[3].drdp * $DER.evap.Cells[5].p.SeedNLSJac2)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_707(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,707};
  jacobian->tmpVars[2] /* evap.Cells.3.dMdt.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* evap.Cells[3].drdh variable */)) * (jacobian->seedVars[3] /* der(evap.Cells[3].h.SeedNLSJac2) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* evap.Cells[3].drdp variable */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac2) SEED_VAR */));
  threadData->lastEquationSolved = 707;
}

/*
equation index: 708
type: SIMPLE_ASSIGN
evap.Cells.4.dMdt.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells[4].Vi * (evap.Cells[4].drdh * $DER.evap.Cells[4].h.SeedNLSJac2 + evap.Cells[4].drdp * $DER.evap.Cells[5].p.SeedNLSJac2)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_708(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,708};
  jacobian->tmpVars[1] /* evap.Cells.4.dMdt.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* evap.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* evap.Cells[4].drdh variable */)) * (jacobian->seedVars[2] /* der(evap.Cells[4].h.SeedNLSJac2) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* evap.Cells[4].drdp variable */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac2) SEED_VAR */));
  threadData->lastEquationSolved = 708;
}

/*
equation index: 709
type: SIMPLE_ASSIGN
evap.Cells.5.dMdt.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells[5].Vi * (evap.Cells[5].drdh * $DER.evap.Cells[5].h.SeedNLSJac2 + evap.Cells[5].drdp * $DER.evap.Cells[5].p.SeedNLSJac2)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_709(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,709};
  jacobian->tmpVars[0] /* evap.Cells.5.dMdt.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* evap.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* evap.Cells[5].drdh variable */)) * (jacobian->seedVars[1] /* der(evap.Cells[5].h.SeedNLSJac2) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* evap.Cells[5].drdp variable */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac2) SEED_VAR */));
  threadData->lastEquationSolved = 709;
}

/*
equation index: 710
type: SIMPLE_ASSIGN
evap.Cells.5.heatTransfer.U.$pDERNLSJac2.dummyVarNLSJac2[1] = 0.8 * evap.Cells[5].heatTransfer.Unom * abs(evap.Cells[5].M_dot_su / evap.Cells[5].heatTransfer.Mdotnom) ^ (-0.19999999999999996) * sign(evap.Cells[5].M_dot_su / evap.Cells[5].heatTransfer.Mdotnom) * evap.Cells.5.dMdt.$pDERNLSJac2.dummyVarNLSJac2 / evap.Cells[5].heatTransfer.Mdotnom
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_710(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,710};
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  tmp28 = fabs(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* evap.Cells[5].heatTransfer.Mdotnom variable */),"evap.Cells[5].heatTransfer.Mdotnom"));
  tmp29 = -0.19999999999999996;
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
  }
  jacobian->tmpVars[6] /* evap.Cells.5.heatTransfer.U.$pDERNLSJac2.dummyVarNLSJac2[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* evap.Cells[5].heatTransfer.Unom variable */)) * ((tmp30) * ((sign(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* evap.Cells[5].heatTransfer.Mdotnom variable */),"evap.Cells[5].heatTransfer.Mdotnom"))) * (DIVISION(jacobian->tmpVars[0] /* evap.Cells.5.dMdt.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* evap.Cells[5].heatTransfer.Mdotnom variable */),"evap.Cells[5].heatTransfer.Mdotnom")))));
  threadData->lastEquationSolved = 710;
}

/*
equation index: 711
type: SIMPLE_ASSIGN
evap.Cells.5.qdot.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells.5.heatTransfer.U.$pDERNLSJac2.dummyVarNLSJac2[1] * (T_box_k - evap.Cells[5].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_711(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,711};
  jacobian->tmpVars[8] /* evap.Cells.5.qdot.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[6] /* evap.Cells.5.heatTransfer.U.$pDERNLSJac2.dummyVarNLSJac2[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* evap.Cells[5].T variable */));
  threadData->lastEquationSolved = 711;
}

/*
equation index: 712
type: SIMPLE_ASSIGN
evap.Cells.5.Q_tot.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells[5].Vi * evap.Cells[5].rho * $DER.evap.Cells[5].h.SeedNLSJac2 + evap.Cells.5.dMdt.$pDERNLSJac2.dummyVarNLSJac2 * (evap.Cells[5].h - evap.Cells[5].hnode_su) - evap.Cells[5].Vi * $DER.evap.Cells[5].p.SeedNLSJac2
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_712(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,712};
  jacobian->tmpVars[7] /* evap.Cells.5.Q_tot.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* evap.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* evap.Cells[5].rho variable */)) * (jacobian->seedVars[1] /* der(evap.Cells[5].h.SeedNLSJac2) SEED_VAR */)) + (jacobian->tmpVars[0] /* evap.Cells.5.dMdt.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* evap.Cells[5].Vi PARAM */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac2) SEED_VAR */));
  threadData->lastEquationSolved = 712;
}

/*
equation index: 713
type: SIMPLE_ASSIGN
$res_NLSJac2_6.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells[5].Ai * evap.Cells.5.qdot.$pDERNLSJac2.dummyVarNLSJac2 - evap.Cells.5.Q_tot.$pDERNLSJac2.dummyVarNLSJac2
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_713(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,713};
  jacobian->resultVars[5] /* $res_NLSJac2_6.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* evap.Cells[5].Ai PARAM */)) * (jacobian->tmpVars[8] /* evap.Cells.5.qdot.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[7] /* evap.Cells.5.Q_tot.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 713;
}

/*
equation index: 714
type: SIMPLE_ASSIGN
evap.Cells.5.InFlow.m_flow.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells.5.dMdt.$pDERNLSJac2.dummyVarNLSJac2 * (*Real*)(evap.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_714(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,714};
  jacobian->tmpVars[9] /* evap.Cells.5.InFlow.m_flow.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[0] /* evap.Cells.5.dMdt.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[5].Nt PARAM */)));
  threadData->lastEquationSolved = 714;
}

/*
equation index: 715
type: SIMPLE_ASSIGN
evap.Cells.4.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells.5.InFlow.m_flow.$pDERNLSJac2.dummyVarNLSJac2 / (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_715(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,715};
  jacobian->tmpVars[10] /* evap.Cells.4.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[9] /* evap.Cells.5.InFlow.m_flow.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[4].Nt PARAM */)),"/*Real*/(evap.Cells[4].Nt)");
  threadData->lastEquationSolved = 715;
}

/*
equation index: 716
type: SIMPLE_ASSIGN
evap.Cells.4.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells.4.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 + evap.Cells.4.dMdt.$pDERNLSJac2.dummyVarNLSJac2
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_716(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,716};
  jacobian->tmpVars[11] /* evap.Cells.4.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[10] /* evap.Cells.4.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[1] /* evap.Cells.4.dMdt.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 716;
}

/*
equation index: 717
type: SIMPLE_ASSIGN
evap.Cells.4.heatTransfer.U.$pDERNLSJac2.dummyVarNLSJac2[1] = 0.8 * evap.Cells[4].heatTransfer.Unom * abs(evap.Cells[4].M_dot_su / evap.Cells[4].heatTransfer.Mdotnom) ^ (-0.19999999999999996) * sign(evap.Cells[4].M_dot_su / evap.Cells[4].heatTransfer.Mdotnom) * evap.Cells.4.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 / evap.Cells[4].heatTransfer.Mdotnom
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_717(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,717};
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  tmp35 = fabs(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* evap.Cells[4].heatTransfer.Mdotnom variable */),"evap.Cells[4].heatTransfer.Mdotnom"));
  tmp36 = -0.19999999999999996;
  if(tmp35 < 0.0 && tmp36 != 0.0)
  {
    tmp38 = modf(tmp36, &tmp39);
    
    if(tmp38 > 0.5)
    {
      tmp38 -= 1.0;
      tmp39 += 1.0;
    }
    else if(tmp38 < -0.5)
    {
      tmp38 += 1.0;
      tmp39 -= 1.0;
    }
    
    if(fabs(tmp38) < 1e-10)
      tmp37 = pow(tmp35, tmp39);
    else
    {
      tmp41 = modf(1.0/tmp36, &tmp40);
      if(tmp41 > 0.5)
      {
        tmp41 -= 1.0;
        tmp40 += 1.0;
      }
      else if(tmp41 < -0.5)
      {
        tmp41 += 1.0;
        tmp40 -= 1.0;
      }
      if(fabs(tmp41) < 1e-10 && ((unsigned long)tmp40 & 1))
      {
        tmp37 = -pow(-tmp35, tmp38)*pow(tmp35, tmp39);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp35, tmp36);
      }
    }
  }
  else
  {
    tmp37 = pow(tmp35, tmp36);
  }
  if(isnan(tmp37) || isinf(tmp37))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp35, tmp36);
  }
  jacobian->tmpVars[13] /* evap.Cells.4.heatTransfer.U.$pDERNLSJac2.dummyVarNLSJac2[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* evap.Cells[4].heatTransfer.Unom variable */)) * ((tmp37) * ((sign(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* evap.Cells[4].heatTransfer.Mdotnom variable */),"evap.Cells[4].heatTransfer.Mdotnom"))) * (DIVISION(jacobian->tmpVars[11] /* evap.Cells.4.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* evap.Cells[4].heatTransfer.Mdotnom variable */),"evap.Cells[4].heatTransfer.Mdotnom")))));
  threadData->lastEquationSolved = 717;
}

/*
equation index: 718
type: SIMPLE_ASSIGN
evap.Cells.4.qdot.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells.4.heatTransfer.U.$pDERNLSJac2.dummyVarNLSJac2[1] * (T_box_k - evap.Cells[4].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_718(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,718};
  jacobian->tmpVars[14] /* evap.Cells.4.qdot.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[13] /* evap.Cells.4.heatTransfer.U.$pDERNLSJac2.dummyVarNLSJac2[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* evap.Cells[4].T variable */));
  threadData->lastEquationSolved = 718;
}

/*
equation index: 719
type: SIMPLE_ASSIGN
evap.Cells.4.InFlow.m_flow.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells.4.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 * (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_719(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,719};
  jacobian->tmpVars[15] /* evap.Cells.4.InFlow.m_flow.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[11] /* evap.Cells.4.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[4].Nt PARAM */)));
  threadData->lastEquationSolved = 719;
}

/*
equation index: 720
type: SIMPLE_ASSIGN
evap.Cells.3.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells.4.InFlow.m_flow.$pDERNLSJac2.dummyVarNLSJac2 / (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_720(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,720};
  jacobian->tmpVars[16] /* evap.Cells.3.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[15] /* evap.Cells.4.InFlow.m_flow.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[3].Nt PARAM */)),"/*Real*/(evap.Cells[3].Nt)");
  threadData->lastEquationSolved = 720;
}

/*
equation index: 721
type: SIMPLE_ASSIGN
evap.Cells.3.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells.3.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 + evap.Cells.3.dMdt.$pDERNLSJac2.dummyVarNLSJac2
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_721(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,721};
  jacobian->tmpVars[17] /* evap.Cells.3.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[16] /* evap.Cells.3.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[2] /* evap.Cells.3.dMdt.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 721;
}

/*
equation index: 722
type: SIMPLE_ASSIGN
evap.Cells.3.heatTransfer.U.$pDERNLSJac2.dummyVarNLSJac2[1] = 0.8 * evap.Cells[3].heatTransfer.Unom * abs(evap.Cells[3].M_dot_su / evap.Cells[3].heatTransfer.Mdotnom) ^ (-0.19999999999999996) * sign(evap.Cells[3].M_dot_su / evap.Cells[3].heatTransfer.Mdotnom) * evap.Cells.3.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 / evap.Cells[3].heatTransfer.Mdotnom
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_722(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,722};
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  tmp42 = fabs(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* evap.Cells[3].heatTransfer.Mdotnom variable */),"evap.Cells[3].heatTransfer.Mdotnom"));
  tmp43 = -0.19999999999999996;
  if(tmp42 < 0.0 && tmp43 != 0.0)
  {
    tmp45 = modf(tmp43, &tmp46);
    
    if(tmp45 > 0.5)
    {
      tmp45 -= 1.0;
      tmp46 += 1.0;
    }
    else if(tmp45 < -0.5)
    {
      tmp45 += 1.0;
      tmp46 -= 1.0;
    }
    
    if(fabs(tmp45) < 1e-10)
      tmp44 = pow(tmp42, tmp46);
    else
    {
      tmp48 = modf(1.0/tmp43, &tmp47);
      if(tmp48 > 0.5)
      {
        tmp48 -= 1.0;
        tmp47 += 1.0;
      }
      else if(tmp48 < -0.5)
      {
        tmp48 += 1.0;
        tmp47 -= 1.0;
      }
      if(fabs(tmp48) < 1e-10 && ((unsigned long)tmp47 & 1))
      {
        tmp44 = -pow(-tmp42, tmp45)*pow(tmp42, tmp46);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp42, tmp43);
      }
    }
  }
  else
  {
    tmp44 = pow(tmp42, tmp43);
  }
  if(isnan(tmp44) || isinf(tmp44))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp42, tmp43);
  }
  jacobian->tmpVars[19] /* evap.Cells.3.heatTransfer.U.$pDERNLSJac2.dummyVarNLSJac2[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* evap.Cells[3].heatTransfer.Unom variable */)) * ((tmp44) * ((sign(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* evap.Cells[3].heatTransfer.Mdotnom variable */),"evap.Cells[3].heatTransfer.Mdotnom"))) * (DIVISION(jacobian->tmpVars[17] /* evap.Cells.3.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* evap.Cells[3].heatTransfer.Mdotnom variable */),"evap.Cells[3].heatTransfer.Mdotnom")))));
  threadData->lastEquationSolved = 722;
}

/*
equation index: 723
type: SIMPLE_ASSIGN
evap.Cells.3.qdot.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells.3.heatTransfer.U.$pDERNLSJac2.dummyVarNLSJac2[1] * (T_box_k - evap.Cells[3].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_723(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,723};
  jacobian->tmpVars[20] /* evap.Cells.3.qdot.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[19] /* evap.Cells.3.heatTransfer.U.$pDERNLSJac2.dummyVarNLSJac2[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* evap.Cells[3].T variable */));
  threadData->lastEquationSolved = 723;
}

/*
equation index: 724
type: SIMPLE_ASSIGN
evap.Cells.3.InFlow.m_flow.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells.3.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 * (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_724(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,724};
  jacobian->tmpVars[21] /* evap.Cells.3.InFlow.m_flow.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[17] /* evap.Cells.3.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[3].Nt PARAM */)));
  threadData->lastEquationSolved = 724;
}

/*
equation index: 725
type: SIMPLE_ASSIGN
evap.Cells.2.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells.3.InFlow.m_flow.$pDERNLSJac2.dummyVarNLSJac2 / (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_725(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,725};
  jacobian->tmpVars[22] /* evap.Cells.2.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[21] /* evap.Cells.3.InFlow.m_flow.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[2].Nt PARAM */)),"/*Real*/(evap.Cells[2].Nt)");
  threadData->lastEquationSolved = 725;
}

/*
equation index: 726
type: SIMPLE_ASSIGN
evap.Cells.2.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells.2.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 + evap.Cells.2.dMdt.$pDERNLSJac2.dummyVarNLSJac2
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_726(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,726};
  jacobian->tmpVars[23] /* evap.Cells.2.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[22] /* evap.Cells.2.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[4] /* evap.Cells.2.dMdt.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 726;
}

/*
equation index: 727
type: SIMPLE_ASSIGN
evap.Cells.2.heatTransfer.U.$pDERNLSJac2.dummyVarNLSJac2[1] = 0.8 * evap.Cells[2].heatTransfer.Unom * abs(evap.Cells[2].M_dot_su / evap.Cells[2].heatTransfer.Mdotnom) ^ (-0.19999999999999996) * sign(evap.Cells[2].M_dot_su / evap.Cells[2].heatTransfer.Mdotnom) * evap.Cells.2.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 / evap.Cells[2].heatTransfer.Mdotnom
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_727(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 22;
  const int equationIndexes[2] = {1,727};
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  tmp49 = fabs(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* evap.Cells[2].heatTransfer.Mdotnom variable */),"evap.Cells[2].heatTransfer.Mdotnom"));
  tmp50 = -0.19999999999999996;
  if(tmp49 < 0.0 && tmp50 != 0.0)
  {
    tmp52 = modf(tmp50, &tmp53);
    
    if(tmp52 > 0.5)
    {
      tmp52 -= 1.0;
      tmp53 += 1.0;
    }
    else if(tmp52 < -0.5)
    {
      tmp52 += 1.0;
      tmp53 -= 1.0;
    }
    
    if(fabs(tmp52) < 1e-10)
      tmp51 = pow(tmp49, tmp53);
    else
    {
      tmp55 = modf(1.0/tmp50, &tmp54);
      if(tmp55 > 0.5)
      {
        tmp55 -= 1.0;
        tmp54 += 1.0;
      }
      else if(tmp55 < -0.5)
      {
        tmp55 += 1.0;
        tmp54 -= 1.0;
      }
      if(fabs(tmp55) < 1e-10 && ((unsigned long)tmp54 & 1))
      {
        tmp51 = -pow(-tmp49, tmp52)*pow(tmp49, tmp53);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp49, tmp50);
      }
    }
  }
  else
  {
    tmp51 = pow(tmp49, tmp50);
  }
  if(isnan(tmp51) || isinf(tmp51))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp49, tmp50);
  }
  jacobian->tmpVars[25] /* evap.Cells.2.heatTransfer.U.$pDERNLSJac2.dummyVarNLSJac2[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* evap.Cells[2].heatTransfer.Unom variable */)) * ((tmp51) * ((sign(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* evap.Cells[2].heatTransfer.Mdotnom variable */),"evap.Cells[2].heatTransfer.Mdotnom"))) * (DIVISION(jacobian->tmpVars[23] /* evap.Cells.2.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* evap.Cells[2].heatTransfer.Mdotnom variable */),"evap.Cells[2].heatTransfer.Mdotnom")))));
  threadData->lastEquationSolved = 727;
}

/*
equation index: 728
type: SIMPLE_ASSIGN
evap.Cells.2.qdot.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells.2.heatTransfer.U.$pDERNLSJac2.dummyVarNLSJac2[1] * (T_box_k - evap.Cells[2].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_728(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 23;
  const int equationIndexes[2] = {1,728};
  jacobian->tmpVars[26] /* evap.Cells.2.qdot.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[25] /* evap.Cells.2.heatTransfer.U.$pDERNLSJac2.dummyVarNLSJac2[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* evap.Cells[2].T variable */));
  threadData->lastEquationSolved = 728;
}

/*
equation index: 729
type: SIMPLE_ASSIGN
evap.Cells.2.InFlow.m_flow.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells.2.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 * (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_729(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 24;
  const int equationIndexes[2] = {1,729};
  jacobian->tmpVars[27] /* evap.Cells.2.InFlow.m_flow.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[23] /* evap.Cells.2.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[2].Nt PARAM */)));
  threadData->lastEquationSolved = 729;
}

/*
equation index: 730
type: SIMPLE_ASSIGN
evap.Cells.1.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells.2.InFlow.m_flow.$pDERNLSJac2.dummyVarNLSJac2 / (*Real*)(evap.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_730(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 25;
  const int equationIndexes[2] = {1,730};
  jacobian->tmpVars[28] /* evap.Cells.1.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[27] /* evap.Cells.2.InFlow.m_flow.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[27]] /* evap.Cells[1].Nt PARAM */)),"/*Real*/(evap.Cells[1].Nt)");
  threadData->lastEquationSolved = 730;
}

/*
equation index: 731
type: SIMPLE_ASSIGN
$res_NLSJac2_2.$pDERNLSJac2.dummyVarNLSJac2 = (-evap.Cells.1.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2) - evap.Cells.1.dMdt.$pDERNLSJac2.dummyVarNLSJac2
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_731(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 26;
  const int equationIndexes[2] = {1,731};
  jacobian->resultVars[1] /* $res_NLSJac2_2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (-jacobian->tmpVars[28] /* evap.Cells.1.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[3] /* evap.Cells.1.dMdt.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 731;
}

/*
equation index: 732
type: SIMPLE_ASSIGN
$res_NLSJac2_3.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells.1.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 * (evap.Cells[2].hnode_su - evap.Cells[1].h) + evap.Cells[1].Vi * (evap.Cells[1].rho * $DER.evap.Cells[1].h.SeedNLSJac2 - $DER.evap.Cells[5].p.SeedNLSJac2)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_732(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 27;
  const int equationIndexes[2] = {1,732};
  jacobian->resultVars[2] /* $res_NLSJac2_3.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (jacobian->tmpVars[28] /* evap.Cells.1.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* evap.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* evap.Cells[1].rho variable */)) * (jacobian->seedVars[4] /* der(evap.Cells[1].h.SeedNLSJac2) SEED_VAR */) - jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac2) SEED_VAR */);
  threadData->lastEquationSolved = 732;
}

/*
equation index: 733
type: SIMPLE_ASSIGN
evap.Cells.2.Q_tot.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells[2].Vi * evap.Cells[2].rho * $DER.evap.Cells[2].h.SeedNLSJac2 + evap.Cells.2.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 * (evap.Cells[3].hnode_su - evap.Cells[2].h) + evap.Cells.2.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 * (evap.Cells[2].h - evap.Cells[2].hnode_su) - evap.Cells[2].Vi * $DER.evap.Cells[5].p.SeedNLSJac2
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_733(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 28;
  const int equationIndexes[2] = {1,733};
  jacobian->tmpVars[24] /* evap.Cells.2.Q_tot.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* evap.Cells[2].rho variable */)) * (jacobian->seedVars[5] /* der(evap.Cells[2].h.SeedNLSJac2) SEED_VAR */)) + (jacobian->tmpVars[22] /* evap.Cells.2.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */)) + (jacobian->tmpVars[23] /* evap.Cells.2.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[2].Vi PARAM */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac2) SEED_VAR */));
  threadData->lastEquationSolved = 733;
}

/*
equation index: 734
type: SIMPLE_ASSIGN
$res_NLSJac2_1.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells[2].Ai * evap.Cells.2.qdot.$pDERNLSJac2.dummyVarNLSJac2 - evap.Cells.2.Q_tot.$pDERNLSJac2.dummyVarNLSJac2
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_734(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 29;
  const int equationIndexes[2] = {1,734};
  jacobian->resultVars[0] /* $res_NLSJac2_1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[82]] /* evap.Cells[2].Ai PARAM */)) * (jacobian->tmpVars[26] /* evap.Cells.2.qdot.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[24] /* evap.Cells.2.Q_tot.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 734;
}

/*
equation index: 735
type: SIMPLE_ASSIGN
evap.Cells.3.Q_tot.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells[3].Vi * evap.Cells[3].rho * $DER.evap.Cells[3].h.SeedNLSJac2 + evap.Cells.3.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 * (evap.Cells[4].hnode_su - evap.Cells[3].h) + evap.Cells.3.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 * (evap.Cells[3].h - evap.Cells[3].hnode_su) - evap.Cells[3].Vi * $DER.evap.Cells[5].p.SeedNLSJac2
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_735(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 30;
  const int equationIndexes[2] = {1,735};
  jacobian->tmpVars[18] /* evap.Cells.3.Q_tot.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1118]] /* evap.Cells[3].rho variable */)) * (jacobian->seedVars[3] /* der(evap.Cells[3].h.SeedNLSJac2) SEED_VAR */)) + (jacobian->tmpVars[16] /* evap.Cells.3.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */)) + (jacobian->tmpVars[17] /* evap.Cells.3.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[3].Vi PARAM */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac2) SEED_VAR */));
  threadData->lastEquationSolved = 735;
}

/*
equation index: 736
type: SIMPLE_ASSIGN
$res_NLSJac2_4.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells[3].Ai * evap.Cells.3.qdot.$pDERNLSJac2.dummyVarNLSJac2 - evap.Cells.3.Q_tot.$pDERNLSJac2.dummyVarNLSJac2
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_736(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 31;
  const int equationIndexes[2] = {1,736};
  jacobian->resultVars[3] /* $res_NLSJac2_4.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* evap.Cells[3].Ai PARAM */)) * (jacobian->tmpVars[20] /* evap.Cells.3.qdot.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[18] /* evap.Cells.3.Q_tot.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 736;
}

/*
equation index: 737
type: SIMPLE_ASSIGN
evap.Cells.4.Q_tot.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells[4].Vi * evap.Cells[4].rho * $DER.evap.Cells[4].h.SeedNLSJac2 + evap.Cells.4.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 * (evap.Cells[5].hnode_su - evap.Cells[4].h) + evap.Cells.4.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 * (evap.Cells[4].h - evap.Cells[4].hnode_su) - evap.Cells[4].Vi * $DER.evap.Cells[5].p.SeedNLSJac2
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_737(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 32;
  const int equationIndexes[2] = {1,737};
  jacobian->tmpVars[12] /* evap.Cells.4.Q_tot.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* evap.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* evap.Cells[4].rho variable */)) * (jacobian->seedVars[2] /* der(evap.Cells[4].h.SeedNLSJac2) SEED_VAR */)) + (jacobian->tmpVars[10] /* evap.Cells.4.M_dot_ex.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */)) + (jacobian->tmpVars[11] /* evap.Cells.4.M_dot_su.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* evap.Cells[4].Vi PARAM */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac2) SEED_VAR */));
  threadData->lastEquationSolved = 737;
}

/*
equation index: 738
type: SIMPLE_ASSIGN
$res_NLSJac2_5.$pDERNLSJac2.dummyVarNLSJac2 = evap.Cells[4].Ai * evap.Cells.4.qdot.$pDERNLSJac2.dummyVarNLSJac2 - evap.Cells.4.Q_tot.$pDERNLSJac2.dummyVarNLSJac2
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_738(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 33;
  const int equationIndexes[2] = {1,738};
  jacobian->resultVars[4] /* $res_NLSJac2_5.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* evap.Cells[4].Ai PARAM */)) * (jacobian->tmpVars[14] /* evap.Cells.4.qdot.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[12] /* evap.Cells.4.Q_tot.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 738;
}

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac2_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_NLSJac2;
  
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac2_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_NLSJac2;
  
  static void (*const eqFunctions[34])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_705,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_706,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_707,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_708,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_709,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_710,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_711,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_712,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_713,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_714,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_715,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_716,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_717,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_718,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_719,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_720,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_721,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_722,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_723,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_724,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_725,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_726,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_727,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_728,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_729,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_730,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_731,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_732,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_733,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_734,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_735,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_736,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_737,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_738
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 34; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1e_JacNLSJac2_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 1023
type: SIMPLE_ASSIGN
cond.Cells.1.dMdt.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[1].Vi * (cond.Cells[1].drdh * $DER.cond.Cells[1].h.SeedNLSJac4 + cond.Cells[1].drdp * $DER.cond.Cells[1].p.SeedNLSJac4)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1023(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1023};
  jacobian->tmpVars[4] /* cond.Cells.1.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* cond.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cond.Cells[1].drdh variable */)) * (jacobian->seedVars[5] /* der(cond.Cells[1].h.SeedNLSJac4) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* cond.Cells[1].drdp variable */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac4) SEED_VAR */));
  threadData->lastEquationSolved = 1023;
}

/*
equation index: 1024
type: SIMPLE_ASSIGN
cond.Cells.4.dMdt.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[4].Vi * (cond.Cells[4].drdh * $DER.cond.Cells[4].h.SeedNLSJac4 + cond.Cells[4].drdp * $DER.cond.Cells[1].p.SeedNLSJac4)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1024(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1024};
  jacobian->tmpVars[3] /* cond.Cells.4.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* cond.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* cond.Cells[4].drdh variable */)) * (jacobian->seedVars[4] /* der(cond.Cells[4].h.SeedNLSJac4) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cond.Cells[4].drdp variable */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac4) SEED_VAR */));
  threadData->lastEquationSolved = 1024;
}

/*
equation index: 1025
type: SIMPLE_ASSIGN
cond.Cells.2.dMdt.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[2].Vi * (cond.Cells[2].drdh * $DER.cond.Cells[2].h.SeedNLSJac4 + cond.Cells[2].drdp * $DER.cond.Cells[1].p.SeedNLSJac4)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1025(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1025};
  jacobian->tmpVars[2] /* cond.Cells.2.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* cond.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cond.Cells[2].drdh variable */)) * (jacobian->seedVars[3] /* der(cond.Cells[2].h.SeedNLSJac4) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cond.Cells[2].drdp variable */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac4) SEED_VAR */));
  threadData->lastEquationSolved = 1025;
}

/*
equation index: 1026
type: SIMPLE_ASSIGN
cond.Cells.3.dMdt.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[3].Vi * (cond.Cells[3].drdh * $DER.cond.Cells[3].h.SeedNLSJac4 + cond.Cells[3].drdp * $DER.cond.Cells[1].p.SeedNLSJac4)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1026(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1026};
  jacobian->tmpVars[1] /* cond.Cells.3.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* cond.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cond.Cells[3].drdh variable */)) * (jacobian->seedVars[2] /* der(cond.Cells[3].h.SeedNLSJac4) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cond.Cells[3].drdp variable */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac4) SEED_VAR */));
  threadData->lastEquationSolved = 1026;
}

/*
equation index: 1027
type: SIMPLE_ASSIGN
cond.Cells.5.dMdt.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[5].Vi * (cond.Cells[5].drdh * $DER.cond.Cells[5].h.SeedNLSJac4 + cond.Cells[5].drdp * $DER.cond.Cells[1].p.SeedNLSJac4)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1027(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,1027};
  jacobian->tmpVars[0] /* cond.Cells.5.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* cond.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cond.Cells[5].drdh variable */)) * (jacobian->seedVars[1] /* der(cond.Cells[5].h.SeedNLSJac4) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cond.Cells[5].drdp variable */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac4) SEED_VAR */));
  threadData->lastEquationSolved = 1027;
}

/*
equation index: 1028
type: SIMPLE_ASSIGN
cond.Cells.5.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[5].Vi * cond.Cells[5].rho * $DER.cond.Cells[5].h.SeedNLSJac4 + cond.Cells.5.dMdt.$pDERNLSJac4.dummyVarNLSJac4 * (cond.Cells[5].h - cond.Cells[5].hnode_su) - cond.Cells[5].Vi * $DER.cond.Cells[1].p.SeedNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1028(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,1028};
  jacobian->tmpVars[6] /* cond.Cells.5.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* cond.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* cond.Cells[5].rho variable */)) * (jacobian->seedVars[1] /* der(cond.Cells[5].h.SeedNLSJac4) SEED_VAR */)) + (jacobian->tmpVars[0] /* cond.Cells.5.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* cond.Cells[5].Vi PARAM */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac4) SEED_VAR */));
  threadData->lastEquationSolved = 1028;
}

/*
equation index: 1029
type: SIMPLE_ASSIGN
cond.Cells.5.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] = 0.8 * cond.Cells[5].heatTransfer.Unom * abs(cond.Cells[5].M_dot_su / cond.Cells[5].heatTransfer.Mdotnom) ^ (-0.19999999999999996) * sign(cond.Cells[5].M_dot_su / cond.Cells[5].heatTransfer.Mdotnom) * cond.Cells.5.dMdt.$pDERNLSJac4.dummyVarNLSJac4 / cond.Cells[5].heatTransfer.Mdotnom
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1029(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,1029};
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  tmp56 = fabs(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* cond.Cells[5].heatTransfer.Mdotnom variable */),"cond.Cells[5].heatTransfer.Mdotnom"));
  tmp57 = -0.19999999999999996;
  if(tmp56 < 0.0 && tmp57 != 0.0)
  {
    tmp59 = modf(tmp57, &tmp60);
    
    if(tmp59 > 0.5)
    {
      tmp59 -= 1.0;
      tmp60 += 1.0;
    }
    else if(tmp59 < -0.5)
    {
      tmp59 += 1.0;
      tmp60 -= 1.0;
    }
    
    if(fabs(tmp59) < 1e-10)
      tmp58 = pow(tmp56, tmp60);
    else
    {
      tmp62 = modf(1.0/tmp57, &tmp61);
      if(tmp62 > 0.5)
      {
        tmp62 -= 1.0;
        tmp61 += 1.0;
      }
      else if(tmp62 < -0.5)
      {
        tmp62 += 1.0;
        tmp61 -= 1.0;
      }
      if(fabs(tmp62) < 1e-10 && ((unsigned long)tmp61 & 1))
      {
        tmp58 = -pow(-tmp56, tmp59)*pow(tmp56, tmp60);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp56, tmp57);
      }
    }
  }
  else
  {
    tmp58 = pow(tmp56, tmp57);
  }
  if(isnan(tmp58) || isinf(tmp58))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp56, tmp57);
  }
  jacobian->tmpVars[7] /* cond.Cells.5.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[831]] /* cond.Cells[5].heatTransfer.Unom variable */)) * ((tmp58) * ((sign(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* cond.Cells[5].heatTransfer.Mdotnom variable */),"cond.Cells[5].heatTransfer.Mdotnom"))) * (DIVISION(jacobian->tmpVars[0] /* cond.Cells.5.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* cond.Cells[5].heatTransfer.Mdotnom variable */),"cond.Cells[5].heatTransfer.Mdotnom")))));
  threadData->lastEquationSolved = 1029;
}

/*
equation index: 1030
type: SIMPLE_ASSIGN
cond.Cells.5.qdot.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.5.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] * (T_amb_k - cond.Cells[5].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1030(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,1030};
  jacobian->tmpVars[8] /* cond.Cells.5.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[7] /* cond.Cells.5.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cond.Cells[5].T variable */));
  threadData->lastEquationSolved = 1030;
}

/*
equation index: 1031
type: SIMPLE_ASSIGN
$res_NLSJac4_1.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[5].Ai * cond.Cells.5.qdot.$pDERNLSJac4.dummyVarNLSJac4 - cond.Cells.5.Q_tot.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1031(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,1031};
  jacobian->resultVars[0] /* $res_NLSJac4_1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[16]] /* cond.Cells[5].Ai PARAM */)) * (jacobian->tmpVars[8] /* cond.Cells.5.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[6] /* cond.Cells.5.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1031;
}

/*
equation index: 1032
type: SIMPLE_ASSIGN
cond.Cells.5.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.5.dMdt.$pDERNLSJac4.dummyVarNLSJac4 * (*Real*)(cond.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1032(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,1032};
  jacobian->tmpVars[9] /* cond.Cells.5.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[0] /* cond.Cells.5.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[5].Nt PARAM */)));
  threadData->lastEquationSolved = 1032;
}

/*
equation index: 1033
type: SIMPLE_ASSIGN
cond.Cells.4.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.5.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 / (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1033(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,1033};
  jacobian->tmpVars[10] /* cond.Cells.4.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[9] /* cond.Cells.5.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[4].Nt PARAM */)),"/*Real*/(cond.Cells[4].Nt)");
  threadData->lastEquationSolved = 1033;
}

/*
equation index: 1034
type: SIMPLE_ASSIGN
cond.Cells.4.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.4.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 + cond.Cells.4.dMdt.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1034(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,1034};
  jacobian->tmpVars[11] /* cond.Cells.4.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[10] /* cond.Cells.4.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[3] /* cond.Cells.4.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1034;
}

/*
equation index: 1035
type: SIMPLE_ASSIGN
cond.Cells.4.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] = 0.8 * cond.Cells[4].heatTransfer.Unom * abs(cond.Cells[4].M_dot_su / cond.Cells[4].heatTransfer.Mdotnom) ^ (-0.19999999999999996) * sign(cond.Cells[4].M_dot_su / cond.Cells[4].heatTransfer.Mdotnom) * cond.Cells.4.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 / cond.Cells[4].heatTransfer.Mdotnom
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1035(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,1035};
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  tmp63 = fabs(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* cond.Cells[4].heatTransfer.Mdotnom variable */),"cond.Cells[4].heatTransfer.Mdotnom"));
  tmp64 = -0.19999999999999996;
  if(tmp63 < 0.0 && tmp64 != 0.0)
  {
    tmp66 = modf(tmp64, &tmp67);
    
    if(tmp66 > 0.5)
    {
      tmp66 -= 1.0;
      tmp67 += 1.0;
    }
    else if(tmp66 < -0.5)
    {
      tmp66 += 1.0;
      tmp67 -= 1.0;
    }
    
    if(fabs(tmp66) < 1e-10)
      tmp65 = pow(tmp63, tmp67);
    else
    {
      tmp69 = modf(1.0/tmp64, &tmp68);
      if(tmp69 > 0.5)
      {
        tmp69 -= 1.0;
        tmp68 += 1.0;
      }
      else if(tmp69 < -0.5)
      {
        tmp69 += 1.0;
        tmp68 -= 1.0;
      }
      if(fabs(tmp69) < 1e-10 && ((unsigned long)tmp68 & 1))
      {
        tmp65 = -pow(-tmp63, tmp66)*pow(tmp63, tmp67);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp63, tmp64);
      }
    }
  }
  else
  {
    tmp65 = pow(tmp63, tmp64);
  }
  if(isnan(tmp65) || isinf(tmp65))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp63, tmp64);
  }
  jacobian->tmpVars[13] /* cond.Cells.4.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[830]] /* cond.Cells[4].heatTransfer.Unom variable */)) * ((tmp65) * ((sign(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* cond.Cells[4].heatTransfer.Mdotnom variable */),"cond.Cells[4].heatTransfer.Mdotnom"))) * (DIVISION(jacobian->tmpVars[11] /* cond.Cells.4.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* cond.Cells[4].heatTransfer.Mdotnom variable */),"cond.Cells[4].heatTransfer.Mdotnom")))));
  threadData->lastEquationSolved = 1035;
}

/*
equation index: 1036
type: SIMPLE_ASSIGN
cond.Cells.4.qdot.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.4.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] * (T_amb_k - cond.Cells[4].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1036(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,1036};
  jacobian->tmpVars[14] /* cond.Cells.4.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[13] /* cond.Cells.4.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cond.Cells[4].T variable */));
  threadData->lastEquationSolved = 1036;
}

/*
equation index: 1037
type: SIMPLE_ASSIGN
cond.Cells.4.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.4.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 * (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1037(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,1037};
  jacobian->tmpVars[15] /* cond.Cells.4.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[11] /* cond.Cells.4.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[4].Nt PARAM */)));
  threadData->lastEquationSolved = 1037;
}

/*
equation index: 1038
type: SIMPLE_ASSIGN
cond.Cells.3.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.4.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 / (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1038(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,1038};
  jacobian->tmpVars[16] /* cond.Cells.3.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[15] /* cond.Cells.4.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[3].Nt PARAM */)),"/*Real*/(cond.Cells[3].Nt)");
  threadData->lastEquationSolved = 1038;
}

/*
equation index: 1039
type: SIMPLE_ASSIGN
cond.Cells.3.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.3.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 + cond.Cells.3.dMdt.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1039(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,1039};
  jacobian->tmpVars[17] /* cond.Cells.3.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[16] /* cond.Cells.3.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[1] /* cond.Cells.3.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1039;
}

/*
equation index: 1040
type: SIMPLE_ASSIGN
cond.Cells.3.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] = 0.8 * cond.Cells[3].heatTransfer.Unom * abs(cond.Cells[3].M_dot_su / cond.Cells[3].heatTransfer.Mdotnom) ^ (-0.19999999999999996) * sign(cond.Cells[3].M_dot_su / cond.Cells[3].heatTransfer.Mdotnom) * cond.Cells.3.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 / cond.Cells[3].heatTransfer.Mdotnom
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1040(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,1040};
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  tmp70 = fabs(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* cond.Cells[3].heatTransfer.Mdotnom variable */),"cond.Cells[3].heatTransfer.Mdotnom"));
  tmp71 = -0.19999999999999996;
  if(tmp70 < 0.0 && tmp71 != 0.0)
  {
    tmp73 = modf(tmp71, &tmp74);
    
    if(tmp73 > 0.5)
    {
      tmp73 -= 1.0;
      tmp74 += 1.0;
    }
    else if(tmp73 < -0.5)
    {
      tmp73 += 1.0;
      tmp74 -= 1.0;
    }
    
    if(fabs(tmp73) < 1e-10)
      tmp72 = pow(tmp70, tmp74);
    else
    {
      tmp76 = modf(1.0/tmp71, &tmp75);
      if(tmp76 > 0.5)
      {
        tmp76 -= 1.0;
        tmp75 += 1.0;
      }
      else if(tmp76 < -0.5)
      {
        tmp76 += 1.0;
        tmp75 -= 1.0;
      }
      if(fabs(tmp76) < 1e-10 && ((unsigned long)tmp75 & 1))
      {
        tmp72 = -pow(-tmp70, tmp73)*pow(tmp70, tmp74);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp70, tmp71);
      }
    }
  }
  else
  {
    tmp72 = pow(tmp70, tmp71);
  }
  if(isnan(tmp72) || isinf(tmp72))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp70, tmp71);
  }
  jacobian->tmpVars[19] /* cond.Cells.3.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* cond.Cells[3].heatTransfer.Unom variable */)) * ((tmp72) * ((sign(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* cond.Cells[3].heatTransfer.Mdotnom variable */),"cond.Cells[3].heatTransfer.Mdotnom"))) * (DIVISION(jacobian->tmpVars[17] /* cond.Cells.3.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* cond.Cells[3].heatTransfer.Mdotnom variable */),"cond.Cells[3].heatTransfer.Mdotnom")))));
  threadData->lastEquationSolved = 1040;
}

/*
equation index: 1041
type: SIMPLE_ASSIGN
cond.Cells.3.qdot.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.3.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] * (T_amb_k - cond.Cells[3].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1041(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,1041};
  jacobian->tmpVars[20] /* cond.Cells.3.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[19] /* cond.Cells.3.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[739]] /* cond.Cells[3].T variable */));
  threadData->lastEquationSolved = 1041;
}

/*
equation index: 1042
type: SIMPLE_ASSIGN
cond.Cells.3.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.3.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 * (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1042(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,1042};
  jacobian->tmpVars[21] /* cond.Cells.3.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[17] /* cond.Cells.3.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[3].Nt PARAM */)));
  threadData->lastEquationSolved = 1042;
}

/*
equation index: 1043
type: SIMPLE_ASSIGN
cond.Cells.2.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.3.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 / (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1043(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,1043};
  jacobian->tmpVars[22] /* cond.Cells.2.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[21] /* cond.Cells.3.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[2].Nt PARAM */)),"/*Real*/(cond.Cells[2].Nt)");
  threadData->lastEquationSolved = 1043;
}

/*
equation index: 1044
type: SIMPLE_ASSIGN
cond.Cells.2.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.2.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 + cond.Cells.2.dMdt.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1044(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,1044};
  jacobian->tmpVars[23] /* cond.Cells.2.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[22] /* cond.Cells.2.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[2] /* cond.Cells.2.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1044;
}

/*
equation index: 1045
type: SIMPLE_ASSIGN
cond.Cells.2.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] = 0.8 * cond.Cells[2].heatTransfer.Unom * abs(cond.Cells[2].M_dot_su / cond.Cells[2].heatTransfer.Mdotnom) ^ (-0.19999999999999996) * sign(cond.Cells[2].M_dot_su / cond.Cells[2].heatTransfer.Mdotnom) * cond.Cells.2.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 / cond.Cells[2].heatTransfer.Mdotnom
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1045(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 22;
  const int equationIndexes[2] = {1,1045};
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  tmp77 = fabs(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* cond.Cells[2].heatTransfer.Mdotnom variable */),"cond.Cells[2].heatTransfer.Mdotnom"));
  tmp78 = -0.19999999999999996;
  if(tmp77 < 0.0 && tmp78 != 0.0)
  {
    tmp80 = modf(tmp78, &tmp81);
    
    if(tmp80 > 0.5)
    {
      tmp80 -= 1.0;
      tmp81 += 1.0;
    }
    else if(tmp80 < -0.5)
    {
      tmp80 += 1.0;
      tmp81 -= 1.0;
    }
    
    if(fabs(tmp80) < 1e-10)
      tmp79 = pow(tmp77, tmp81);
    else
    {
      tmp83 = modf(1.0/tmp78, &tmp82);
      if(tmp83 > 0.5)
      {
        tmp83 -= 1.0;
        tmp82 += 1.0;
      }
      else if(tmp83 < -0.5)
      {
        tmp83 += 1.0;
        tmp82 -= 1.0;
      }
      if(fabs(tmp83) < 1e-10 && ((unsigned long)tmp82 & 1))
      {
        tmp79 = -pow(-tmp77, tmp80)*pow(tmp77, tmp81);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp77, tmp78);
      }
    }
  }
  else
  {
    tmp79 = pow(tmp77, tmp78);
  }
  if(isnan(tmp79) || isinf(tmp79))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp77, tmp78);
  }
  jacobian->tmpVars[25] /* cond.Cells.2.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[828]] /* cond.Cells[2].heatTransfer.Unom variable */)) * ((tmp79) * ((sign(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* cond.Cells[2].heatTransfer.Mdotnom variable */),"cond.Cells[2].heatTransfer.Mdotnom"))) * (DIVISION(jacobian->tmpVars[23] /* cond.Cells.2.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* cond.Cells[2].heatTransfer.Mdotnom variable */),"cond.Cells[2].heatTransfer.Mdotnom")))));
  threadData->lastEquationSolved = 1045;
}

/*
equation index: 1046
type: SIMPLE_ASSIGN
cond.Cells.2.qdot.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.2.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] * (T_amb_k - cond.Cells[2].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1046(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 23;
  const int equationIndexes[2] = {1,1046};
  jacobian->tmpVars[26] /* cond.Cells.2.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[25] /* cond.Cells.2.heatTransfer.U.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cond.Cells[2].T variable */));
  threadData->lastEquationSolved = 1046;
}

/*
equation index: 1047
type: SIMPLE_ASSIGN
cond.Cells.2.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.2.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 * (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1047(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 24;
  const int equationIndexes[2] = {1,1047};
  jacobian->tmpVars[27] /* cond.Cells.2.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[23] /* cond.Cells.2.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[2].Nt PARAM */)));
  threadData->lastEquationSolved = 1047;
}

/*
equation index: 1048
type: SIMPLE_ASSIGN
cond.Cells.1.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.2.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 / (*Real*)(cond.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1048(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 25;
  const int equationIndexes[2] = {1,1048};
  jacobian->tmpVars[28] /* cond.Cells.1.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[27] /* cond.Cells.2.InFlow.m_flow.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* cond.Cells[1].Nt PARAM */)),"/*Real*/(cond.Cells[1].Nt)");
  threadData->lastEquationSolved = 1048;
}

/*
equation index: 1049
type: SIMPLE_ASSIGN
$res_NLSJac4_2.$pDERNLSJac4.dummyVarNLSJac4 = (-cond.Cells.1.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4) - cond.Cells.1.dMdt.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1049(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 26;
  const int equationIndexes[2] = {1,1049};
  jacobian->resultVars[1] /* $res_NLSJac4_2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (-jacobian->tmpVars[28] /* cond.Cells.1.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[4] /* cond.Cells.1.dMdt.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1049;
}

/*
equation index: 1050
type: SIMPLE_ASSIGN
$res_NLSJac4_3.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells.1.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 * (cond.Cells[2].hnode_su - cond.Cells[1].h) + cond.Cells[1].Vi * (cond.Cells[1].rho * $DER.cond.Cells[1].h.SeedNLSJac4 - $DER.cond.Cells[1].p.SeedNLSJac4)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1050(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 27;
  const int equationIndexes[2] = {1,1050};
  jacobian->resultVars[2] /* $res_NLSJac4_3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (jacobian->tmpVars[28] /* cond.Cells.1.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* cond.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* cond.Cells[1].rho variable */)) * (jacobian->seedVars[5] /* der(cond.Cells[1].h.SeedNLSJac4) SEED_VAR */) - jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac4) SEED_VAR */);
  threadData->lastEquationSolved = 1050;
}

/*
equation index: 1051
type: SIMPLE_ASSIGN
cond.Cells.2.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[2].Vi * cond.Cells[2].rho * $DER.cond.Cells[2].h.SeedNLSJac4 + cond.Cells.2.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 * (cond.Cells[3].hnode_su - cond.Cells[2].h) + cond.Cells.2.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 * (cond.Cells[2].h - cond.Cells[2].hnode_su) - cond.Cells[2].Vi * $DER.cond.Cells[1].p.SeedNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1051(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 28;
  const int equationIndexes[2] = {1,1051};
  jacobian->tmpVars[24] /* cond.Cells.2.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* cond.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* cond.Cells[2].rho variable */)) * (jacobian->seedVars[3] /* der(cond.Cells[2].h.SeedNLSJac4) SEED_VAR */)) + (jacobian->tmpVars[22] /* cond.Cells.2.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */)) + (jacobian->tmpVars[23] /* cond.Cells.2.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* cond.Cells[2].Vi PARAM */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac4) SEED_VAR */));
  threadData->lastEquationSolved = 1051;
}

/*
equation index: 1052
type: SIMPLE_ASSIGN
$res_NLSJac4_4.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[2].Ai * cond.Cells.2.qdot.$pDERNLSJac4.dummyVarNLSJac4 - cond.Cells.2.Q_tot.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1052(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 29;
  const int equationIndexes[2] = {1,1052};
  jacobian->resultVars[3] /* $res_NLSJac4_4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* cond.Cells[2].Ai PARAM */)) * (jacobian->tmpVars[26] /* cond.Cells.2.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[24] /* cond.Cells.2.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1052;
}

/*
equation index: 1053
type: SIMPLE_ASSIGN
cond.Cells.3.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[3].Vi * cond.Cells[3].rho * $DER.cond.Cells[3].h.SeedNLSJac4 + cond.Cells.3.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 * (cond.Cells[4].hnode_su - cond.Cells[3].h) + cond.Cells.3.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 * (cond.Cells[3].h - cond.Cells[3].hnode_su) - cond.Cells[3].Vi * $DER.cond.Cells[1].p.SeedNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1053(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 30;
  const int equationIndexes[2] = {1,1053};
  jacobian->tmpVars[18] /* cond.Cells.3.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* cond.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[844]] /* cond.Cells[3].rho variable */)) * (jacobian->seedVars[2] /* der(cond.Cells[3].h.SeedNLSJac4) SEED_VAR */)) + (jacobian->tmpVars[16] /* cond.Cells.3.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */)) + (jacobian->tmpVars[17] /* cond.Cells.3.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* cond.Cells[3].Vi PARAM */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac4) SEED_VAR */));
  threadData->lastEquationSolved = 1053;
}

/*
equation index: 1054
type: SIMPLE_ASSIGN
$res_NLSJac4_5.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[3].Ai * cond.Cells.3.qdot.$pDERNLSJac4.dummyVarNLSJac4 - cond.Cells.3.Q_tot.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1054(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 31;
  const int equationIndexes[2] = {1,1054};
  jacobian->resultVars[4] /* $res_NLSJac4_5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* cond.Cells[3].Ai PARAM */)) * (jacobian->tmpVars[20] /* cond.Cells.3.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[18] /* cond.Cells.3.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1054;
}

/*
equation index: 1055
type: SIMPLE_ASSIGN
cond.Cells.4.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[4].Vi * cond.Cells[4].rho * $DER.cond.Cells[4].h.SeedNLSJac4 + cond.Cells.4.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 * (cond.Cells[5].hnode_su - cond.Cells[4].h) + cond.Cells.4.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 * (cond.Cells[4].h - cond.Cells[4].hnode_su) - cond.Cells[4].Vi * $DER.cond.Cells[1].p.SeedNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1055(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 32;
  const int equationIndexes[2] = {1,1055};
  jacobian->tmpVars[12] /* cond.Cells.4.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* cond.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* cond.Cells[4].rho variable */)) * (jacobian->seedVars[4] /* der(cond.Cells[4].h.SeedNLSJac4) SEED_VAR */)) + (jacobian->tmpVars[10] /* cond.Cells.4.M_dot_ex.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */)) + (jacobian->tmpVars[11] /* cond.Cells.4.M_dot_su.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* cond.Cells[4].Vi PARAM */)) * (jacobian->seedVars[0] /* der(cond.Cells[1].p.SeedNLSJac4) SEED_VAR */));
  threadData->lastEquationSolved = 1055;
}

/*
equation index: 1056
type: SIMPLE_ASSIGN
$res_NLSJac4_6.$pDERNLSJac4.dummyVarNLSJac4 = cond.Cells[4].Ai * cond.Cells.4.qdot.$pDERNLSJac4.dummyVarNLSJac4 - cond.Cells.4.Q_tot.$pDERNLSJac4.dummyVarNLSJac4
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1056(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 33;
  const int equationIndexes[2] = {1,1056};
  jacobian->resultVars[5] /* $res_NLSJac4_6.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* cond.Cells[4].Ai PARAM */)) * (jacobian->tmpVars[14] /* cond.Cells.4.qdot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[12] /* cond.Cells.4.Q_tot.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1056;
}

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac4_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_NLSJac4;
  
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac4_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_NLSJac4;
  
  static void (*const eqFunctions[34])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1023,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1024,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1025,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1026,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1027,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1028,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1029,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1030,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1031,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1032,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1033,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1034,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1035,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1036,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1037,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1038,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1039,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1040,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1041,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1042,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1043,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1044,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1045,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1046,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1047,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1048,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1049,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1050,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1051,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1052,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1053,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1054,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1055,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1056
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 34; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1e_JacNLSJac4_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 1267
type: SIMPLE_ASSIGN
evap.Cells.2.dMdt.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells[2].Vi * (evap.Cells[2].drdh * $DER.evap.Cells[2].h.SeedNLSJac5 + evap.Cells[2].drdp * $DER.evap.Cells[5].p.SeedNLSJac5)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1267(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1267};
  jacobian->tmpVars[4] /* evap.Cells.2.dMdt.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* evap.Cells[2].drdh variable */)) * (jacobian->seedVars[5] /* der(evap.Cells[2].h.SeedNLSJac5) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* evap.Cells[2].drdp variable */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac5) SEED_VAR */));
  threadData->lastEquationSolved = 1267;
}

/*
equation index: 1268
type: SIMPLE_ASSIGN
evap.Cells.3.dMdt.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells[3].Vi * (evap.Cells[3].drdh * $DER.evap.Cells[3].h.SeedNLSJac5 + evap.Cells[3].drdp * $DER.evap.Cells[5].p.SeedNLSJac5)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1268(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1268};
  jacobian->tmpVars[3] /* evap.Cells.3.dMdt.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* evap.Cells[3].drdh variable */)) * (jacobian->seedVars[4] /* der(evap.Cells[3].h.SeedNLSJac5) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* evap.Cells[3].drdp variable */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac5) SEED_VAR */));
  threadData->lastEquationSolved = 1268;
}

/*
equation index: 1269
type: SIMPLE_ASSIGN
evap.Cells.1.dMdt.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells[1].Vi * (evap.Cells[1].drdh * $DER.evap.Cells[1].h.SeedNLSJac5 + evap.Cells[1].drdp * $DER.evap.Cells[5].p.SeedNLSJac5)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1269(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1269};
  jacobian->tmpVars[2] /* evap.Cells.1.dMdt.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* evap.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* evap.Cells[1].drdh variable */)) * (jacobian->seedVars[3] /* der(evap.Cells[1].h.SeedNLSJac5) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* evap.Cells[1].drdp variable */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac5) SEED_VAR */));
  threadData->lastEquationSolved = 1269;
}

/*
equation index: 1270
type: SIMPLE_ASSIGN
evap.Cells.2.InFlow.m_flow.$pDERNLSJac5.dummyVarNLSJac5 = (-evap.Cells.1.dMdt.$pDERNLSJac5.dummyVarNLSJac5) * (*Real*)(evap.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1270(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1270};
  jacobian->tmpVars[6] /* evap.Cells.2.InFlow.m_flow.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = ((-jacobian->tmpVars[2] /* evap.Cells.1.dMdt.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[27]] /* evap.Cells[1].Nt PARAM */)));
  threadData->lastEquationSolved = 1270;
}

/*
equation index: 1271
type: SIMPLE_ASSIGN
evap.Cells.2.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.2.InFlow.m_flow.$pDERNLSJac5.dummyVarNLSJac5 / (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1271(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,1271};
  jacobian->tmpVars[7] /* evap.Cells.2.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[6] /* evap.Cells.2.InFlow.m_flow.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[2].Nt PARAM */)),"/*Real*/(evap.Cells[2].Nt)");
  threadData->lastEquationSolved = 1271;
}

/*
equation index: 1272
type: SIMPLE_ASSIGN
evap.Cells.2.heatTransfer.U.$pDERNLSJac5.dummyVarNLSJac5[1] = 0.8 * evap.Cells[2].heatTransfer.Unom * abs(evap.Cells[2].M_dot_su / evap.Cells[2].heatTransfer.Mdotnom) ^ (-0.19999999999999996) * sign(evap.Cells[2].M_dot_su / evap.Cells[2].heatTransfer.Mdotnom) * evap.Cells.2.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 / evap.Cells[2].heatTransfer.Mdotnom
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1272(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,1272};
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  modelica_real tmp90;
  tmp84 = fabs(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* evap.Cells[2].heatTransfer.Mdotnom variable */),"evap.Cells[2].heatTransfer.Mdotnom"));
  tmp85 = -0.19999999999999996;
  if(tmp84 < 0.0 && tmp85 != 0.0)
  {
    tmp87 = modf(tmp85, &tmp88);
    
    if(tmp87 > 0.5)
    {
      tmp87 -= 1.0;
      tmp88 += 1.0;
    }
    else if(tmp87 < -0.5)
    {
      tmp87 += 1.0;
      tmp88 -= 1.0;
    }
    
    if(fabs(tmp87) < 1e-10)
      tmp86 = pow(tmp84, tmp88);
    else
    {
      tmp90 = modf(1.0/tmp85, &tmp89);
      if(tmp90 > 0.5)
      {
        tmp90 -= 1.0;
        tmp89 += 1.0;
      }
      else if(tmp90 < -0.5)
      {
        tmp90 += 1.0;
        tmp89 -= 1.0;
      }
      if(fabs(tmp90) < 1e-10 && ((unsigned long)tmp89 & 1))
      {
        tmp86 = -pow(-tmp84, tmp87)*pow(tmp84, tmp88);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp84, tmp85);
      }
    }
  }
  else
  {
    tmp86 = pow(tmp84, tmp85);
  }
  if(isnan(tmp86) || isinf(tmp86))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp84, tmp85);
  }
  jacobian->tmpVars[8] /* evap.Cells.2.heatTransfer.U.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* evap.Cells[2].heatTransfer.Unom variable */)) * ((tmp86) * ((sign(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* evap.Cells[2].heatTransfer.Mdotnom variable */),"evap.Cells[2].heatTransfer.Mdotnom"))) * (DIVISION(jacobian->tmpVars[7] /* evap.Cells.2.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* evap.Cells[2].heatTransfer.Mdotnom variable */),"evap.Cells[2].heatTransfer.Mdotnom")))));
  threadData->lastEquationSolved = 1272;
}

/*
equation index: 1273
type: SIMPLE_ASSIGN
evap.Cells.2.qdot.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.2.heatTransfer.U.$pDERNLSJac5.dummyVarNLSJac5[1] * (T_box_k - evap.Cells[2].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1273(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,1273};
  jacobian->tmpVars[9] /* evap.Cells.2.qdot.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[8] /* evap.Cells.2.heatTransfer.U.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* evap.Cells[2].T variable */));
  threadData->lastEquationSolved = 1273;
}

/*
equation index: 1274
type: SIMPLE_ASSIGN
evap.Cells.2.Q_tot.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells[2].Ai * evap.Cells.2.qdot.$pDERNLSJac5.dummyVarNLSJac5
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1274(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,1274};
  jacobian->tmpVars[10] /* evap.Cells.2.Q_tot.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[82]] /* evap.Cells[2].Ai PARAM */)) * (jacobian->tmpVars[9] /* evap.Cells.2.qdot.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */);
  threadData->lastEquationSolved = 1274;
}

/*
equation index: 1275
type: SIMPLE_ASSIGN
evap.Cells.2.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.2.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 - evap.Cells.2.dMdt.$pDERNLSJac5.dummyVarNLSJac5
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1275(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,1275};
  jacobian->tmpVars[11] /* evap.Cells.2.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[7] /* evap.Cells.2.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[4] /* evap.Cells.2.dMdt.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1275;
}

/*
equation index: 1276
type: SIMPLE_ASSIGN
evap.Cells.3.InFlow.m_flow.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.2.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 * (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1276(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,1276};
  jacobian->tmpVars[12] /* evap.Cells.3.InFlow.m_flow.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[11] /* evap.Cells.2.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[2].Nt PARAM */)));
  threadData->lastEquationSolved = 1276;
}

/*
equation index: 1277
type: SIMPLE_ASSIGN
evap.Cells.3.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.3.InFlow.m_flow.$pDERNLSJac5.dummyVarNLSJac5 / (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1277(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,1277};
  jacobian->tmpVars[13] /* evap.Cells.3.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[12] /* evap.Cells.3.InFlow.m_flow.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[3].Nt PARAM */)),"/*Real*/(evap.Cells[3].Nt)");
  threadData->lastEquationSolved = 1277;
}

/*
equation index: 1278
type: SIMPLE_ASSIGN
evap.Cells.3.heatTransfer.U.$pDERNLSJac5.dummyVarNLSJac5[1] = 0.8 * evap.Cells[3].heatTransfer.Unom * abs(evap.Cells[3].M_dot_su / evap.Cells[3].heatTransfer.Mdotnom) ^ (-0.19999999999999996) * sign(evap.Cells[3].M_dot_su / evap.Cells[3].heatTransfer.Mdotnom) * evap.Cells.3.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 / evap.Cells[3].heatTransfer.Mdotnom
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1278(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,1278};
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  tmp91 = fabs(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* evap.Cells[3].heatTransfer.Mdotnom variable */),"evap.Cells[3].heatTransfer.Mdotnom"));
  tmp92 = -0.19999999999999996;
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
  }
  jacobian->tmpVars[14] /* evap.Cells.3.heatTransfer.U.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* evap.Cells[3].heatTransfer.Unom variable */)) * ((tmp93) * ((sign(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* evap.Cells[3].heatTransfer.Mdotnom variable */),"evap.Cells[3].heatTransfer.Mdotnom"))) * (DIVISION(jacobian->tmpVars[13] /* evap.Cells.3.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* evap.Cells[3].heatTransfer.Mdotnom variable */),"evap.Cells[3].heatTransfer.Mdotnom")))));
  threadData->lastEquationSolved = 1278;
}

/*
equation index: 1279
type: SIMPLE_ASSIGN
evap.Cells.3.qdot.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.3.heatTransfer.U.$pDERNLSJac5.dummyVarNLSJac5[1] * (T_box_k - evap.Cells[3].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1279(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,1279};
  jacobian->tmpVars[15] /* evap.Cells.3.qdot.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[14] /* evap.Cells.3.heatTransfer.U.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* evap.Cells[3].T variable */));
  threadData->lastEquationSolved = 1279;
}

/*
equation index: 1280
type: SIMPLE_ASSIGN
evap.Cells.3.Q_tot.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells[3].Ai * evap.Cells.3.qdot.$pDERNLSJac5.dummyVarNLSJac5
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1280(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,1280};
  jacobian->tmpVars[16] /* evap.Cells.3.Q_tot.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* evap.Cells[3].Ai PARAM */)) * (jacobian->tmpVars[15] /* evap.Cells.3.qdot.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */);
  threadData->lastEquationSolved = 1280;
}

/*
equation index: 1281
type: SIMPLE_ASSIGN
evap.Cells.3.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.3.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 - evap.Cells.3.dMdt.$pDERNLSJac5.dummyVarNLSJac5
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1281(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,1281};
  jacobian->tmpVars[17] /* evap.Cells.3.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[13] /* evap.Cells.3.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[3] /* evap.Cells.3.dMdt.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1281;
}

/*
equation index: 1282
type: SIMPLE_ASSIGN
evap.Cells.4.InFlow.m_flow.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.3.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 * (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1282(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,1282};
  jacobian->tmpVars[18] /* evap.Cells.4.InFlow.m_flow.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[17] /* evap.Cells.3.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[3].Nt PARAM */)));
  threadData->lastEquationSolved = 1282;
}

/*
equation index: 1283
type: SIMPLE_ASSIGN
evap.Cells.4.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.4.InFlow.m_flow.$pDERNLSJac5.dummyVarNLSJac5 / (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1283(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,1283};
  jacobian->tmpVars[19] /* evap.Cells.4.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[18] /* evap.Cells.4.InFlow.m_flow.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[4].Nt PARAM */)),"/*Real*/(evap.Cells[4].Nt)");
  threadData->lastEquationSolved = 1283;
}

/*
equation index: 1284
type: SIMPLE_ASSIGN
evap.Cells.4.heatTransfer.U.$pDERNLSJac5.dummyVarNLSJac5[1] = 0.8 * evap.Cells[4].heatTransfer.Unom * abs(evap.Cells[4].M_dot_su / evap.Cells[4].heatTransfer.Mdotnom) ^ (-0.19999999999999996) * sign(evap.Cells[4].M_dot_su / evap.Cells[4].heatTransfer.Mdotnom) * evap.Cells.4.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 / evap.Cells[4].heatTransfer.Mdotnom
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1284(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,1284};
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_real tmp101;
  modelica_real tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  tmp98 = fabs(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* evap.Cells[4].heatTransfer.Mdotnom variable */),"evap.Cells[4].heatTransfer.Mdotnom"));
  tmp99 = -0.19999999999999996;
  if(tmp98 < 0.0 && tmp99 != 0.0)
  {
    tmp101 = modf(tmp99, &tmp102);
    
    if(tmp101 > 0.5)
    {
      tmp101 -= 1.0;
      tmp102 += 1.0;
    }
    else if(tmp101 < -0.5)
    {
      tmp101 += 1.0;
      tmp102 -= 1.0;
    }
    
    if(fabs(tmp101) < 1e-10)
      tmp100 = pow(tmp98, tmp102);
    else
    {
      tmp104 = modf(1.0/tmp99, &tmp103);
      if(tmp104 > 0.5)
      {
        tmp104 -= 1.0;
        tmp103 += 1.0;
      }
      else if(tmp104 < -0.5)
      {
        tmp104 += 1.0;
        tmp103 -= 1.0;
      }
      if(fabs(tmp104) < 1e-10 && ((unsigned long)tmp103 & 1))
      {
        tmp100 = -pow(-tmp98, tmp101)*pow(tmp98, tmp102);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp98, tmp99);
      }
    }
  }
  else
  {
    tmp100 = pow(tmp98, tmp99);
  }
  if(isnan(tmp100) || isinf(tmp100))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp98, tmp99);
  }
  jacobian->tmpVars[20] /* evap.Cells.4.heatTransfer.U.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* evap.Cells[4].heatTransfer.Unom variable */)) * ((tmp100) * ((sign(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* evap.Cells[4].heatTransfer.Mdotnom variable */),"evap.Cells[4].heatTransfer.Mdotnom"))) * (DIVISION(jacobian->tmpVars[19] /* evap.Cells.4.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* evap.Cells[4].heatTransfer.Mdotnom variable */),"evap.Cells[4].heatTransfer.Mdotnom")))));
  threadData->lastEquationSolved = 1284;
}

/*
equation index: 1285
type: SIMPLE_ASSIGN
evap.Cells.4.qdot.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.4.heatTransfer.U.$pDERNLSJac5.dummyVarNLSJac5[1] * (T_box_k - evap.Cells[4].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1285(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,1285};
  jacobian->tmpVars[21] /* evap.Cells.4.qdot.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[20] /* evap.Cells.4.heatTransfer.U.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* evap.Cells[4].T variable */));
  threadData->lastEquationSolved = 1285;
}

/*
equation index: 1286
type: SIMPLE_ASSIGN
evap.Cells.4.Q_tot.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells[4].Ai * evap.Cells.4.qdot.$pDERNLSJac5.dummyVarNLSJac5
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1286(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,1286};
  jacobian->tmpVars[22] /* evap.Cells.4.Q_tot.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* evap.Cells[4].Ai PARAM */)) * (jacobian->tmpVars[21] /* evap.Cells.4.qdot.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */);
  threadData->lastEquationSolved = 1286;
}

/*
equation index: 1287
type: SIMPLE_ASSIGN
$res_NLSJac5_4.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.3.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 * (evap.Cells[3].h - evap.Cells[3].hnode_su) + evap.Cells.3.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 * (evap.Cells[4].hnode_su - evap.Cells[3].h) + evap.Cells[3].Vi * evap.Cells[3].rho * $DER.evap.Cells[3].h.SeedNLSJac5 + (-evap.Cells.3.Q_tot.$pDERNLSJac5.dummyVarNLSJac5) - evap.Cells[3].Vi * $DER.evap.Cells[5].p.SeedNLSJac5
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1287(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,1287};
  jacobian->resultVars[3] /* $res_NLSJac5_4.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (jacobian->tmpVars[13] /* evap.Cells.3.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */)) + (jacobian->tmpVars[17] /* evap.Cells.3.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1118]] /* evap.Cells[3].rho variable */)) * (jacobian->seedVars[4] /* der(evap.Cells[3].h.SeedNLSJac5) SEED_VAR */)) + (-jacobian->tmpVars[16] /* evap.Cells.3.Q_tot.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[3].Vi PARAM */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac5) SEED_VAR */));
  threadData->lastEquationSolved = 1287;
}

/*
equation index: 1288
type: SIMPLE_ASSIGN
$res_NLSJac5_3.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.2.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 * (evap.Cells[2].h - evap.Cells[2].hnode_su) + evap.Cells.2.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 * (evap.Cells[3].hnode_su - evap.Cells[2].h) + evap.Cells[2].Vi * evap.Cells[2].rho * $DER.evap.Cells[2].h.SeedNLSJac5 + (-evap.Cells.2.Q_tot.$pDERNLSJac5.dummyVarNLSJac5) - evap.Cells[2].Vi * $DER.evap.Cells[5].p.SeedNLSJac5
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1288(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,1288};
  jacobian->resultVars[2] /* $res_NLSJac5_3.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (jacobian->tmpVars[7] /* evap.Cells.2.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */)) + (jacobian->tmpVars[11] /* evap.Cells.2.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* evap.Cells[2].rho variable */)) * (jacobian->seedVars[5] /* der(evap.Cells[2].h.SeedNLSJac5) SEED_VAR */)) + (-jacobian->tmpVars[10] /* evap.Cells.2.Q_tot.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[2].Vi PARAM */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac5) SEED_VAR */));
  threadData->lastEquationSolved = 1288;
}

/*
equation index: 1289
type: SIMPLE_ASSIGN
$res_NLSJac5_2.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.1.dMdt.$pDERNLSJac5.dummyVarNLSJac5 * (evap.Cells[1].h - evap.Cells[2].hnode_su) + evap.Cells[1].Vi * (evap.Cells[1].rho * $DER.evap.Cells[1].h.SeedNLSJac5 - $DER.evap.Cells[5].p.SeedNLSJac5)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1289(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 22;
  const int equationIndexes[2] = {1,1289};
  jacobian->resultVars[1] /* $res_NLSJac5_2.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (jacobian->tmpVars[2] /* evap.Cells.1.dMdt.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* evap.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* evap.Cells[1].rho variable */)) * (jacobian->seedVars[3] /* der(evap.Cells[1].h.SeedNLSJac5) SEED_VAR */) - jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac5) SEED_VAR */);
  threadData->lastEquationSolved = 1289;
}

/*
equation index: 1290
type: SIMPLE_ASSIGN
evap.Cells.4.dMdt.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells[4].Vi * (evap.Cells[4].drdh * $DER.evap.Cells[4].h.SeedNLSJac5 + evap.Cells[4].drdp * $DER.evap.Cells[5].p.SeedNLSJac5)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1290(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 23;
  const int equationIndexes[2] = {1,1290};
  jacobian->tmpVars[1] /* evap.Cells.4.dMdt.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* evap.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* evap.Cells[4].drdh variable */)) * (jacobian->seedVars[2] /* der(evap.Cells[4].h.SeedNLSJac5) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* evap.Cells[4].drdp variable */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac5) SEED_VAR */));
  threadData->lastEquationSolved = 1290;
}

/*
equation index: 1291
type: SIMPLE_ASSIGN
evap.Cells.4.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.4.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 - evap.Cells.4.dMdt.$pDERNLSJac5.dummyVarNLSJac5
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1291(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 24;
  const int equationIndexes[2] = {1,1291};
  jacobian->tmpVars[23] /* evap.Cells.4.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[19] /* evap.Cells.4.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* evap.Cells.4.dMdt.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1291;
}

/*
equation index: 1292
type: SIMPLE_ASSIGN
evap.Cells.5.InFlow.m_flow.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.4.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 * (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1292(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 25;
  const int equationIndexes[2] = {1,1292};
  jacobian->tmpVars[24] /* evap.Cells.5.InFlow.m_flow.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[23] /* evap.Cells.4.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[4].Nt PARAM */)));
  threadData->lastEquationSolved = 1292;
}

/*
equation index: 1293
type: SIMPLE_ASSIGN
evap.Cells.5.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.5.InFlow.m_flow.$pDERNLSJac5.dummyVarNLSJac5 / (*Real*)(evap.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1293(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 26;
  const int equationIndexes[2] = {1,1293};
  jacobian->tmpVars[25] /* evap.Cells.5.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[24] /* evap.Cells.5.InFlow.m_flow.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */,((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[5].Nt PARAM */)),"/*Real*/(evap.Cells[5].Nt)");
  threadData->lastEquationSolved = 1293;
}

/*
equation index: 1294
type: SIMPLE_ASSIGN
evap.Cells.5.Q_tot.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells[5].Vi * evap.Cells[5].rho * $DER.evap.Cells[5].h.SeedNLSJac5 + evap.Cells.5.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 * (evap.Cells[5].h - evap.Cells[5].hnode_su) - evap.Cells[5].Vi * $DER.evap.Cells[5].p.SeedNLSJac5
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1294(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 27;
  const int equationIndexes[2] = {1,1294};
  jacobian->tmpVars[26] /* evap.Cells.5.Q_tot.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* evap.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* evap.Cells[5].rho variable */)) * (jacobian->seedVars[1] /* der(evap.Cells[5].h.SeedNLSJac5) SEED_VAR */)) + (jacobian->tmpVars[25] /* evap.Cells.5.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* evap.Cells[5].Vi PARAM */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac5) SEED_VAR */));
  threadData->lastEquationSolved = 1294;
}

/*
equation index: 1295
type: SIMPLE_ASSIGN
evap.Cells.5.heatTransfer.U.$pDERNLSJac5.dummyVarNLSJac5[1] = 0.8 * evap.Cells[5].heatTransfer.Unom * abs(evap.Cells[5].M_dot_su / evap.Cells[5].heatTransfer.Mdotnom) ^ (-0.19999999999999996) * sign(evap.Cells[5].M_dot_su / evap.Cells[5].heatTransfer.Mdotnom) * evap.Cells.5.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 / evap.Cells[5].heatTransfer.Mdotnom
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1295(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 28;
  const int equationIndexes[2] = {1,1295};
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_real tmp110;
  modelica_real tmp111;
  tmp105 = fabs(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* evap.Cells[5].heatTransfer.Mdotnom variable */),"evap.Cells[5].heatTransfer.Mdotnom"));
  tmp106 = -0.19999999999999996;
  if(tmp105 < 0.0 && tmp106 != 0.0)
  {
    tmp108 = modf(tmp106, &tmp109);
    
    if(tmp108 > 0.5)
    {
      tmp108 -= 1.0;
      tmp109 += 1.0;
    }
    else if(tmp108 < -0.5)
    {
      tmp108 += 1.0;
      tmp109 -= 1.0;
    }
    
    if(fabs(tmp108) < 1e-10)
      tmp107 = pow(tmp105, tmp109);
    else
    {
      tmp111 = modf(1.0/tmp106, &tmp110);
      if(tmp111 > 0.5)
      {
        tmp111 -= 1.0;
        tmp110 += 1.0;
      }
      else if(tmp111 < -0.5)
      {
        tmp111 += 1.0;
        tmp110 -= 1.0;
      }
      if(fabs(tmp111) < 1e-10 && ((unsigned long)tmp110 & 1))
      {
        tmp107 = -pow(-tmp105, tmp108)*pow(tmp105, tmp109);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp105, tmp106);
      }
    }
  }
  else
  {
    tmp107 = pow(tmp105, tmp106);
  }
  if(isnan(tmp107) || isinf(tmp107))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp105, tmp106);
  }
  jacobian->tmpVars[27] /* evap.Cells.5.heatTransfer.U.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_TMP_VAR */ = (0.8) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* evap.Cells[5].heatTransfer.Unom variable */)) * ((tmp107) * ((sign(DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* evap.Cells[5].heatTransfer.Mdotnom variable */),"evap.Cells[5].heatTransfer.Mdotnom"))) * (DIVISION(jacobian->tmpVars[25] /* evap.Cells.5.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* evap.Cells[5].heatTransfer.Mdotnom variable */),"evap.Cells[5].heatTransfer.Mdotnom")))));
  threadData->lastEquationSolved = 1295;
}

/*
equation index: 1296
type: SIMPLE_ASSIGN
evap.Cells.5.qdot.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.5.heatTransfer.U.$pDERNLSJac5.dummyVarNLSJac5[1] * (T_box_k - evap.Cells[5].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1296(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 29;
  const int equationIndexes[2] = {1,1296};
  jacobian->tmpVars[28] /* evap.Cells.5.qdot.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[27] /* evap.Cells.5.heatTransfer.U.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* evap.Cells[5].T variable */));
  threadData->lastEquationSolved = 1296;
}

/*
equation index: 1297
type: SIMPLE_ASSIGN
$res_NLSJac5_6.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells[5].Ai * evap.Cells.5.qdot.$pDERNLSJac5.dummyVarNLSJac5 - evap.Cells.5.Q_tot.$pDERNLSJac5.dummyVarNLSJac5
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1297(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 30;
  const int equationIndexes[2] = {1,1297};
  jacobian->resultVars[5] /* $res_NLSJac5_6.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* evap.Cells[5].Ai PARAM */)) * (jacobian->tmpVars[28] /* evap.Cells.5.qdot.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[26] /* evap.Cells.5.Q_tot.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1297;
}

/*
equation index: 1298
type: SIMPLE_ASSIGN
$res_NLSJac5_5.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.4.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 * (evap.Cells[4].h - evap.Cells[4].hnode_su) + evap.Cells.4.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 * (evap.Cells[5].hnode_su - evap.Cells[4].h) + evap.Cells[4].Vi * evap.Cells[4].rho * $DER.evap.Cells[4].h.SeedNLSJac5 + (-evap.Cells.4.Q_tot.$pDERNLSJac5.dummyVarNLSJac5) - evap.Cells[4].Vi * $DER.evap.Cells[5].p.SeedNLSJac5
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1298(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 31;
  const int equationIndexes[2] = {1,1298};
  jacobian->resultVars[4] /* $res_NLSJac5_5.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (jacobian->tmpVars[19] /* evap.Cells.4.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */)) + (jacobian->tmpVars[23] /* evap.Cells.4.M_dot_ex.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* evap.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* evap.Cells[4].rho variable */)) * (jacobian->seedVars[2] /* der(evap.Cells[4].h.SeedNLSJac5) SEED_VAR */)) + (-jacobian->tmpVars[22] /* evap.Cells.4.Q_tot.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* evap.Cells[4].Vi PARAM */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac5) SEED_VAR */));
  threadData->lastEquationSolved = 1298;
}

/*
equation index: 1299
type: SIMPLE_ASSIGN
evap.Cells.5.dMdt.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells[5].Vi * (evap.Cells[5].drdh * $DER.evap.Cells[5].h.SeedNLSJac5 + evap.Cells[5].drdp * $DER.evap.Cells[5].p.SeedNLSJac5)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1299(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 32;
  const int equationIndexes[2] = {1,1299};
  jacobian->tmpVars[0] /* evap.Cells.5.dMdt.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* evap.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* evap.Cells[5].drdh variable */)) * (jacobian->seedVars[1] /* der(evap.Cells[5].h.SeedNLSJac5) SEED_VAR */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* evap.Cells[5].drdp variable */)) * (jacobian->seedVars[0] /* der(evap.Cells[5].p.SeedNLSJac5) SEED_VAR */));
  threadData->lastEquationSolved = 1299;
}

/*
equation index: 1300
type: SIMPLE_ASSIGN
$res_NLSJac5_1.$pDERNLSJac5.dummyVarNLSJac5 = evap.Cells.5.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 - evap.Cells.5.dMdt.$pDERNLSJac5.dummyVarNLSJac5
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1300(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 33;
  const int equationIndexes[2] = {1,1300};
  jacobian->resultVars[0] /* $res_NLSJac5_1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[25] /* evap.Cells.5.M_dot_su.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[0] /* evap.Cells.5.dMdt.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1300;
}

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac5_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_NLSJac5;
  
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac5_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_NLSJac5;
  
  static void (*const eqFunctions[34])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1267,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1268,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1269,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1270,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1271,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1272,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1273,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1274,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1275,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1276,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1277,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1278,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1279,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1280,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1281,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1282,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1283,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1284,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1285,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1286,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1287,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1288,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1289,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1290,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1291,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1292,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1293,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1294,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1295,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1296,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1297,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1298,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1299,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1300
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 34; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1e_JacNLSJac5_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277, 1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294, 1295, 1296, 1297, 1298, 1299, 1300};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

int RefrigerationTrainer_ClosedLoopM1e_functionJacADJ_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1e_JacADJ_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int RefrigerationTrainer_ClosedLoopM1e_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1e_JacH_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int RefrigerationTrainer_ClosedLoopM1e_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1e_JacF_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int RefrigerationTrainer_ClosedLoopM1e_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1e_JacD_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int RefrigerationTrainer_ClosedLoopM1e_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1e_JacC_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int RefrigerationTrainer_ClosedLoopM1e_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1e_JacB_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1e_functionJacA_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_A;
  
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1e_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_A;
  
  
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1e_JacA_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianNLSJac1(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "RefrigerationTrainer.ClosedLoopM1e_JacNLSJac1.bin");
  
  initJacobian(jacobian, 6, 6, 35, NULL, RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac1_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(6, 26, 6);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 6+1, pFile, FALSE);
  if (count != 6+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 6+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 26, pFile, FALSE);
  if (count != 26) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 26, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 6);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 6);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 6);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 6);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 6);
  /* color 6 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 1, 6);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianNLSJac2(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "RefrigerationTrainer.ClosedLoopM1e_JacNLSJac2.bin");
  
  initJacobian(jacobian, 6, 6, 35, NULL, RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac2_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(6, 26, 6);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 6+1, pFile, FALSE);
  if (count != 6+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 6+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 26, pFile, FALSE);
  if (count != 26) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 26, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 6);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 6);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 6);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 6);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 6);
  /* color 6 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 1, 6);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianNLSJac4(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "RefrigerationTrainer.ClosedLoopM1e_JacNLSJac4.bin");
  
  initJacobian(jacobian, 6, 6, 35, NULL, RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac4_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(6, 26, 6);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 6+1, pFile, FALSE);
  if (count != 6+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 6+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 26, pFile, FALSE);
  if (count != 26) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 26, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 6);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 6);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 6);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 6);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 6);
  /* color 6 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 1, 6);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianNLSJac5(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "RefrigerationTrainer.ClosedLoopM1e_JacNLSJac5.bin");
  
  initJacobian(jacobian, 6, 6, 35, NULL, RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac5_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(6, 26, 6);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 6+1, pFile, FALSE);
  if (count != 6+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 6+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 26, pFile, FALSE);
  if (count != 26) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 26, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 6);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 6);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 6);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 6);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 6);
  /* color 6 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 1, 6);
  
  omc_fclose(pFile);
  
  return 0;
}
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianADJ(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "RefrigerationTrainer.ClosedLoopM1e_JacA.bin");
  
  initJacobian(jacobian, 13, 13, 0, NULL, RefrigerationTrainer_ClosedLoopM1e_functionJacA_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(13, 144, 12);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 13+1, pFile, FALSE);
  if (count != 13+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 13+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 144, pFile, FALSE);
  if (count != 144) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 144, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 13);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 13);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 13);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 13);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 13);
  /* color 6 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 1, 13);
  /* color 7 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 7, 1, 13);
  /* color 8 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 8, 1, 13);
  /* color 9 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 9, 1, 13);
  /* color 10 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 10, 1, 13);
  /* color 11 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 11, 1, 13);
  /* color 12 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 12, 2, 13);
  
  omc_fclose(pFile);
  
  return 0;
}


