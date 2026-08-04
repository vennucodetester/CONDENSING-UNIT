/* Non Linear Systems */
#include "RefrigerationTrainer.ClosedLoopM1eCS_model.h"
#include "RefrigerationTrainer.ClosedLoopM1eCS_12jac.h"
#include "simulation/jacobian_util.h"
#include "simulation/arrayIndex.h"

#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 520
type: SIMPLE_ASSIGN
comp.s_su = RefrigerationTrainer.ClosedLoopM1eCS.comp.Medium.setState_ph(evap.Cells[5].p, max(2.5e5, min(8.5e5, comp.h_su)), 0).s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,520};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* comp.s_su variable */) = omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), fmax(2.5e5,fmin(8.5e5,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */))), ((modelica_integer) 0))._s;
  threadData->lastEquationSolved = 520;
}
/*
equation index: 521
type: SIMPLE_ASSIGN
comp.h_ex_s = RefrigerationTrainer.ClosedLoopM1eCS.comp.Medium.setState_ps(cond.Cells[1].p, max(2100.0, comp.s_su), 0).h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* comp.h_ex_s variable */) = omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ps(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), fmax(2100.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* comp.s_su variable */)), ((modelica_integer) 0))._h;
  threadData->lastEquationSolved = 521;
}
/*
equation index: 522
type: SIMPLE_ASSIGN
comp.rho_su = RefrigerationTrainer.ClosedLoopM1eCS.comp.Medium.setState_ph(evap.Cells[5].p, max(2.5e5, min(8.5e5, comp.h_su)), 0).d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,522};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* comp.rho_su variable */) = omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), fmax(2.5e5,fmin(8.5e5,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */))), ((modelica_integer) 0))._d;
  threadData->lastEquationSolved = 522;
}
/*
equation index: 523
type: SIMPLE_ASSIGN
m_dot_circuit_kg_s_2 = comp.V_dot_su * comp.rho_su
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* comp.V_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* comp.rho_su variable */));
  threadData->lastEquationSolved = 523;
}
/*
equation index: 524
type: SIMPLE_ASSIGN
comp.h_ex = comp.h_su + (comp.h_ex_s - comp.h_su) / comp.epsilon_s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,524};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */) + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* comp.h_ex_s variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[22]] /* comp.epsilon_s PARAM */),"comp.epsilon_s",equationIndexes);
  threadData->lastEquationSolved = 524;
}

void residualFunc526(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,526};
  int i,j;
  modelica_boolean tmp0;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc526: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 526).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc526 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_520(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_521(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_522(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_523(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_524(data, threadData);
  /* body */
  tmp0 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */),0.0);
  res[0] = (tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */);
  threadData->lastEquationSolved = 525;
  /* restore known outputs */
  threadData->lastEquationSolved = 526;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS526(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS526(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS526(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS526(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for comp.h_su */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 631 /* comp.h_su */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 631 /* comp.h_su */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 631 /* comp.h_su */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS526(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS526(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS526(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS526(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS526(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */);
}


/* inner equations */

/*
equation index: 592
type: SIMPLE_ASSIGN
$DER.evap.Cells[5].p = (evap.Cells[1].Vi * evap.Cells[1].rho * $DER.evap.Cells[1].h + evap.Cells[1].M_dot_su * (evap.Cells[1].h - cond.Cells[5].h) - evap.Cells[1].Q_tot) / evap.Cells[1].Vi
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,592};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* evap.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* evap.Cells[1].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[1].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* evap.Cells[1].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[928]] /* evap.Cells[1].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* evap.Cells[1].Vi PARAM */),"evap.Cells[1].Vi",equationIndexes);
  threadData->lastEquationSolved = 592;
}
/*
equation index: 593
type: SIMPLE_ASSIGN
evap.Cells[1].dMdt = evap.Cells[1].Vi * (evap.Cells[1].drdh * $DER.evap.Cells[1].h + evap.Cells[1].drdp * $DER.evap.Cells[5].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* evap.Cells[1].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* evap.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[943]] /* evap.Cells[1].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[1].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* evap.Cells[1].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 593;
}
/*
equation index: 594
type: SIMPLE_ASSIGN
evap.Cells[2].dMdt = evap.Cells[2].Vi * (evap.Cells[2].drdh * $DER.evap.Cells[2].h + evap.Cells[2].drdp * $DER.evap.Cells[5].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,594};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[939]] /* evap.Cells[2].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* evap.Cells[2].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[2].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* evap.Cells[2].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 594;
}
/*
equation index: 595
type: SIMPLE_ASSIGN
evap.Cells[5].dMdt = evap.Cells[5].Vi * (evap.Cells[5].drdh * $DER.evap.Cells[5].h + evap.Cells[5].drdp * $DER.evap.Cells[5].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,595};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[942]] /* evap.Cells[5].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* evap.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* evap.Cells[5].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* evap.Cells[5].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 595;
}
/*
equation index: 596
type: SIMPLE_ASSIGN
evap.Cells[4].dMdt = evap.Cells[4].Vi * (evap.Cells[4].drdh * $DER.evap.Cells[4].h + evap.Cells[4].drdp * $DER.evap.Cells[5].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,596};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[941]] /* evap.Cells[4].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[946]] /* evap.Cells[4].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[4].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[951]] /* evap.Cells[4].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 596;
}
/*
equation index: 597
type: SIMPLE_ASSIGN
evap.Cells[3].dMdt = evap.Cells[3].Vi * (evap.Cells[3].drdh * $DER.evap.Cells[3].h + evap.Cells[3].drdp * $DER.evap.Cells[5].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,597};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[940]] /* evap.Cells[3].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[945]] /* evap.Cells[3].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[3].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[950]] /* evap.Cells[3].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 597;
}
/*
equation index: 598
type: SIMPLE_ASSIGN
evap.Cells[1].M_dot_ex = evap.Cells[1].M_dot_su - evap.Cells[1].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,598};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[913]] /* evap.Cells[1].M_dot_ex variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* evap.Cells[1].M_dot_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* evap.Cells[1].dMdt variable */);
  threadData->lastEquationSolved = 598;
}
/*
equation index: 599
type: SIMPLE_ASSIGN
evap.Cells[2].InFlow.m_flow = evap.Cells[1].M_dot_ex * (*Real*)(evap.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,599};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* evap.Cells[2].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[913]] /* evap.Cells[1].M_dot_ex variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[1].Nt PARAM */)));
  threadData->lastEquationSolved = 599;
}
/*
equation index: 600
type: SIMPLE_ASSIGN
evap.Cells[2].M_dot_su = evap.Cells[2].InFlow.m_flow / (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,600};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* evap.Cells[2].M_dot_su variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* evap.Cells[2].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* evap.Cells[2].Nt PARAM */)),"/*Real*/(evap.Cells[2].Nt)",equationIndexes);
  threadData->lastEquationSolved = 600;
}
/*
equation index: 601
type: SIMPLE_ASSIGN
evap.Cells[2].Q_tot = evap.Cells[2].Vi * evap.Cells[2].rho * $DER.evap.Cells[2].h + evap.Cells[2].M_dot_su * (evap.Cells[2].h - evap.Cells[1].h) - evap.Cells[2].Vi * $DER.evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,601};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[929]] /* evap.Cells[2].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* evap.Cells[2].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[2].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* evap.Cells[2].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Cells[2].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 601;
}
/*
equation index: 602
type: SIMPLE_ASSIGN
evap.Cells[2].heatTransfer.U[1] = evap.Cells[2].heatTransfer.Unom * (1e-5 + (1e-6 + (evap.Cells[2].M_dot_su / evap.Cells[2].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,602};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* evap.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* evap.Cells[2].heatTransfer.Mdotnom variable */),"evap.Cells[2].heatTransfer.Mdotnom",equationIndexes);
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = 0.4;
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
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* evap.Cells[2].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* evap.Cells[2].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 602;
}
/*
equation index: 603
type: SIMPLE_ASSIGN
evap.Cells[2].qdot = evap.Cells[2].Q_tot / evap.Cells[2].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,603};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* evap.Cells[2].qdot variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[929]] /* evap.Cells[2].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* evap.Cells[2].Ai PARAM */),"evap.Cells[2].Ai",equationIndexes);
  threadData->lastEquationSolved = 603;
}
/*
equation index: 604
type: SIMPLE_ASSIGN
evap.Cells[2].M_dot_ex = evap.Cells[2].M_dot_su - evap.Cells[2].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,604};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[914]] /* evap.Cells[2].M_dot_ex variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* evap.Cells[2].M_dot_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[939]] /* evap.Cells[2].dMdt variable */);
  threadData->lastEquationSolved = 604;
}
/*
equation index: 605
type: SIMPLE_ASSIGN
evap.Cells[3].InFlow.m_flow = evap.Cells[2].M_dot_ex * (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,605};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* evap.Cells[3].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[914]] /* evap.Cells[2].M_dot_ex variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* evap.Cells[2].Nt PARAM */)));
  threadData->lastEquationSolved = 605;
}
/*
equation index: 606
type: SIMPLE_ASSIGN
evap.Cells[3].M_dot_su = evap.Cells[3].InFlow.m_flow / (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,606};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* evap.Cells[3].M_dot_su variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* evap.Cells[3].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* evap.Cells[3].Nt PARAM */)),"/*Real*/(evap.Cells[3].Nt)",equationIndexes);
  threadData->lastEquationSolved = 606;
}
/*
equation index: 607
type: SIMPLE_ASSIGN
evap.Cells[3].heatTransfer.U[1] = evap.Cells[3].heatTransfer.Unom * (1e-5 + (1e-6 + (evap.Cells[3].M_dot_su / evap.Cells[3].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,607};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* evap.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* evap.Cells[3].heatTransfer.Mdotnom variable */),"evap.Cells[3].heatTransfer.Mdotnom",equationIndexes);
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = 0.4;
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
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* evap.Cells[3].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* evap.Cells[3].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 607;
}
/*
equation index: 608
type: SIMPLE_ASSIGN
evap.Cells[3].Q_tot = evap.Cells[3].Vi * evap.Cells[3].rho * $DER.evap.Cells[3].h + evap.Cells[3].M_dot_su * (evap.Cells[3].h - evap.Cells[2].h) - evap.Cells[3].Vi * $DER.evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,608};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* evap.Cells[3].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* evap.Cells[3].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[3].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* evap.Cells[3].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Cells[3].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 608;
}
/*
equation index: 609
type: SIMPLE_ASSIGN
evap.Cells[3].qdot = evap.Cells[3].Q_tot / evap.Cells[3].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,609};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* evap.Cells[3].qdot variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* evap.Cells[3].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* evap.Cells[3].Ai PARAM */),"evap.Cells[3].Ai",equationIndexes);
  threadData->lastEquationSolved = 609;
}
/*
equation index: 610
type: SIMPLE_ASSIGN
evap.Cells[3].M_dot_ex = evap.Cells[3].M_dot_su - evap.Cells[3].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,610};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[915]] /* evap.Cells[3].M_dot_ex variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* evap.Cells[3].M_dot_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[940]] /* evap.Cells[3].dMdt variable */);
  threadData->lastEquationSolved = 610;
}
/*
equation index: 611
type: SIMPLE_ASSIGN
evap.Cells[4].InFlow.m_flow = evap.Cells[3].M_dot_ex * (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,611};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[911]] /* evap.Cells[4].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[915]] /* evap.Cells[3].M_dot_ex variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* evap.Cells[3].Nt PARAM */)));
  threadData->lastEquationSolved = 611;
}
/*
equation index: 612
type: SIMPLE_ASSIGN
evap.Cells[4].M_dot_su = evap.Cells[4].InFlow.m_flow / (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,612};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* evap.Cells[4].M_dot_su variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[911]] /* evap.Cells[4].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* evap.Cells[4].Nt PARAM */)),"/*Real*/(evap.Cells[4].Nt)",equationIndexes);
  threadData->lastEquationSolved = 612;
}
/*
equation index: 613
type: SIMPLE_ASSIGN
evap.Cells[4].heatTransfer.U[1] = evap.Cells[4].heatTransfer.Unom * (1e-5 + (1e-6 + (evap.Cells[4].M_dot_su / evap.Cells[4].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,613};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* evap.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* evap.Cells[4].heatTransfer.Mdotnom variable */),"evap.Cells[4].heatTransfer.Mdotnom",equationIndexes);
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = 0.4;
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
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* evap.Cells[4].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* evap.Cells[4].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 613;
}
/*
equation index: 614
type: SIMPLE_ASSIGN
evap.Cells[4].Q_tot = evap.Cells[4].Vi * evap.Cells[4].rho * $DER.evap.Cells[4].h + evap.Cells[4].M_dot_su * (evap.Cells[4].h - evap.Cells[3].h) - evap.Cells[4].Vi * $DER.evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,614};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[931]] /* evap.Cells[4].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* evap.Cells[4].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[4].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* evap.Cells[4].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Cells[4].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 614;
}
/*
equation index: 615
type: SIMPLE_ASSIGN
evap.Cells[4].qdot = evap.Cells[4].Q_tot / evap.Cells[4].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,615};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* evap.Cells[4].qdot variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[931]] /* evap.Cells[4].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[107]] /* evap.Cells[4].Ai PARAM */),"evap.Cells[4].Ai",equationIndexes);
  threadData->lastEquationSolved = 615;
}
/*
equation index: 616
type: SIMPLE_ASSIGN
evap.Cells[4].M_dot_ex = evap.Cells[4].M_dot_su - evap.Cells[4].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,616};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[916]] /* evap.Cells[4].M_dot_ex variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* evap.Cells[4].M_dot_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[941]] /* evap.Cells[4].dMdt variable */);
  threadData->lastEquationSolved = 616;
}
/*
equation index: 617
type: SIMPLE_ASSIGN
evap.Cells[5].InFlow.m_flow = evap.Cells[4].M_dot_ex * (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,617};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* evap.Cells[5].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[916]] /* evap.Cells[4].M_dot_ex variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* evap.Cells[4].Nt PARAM */)));
  threadData->lastEquationSolved = 617;
}
/*
equation index: 618
type: SIMPLE_ASSIGN
evap.Cells[5].M_dot_su = evap.Cells[5].InFlow.m_flow / (*Real*)(evap.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,618};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* evap.Cells[5].M_dot_su variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* evap.Cells[5].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[35]] /* evap.Cells[5].Nt PARAM */)),"/*Real*/(evap.Cells[5].Nt)",equationIndexes);
  threadData->lastEquationSolved = 618;
}
/*
equation index: 619
type: SIMPLE_ASSIGN
evap.Cells[5].heatTransfer.U[1] = evap.Cells[5].heatTransfer.Unom * (1e-5 + (1e-6 + (evap.Cells[5].M_dot_su / evap.Cells[5].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,619};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* evap.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* evap.Cells[5].heatTransfer.Mdotnom variable */),"evap.Cells[5].heatTransfer.Mdotnom",equationIndexes);
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = 0.4;
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
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* evap.Cells[5].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* evap.Cells[5].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 619;
}
/*
equation index: 620
type: SIMPLE_ASSIGN
evap.Cells[5].Q_tot = evap.Cells[5].Vi * evap.Cells[5].rho * $DER.evap.Cells[5].h + evap.Cells[5].M_dot_su * (evap.Cells[5].h - evap.Cells[4].h) - evap.Cells[5].Vi * $DER.evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,620};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* evap.Cells[5].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* evap.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* evap.Cells[5].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* evap.Cells[5].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* evap.Cells[5].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 620;
}
/*
equation index: 621
type: SIMPLE_ASSIGN
evap.Cells[5].qdot = evap.Cells[5].Q_tot / evap.Cells[5].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,621};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* evap.Cells[5].qdot variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* evap.Cells[5].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* evap.Cells[5].Ai PARAM */),"evap.Cells[5].Ai",equationIndexes);
  threadData->lastEquationSolved = 621;
}
/*
equation index: 622
type: SIMPLE_ASSIGN
coil_evap.Q_cell[2] = evap.Cells[2].qdot * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,622};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* coil_evap.Q_cell[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* evap.Cells[2].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 622;
}
/*
equation index: 623
type: SIMPLE_ASSIGN
coil_evap.T_air[3] = (coil_evap.T_air[2] * coil_evap.cp_air * coil_evap.m_dot_air - coil_evap.Q_cell[2]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,623};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* coil_evap.T_air[3] variable */) = DIVISION_SIM((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[620]] /* coil_evap.T_air[2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* coil_evap.Q_cell[2] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air",equationIndexes);
  threadData->lastEquationSolved = 623;
}
/*
equation index: 624
type: SIMPLE_ASSIGN
evap.Wall_int.T[2] = 0.5 * (coil_evap.T_air[2] + coil_evap.T_air[3]) - coil_evap.Q_cell[2] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,624};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* evap.Wall_int.T[2] variable */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[620]] /* coil_evap.T_air[2] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* coil_evap.T_air[3] variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* coil_evap.Q_cell[2] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 624;
}
/*
equation index: 625
type: SIMPLE_ASSIGN
coil_evap.Q_cell[4] = evap.Cells[4].qdot * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,625};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[618]] /* coil_evap.Q_cell[4] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* evap.Cells[4].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 625;
}
/*
equation index: 626
type: SIMPLE_ASSIGN
coil_evap.Q_cell[5] = evap.Cells[5].qdot * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,626};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[619]] /* coil_evap.Q_cell[5] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* evap.Cells[5].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 626;
}
/*
equation index: 627
type: SIMPLE_ASSIGN
coil_evap.Q_cell[3] = evap.Cells[3].qdot * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,627};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* coil_evap.Q_cell[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* evap.Cells[3].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 627;
}
/*
equation index: 628
type: SIMPLE_ASSIGN
coil_evap.T_air[4] = (coil_evap.T_air[3] * coil_evap.cp_air * coil_evap.m_dot_air - coil_evap.Q_cell[3]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,628};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* coil_evap.T_air[4] variable */) = DIVISION_SIM((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* coil_evap.T_air[3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* coil_evap.Q_cell[3] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air",equationIndexes);
  threadData->lastEquationSolved = 628;
}
/*
equation index: 629
type: SIMPLE_ASSIGN
evap.Wall_int.T[3] = 0.5 * (coil_evap.T_air[3] + coil_evap.T_air[4]) - coil_evap.Q_cell[3] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,629};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* evap.Wall_int.T[3] variable */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* coil_evap.T_air[3] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* coil_evap.T_air[4] variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* coil_evap.Q_cell[3] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 629;
}
/*
equation index: 630
type: SIMPLE_ASSIGN
coil_evap.T_air[5] = (coil_evap.T_air[4] * coil_evap.cp_air * coil_evap.m_dot_air - coil_evap.Q_cell[4]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,630};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* coil_evap.T_air[5] variable */) = DIVISION_SIM((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* coil_evap.T_air[4] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[618]] /* coil_evap.Q_cell[4] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air",equationIndexes);
  threadData->lastEquationSolved = 630;
}
/*
equation index: 631
type: SIMPLE_ASSIGN
evap.Wall_int.T[4] = 0.5 * (coil_evap.T_air[4] + coil_evap.T_air[5]) - coil_evap.Q_cell[4] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,631};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* evap.Wall_int.T[4] variable */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* coil_evap.T_air[4] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* coil_evap.T_air[5] variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[618]] /* coil_evap.Q_cell[4] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 631;
}
/*
equation index: 632
type: SIMPLE_ASSIGN
T_air_off_evap_k = (coil_evap.T_air[5] * coil_evap.cp_air * coil_evap.m_dot_air - coil_evap.Q_cell[5]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,632};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* T_air_off_evap_k variable */) = DIVISION_SIM((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* coil_evap.T_air[5] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[619]] /* coil_evap.Q_cell[5] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air",equationIndexes);
  threadData->lastEquationSolved = 632;
}
/*
equation index: 633
type: SIMPLE_ASSIGN
evap.Wall_int.T[5] = 0.5 * (coil_evap.T_air[5] + T_air_off_evap_k) - coil_evap.Q_cell[5] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,633};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* evap.Wall_int.T[5] variable */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* coil_evap.T_air[5] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* T_air_off_evap_k variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[619]] /* coil_evap.Q_cell[5] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 633;
}

void residualFunc685(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,685};
  int i,j;
  /* iteration variables */
  for (i=0; i<5; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc685: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 685).vars[i]);
      for (j=0; j<5; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc685 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[1].h) STATE_DER */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[2].h) STATE_DER */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].h) STATE_DER */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[4].h) STATE_DER */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[3].h) STATE_DER */) = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_592(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_593(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_594(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_595(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_596(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_597(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_598(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_599(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_600(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_601(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_602(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_603(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_604(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_605(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_606(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_607(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_608(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_609(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_610(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_611(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_612(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_613(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_614(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_615(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_616(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_617(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_618(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_619(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_620(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_621(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_622(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_623(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_624(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_625(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_626(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_627(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_628(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_629(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_630(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_631(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_632(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_633(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* evap.Cells[5].M_dot_su variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* evap.Cells[5].M_dot_ex variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[942]] /* evap.Cells[5].dMdt variable */);
  threadData->lastEquationSolved = 638;
  res[1] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* evap.Cells[5].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* evap.Wall_int.T[5] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[937]] /* evap.Cells[5].T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* evap.Cells[5].qdot variable */);
  threadData->lastEquationSolved = 637;
  res[2] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* evap.Cells[4].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* evap.Wall_int.T[4] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[936]] /* evap.Cells[4].T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* evap.Cells[4].qdot variable */);
  threadData->lastEquationSolved = 636;
  res[3] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* evap.Cells[2].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* evap.Wall_int.T[2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* evap.Cells[2].T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* evap.Cells[2].qdot variable */);
  threadData->lastEquationSolved = 635;
  res[4] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* evap.Cells[3].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* evap.Wall_int.T[3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* evap.Cells[3].T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* evap.Cells[3].qdot variable */);
  threadData->lastEquationSolved = 634;
  /* restore known outputs */
  threadData->lastEquationSolved = 685;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS685(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,5,2,3,4};
  const int rowIndex[19] = {0,1,2,3,4,0,1,2,3,4,0,1,0,1,2,0,1,2,4};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(5, 19, 5);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (5+1)*sizeof(unsigned int));
  
  for(i=2;i<5+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 19*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {4};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {3};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 1 columns */
  const int indices_4[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 1 columns */
  const int indices_5[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
}

void freeSparsePatternNLS685(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS685(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 5;
  inSysData->nonlinearPattern->numberOfEqns = 5;
  inSysData->nonlinearPattern->numberOfNonlinear = 0;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((5+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((5+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(0*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(0*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+5] = {0,0,0,0,0,0};
  const int index_eqn[1+5] = {0,0,0,0,0,0};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (5+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (5+1)*sizeof(unsigned int));
  for(i=2;i<5+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<5+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[0] = {};
  const int rows[0] = {};
  memcpy(inSysData->nonlinearPattern->columns, columns, 0*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 0*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS685(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for der(evap.Cells[1].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 21 /* der(evap.Cells[1].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 21 /* der(evap.Cells[1].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 21 /* der(evap.Cells[1].h) */);
  /* static nls data for der(evap.Cells[2].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 22 /* der(evap.Cells[2].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 22 /* der(evap.Cells[2].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 22 /* der(evap.Cells[2].h) */);
  /* static nls data for der(evap.Cells[5].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 25 /* der(evap.Cells[5].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 25 /* der(evap.Cells[5].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 25 /* der(evap.Cells[5].h) */);
  /* static nls data for der(evap.Cells[4].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 24 /* der(evap.Cells[4].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 24 /* der(evap.Cells[4].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 24 /* der(evap.Cells[4].h) */);
  /* static nls data for der(evap.Cells[3].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 23 /* der(evap.Cells[3].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 23 /* der(evap.Cells[3].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 23 /* der(evap.Cells[3].h) */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS685(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS685(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS685(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS685(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS685(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[1].h) STATE_DER */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[2].h) STATE_DER */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].h) STATE_DER */);
  array[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[4].h) STATE_DER */);
  array[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[3].h) STATE_DER */);
}


/* inner equations */

/*
equation index: 689
type: SIMPLE_ASSIGN
$DER.cond.Cells[1].p = (cond.Cells[1].Vi * cond.Cells[1].rho * $DER.cond.Cells[1].h + cond.Cells[1].M_dot_su * (cond.Cells[1].h - cond.Cells[1].hnode_su) - cond.Cells[1].Q_tot) / cond.Cells[1].Vi
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,689};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* cond.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cond.Cells[1].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[1].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cond.Cells[1].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cond.Cells[1].hnode_su variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[654]] /* cond.Cells[1].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* cond.Cells[1].Vi PARAM */),"cond.Cells[1].Vi",equationIndexes);
  threadData->lastEquationSolved = 689;
}
/*
equation index: 690
type: SIMPLE_ASSIGN
cond.Cells[5].dMdt = cond.Cells[5].Vi * (cond.Cells[5].drdh * $DER.cond.Cells[5].h + cond.Cells[5].drdp * $DER.cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,690};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[668]] /* cond.Cells[5].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* cond.Cells[5].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[5].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cond.Cells[5].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 690;
}
/*
equation index: 691
type: SIMPLE_ASSIGN
cond.Cells[4].dMdt = cond.Cells[4].Vi * (cond.Cells[4].drdh * $DER.cond.Cells[4].h + cond.Cells[4].drdp * $DER.cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,691};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* cond.Cells[4].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* cond.Cells[4].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[4].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cond.Cells[4].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 691;
}
/*
equation index: 692
type: SIMPLE_ASSIGN
cond.Cells[1].dMdt = cond.Cells[1].Vi * (cond.Cells[1].drdh * $DER.cond.Cells[1].h + cond.Cells[1].drdp * $DER.cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,692};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* cond.Cells[1].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* cond.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* cond.Cells[1].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[1].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* cond.Cells[1].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 692;
}
/*
equation index: 693
type: SIMPLE_ASSIGN
cond.Cells[2].dMdt = cond.Cells[2].Vi * (cond.Cells[2].drdh * $DER.cond.Cells[2].h + cond.Cells[2].drdp * $DER.cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,693};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* cond.Cells[2].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[670]] /* cond.Cells[2].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[2].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* cond.Cells[2].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 693;
}
/*
equation index: 694
type: SIMPLE_ASSIGN
cond.Cells[3].dMdt = cond.Cells[3].Vi * (cond.Cells[3].drdh * $DER.cond.Cells[3].h + cond.Cells[3].drdp * $DER.cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,694};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* cond.Cells[3].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* cond.Cells[3].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[3].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* cond.Cells[3].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 694;
}
/*
equation index: 695
type: SIMPLE_ASSIGN
cond.Cells[5].M_dot_su = cond.Cells[5].M_dot_ex + cond.Cells[5].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,695};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cond.Cells[5].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* cond.Cells[5].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[668]] /* cond.Cells[5].dMdt variable */);
  threadData->lastEquationSolved = 695;
}
/*
equation index: 696
type: SIMPLE_ASSIGN
cond.Cells[5].heatTransfer.U[1] = cond.Cells[5].heatTransfer.Unom * (1e-5 + (1e-6 + (cond.Cells[5].M_dot_su / cond.Cells[5].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,696};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cond.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* cond.Cells[5].heatTransfer.Mdotnom variable */),"cond.Cells[5].heatTransfer.Mdotnom",equationIndexes);
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = 0.4;
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
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cond.Cells[5].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cond.Cells[5].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 696;
}
/*
equation index: 697
type: SIMPLE_ASSIGN
cond.Cells[5].Q_tot = cond.Cells[5].Vi * cond.Cells[5].rho * $DER.cond.Cells[5].h + cond.Cells[5].M_dot_su * (cond.Cells[5].h - cond.Cells[4].h) - cond.Cells[5].Vi * $DER.cond.Cells[1].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cond.Cells[5].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cond.Cells[5].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[5].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cond.Cells[5].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Cells[5].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 697;
}
/*
equation index: 698
type: SIMPLE_ASSIGN
cond.Cells[5].qdot = cond.Cells[5].Q_tot / cond.Cells[5].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cond.Cells[5].qdot variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cond.Cells[5].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* cond.Cells[5].Ai PARAM */),"cond.Cells[5].Ai",equationIndexes);
  threadData->lastEquationSolved = 698;
}
/*
equation index: 699
type: SIMPLE_ASSIGN
cond.Cells[5].InFlow.m_flow = cond.Cells[5].M_dot_su * (*Real*)(cond.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,699};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cond.Cells[5].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cond.Cells[5].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* cond.Cells[5].Nt PARAM */)));
  threadData->lastEquationSolved = 699;
}
/*
equation index: 700
type: SIMPLE_ASSIGN
cond.Cells[4].M_dot_ex = cond.Cells[5].InFlow.m_flow / (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,700};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* cond.Cells[4].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cond.Cells[5].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* cond.Cells[4].Nt PARAM */)),"/*Real*/(cond.Cells[4].Nt)",equationIndexes);
  threadData->lastEquationSolved = 700;
}
/*
equation index: 701
type: SIMPLE_ASSIGN
cond.Cells[4].M_dot_su = cond.Cells[4].M_dot_ex + cond.Cells[4].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,701};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cond.Cells[4].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* cond.Cells[4].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* cond.Cells[4].dMdt variable */);
  threadData->lastEquationSolved = 701;
}
/*
equation index: 702
type: SIMPLE_ASSIGN
cond.Cells[4].Q_tot = cond.Cells[4].Vi * cond.Cells[4].rho * $DER.cond.Cells[4].h + cond.Cells[4].M_dot_su * (cond.Cells[4].h - cond.Cells[3].h) - cond.Cells[4].Vi * $DER.cond.Cells[1].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,702};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* cond.Cells[4].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cond.Cells[4].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[4].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cond.Cells[4].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Cells[4].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 702;
}
/*
equation index: 703
type: SIMPLE_ASSIGN
cond.Cells[4].heatTransfer.U[1] = cond.Cells[4].heatTransfer.Unom * (1e-5 + (1e-6 + (cond.Cells[4].M_dot_su / cond.Cells[4].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,703};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cond.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* cond.Cells[4].heatTransfer.Mdotnom variable */),"cond.Cells[4].heatTransfer.Mdotnom",equationIndexes);
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = 0.4;
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
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cond.Cells[4].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* cond.Cells[4].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 703;
}
/*
equation index: 704
type: SIMPLE_ASSIGN
cond.Cells[4].InFlow.m_flow = cond.Cells[4].M_dot_su * (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,704};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cond.Cells[4].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cond.Cells[4].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* cond.Cells[4].Nt PARAM */)));
  threadData->lastEquationSolved = 704;
}
/*
equation index: 705
type: SIMPLE_ASSIGN
cond.Cells[3].M_dot_ex = cond.Cells[4].InFlow.m_flow / (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,705};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* cond.Cells[3].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cond.Cells[4].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* cond.Cells[3].Nt PARAM */)),"/*Real*/(cond.Cells[3].Nt)",equationIndexes);
  threadData->lastEquationSolved = 705;
}
/*
equation index: 706
type: SIMPLE_ASSIGN
cond.Cells[4].qdot = cond.Cells[4].Q_tot / cond.Cells[4].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,706};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cond.Cells[4].qdot variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* cond.Cells[4].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[36]] /* cond.Cells[4].Ai PARAM */),"cond.Cells[4].Ai",equationIndexes);
  threadData->lastEquationSolved = 706;
}
/*
equation index: 707
type: SIMPLE_ASSIGN
cond.Cells[3].M_dot_su = cond.Cells[3].M_dot_ex + cond.Cells[3].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,707};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cond.Cells[3].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* cond.Cells[3].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* cond.Cells[3].dMdt variable */);
  threadData->lastEquationSolved = 707;
}
/*
equation index: 708
type: SIMPLE_ASSIGN
cond.Cells[3].heatTransfer.U[1] = cond.Cells[3].heatTransfer.Unom * (1e-5 + (1e-6 + (cond.Cells[3].M_dot_su / cond.Cells[3].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,708};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cond.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cond.Cells[3].heatTransfer.Mdotnom variable */),"cond.Cells[3].heatTransfer.Mdotnom",equationIndexes);
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = 0.4;
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
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cond.Cells[3].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cond.Cells[3].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 708;
}
/*
equation index: 709
type: SIMPLE_ASSIGN
cond.Cells[3].Q_tot = cond.Cells[3].Vi * cond.Cells[3].rho * $DER.cond.Cells[3].h + cond.Cells[3].M_dot_su * (cond.Cells[3].h - cond.Cells[2].h) - cond.Cells[3].Vi * $DER.cond.Cells[1].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,709};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* cond.Cells[3].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cond.Cells[3].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[3].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cond.Cells[3].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Cells[3].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 709;
}
/*
equation index: 710
type: SIMPLE_ASSIGN
cond.Cells[3].InFlow.m_flow = cond.Cells[3].M_dot_su * (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,710};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cond.Cells[3].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cond.Cells[3].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* cond.Cells[3].Nt PARAM */)));
  threadData->lastEquationSolved = 710;
}
/*
equation index: 711
type: SIMPLE_ASSIGN
cond.Cells[2].M_dot_ex = cond.Cells[3].InFlow.m_flow / (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,711};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* cond.Cells[2].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cond.Cells[3].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* cond.Cells[2].Nt PARAM */)),"/*Real*/(cond.Cells[2].Nt)",equationIndexes);
  threadData->lastEquationSolved = 711;
}
/*
equation index: 712
type: SIMPLE_ASSIGN
cond.Cells[3].qdot = cond.Cells[3].Q_tot / cond.Cells[3].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,712};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cond.Cells[3].qdot variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* cond.Cells[3].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[35]] /* cond.Cells[3].Ai PARAM */),"cond.Cells[3].Ai",equationIndexes);
  threadData->lastEquationSolved = 712;
}
/*
equation index: 713
type: SIMPLE_ASSIGN
cond.Cells[2].M_dot_su = cond.Cells[2].M_dot_ex + cond.Cells[2].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,713};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cond.Cells[2].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* cond.Cells[2].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* cond.Cells[2].dMdt variable */);
  threadData->lastEquationSolved = 713;
}
/*
equation index: 714
type: SIMPLE_ASSIGN
cond.Cells[2].heatTransfer.U[1] = cond.Cells[2].heatTransfer.Unom * (1e-5 + (1e-6 + (cond.Cells[2].M_dot_su / cond.Cells[2].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,714};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cond.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cond.Cells[2].heatTransfer.Mdotnom variable */),"cond.Cells[2].heatTransfer.Mdotnom",equationIndexes);
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = 0.4;
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
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* cond.Cells[2].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* cond.Cells[2].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 714;
}
/*
equation index: 715
type: SIMPLE_ASSIGN
cond.Cells[2].Q_tot = cond.Cells[2].Vi * cond.Cells[2].rho * $DER.cond.Cells[2].h + cond.Cells[2].M_dot_su * (cond.Cells[2].h - cond.Cells[1].h) - cond.Cells[2].Vi * $DER.cond.Cells[1].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,715};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* cond.Cells[2].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cond.Cells[2].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[2].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cond.Cells[2].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Cells[2].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 715;
}
/*
equation index: 716
type: SIMPLE_ASSIGN
cond.Cells[2].InFlow.m_flow = cond.Cells[2].M_dot_su * (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,716};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cond.Cells[2].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cond.Cells[2].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* cond.Cells[2].Nt PARAM */)));
  threadData->lastEquationSolved = 716;
}
/*
equation index: 717
type: SIMPLE_ASSIGN
cond.Cells[1].M_dot_ex = cond.Cells[2].InFlow.m_flow / (*Real*)(cond.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,717};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cond.Cells[1].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cond.Cells[2].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[1].Nt PARAM */)),"/*Real*/(cond.Cells[1].Nt)",equationIndexes);
  threadData->lastEquationSolved = 717;
}
/*
equation index: 718
type: SIMPLE_ASSIGN
cond.Cells[2].qdot = cond.Cells[2].Q_tot / cond.Cells[2].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,718};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cond.Cells[2].qdot variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* cond.Cells[2].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[34]] /* cond.Cells[2].Ai PARAM */),"cond.Cells[2].Ai",equationIndexes);
  threadData->lastEquationSolved = 718;
}
/*
equation index: 719
type: SIMPLE_ASSIGN
coil_cond.Q_cell[5] = cond.Cells[5].qdot * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,719};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* coil_cond.Q_cell[5] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cond.Cells[5].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 719;
}
/*
equation index: 720
type: SIMPLE_ASSIGN
coil_cond.Q_cell[3] = cond.Cells[3].qdot * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,720};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* coil_cond.Q_cell[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cond.Cells[3].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 720;
}
/*
equation index: 721
type: SIMPLE_ASSIGN
coil_cond.Q_cell[4] = cond.Cells[4].qdot * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,721};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* coil_cond.Q_cell[4] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cond.Cells[4].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 721;
}
/*
equation index: 722
type: SIMPLE_ASSIGN
coil_cond.Q_cell[2] = cond.Cells[2].qdot * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,722};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* coil_cond.Q_cell[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cond.Cells[2].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 722;
}
/*
equation index: 723
type: SIMPLE_ASSIGN
coil_cond.T_air[3] = (coil_cond.T_air[2] * coil_cond.cp_air * coil_cond.m_dot_air - coil_cond.Q_cell[2]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,723};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* coil_cond.T_air[3] variable */) = DIVISION_SIM((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* coil_cond.T_air[2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* coil_cond.Q_cell[2] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air",equationIndexes);
  threadData->lastEquationSolved = 723;
}
/*
equation index: 724
type: SIMPLE_ASSIGN
coil_cond.T_air[4] = (coil_cond.T_air[3] * coil_cond.cp_air * coil_cond.m_dot_air - coil_cond.Q_cell[3]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,724};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* coil_cond.T_air[4] variable */) = DIVISION_SIM((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* coil_cond.T_air[3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* coil_cond.Q_cell[3] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air",equationIndexes);
  threadData->lastEquationSolved = 724;
}
/*
equation index: 725
type: SIMPLE_ASSIGN
cond.Wall_int.T[3] = 0.5 * (coil_cond.T_air[3] + coil_cond.T_air[4]) - coil_cond.Q_cell[3] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,725};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* cond.Wall_int.T[3] variable */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* coil_cond.T_air[3] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* coil_cond.T_air[4] variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* coil_cond.Q_cell[3] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 725;
}
/*
equation index: 726
type: SIMPLE_ASSIGN
coil_cond.T_air[5] = (coil_cond.T_air[4] * coil_cond.cp_air * coil_cond.m_dot_air - coil_cond.Q_cell[4]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,726};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* coil_cond.T_air[5] variable */) = DIVISION_SIM((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* coil_cond.T_air[4] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* coil_cond.Q_cell[4] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air",equationIndexes);
  threadData->lastEquationSolved = 726;
}
/*
equation index: 727
type: SIMPLE_ASSIGN
cond.Wall_int.T[4] = 0.5 * (coil_cond.T_air[4] + coil_cond.T_air[5]) - coil_cond.Q_cell[4] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,727};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* cond.Wall_int.T[4] variable */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* coil_cond.T_air[4] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* coil_cond.T_air[5] variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* coil_cond.Q_cell[4] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 727;
}
/*
equation index: 728
type: SIMPLE_ASSIGN
T_air_off_cond_k = (coil_cond.T_air[5] * coil_cond.cp_air * coil_cond.m_dot_air - coil_cond.Q_cell[5]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,728};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* T_air_off_cond_k variable */) = DIVISION_SIM((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* coil_cond.T_air[5] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* coil_cond.Q_cell[5] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air",equationIndexes);
  threadData->lastEquationSolved = 728;
}
/*
equation index: 729
type: SIMPLE_ASSIGN
cond.Wall_int.T[5] = 0.5 * (coil_cond.T_air[5] + T_air_off_cond_k) - coil_cond.Q_cell[5] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,729};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* cond.Wall_int.T[5] variable */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* coil_cond.T_air[5] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* T_air_off_cond_k variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* coil_cond.Q_cell[5] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 729;
}
/*
equation index: 730
type: SIMPLE_ASSIGN
cond.Wall_int.T[2] = 0.5 * (coil_cond.T_air[2] + coil_cond.T_air[3]) - coil_cond.Q_cell[2] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,730};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* cond.Wall_int.T[2] variable */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* coil_cond.T_air[2] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* coil_cond.T_air[3] variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* coil_cond.Q_cell[2] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 730;
}

void residualFunc782(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,782};
  int i,j;
  /* iteration variables */
  for (i=0; i<5; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc782: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 782).vars[i]);
      for (j=0; j<5; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc782 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[5].h) STATE_DER */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[4].h) STATE_DER */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[1].h) STATE_DER */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[2].h) STATE_DER */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[3].h) STATE_DER */) = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_689(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_690(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_691(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_692(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_693(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_694(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_695(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_696(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_697(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_698(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_699(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_700(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_701(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_702(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_703(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_704(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_705(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_706(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_707(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_708(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_709(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_710(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_711(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_712(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_713(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_714(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_715(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_716(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_717(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_718(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_719(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_720(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_721(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_722(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_723(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_724(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_725(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_726(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_727(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_728(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_729(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_730(data, threadData);
  /* body */
  res[0] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cond.Cells[4].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* cond.Wall_int.T[4] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[662]] /* cond.Cells[4].T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cond.Cells[4].qdot variable */);
  threadData->lastEquationSolved = 735;
  res[1] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cond.Cells[3].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* cond.Wall_int.T[3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* cond.Cells[3].T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cond.Cells[3].qdot variable */);
  threadData->lastEquationSolved = 734;
  res[2] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* cond.Cells[2].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* cond.Wall_int.T[2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[660]] /* cond.Cells[2].T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cond.Cells[2].qdot variable */);
  threadData->lastEquationSolved = 733;
  res[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cond.Cells[1].M_dot_su variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cond.Cells[1].M_dot_ex variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* cond.Cells[1].dMdt variable */);
  threadData->lastEquationSolved = 732;
  res[4] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cond.Cells[5].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* cond.Wall_int.T[5] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* cond.Cells[5].T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cond.Cells[5].qdot variable */);
  threadData->lastEquationSolved = 731;
  /* restore known outputs */
  threadData->lastEquationSolved = 782;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS782(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,5,5,5,5};
  const int rowIndex[25] = {0,1,2,3,4,0,1,2,3,4,0,1,2,3,4,0,1,2,3,4,0,1,2,3,4};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(5, 25, 5);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (5+1)*sizeof(unsigned int));
  
  for(i=2;i<5+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 25*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {4};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {3};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 1 columns */
  const int indices_4[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 1 columns */
  const int indices_5[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
}

void freeSparsePatternNLS782(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS782(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 5;
  inSysData->nonlinearPattern->numberOfEqns = 5;
  inSysData->nonlinearPattern->numberOfNonlinear = 0;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((5+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((5+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(0*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(0*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+5] = {0,0,0,0,0,0};
  const int index_eqn[1+5] = {0,0,0,0,0,0};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (5+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (5+1)*sizeof(unsigned int));
  for(i=2;i<5+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<5+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[0] = {};
  const int rows[0] = {};
  memcpy(inSysData->nonlinearPattern->columns, columns, 0*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 0*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS782(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for der(cond.Cells[5].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 18 /* der(cond.Cells[5].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 18 /* der(cond.Cells[5].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 18 /* der(cond.Cells[5].h) */);
  /* static nls data for der(cond.Cells[4].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 17 /* der(cond.Cells[4].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 17 /* der(cond.Cells[4].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 17 /* der(cond.Cells[4].h) */);
  /* static nls data for der(cond.Cells[1].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 14 /* der(cond.Cells[1].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 14 /* der(cond.Cells[1].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 14 /* der(cond.Cells[1].h) */);
  /* static nls data for der(cond.Cells[2].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 15 /* der(cond.Cells[2].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 15 /* der(cond.Cells[2].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 15 /* der(cond.Cells[2].h) */);
  /* static nls data for der(cond.Cells[3].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 16 /* der(cond.Cells[3].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 16 /* der(cond.Cells[3].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 16 /* der(cond.Cells[3].h) */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS782(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS782(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS782(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS782(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS782(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[5].h) STATE_DER */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[4].h) STATE_DER */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[1].h) STATE_DER */);
  array[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[2].h) STATE_DER */);
  array[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[3].h) STATE_DER */);
}


/* inner equations */

/*
equation index: 791
type: SIMPLE_ASSIGN
comp.rho_su = RefrigerationTrainer.ClosedLoopM1eCS.comp.Medium.setState_ph(evap.Cells[5].p, max(2.5e5, min(8.5e5, comp.h_su)), 0).d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,791};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* comp.rho_su variable */) = omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), fmax(2.5e5,fmin(8.5e5,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */))), ((modelica_integer) 0))._d;
  threadData->lastEquationSolved = 791;
}
/*
equation index: 792
type: SIMPLE_ASSIGN
comp.s_su = RefrigerationTrainer.ClosedLoopM1eCS.comp.Medium.setState_ph(evap.Cells[5].p, max(2.5e5, min(8.5e5, comp.h_su)), 0).s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,792};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* comp.s_su variable */) = omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), fmax(2.5e5,fmin(8.5e5,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */))), ((modelica_integer) 0))._s;
  threadData->lastEquationSolved = 792;
}
/*
equation index: 793
type: SIMPLE_ASSIGN
comp.h_ex_s = RefrigerationTrainer.ClosedLoopM1eCS.comp.Medium.setState_ps(cond.Cells[1].p, max(2100.0, comp.s_su), 0).h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,793};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* comp.h_ex_s variable */) = omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ps(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), fmax(2100.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* comp.s_su variable */)), ((modelica_integer) 0))._h;
  threadData->lastEquationSolved = 793;
}
/*
equation index: 794
type: SIMPLE_ASSIGN
m_dot_circuit_kg_s_2 = comp.V_dot_su * comp.rho_su
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,794};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* comp.V_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* comp.rho_su variable */));
  threadData->lastEquationSolved = 794;
}
/*
equation index: 795
type: SIMPLE_ASSIGN
comp.h_ex = comp.h_su + (comp.h_ex_s - comp.h_su) / comp.epsilon_s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,795};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */) + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* comp.h_ex_s variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[22]] /* comp.epsilon_s PARAM */),"comp.epsilon_s",equationIndexes);
  threadData->lastEquationSolved = 795;
}

void residualFunc797(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,797};
  int i,j;
  modelica_boolean tmp0;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc797: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 797).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc797 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_791(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_792(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_793(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_794(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_795(data, threadData);
  /* body */
  tmp0 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */),0.0);
  res[0] = (tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */);
  threadData->lastEquationSolved = 796;
  /* restore known outputs */
  threadData->lastEquationSolved = 797;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS797(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS797(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS797(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS797(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for comp.h_su */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 631 /* comp.h_su */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 631 /* comp.h_su */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 631 /* comp.h_su */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS797(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS797(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS797(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS797(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS797(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */);
}


/* inner equations */

/*
equation index: 992
type: SIMPLE_ASSIGN
$DER.cond.Cells[1].p = (cond.Cells[1].Vi * cond.Cells[1].rho * der(cond.Cells[1].h) + cond.Cells[1].M_dot_su * (cond.Cells[1].h - cond.Cells[1].hnode_su) - cond.Cells[1].Q_tot) / cond.Cells[1].Vi
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,992};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* cond.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cond.Cells[1].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[1].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cond.Cells[1].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cond.Cells[1].hnode_su variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[654]] /* cond.Cells[1].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* cond.Cells[1].Vi PARAM */),"cond.Cells[1].Vi",equationIndexes);
  threadData->lastEquationSolved = 992;
}
/*
equation index: 993
type: SIMPLE_ASSIGN
cond.Cells[5].dMdt = cond.Cells[5].Vi * (cond.Cells[5].drdh * der(cond.Cells[5].h) + cond.Cells[5].drdp * der(cond.Cells[1].p))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,993};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[668]] /* cond.Cells[5].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* cond.Cells[5].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[5].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cond.Cells[5].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 993;
}
/*
equation index: 994
type: SIMPLE_ASSIGN
cond.Cells[4].dMdt = cond.Cells[4].Vi * (cond.Cells[4].drdh * der(cond.Cells[4].h) + cond.Cells[4].drdp * der(cond.Cells[1].p))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,994};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* cond.Cells[4].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* cond.Cells[4].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[4].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cond.Cells[4].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 994;
}
/*
equation index: 995
type: SIMPLE_ASSIGN
cond.Cells[3].dMdt = cond.Cells[3].Vi * (cond.Cells[3].drdh * der(cond.Cells[3].h) + cond.Cells[3].drdp * der(cond.Cells[1].p))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,995};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* cond.Cells[3].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* cond.Cells[3].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[3].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* cond.Cells[3].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 995;
}
/*
equation index: 996
type: SIMPLE_ASSIGN
cond.Cells[2].dMdt = cond.Cells[2].Vi * (cond.Cells[2].drdh * der(cond.Cells[2].h) + cond.Cells[2].drdp * der(cond.Cells[1].p))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,996};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* cond.Cells[2].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[670]] /* cond.Cells[2].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[2].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* cond.Cells[2].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 996;
}
/*
equation index: 997
type: SIMPLE_ASSIGN
cond.Cells[1].dMdt = cond.Cells[1].Vi * (cond.Cells[1].drdh * der(cond.Cells[1].h) + cond.Cells[1].drdp * der(cond.Cells[1].p))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,997};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* cond.Cells[1].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* cond.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* cond.Cells[1].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[1].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* cond.Cells[1].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 997;
}
/*
equation index: 998
type: SIMPLE_ASSIGN
cond.Cells[5].M_dot_su = cond.Cells[5].M_dot_ex + cond.Cells[5].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,998};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cond.Cells[5].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* cond.Cells[5].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[668]] /* cond.Cells[5].dMdt variable */);
  threadData->lastEquationSolved = 998;
}
/*
equation index: 999
type: SIMPLE_ASSIGN
cond.Cells[5].Q_tot = cond.Cells[5].Vi * cond.Cells[5].rho * der(cond.Cells[5].h) + cond.Cells[5].M_dot_su * (cond.Cells[5].h - cond.Cells[4].h) - cond.Cells[5].Vi * der(cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,999};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cond.Cells[5].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cond.Cells[5].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[5].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cond.Cells[5].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Cells[5].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 999;
}
/*
equation index: 1000
type: SIMPLE_ASSIGN
cond.Cells[5].heatTransfer.U[1] = cond.Cells[5].heatTransfer.Unom * (1e-5 + (1e-6 + (cond.Cells[5].M_dot_su / cond.Cells[5].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1000};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cond.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* cond.Cells[5].heatTransfer.Mdotnom variable */),"cond.Cells[5].heatTransfer.Mdotnom",equationIndexes);
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = 0.4;
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
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cond.Cells[5].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cond.Cells[5].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 1000;
}
/*
equation index: 1001
type: SIMPLE_ASSIGN
cond.Cells[5].qdot = cond.Cells[5].Q_tot / cond.Cells[5].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1001};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cond.Cells[5].qdot variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cond.Cells[5].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* cond.Cells[5].Ai PARAM */),"cond.Cells[5].Ai",equationIndexes);
  threadData->lastEquationSolved = 1001;
}
/*
equation index: 1002
type: SIMPLE_ASSIGN
cond.Cells[5].InFlow.m_flow = cond.Cells[5].M_dot_su * (*Real*)(cond.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1002};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cond.Cells[5].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cond.Cells[5].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* cond.Cells[5].Nt PARAM */)));
  threadData->lastEquationSolved = 1002;
}
/*
equation index: 1003
type: SIMPLE_ASSIGN
cond.Cells[4].M_dot_ex = cond.Cells[5].InFlow.m_flow / (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1003};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* cond.Cells[4].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cond.Cells[5].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* cond.Cells[4].Nt PARAM */)),"/*Real*/(cond.Cells[4].Nt)",equationIndexes);
  threadData->lastEquationSolved = 1003;
}
/*
equation index: 1004
type: SIMPLE_ASSIGN
cond.Cells[4].M_dot_su = cond.Cells[4].M_dot_ex + cond.Cells[4].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1004};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cond.Cells[4].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* cond.Cells[4].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* cond.Cells[4].dMdt variable */);
  threadData->lastEquationSolved = 1004;
}
/*
equation index: 1005
type: SIMPLE_ASSIGN
cond.Cells[4].Q_tot = cond.Cells[4].Vi * cond.Cells[4].rho * der(cond.Cells[4].h) + cond.Cells[4].M_dot_su * (cond.Cells[4].h - cond.Cells[3].h) - cond.Cells[4].Vi * der(cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1005};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* cond.Cells[4].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cond.Cells[4].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[4].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cond.Cells[4].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Cells[4].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 1005;
}
/*
equation index: 1006
type: SIMPLE_ASSIGN
cond.Cells[4].heatTransfer.U[1] = cond.Cells[4].heatTransfer.Unom * (1e-5 + (1e-6 + (cond.Cells[4].M_dot_su / cond.Cells[4].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1006};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cond.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* cond.Cells[4].heatTransfer.Mdotnom variable */),"cond.Cells[4].heatTransfer.Mdotnom",equationIndexes);
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = 0.4;
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
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cond.Cells[4].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* cond.Cells[4].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 1006;
}
/*
equation index: 1007
type: SIMPLE_ASSIGN
cond.Cells[4].qdot = cond.Cells[4].Q_tot / cond.Cells[4].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1007};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cond.Cells[4].qdot variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* cond.Cells[4].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[36]] /* cond.Cells[4].Ai PARAM */),"cond.Cells[4].Ai",equationIndexes);
  threadData->lastEquationSolved = 1007;
}
/*
equation index: 1008
type: SIMPLE_ASSIGN
cond.Cells[4].InFlow.m_flow = cond.Cells[4].M_dot_su * (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1008};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cond.Cells[4].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cond.Cells[4].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* cond.Cells[4].Nt PARAM */)));
  threadData->lastEquationSolved = 1008;
}
/*
equation index: 1009
type: SIMPLE_ASSIGN
cond.Cells[3].M_dot_ex = cond.Cells[4].InFlow.m_flow / (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1009};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* cond.Cells[3].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cond.Cells[4].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* cond.Cells[3].Nt PARAM */)),"/*Real*/(cond.Cells[3].Nt)",equationIndexes);
  threadData->lastEquationSolved = 1009;
}
/*
equation index: 1010
type: SIMPLE_ASSIGN
cond.Cells[3].M_dot_su = cond.Cells[3].M_dot_ex + cond.Cells[3].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1010};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cond.Cells[3].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* cond.Cells[3].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* cond.Cells[3].dMdt variable */);
  threadData->lastEquationSolved = 1010;
}
/*
equation index: 1011
type: SIMPLE_ASSIGN
cond.Cells[3].Q_tot = cond.Cells[3].Vi * cond.Cells[3].rho * der(cond.Cells[3].h) + cond.Cells[3].M_dot_su * (cond.Cells[3].h - cond.Cells[2].h) - cond.Cells[3].Vi * der(cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1011};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* cond.Cells[3].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cond.Cells[3].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[3].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cond.Cells[3].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Cells[3].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 1011;
}
/*
equation index: 1012
type: SIMPLE_ASSIGN
cond.Cells[3].heatTransfer.U[1] = cond.Cells[3].heatTransfer.Unom * (1e-5 + (1e-6 + (cond.Cells[3].M_dot_su / cond.Cells[3].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1012};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cond.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cond.Cells[3].heatTransfer.Mdotnom variable */),"cond.Cells[3].heatTransfer.Mdotnom",equationIndexes);
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = 0.4;
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
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cond.Cells[3].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cond.Cells[3].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 1012;
}
/*
equation index: 1013
type: SIMPLE_ASSIGN
cond.Cells[3].qdot = cond.Cells[3].Q_tot / cond.Cells[3].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1013};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cond.Cells[3].qdot variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* cond.Cells[3].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[35]] /* cond.Cells[3].Ai PARAM */),"cond.Cells[3].Ai",equationIndexes);
  threadData->lastEquationSolved = 1013;
}
/*
equation index: 1014
type: SIMPLE_ASSIGN
cond.Cells[3].InFlow.m_flow = cond.Cells[3].M_dot_su * (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1014};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cond.Cells[3].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cond.Cells[3].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* cond.Cells[3].Nt PARAM */)));
  threadData->lastEquationSolved = 1014;
}
/*
equation index: 1015
type: SIMPLE_ASSIGN
cond.Cells[2].M_dot_ex = cond.Cells[3].InFlow.m_flow / (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1015};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* cond.Cells[2].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cond.Cells[3].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* cond.Cells[2].Nt PARAM */)),"/*Real*/(cond.Cells[2].Nt)",equationIndexes);
  threadData->lastEquationSolved = 1015;
}
/*
equation index: 1016
type: SIMPLE_ASSIGN
cond.Cells[2].M_dot_su = cond.Cells[2].M_dot_ex + cond.Cells[2].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1016};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cond.Cells[2].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* cond.Cells[2].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* cond.Cells[2].dMdt variable */);
  threadData->lastEquationSolved = 1016;
}
/*
equation index: 1017
type: SIMPLE_ASSIGN
cond.Cells[2].Q_tot = cond.Cells[2].Vi * cond.Cells[2].rho * der(cond.Cells[2].h) + cond.Cells[2].M_dot_su * (cond.Cells[2].h - cond.Cells[1].h) - cond.Cells[2].Vi * der(cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1017};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* cond.Cells[2].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cond.Cells[2].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[2].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cond.Cells[2].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Cells[2].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 1017;
}
/*
equation index: 1018
type: SIMPLE_ASSIGN
cond.Cells[2].heatTransfer.U[1] = cond.Cells[2].heatTransfer.Unom * (1e-5 + (1e-6 + (cond.Cells[2].M_dot_su / cond.Cells[2].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1018};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cond.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cond.Cells[2].heatTransfer.Mdotnom variable */),"cond.Cells[2].heatTransfer.Mdotnom",equationIndexes);
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = 0.4;
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
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* cond.Cells[2].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* cond.Cells[2].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 1018;
}
/*
equation index: 1019
type: SIMPLE_ASSIGN
cond.Cells[2].qdot = cond.Cells[2].Q_tot / cond.Cells[2].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1019};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cond.Cells[2].qdot variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* cond.Cells[2].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[34]] /* cond.Cells[2].Ai PARAM */),"cond.Cells[2].Ai",equationIndexes);
  threadData->lastEquationSolved = 1019;
}
/*
equation index: 1020
type: SIMPLE_ASSIGN
cond.Cells[2].InFlow.m_flow = cond.Cells[2].M_dot_su * (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1020};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cond.Cells[2].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cond.Cells[2].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* cond.Cells[2].Nt PARAM */)));
  threadData->lastEquationSolved = 1020;
}
/*
equation index: 1021
type: SIMPLE_ASSIGN
cond.Cells[1].M_dot_ex = cond.Cells[2].InFlow.m_flow / (*Real*)(cond.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1021};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cond.Cells[1].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cond.Cells[2].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[1].Nt PARAM */)),"/*Real*/(cond.Cells[1].Nt)",equationIndexes);
  threadData->lastEquationSolved = 1021;
}
/*
equation index: 1022
type: SIMPLE_ASSIGN
coil_cond.Q_cell[5] = cond.Cells[5].qdot * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1022};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* coil_cond.Q_cell[5] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cond.Cells[5].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 1022;
}
/*
equation index: 1023
type: SIMPLE_ASSIGN
coil_cond.Q_cell[4] = cond.Cells[4].qdot * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1023};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* coil_cond.Q_cell[4] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cond.Cells[4].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 1023;
}
/*
equation index: 1024
type: SIMPLE_ASSIGN
coil_cond.Q_cell[3] = cond.Cells[3].qdot * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1024};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* coil_cond.Q_cell[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cond.Cells[3].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 1024;
}
/*
equation index: 1025
type: SIMPLE_ASSIGN
coil_cond.Q_cell[2] = cond.Cells[2].qdot * coil_cond.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1025};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* coil_cond.Q_cell[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cond.Cells[2].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */));
  threadData->lastEquationSolved = 1025;
}
/*
equation index: 1026
type: SIMPLE_ASSIGN
coil_cond.T_air[3] = (coil_cond.T_air[2] * coil_cond.cp_air * coil_cond.m_dot_air - coil_cond.Q_cell[2]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1026};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* coil_cond.T_air[3] variable */) = DIVISION_SIM((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* coil_cond.T_air[2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* coil_cond.Q_cell[2] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air",equationIndexes);
  threadData->lastEquationSolved = 1026;
}
/*
equation index: 1027
type: SIMPLE_ASSIGN
coil_cond.T_air[4] = (coil_cond.T_air[3] * coil_cond.cp_air * coil_cond.m_dot_air - coil_cond.Q_cell[3]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1027};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* coil_cond.T_air[4] variable */) = DIVISION_SIM((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* coil_cond.T_air[3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* coil_cond.Q_cell[3] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air",equationIndexes);
  threadData->lastEquationSolved = 1027;
}
/*
equation index: 1028
type: SIMPLE_ASSIGN
cond.Wall_int.T[3] = 0.5 * (coil_cond.T_air[3] + coil_cond.T_air[4]) - coil_cond.Q_cell[3] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1028};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* cond.Wall_int.T[3] variable */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* coil_cond.T_air[3] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* coil_cond.T_air[4] variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* coil_cond.Q_cell[3] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 1028;
}
/*
equation index: 1029
type: SIMPLE_ASSIGN
coil_cond.T_air[5] = (coil_cond.T_air[4] * coil_cond.cp_air * coil_cond.m_dot_air - coil_cond.Q_cell[4]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1029};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* coil_cond.T_air[5] variable */) = DIVISION_SIM((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* coil_cond.T_air[4] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* coil_cond.Q_cell[4] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air",equationIndexes);
  threadData->lastEquationSolved = 1029;
}
/*
equation index: 1030
type: SIMPLE_ASSIGN
cond.Wall_int.T[4] = 0.5 * (coil_cond.T_air[4] + coil_cond.T_air[5]) - coil_cond.Q_cell[4] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1030};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* cond.Wall_int.T[4] variable */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* coil_cond.T_air[4] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* coil_cond.T_air[5] variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* coil_cond.Q_cell[4] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 1030;
}
/*
equation index: 1031
type: SIMPLE_ASSIGN
T_air_off_cond_k = (coil_cond.T_air[5] * coil_cond.cp_air * coil_cond.m_dot_air - coil_cond.Q_cell[5]) / (coil_cond.m_dot_air * coil_cond.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1031};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* T_air_off_cond_k variable */) = DIVISION_SIM((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* coil_cond.T_air[5] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* coil_cond.Q_cell[5] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* coil_cond.cp_air PARAM */)),"coil_cond.m_dot_air * coil_cond.cp_air",equationIndexes);
  threadData->lastEquationSolved = 1031;
}
/*
equation index: 1032
type: SIMPLE_ASSIGN
cond.Wall_int.T[5] = 0.5 * (coil_cond.T_air[5] + T_air_off_cond_k) - coil_cond.Q_cell[5] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1032};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* cond.Wall_int.T[5] variable */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* coil_cond.T_air[5] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* T_air_off_cond_k variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* coil_cond.Q_cell[5] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 1032;
}
/*
equation index: 1033
type: SIMPLE_ASSIGN
cond.Wall_int.T[2] = 0.5 * (coil_cond.T_air[2] + coil_cond.T_air[3]) - coil_cond.Q_cell[2] / coil_cond.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1033};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* cond.Wall_int.T[2] variable */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* coil_cond.T_air[2] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* coil_cond.T_air[3] variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* coil_cond.Q_cell[2] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */),"coil_cond.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 1033;
}

void residualFunc1085(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1085};
  int i,j;
  /* iteration variables */
  for (i=0; i<5; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1085: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1085).vars[i]);
      for (j=0; j<5; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1085 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[5].h) STATE_DER */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[4].h) STATE_DER */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[3].h) STATE_DER */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[2].h) STATE_DER */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[1].h) STATE_DER */) = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_992(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_993(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_994(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_995(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_996(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_997(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_998(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_999(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1000(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1001(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1002(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1003(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1004(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1005(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1006(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1007(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1008(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1009(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1010(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1011(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1012(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1013(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1014(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1015(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1016(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1017(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1018(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1019(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1020(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1021(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1022(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1023(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1024(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1025(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1026(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1027(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1028(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1029(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1030(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1031(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1032(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1033(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cond.Cells[1].M_dot_su variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cond.Cells[1].M_dot_ex variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* cond.Cells[1].dMdt variable */);
  threadData->lastEquationSolved = 1038;
  res[1] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* cond.Cells[2].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* cond.Wall_int.T[2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[660]] /* cond.Cells[2].T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cond.Cells[2].qdot variable */);
  threadData->lastEquationSolved = 1037;
  res[2] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cond.Cells[4].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* cond.Wall_int.T[4] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[662]] /* cond.Cells[4].T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cond.Cells[4].qdot variable */);
  threadData->lastEquationSolved = 1036;
  res[3] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cond.Cells[3].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* cond.Wall_int.T[3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* cond.Cells[3].T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cond.Cells[3].qdot variable */);
  threadData->lastEquationSolved = 1035;
  res[4] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cond.Cells[5].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* cond.Wall_int.T[5] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* cond.Cells[5].T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cond.Cells[5].qdot variable */);
  threadData->lastEquationSolved = 1034;
  /* restore known outputs */
  threadData->lastEquationSolved = 1085;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1085(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,5,5,5,5};
  const int rowIndex[25] = {0,1,2,3,4,0,1,2,3,4,0,1,2,3,4,0,1,2,3,4,0,1,2,3,4};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(5, 25, 5);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (5+1)*sizeof(unsigned int));
  
  for(i=2;i<5+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 25*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {4};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {3};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 1 columns */
  const int indices_4[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 1 columns */
  const int indices_5[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
}

void freeSparsePatternNLS1085(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS1085(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 5;
  inSysData->nonlinearPattern->numberOfEqns = 5;
  inSysData->nonlinearPattern->numberOfNonlinear = 0;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((5+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((5+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(0*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(0*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+5] = {0,0,0,0,0,0};
  const int index_eqn[1+5] = {0,0,0,0,0,0};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (5+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (5+1)*sizeof(unsigned int));
  for(i=2;i<5+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<5+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[0] = {};
  const int rows[0] = {};
  memcpy(inSysData->nonlinearPattern->columns, columns, 0*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 0*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1085(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for der(cond.Cells[5].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 18 /* der(cond.Cells[5].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 18 /* der(cond.Cells[5].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 18 /* der(cond.Cells[5].h) */);
  /* static nls data for der(cond.Cells[4].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 17 /* der(cond.Cells[4].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 17 /* der(cond.Cells[4].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 17 /* der(cond.Cells[4].h) */);
  /* static nls data for der(cond.Cells[3].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 16 /* der(cond.Cells[3].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 16 /* der(cond.Cells[3].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 16 /* der(cond.Cells[3].h) */);
  /* static nls data for der(cond.Cells[2].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 15 /* der(cond.Cells[2].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 15 /* der(cond.Cells[2].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 15 /* der(cond.Cells[2].h) */);
  /* static nls data for der(cond.Cells[1].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 14 /* der(cond.Cells[1].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 14 /* der(cond.Cells[1].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 14 /* der(cond.Cells[1].h) */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1085(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1085(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1085(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1085(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1085(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[5].h) STATE_DER */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[4].h) STATE_DER */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[3].h) STATE_DER */);
  array[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[2].h) STATE_DER */);
  array[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[1].h) STATE_DER */);
}


/* inner equations */

/*
equation index: 1266
type: SIMPLE_ASSIGN
$DER.evap.Cells[5].p = (evap.Cells[1].Vi * evap.Cells[1].rho * der(evap.Cells[1].h) + evap.Cells[1].M_dot_su * (evap.Cells[1].h - cond.Cells[5].h) - evap.Cells[1].Q_tot) / evap.Cells[1].Vi
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1266};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* evap.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* evap.Cells[1].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[1].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* evap.Cells[1].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[928]] /* evap.Cells[1].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* evap.Cells[1].Vi PARAM */),"evap.Cells[1].Vi",equationIndexes);
  threadData->lastEquationSolved = 1266;
}
/*
equation index: 1267
type: SIMPLE_ASSIGN
evap.Cells[5].dMdt = evap.Cells[5].Vi * (evap.Cells[5].drdh * der(evap.Cells[5].h) + evap.Cells[5].drdp * der(evap.Cells[5].p))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[942]] /* evap.Cells[5].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* evap.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* evap.Cells[5].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* evap.Cells[5].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1267;
}
/*
equation index: 1268
type: SIMPLE_ASSIGN
evap.Cells[1].dMdt = evap.Cells[1].Vi * (evap.Cells[1].drdh * der(evap.Cells[1].h) + evap.Cells[1].drdp * der(evap.Cells[5].p))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1268};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* evap.Cells[1].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* evap.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[943]] /* evap.Cells[1].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[1].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* evap.Cells[1].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1268;
}
/*
equation index: 1269
type: SIMPLE_ASSIGN
evap.Cells[2].dMdt = evap.Cells[2].Vi * (evap.Cells[2].drdh * der(evap.Cells[2].h) + evap.Cells[2].drdp * der(evap.Cells[5].p))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[939]] /* evap.Cells[2].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* evap.Cells[2].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[2].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* evap.Cells[2].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1269;
}
/*
equation index: 1270
type: SIMPLE_ASSIGN
evap.Cells[3].dMdt = evap.Cells[3].Vi * (evap.Cells[3].drdh * der(evap.Cells[3].h) + evap.Cells[3].drdp * der(evap.Cells[5].p))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[940]] /* evap.Cells[3].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[945]] /* evap.Cells[3].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[3].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[950]] /* evap.Cells[3].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1270;
}
/*
equation index: 1271
type: SIMPLE_ASSIGN
evap.Cells[4].dMdt = evap.Cells[4].Vi * (evap.Cells[4].drdh * der(evap.Cells[4].h) + evap.Cells[4].drdp * der(evap.Cells[5].p))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1271};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[941]] /* evap.Cells[4].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[946]] /* evap.Cells[4].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[4].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[951]] /* evap.Cells[4].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1271;
}
/*
equation index: 1272
type: SIMPLE_ASSIGN
evap.Cells[1].M_dot_ex = evap.Cells[1].M_dot_su - evap.Cells[1].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1272};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[913]] /* evap.Cells[1].M_dot_ex variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* evap.Cells[1].M_dot_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* evap.Cells[1].dMdt variable */);
  threadData->lastEquationSolved = 1272;
}
/*
equation index: 1273
type: SIMPLE_ASSIGN
evap.Cells[2].InFlow.m_flow = evap.Cells[1].M_dot_ex * (*Real*)(evap.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* evap.Cells[2].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[913]] /* evap.Cells[1].M_dot_ex variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[1].Nt PARAM */)));
  threadData->lastEquationSolved = 1273;
}
/*
equation index: 1274
type: SIMPLE_ASSIGN
evap.Cells[2].M_dot_su = evap.Cells[2].InFlow.m_flow / (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1274};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* evap.Cells[2].M_dot_su variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* evap.Cells[2].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* evap.Cells[2].Nt PARAM */)),"/*Real*/(evap.Cells[2].Nt)",equationIndexes);
  threadData->lastEquationSolved = 1274;
}
/*
equation index: 1275
type: SIMPLE_ASSIGN
evap.Cells[2].Q_tot = evap.Cells[2].Vi * evap.Cells[2].rho * der(evap.Cells[2].h) + evap.Cells[2].M_dot_su * (evap.Cells[2].h - evap.Cells[1].h) - evap.Cells[2].Vi * der(evap.Cells[5].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[929]] /* evap.Cells[2].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* evap.Cells[2].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[2].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* evap.Cells[2].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Cells[2].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1275;
}
/*
equation index: 1276
type: SIMPLE_ASSIGN
evap.Cells[2].heatTransfer.U[1] = evap.Cells[2].heatTransfer.Unom * (1e-5 + (1e-6 + (evap.Cells[2].M_dot_su / evap.Cells[2].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1276};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* evap.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* evap.Cells[2].heatTransfer.Mdotnom variable */),"evap.Cells[2].heatTransfer.Mdotnom",equationIndexes);
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = 0.4;
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
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* evap.Cells[2].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* evap.Cells[2].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 1276;
}
/*
equation index: 1277
type: SIMPLE_ASSIGN
evap.Cells[2].qdot = evap.Cells[2].Q_tot / evap.Cells[2].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1277};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* evap.Cells[2].qdot variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[929]] /* evap.Cells[2].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* evap.Cells[2].Ai PARAM */),"evap.Cells[2].Ai",equationIndexes);
  threadData->lastEquationSolved = 1277;
}
/*
equation index: 1278
type: SIMPLE_ASSIGN
evap.Cells[2].M_dot_ex = evap.Cells[2].M_dot_su - evap.Cells[2].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[914]] /* evap.Cells[2].M_dot_ex variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* evap.Cells[2].M_dot_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[939]] /* evap.Cells[2].dMdt variable */);
  threadData->lastEquationSolved = 1278;
}
/*
equation index: 1279
type: SIMPLE_ASSIGN
evap.Cells[3].InFlow.m_flow = evap.Cells[2].M_dot_ex * (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* evap.Cells[3].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[914]] /* evap.Cells[2].M_dot_ex variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* evap.Cells[2].Nt PARAM */)));
  threadData->lastEquationSolved = 1279;
}
/*
equation index: 1280
type: SIMPLE_ASSIGN
evap.Cells[3].M_dot_su = evap.Cells[3].InFlow.m_flow / (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1280};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* evap.Cells[3].M_dot_su variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* evap.Cells[3].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* evap.Cells[3].Nt PARAM */)),"/*Real*/(evap.Cells[3].Nt)",equationIndexes);
  threadData->lastEquationSolved = 1280;
}
/*
equation index: 1281
type: SIMPLE_ASSIGN
evap.Cells[3].Q_tot = evap.Cells[3].Vi * evap.Cells[3].rho * der(evap.Cells[3].h) + evap.Cells[3].M_dot_su * (evap.Cells[3].h - evap.Cells[2].h) - evap.Cells[3].Vi * der(evap.Cells[5].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* evap.Cells[3].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* evap.Cells[3].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[3].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* evap.Cells[3].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Cells[3].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1281;
}
/*
equation index: 1282
type: SIMPLE_ASSIGN
evap.Cells[3].heatTransfer.U[1] = evap.Cells[3].heatTransfer.Unom * (1e-5 + (1e-6 + (evap.Cells[3].M_dot_su / evap.Cells[3].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1282};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* evap.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* evap.Cells[3].heatTransfer.Mdotnom variable */),"evap.Cells[3].heatTransfer.Mdotnom",equationIndexes);
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = 0.4;
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
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* evap.Cells[3].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* evap.Cells[3].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 1282;
}
/*
equation index: 1283
type: SIMPLE_ASSIGN
evap.Cells[3].qdot = evap.Cells[3].Q_tot / evap.Cells[3].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* evap.Cells[3].qdot variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* evap.Cells[3].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* evap.Cells[3].Ai PARAM */),"evap.Cells[3].Ai",equationIndexes);
  threadData->lastEquationSolved = 1283;
}
/*
equation index: 1284
type: SIMPLE_ASSIGN
evap.Cells[3].M_dot_ex = evap.Cells[3].M_dot_su - evap.Cells[3].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1284};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[915]] /* evap.Cells[3].M_dot_ex variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* evap.Cells[3].M_dot_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[940]] /* evap.Cells[3].dMdt variable */);
  threadData->lastEquationSolved = 1284;
}
/*
equation index: 1285
type: SIMPLE_ASSIGN
evap.Cells[4].InFlow.m_flow = evap.Cells[3].M_dot_ex * (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[911]] /* evap.Cells[4].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[915]] /* evap.Cells[3].M_dot_ex variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* evap.Cells[3].Nt PARAM */)));
  threadData->lastEquationSolved = 1285;
}
/*
equation index: 1286
type: SIMPLE_ASSIGN
evap.Cells[4].M_dot_su = evap.Cells[4].InFlow.m_flow / (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1286};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* evap.Cells[4].M_dot_su variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[911]] /* evap.Cells[4].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* evap.Cells[4].Nt PARAM */)),"/*Real*/(evap.Cells[4].Nt)",equationIndexes);
  threadData->lastEquationSolved = 1286;
}
/*
equation index: 1287
type: SIMPLE_ASSIGN
evap.Cells[4].Q_tot = evap.Cells[4].Vi * evap.Cells[4].rho * der(evap.Cells[4].h) + evap.Cells[4].M_dot_su * (evap.Cells[4].h - evap.Cells[3].h) - evap.Cells[4].Vi * der(evap.Cells[5].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[931]] /* evap.Cells[4].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* evap.Cells[4].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[4].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* evap.Cells[4].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Cells[4].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1287;
}
/*
equation index: 1288
type: SIMPLE_ASSIGN
evap.Cells[4].heatTransfer.U[1] = evap.Cells[4].heatTransfer.Unom * (1e-5 + (1e-6 + (evap.Cells[4].M_dot_su / evap.Cells[4].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1288};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* evap.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* evap.Cells[4].heatTransfer.Mdotnom variable */),"evap.Cells[4].heatTransfer.Mdotnom",equationIndexes);
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = 0.4;
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
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* evap.Cells[4].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* evap.Cells[4].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 1288;
}
/*
equation index: 1289
type: SIMPLE_ASSIGN
evap.Cells[4].qdot = evap.Cells[4].Q_tot / evap.Cells[4].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* evap.Cells[4].qdot variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[931]] /* evap.Cells[4].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[107]] /* evap.Cells[4].Ai PARAM */),"evap.Cells[4].Ai",equationIndexes);
  threadData->lastEquationSolved = 1289;
}
/*
equation index: 1290
type: SIMPLE_ASSIGN
evap.Cells[4].M_dot_ex = evap.Cells[4].M_dot_su - evap.Cells[4].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[916]] /* evap.Cells[4].M_dot_ex variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* evap.Cells[4].M_dot_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[941]] /* evap.Cells[4].dMdt variable */);
  threadData->lastEquationSolved = 1290;
}
/*
equation index: 1291
type: SIMPLE_ASSIGN
evap.Cells[5].InFlow.m_flow = evap.Cells[4].M_dot_ex * (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* evap.Cells[5].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[916]] /* evap.Cells[4].M_dot_ex variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* evap.Cells[4].Nt PARAM */)));
  threadData->lastEquationSolved = 1291;
}
/*
equation index: 1292
type: SIMPLE_ASSIGN
evap.Cells[5].M_dot_su = evap.Cells[5].InFlow.m_flow / (*Real*)(evap.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1292};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* evap.Cells[5].M_dot_su variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* evap.Cells[5].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[35]] /* evap.Cells[5].Nt PARAM */)),"/*Real*/(evap.Cells[5].Nt)",equationIndexes);
  threadData->lastEquationSolved = 1292;
}
/*
equation index: 1293
type: SIMPLE_ASSIGN
evap.Cells[5].Q_tot = evap.Cells[5].Vi * evap.Cells[5].rho * der(evap.Cells[5].h) + evap.Cells[5].M_dot_su * (evap.Cells[5].h - evap.Cells[4].h) - evap.Cells[5].Vi * der(evap.Cells[5].p)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* evap.Cells[5].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* evap.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* evap.Cells[5].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* evap.Cells[5].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* evap.Cells[5].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1293;
}
/*
equation index: 1294
type: SIMPLE_ASSIGN
evap.Cells[5].heatTransfer.U[1] = evap.Cells[5].heatTransfer.Unom * (1e-5 + (1e-6 + (evap.Cells[5].M_dot_su / evap.Cells[5].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1294};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* evap.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* evap.Cells[5].heatTransfer.Mdotnom variable */),"evap.Cells[5].heatTransfer.Mdotnom",equationIndexes);
  tmp1 = 1e-6 + (tmp0 * tmp0);
  tmp2 = 0.4;
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
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* evap.Cells[5].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* evap.Cells[5].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 1294;
}
/*
equation index: 1295
type: SIMPLE_ASSIGN
evap.Cells[5].qdot = evap.Cells[5].Q_tot / evap.Cells[5].Ai
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* evap.Cells[5].qdot variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* evap.Cells[5].Q_tot variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* evap.Cells[5].Ai PARAM */),"evap.Cells[5].Ai",equationIndexes);
  threadData->lastEquationSolved = 1295;
}
/*
equation index: 1296
type: SIMPLE_ASSIGN
coil_evap.Q_cell[2] = evap.Cells[2].qdot * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1296};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* coil_evap.Q_cell[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* evap.Cells[2].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 1296;
}
/*
equation index: 1297
type: SIMPLE_ASSIGN
coil_evap.T_air[3] = (coil_evap.T_air[2] * coil_evap.cp_air * coil_evap.m_dot_air - coil_evap.Q_cell[2]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* coil_evap.T_air[3] variable */) = DIVISION_SIM((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[620]] /* coil_evap.T_air[2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* coil_evap.Q_cell[2] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air",equationIndexes);
  threadData->lastEquationSolved = 1297;
}
/*
equation index: 1298
type: SIMPLE_ASSIGN
evap.Wall_int.T[2] = 0.5 * (coil_evap.T_air[2] + coil_evap.T_air[3]) - coil_evap.Q_cell[2] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* evap.Wall_int.T[2] variable */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[620]] /* coil_evap.T_air[2] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* coil_evap.T_air[3] variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* coil_evap.Q_cell[2] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 1298;
}
/*
equation index: 1299
type: SIMPLE_ASSIGN
coil_evap.Q_cell[3] = evap.Cells[3].qdot * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* coil_evap.Q_cell[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* evap.Cells[3].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 1299;
}
/*
equation index: 1300
type: SIMPLE_ASSIGN
coil_evap.T_air[4] = (coil_evap.T_air[3] * coil_evap.cp_air * coil_evap.m_dot_air - coil_evap.Q_cell[3]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* coil_evap.T_air[4] variable */) = DIVISION_SIM((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* coil_evap.T_air[3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* coil_evap.Q_cell[3] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air",equationIndexes);
  threadData->lastEquationSolved = 1300;
}
/*
equation index: 1301
type: SIMPLE_ASSIGN
evap.Wall_int.T[3] = 0.5 * (coil_evap.T_air[3] + coil_evap.T_air[4]) - coil_evap.Q_cell[3] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* evap.Wall_int.T[3] variable */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* coil_evap.T_air[3] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* coil_evap.T_air[4] variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* coil_evap.Q_cell[3] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 1301;
}
/*
equation index: 1302
type: SIMPLE_ASSIGN
coil_evap.Q_cell[4] = evap.Cells[4].qdot * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[618]] /* coil_evap.Q_cell[4] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* evap.Cells[4].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 1302;
}
/*
equation index: 1303
type: SIMPLE_ASSIGN
coil_evap.T_air[5] = (coil_evap.T_air[4] * coil_evap.cp_air * coil_evap.m_dot_air - coil_evap.Q_cell[4]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* coil_evap.T_air[5] variable */) = DIVISION_SIM((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* coil_evap.T_air[4] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[618]] /* coil_evap.Q_cell[4] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air",equationIndexes);
  threadData->lastEquationSolved = 1303;
}
/*
equation index: 1304
type: SIMPLE_ASSIGN
evap.Wall_int.T[4] = 0.5 * (coil_evap.T_air[4] + coil_evap.T_air[5]) - coil_evap.Q_cell[4] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* evap.Wall_int.T[4] variable */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* coil_evap.T_air[4] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* coil_evap.T_air[5] variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[618]] /* coil_evap.Q_cell[4] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 1304;
}
/*
equation index: 1305
type: SIMPLE_ASSIGN
coil_evap.Q_cell[5] = evap.Cells[5].qdot * coil_evap.A_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[619]] /* coil_evap.Q_cell[5] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* evap.Cells[5].qdot variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */));
  threadData->lastEquationSolved = 1305;
}
/*
equation index: 1306
type: SIMPLE_ASSIGN
T_air_off_evap_k = (coil_evap.T_air[5] * coil_evap.cp_air * coil_evap.m_dot_air - coil_evap.Q_cell[5]) / (coil_evap.m_dot_air * coil_evap.cp_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* T_air_off_evap_k variable */) = DIVISION_SIM((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* coil_evap.T_air[5] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[619]] /* coil_evap.Q_cell[5] variable */),((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* coil_evap.cp_air PARAM */)),"coil_evap.m_dot_air * coil_evap.cp_air",equationIndexes);
  threadData->lastEquationSolved = 1306;
}
/*
equation index: 1307
type: SIMPLE_ASSIGN
evap.Wall_int.T[5] = 0.5 * (coil_evap.T_air[5] + T_air_off_evap_k) - coil_evap.Q_cell[5] / coil_evap.UA_cell
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* evap.Wall_int.T[5] variable */) = (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* coil_evap.T_air[5] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* T_air_off_evap_k variable */)) - (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[619]] /* coil_evap.Q_cell[5] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */),"coil_evap.UA_cell",equationIndexes));
  threadData->lastEquationSolved = 1307;
}

void residualFunc1359(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1359};
  int i,j;
  /* iteration variables */
  for (i=0; i<5; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1359: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1359).vars[i]);
      for (j=0; j<5; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1359 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].h) STATE_DER */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[1].h) STATE_DER */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[2].h) STATE_DER */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[3].h) STATE_DER */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[4].h) STATE_DER */) = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1266(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1267(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1268(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1269(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1270(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1271(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1272(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1273(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1274(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1275(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1276(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1277(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1278(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1279(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1280(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1281(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1282(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1283(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1284(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1285(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1286(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1287(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1288(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1289(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1290(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1291(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1292(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1293(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1294(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1295(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1296(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1297(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1298(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1299(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1300(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1301(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1302(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1303(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1304(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1305(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1306(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1307(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* evap.Cells[5].M_dot_su variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* evap.Cells[5].M_dot_ex variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[942]] /* evap.Cells[5].dMdt variable */);
  threadData->lastEquationSolved = 1312;
  res[1] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* evap.Cells[5].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* evap.Wall_int.T[5] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[937]] /* evap.Cells[5].T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* evap.Cells[5].qdot variable */);
  threadData->lastEquationSolved = 1311;
  res[2] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* evap.Cells[4].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* evap.Wall_int.T[4] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[936]] /* evap.Cells[4].T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* evap.Cells[4].qdot variable */);
  threadData->lastEquationSolved = 1310;
  res[3] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* evap.Cells[3].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* evap.Wall_int.T[3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* evap.Cells[3].T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* evap.Cells[3].qdot variable */);
  threadData->lastEquationSolved = 1309;
  res[4] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* evap.Cells[2].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* evap.Wall_int.T[2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* evap.Cells[2].T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* evap.Cells[2].qdot variable */);
  threadData->lastEquationSolved = 1308;
  /* restore known outputs */
  threadData->lastEquationSolved = 1359;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1359(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,5,5,4,3};
  const int rowIndex[19] = {0,1,0,1,2,3,4,0,1,2,3,4,0,1,2,3,0,1,2};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(5, 19, 5);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (5+1)*sizeof(unsigned int));
  
  for(i=2;i<5+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 19*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {4};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {3};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 1 columns */
  const int indices_4[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 1 columns */
  const int indices_5[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
}

void freeSparsePatternNLS1359(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS1359(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 5;
  inSysData->nonlinearPattern->numberOfEqns = 5;
  inSysData->nonlinearPattern->numberOfNonlinear = 0;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((5+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((5+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(0*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(0*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+5] = {0,0,0,0,0,0};
  const int index_eqn[1+5] = {0,0,0,0,0,0};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (5+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (5+1)*sizeof(unsigned int));
  for(i=2;i<5+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<5+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[0] = {};
  const int rows[0] = {};
  memcpy(inSysData->nonlinearPattern->columns, columns, 0*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 0*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1359(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for der(evap.Cells[5].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 25 /* der(evap.Cells[5].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 25 /* der(evap.Cells[5].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 25 /* der(evap.Cells[5].h) */);
  /* static nls data for der(evap.Cells[1].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 21 /* der(evap.Cells[1].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 21 /* der(evap.Cells[1].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 21 /* der(evap.Cells[1].h) */);
  /* static nls data for der(evap.Cells[2].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 22 /* der(evap.Cells[2].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 22 /* der(evap.Cells[2].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 22 /* der(evap.Cells[2].h) */);
  /* static nls data for der(evap.Cells[3].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 23 /* der(evap.Cells[3].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 23 /* der(evap.Cells[3].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 23 /* der(evap.Cells[3].h) */);
  /* static nls data for der(evap.Cells[4].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 24 /* der(evap.Cells[4].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 24 /* der(evap.Cells[4].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 24 /* der(evap.Cells[4].h) */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1359(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1359(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1359(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1359(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1359(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].h) STATE_DER */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[1].h) STATE_DER */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[2].h) STATE_DER */);
  array[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[3].h) STATE_DER */);
  array[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[4].h) STATE_DER */);
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void RefrigerationTrainer_ClosedLoopM1eCS_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[5].equationIndex = 1359;
  nonLinearSystemData[5].size = 5;
  nonLinearSystemData[5].homotopySupport = 0 /* false */;
  nonLinearSystemData[5].mixedSystem = 0 /* false */;
  nonLinearSystemData[5].residualFunc = residualFunc1359;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac9_column;
  nonLinearSystemData[5].initialAnalyticalJacobian = RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianNLSJac9;
  nonLinearSystemData[5].jacobianIndex = 7 /*jacInx*/;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS1359;
  nonLinearSystemData[5].freeStaticNLSData = freeStaticDataNLS1359;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS1359;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  const int tmp_eqn_indices_5[47] = {1266, 1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277, 1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294, 1295, 1296, 1297, 1298, 1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1312, 1311, 1310, 1309, 1308};
  nonLinearSystemData[5].eqn_simcode_indices = malloc(47 * sizeof(int));
  memcpy(nonLinearSystemData[5].eqn_simcode_indices, tmp_eqn_indices_5, 47 * sizeof(int));
  nonLinearSystemData[5].torn_plus_residual_size = 47;
  
  
  nonLinearSystemData[4].equationIndex = 1085;
  nonLinearSystemData[4].size = 5;
  nonLinearSystemData[4].homotopySupport = 0 /* false */;
  nonLinearSystemData[4].mixedSystem = 0 /* false */;
  nonLinearSystemData[4].residualFunc = residualFunc1085;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac7_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianNLSJac7;
  nonLinearSystemData[4].jacobianIndex = 5 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS1085;
  nonLinearSystemData[4].freeStaticNLSData = freeStaticDataNLS1085;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS1085;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  const int tmp_eqn_indices_4[47] = {992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1038, 1037, 1036, 1035, 1034};
  nonLinearSystemData[4].eqn_simcode_indices = malloc(47 * sizeof(int));
  memcpy(nonLinearSystemData[4].eqn_simcode_indices, tmp_eqn_indices_4, 47 * sizeof(int));
  nonLinearSystemData[4].torn_plus_residual_size = 47;
  
  
  nonLinearSystemData[3].equationIndex = 797;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0 /* false */;
  nonLinearSystemData[3].mixedSystem = 1 /* true */;
  nonLinearSystemData[3].residualFunc = residualFunc797;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS797;
  nonLinearSystemData[3].freeStaticNLSData = freeStaticDataNLS797;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS797;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  const int tmp_eqn_indices_3[6] = {791, 792, 793, 794, 795, 796};
  nonLinearSystemData[3].eqn_simcode_indices = malloc(6 * sizeof(int));
  memcpy(nonLinearSystemData[3].eqn_simcode_indices, tmp_eqn_indices_3, 6 * sizeof(int));
  nonLinearSystemData[3].torn_plus_residual_size = 6;
  
  
  nonLinearSystemData[2].equationIndex = 782;
  nonLinearSystemData[2].size = 5;
  nonLinearSystemData[2].homotopySupport = 0 /* false */;
  nonLinearSystemData[2].mixedSystem = 0 /* false */;
  nonLinearSystemData[2].residualFunc = residualFunc782;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac4_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[2].jacobianIndex = 3 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS782;
  nonLinearSystemData[2].freeStaticNLSData = freeStaticDataNLS782;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS782;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  const int tmp_eqn_indices_2[47] = {689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 735, 734, 733, 732, 731};
  nonLinearSystemData[2].eqn_simcode_indices = malloc(47 * sizeof(int));
  memcpy(nonLinearSystemData[2].eqn_simcode_indices, tmp_eqn_indices_2, 47 * sizeof(int));
  nonLinearSystemData[2].torn_plus_residual_size = 47;
  
  
  nonLinearSystemData[1].equationIndex = 685;
  nonLinearSystemData[1].size = 5;
  nonLinearSystemData[1].homotopySupport = 0 /* false */;
  nonLinearSystemData[1].mixedSystem = 0 /* false */;
  nonLinearSystemData[1].residualFunc = residualFunc685;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac3_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianNLSJac3;
  nonLinearSystemData[1].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS685;
  nonLinearSystemData[1].freeStaticNLSData = freeStaticDataNLS685;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS685;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  const int tmp_eqn_indices_1[47] = {592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 638, 637, 636, 635, 634};
  nonLinearSystemData[1].eqn_simcode_indices = malloc(47 * sizeof(int));
  memcpy(nonLinearSystemData[1].eqn_simcode_indices, tmp_eqn_indices_1, 47 * sizeof(int));
  nonLinearSystemData[1].torn_plus_residual_size = 47;
  
  
  nonLinearSystemData[0].equationIndex = 526;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0 /* false */;
  nonLinearSystemData[0].mixedSystem = 1 /* true */;
  nonLinearSystemData[0].residualFunc = residualFunc526;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS526;
  nonLinearSystemData[0].freeStaticNLSData = freeStaticDataNLS526;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS526;
  nonLinearSystemData[0].checkConstraints = NULL;
  
  const int tmp_eqn_indices_0[6] = {520, 521, 522, 523, 524, 525};
  nonLinearSystemData[0].eqn_simcode_indices = malloc(6 * sizeof(int));
  memcpy(nonLinearSystemData[0].eqn_simcode_indices, tmp_eqn_indices_0, 6 * sizeof(int));
  nonLinearSystemData[0].torn_plus_residual_size = 6;
}

#if defined(__cplusplus)
}
#endif
