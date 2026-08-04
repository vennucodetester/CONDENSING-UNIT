/* Non Linear Systems */
#include "MinRepro_model.h"
#include "MinRepro_12jac.h"
#include "simulation/jacobian_util.h"
#include "simulation/arrayIndex.h"

#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 1
type: SIMPLE_ASSIGN
st.s = -2200.0 - (-0.01) * h
*/
void MinRepro_eqFunction_1(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* st.s variable */) = -2200.0 - ((-0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* h variable */)));
  threadData->lastEquationSolved = 1;
}
/*
equation index: 2
type: SIMPLE_ASSIGN
st.d = -474.0 - (-0.001) * p
*/
void MinRepro_eqFunction_2(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* st.d variable */) = -474.0 - ((-0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* p variable */)));
  threadData->lastEquationSolved = 2;
}
/*
equation index: 18
type: ALGORITHM

  $TMP_MinRepro_Med_ThermodynamicState3 := MinRepro.Med.setState_ph(p, h, 0);
*/
void MinRepro_eqFunction_18(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18};
  MinRepro_Med_ThermodynamicState tmp0;
  tmp0 = omc_MinRepro_Med_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* h variable */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* $TMP_MinRepro_Med_ThermodynamicState3.T variable */) = tmp0._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* $TMP_MinRepro_Med_ThermodynamicState3.a variable */) = tmp0._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* $TMP_MinRepro_Med_ThermodynamicState3.beta variable */) = tmp0._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* $TMP_MinRepro_Med_ThermodynamicState3.cp variable */) = tmp0._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* $TMP_MinRepro_Med_ThermodynamicState3.cv variable */) = tmp0._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* $TMP_MinRepro_Med_ThermodynamicState3.d variable */) = tmp0._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* $TMP_MinRepro_Med_ThermodynamicState3.ddhp variable */) = tmp0._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* $TMP_MinRepro_Med_ThermodynamicState3.ddph variable */) = tmp0._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* $TMP_MinRepro_Med_ThermodynamicState3.eta variable */) = tmp0._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* $TMP_MinRepro_Med_ThermodynamicState3.h variable */) = tmp0._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* $TMP_MinRepro_Med_ThermodynamicState3.kappa variable */) = tmp0._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* $TMP_MinRepro_Med_ThermodynamicState3.lambda variable */) = tmp0._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* $TMP_MinRepro_Med_ThermodynamicState3.p variable */) = tmp0._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[1]] /* $TMP_MinRepro_Med_ThermodynamicState3.phase variable */) = tmp0._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* $TMP_MinRepro_Med_ThermodynamicState3.s variable */) = tmp0._s;
  ;
  threadData->lastEquationSolved = 18;
}

void residualFunc19(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,19};
  int i,j;
  /* iteration variables */
  for (i=0; i<15; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc19: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 19).vars[i]);
      for (j=0; j<15; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc19 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* st.phase DISCRETE */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* st.ddph variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* st.T variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* st.eta variable */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* st.cv variable */) = xloc[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* st.p variable */) = xloc[5];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* st.h variable */) = xloc[6];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* st.kappa variable */) = xloc[7];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* st.beta variable */) = xloc[8];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* st.ddhp variable */) = xloc[9];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* st.a variable */) = xloc[10];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* st.cp variable */) = xloc[11];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* st.lambda variable */) = xloc[12];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* p variable */) = xloc[13];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* h variable */) = xloc[14];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MinRepro_eqFunction_1(data, threadData);
  /* local constraints */
  MinRepro_eqFunction_2(data, threadData);
  /* local constraints */
  MinRepro_eqFunction_18(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* $TMP_MinRepro_Med_ThermodynamicState3.T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* st.T variable */);
  threadData->lastEquationSolved = 3;
  res[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* $TMP_MinRepro_Med_ThermodynamicState3.a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* st.a variable */);
  threadData->lastEquationSolved = 4;
  res[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* $TMP_MinRepro_Med_ThermodynamicState3.beta variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* st.beta variable */);
  threadData->lastEquationSolved = 5;
  res[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* $TMP_MinRepro_Med_ThermodynamicState3.cp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* st.cp variable */);
  threadData->lastEquationSolved = 6;
  res[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* $TMP_MinRepro_Med_ThermodynamicState3.cv variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* st.cv variable */);
  threadData->lastEquationSolved = 7;
  res[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* $TMP_MinRepro_Med_ThermodynamicState3.d variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* st.d variable */);
  threadData->lastEquationSolved = 8;
  res[6] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* $TMP_MinRepro_Med_ThermodynamicState3.ddhp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* st.ddhp variable */);
  threadData->lastEquationSolved = 9;
  res[7] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* $TMP_MinRepro_Med_ThermodynamicState3.ddph variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* st.ddph variable */);
  threadData->lastEquationSolved = 10;
  res[8] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* $TMP_MinRepro_Med_ThermodynamicState3.eta variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* st.eta variable */);
  threadData->lastEquationSolved = 11;
  res[9] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* $TMP_MinRepro_Med_ThermodynamicState3.h variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* st.h variable */);
  threadData->lastEquationSolved = 12;
  res[10] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* $TMP_MinRepro_Med_ThermodynamicState3.kappa variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* st.kappa variable */);
  threadData->lastEquationSolved = 13;
  res[11] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* $TMP_MinRepro_Med_ThermodynamicState3.lambda variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* st.lambda variable */);
  threadData->lastEquationSolved = 14;
  res[12] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* $TMP_MinRepro_Med_ThermodynamicState3.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* st.p variable */);
  threadData->lastEquationSolved = 15;
  res[13] = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[1]] /* $TMP_MinRepro_Med_ThermodynamicState3.phase variable */) - (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* st.phase DISCRETE */);
  threadData->lastEquationSolved = 16;
  res[14] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* $TMP_MinRepro_Med_ThermodynamicState3.s variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* st.s variable */);
  threadData->lastEquationSolved = 17;
  /* restore known outputs */
  threadData->lastEquationSolved = 19;
}
void initializeSparsePatternNLS19(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS19(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS19(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS19(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for st.phase */
  sysData->nominal[i] = data->modelData->integerVarsData[2] /* st.phase */ .attribute.nominal;
  sysData->min[i]     = data->modelData->integerVarsData[2] /* st.phase */ .attribute.min;
  sysData->max[i++]   = data->modelData->integerVarsData[2] /* st.phase */ .attribute.max;
  /* static nls data for st.ddph */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 37 /* st.ddph */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 37 /* st.ddph */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 37 /* st.ddph */);
  /* static nls data for st.T */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 30 /* st.T */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 30 /* st.T */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 30 /* st.T */);
  /* static nls data for st.eta */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 38 /* st.eta */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 38 /* st.eta */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 38 /* st.eta */);
  /* static nls data for st.cv */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 34 /* st.cv */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 34 /* st.cv */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 34 /* st.cv */);
  /* static nls data for st.p */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 42 /* st.p */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 42 /* st.p */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 42 /* st.p */);
  /* static nls data for st.h */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 39 /* st.h */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 39 /* st.h */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 39 /* st.h */);
  /* static nls data for st.kappa */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 40 /* st.kappa */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 40 /* st.kappa */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 40 /* st.kappa */);
  /* static nls data for st.beta */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 32 /* st.beta */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 32 /* st.beta */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 32 /* st.beta */);
  /* static nls data for st.ddhp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 36 /* st.ddhp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 36 /* st.ddhp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 36 /* st.ddhp */);
  /* static nls data for st.a */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 31 /* st.a */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 31 /* st.a */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 31 /* st.a */);
  /* static nls data for st.cp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 33 /* st.cp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 33 /* st.cp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 33 /* st.cp */);
  /* static nls data for st.lambda */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 41 /* st.lambda */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 41 /* st.lambda */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 41 /* st.lambda */);
  /* static nls data for p */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 29 /* p */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 29 /* p */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 29 /* p */);
  /* static nls data for h */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 28 /* h */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 28 /* h */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 28 /* h */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS19(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS19(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS19(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS19(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS19(DATA* data, double *array)
{
  array[0] = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* st.phase DISCRETE */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* st.ddph variable */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* st.T variable */);
  array[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* st.eta variable */);
  array[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* st.cv variable */);
  array[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* st.p variable */);
  array[6] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* st.h variable */);
  array[7] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* st.kappa variable */);
  array[8] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* st.beta variable */);
  array[9] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* st.ddhp variable */);
  array[10] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* st.a variable */);
  array[11] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* st.cp variable */);
  array[12] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* st.lambda variable */);
  array[13] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* p variable */);
  array[14] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* h variable */);
}


/* inner equations */

/*
equation index: 20
type: SIMPLE_ASSIGN
st.s = -2200.0 - (-0.01) * h
*/
void MinRepro_eqFunction_20(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,20};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* st.s variable */) = -2200.0 - ((-0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* h variable */)));
  threadData->lastEquationSolved = 20;
}
/*
equation index: 21
type: SIMPLE_ASSIGN
st.d = -474.0 - (-0.001) * p
*/
void MinRepro_eqFunction_21(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,21};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* st.d variable */) = -474.0 - ((-0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* p variable */)));
  threadData->lastEquationSolved = 21;
}
/*
equation index: 37
type: ALGORITHM

  $TMP_MinRepro_Med_ThermodynamicState22 := MinRepro.Med.setState_ph(p, h, 0);
*/
void MinRepro_eqFunction_37(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,37};
  MinRepro_Med_ThermodynamicState tmp0;
  tmp0 = omc_MinRepro_Med_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* h variable */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* $TMP_MinRepro_Med_ThermodynamicState22.T variable */) = tmp0._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* $TMP_MinRepro_Med_ThermodynamicState22.a variable */) = tmp0._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* $TMP_MinRepro_Med_ThermodynamicState22.beta variable */) = tmp0._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* $TMP_MinRepro_Med_ThermodynamicState22.cp variable */) = tmp0._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* $TMP_MinRepro_Med_ThermodynamicState22.cv variable */) = tmp0._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* $TMP_MinRepro_Med_ThermodynamicState22.d variable */) = tmp0._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* $TMP_MinRepro_Med_ThermodynamicState22.ddhp variable */) = tmp0._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* $TMP_MinRepro_Med_ThermodynamicState22.ddph variable */) = tmp0._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* $TMP_MinRepro_Med_ThermodynamicState22.eta variable */) = tmp0._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* $TMP_MinRepro_Med_ThermodynamicState22.h variable */) = tmp0._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* $TMP_MinRepro_Med_ThermodynamicState22.kappa variable */) = tmp0._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* $TMP_MinRepro_Med_ThermodynamicState22.lambda variable */) = tmp0._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* $TMP_MinRepro_Med_ThermodynamicState22.p variable */) = tmp0._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* $TMP_MinRepro_Med_ThermodynamicState22.phase variable */) = tmp0._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* $TMP_MinRepro_Med_ThermodynamicState22.s variable */) = tmp0._s;
  ;
  threadData->lastEquationSolved = 37;
}

void residualFunc38(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,38};
  int i,j;
  /* iteration variables */
  for (i=0; i<15; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc38: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 38).vars[i]);
      for (j=0; j<15; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc38 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* st.phase DISCRETE */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* st.a variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* st.T variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* st.lambda variable */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* st.eta variable */) = xloc[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* st.cv variable */) = xloc[5];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* st.kappa variable */) = xloc[6];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* st.cp variable */) = xloc[7];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* st.beta variable */) = xloc[8];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* st.ddph variable */) = xloc[9];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* st.ddhp variable */) = xloc[10];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* st.h variable */) = xloc[11];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* st.p variable */) = xloc[12];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* p variable */) = xloc[13];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* h variable */) = xloc[14];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MinRepro_eqFunction_20(data, threadData);
  /* local constraints */
  MinRepro_eqFunction_21(data, threadData);
  /* local constraints */
  MinRepro_eqFunction_37(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* $TMP_MinRepro_Med_ThermodynamicState22.T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* st.T variable */);
  threadData->lastEquationSolved = 22;
  res[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* $TMP_MinRepro_Med_ThermodynamicState22.a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* st.a variable */);
  threadData->lastEquationSolved = 23;
  res[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* $TMP_MinRepro_Med_ThermodynamicState22.beta variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* st.beta variable */);
  threadData->lastEquationSolved = 24;
  res[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* $TMP_MinRepro_Med_ThermodynamicState22.cp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* st.cp variable */);
  threadData->lastEquationSolved = 25;
  res[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* $TMP_MinRepro_Med_ThermodynamicState22.cv variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* st.cv variable */);
  threadData->lastEquationSolved = 26;
  res[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* $TMP_MinRepro_Med_ThermodynamicState22.d variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* st.d variable */);
  threadData->lastEquationSolved = 27;
  res[6] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* $TMP_MinRepro_Med_ThermodynamicState22.ddhp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* st.ddhp variable */);
  threadData->lastEquationSolved = 28;
  res[7] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* $TMP_MinRepro_Med_ThermodynamicState22.ddph variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* st.ddph variable */);
  threadData->lastEquationSolved = 29;
  res[8] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* $TMP_MinRepro_Med_ThermodynamicState22.eta variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* st.eta variable */);
  threadData->lastEquationSolved = 30;
  res[9] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* $TMP_MinRepro_Med_ThermodynamicState22.h variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* st.h variable */);
  threadData->lastEquationSolved = 31;
  res[10] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* $TMP_MinRepro_Med_ThermodynamicState22.kappa variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* st.kappa variable */);
  threadData->lastEquationSolved = 32;
  res[11] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* $TMP_MinRepro_Med_ThermodynamicState22.lambda variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* st.lambda variable */);
  threadData->lastEquationSolved = 33;
  res[12] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* $TMP_MinRepro_Med_ThermodynamicState22.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* st.p variable */);
  threadData->lastEquationSolved = 34;
  res[13] = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* $TMP_MinRepro_Med_ThermodynamicState22.phase variable */) - (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* st.phase DISCRETE */);
  threadData->lastEquationSolved = 35;
  res[14] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* $TMP_MinRepro_Med_ThermodynamicState22.s variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* st.s variable */);
  threadData->lastEquationSolved = 36;
  /* restore known outputs */
  threadData->lastEquationSolved = 38;
}
void initializeSparsePatternNLS38(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS38(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS38(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS38(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for st.phase */
  sysData->nominal[i] = data->modelData->integerVarsData[2] /* st.phase */ .attribute.nominal;
  sysData->min[i]     = data->modelData->integerVarsData[2] /* st.phase */ .attribute.min;
  sysData->max[i++]   = data->modelData->integerVarsData[2] /* st.phase */ .attribute.max;
  /* static nls data for st.a */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 31 /* st.a */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 31 /* st.a */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 31 /* st.a */);
  /* static nls data for st.T */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 30 /* st.T */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 30 /* st.T */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 30 /* st.T */);
  /* static nls data for st.lambda */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 41 /* st.lambda */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 41 /* st.lambda */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 41 /* st.lambda */);
  /* static nls data for st.eta */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 38 /* st.eta */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 38 /* st.eta */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 38 /* st.eta */);
  /* static nls data for st.cv */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 34 /* st.cv */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 34 /* st.cv */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 34 /* st.cv */);
  /* static nls data for st.kappa */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 40 /* st.kappa */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 40 /* st.kappa */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 40 /* st.kappa */);
  /* static nls data for st.cp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 33 /* st.cp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 33 /* st.cp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 33 /* st.cp */);
  /* static nls data for st.beta */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 32 /* st.beta */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 32 /* st.beta */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 32 /* st.beta */);
  /* static nls data for st.ddph */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 37 /* st.ddph */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 37 /* st.ddph */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 37 /* st.ddph */);
  /* static nls data for st.ddhp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 36 /* st.ddhp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 36 /* st.ddhp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 36 /* st.ddhp */);
  /* static nls data for st.h */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 39 /* st.h */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 39 /* st.h */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 39 /* st.h */);
  /* static nls data for st.p */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 42 /* st.p */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 42 /* st.p */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 42 /* st.p */);
  /* static nls data for p */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 29 /* p */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 29 /* p */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 29 /* p */);
  /* static nls data for h */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 28 /* h */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 28 /* h */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 28 /* h */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS38(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS38(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS38(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS38(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS38(DATA* data, double *array)
{
  array[0] = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* st.phase DISCRETE */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* st.a variable */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* st.T variable */);
  array[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* st.lambda variable */);
  array[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* st.eta variable */);
  array[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* st.cv variable */);
  array[6] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* st.kappa variable */);
  array[7] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* st.cp variable */);
  array[8] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* st.beta variable */);
  array[9] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* st.ddph variable */);
  array[10] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* st.ddhp variable */);
  array[11] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* st.h variable */);
  array[12] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* st.p variable */);
  array[13] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* p variable */);
  array[14] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* h variable */);
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void MinRepro_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[1].equationIndex = 38;
  nonLinearSystemData[1].size = 15;
  nonLinearSystemData[1].homotopySupport = 0 /* false */;
  nonLinearSystemData[1].mixedSystem = 0 /* false */;
  nonLinearSystemData[1].residualFunc = residualFunc38;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS38;
  nonLinearSystemData[1].freeStaticNLSData = freeStaticDataNLS38;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS38;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  const int tmp_eqn_indices_1[18] = {20, 21, 37, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
  nonLinearSystemData[1].eqn_simcode_indices = malloc(18 * sizeof(int));
  memcpy(nonLinearSystemData[1].eqn_simcode_indices, tmp_eqn_indices_1, 18 * sizeof(int));
  nonLinearSystemData[1].torn_plus_residual_size = 18;
  
  
  nonLinearSystemData[0].equationIndex = 19;
  nonLinearSystemData[0].size = 15;
  nonLinearSystemData[0].homotopySupport = 0 /* false */;
  nonLinearSystemData[0].mixedSystem = 0 /* false */;
  nonLinearSystemData[0].residualFunc = residualFunc19;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS19;
  nonLinearSystemData[0].freeStaticNLSData = freeStaticDataNLS19;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS19;
  nonLinearSystemData[0].checkConstraints = NULL;
  
  const int tmp_eqn_indices_0[18] = {1, 2, 18, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
  nonLinearSystemData[0].eqn_simcode_indices = malloc(18 * sizeof(int));
  memcpy(nonLinearSystemData[0].eqn_simcode_indices, tmp_eqn_indices_0, 18 * sizeof(int));
  nonLinearSystemData[0].torn_plus_residual_size = 18;
}

#if defined(__cplusplus)
}
#endif
