/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "RefrigerationTrainer.ClosedLoopM1eCS_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1387
type: SIMPLE_ASSIGN
$START.m_dot_circuit_kg_s_2 = comp.M_dot_start
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1387};
  ((modelica_real *)((data->modelData->realVarsData[1180] /* m_dot_circuit_kg_s_2 variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[17]] /* comp.M_dot_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */) = ((modelica_real *)((data->modelData->realVarsData[1180] /* m_dot_circuit_kg_s_2 variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1180] /* m_dot_circuit_kg_s_2 */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */));
  threadData->lastEquationSolved = 1387;
}

/*
equation index: 1388
type: SIMPLE_ASSIGN
$START.p_lift_pa = txv.DELTAp_nom
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1388};
  ((modelica_real *)((data->modelData->realVarsData[1185] /* p_lift_pa variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[179]] /* txv.DELTAp_nom PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* p_lift_pa variable */) = ((modelica_real *)((data->modelData->realVarsData[1185] /* p_lift_pa variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1185] /* p_lift_pa */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* p_lift_pa variable */));
  threadData->lastEquationSolved = 1388;
}

/*
equation index: 1389
type: SIMPLE_ASSIGN
$START.txv_opening_cmd = txv_opening_frac
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1389};
  ((modelica_real *)((data->modelData->realVarsData[13] /* txv_opening_cmd STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[186]] /* txv_opening_frac PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* txv_opening_cmd STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[13] /* txv_opening_cmd STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[13] /* txv_opening_cmd */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* txv_opening_cmd STATE(1) */));
  threadData->lastEquationSolved = 1389;
}

/*
equation index: 1390
type: SIMPLE_ASSIGN
$START.evap.Cells[5].h = evap.Cells[5].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1390};
  ((modelica_real *)((data->modelData->realVarsData[11] /* evap.Cells[5].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* evap.Cells[5].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[11] /* evap.Cells[5].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[11] /* evap.Cells[5].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */));
  threadData->lastEquationSolved = 1390;
}

/*
equation index: 1391
type: SIMPLE_ASSIGN
$START.evap.Cells[5].M_dot_ex = evap.Cells[5].Mdotnom / (*Real*)(evap.Cells[5].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1391};
  ((modelica_real *)((data->modelData->realVarsData[917] /* evap.Cells[5].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[5].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[35]] /* evap.Cells[5].Nt PARAM */)),"/*Real*/(evap.Cells[5].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* evap.Cells[5].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[917] /* evap.Cells[5].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[917] /* evap.Cells[5].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* evap.Cells[5].M_dot_ex variable */));
  threadData->lastEquationSolved = 1391;
}

/*
equation index: 1392
type: SIMPLE_ASSIGN
$START.evap.Cells[5].M_dot_su = evap.Cells[5].Mdotnom / (*Real*)(evap.Cells[5].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1392};
  ((modelica_real *)((data->modelData->realVarsData[922] /* evap.Cells[5].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[5].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[35]] /* evap.Cells[5].Nt PARAM */)),"/*Real*/(evap.Cells[5].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* evap.Cells[5].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[922] /* evap.Cells[5].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[922] /* evap.Cells[5].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* evap.Cells[5].M_dot_su variable */));
  threadData->lastEquationSolved = 1392;
}

/*
equation index: 1393
type: SIMPLE_ASSIGN
$START.evap.Cells[5].p = comp.p_su_start
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1393};
  ((modelica_real *)((data->modelData->realVarsData[12] /* evap.Cells[5].p STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* comp.p_su_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[12] /* evap.Cells[5].p STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[12] /* evap.Cells[5].p */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  threadData->lastEquationSolved = 1393;
}

/*
equation index: 1394
type: SIMPLE_ASSIGN
$START.evap.Cells[4].h = evap.Cells[4].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1394};
  ((modelica_real *)((data->modelData->realVarsData[10] /* evap.Cells[4].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* evap.Cells[4].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[10] /* evap.Cells[4].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[10] /* evap.Cells[4].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */));
  threadData->lastEquationSolved = 1394;
}

/*
equation index: 1395
type: SIMPLE_ASSIGN
$START.evap.Cells[4].M_dot_ex = evap.Cells[4].Mdotnom / (*Real*)(evap.Cells[4].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1395};
  ((modelica_real *)((data->modelData->realVarsData[916] /* evap.Cells[4].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[4].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* evap.Cells[4].Nt PARAM */)),"/*Real*/(evap.Cells[4].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[916]] /* evap.Cells[4].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[916] /* evap.Cells[4].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[916] /* evap.Cells[4].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[916]] /* evap.Cells[4].M_dot_ex variable */));
  threadData->lastEquationSolved = 1395;
}

/*
equation index: 1396
type: SIMPLE_ASSIGN
$START.evap.Cells[4].M_dot_su = evap.Cells[4].Mdotnom / (*Real*)(evap.Cells[4].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1396};
  ((modelica_real *)((data->modelData->realVarsData[921] /* evap.Cells[4].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[4].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* evap.Cells[4].Nt PARAM */)),"/*Real*/(evap.Cells[4].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* evap.Cells[4].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[921] /* evap.Cells[4].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[921] /* evap.Cells[4].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* evap.Cells[4].M_dot_su variable */));
  threadData->lastEquationSolved = 1396;
}

/*
equation index: 1397
type: SIMPLE_ASSIGN
$START.evap.Cells[3].h = evap.Cells[3].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1397};
  ((modelica_real *)((data->modelData->realVarsData[9] /* evap.Cells[3].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* evap.Cells[3].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[9] /* evap.Cells[3].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[9] /* evap.Cells[3].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */));
  threadData->lastEquationSolved = 1397;
}

/*
equation index: 1398
type: SIMPLE_ASSIGN
$START.evap.Cells[3].M_dot_ex = evap.Cells[3].Mdotnom / (*Real*)(evap.Cells[3].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1398};
  ((modelica_real *)((data->modelData->realVarsData[915] /* evap.Cells[3].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* evap.Cells[3].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* evap.Cells[3].Nt PARAM */)),"/*Real*/(evap.Cells[3].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[915]] /* evap.Cells[3].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[915] /* evap.Cells[3].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[915] /* evap.Cells[3].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[915]] /* evap.Cells[3].M_dot_ex variable */));
  threadData->lastEquationSolved = 1398;
}

/*
equation index: 1399
type: SIMPLE_ASSIGN
$START.evap.Cells[3].M_dot_su = evap.Cells[3].Mdotnom / (*Real*)(evap.Cells[3].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1399};
  ((modelica_real *)((data->modelData->realVarsData[920] /* evap.Cells[3].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* evap.Cells[3].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* evap.Cells[3].Nt PARAM */)),"/*Real*/(evap.Cells[3].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* evap.Cells[3].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[920] /* evap.Cells[3].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[920] /* evap.Cells[3].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* evap.Cells[3].M_dot_su variable */));
  threadData->lastEquationSolved = 1399;
}

/*
equation index: 1400
type: SIMPLE_ASSIGN
$START.evap.Cells[2].h = evap.Cells[2].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1400};
  ((modelica_real *)((data->modelData->realVarsData[8] /* evap.Cells[2].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* evap.Cells[2].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[8] /* evap.Cells[2].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[8] /* evap.Cells[2].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */));
  threadData->lastEquationSolved = 1400;
}

/*
equation index: 1401
type: SIMPLE_ASSIGN
$START.evap.Cells[2].M_dot_ex = evap.Cells[2].Mdotnom / (*Real*)(evap.Cells[2].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1401};
  ((modelica_real *)((data->modelData->realVarsData[914] /* evap.Cells[2].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* evap.Cells[2].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* evap.Cells[2].Nt PARAM */)),"/*Real*/(evap.Cells[2].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[914]] /* evap.Cells[2].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[914] /* evap.Cells[2].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[914] /* evap.Cells[2].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[914]] /* evap.Cells[2].M_dot_ex variable */));
  threadData->lastEquationSolved = 1401;
}

/*
equation index: 1402
type: SIMPLE_ASSIGN
$START.evap.Cells[2].M_dot_su = evap.Cells[2].Mdotnom / (*Real*)(evap.Cells[2].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1402};
  ((modelica_real *)((data->modelData->realVarsData[919] /* evap.Cells[2].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* evap.Cells[2].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* evap.Cells[2].Nt PARAM */)),"/*Real*/(evap.Cells[2].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* evap.Cells[2].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[919] /* evap.Cells[2].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[919] /* evap.Cells[2].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* evap.Cells[2].M_dot_su variable */));
  threadData->lastEquationSolved = 1402;
}

/*
equation index: 1403
type: SIMPLE_ASSIGN
$START.evap.Cells[1].h = evap.Cells[1].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1403};
  ((modelica_real *)((data->modelData->realVarsData[7] /* evap.Cells[1].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* evap.Cells[1].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[7] /* evap.Cells[1].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[7] /* evap.Cells[1].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */));
  threadData->lastEquationSolved = 1403;
}

/*
equation index: 1404
type: SIMPLE_ASSIGN
$START.evap.Cells[1].M_dot_ex = evap.Cells[1].Mdotnom / (*Real*)(evap.Cells[1].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1404};
  ((modelica_real *)((data->modelData->realVarsData[913] /* evap.Cells[1].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* evap.Cells[1].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[1].Nt PARAM */)),"/*Real*/(evap.Cells[1].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[913]] /* evap.Cells[1].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[913] /* evap.Cells[1].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[913] /* evap.Cells[1].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[913]] /* evap.Cells[1].M_dot_ex variable */));
  threadData->lastEquationSolved = 1404;
}

/*
equation index: 1405
type: SIMPLE_ASSIGN
$START.evap.Cells[1].M_dot_su = evap.Cells[1].Mdotnom / (*Real*)(evap.Cells[1].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1405};
  ((modelica_real *)((data->modelData->realVarsData[918] /* evap.Cells[1].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* evap.Cells[1].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[1].Nt PARAM */)),"/*Real*/(evap.Cells[1].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* evap.Cells[1].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[918] /* evap.Cells[1].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[918] /* evap.Cells[1].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* evap.Cells[1].M_dot_su variable */));
  threadData->lastEquationSolved = 1405;
}

/*
equation index: 1406
type: SIMPLE_ASSIGN
$START.txv.rho = txv.rho_nom
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1406};
  ((modelica_real *)((data->modelData->realVarsData[1200] /* txv.rho variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[184]] /* txv.rho_nom PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* txv.rho variable */) = ((modelica_real *)((data->modelData->realVarsData[1200] /* txv.rho variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1200] /* txv.rho */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* txv.rho variable */));
  threadData->lastEquationSolved = 1406;
}

/*
equation index: 1407
type: SIMPLE_ASSIGN
$START.txv.Mdot = txv.Mdot_nom
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1407};
  ((modelica_real *)((data->modelData->realVarsData[1199] /* txv.Mdot variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* txv.Mdot_nom PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* txv.Mdot variable */) = ((modelica_real *)((data->modelData->realVarsData[1199] /* txv.Mdot variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1199] /* txv.Mdot */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* txv.Mdot variable */));
  threadData->lastEquationSolved = 1407;
}

/*
equation index: 1408
type: SIMPLE_ASSIGN
$START.txv.A = txv.Afull
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1408};
  ((modelica_real *)((data->modelData->realVarsData[1197] /* txv.A variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* txv.Afull PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* txv.A variable */) = ((modelica_real *)((data->modelData->realVarsData[1197] /* txv.A variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1197] /* txv.A */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* txv.A variable */));
  threadData->lastEquationSolved = 1408;
}

/*
equation index: 1409
type: SIMPLE_ASSIGN
$START.cond.Cells[5].h = evap.Cells[1].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1409};
  ((modelica_real *)((data->modelData->realVarsData[4] /* cond.Cells[5].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* evap.Cells[1].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[4] /* cond.Cells[5].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[4] /* cond.Cells[5].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */));
  threadData->lastEquationSolved = 1409;
}

/*
equation index: 1410
type: SIMPLE_ASSIGN
$START.cond.Cells[5].M_dot_ex = cond.Cells[5].Mdotnom / (*Real*)(cond.Cells[5].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1410};
  ((modelica_real *)((data->modelData->realVarsData[643] /* cond.Cells[5].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* cond.Cells[5].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* cond.Cells[5].Nt PARAM */)),"/*Real*/(cond.Cells[5].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* cond.Cells[5].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[643] /* cond.Cells[5].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[643] /* cond.Cells[5].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* cond.Cells[5].M_dot_ex variable */));
  threadData->lastEquationSolved = 1410;
}

/*
equation index: 1411
type: SIMPLE_ASSIGN
$START.cond.Cells[5].M_dot_su = cond.Cells[5].Mdotnom / (*Real*)(cond.Cells[5].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1411};
  ((modelica_real *)((data->modelData->realVarsData[648] /* cond.Cells[5].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* cond.Cells[5].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* cond.Cells[5].Nt PARAM */)),"/*Real*/(cond.Cells[5].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cond.Cells[5].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[648] /* cond.Cells[5].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[648] /* cond.Cells[5].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cond.Cells[5].M_dot_su variable */));
  threadData->lastEquationSolved = 1411;
}

/*
equation index: 1412
type: SIMPLE_ASSIGN
$START.cond.Cells[4].h = cond.Cells[4].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1412};
  ((modelica_real *)((data->modelData->realVarsData[3] /* cond.Cells[4].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* cond.Cells[4].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[3] /* cond.Cells[4].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[3] /* cond.Cells[4].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */));
  threadData->lastEquationSolved = 1412;
}

/*
equation index: 1413
type: SIMPLE_ASSIGN
$START.cond.Cells[4].M_dot_ex = cond.Cells[4].Mdotnom / (*Real*)(cond.Cells[4].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1413};
  ((modelica_real *)((data->modelData->realVarsData[642] /* cond.Cells[4].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* cond.Cells[4].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* cond.Cells[4].Nt PARAM */)),"/*Real*/(cond.Cells[4].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* cond.Cells[4].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[642] /* cond.Cells[4].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[642] /* cond.Cells[4].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* cond.Cells[4].M_dot_ex variable */));
  threadData->lastEquationSolved = 1413;
}

/*
equation index: 1414
type: SIMPLE_ASSIGN
$START.cond.Cells[4].M_dot_su = cond.Cells[4].Mdotnom / (*Real*)(cond.Cells[4].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1414};
  ((modelica_real *)((data->modelData->realVarsData[647] /* cond.Cells[4].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* cond.Cells[4].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* cond.Cells[4].Nt PARAM */)),"/*Real*/(cond.Cells[4].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cond.Cells[4].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[647] /* cond.Cells[4].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[647] /* cond.Cells[4].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cond.Cells[4].M_dot_su variable */));
  threadData->lastEquationSolved = 1414;
}

/*
equation index: 1415
type: SIMPLE_ASSIGN
$START.cond.Cells[3].h = cond.Cells[3].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1415};
  ((modelica_real *)((data->modelData->realVarsData[2] /* cond.Cells[3].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* cond.Cells[3].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[2] /* cond.Cells[3].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[2] /* cond.Cells[3].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */));
  threadData->lastEquationSolved = 1415;
}

/*
equation index: 1416
type: SIMPLE_ASSIGN
$START.cond.Cells[3].M_dot_ex = cond.Cells[3].Mdotnom / (*Real*)(cond.Cells[3].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1416};
  ((modelica_real *)((data->modelData->realVarsData[641] /* cond.Cells[3].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* cond.Cells[3].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* cond.Cells[3].Nt PARAM */)),"/*Real*/(cond.Cells[3].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* cond.Cells[3].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[641] /* cond.Cells[3].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[641] /* cond.Cells[3].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* cond.Cells[3].M_dot_ex variable */));
  threadData->lastEquationSolved = 1416;
}

/*
equation index: 1417
type: SIMPLE_ASSIGN
$START.cond.Cells[3].M_dot_su = cond.Cells[3].Mdotnom / (*Real*)(cond.Cells[3].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1417};
  ((modelica_real *)((data->modelData->realVarsData[646] /* cond.Cells[3].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* cond.Cells[3].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* cond.Cells[3].Nt PARAM */)),"/*Real*/(cond.Cells[3].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cond.Cells[3].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[646] /* cond.Cells[3].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[646] /* cond.Cells[3].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cond.Cells[3].M_dot_su variable */));
  threadData->lastEquationSolved = 1417;
}

/*
equation index: 1418
type: SIMPLE_ASSIGN
$START.cond.Cells[2].h = cond.Cells[2].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1418};
  ((modelica_real *)((data->modelData->realVarsData[1] /* cond.Cells[2].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[69]] /* cond.Cells[2].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[1] /* cond.Cells[2].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1] /* cond.Cells[2].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */));
  threadData->lastEquationSolved = 1418;
}

/*
equation index: 1419
type: SIMPLE_ASSIGN
$START.cond.Cells[2].M_dot_ex = cond.Cells[2].Mdotnom / (*Real*)(cond.Cells[2].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1419};
  ((modelica_real *)((data->modelData->realVarsData[640] /* cond.Cells[2].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* cond.Cells[2].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* cond.Cells[2].Nt PARAM */)),"/*Real*/(cond.Cells[2].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* cond.Cells[2].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[640] /* cond.Cells[2].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[640] /* cond.Cells[2].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* cond.Cells[2].M_dot_ex variable */));
  threadData->lastEquationSolved = 1419;
}

/*
equation index: 1420
type: SIMPLE_ASSIGN
$START.cond.Cells[2].M_dot_su = cond.Cells[2].Mdotnom / (*Real*)(cond.Cells[2].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1420};
  ((modelica_real *)((data->modelData->realVarsData[645] /* cond.Cells[2].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* cond.Cells[2].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* cond.Cells[2].Nt PARAM */)),"/*Real*/(cond.Cells[2].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cond.Cells[2].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[645] /* cond.Cells[2].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[645] /* cond.Cells[2].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cond.Cells[2].M_dot_su variable */));
  threadData->lastEquationSolved = 1420;
}

/*
equation index: 1421
type: SIMPLE_ASSIGN
$START.cond.Cells[1].hnode_su = cond.Cells[1].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1421};
  ((modelica_real *)((data->modelData->realVarsData[754] /* cond.Cells[1].hnode_su variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* cond.Cells[1].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cond.Cells[1].hnode_su variable */) = ((modelica_real *)((data->modelData->realVarsData[754] /* cond.Cells[1].hnode_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[754] /* cond.Cells[1].hnode_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cond.Cells[1].hnode_su variable */));
  threadData->lastEquationSolved = 1421;
}

/*
equation index: 1422
type: SIMPLE_ASSIGN
$START.cond.Cells[1].h = cond.Cells[1].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1422};
  ((modelica_real *)((data->modelData->realVarsData[0] /* cond.Cells[1].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* cond.Cells[1].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[0] /* cond.Cells[1].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[0] /* cond.Cells[1].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */));
  threadData->lastEquationSolved = 1422;
}

/*
equation index: 1423
type: SIMPLE_ASSIGN
$START.cond.Cells[1].M_dot_ex = cond.Cells[1].Mdotnom / (*Real*)(cond.Cells[1].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1423};
  ((modelica_real *)((data->modelData->realVarsData[639] /* cond.Cells[1].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* cond.Cells[1].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[1].Nt PARAM */)),"/*Real*/(cond.Cells[1].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cond.Cells[1].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[639] /* cond.Cells[1].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[639] /* cond.Cells[1].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cond.Cells[1].M_dot_ex variable */));
  threadData->lastEquationSolved = 1423;
}

/*
equation index: 1424
type: SIMPLE_ASSIGN
$START.cond.Cells[1].M_dot_su = cond.Cells[1].Mdotnom / (*Real*)(cond.Cells[1].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1424};
  ((modelica_real *)((data->modelData->realVarsData[644] /* cond.Cells[1].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* cond.Cells[1].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[1].Nt PARAM */)),"/*Real*/(cond.Cells[1].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cond.Cells[1].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[644] /* cond.Cells[1].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[644] /* cond.Cells[1].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cond.Cells[1].M_dot_su variable */));
  threadData->lastEquationSolved = 1424;
}

/*
equation index: 1425
type: SIMPLE_ASSIGN
$START.cond.Cells[1].p = comp.p_ex_start
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1425};
  ((modelica_real *)((data->modelData->realVarsData[5] /* cond.Cells[1].p STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* comp.p_ex_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[5] /* cond.Cells[1].p STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[5] /* cond.Cells[1].p */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  threadData->lastEquationSolved = 1425;
}

/*
equation index: 1426
type: SIMPLE_ASSIGN
$START.comp.h_ex = comp.h_ex_start
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1426};
  ((modelica_real *)((data->modelData->realVarsData[629] /* comp.h_ex variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* comp.h_ex_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[629] /* comp.h_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[629] /* comp.h_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */));
  threadData->lastEquationSolved = 1426;
}

/*
equation index: 1427
type: SIMPLE_ASSIGN
$START.comp.h_su = comp.h_su_start
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1427};
  ((modelica_real *)((data->modelData->realVarsData[631] /* comp.h_su variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* comp.h_su_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */) = ((modelica_real *)((data->modelData->realVarsData[631] /* comp.h_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[631] /* comp.h_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */));
  threadData->lastEquationSolved = 1427;
}

/*
equation index: 1428
type: SIMPLE_ASSIGN
$START.comp.rho_su = RefrigerationTrainer.ClosedLoopM1eCS.comp.Medium.setState_pT(comp.p_su_start, comp.T_su_start, 0).d
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1428};
  ((modelica_real *)((data->modelData->realVarsData[632] /* comp.rho_su variable */).attribute .start.data))[0] = omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__pT(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* comp.p_su_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* comp.T_su_start PARAM */), ((modelica_integer) 0))._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* comp.rho_su variable */) = ((modelica_real *)((data->modelData->realVarsData[632] /* comp.rho_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[632] /* comp.rho_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* comp.rho_su variable */));
  threadData->lastEquationSolved = 1428;
}

/*
equation index: 1429
type: SIMPLE_ASSIGN
$START.txv.DELTAp = txv.DELTAp_nom
*/
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1429};
  ((modelica_real *)((data->modelData->realVarsData[1198] /* txv.DELTAp variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[179]] /* txv.DELTAp_nom PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* txv.DELTAp variable */) = ((modelica_real *)((data->modelData->realVarsData[1198] /* txv.DELTAp variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1198] /* txv.DELTAp */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* txv.DELTAp variable */));
  threadData->lastEquationSolved = 1429;
}
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  /* min ******************************************************** */
  infoStreamPrint(OMC_LOG_INIT, 1, "updating min-values");
  messageClose(OMC_LOG_INIT);
  
  /* max ******************************************************** */
  infoStreamPrint(OMC_LOG_INIT, 1, "updating max-values");
  messageClose(OMC_LOG_INIT);
  
  /* nominal **************************************************** */
  infoStreamPrint(OMC_LOG_INIT, 1, "updating nominal-values");
  messageClose(OMC_LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(OMC_LOG_INIT, 1, "updating primary start-values");
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1387(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1388(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1389(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1390(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1391(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1392(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1393(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1394(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1395(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1396(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1397(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1398(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1399(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1400(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1401(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1402(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1403(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1404(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1405(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1406(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1407(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1408(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1409(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1410(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1411(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1412(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1413(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1414(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1415(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1416(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1417(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1418(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1419(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1420(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1421(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1422(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1423(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1424(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1425(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1426(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1427(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1428(data, threadData);
  RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1429(data, threadData);
  messageClose(OMC_LOG_INIT);
  
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 1430
type: SIMPLE_ASSIGN
drive.w_fixed = 314.1592653589793 * compressor_speed_frac
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1430};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* drive.w_fixed PARAM */) = (314.1592653589793) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[30]] /* compressor_speed_frac PARAM */));
  threadData->lastEquationSolved = 1430;
}

/*
equation index: 1436
type: SIMPLE_ASSIGN
coil_cond.A_cell = 0.2 * coil_cond.A_tot
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1436};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* coil_cond.A_cell PARAM */) = (0.2) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* coil_cond.A_tot PARAM */));
  threadData->lastEquationSolved = 1436;
}

/*
equation index: 1438
type: SIMPLE_ASSIGN
coil_cond.V_dot_air_m3_s = condenser_airflow_m3_s
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1438};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* coil_cond.V_dot_air_m3_s PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* condenser_airflow_m3_s PARAM */);
  threadData->lastEquationSolved = 1438;
}

/*
equation index: 1440
type: SIMPLE_ASSIGN
coil_evap.A_cell = 0.2 * coil_evap.A_tot
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1440};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* coil_evap.A_cell PARAM */) = (0.2) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* coil_evap.A_tot PARAM */));
  threadData->lastEquationSolved = 1440;
}

/*
equation index: 1442
type: SIMPLE_ASSIGN
coil_evap.V_dot_air_m3_s = evap_airflow_m3_s
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1442};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* coil_evap.V_dot_air_m3_s PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[170]] /* evap_airflow_m3_s PARAM */);
  threadData->lastEquationSolved = 1442;
}

/*
equation index: 1449
type: SIMPLE_ASSIGN
evap.Cells[5].TT = evap.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1449};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* evap.Cells[5].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* evap.TT PARAM */);
  threadData->lastEquationSolved = 1449;
}

/*
equation index: 1450
type: SIMPLE_ASSIGN
evap.Cells[5].max_drhodt = evap.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1450};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[148]] /* evap.Cells[5].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[168]] /* evap.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1450;
}

/*
equation index: 1455
type: SIMPLE_ASSIGN
evap.Cells[5].hstart = evap.hstart[5]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1455};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* evap.Cells[5].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[167]] /* evap.hstart[5] PARAM */);
  threadData->lastEquationSolved = 1455;
}

/*
equation index: 1456
type: SIMPLE_ASSIGN
evap.pstart = p_evap_start
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1456};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* evap.pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[174]] /* p_evap_start PARAM */);
  threadData->lastEquationSolved = 1456;
}

/*
equation index: 1457
type: SIMPLE_ASSIGN
evap.Cells[5].pstart = evap.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1457};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[153]] /* evap.Cells[5].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* evap.pstart PARAM */);
  threadData->lastEquationSolved = 1457;
}

/*
equation index: 1458
type: SIMPLE_ASSIGN
evap.Cells[5].Unom_v = evap.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1458};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* evap.Cells[5].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[160]] /* evap.Unom_v PARAM */);
  threadData->lastEquationSolved = 1458;
}

/*
equation index: 1459
type: SIMPLE_ASSIGN
evap.Cells[5].Unom_tp = evap.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1459};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[128]] /* evap.Cells[5].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[159]] /* evap.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1459;
}

/*
equation index: 1460
type: SIMPLE_ASSIGN
evap.Cells[5].Unom_l = evap.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1460};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* evap.Cells[5].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* evap.Unom_l PARAM */);
  threadData->lastEquationSolved = 1460;
}

/*
equation index: 1461
type: SIMPLE_ASSIGN
evap.Mdotnom = mdot_nom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1461};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[154]] /* evap.Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[172]] /* mdot_nom PARAM */);
  threadData->lastEquationSolved = 1461;
}

/*
equation index: 1462
type: SIMPLE_ASSIGN
evap.Cells[5].Mdotnom = evap.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1462};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[5].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[154]] /* evap.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1462;
}

/*
equation index: 1463
type: SIMPLE_ASSIGN
evap.Ai = 0.2 * evap.A
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1463};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* evap.Ai PARAM */) = (0.2) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[102]] /* evap.A PARAM */));
  threadData->lastEquationSolved = 1463;
}

/*
equation index: 1464
type: SIMPLE_ASSIGN
evap.Cells[5].Ai = evap.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* evap.Cells[5].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* evap.Ai PARAM */);
  threadData->lastEquationSolved = 1464;
}

/*
equation index: 1465
type: SIMPLE_ASSIGN
evap.Vi = 0.2 * evap.V
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1465};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[162]] /* evap.Vi PARAM */) = (0.2) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[161]] /* evap.V PARAM */));
  threadData->lastEquationSolved = 1465;
}

/*
equation index: 1466
type: SIMPLE_ASSIGN
evap.Cells[5].Vi = evap.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1466};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* evap.Cells[5].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[162]] /* evap.Vi PARAM */);
  threadData->lastEquationSolved = 1466;
}

/*
equation index: 1467
type: SIMPLE_ASSIGN
evap.Cells[5].Nt = evap.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1467};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[35]] /* evap.Cells[5].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* evap.Nt PARAM */);
  threadData->lastEquationSolved = 1467;
}

/*
equation index: 1471
type: SIMPLE_ASSIGN
evap.Cells[4].TT = evap.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1471};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* evap.Cells[4].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* evap.TT PARAM */);
  threadData->lastEquationSolved = 1471;
}

/*
equation index: 1472
type: SIMPLE_ASSIGN
evap.Cells[4].max_drhodt = evap.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1472};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[147]] /* evap.Cells[4].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[168]] /* evap.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1472;
}

/*
equation index: 1477
type: SIMPLE_ASSIGN
evap.Cells[4].hstart = evap.hstart[4]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1477};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* evap.Cells[4].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[166]] /* evap.hstart[4] PARAM */);
  threadData->lastEquationSolved = 1477;
}

/*
equation index: 1478
type: SIMPLE_ASSIGN
evap.Cells[4].pstart = evap.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1478};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* evap.Cells[4].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* evap.pstart PARAM */);
  threadData->lastEquationSolved = 1478;
}

/*
equation index: 1479
type: SIMPLE_ASSIGN
evap.Cells[4].Unom_v = evap.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1479};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[132]] /* evap.Cells[4].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[160]] /* evap.Unom_v PARAM */);
  threadData->lastEquationSolved = 1479;
}

/*
equation index: 1480
type: SIMPLE_ASSIGN
evap.Cells[4].Unom_tp = evap.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1480};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[127]] /* evap.Cells[4].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[159]] /* evap.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1480;
}

/*
equation index: 1481
type: SIMPLE_ASSIGN
evap.Cells[4].Unom_l = evap.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1481};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[122]] /* evap.Cells[4].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* evap.Unom_l PARAM */);
  threadData->lastEquationSolved = 1481;
}

/*
equation index: 1482
type: SIMPLE_ASSIGN
evap.Cells[4].Mdotnom = evap.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1482};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[4].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[154]] /* evap.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1482;
}

/*
equation index: 1483
type: SIMPLE_ASSIGN
evap.Cells[4].Ai = evap.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1483};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[107]] /* evap.Cells[4].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* evap.Ai PARAM */);
  threadData->lastEquationSolved = 1483;
}

/*
equation index: 1484
type: SIMPLE_ASSIGN
evap.Cells[4].Vi = evap.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1484};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Cells[4].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[162]] /* evap.Vi PARAM */);
  threadData->lastEquationSolved = 1484;
}

/*
equation index: 1485
type: SIMPLE_ASSIGN
evap.Cells[4].Nt = evap.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1485};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* evap.Cells[4].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* evap.Nt PARAM */);
  threadData->lastEquationSolved = 1485;
}

/*
equation index: 1489
type: SIMPLE_ASSIGN
evap.Cells[3].TT = evap.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1489};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* evap.Cells[3].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* evap.TT PARAM */);
  threadData->lastEquationSolved = 1489;
}

/*
equation index: 1490
type: SIMPLE_ASSIGN
evap.Cells[3].max_drhodt = evap.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1490};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[146]] /* evap.Cells[3].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[168]] /* evap.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1490;
}

/*
equation index: 1495
type: SIMPLE_ASSIGN
evap.Cells[3].hstart = evap.hstart[3]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1495};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* evap.Cells[3].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[165]] /* evap.hstart[3] PARAM */);
  threadData->lastEquationSolved = 1495;
}

/*
equation index: 1496
type: SIMPLE_ASSIGN
evap.Cells[3].pstart = evap.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1496};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* evap.Cells[3].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* evap.pstart PARAM */);
  threadData->lastEquationSolved = 1496;
}

/*
equation index: 1497
type: SIMPLE_ASSIGN
evap.Cells[3].Unom_v = evap.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1497};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* evap.Cells[3].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[160]] /* evap.Unom_v PARAM */);
  threadData->lastEquationSolved = 1497;
}

/*
equation index: 1498
type: SIMPLE_ASSIGN
evap.Cells[3].Unom_tp = evap.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1498};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[126]] /* evap.Cells[3].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[159]] /* evap.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1498;
}

/*
equation index: 1499
type: SIMPLE_ASSIGN
evap.Cells[3].Unom_l = evap.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1499};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[121]] /* evap.Cells[3].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* evap.Unom_l PARAM */);
  threadData->lastEquationSolved = 1499;
}

/*
equation index: 1500
type: SIMPLE_ASSIGN
evap.Cells[3].Mdotnom = evap.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1500};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* evap.Cells[3].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[154]] /* evap.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1500;
}

/*
equation index: 1501
type: SIMPLE_ASSIGN
evap.Cells[3].Ai = evap.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1501};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* evap.Cells[3].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* evap.Ai PARAM */);
  threadData->lastEquationSolved = 1501;
}

/*
equation index: 1502
type: SIMPLE_ASSIGN
evap.Cells[3].Vi = evap.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1502};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Cells[3].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[162]] /* evap.Vi PARAM */);
  threadData->lastEquationSolved = 1502;
}

/*
equation index: 1503
type: SIMPLE_ASSIGN
evap.Cells[3].Nt = evap.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1503};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* evap.Cells[3].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* evap.Nt PARAM */);
  threadData->lastEquationSolved = 1503;
}

/*
equation index: 1507
type: SIMPLE_ASSIGN
evap.Cells[2].TT = evap.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1507};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* evap.Cells[2].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* evap.TT PARAM */);
  threadData->lastEquationSolved = 1507;
}

/*
equation index: 1508
type: SIMPLE_ASSIGN
evap.Cells[2].max_drhodt = evap.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[145]] /* evap.Cells[2].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[168]] /* evap.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1508;
}

/*
equation index: 1513
type: SIMPLE_ASSIGN
evap.Cells[2].hstart = evap.hstart[2]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1513};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* evap.Cells[2].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[164]] /* evap.hstart[2] PARAM */);
  threadData->lastEquationSolved = 1513;
}

/*
equation index: 1514
type: SIMPLE_ASSIGN
evap.Cells[2].pstart = evap.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1514};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[150]] /* evap.Cells[2].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* evap.pstart PARAM */);
  threadData->lastEquationSolved = 1514;
}

/*
equation index: 1515
type: SIMPLE_ASSIGN
evap.Cells[2].Unom_v = evap.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1515};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* evap.Cells[2].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[160]] /* evap.Unom_v PARAM */);
  threadData->lastEquationSolved = 1515;
}

/*
equation index: 1516
type: SIMPLE_ASSIGN
evap.Cells[2].Unom_tp = evap.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1516};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[125]] /* evap.Cells[2].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[159]] /* evap.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1516;
}

/*
equation index: 1517
type: SIMPLE_ASSIGN
evap.Cells[2].Unom_l = evap.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1517};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* evap.Cells[2].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* evap.Unom_l PARAM */);
  threadData->lastEquationSolved = 1517;
}

/*
equation index: 1518
type: SIMPLE_ASSIGN
evap.Cells[2].Mdotnom = evap.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1518};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* evap.Cells[2].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[154]] /* evap.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1518;
}

/*
equation index: 1519
type: SIMPLE_ASSIGN
evap.Cells[2].Ai = evap.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1519};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* evap.Cells[2].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* evap.Ai PARAM */);
  threadData->lastEquationSolved = 1519;
}

/*
equation index: 1520
type: SIMPLE_ASSIGN
evap.Cells[2].Vi = evap.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1520};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Cells[2].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[162]] /* evap.Vi PARAM */);
  threadData->lastEquationSolved = 1520;
}

/*
equation index: 1521
type: SIMPLE_ASSIGN
evap.Cells[2].Nt = evap.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1521};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* evap.Cells[2].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* evap.Nt PARAM */);
  threadData->lastEquationSolved = 1521;
}

/*
equation index: 1525
type: SIMPLE_ASSIGN
evap.Cells[1].TT = evap.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1525};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* evap.Cells[1].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* evap.TT PARAM */);
  threadData->lastEquationSolved = 1525;
}

/*
equation index: 1526
type: SIMPLE_ASSIGN
evap.Cells[1].max_drhodt = evap.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1526};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[144]] /* evap.Cells[1].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[168]] /* evap.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1526;
}

/*
equation index: 1531
type: SIMPLE_ASSIGN
evap.Cells[1].hstart = evap.hstart[1]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1531};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* evap.Cells[1].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[163]] /* evap.hstart[1] PARAM */);
  threadData->lastEquationSolved = 1531;
}

/*
equation index: 1532
type: SIMPLE_ASSIGN
evap.Cells[1].pstart = evap.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[149]] /* evap.Cells[1].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* evap.pstart PARAM */);
  threadData->lastEquationSolved = 1532;
}

/*
equation index: 1533
type: SIMPLE_ASSIGN
evap.Cells[1].Unom_v = evap.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1533};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[129]] /* evap.Cells[1].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[160]] /* evap.Unom_v PARAM */);
  threadData->lastEquationSolved = 1533;
}

/*
equation index: 1534
type: SIMPLE_ASSIGN
evap.Cells[1].Unom_tp = evap.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1534};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[124]] /* evap.Cells[1].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[159]] /* evap.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1534;
}

/*
equation index: 1535
type: SIMPLE_ASSIGN
evap.Cells[1].Unom_l = evap.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1535};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* evap.Cells[1].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* evap.Unom_l PARAM */);
  threadData->lastEquationSolved = 1535;
}

/*
equation index: 1536
type: SIMPLE_ASSIGN
evap.Cells[1].Mdotnom = evap.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1536};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* evap.Cells[1].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[154]] /* evap.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1536;
}

/*
equation index: 1537
type: SIMPLE_ASSIGN
evap.Cells[1].Ai = evap.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1537};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[104]] /* evap.Cells[1].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* evap.Ai PARAM */);
  threadData->lastEquationSolved = 1537;
}

/*
equation index: 1538
type: SIMPLE_ASSIGN
evap.Cells[1].Vi = evap.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1538};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* evap.Cells[1].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[162]] /* evap.Vi PARAM */);
  threadData->lastEquationSolved = 1538;
}

/*
equation index: 1539
type: SIMPLE_ASSIGN
evap.Cells[1].Nt = evap.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1539};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[1].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* evap.Nt PARAM */);
  threadData->lastEquationSolved = 1539;
}

/*
equation index: 1549
type: SIMPLE_ASSIGN
txv.p_nom = p_cond_start
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1549};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[183]] /* txv.p_nom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[173]] /* p_cond_start PARAM */);
  threadData->lastEquationSolved = 1549;
}

/*
equation index: 1550
type: SIMPLE_ASSIGN
txv.rho_nom = RefrigerationTrainer.ClosedLoopM1eCS.txv.Medium.density_pTX(txv.p_nom, txv.T_nom, {})
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1550};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[184]] /* txv.rho_nom PARAM */) = omc_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_density__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[183]] /* txv.p_nom PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[181]] /* txv.T_nom PARAM */), _OMC_LIT16);
  threadData->lastEquationSolved = 1550;
}

/*
equation index: 1551
type: SIMPLE_ASSIGN
txv.Mdot_nom = mdot_nom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1551};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* txv.Mdot_nom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[172]] /* mdot_nom PARAM */);
  threadData->lastEquationSolved = 1551;
}

/*
equation index: 1552
type: SIMPLE_ASSIGN
txv.Afull = 9.6e-8 * txv_size_frac
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1552};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* txv.Afull PARAM */) = (9.6e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[187]] /* txv_size_frac PARAM */));
  threadData->lastEquationSolved = 1552;
}

/*
equation index: 1559
type: SIMPLE_ASSIGN
cond.Cells[5].TT = cond.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1559};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* cond.Cells[5].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* cond.TT PARAM */);
  threadData->lastEquationSolved = 1559;
}

/*
equation index: 1560
type: SIMPLE_ASSIGN
cond.Cells[5].max_drhodt = cond.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1560};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[77]] /* cond.Cells[5].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* cond.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1560;
}

/*
equation index: 1565
type: SIMPLE_ASSIGN
cond.Cells[5].hstart = cond.hstart[5]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1565};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[72]] /* cond.Cells[5].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* cond.hstart[5] PARAM */);
  threadData->lastEquationSolved = 1565;
}

/*
equation index: 1566
type: SIMPLE_ASSIGN
cond.pstart = p_cond_start
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1566};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* cond.pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[173]] /* p_cond_start PARAM */);
  threadData->lastEquationSolved = 1566;
}

/*
equation index: 1567
type: SIMPLE_ASSIGN
cond.Cells[5].pstart = cond.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1567};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[82]] /* cond.Cells[5].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* cond.pstart PARAM */);
  threadData->lastEquationSolved = 1567;
}

/*
equation index: 1568
type: SIMPLE_ASSIGN
cond.Cells[5].Unom_v = cond.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1568};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[62]] /* cond.Cells[5].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[89]] /* cond.Unom_v PARAM */);
  threadData->lastEquationSolved = 1568;
}

/*
equation index: 1569
type: SIMPLE_ASSIGN
cond.Cells[5].Unom_tp = cond.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1569};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* cond.Cells[5].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* cond.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1569;
}

/*
equation index: 1570
type: SIMPLE_ASSIGN
cond.Cells[5].Unom_l = cond.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1570};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* cond.Cells[5].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* cond.Unom_l PARAM */);
  threadData->lastEquationSolved = 1570;
}

/*
equation index: 1571
type: SIMPLE_ASSIGN
cond.Mdotnom = mdot_nom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1571};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* cond.Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[172]] /* mdot_nom PARAM */);
  threadData->lastEquationSolved = 1571;
}

/*
equation index: 1572
type: SIMPLE_ASSIGN
cond.Cells[5].Mdotnom = cond.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1572};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* cond.Cells[5].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* cond.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1572;
}

/*
equation index: 1573
type: SIMPLE_ASSIGN
cond.Ai = 0.2 * cond.A
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1573};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* cond.Ai PARAM */) = (0.2) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[31]] /* cond.A PARAM */));
  threadData->lastEquationSolved = 1573;
}

/*
equation index: 1574
type: SIMPLE_ASSIGN
cond.Cells[5].Ai = cond.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1574};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* cond.Cells[5].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* cond.Ai PARAM */);
  threadData->lastEquationSolved = 1574;
}

/*
equation index: 1575
type: SIMPLE_ASSIGN
cond.Vi = 0.2 * cond.V
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1575};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* cond.Vi PARAM */) = (0.2) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[90]] /* cond.V PARAM */));
  threadData->lastEquationSolved = 1575;
}

/*
equation index: 1576
type: SIMPLE_ASSIGN
cond.Cells[5].Vi = cond.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1576};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Cells[5].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* cond.Vi PARAM */);
  threadData->lastEquationSolved = 1576;
}

/*
equation index: 1577
type: SIMPLE_ASSIGN
cond.Cells[5].Nt = cond.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1577};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* cond.Cells[5].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* cond.Nt PARAM */);
  threadData->lastEquationSolved = 1577;
}

/*
equation index: 1581
type: SIMPLE_ASSIGN
cond.Cells[4].TT = cond.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1581};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* cond.Cells[4].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* cond.TT PARAM */);
  threadData->lastEquationSolved = 1581;
}

/*
equation index: 1582
type: SIMPLE_ASSIGN
cond.Cells[4].max_drhodt = cond.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1582};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[76]] /* cond.Cells[4].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* cond.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1582;
}

/*
equation index: 1587
type: SIMPLE_ASSIGN
cond.Cells[4].hstart = cond.hstart[4]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1587};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* cond.Cells[4].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* cond.hstart[4] PARAM */);
  threadData->lastEquationSolved = 1587;
}

/*
equation index: 1588
type: SIMPLE_ASSIGN
cond.Cells[4].pstart = cond.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1588};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[81]] /* cond.Cells[4].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* cond.pstart PARAM */);
  threadData->lastEquationSolved = 1588;
}

/*
equation index: 1589
type: SIMPLE_ASSIGN
cond.Cells[4].Unom_v = cond.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1589};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[61]] /* cond.Cells[4].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[89]] /* cond.Unom_v PARAM */);
  threadData->lastEquationSolved = 1589;
}

/*
equation index: 1590
type: SIMPLE_ASSIGN
cond.Cells[4].Unom_tp = cond.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1590};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* cond.Cells[4].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* cond.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1590;
}

/*
equation index: 1591
type: SIMPLE_ASSIGN
cond.Cells[4].Unom_l = cond.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1591};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* cond.Cells[4].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* cond.Unom_l PARAM */);
  threadData->lastEquationSolved = 1591;
}

/*
equation index: 1592
type: SIMPLE_ASSIGN
cond.Cells[4].Mdotnom = cond.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1592};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* cond.Cells[4].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* cond.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1592;
}

/*
equation index: 1593
type: SIMPLE_ASSIGN
cond.Cells[4].Ai = cond.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1593};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[36]] /* cond.Cells[4].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* cond.Ai PARAM */);
  threadData->lastEquationSolved = 1593;
}

/*
equation index: 1594
type: SIMPLE_ASSIGN
cond.Cells[4].Vi = cond.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1594};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Cells[4].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* cond.Vi PARAM */);
  threadData->lastEquationSolved = 1594;
}

/*
equation index: 1595
type: SIMPLE_ASSIGN
cond.Cells[4].Nt = cond.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1595};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* cond.Cells[4].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* cond.Nt PARAM */);
  threadData->lastEquationSolved = 1595;
}

/*
equation index: 1599
type: SIMPLE_ASSIGN
cond.Cells[3].TT = cond.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1599};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* cond.Cells[3].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* cond.TT PARAM */);
  threadData->lastEquationSolved = 1599;
}

/*
equation index: 1600
type: SIMPLE_ASSIGN
cond.Cells[3].max_drhodt = cond.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1600};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[75]] /* cond.Cells[3].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* cond.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1600;
}

/*
equation index: 1605
type: SIMPLE_ASSIGN
cond.Cells[3].hstart = cond.hstart[3]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1605};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* cond.Cells[3].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* cond.hstart[3] PARAM */);
  threadData->lastEquationSolved = 1605;
}

/*
equation index: 1606
type: SIMPLE_ASSIGN
cond.Cells[3].pstart = cond.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1606};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* cond.Cells[3].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* cond.pstart PARAM */);
  threadData->lastEquationSolved = 1606;
}

/*
equation index: 1607
type: SIMPLE_ASSIGN
cond.Cells[3].Unom_v = cond.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1607};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[60]] /* cond.Cells[3].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[89]] /* cond.Unom_v PARAM */);
  threadData->lastEquationSolved = 1607;
}

/*
equation index: 1608
type: SIMPLE_ASSIGN
cond.Cells[3].Unom_tp = cond.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1608};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* cond.Cells[3].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* cond.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1608;
}

/*
equation index: 1609
type: SIMPLE_ASSIGN
cond.Cells[3].Unom_l = cond.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1609};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* cond.Cells[3].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* cond.Unom_l PARAM */);
  threadData->lastEquationSolved = 1609;
}

/*
equation index: 1610
type: SIMPLE_ASSIGN
cond.Cells[3].Mdotnom = cond.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1610};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* cond.Cells[3].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* cond.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1610;
}

/*
equation index: 1611
type: SIMPLE_ASSIGN
cond.Cells[3].Ai = cond.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1611};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[35]] /* cond.Cells[3].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* cond.Ai PARAM */);
  threadData->lastEquationSolved = 1611;
}

/*
equation index: 1612
type: SIMPLE_ASSIGN
cond.Cells[3].Vi = cond.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1612};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Cells[3].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* cond.Vi PARAM */);
  threadData->lastEquationSolved = 1612;
}

/*
equation index: 1613
type: SIMPLE_ASSIGN
cond.Cells[3].Nt = cond.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1613};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* cond.Cells[3].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* cond.Nt PARAM */);
  threadData->lastEquationSolved = 1613;
}

/*
equation index: 1617
type: SIMPLE_ASSIGN
cond.Cells[2].TT = cond.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1617};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* cond.Cells[2].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* cond.TT PARAM */);
  threadData->lastEquationSolved = 1617;
}

/*
equation index: 1618
type: SIMPLE_ASSIGN
cond.Cells[2].max_drhodt = cond.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1618};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[74]] /* cond.Cells[2].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* cond.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1618;
}

/*
equation index: 1623
type: SIMPLE_ASSIGN
cond.Cells[2].hstart = cond.hstart[2]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1623};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[69]] /* cond.Cells[2].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* cond.hstart[2] PARAM */);
  threadData->lastEquationSolved = 1623;
}

/*
equation index: 1624
type: SIMPLE_ASSIGN
cond.Cells[2].pstart = cond.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1624};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[79]] /* cond.Cells[2].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* cond.pstart PARAM */);
  threadData->lastEquationSolved = 1624;
}

/*
equation index: 1625
type: SIMPLE_ASSIGN
cond.Cells[2].Unom_v = cond.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1625};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* cond.Cells[2].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[89]] /* cond.Unom_v PARAM */);
  threadData->lastEquationSolved = 1625;
}

/*
equation index: 1626
type: SIMPLE_ASSIGN
cond.Cells[2].Unom_tp = cond.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1626};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* cond.Cells[2].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* cond.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1626;
}

/*
equation index: 1627
type: SIMPLE_ASSIGN
cond.Cells[2].Unom_l = cond.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1627};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* cond.Cells[2].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* cond.Unom_l PARAM */);
  threadData->lastEquationSolved = 1627;
}

/*
equation index: 1628
type: SIMPLE_ASSIGN
cond.Cells[2].Mdotnom = cond.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1628};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* cond.Cells[2].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* cond.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1628;
}

/*
equation index: 1629
type: SIMPLE_ASSIGN
cond.Cells[2].Ai = cond.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1629};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[34]] /* cond.Cells[2].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* cond.Ai PARAM */);
  threadData->lastEquationSolved = 1629;
}

/*
equation index: 1630
type: SIMPLE_ASSIGN
cond.Cells[2].Vi = cond.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1630};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Cells[2].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* cond.Vi PARAM */);
  threadData->lastEquationSolved = 1630;
}

/*
equation index: 1631
type: SIMPLE_ASSIGN
cond.Cells[2].Nt = cond.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1631};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* cond.Cells[2].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* cond.Nt PARAM */);
  threadData->lastEquationSolved = 1631;
}

/*
equation index: 1635
type: SIMPLE_ASSIGN
cond.Cells[1].TT = cond.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1635};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* cond.Cells[1].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* cond.TT PARAM */);
  threadData->lastEquationSolved = 1635;
}

/*
equation index: 1636
type: SIMPLE_ASSIGN
cond.Cells[1].max_drhodt = cond.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1636};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[73]] /* cond.Cells[1].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* cond.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1636;
}

/*
equation index: 1641
type: SIMPLE_ASSIGN
cond.Cells[1].hstart = cond.hstart[1]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1641};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* cond.Cells[1].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* cond.hstart[1] PARAM */);
  threadData->lastEquationSolved = 1641;
}

/*
equation index: 1642
type: SIMPLE_ASSIGN
cond.Cells[1].pstart = cond.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1642};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* cond.Cells[1].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* cond.pstart PARAM */);
  threadData->lastEquationSolved = 1642;
}

/*
equation index: 1643
type: SIMPLE_ASSIGN
cond.Cells[1].Unom_v = cond.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1643};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* cond.Cells[1].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[89]] /* cond.Unom_v PARAM */);
  threadData->lastEquationSolved = 1643;
}

/*
equation index: 1644
type: SIMPLE_ASSIGN
cond.Cells[1].Unom_tp = cond.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1644};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[53]] /* cond.Cells[1].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* cond.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1644;
}

/*
equation index: 1645
type: SIMPLE_ASSIGN
cond.Cells[1].Unom_l = cond.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1645};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* cond.Cells[1].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* cond.Unom_l PARAM */);
  threadData->lastEquationSolved = 1645;
}

/*
equation index: 1646
type: SIMPLE_ASSIGN
cond.Cells[1].Mdotnom = cond.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1646};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* cond.Cells[1].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* cond.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1646;
}

/*
equation index: 1647
type: SIMPLE_ASSIGN
cond.Cells[1].Ai = cond.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1647};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[33]] /* cond.Cells[1].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* cond.Ai PARAM */);
  threadData->lastEquationSolved = 1647;
}

/*
equation index: 1648
type: SIMPLE_ASSIGN
cond.Cells[1].Vi = cond.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1648};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* cond.Cells[1].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* cond.Vi PARAM */);
  threadData->lastEquationSolved = 1648;
}

/*
equation index: 1649
type: SIMPLE_ASSIGN
cond.Cells[1].Nt = cond.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1649};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[1].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* cond.Nt PARAM */);
  threadData->lastEquationSolved = 1649;
}

/*
equation index: 1657
type: SIMPLE_ASSIGN
comp.p_su_start = p_evap_start
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1657};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* comp.p_su_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[174]] /* p_evap_start PARAM */);
  threadData->lastEquationSolved = 1657;
}

/*
equation index: 1658
type: SIMPLE_ASSIGN
comp.M_dot_start = comp.epsilon_v * comp.V_s * comp.N_rot_start * RefrigerationTrainer.ClosedLoopM1eCS.comp.Medium.setState_pT(comp.p_su_start, comp.T_su_start, 0).d
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1658};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[17]] /* comp.M_dot_start PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* comp.epsilon_v PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* comp.V_s PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* comp.N_rot_start PARAM */)) * (omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__pT(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* comp.p_su_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* comp.T_su_start PARAM */), ((modelica_integer) 0))._d)));
  threadData->lastEquationSolved = 1658;
}

/*
equation index: 1659
type: SIMPLE_ASSIGN
comp.h_valid_max = RefrigerationTrainer.ClosedLoopM1eCS.comp.Medium.setState_pT(comp.p_su_start, 400.0, 0).h
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1659};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* comp.h_valid_max PARAM */) = omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__pT(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* comp.p_su_start PARAM */), 400.0, ((modelica_integer) 0))._h;
  threadData->lastEquationSolved = 1659;
}

/*
equation index: 1661
type: SIMPLE_ASSIGN
comp.p_ex_start = p_cond_start
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1661};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* comp.p_ex_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[173]] /* p_cond_start PARAM */);
  threadData->lastEquationSolved = 1661;
}

/*
equation index: 1662
type: SIMPLE_ASSIGN
comp.T_ex_start = 40.0 + RefrigerationTrainer.ClosedLoopM1eCS.comp.Medium.setSat_p(comp.p_ex_start).Tsat
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1662};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* comp.T_ex_start PARAM */) = 40.0 + omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setSat__p(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* comp.p_ex_start PARAM */))._Tsat;
  threadData->lastEquationSolved = 1662;
}

/*
equation index: 1663
type: SIMPLE_ASSIGN
comp.h_ex_start = RefrigerationTrainer.ClosedLoopM1eCS.comp.Medium.setState_pT(comp.p_ex_start, comp.T_ex_start, 0).h
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1663};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* comp.h_ex_start PARAM */) = omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__pT(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* comp.p_ex_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* comp.T_ex_start PARAM */), ((modelica_integer) 0))._h;
  threadData->lastEquationSolved = 1663;
}

/*
equation index: 1664
type: SIMPLE_ASSIGN
comp.h_su_start = RefrigerationTrainer.ClosedLoopM1eCS.comp.Medium.setState_pT(comp.p_su_start, comp.T_su_start, 0).h
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1664};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* comp.h_su_start PARAM */) = omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__pT(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* comp.p_su_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* comp.T_su_start PARAM */), ((modelica_integer) 0))._h;
  threadData->lastEquationSolved = 1664;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_573(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_572(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_571(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_570(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_569(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_568(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_567(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_566(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_565(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_553(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_785(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_551(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_550(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_548(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_547(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_546(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_545(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_544(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_543(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_542(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_541(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_540(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_539(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_538(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_537(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_549(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_552(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_517(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_152(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_151(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_150(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_149(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_148(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_147(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_146(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_145(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_144(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_143(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_142(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_141(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_140(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_139(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_138(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_137(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_136(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_135(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_134(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_133(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_132(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_131(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_130(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_129(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_128(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_127(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_126(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_125(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_124(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_123(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_122(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_121(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_120(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_119(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_118(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_117(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_116(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_115(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_114(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_113(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_112(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_111(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_110(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_109(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_108(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_107(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_106(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_105(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_104(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_103(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_102(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_101(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_100(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_99(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_98(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_97(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_96(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_95(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_94(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_93(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_92(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_91(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_90(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_89(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_88(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_87(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_86(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_85(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_84(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_83(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_82(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_81(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_80(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_79(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_78(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_77(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_76(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_75(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_74(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_73(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_72(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_71(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_70(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_69(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_68(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_67(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_66(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_65(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_64(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_63(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_62(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_61(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_60(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_59(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_58(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_57(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_56(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_55(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_54(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_53(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_52(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_51(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_50(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_49(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_48(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_47(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_46(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_45(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_44(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_43(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_42(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_41(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_40(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_39(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_38(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_37(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_36(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_35(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_34(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_33(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_32(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_31(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_30(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_29(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_28(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_27(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_26(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_25(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_24(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_23(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_22(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_21(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_20(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_19(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_18(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_17(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_16(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_15(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_14(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_13(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_12(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_11(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_10(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_9(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_8(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_7(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_6(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_5(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_4(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_3(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 1845
type: ALGORITHM

  assert(wall_cond_placeholder.port.N >= 1, "Variable violating min constraint: 1 <= wall_cond_placeholder.port.N, has value: " + String(wall_cond_placeholder.port.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1845};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,81,"Variable violating min constraint: 1 <= wall_cond_placeholder.port.N, has value: ");
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  static int tmp4 = 0;
  if(!tmp4)
  {
    tmp0 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[48]] /* wall_cond_placeholder.port.N PARAM */),((modelica_integer) 1));
    if(!tmp0)
    {
      tmp2 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[48]] /* wall_cond_placeholder.port.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3 = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        const char* assert_cond = "(wall_cond_placeholder.port.N >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3));
        }
      }
      tmp4 = 1;
    }
  }
  threadData->lastEquationSolved = 1845;
}

/*
equation index: 1846
type: ALGORITHM

  assert(wall_evap_placeholder.port.N >= 1, "Variable violating min constraint: 1 <= wall_evap_placeholder.port.N, has value: " + String(wall_evap_placeholder.port.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1846};
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,81,"Variable violating min constraint: 1 <= wall_evap_placeholder.port.N, has value: ");
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  static int tmp9 = 0;
  if(!tmp9)
  {
    tmp5 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[50]] /* wall_evap_placeholder.port.N PARAM */),((modelica_integer) 1));
    if(!tmp5)
    {
      tmp7 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[50]] /* wall_evap_placeholder.port.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta8 = stringAppend(MMC_REFSTRINGLIT(tmp6),tmp7);
      {
        const char* assert_cond = "(wall_evap_placeholder.port.N >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta8));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta8));
        }
      }
      tmp9 = 1;
    }
  }
  threadData->lastEquationSolved = 1846;
}

/*
equation index: 1847
type: ALGORITHM

  assert(coil_cond.port.N >= 1, "Variable violating min constraint: 1 <= coil_cond.port.N, has value: " + String(coil_cond.port.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1847};
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,69,"Variable violating min constraint: 1 <= coil_cond.port.N, has value: ");
  modelica_string tmp12;
  modelica_metatype tmpMeta13;
  static int tmp14 = 0;
  if(!tmp14)
  {
    tmp10 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[2]] /* coil_cond.port.N PARAM */),((modelica_integer) 1));
    if(!tmp10)
    {
      tmp12 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[2]] /* coil_cond.port.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta13 = stringAppend(MMC_REFSTRINGLIT(tmp11),tmp12);
      {
        const char* assert_cond = "(coil_cond.port.N >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta13));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta13));
        }
      }
      tmp14 = 1;
    }
  }
  threadData->lastEquationSolved = 1847;
}

/*
equation index: 1848
type: ALGORITHM

  assert(coil_evap.port.N >= 1, "Variable violating min constraint: 1 <= coil_evap.port.N, has value: " + String(coil_evap.port.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1848};
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,69,"Variable violating min constraint: 1 <= coil_evap.port.N, has value: ");
  modelica_string tmp17;
  modelica_metatype tmpMeta18;
  static int tmp19 = 0;
  if(!tmp19)
  {
    tmp15 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[4]] /* coil_evap.port.N PARAM */),((modelica_integer) 1));
    if(!tmp15)
    {
      tmp17 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[4]] /* coil_evap.port.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta18 = stringAppend(MMC_REFSTRINGLIT(tmp16),tmp17);
      {
        const char* assert_cond = "(coil_evap.port.N >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta18));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta18));
        }
      }
      tmp19 = 1;
    }
  }
  threadData->lastEquationSolved = 1848;
}

/*
equation index: 1849
type: ALGORITHM

  assert(evap.thermalPortConverter.multi.N >= 1, "Variable violating min constraint: 1 <= evap.thermalPortConverter.multi.N, has value: " + String(evap.thermalPortConverter.multi.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1849};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,86,"Variable violating min constraint: 1 <= evap.thermalPortConverter.multi.N, has value: ");
  modelica_string tmp22;
  modelica_metatype tmpMeta23;
  static int tmp24 = 0;
  if(!tmp24)
  {
    tmp20 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[46]] /* evap.thermalPortConverter.multi.N PARAM */),((modelica_integer) 1));
    if(!tmp20)
    {
      tmp22 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[46]] /* evap.thermalPortConverter.multi.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta23 = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        const char* assert_cond = "(evap.thermalPortConverter.multi.N >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta23));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta23));
        }
      }
      tmp24 = 1;
    }
  }
  threadData->lastEquationSolved = 1849;
}

/*
equation index: 1850
type: ALGORITHM

  assert(evap.Cells[5].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[5].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[5].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(evap.Cells[5].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1850};
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  static const MMC_DEFSTRINGLIT(tmp27,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[5].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp28;
  modelica_metatype tmpMeta29;
  static int tmp30 = 0;
  if(!tmp30)
  {
    tmp25 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[5].Discretization PARAM */),1);
    tmp26 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[5].Discretization PARAM */),5);
    if(!(tmp25 && tmp26))
    {
      tmp28 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[5].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta29 = stringAppend(MMC_REFSTRINGLIT(tmp27),tmp28);
      {
        const char* assert_cond = "(evap.Cells[5].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[5].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta29));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta29));
        }
      }
      tmp30 = 1;
    }
  }
  threadData->lastEquationSolved = 1850;
}

/*
equation index: 1851
type: ALGORITHM

  assert(evap.hstart[5] >= -1e10 and evap.hstart[5] <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.hstart[5] <= 1e10, has value: " + String(evap.hstart[5], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1851};
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,83,"Variable violating min/max constraint: -1e10 <= evap.hstart[5] <= 1e10, has value: ");
  modelica_string tmp34;
  modelica_metatype tmpMeta35;
  static int tmp36 = 0;
  if(!tmp36)
  {
    tmp31 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[167]] /* evap.hstart[5] PARAM */),-1e10);
    tmp32 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[167]] /* evap.hstart[5] PARAM */),1e10);
    if(!(tmp31 && tmp32))
    {
      tmp34 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[167]] /* evap.hstart[5] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta35 = stringAppend(MMC_REFSTRINGLIT(tmp33),tmp34);
      {
        const char* assert_cond = "(evap.hstart[5] >= -1e10 and evap.hstart[5] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta35));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta35));
        }
      }
      tmp36 = 1;
    }
  }
  threadData->lastEquationSolved = 1851;
}

/*
equation index: 1852
type: ALGORITHM

  assert(evap.Cells[5].hstart >= -1e10 and evap.Cells[5].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[5].hstart <= 1e10, has value: " + String(evap.Cells[5].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1852};
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  static const MMC_DEFSTRINGLIT(tmp39,89,"Variable violating min/max constraint: -1e10 <= evap.Cells[5].hstart <= 1e10, has value: ");
  modelica_string tmp40;
  modelica_metatype tmpMeta41;
  static int tmp42 = 0;
  if(!tmp42)
  {
    tmp37 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* evap.Cells[5].hstart PARAM */),-1e10);
    tmp38 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* evap.Cells[5].hstart PARAM */),1e10);
    if(!(tmp37 && tmp38))
    {
      tmp40 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* evap.Cells[5].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta41 = stringAppend(MMC_REFSTRINGLIT(tmp39),tmp40);
      {
        const char* assert_cond = "(evap.Cells[5].hstart >= -1e10 and evap.Cells[5].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta41));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta41));
        }
      }
      tmp42 = 1;
    }
  }
  threadData->lastEquationSolved = 1852;
}

/*
equation index: 1853
type: ALGORITHM

  assert(evap.Nt >= 1, "Variable violating min constraint: 1 <= evap.Nt, has value: " + String(evap.Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1853};
  modelica_boolean tmp43;
  static const MMC_DEFSTRINGLIT(tmp44,60,"Variable violating min constraint: 1 <= evap.Nt, has value: ");
  modelica_string tmp45;
  modelica_metatype tmpMeta46;
  static int tmp47 = 0;
  if(!tmp47)
  {
    tmp43 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* evap.Nt PARAM */),((modelica_integer) 1));
    if(!tmp43)
    {
      tmp45 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* evap.Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta46 = stringAppend(MMC_REFSTRINGLIT(tmp44),tmp45);
      {
        const char* assert_cond = "(evap.Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",40,3,40,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta46));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",40,3,40,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta46));
        }
      }
      tmp47 = 1;
    }
  }
  threadData->lastEquationSolved = 1853;
}

/*
equation index: 1854
type: ALGORITHM

  assert(evap.Cells[5].Nt >= 1, "Variable violating min constraint: 1 <= evap.Cells[5].Nt, has value: " + String(evap.Cells[5].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1854};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,69,"Variable violating min constraint: 1 <= evap.Cells[5].Nt, has value: ");
  modelica_string tmp50;
  modelica_metatype tmpMeta51;
  static int tmp52 = 0;
  if(!tmp52)
  {
    tmp48 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[35]] /* evap.Cells[5].Nt PARAM */),((modelica_integer) 1));
    if(!tmp48)
    {
      tmp50 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[35]] /* evap.Cells[5].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta51 = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        const char* assert_cond = "(evap.Cells[5].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta51));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta51));
        }
      }
      tmp52 = 1;
    }
  }
  threadData->lastEquationSolved = 1854;
}

/*
equation index: 1855
type: ALGORITHM

  assert(evap.Cells[4].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[4].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[4].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(evap.Cells[4].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1855};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  static const MMC_DEFSTRINGLIT(tmp55,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[4].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp56;
  modelica_metatype tmpMeta57;
  static int tmp58 = 0;
  if(!tmp58)
  {
    tmp53 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[4].Discretization PARAM */),1);
    tmp54 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[4].Discretization PARAM */),5);
    if(!(tmp53 && tmp54))
    {
      tmp56 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[4].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta57 = stringAppend(MMC_REFSTRINGLIT(tmp55),tmp56);
      {
        const char* assert_cond = "(evap.Cells[4].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[4].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta57));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta57));
        }
      }
      tmp58 = 1;
    }
  }
  threadData->lastEquationSolved = 1855;
}

/*
equation index: 1856
type: ALGORITHM

  assert(evap.hstart[4] >= -1e10 and evap.hstart[4] <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.hstart[4] <= 1e10, has value: " + String(evap.hstart[4], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1856};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  static const MMC_DEFSTRINGLIT(tmp61,83,"Variable violating min/max constraint: -1e10 <= evap.hstart[4] <= 1e10, has value: ");
  modelica_string tmp62;
  modelica_metatype tmpMeta63;
  static int tmp64 = 0;
  if(!tmp64)
  {
    tmp59 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[166]] /* evap.hstart[4] PARAM */),-1e10);
    tmp60 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[166]] /* evap.hstart[4] PARAM */),1e10);
    if(!(tmp59 && tmp60))
    {
      tmp62 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[166]] /* evap.hstart[4] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta63 = stringAppend(MMC_REFSTRINGLIT(tmp61),tmp62);
      {
        const char* assert_cond = "(evap.hstart[4] >= -1e10 and evap.hstart[4] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta63));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta63));
        }
      }
      tmp64 = 1;
    }
  }
  threadData->lastEquationSolved = 1856;
}

/*
equation index: 1857
type: ALGORITHM

  assert(evap.Cells[4].hstart >= -1e10 and evap.Cells[4].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[4].hstart <= 1e10, has value: " + String(evap.Cells[4].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1857};
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  static const MMC_DEFSTRINGLIT(tmp67,89,"Variable violating min/max constraint: -1e10 <= evap.Cells[4].hstart <= 1e10, has value: ");
  modelica_string tmp68;
  modelica_metatype tmpMeta69;
  static int tmp70 = 0;
  if(!tmp70)
  {
    tmp65 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* evap.Cells[4].hstart PARAM */),-1e10);
    tmp66 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* evap.Cells[4].hstart PARAM */),1e10);
    if(!(tmp65 && tmp66))
    {
      tmp68 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* evap.Cells[4].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta69 = stringAppend(MMC_REFSTRINGLIT(tmp67),tmp68);
      {
        const char* assert_cond = "(evap.Cells[4].hstart >= -1e10 and evap.Cells[4].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta69));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta69));
        }
      }
      tmp70 = 1;
    }
  }
  threadData->lastEquationSolved = 1857;
}

/*
equation index: 1858
type: ALGORITHM

  assert(evap.Cells[4].Nt >= 1, "Variable violating min constraint: 1 <= evap.Cells[4].Nt, has value: " + String(evap.Cells[4].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1858};
  modelica_boolean tmp71;
  static const MMC_DEFSTRINGLIT(tmp72,69,"Variable violating min constraint: 1 <= evap.Cells[4].Nt, has value: ");
  modelica_string tmp73;
  modelica_metatype tmpMeta74;
  static int tmp75 = 0;
  if(!tmp75)
  {
    tmp71 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* evap.Cells[4].Nt PARAM */),((modelica_integer) 1));
    if(!tmp71)
    {
      tmp73 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* evap.Cells[4].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta74 = stringAppend(MMC_REFSTRINGLIT(tmp72),tmp73);
      {
        const char* assert_cond = "(evap.Cells[4].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta74));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta74));
        }
      }
      tmp75 = 1;
    }
  }
  threadData->lastEquationSolved = 1858;
}

/*
equation index: 1859
type: ALGORITHM

  assert(evap.Cells[3].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[3].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[3].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(evap.Cells[3].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1859};
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  static const MMC_DEFSTRINGLIT(tmp78,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[3].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp79;
  modelica_metatype tmpMeta80;
  static int tmp81 = 0;
  if(!tmp81)
  {
    tmp76 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[3].Discretization PARAM */),1);
    tmp77 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[3].Discretization PARAM */),5);
    if(!(tmp76 && tmp77))
    {
      tmp79 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[3].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta80 = stringAppend(MMC_REFSTRINGLIT(tmp78),tmp79);
      {
        const char* assert_cond = "(evap.Cells[3].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[3].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta80));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta80));
        }
      }
      tmp81 = 1;
    }
  }
  threadData->lastEquationSolved = 1859;
}

/*
equation index: 1860
type: ALGORITHM

  assert(evap.hstart[3] >= -1e10 and evap.hstart[3] <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.hstart[3] <= 1e10, has value: " + String(evap.hstart[3], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1860};
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  static const MMC_DEFSTRINGLIT(tmp84,83,"Variable violating min/max constraint: -1e10 <= evap.hstart[3] <= 1e10, has value: ");
  modelica_string tmp85;
  modelica_metatype tmpMeta86;
  static int tmp87 = 0;
  if(!tmp87)
  {
    tmp82 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[165]] /* evap.hstart[3] PARAM */),-1e10);
    tmp83 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[165]] /* evap.hstart[3] PARAM */),1e10);
    if(!(tmp82 && tmp83))
    {
      tmp85 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[165]] /* evap.hstart[3] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta86 = stringAppend(MMC_REFSTRINGLIT(tmp84),tmp85);
      {
        const char* assert_cond = "(evap.hstart[3] >= -1e10 and evap.hstart[3] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta86));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta86));
        }
      }
      tmp87 = 1;
    }
  }
  threadData->lastEquationSolved = 1860;
}

/*
equation index: 1861
type: ALGORITHM

  assert(evap.Cells[3].hstart >= -1e10 and evap.Cells[3].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[3].hstart <= 1e10, has value: " + String(evap.Cells[3].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1861};
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  static const MMC_DEFSTRINGLIT(tmp90,89,"Variable violating min/max constraint: -1e10 <= evap.Cells[3].hstart <= 1e10, has value: ");
  modelica_string tmp91;
  modelica_metatype tmpMeta92;
  static int tmp93 = 0;
  if(!tmp93)
  {
    tmp88 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* evap.Cells[3].hstart PARAM */),-1e10);
    tmp89 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* evap.Cells[3].hstart PARAM */),1e10);
    if(!(tmp88 && tmp89))
    {
      tmp91 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* evap.Cells[3].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta92 = stringAppend(MMC_REFSTRINGLIT(tmp90),tmp91);
      {
        const char* assert_cond = "(evap.Cells[3].hstart >= -1e10 and evap.Cells[3].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta92));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta92));
        }
      }
      tmp93 = 1;
    }
  }
  threadData->lastEquationSolved = 1861;
}

/*
equation index: 1862
type: ALGORITHM

  assert(evap.Cells[3].Nt >= 1, "Variable violating min constraint: 1 <= evap.Cells[3].Nt, has value: " + String(evap.Cells[3].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1862};
  modelica_boolean tmp94;
  static const MMC_DEFSTRINGLIT(tmp95,69,"Variable violating min constraint: 1 <= evap.Cells[3].Nt, has value: ");
  modelica_string tmp96;
  modelica_metatype tmpMeta97;
  static int tmp98 = 0;
  if(!tmp98)
  {
    tmp94 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* evap.Cells[3].Nt PARAM */),((modelica_integer) 1));
    if(!tmp94)
    {
      tmp96 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* evap.Cells[3].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta97 = stringAppend(MMC_REFSTRINGLIT(tmp95),tmp96);
      {
        const char* assert_cond = "(evap.Cells[3].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta97));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta97));
        }
      }
      tmp98 = 1;
    }
  }
  threadData->lastEquationSolved = 1862;
}

/*
equation index: 1863
type: ALGORITHM

  assert(evap.Cells[2].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[2].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[2].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(evap.Cells[2].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1863};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  static const MMC_DEFSTRINGLIT(tmp101,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[2].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp102;
  modelica_metatype tmpMeta103;
  static int tmp104 = 0;
  if(!tmp104)
  {
    tmp99 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[27]] /* evap.Cells[2].Discretization PARAM */),1);
    tmp100 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[27]] /* evap.Cells[2].Discretization PARAM */),5);
    if(!(tmp99 && tmp100))
    {
      tmp102 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[27]] /* evap.Cells[2].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta103 = stringAppend(MMC_REFSTRINGLIT(tmp101),tmp102);
      {
        const char* assert_cond = "(evap.Cells[2].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[2].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta103));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta103));
        }
      }
      tmp104 = 1;
    }
  }
  threadData->lastEquationSolved = 1863;
}

/*
equation index: 1864
type: ALGORITHM

  assert(evap.hstart[2] >= -1e10 and evap.hstart[2] <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.hstart[2] <= 1e10, has value: " + String(evap.hstart[2], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1864};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  static const MMC_DEFSTRINGLIT(tmp107,83,"Variable violating min/max constraint: -1e10 <= evap.hstart[2] <= 1e10, has value: ");
  modelica_string tmp108;
  modelica_metatype tmpMeta109;
  static int tmp110 = 0;
  if(!tmp110)
  {
    tmp105 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[164]] /* evap.hstart[2] PARAM */),-1e10);
    tmp106 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[164]] /* evap.hstart[2] PARAM */),1e10);
    if(!(tmp105 && tmp106))
    {
      tmp108 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[164]] /* evap.hstart[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta109 = stringAppend(MMC_REFSTRINGLIT(tmp107),tmp108);
      {
        const char* assert_cond = "(evap.hstart[2] >= -1e10 and evap.hstart[2] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta109));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta109));
        }
      }
      tmp110 = 1;
    }
  }
  threadData->lastEquationSolved = 1864;
}

/*
equation index: 1865
type: ALGORITHM

  assert(evap.Cells[2].hstart >= -1e10 and evap.Cells[2].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[2].hstart <= 1e10, has value: " + String(evap.Cells[2].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1865};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  static const MMC_DEFSTRINGLIT(tmp113,89,"Variable violating min/max constraint: -1e10 <= evap.Cells[2].hstart <= 1e10, has value: ");
  modelica_string tmp114;
  modelica_metatype tmpMeta115;
  static int tmp116 = 0;
  if(!tmp116)
  {
    tmp111 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* evap.Cells[2].hstart PARAM */),-1e10);
    tmp112 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* evap.Cells[2].hstart PARAM */),1e10);
    if(!(tmp111 && tmp112))
    {
      tmp114 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* evap.Cells[2].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta115 = stringAppend(MMC_REFSTRINGLIT(tmp113),tmp114);
      {
        const char* assert_cond = "(evap.Cells[2].hstart >= -1e10 and evap.Cells[2].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta115));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta115));
        }
      }
      tmp116 = 1;
    }
  }
  threadData->lastEquationSolved = 1865;
}

/*
equation index: 1866
type: ALGORITHM

  assert(evap.Cells[2].Nt >= 1, "Variable violating min constraint: 1 <= evap.Cells[2].Nt, has value: " + String(evap.Cells[2].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1866};
  modelica_boolean tmp117;
  static const MMC_DEFSTRINGLIT(tmp118,69,"Variable violating min constraint: 1 <= evap.Cells[2].Nt, has value: ");
  modelica_string tmp119;
  modelica_metatype tmpMeta120;
  static int tmp121 = 0;
  if(!tmp121)
  {
    tmp117 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* evap.Cells[2].Nt PARAM */),((modelica_integer) 1));
    if(!tmp117)
    {
      tmp119 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* evap.Cells[2].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta120 = stringAppend(MMC_REFSTRINGLIT(tmp118),tmp119);
      {
        const char* assert_cond = "(evap.Cells[2].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta120));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta120));
        }
      }
      tmp121 = 1;
    }
  }
  threadData->lastEquationSolved = 1866;
}

/*
equation index: 1867
type: ALGORITHM

  assert(evap.Cells[1].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[1].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[1].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(evap.Cells[1].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1867};
  modelica_boolean tmp122;
  modelica_boolean tmp123;
  static const MMC_DEFSTRINGLIT(tmp124,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[1].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp125;
  modelica_metatype tmpMeta126;
  static int tmp127 = 0;
  if(!tmp127)
  {
    tmp122 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[26]] /* evap.Cells[1].Discretization PARAM */),1);
    tmp123 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[26]] /* evap.Cells[1].Discretization PARAM */),5);
    if(!(tmp122 && tmp123))
    {
      tmp125 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[26]] /* evap.Cells[1].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta126 = stringAppend(MMC_REFSTRINGLIT(tmp124),tmp125);
      {
        const char* assert_cond = "(evap.Cells[1].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[1].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta126));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta126));
        }
      }
      tmp127 = 1;
    }
  }
  threadData->lastEquationSolved = 1867;
}

/*
equation index: 1868
type: ALGORITHM

  assert(evap.hstart[1] >= -1e10 and evap.hstart[1] <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.hstart[1] <= 1e10, has value: " + String(evap.hstart[1], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1868};
  modelica_boolean tmp128;
  modelica_boolean tmp129;
  static const MMC_DEFSTRINGLIT(tmp130,83,"Variable violating min/max constraint: -1e10 <= evap.hstart[1] <= 1e10, has value: ");
  modelica_string tmp131;
  modelica_metatype tmpMeta132;
  static int tmp133 = 0;
  if(!tmp133)
  {
    tmp128 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[163]] /* evap.hstart[1] PARAM */),-1e10);
    tmp129 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[163]] /* evap.hstart[1] PARAM */),1e10);
    if(!(tmp128 && tmp129))
    {
      tmp131 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[163]] /* evap.hstart[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta132 = stringAppend(MMC_REFSTRINGLIT(tmp130),tmp131);
      {
        const char* assert_cond = "(evap.hstart[1] >= -1e10 and evap.hstart[1] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta132));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta132));
        }
      }
      tmp133 = 1;
    }
  }
  threadData->lastEquationSolved = 1868;
}

/*
equation index: 1869
type: ALGORITHM

  assert(evap.Cells[1].hstart >= -1e10 and evap.Cells[1].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[1].hstart <= 1e10, has value: " + String(evap.Cells[1].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1869};
  modelica_boolean tmp134;
  modelica_boolean tmp135;
  static const MMC_DEFSTRINGLIT(tmp136,89,"Variable violating min/max constraint: -1e10 <= evap.Cells[1].hstart <= 1e10, has value: ");
  modelica_string tmp137;
  modelica_metatype tmpMeta138;
  static int tmp139 = 0;
  if(!tmp139)
  {
    tmp134 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* evap.Cells[1].hstart PARAM */),-1e10);
    tmp135 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* evap.Cells[1].hstart PARAM */),1e10);
    if(!(tmp134 && tmp135))
    {
      tmp137 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* evap.Cells[1].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta138 = stringAppend(MMC_REFSTRINGLIT(tmp136),tmp137);
      {
        const char* assert_cond = "(evap.Cells[1].hstart >= -1e10 and evap.Cells[1].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta138));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta138));
        }
      }
      tmp139 = 1;
    }
  }
  threadData->lastEquationSolved = 1869;
}

/*
equation index: 1870
type: ALGORITHM

  assert(evap.Cells[1].Nt >= 1, "Variable violating min constraint: 1 <= evap.Cells[1].Nt, has value: " + String(evap.Cells[1].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1870};
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,69,"Variable violating min constraint: 1 <= evap.Cells[1].Nt, has value: ");
  modelica_string tmp142;
  modelica_metatype tmpMeta143;
  static int tmp144 = 0;
  if(!tmp144)
  {
    tmp140 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[1].Nt PARAM */),((modelica_integer) 1));
    if(!tmp140)
    {
      tmp142 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[1].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta143 = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        const char* assert_cond = "(evap.Cells[1].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta143));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta143));
        }
      }
      tmp144 = 1;
    }
  }
  threadData->lastEquationSolved = 1870;
}

/*
equation index: 1871
type: ALGORITHM

  assert(evap.Wall_int.N >= 1, "Variable violating min constraint: 1 <= evap.Wall_int.N, has value: " + String(evap.Wall_int.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1871};
  modelica_boolean tmp145;
  static const MMC_DEFSTRINGLIT(tmp146,68,"Variable violating min constraint: 1 <= evap.Wall_int.N, has value: ");
  modelica_string tmp147;
  modelica_metatype tmpMeta148;
  static int tmp149 = 0;
  if(!tmp149)
  {
    tmp145 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[44]] /* evap.Wall_int.N PARAM */),((modelica_integer) 1));
    if(!tmp145)
    {
      tmp147 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[44]] /* evap.Wall_int.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta148 = stringAppend(MMC_REFSTRINGLIT(tmp146),tmp147);
      {
        const char* assert_cond = "(evap.Wall_int.N >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta148));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta148));
        }
      }
      tmp149 = 1;
    }
  }
  threadData->lastEquationSolved = 1871;
}

/*
equation index: 1872
type: ALGORITHM

  assert(evap.Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(evap.Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1872};
  modelica_boolean tmp150;
  modelica_boolean tmp151;
  static const MMC_DEFSTRINGLIT(tmp152,204,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp153;
  modelica_metatype tmpMeta154;
  static int tmp155 = 0;
  if(!tmp155)
  {
    tmp150 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[41]] /* evap.Discretization PARAM */),1);
    tmp151 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[41]] /* evap.Discretization PARAM */),5);
    if(!(tmp150 && tmp151))
    {
      tmp153 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[41]] /* evap.Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta154 = stringAppend(MMC_REFSTRINGLIT(tmp152),tmp153);
      {
        const char* assert_cond = "(evap.Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",74,3,77,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta154));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",74,3,77,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta154));
        }
      }
      tmp155 = 1;
    }
  }
  threadData->lastEquationSolved = 1872;
}

/*
equation index: 1873
type: ALGORITHM

  assert(evap.Tstart_outlet >= 1.0 and evap.Tstart_outlet <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Tstart_outlet <= 1e4, has value: " + String(evap.Tstart_outlet, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1873};
  modelica_boolean tmp156;
  modelica_boolean tmp157;
  static const MMC_DEFSTRINGLIT(tmp158,84,"Variable violating min/max constraint: 1.0 <= evap.Tstart_outlet <= 1e4, has value: ");
  modelica_string tmp159;
  modelica_metatype tmpMeta160;
  static int tmp161 = 0;
  if(!tmp161)
  {
    tmp156 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[157]] /* evap.Tstart_outlet PARAM */),1.0);
    tmp157 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[157]] /* evap.Tstart_outlet PARAM */),1e4);
    if(!(tmp156 && tmp157))
    {
      tmp159 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[157]] /* evap.Tstart_outlet PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta160 = stringAppend(MMC_REFSTRINGLIT(tmp158),tmp159);
      {
        const char* assert_cond = "(evap.Tstart_outlet >= 1.0 and evap.Tstart_outlet <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",62,3,63,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta160));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",62,3,63,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta160));
        }
      }
      tmp161 = 1;
    }
  }
  threadData->lastEquationSolved = 1873;
}

/*
equation index: 1874
type: ALGORITHM

  assert(evap.Tstart_inlet >= 1.0 and evap.Tstart_inlet <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Tstart_inlet <= 1e4, has value: " + String(evap.Tstart_inlet, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1874};
  modelica_boolean tmp162;
  modelica_boolean tmp163;
  static const MMC_DEFSTRINGLIT(tmp164,83,"Variable violating min/max constraint: 1.0 <= evap.Tstart_inlet <= 1e4, has value: ");
  modelica_string tmp165;
  modelica_metatype tmpMeta166;
  static int tmp167 = 0;
  if(!tmp167)
  {
    tmp162 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* evap.Tstart_inlet PARAM */),1.0);
    tmp163 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* evap.Tstart_inlet PARAM */),1e4);
    if(!(tmp162 && tmp163))
    {
      tmp165 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* evap.Tstart_inlet PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta166 = stringAppend(MMC_REFSTRINGLIT(tmp164),tmp165);
      {
        const char* assert_cond = "(evap.Tstart_inlet >= 1.0 and evap.Tstart_inlet <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",60,3,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta166));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",60,3,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta166));
        }
      }
      tmp167 = 1;
    }
  }
  threadData->lastEquationSolved = 1874;
}

/*
equation index: 1875
type: ALGORITHM

  assert(evap.N >= 1, "Variable violating min constraint: 1 <= evap.N, has value: " + String(evap.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1875};
  modelica_boolean tmp168;
  static const MMC_DEFSTRINGLIT(tmp169,59,"Variable violating min constraint: 1 <= evap.N, has value: ");
  modelica_string tmp170;
  modelica_metatype tmpMeta171;
  static int tmp172 = 0;
  if(!tmp172)
  {
    tmp168 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[42]] /* evap.N PARAM */),((modelica_integer) 1));
    if(!tmp168)
    {
      tmp170 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[42]] /* evap.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta171 = stringAppend(MMC_REFSTRINGLIT(tmp169),tmp170);
      {
        const char* assert_cond = "(evap.N >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",39,3,39,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta171));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",39,3,39,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta171));
        }
      }
      tmp172 = 1;
    }
  }
  threadData->lastEquationSolved = 1875;
}

/*
equation index: 1876
type: ALGORITHM

  assert(txv.T_nom >= 0.0, "Variable violating min constraint: 0.0 <= txv.T_nom, has value: " + String(txv.T_nom, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1876};
  modelica_boolean tmp173;
  static const MMC_DEFSTRINGLIT(tmp174,64,"Variable violating min constraint: 0.0 <= txv.T_nom, has value: ");
  modelica_string tmp175;
  modelica_metatype tmpMeta176;
  static int tmp177 = 0;
  if(!tmp177)
  {
    tmp173 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[181]] /* txv.T_nom PARAM */),0.0);
    if(!tmp173)
    {
      tmp175 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[181]] /* txv.T_nom PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta176 = stringAppend(MMC_REFSTRINGLIT(tmp174),tmp175);
      {
        const char* assert_cond = "(txv.T_nom >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",27,3,29,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta176));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",27,3,29,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta176));
        }
      }
      tmp177 = 1;
    }
  }
  threadData->lastEquationSolved = 1876;
}

/*
equation index: 1877
type: ALGORITHM

  assert(txv.rho_nom >= 0.0, "Variable violating min constraint: 0.0 <= txv.rho_nom, has value: " + String(txv.rho_nom, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1877};
  modelica_boolean tmp178;
  static const MMC_DEFSTRINGLIT(tmp179,66,"Variable violating min constraint: 0.0 <= txv.rho_nom, has value: ");
  modelica_string tmp180;
  modelica_metatype tmpMeta181;
  static int tmp182 = 0;
  if(!tmp182)
  {
    tmp178 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[184]] /* txv.rho_nom PARAM */),0.0);
    if(!tmp178)
    {
      tmp180 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[184]] /* txv.rho_nom PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta181 = stringAppend(MMC_REFSTRINGLIT(tmp179),tmp180);
      {
        const char* assert_cond = "(txv.rho_nom >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",30,3,32,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta181));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",30,3,32,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta181));
        }
      }
      tmp182 = 1;
    }
  }
  threadData->lastEquationSolved = 1877;
}

/*
equation index: 1878
type: ALGORITHM

  assert(txv.Xopen >= 0.0 and txv.Xopen <= 1.0, "Variable violating min/max constraint: 0.0 <= txv.Xopen <= 1.0, has value: " + String(txv.Xopen, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1878};
  modelica_boolean tmp183;
  modelica_boolean tmp184;
  static const MMC_DEFSTRINGLIT(tmp185,75,"Variable violating min/max constraint: 0.0 <= txv.Xopen <= 1.0, has value: ");
  modelica_string tmp186;
  modelica_metatype tmpMeta187;
  static int tmp188 = 0;
  if(!tmp188)
  {
    tmp183 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[182]] /* txv.Xopen PARAM */),0.0);
    tmp184 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[182]] /* txv.Xopen PARAM */),1.0);
    if(!(tmp183 && tmp184))
    {
      tmp186 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[182]] /* txv.Xopen PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta187 = stringAppend(MMC_REFSTRINGLIT(tmp185),tmp186);
      {
        const char* assert_cond = "(txv.Xopen >= 0.0 and txv.Xopen <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",16,3,19,87,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta187));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",16,3,19,87,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta187));
        }
      }
      tmp188 = 1;
    }
  }
  threadData->lastEquationSolved = 1878;
}

/*
equation index: 1879
type: ALGORITHM

  assert(cond.thermalPortConverter.multi.N >= 1, "Variable violating min constraint: 1 <= cond.thermalPortConverter.multi.N, has value: " + String(cond.thermalPortConverter.multi.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1879};
  modelica_boolean tmp189;
  static const MMC_DEFSTRINGLIT(tmp190,86,"Variable violating min constraint: 1 <= cond.thermalPortConverter.multi.N, has value: ");
  modelica_string tmp191;
  modelica_metatype tmpMeta192;
  static int tmp193 = 0;
  if(!tmp193)
  {
    tmp189 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* cond.thermalPortConverter.multi.N PARAM */),((modelica_integer) 1));
    if(!tmp189)
    {
      tmp191 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* cond.thermalPortConverter.multi.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta192 = stringAppend(MMC_REFSTRINGLIT(tmp190),tmp191);
      {
        const char* assert_cond = "(cond.thermalPortConverter.multi.N >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta192));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta192));
        }
      }
      tmp193 = 1;
    }
  }
  threadData->lastEquationSolved = 1879;
}

/*
equation index: 1880
type: ALGORITHM

  assert(cond.Cells[5].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[5].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[5].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(cond.Cells[5].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1880};
  modelica_boolean tmp194;
  modelica_boolean tmp195;
  static const MMC_DEFSTRINGLIT(tmp196,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[5].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp197;
  modelica_metatype tmpMeta198;
  static int tmp199 = 0;
  if(!tmp199)
  {
    tmp194 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[5].Discretization PARAM */),1);
    tmp195 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[5].Discretization PARAM */),5);
    if(!(tmp194 && tmp195))
    {
      tmp197 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[5].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta198 = stringAppend(MMC_REFSTRINGLIT(tmp196),tmp197);
      {
        const char* assert_cond = "(cond.Cells[5].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[5].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta198));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta198));
        }
      }
      tmp199 = 1;
    }
  }
  threadData->lastEquationSolved = 1880;
}

/*
equation index: 1881
type: ALGORITHM

  assert(cond.hstart[5] >= -1e10 and cond.hstart[5] <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.hstart[5] <= 1e10, has value: " + String(cond.hstart[5], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1881};
  modelica_boolean tmp200;
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,83,"Variable violating min/max constraint: -1e10 <= cond.hstart[5] <= 1e10, has value: ");
  modelica_string tmp203;
  modelica_metatype tmpMeta204;
  static int tmp205 = 0;
  if(!tmp205)
  {
    tmp200 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* cond.hstart[5] PARAM */),-1e10);
    tmp201 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* cond.hstart[5] PARAM */),1e10);
    if(!(tmp200 && tmp201))
    {
      tmp203 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* cond.hstart[5] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta204 = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      {
        const char* assert_cond = "(cond.hstart[5] >= -1e10 and cond.hstart[5] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta204));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta204));
        }
      }
      tmp205 = 1;
    }
  }
  threadData->lastEquationSolved = 1881;
}

/*
equation index: 1882
type: ALGORITHM

  assert(cond.Cells[5].hstart >= -1e10 and cond.Cells[5].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[5].hstart <= 1e10, has value: " + String(cond.Cells[5].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1882};
  modelica_boolean tmp206;
  modelica_boolean tmp207;
  static const MMC_DEFSTRINGLIT(tmp208,89,"Variable violating min/max constraint: -1e10 <= cond.Cells[5].hstart <= 1e10, has value: ");
  modelica_string tmp209;
  modelica_metatype tmpMeta210;
  static int tmp211 = 0;
  if(!tmp211)
  {
    tmp206 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[72]] /* cond.Cells[5].hstart PARAM */),-1e10);
    tmp207 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[72]] /* cond.Cells[5].hstart PARAM */),1e10);
    if(!(tmp206 && tmp207))
    {
      tmp209 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[72]] /* cond.Cells[5].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta210 = stringAppend(MMC_REFSTRINGLIT(tmp208),tmp209);
      {
        const char* assert_cond = "(cond.Cells[5].hstart >= -1e10 and cond.Cells[5].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta210));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta210));
        }
      }
      tmp211 = 1;
    }
  }
  threadData->lastEquationSolved = 1882;
}

/*
equation index: 1883
type: ALGORITHM

  assert(cond.Nt >= 1, "Variable violating min constraint: 1 <= cond.Nt, has value: " + String(cond.Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1883};
  modelica_boolean tmp212;
  static const MMC_DEFSTRINGLIT(tmp213,60,"Variable violating min constraint: 1 <= cond.Nt, has value: ");
  modelica_string tmp214;
  modelica_metatype tmpMeta215;
  static int tmp216 = 0;
  if(!tmp216)
  {
    tmp212 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* cond.Nt PARAM */),((modelica_integer) 1));
    if(!tmp212)
    {
      tmp214 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* cond.Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta215 = stringAppend(MMC_REFSTRINGLIT(tmp213),tmp214);
      {
        const char* assert_cond = "(cond.Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",40,3,40,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta215));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",40,3,40,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta215));
        }
      }
      tmp216 = 1;
    }
  }
  threadData->lastEquationSolved = 1883;
}

/*
equation index: 1884
type: ALGORITHM

  assert(cond.Cells[5].Nt >= 1, "Variable violating min constraint: 1 <= cond.Cells[5].Nt, has value: " + String(cond.Cells[5].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1884};
  modelica_boolean tmp217;
  static const MMC_DEFSTRINGLIT(tmp218,69,"Variable violating min constraint: 1 <= cond.Cells[5].Nt, has value: ");
  modelica_string tmp219;
  modelica_metatype tmpMeta220;
  static int tmp221 = 0;
  if(!tmp221)
  {
    tmp217 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* cond.Cells[5].Nt PARAM */),((modelica_integer) 1));
    if(!tmp217)
    {
      tmp219 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* cond.Cells[5].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta220 = stringAppend(MMC_REFSTRINGLIT(tmp218),tmp219);
      {
        const char* assert_cond = "(cond.Cells[5].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta220));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta220));
        }
      }
      tmp221 = 1;
    }
  }
  threadData->lastEquationSolved = 1884;
}

/*
equation index: 1885
type: ALGORITHM

  assert(cond.Cells[4].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[4].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[4].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(cond.Cells[4].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1885};
  modelica_boolean tmp222;
  modelica_boolean tmp223;
  static const MMC_DEFSTRINGLIT(tmp224,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[4].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp225;
  modelica_metatype tmpMeta226;
  static int tmp227 = 0;
  if(!tmp227)
  {
    tmp222 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[4].Discretization PARAM */),1);
    tmp223 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[4].Discretization PARAM */),5);
    if(!(tmp222 && tmp223))
    {
      tmp225 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[4].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta226 = stringAppend(MMC_REFSTRINGLIT(tmp224),tmp225);
      {
        const char* assert_cond = "(cond.Cells[4].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[4].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta226));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta226));
        }
      }
      tmp227 = 1;
    }
  }
  threadData->lastEquationSolved = 1885;
}

/*
equation index: 1886
type: ALGORITHM

  assert(cond.hstart[4] >= -1e10 and cond.hstart[4] <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.hstart[4] <= 1e10, has value: " + String(cond.hstart[4], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1886};
  modelica_boolean tmp228;
  modelica_boolean tmp229;
  static const MMC_DEFSTRINGLIT(tmp230,83,"Variable violating min/max constraint: -1e10 <= cond.hstart[4] <= 1e10, has value: ");
  modelica_string tmp231;
  modelica_metatype tmpMeta232;
  static int tmp233 = 0;
  if(!tmp233)
  {
    tmp228 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* cond.hstart[4] PARAM */),-1e10);
    tmp229 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* cond.hstart[4] PARAM */),1e10);
    if(!(tmp228 && tmp229))
    {
      tmp231 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* cond.hstart[4] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta232 = stringAppend(MMC_REFSTRINGLIT(tmp230),tmp231);
      {
        const char* assert_cond = "(cond.hstart[4] >= -1e10 and cond.hstart[4] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta232));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta232));
        }
      }
      tmp233 = 1;
    }
  }
  threadData->lastEquationSolved = 1886;
}

/*
equation index: 1887
type: ALGORITHM

  assert(cond.Cells[4].hstart >= -1e10 and cond.Cells[4].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[4].hstart <= 1e10, has value: " + String(cond.Cells[4].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1887};
  modelica_boolean tmp234;
  modelica_boolean tmp235;
  static const MMC_DEFSTRINGLIT(tmp236,89,"Variable violating min/max constraint: -1e10 <= cond.Cells[4].hstart <= 1e10, has value: ");
  modelica_string tmp237;
  modelica_metatype tmpMeta238;
  static int tmp239 = 0;
  if(!tmp239)
  {
    tmp234 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* cond.Cells[4].hstart PARAM */),-1e10);
    tmp235 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* cond.Cells[4].hstart PARAM */),1e10);
    if(!(tmp234 && tmp235))
    {
      tmp237 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* cond.Cells[4].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta238 = stringAppend(MMC_REFSTRINGLIT(tmp236),tmp237);
      {
        const char* assert_cond = "(cond.Cells[4].hstart >= -1e10 and cond.Cells[4].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta238));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta238));
        }
      }
      tmp239 = 1;
    }
  }
  threadData->lastEquationSolved = 1887;
}

/*
equation index: 1888
type: ALGORITHM

  assert(cond.Cells[4].Nt >= 1, "Variable violating min constraint: 1 <= cond.Cells[4].Nt, has value: " + String(cond.Cells[4].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1888};
  modelica_boolean tmp240;
  static const MMC_DEFSTRINGLIT(tmp241,69,"Variable violating min constraint: 1 <= cond.Cells[4].Nt, has value: ");
  modelica_string tmp242;
  modelica_metatype tmpMeta243;
  static int tmp244 = 0;
  if(!tmp244)
  {
    tmp240 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* cond.Cells[4].Nt PARAM */),((modelica_integer) 1));
    if(!tmp240)
    {
      tmp242 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* cond.Cells[4].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta243 = stringAppend(MMC_REFSTRINGLIT(tmp241),tmp242);
      {
        const char* assert_cond = "(cond.Cells[4].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta243));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta243));
        }
      }
      tmp244 = 1;
    }
  }
  threadData->lastEquationSolved = 1888;
}

/*
equation index: 1889
type: ALGORITHM

  assert(cond.Cells[3].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[3].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[3].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(cond.Cells[3].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1889};
  modelica_boolean tmp245;
  modelica_boolean tmp246;
  static const MMC_DEFSTRINGLIT(tmp247,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[3].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp248;
  modelica_metatype tmpMeta249;
  static int tmp250 = 0;
  if(!tmp250)
  {
    tmp245 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[3].Discretization PARAM */),1);
    tmp246 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[3].Discretization PARAM */),5);
    if(!(tmp245 && tmp246))
    {
      tmp248 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[3].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta249 = stringAppend(MMC_REFSTRINGLIT(tmp247),tmp248);
      {
        const char* assert_cond = "(cond.Cells[3].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[3].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta249));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta249));
        }
      }
      tmp250 = 1;
    }
  }
  threadData->lastEquationSolved = 1889;
}

/*
equation index: 1890
type: ALGORITHM

  assert(cond.hstart[3] >= -1e10 and cond.hstart[3] <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.hstart[3] <= 1e10, has value: " + String(cond.hstart[3], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1890};
  modelica_boolean tmp251;
  modelica_boolean tmp252;
  static const MMC_DEFSTRINGLIT(tmp253,83,"Variable violating min/max constraint: -1e10 <= cond.hstart[3] <= 1e10, has value: ");
  modelica_string tmp254;
  modelica_metatype tmpMeta255;
  static int tmp256 = 0;
  if(!tmp256)
  {
    tmp251 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* cond.hstart[3] PARAM */),-1e10);
    tmp252 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* cond.hstart[3] PARAM */),1e10);
    if(!(tmp251 && tmp252))
    {
      tmp254 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* cond.hstart[3] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta255 = stringAppend(MMC_REFSTRINGLIT(tmp253),tmp254);
      {
        const char* assert_cond = "(cond.hstart[3] >= -1e10 and cond.hstart[3] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta255));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta255));
        }
      }
      tmp256 = 1;
    }
  }
  threadData->lastEquationSolved = 1890;
}

/*
equation index: 1891
type: ALGORITHM

  assert(cond.Cells[3].hstart >= -1e10 and cond.Cells[3].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[3].hstart <= 1e10, has value: " + String(cond.Cells[3].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1891};
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  static const MMC_DEFSTRINGLIT(tmp259,89,"Variable violating min/max constraint: -1e10 <= cond.Cells[3].hstart <= 1e10, has value: ");
  modelica_string tmp260;
  modelica_metatype tmpMeta261;
  static int tmp262 = 0;
  if(!tmp262)
  {
    tmp257 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* cond.Cells[3].hstart PARAM */),-1e10);
    tmp258 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* cond.Cells[3].hstart PARAM */),1e10);
    if(!(tmp257 && tmp258))
    {
      tmp260 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* cond.Cells[3].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta261 = stringAppend(MMC_REFSTRINGLIT(tmp259),tmp260);
      {
        const char* assert_cond = "(cond.Cells[3].hstart >= -1e10 and cond.Cells[3].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta261));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta261));
        }
      }
      tmp262 = 1;
    }
  }
  threadData->lastEquationSolved = 1891;
}

/*
equation index: 1892
type: ALGORITHM

  assert(cond.Cells[3].Nt >= 1, "Variable violating min constraint: 1 <= cond.Cells[3].Nt, has value: " + String(cond.Cells[3].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1892};
  modelica_boolean tmp263;
  static const MMC_DEFSTRINGLIT(tmp264,69,"Variable violating min constraint: 1 <= cond.Cells[3].Nt, has value: ");
  modelica_string tmp265;
  modelica_metatype tmpMeta266;
  static int tmp267 = 0;
  if(!tmp267)
  {
    tmp263 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* cond.Cells[3].Nt PARAM */),((modelica_integer) 1));
    if(!tmp263)
    {
      tmp265 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* cond.Cells[3].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta266 = stringAppend(MMC_REFSTRINGLIT(tmp264),tmp265);
      {
        const char* assert_cond = "(cond.Cells[3].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta266));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta266));
        }
      }
      tmp267 = 1;
    }
  }
  threadData->lastEquationSolved = 1892;
}

/*
equation index: 1893
type: ALGORITHM

  assert(cond.Cells[2].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[2].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[2].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(cond.Cells[2].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1893};
  modelica_boolean tmp268;
  modelica_boolean tmp269;
  static const MMC_DEFSTRINGLIT(tmp270,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[2].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp271;
  modelica_metatype tmpMeta272;
  static int tmp273 = 0;
  if(!tmp273)
  {
    tmp268 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* cond.Cells[2].Discretization PARAM */),1);
    tmp269 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* cond.Cells[2].Discretization PARAM */),5);
    if(!(tmp268 && tmp269))
    {
      tmp271 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* cond.Cells[2].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta272 = stringAppend(MMC_REFSTRINGLIT(tmp270),tmp271);
      {
        const char* assert_cond = "(cond.Cells[2].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[2].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta272));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta272));
        }
      }
      tmp273 = 1;
    }
  }
  threadData->lastEquationSolved = 1893;
}

/*
equation index: 1894
type: ALGORITHM

  assert(cond.hstart[2] >= -1e10 and cond.hstart[2] <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.hstart[2] <= 1e10, has value: " + String(cond.hstart[2], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1894};
  modelica_boolean tmp274;
  modelica_boolean tmp275;
  static const MMC_DEFSTRINGLIT(tmp276,83,"Variable violating min/max constraint: -1e10 <= cond.hstart[2] <= 1e10, has value: ");
  modelica_string tmp277;
  modelica_metatype tmpMeta278;
  static int tmp279 = 0;
  if(!tmp279)
  {
    tmp274 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* cond.hstart[2] PARAM */),-1e10);
    tmp275 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* cond.hstart[2] PARAM */),1e10);
    if(!(tmp274 && tmp275))
    {
      tmp277 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* cond.hstart[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta278 = stringAppend(MMC_REFSTRINGLIT(tmp276),tmp277);
      {
        const char* assert_cond = "(cond.hstart[2] >= -1e10 and cond.hstart[2] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta278));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta278));
        }
      }
      tmp279 = 1;
    }
  }
  threadData->lastEquationSolved = 1894;
}

/*
equation index: 1895
type: ALGORITHM

  assert(cond.Cells[2].hstart >= -1e10 and cond.Cells[2].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[2].hstart <= 1e10, has value: " + String(cond.Cells[2].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1895};
  modelica_boolean tmp280;
  modelica_boolean tmp281;
  static const MMC_DEFSTRINGLIT(tmp282,89,"Variable violating min/max constraint: -1e10 <= cond.Cells[2].hstart <= 1e10, has value: ");
  modelica_string tmp283;
  modelica_metatype tmpMeta284;
  static int tmp285 = 0;
  if(!tmp285)
  {
    tmp280 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[69]] /* cond.Cells[2].hstart PARAM */),-1e10);
    tmp281 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[69]] /* cond.Cells[2].hstart PARAM */),1e10);
    if(!(tmp280 && tmp281))
    {
      tmp283 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[69]] /* cond.Cells[2].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta284 = stringAppend(MMC_REFSTRINGLIT(tmp282),tmp283);
      {
        const char* assert_cond = "(cond.Cells[2].hstart >= -1e10 and cond.Cells[2].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta284));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta284));
        }
      }
      tmp285 = 1;
    }
  }
  threadData->lastEquationSolved = 1895;
}

/*
equation index: 1896
type: ALGORITHM

  assert(cond.Cells[2].Nt >= 1, "Variable violating min constraint: 1 <= cond.Cells[2].Nt, has value: " + String(cond.Cells[2].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1896};
  modelica_boolean tmp286;
  static const MMC_DEFSTRINGLIT(tmp287,69,"Variable violating min constraint: 1 <= cond.Cells[2].Nt, has value: ");
  modelica_string tmp288;
  modelica_metatype tmpMeta289;
  static int tmp290 = 0;
  if(!tmp290)
  {
    tmp286 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* cond.Cells[2].Nt PARAM */),((modelica_integer) 1));
    if(!tmp286)
    {
      tmp288 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* cond.Cells[2].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta289 = stringAppend(MMC_REFSTRINGLIT(tmp287),tmp288);
      {
        const char* assert_cond = "(cond.Cells[2].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta289));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta289));
        }
      }
      tmp290 = 1;
    }
  }
  threadData->lastEquationSolved = 1896;
}

/*
equation index: 1897
type: ALGORITHM

  assert(cond.Cells[1].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[1].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[1].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(cond.Cells[1].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1897};
  modelica_boolean tmp291;
  modelica_boolean tmp292;
  static const MMC_DEFSTRINGLIT(tmp293,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[1].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp294;
  modelica_metatype tmpMeta295;
  static int tmp296 = 0;
  if(!tmp296)
  {
    tmp291 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[5]] /* cond.Cells[1].Discretization PARAM */),1);
    tmp292 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[5]] /* cond.Cells[1].Discretization PARAM */),5);
    if(!(tmp291 && tmp292))
    {
      tmp294 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[5]] /* cond.Cells[1].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta295 = stringAppend(MMC_REFSTRINGLIT(tmp293),tmp294);
      {
        const char* assert_cond = "(cond.Cells[1].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[1].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta295));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta295));
        }
      }
      tmp296 = 1;
    }
  }
  threadData->lastEquationSolved = 1897;
}

/*
equation index: 1898
type: ALGORITHM

  assert(cond.hstart[1] >= -1e10 and cond.hstart[1] <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.hstart[1] <= 1e10, has value: " + String(cond.hstart[1], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1898};
  modelica_boolean tmp297;
  modelica_boolean tmp298;
  static const MMC_DEFSTRINGLIT(tmp299,83,"Variable violating min/max constraint: -1e10 <= cond.hstart[1] <= 1e10, has value: ");
  modelica_string tmp300;
  modelica_metatype tmpMeta301;
  static int tmp302 = 0;
  if(!tmp302)
  {
    tmp297 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* cond.hstart[1] PARAM */),-1e10);
    tmp298 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* cond.hstart[1] PARAM */),1e10);
    if(!(tmp297 && tmp298))
    {
      tmp300 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* cond.hstart[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta301 = stringAppend(MMC_REFSTRINGLIT(tmp299),tmp300);
      {
        const char* assert_cond = "(cond.hstart[1] >= -1e10 and cond.hstart[1] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta301));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta301));
        }
      }
      tmp302 = 1;
    }
  }
  threadData->lastEquationSolved = 1898;
}

/*
equation index: 1899
type: ALGORITHM

  assert(cond.Cells[1].hstart >= -1e10 and cond.Cells[1].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[1].hstart <= 1e10, has value: " + String(cond.Cells[1].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1899};
  modelica_boolean tmp303;
  modelica_boolean tmp304;
  static const MMC_DEFSTRINGLIT(tmp305,89,"Variable violating min/max constraint: -1e10 <= cond.Cells[1].hstart <= 1e10, has value: ");
  modelica_string tmp306;
  modelica_metatype tmpMeta307;
  static int tmp308 = 0;
  if(!tmp308)
  {
    tmp303 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* cond.Cells[1].hstart PARAM */),-1e10);
    tmp304 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* cond.Cells[1].hstart PARAM */),1e10);
    if(!(tmp303 && tmp304))
    {
      tmp306 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* cond.Cells[1].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta307 = stringAppend(MMC_REFSTRINGLIT(tmp305),tmp306);
      {
        const char* assert_cond = "(cond.Cells[1].hstart >= -1e10 and cond.Cells[1].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta307));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta307));
        }
      }
      tmp308 = 1;
    }
  }
  threadData->lastEquationSolved = 1899;
}

/*
equation index: 1900
type: ALGORITHM

  assert(cond.Cells[1].Nt >= 1, "Variable violating min constraint: 1 <= cond.Cells[1].Nt, has value: " + String(cond.Cells[1].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1900};
  modelica_boolean tmp309;
  static const MMC_DEFSTRINGLIT(tmp310,69,"Variable violating min constraint: 1 <= cond.Cells[1].Nt, has value: ");
  modelica_string tmp311;
  modelica_metatype tmpMeta312;
  static int tmp313 = 0;
  if(!tmp313)
  {
    tmp309 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[1].Nt PARAM */),((modelica_integer) 1));
    if(!tmp309)
    {
      tmp311 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[1].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta312 = stringAppend(MMC_REFSTRINGLIT(tmp310),tmp311);
      {
        const char* assert_cond = "(cond.Cells[1].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta312));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta312));
        }
      }
      tmp313 = 1;
    }
  }
  threadData->lastEquationSolved = 1900;
}

/*
equation index: 1901
type: ALGORITHM

  assert(cond.Wall_int.N >= 1, "Variable violating min constraint: 1 <= cond.Wall_int.N, has value: " + String(cond.Wall_int.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1901};
  modelica_boolean tmp314;
  static const MMC_DEFSTRINGLIT(tmp315,68,"Variable violating min constraint: 1 <= cond.Wall_int.N, has value: ");
  modelica_string tmp316;
  modelica_metatype tmpMeta317;
  static int tmp318 = 0;
  if(!tmp318)
  {
    tmp314 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[23]] /* cond.Wall_int.N PARAM */),((modelica_integer) 1));
    if(!tmp314)
    {
      tmp316 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[23]] /* cond.Wall_int.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta317 = stringAppend(MMC_REFSTRINGLIT(tmp315),tmp316);
      {
        const char* assert_cond = "(cond.Wall_int.N >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta317));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta317));
        }
      }
      tmp318 = 1;
    }
  }
  threadData->lastEquationSolved = 1901;
}

/*
equation index: 1902
type: ALGORITHM

  assert(cond.Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(cond.Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1902};
  modelica_boolean tmp319;
  modelica_boolean tmp320;
  static const MMC_DEFSTRINGLIT(tmp321,204,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp322;
  modelica_metatype tmpMeta323;
  static int tmp324 = 0;
  if(!tmp324)
  {
    tmp319 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[20]] /* cond.Discretization PARAM */),1);
    tmp320 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[20]] /* cond.Discretization PARAM */),5);
    if(!(tmp319 && tmp320))
    {
      tmp322 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[20]] /* cond.Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta323 = stringAppend(MMC_REFSTRINGLIT(tmp321),tmp322);
      {
        const char* assert_cond = "(cond.Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",74,3,77,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta323));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",74,3,77,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta323));
        }
      }
      tmp324 = 1;
    }
  }
  threadData->lastEquationSolved = 1902;
}

/*
equation index: 1903
type: ALGORITHM

  assert(cond.Tstart_outlet >= 1.0 and cond.Tstart_outlet <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Tstart_outlet <= 1e4, has value: " + String(cond.Tstart_outlet, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1903};
  modelica_boolean tmp325;
  modelica_boolean tmp326;
  static const MMC_DEFSTRINGLIT(tmp327,84,"Variable violating min/max constraint: 1.0 <= cond.Tstart_outlet <= 1e4, has value: ");
  modelica_string tmp328;
  modelica_metatype tmpMeta329;
  static int tmp330 = 0;
  if(!tmp330)
  {
    tmp325 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* cond.Tstart_outlet PARAM */),1.0);
    tmp326 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* cond.Tstart_outlet PARAM */),1e4);
    if(!(tmp325 && tmp326))
    {
      tmp328 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* cond.Tstart_outlet PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta329 = stringAppend(MMC_REFSTRINGLIT(tmp327),tmp328);
      {
        const char* assert_cond = "(cond.Tstart_outlet >= 1.0 and cond.Tstart_outlet <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",62,3,63,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta329));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",62,3,63,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta329));
        }
      }
      tmp330 = 1;
    }
  }
  threadData->lastEquationSolved = 1903;
}

/*
equation index: 1904
type: ALGORITHM

  assert(cond.Tstart_inlet >= 1.0 and cond.Tstart_inlet <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Tstart_inlet <= 1e4, has value: " + String(cond.Tstart_inlet, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1904};
  modelica_boolean tmp331;
  modelica_boolean tmp332;
  static const MMC_DEFSTRINGLIT(tmp333,83,"Variable violating min/max constraint: 1.0 <= cond.Tstart_inlet <= 1e4, has value: ");
  modelica_string tmp334;
  modelica_metatype tmpMeta335;
  static int tmp336 = 0;
  if(!tmp336)
  {
    tmp331 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* cond.Tstart_inlet PARAM */),1.0);
    tmp332 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* cond.Tstart_inlet PARAM */),1e4);
    if(!(tmp331 && tmp332))
    {
      tmp334 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* cond.Tstart_inlet PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta335 = stringAppend(MMC_REFSTRINGLIT(tmp333),tmp334);
      {
        const char* assert_cond = "(cond.Tstart_inlet >= 1.0 and cond.Tstart_inlet <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",60,3,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta335));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",60,3,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta335));
        }
      }
      tmp336 = 1;
    }
  }
  threadData->lastEquationSolved = 1904;
}

/*
equation index: 1905
type: ALGORITHM

  assert(cond.N >= 1, "Variable violating min constraint: 1 <= cond.N, has value: " + String(cond.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1905};
  modelica_boolean tmp337;
  static const MMC_DEFSTRINGLIT(tmp338,59,"Variable violating min constraint: 1 <= cond.N, has value: ");
  modelica_string tmp339;
  modelica_metatype tmpMeta340;
  static int tmp341 = 0;
  if(!tmp341)
  {
    tmp337 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[21]] /* cond.N PARAM */),((modelica_integer) 1));
    if(!tmp337)
    {
      tmp339 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[21]] /* cond.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta340 = stringAppend(MMC_REFSTRINGLIT(tmp338),tmp339);
      {
        const char* assert_cond = "(cond.N >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",39,3,39,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta340));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",39,3,39,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta340));
        }
      }
      tmp341 = 1;
    }
  }
  threadData->lastEquationSolved = 1905;
}

/*
equation index: 1906
type: ALGORITHM

  assert(comp.T_su_start >= 0.0, "Variable violating min constraint: 0.0 <= comp.T_su_start, has value: " + String(comp.T_su_start, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1906};
  modelica_boolean tmp342;
  static const MMC_DEFSTRINGLIT(tmp343,70,"Variable violating min constraint: 0.0 <= comp.T_su_start, has value: ");
  modelica_string tmp344;
  modelica_metatype tmpMeta345;
  static int tmp346 = 0;
  if(!tmp346)
  {
    tmp342 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* comp.T_su_start PARAM */),0.0);
    if(!tmp342)
    {
      tmp344 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* comp.T_su_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta345 = stringAppend(MMC_REFSTRINGLIT(tmp343),tmp344);
      {
        const char* assert_cond = "(comp.T_su_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",90,3,91,78,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta345));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",90,3,91,78,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta345));
        }
      }
      tmp346 = 1;
    }
  }
  threadData->lastEquationSolved = 1906;
}

/*
equation index: 1907
type: ALGORITHM

  assert(comp.h_valid_max >= -1e10 and comp.h_valid_max <= 1e10, "Variable violating min/max constraint: -1e10 <= comp.h_valid_max <= 1e10, has value: " + String(comp.h_valid_max, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1907};
  modelica_boolean tmp347;
  modelica_boolean tmp348;
  static const MMC_DEFSTRINGLIT(tmp349,85,"Variable violating min/max constraint: -1e10 <= comp.h_valid_max <= 1e10, has value: ");
  modelica_string tmp350;
  modelica_metatype tmpMeta351;
  static int tmp352 = 0;
  if(!tmp352)
  {
    tmp347 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* comp.h_valid_max PARAM */),-1e10);
    tmp348 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* comp.h_valid_max PARAM */),1e10);
    if(!(tmp347 && tmp348))
    {
      tmp350 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* comp.h_valid_max PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta351 = stringAppend(MMC_REFSTRINGLIT(tmp349),tmp350);
      {
        const char* assert_cond = "(comp.h_valid_max >= -1e10 and comp.h_valid_max <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",128,3,129,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta351));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",128,3,129,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta351));
        }
      }
      tmp352 = 1;
    }
  }
  threadData->lastEquationSolved = 1907;
}

/*
equation index: 1908
type: ALGORITHM

  assert(comp.h_valid_min >= -1e10 and comp.h_valid_min <= 1e10, "Variable violating min/max constraint: -1e10 <= comp.h_valid_min <= 1e10, has value: " + String(comp.h_valid_min, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1908};
  modelica_boolean tmp353;
  modelica_boolean tmp354;
  static const MMC_DEFSTRINGLIT(tmp355,85,"Variable violating min/max constraint: -1e10 <= comp.h_valid_min <= 1e10, has value: ");
  modelica_string tmp356;
  modelica_metatype tmpMeta357;
  static int tmp358 = 0;
  if(!tmp358)
  {
    tmp353 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* comp.h_valid_min PARAM */),-1e10);
    tmp354 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* comp.h_valid_min PARAM */),1e10);
    if(!(tmp353 && tmp354))
    {
      tmp356 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* comp.h_valid_min PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta357 = stringAppend(MMC_REFSTRINGLIT(tmp355),tmp356);
      {
        const char* assert_cond = "(comp.h_valid_min >= -1e10 and comp.h_valid_min <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",127,3,127,98,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta357));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",127,3,127,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta357));
        }
      }
      tmp358 = 1;
    }
  }
  threadData->lastEquationSolved = 1908;
}

/*
equation index: 1909
type: ALGORITHM

  assert(comp.T_ex_start >= 0.0, "Variable violating min constraint: 0.0 <= comp.T_ex_start, has value: " + String(comp.T_ex_start, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1909};
  modelica_boolean tmp359;
  static const MMC_DEFSTRINGLIT(tmp360,70,"Variable violating min constraint: 0.0 <= comp.T_ex_start, has value: ");
  modelica_string tmp361;
  modelica_metatype tmpMeta362;
  static int tmp363 = 0;
  if(!tmp363)
  {
    tmp359 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* comp.T_ex_start PARAM */),0.0);
    if(!tmp359)
    {
      tmp361 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* comp.T_ex_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta362 = stringAppend(MMC_REFSTRINGLIT(tmp360),tmp361);
      {
        const char* assert_cond = "(comp.T_ex_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",115,3,118,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta362));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",115,3,118,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta362));
        }
      }
      tmp363 = 1;
    }
  }
  threadData->lastEquationSolved = 1909;
}

/*
equation index: 1910
type: ALGORITHM

  assert(comp.h_ex_start >= -1e10 and comp.h_ex_start <= 1e10, "Variable violating min/max constraint: -1e10 <= comp.h_ex_start <= 1e10, has value: " + String(comp.h_ex_start, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1910};
  modelica_boolean tmp364;
  modelica_boolean tmp365;
  static const MMC_DEFSTRINGLIT(tmp366,84,"Variable violating min/max constraint: -1e10 <= comp.h_ex_start <= 1e10, has value: ");
  modelica_string tmp367;
  modelica_metatype tmpMeta368;
  static int tmp369 = 0;
  if(!tmp369)
  {
    tmp364 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* comp.h_ex_start PARAM */),-1e10);
    tmp365 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* comp.h_ex_start PARAM */),1e10);
    if(!(tmp364 && tmp365))
    {
      tmp367 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* comp.h_ex_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta368 = stringAppend(MMC_REFSTRINGLIT(tmp366),tmp367);
      {
        const char* assert_cond = "(comp.h_ex_start >= -1e10 and comp.h_ex_start <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",119,3,121,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta368));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",119,3,121,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta368));
        }
      }
      tmp369 = 1;
    }
  }
  threadData->lastEquationSolved = 1910;
}

/*
equation index: 1911
type: ALGORITHM

  assert(comp.h_su_start >= -1e10 and comp.h_su_start <= 1e10, "Variable violating min/max constraint: -1e10 <= comp.h_su_start <= 1e10, has value: " + String(comp.h_su_start, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1911};
  modelica_boolean tmp370;
  modelica_boolean tmp371;
  static const MMC_DEFSTRINGLIT(tmp372,84,"Variable violating min/max constraint: -1e10 <= comp.h_su_start <= 1e10, has value: ");
  modelica_string tmp373;
  modelica_metatype tmpMeta374;
  static int tmp375 = 0;
  if(!tmp375)
  {
    tmp370 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* comp.h_su_start PARAM */),-1e10);
    tmp371 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* comp.h_su_start PARAM */),1e10);
    if(!(tmp370 && tmp371))
    {
      tmp373 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* comp.h_su_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta374 = stringAppend(MMC_REFSTRINGLIT(tmp372),tmp373);
      {
        const char* assert_cond = "(comp.h_su_start >= -1e10 and comp.h_su_start <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",92,3,94,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta374));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",92,3,94,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta374));
        }
      }
      tmp375 = 1;
    }
  }
  threadData->lastEquationSolved = 1911;
}
OMC_DISABLE_OPT
void RefrigerationTrainer_ClosedLoopM1eCS_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[380])(DATA*, threadData_t*) = {
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1430,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1436,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1438,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1440,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1442,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1449,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1450,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1455,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1456,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1457,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1458,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1459,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1460,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1461,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1462,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1463,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1464,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1465,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1466,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1467,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1471,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1472,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1477,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1478,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1479,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1480,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1481,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1482,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1483,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1484,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1485,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1489,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1490,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1495,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1496,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1497,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1498,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1499,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1500,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1501,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1502,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1503,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1507,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1508,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1513,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1514,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1515,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1516,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1517,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1518,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1519,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1520,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1521,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1525,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1526,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1531,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1532,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1533,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1534,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1535,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1536,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1537,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1538,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1539,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1549,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1550,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1551,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1552,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1559,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1560,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1565,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1566,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1567,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1568,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1569,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1570,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1571,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1572,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1573,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1574,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1575,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1576,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1577,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1581,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1582,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1587,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1588,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1589,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1590,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1591,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1592,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1593,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1594,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1595,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1599,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1600,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1605,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1606,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1607,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1608,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1609,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1610,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1611,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1612,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1613,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1617,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1618,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1623,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1624,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1625,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1626,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1627,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1628,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1629,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1630,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1631,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1635,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1636,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1641,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1642,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1643,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1644,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1645,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1646,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1647,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1648,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1649,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1657,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1658,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1659,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1661,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1662,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1663,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1664,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_573,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_572,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_571,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_570,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_569,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_568,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_567,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_566,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_565,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_553,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_785,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_551,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_550,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_548,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_547,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_546,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_545,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_544,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_543,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_542,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_541,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_540,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_539,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_538,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_537,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_549,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_552,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_517,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_152,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_151,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_150,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_149,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_148,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_147,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_146,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_145,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_144,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_143,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_142,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_141,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_140,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_139,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_138,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_137,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_136,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_135,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_134,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_133,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_132,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_131,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_130,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_129,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_128,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_127,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_126,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_125,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_124,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_123,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_122,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_121,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_120,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_119,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_118,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_117,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_116,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_115,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_114,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_113,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_112,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_111,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_110,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_109,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_108,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_107,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_106,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_105,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_104,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_103,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_102,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_101,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_100,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_99,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_98,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_97,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_96,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_95,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_94,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_93,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_92,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_91,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_90,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_89,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_88,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_87,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_86,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_85,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_84,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_83,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_82,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_81,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_80,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_79,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_78,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_77,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_76,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_75,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_74,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_73,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_72,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_71,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_70,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_69,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_68,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_67,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_66,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_65,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_64,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_63,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_62,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_61,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_60,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_59,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_58,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_57,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_56,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_55,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_54,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_53,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_52,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_51,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_50,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_49,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_48,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_47,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_46,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_45,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_44,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_43,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_42,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_41,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_40,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_39,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_38,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_37,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_36,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_35,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_34,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_33,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_32,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_31,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_30,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_29,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_28,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_27,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_26,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_25,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_24,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_23,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_22,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_21,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_20,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_19,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_18,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_17,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_16,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_15,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_14,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_13,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_12,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_11,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_10,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_9,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_8,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_7,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_6,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_5,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_4,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_3,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1845,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1846,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1847,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1848,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1849,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1850,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1851,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1852,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1853,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1854,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1855,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1856,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1857,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1858,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1859,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1860,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1861,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1862,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1863,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1864,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1865,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1866,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1867,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1868,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1869,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1870,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1871,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1872,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1873,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1874,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1875,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1876,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1877,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1878,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1879,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1880,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1881,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1882,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1883,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1884,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1885,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1886,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1887,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1888,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1889,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1890,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1891,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1892,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1893,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1894,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1895,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1896,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1897,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1898,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1899,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1900,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1901,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1902,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1903,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1904,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1905,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1906,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1907,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1908,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1909,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1910,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1911
  };
  
  for (int id = 0; id < 380; id++) {
    eqFunctions[id](data, threadData);
  }
}
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[0]] /* N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* coil_cond.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[2]] /* coil_cond.port.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[3]] /* coil_evap.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[4]] /* coil_evap.port.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[15]] /* cond.Cells[1].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[15].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[16]] /* cond.Cells[2].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[16].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[17]] /* cond.Cells[3].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[17].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[18]] /* cond.Cells[4].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[18].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* cond.Cells[5].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[19].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[21]] /* cond.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[21].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[23]] /* cond.Wall_int.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[23].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[24]] /* cond.thermalPortConverter.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[24].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* cond.thermalPortConverter.multi.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[25].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[36]] /* evap.Cells[1].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[36].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[37]] /* evap.Cells[2].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[37].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[38]] /* evap.Cells[3].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[38].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[39]] /* evap.Cells[4].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[39].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[40]] /* evap.Cells[5].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[40].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[42]] /* evap.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[42].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[44]] /* evap.Wall_int.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[44].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[45]] /* evap.thermalPortConverter.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[45].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[46]] /* evap.thermalPortConverter.multi.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[46].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[47]] /* wall_cond_placeholder.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[47].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[48]] /* wall_cond_placeholder.port.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[48].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[49]] /* wall_evap_placeholder.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[49].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[50]] /* wall_evap_placeholder.port.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[50].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* comp.h_valid_min PARAM */) = 1e5;
  data->modelData->realParameterData[27].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[0]] /* cond.Cells[1].ComputeSat PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[0].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1]] /* cond.Cells[2].ComputeSat PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[2]] /* cond.Cells[3].ComputeSat PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[3]] /* cond.Cells[4].ComputeSat PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[3].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[4]] /* cond.Cells[5].ComputeSat PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[4].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[5]] /* cond.Cells[1].Mdotconst PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[5].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[6]] /* cond.Cells[2].Mdotconst PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[6].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[7]] /* cond.Cells[3].Mdotconst PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[7].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[8]] /* cond.Cells[4].Mdotconst PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[8].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[9]] /* cond.Cells[5].Mdotconst PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[9].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[10]] /* cond.Cells[1].filter_dMdt PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[10].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[11]] /* cond.Cells[2].filter_dMdt PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[11].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[12]] /* cond.Cells[3].filter_dMdt PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[12].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[13]] /* cond.Cells[4].filter_dMdt PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[13].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[14]] /* cond.Cells[5].filter_dMdt PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[14].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[15]] /* cond.Cells[1].max_der PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[15].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[16]] /* cond.Cells[2].max_der PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[16].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[17]] /* cond.Cells[3].max_der PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[17].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[18]] /* cond.Cells[4].max_der PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[18].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[19]] /* cond.Cells[5].max_der PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[19].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[20]] /* cond.Cells[1].steadystate PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[20].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[21]] /* cond.Cells[2].steadystate PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[21].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[22]] /* cond.Cells[3].steadystate PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[22].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[23]] /* cond.Cells[4].steadystate PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[23].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[24]] /* cond.Cells[5].steadystate PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[24].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[25]] /* cond.Mdotconst PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[25].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[26]] /* cond.filter_dMdt PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[26].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[27]] /* cond.max_der PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[27].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[28]] /* cond.steadystate PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[28].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[29]] /* drive.useSupport PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[29].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[30]] /* evap.Cells[1].ComputeSat PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[30].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[31]] /* evap.Cells[2].ComputeSat PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[31].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[32]] /* evap.Cells[3].ComputeSat PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[32].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[33]] /* evap.Cells[4].ComputeSat PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[33].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[34]] /* evap.Cells[5].ComputeSat PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[34].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[35]] /* evap.Cells[1].Mdotconst PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[35].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[36]] /* evap.Cells[2].Mdotconst PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[36].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[37]] /* evap.Cells[3].Mdotconst PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[37].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[38]] /* evap.Cells[4].Mdotconst PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[38].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[39]] /* evap.Cells[5].Mdotconst PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[39].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[40]] /* evap.Cells[1].filter_dMdt PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[40].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[41]] /* evap.Cells[2].filter_dMdt PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[41].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[42]] /* evap.Cells[3].filter_dMdt PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[42].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[43]] /* evap.Cells[4].filter_dMdt PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[43].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[44]] /* evap.Cells[5].filter_dMdt PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[44].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[45]] /* evap.Cells[1].max_der PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[45].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[46]] /* evap.Cells[2].max_der PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[46].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[47]] /* evap.Cells[3].max_der PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[47].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[48]] /* evap.Cells[4].max_der PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[48].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[49]] /* evap.Cells[5].max_der PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[49].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[50]] /* evap.Cells[1].steadystate PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[50].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[51]] /* evap.Cells[2].steadystate PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[51].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[52]] /* evap.Cells[3].steadystate PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[52].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[53]] /* evap.Cells[4].steadystate PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[53].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[54]] /* evap.Cells[5].steadystate PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[54].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[55]] /* evap.Mdotconst PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[55].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[56]] /* evap.filter_dMdt PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[56].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[57]] /* evap.max_der PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[57].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[58]] /* evap.steadystate PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[58].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[61]] /* txv.UseNom PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[61].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[62]] /* txv.constinit PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[62].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[63]] /* txv.use_rho_nom PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[63].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[5]] /* cond.Cells[1].Discretization PARAM */) = 3;
  data->modelData->integerParameterData[5].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* cond.Cells[2].Discretization PARAM */) = 3;
  data->modelData->integerParameterData[6].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[3].Discretization PARAM */) = 3;
  data->modelData->integerParameterData[7].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[4].Discretization PARAM */) = 3;
  data->modelData->integerParameterData[8].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[5].Discretization PARAM */) = 3;
  data->modelData->integerParameterData[9].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[20]] /* cond.Discretization PARAM */) = 3;
  data->modelData->integerParameterData[20].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[26]] /* evap.Cells[1].Discretization PARAM */) = 3;
  data->modelData->integerParameterData[26].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[27]] /* evap.Cells[2].Discretization PARAM */) = 3;
  data->modelData->integerParameterData[27].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[3].Discretization PARAM */) = 3;
  data->modelData->integerParameterData[28].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[4].Discretization PARAM */) = 3;
  data->modelData->integerParameterData[29].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[5].Discretization PARAM */) = 3;
  data->modelData->integerParameterData[30].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[41]] /* evap.Discretization PARAM */) = 3;
  data->modelData->integerParameterData[41].time_unvarying = 1;
  RefrigerationTrainer_ClosedLoopM1eCS_updateBoundParameters_0(data, threadData);
  return 0;
}

#if defined(__cplusplus)
}
#endif
