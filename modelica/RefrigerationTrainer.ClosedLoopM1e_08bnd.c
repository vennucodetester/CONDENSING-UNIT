/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "RefrigerationTrainer.ClosedLoopM1e_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1314
type: SIMPLE_ASSIGN
$START.p_lift_pa = txv.DELTAp_nom
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1314};
  ((modelica_real *)((data->modelData->realVarsData[1259] /* p_lift_pa variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[153]] /* txv.DELTAp_nom PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* p_lift_pa variable */) = ((modelica_real *)((data->modelData->realVarsData[1259] /* p_lift_pa variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1259] /* p_lift_pa */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* p_lift_pa variable */));
  threadData->lastEquationSolved = 1314;
}

/*
equation index: 1315
type: SIMPLE_ASSIGN
$START.evap.Cells[5].hnode_ex = evap.Cells[5].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1315};
  ((modelica_real *)((data->modelData->realVarsData[1105] /* evap.Cells[5].hnode_ex variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* evap.Cells[5].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* evap.Cells[5].hnode_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[1105] /* evap.Cells[5].hnode_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1105] /* evap.Cells[5].hnode_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* evap.Cells[5].hnode_ex variable */));
  threadData->lastEquationSolved = 1315;
}

/*
equation index: 1316
type: SIMPLE_ASSIGN
$START.evap.Cells[5].hnode_su = evap.Cells[5].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1316};
  ((modelica_real *)((data->modelData->realVarsData[1110] /* evap.Cells[5].hnode_su variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* evap.Cells[5].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */) = ((modelica_real *)((data->modelData->realVarsData[1110] /* evap.Cells[5].hnode_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1110] /* evap.Cells[5].hnode_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */));
  threadData->lastEquationSolved = 1316;
}

/*
equation index: 1317
type: SIMPLE_ASSIGN
$START.evap.Cells[5].h = evap.Cells[5].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1317};
  ((modelica_real *)((data->modelData->realVarsData[11] /* evap.Cells[5].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* evap.Cells[5].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[11] /* evap.Cells[5].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[11] /* evap.Cells[5].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */));
  threadData->lastEquationSolved = 1317;
}

/*
equation index: 1318
type: SIMPLE_ASSIGN
$START.evap.Cells[5].M_dot_ex = evap.Cells[5].Mdotnom / (*Real*)(evap.Cells[5].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1318};
  ((modelica_real *)((data->modelData->realVarsData[994] /* evap.Cells[5].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[90]] /* evap.Cells[5].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[5].Nt PARAM */)),"/*Real*/(evap.Cells[5].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* evap.Cells[5].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[994] /* evap.Cells[5].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[994] /* evap.Cells[5].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* evap.Cells[5].M_dot_ex variable */));
  threadData->lastEquationSolved = 1318;
}

/*
equation index: 1319
type: SIMPLE_ASSIGN
$START.evap.Cells[5].M_dot_su = evap.Cells[5].Mdotnom / (*Real*)(evap.Cells[5].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1319};
  ((modelica_real *)((data->modelData->realVarsData[999] /* evap.Cells[5].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[90]] /* evap.Cells[5].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[5].Nt PARAM */)),"/*Real*/(evap.Cells[5].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[5].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[999] /* evap.Cells[5].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[999] /* evap.Cells[5].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[5].M_dot_su variable */));
  threadData->lastEquationSolved = 1319;
}

/*
equation index: 1320
type: SIMPLE_ASSIGN
$START.evap.Cells[5].p = comp.p_su_start
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1320};
  ((modelica_real *)((data->modelData->realVarsData[12] /* evap.Cells[5].p STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* comp.p_su_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[12] /* evap.Cells[5].p STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[12] /* evap.Cells[5].p */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  threadData->lastEquationSolved = 1320;
}

/*
equation index: 1321
type: SIMPLE_ASSIGN
$START.evap.Cells[4].hnode_su = evap.Cells[4].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1321};
  ((modelica_real *)((data->modelData->realVarsData[1109] /* evap.Cells[4].hnode_su variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* evap.Cells[4].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */) = ((modelica_real *)((data->modelData->realVarsData[1109] /* evap.Cells[4].hnode_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1109] /* evap.Cells[4].hnode_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */));
  threadData->lastEquationSolved = 1321;
}

/*
equation index: 1322
type: SIMPLE_ASSIGN
$START.evap.Cells[4].h = evap.Cells[4].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1322};
  ((modelica_real *)((data->modelData->realVarsData[10] /* evap.Cells[4].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* evap.Cells[4].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[10] /* evap.Cells[4].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[10] /* evap.Cells[4].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */));
  threadData->lastEquationSolved = 1322;
}

/*
equation index: 1323
type: SIMPLE_ASSIGN
$START.evap.Cells[4].M_dot_ex = evap.Cells[4].Mdotnom / (*Real*)(evap.Cells[4].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1323};
  ((modelica_real *)((data->modelData->realVarsData[993] /* evap.Cells[4].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[89]] /* evap.Cells[4].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[4].Nt PARAM */)),"/*Real*/(evap.Cells[4].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* evap.Cells[4].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[993] /* evap.Cells[4].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[993] /* evap.Cells[4].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* evap.Cells[4].M_dot_ex variable */));
  threadData->lastEquationSolved = 1323;
}

/*
equation index: 1324
type: SIMPLE_ASSIGN
$START.evap.Cells[4].M_dot_su = evap.Cells[4].Mdotnom / (*Real*)(evap.Cells[4].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1324};
  ((modelica_real *)((data->modelData->realVarsData[998] /* evap.Cells[4].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[89]] /* evap.Cells[4].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[4].Nt PARAM */)),"/*Real*/(evap.Cells[4].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[4].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[998] /* evap.Cells[4].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[998] /* evap.Cells[4].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[4].M_dot_su variable */));
  threadData->lastEquationSolved = 1324;
}

/*
equation index: 1325
type: SIMPLE_ASSIGN
$START.evap.Cells[3].hnode_su = evap.Cells[3].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1325};
  ((modelica_real *)((data->modelData->realVarsData[1108] /* evap.Cells[3].hnode_su variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* evap.Cells[3].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */) = ((modelica_real *)((data->modelData->realVarsData[1108] /* evap.Cells[3].hnode_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1108] /* evap.Cells[3].hnode_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */));
  threadData->lastEquationSolved = 1325;
}

/*
equation index: 1326
type: SIMPLE_ASSIGN
$START.evap.Cells[3].h = evap.Cells[3].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1326};
  ((modelica_real *)((data->modelData->realVarsData[9] /* evap.Cells[3].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* evap.Cells[3].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[9] /* evap.Cells[3].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[9] /* evap.Cells[3].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */));
  threadData->lastEquationSolved = 1326;
}

/*
equation index: 1327
type: SIMPLE_ASSIGN
$START.evap.Cells[3].M_dot_ex = evap.Cells[3].Mdotnom / (*Real*)(evap.Cells[3].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1327};
  ((modelica_real *)((data->modelData->realVarsData[992] /* evap.Cells[3].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* evap.Cells[3].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[3].Nt PARAM */)),"/*Real*/(evap.Cells[3].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* evap.Cells[3].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[992] /* evap.Cells[3].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[992] /* evap.Cells[3].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* evap.Cells[3].M_dot_ex variable */));
  threadData->lastEquationSolved = 1327;
}

/*
equation index: 1328
type: SIMPLE_ASSIGN
$START.evap.Cells[3].M_dot_su = evap.Cells[3].Mdotnom / (*Real*)(evap.Cells[3].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1328};
  ((modelica_real *)((data->modelData->realVarsData[997] /* evap.Cells[3].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* evap.Cells[3].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[3].Nt PARAM */)),"/*Real*/(evap.Cells[3].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[3].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[997] /* evap.Cells[3].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[997] /* evap.Cells[3].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[3].M_dot_su variable */));
  threadData->lastEquationSolved = 1328;
}

/*
equation index: 1329
type: SIMPLE_ASSIGN
$START.evap.Cells[2].hnode_su = evap.Cells[2].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1329};
  ((modelica_real *)((data->modelData->realVarsData[1107] /* evap.Cells[2].hnode_su variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* evap.Cells[2].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */) = ((modelica_real *)((data->modelData->realVarsData[1107] /* evap.Cells[2].hnode_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1107] /* evap.Cells[2].hnode_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */));
  threadData->lastEquationSolved = 1329;
}

/*
equation index: 1330
type: SIMPLE_ASSIGN
$START.evap.Cells[2].h = evap.Cells[2].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1330};
  ((modelica_real *)((data->modelData->realVarsData[8] /* evap.Cells[2].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* evap.Cells[2].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[8] /* evap.Cells[2].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[8] /* evap.Cells[2].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */));
  threadData->lastEquationSolved = 1330;
}

/*
equation index: 1331
type: SIMPLE_ASSIGN
$START.evap.Cells[2].M_dot_ex = evap.Cells[2].Mdotnom / (*Real*)(evap.Cells[2].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1331};
  ((modelica_real *)((data->modelData->realVarsData[991] /* evap.Cells[2].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* evap.Cells[2].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[2].Nt PARAM */)),"/*Real*/(evap.Cells[2].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* evap.Cells[2].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[991] /* evap.Cells[2].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[991] /* evap.Cells[2].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* evap.Cells[2].M_dot_ex variable */));
  threadData->lastEquationSolved = 1331;
}

/*
equation index: 1332
type: SIMPLE_ASSIGN
$START.evap.Cells[2].M_dot_su = evap.Cells[2].Mdotnom / (*Real*)(evap.Cells[2].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1332};
  ((modelica_real *)((data->modelData->realVarsData[996] /* evap.Cells[2].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* evap.Cells[2].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[2].Nt PARAM */)),"/*Real*/(evap.Cells[2].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[2].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[996] /* evap.Cells[2].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[996] /* evap.Cells[2].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[2].M_dot_su variable */));
  threadData->lastEquationSolved = 1332;
}

/*
equation index: 1333
type: SIMPLE_ASSIGN
$START.evap.Cells[1].hnode_su = evap.Cells[1].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1333};
  ((modelica_real *)((data->modelData->realVarsData[1106] /* evap.Cells[1].hnode_su variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* evap.Cells[1].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].hnode_su variable */) = ((modelica_real *)((data->modelData->realVarsData[1106] /* evap.Cells[1].hnode_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1106] /* evap.Cells[1].hnode_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].hnode_su variable */));
  threadData->lastEquationSolved = 1333;
}

/*
equation index: 1334
type: SIMPLE_ASSIGN
$START.evap.Cells[1].h = evap.Cells[1].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1334};
  ((modelica_real *)((data->modelData->realVarsData[7] /* evap.Cells[1].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* evap.Cells[1].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[7] /* evap.Cells[1].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[7] /* evap.Cells[1].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */));
  threadData->lastEquationSolved = 1334;
}

/*
equation index: 1335
type: SIMPLE_ASSIGN
$START.evap.Cells[1].M_dot_ex = evap.Cells[1].Mdotnom / (*Real*)(evap.Cells[1].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1335};
  ((modelica_real *)((data->modelData->realVarsData[990] /* evap.Cells[1].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* evap.Cells[1].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[27]] /* evap.Cells[1].Nt PARAM */)),"/*Real*/(evap.Cells[1].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* evap.Cells[1].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[990] /* evap.Cells[1].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[990] /* evap.Cells[1].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* evap.Cells[1].M_dot_ex variable */));
  threadData->lastEquationSolved = 1335;
}

/*
equation index: 1336
type: SIMPLE_ASSIGN
$START.evap.Cells[1].M_dot_su = evap.Cells[1].Mdotnom / (*Real*)(evap.Cells[1].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1336};
  ((modelica_real *)((data->modelData->realVarsData[995] /* evap.Cells[1].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* evap.Cells[1].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[27]] /* evap.Cells[1].Nt PARAM */)),"/*Real*/(evap.Cells[1].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* evap.Cells[1].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[995] /* evap.Cells[1].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[995] /* evap.Cells[1].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* evap.Cells[1].M_dot_su variable */));
  threadData->lastEquationSolved = 1336;
}

/*
equation index: 1337
type: SIMPLE_ASSIGN
$START.txv.fluidState.p = txv.p_nom
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1337};
  ((modelica_real *)((data->modelData->realVarsData[1281] /* txv.fluidState.p variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[157]] /* txv.p_nom PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* txv.fluidState.p variable */) = ((modelica_real *)((data->modelData->realVarsData[1281] /* txv.fluidState.p variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1281] /* txv.fluidState.p */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* txv.fluidState.p variable */));
  threadData->lastEquationSolved = 1337;
}

/*
equation index: 1338
type: SIMPLE_ASSIGN
$START.txv.fluidState.T = txv.T_nom
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1338};
  ((modelica_real *)((data->modelData->realVarsData[1270] /* txv.fluidState.T variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* txv.T_nom PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* txv.fluidState.T variable */) = ((modelica_real *)((data->modelData->realVarsData[1270] /* txv.fluidState.T variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1270] /* txv.fluidState.T */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* txv.fluidState.T variable */));
  threadData->lastEquationSolved = 1338;
}

/*
equation index: 1339
type: SIMPLE_ASSIGN
$START.txv.Mdot = txv.Mdot_nom
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1339};
  ((modelica_real *)((data->modelData->realVarsData[1269] /* txv.Mdot variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[154]] /* txv.Mdot_nom PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* txv.Mdot variable */) = ((modelica_real *)((data->modelData->realVarsData[1269] /* txv.Mdot variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1269] /* txv.Mdot */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* txv.Mdot variable */));
  threadData->lastEquationSolved = 1339;
}

/*
equation index: 1340
type: SIMPLE_ASSIGN
$START.txv.A = txv.Afull
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1340};
  ((modelica_real *)((data->modelData->realVarsData[1267] /* txv.A variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* txv.Afull PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1267]] /* txv.A variable */) = ((modelica_real *)((data->modelData->realVarsData[1267] /* txv.A variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1267] /* txv.A */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1267]] /* txv.A variable */));
  threadData->lastEquationSolved = 1340;
}

/*
equation index: 1341
type: SIMPLE_ASSIGN
$START.cond.Cells[5].hnode_su = cond.Cells[5].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1341};
  ((modelica_real *)((data->modelData->realVarsData[836] /* cond.Cells[5].hnode_su variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* cond.Cells[5].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */) = ((modelica_real *)((data->modelData->realVarsData[836] /* cond.Cells[5].hnode_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[836] /* cond.Cells[5].hnode_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */));
  threadData->lastEquationSolved = 1341;
}

/*
equation index: 1342
type: SIMPLE_ASSIGN
$START.cond.Cells[5].h = cond.Cells[5].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1342};
  ((modelica_real *)((data->modelData->realVarsData[4] /* cond.Cells[5].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* cond.Cells[5].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[4] /* cond.Cells[5].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[4] /* cond.Cells[5].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */));
  threadData->lastEquationSolved = 1342;
}

/*
equation index: 1343
type: SIMPLE_ASSIGN
$START.cond.Cells[5].M_dot_ex = cond.Cells[5].Mdotnom / (*Real*)(cond.Cells[5].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1343};
  ((modelica_real *)((data->modelData->realVarsData[721] /* cond.Cells[5].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* cond.Cells[5].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[5].Nt PARAM */)),"/*Real*/(cond.Cells[5].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* cond.Cells[5].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[721] /* cond.Cells[5].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[721] /* cond.Cells[5].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* cond.Cells[5].M_dot_ex variable */));
  threadData->lastEquationSolved = 1343;
}

/*
equation index: 1344
type: SIMPLE_ASSIGN
$START.cond.Cells[5].M_dot_su = cond.Cells[5].Mdotnom / (*Real*)(cond.Cells[5].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1344};
  ((modelica_real *)((data->modelData->realVarsData[726] /* cond.Cells[5].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* cond.Cells[5].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[5].Nt PARAM */)),"/*Real*/(cond.Cells[5].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[5].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[726] /* cond.Cells[5].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[726] /* cond.Cells[5].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[5].M_dot_su variable */));
  threadData->lastEquationSolved = 1344;
}

/*
equation index: 1345
type: SIMPLE_ASSIGN
$START.cond.Cells[4].hnode_su = cond.Cells[4].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1345};
  ((modelica_real *)((data->modelData->realVarsData[835] /* cond.Cells[4].hnode_su variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* cond.Cells[4].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */) = ((modelica_real *)((data->modelData->realVarsData[835] /* cond.Cells[4].hnode_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[835] /* cond.Cells[4].hnode_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */));
  threadData->lastEquationSolved = 1345;
}

/*
equation index: 1346
type: SIMPLE_ASSIGN
$START.cond.Cells[4].h = cond.Cells[4].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1346};
  ((modelica_real *)((data->modelData->realVarsData[3] /* cond.Cells[4].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* cond.Cells[4].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[3] /* cond.Cells[4].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[3] /* cond.Cells[4].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */));
  threadData->lastEquationSolved = 1346;
}

/*
equation index: 1347
type: SIMPLE_ASSIGN
$START.cond.Cells[4].M_dot_ex = cond.Cells[4].Mdotnom / (*Real*)(cond.Cells[4].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1347};
  ((modelica_real *)((data->modelData->realVarsData[720] /* cond.Cells[4].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* cond.Cells[4].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[4].Nt PARAM */)),"/*Real*/(cond.Cells[4].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cond.Cells[4].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[720] /* cond.Cells[4].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[720] /* cond.Cells[4].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cond.Cells[4].M_dot_ex variable */));
  threadData->lastEquationSolved = 1347;
}

/*
equation index: 1348
type: SIMPLE_ASSIGN
$START.cond.Cells[4].M_dot_su = cond.Cells[4].Mdotnom / (*Real*)(cond.Cells[4].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1348};
  ((modelica_real *)((data->modelData->realVarsData[725] /* cond.Cells[4].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* cond.Cells[4].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[4].Nt PARAM */)),"/*Real*/(cond.Cells[4].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[4].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[725] /* cond.Cells[4].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[725] /* cond.Cells[4].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[4].M_dot_su variable */));
  threadData->lastEquationSolved = 1348;
}

/*
equation index: 1349
type: SIMPLE_ASSIGN
$START.cond.Cells[3].hnode_su = cond.Cells[3].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1349};
  ((modelica_real *)((data->modelData->realVarsData[834] /* cond.Cells[3].hnode_su variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* cond.Cells[3].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */) = ((modelica_real *)((data->modelData->realVarsData[834] /* cond.Cells[3].hnode_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[834] /* cond.Cells[3].hnode_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */));
  threadData->lastEquationSolved = 1349;
}

/*
equation index: 1350
type: SIMPLE_ASSIGN
$START.cond.Cells[3].h = cond.Cells[3].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1350};
  ((modelica_real *)((data->modelData->realVarsData[2] /* cond.Cells[3].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* cond.Cells[3].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[2] /* cond.Cells[3].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[2] /* cond.Cells[3].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */));
  threadData->lastEquationSolved = 1350;
}

/*
equation index: 1351
type: SIMPLE_ASSIGN
$START.cond.Cells[3].M_dot_ex = cond.Cells[3].Mdotnom / (*Real*)(cond.Cells[3].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1351};
  ((modelica_real *)((data->modelData->realVarsData[719] /* cond.Cells[3].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* cond.Cells[3].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[3].Nt PARAM */)),"/*Real*/(cond.Cells[3].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cond.Cells[3].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[719] /* cond.Cells[3].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[719] /* cond.Cells[3].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cond.Cells[3].M_dot_ex variable */));
  threadData->lastEquationSolved = 1351;
}

/*
equation index: 1352
type: SIMPLE_ASSIGN
$START.cond.Cells[3].M_dot_su = cond.Cells[3].Mdotnom / (*Real*)(cond.Cells[3].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1352};
  ((modelica_real *)((data->modelData->realVarsData[724] /* cond.Cells[3].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* cond.Cells[3].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[3].Nt PARAM */)),"/*Real*/(cond.Cells[3].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[3].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[724] /* cond.Cells[3].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[724] /* cond.Cells[3].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[3].M_dot_su variable */));
  threadData->lastEquationSolved = 1352;
}

/*
equation index: 1353
type: SIMPLE_ASSIGN
$START.cond.Cells[2].hnode_su = cond.Cells[2].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1353};
  ((modelica_real *)((data->modelData->realVarsData[833] /* cond.Cells[2].hnode_su variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* cond.Cells[2].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */) = ((modelica_real *)((data->modelData->realVarsData[833] /* cond.Cells[2].hnode_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[833] /* cond.Cells[2].hnode_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */));
  threadData->lastEquationSolved = 1353;
}

/*
equation index: 1354
type: SIMPLE_ASSIGN
$START.cond.Cells[2].h = cond.Cells[2].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1354};
  ((modelica_real *)((data->modelData->realVarsData[1] /* cond.Cells[2].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* cond.Cells[2].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[1] /* cond.Cells[2].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1] /* cond.Cells[2].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */));
  threadData->lastEquationSolved = 1354;
}

/*
equation index: 1355
type: SIMPLE_ASSIGN
$START.cond.Cells[2].M_dot_ex = cond.Cells[2].Mdotnom / (*Real*)(cond.Cells[2].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1355};
  ((modelica_real *)((data->modelData->realVarsData[718] /* cond.Cells[2].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* cond.Cells[2].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[2].Nt PARAM */)),"/*Real*/(cond.Cells[2].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cond.Cells[2].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[718] /* cond.Cells[2].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[718] /* cond.Cells[2].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cond.Cells[2].M_dot_ex variable */));
  threadData->lastEquationSolved = 1355;
}

/*
equation index: 1356
type: SIMPLE_ASSIGN
$START.cond.Cells[2].M_dot_su = cond.Cells[2].Mdotnom / (*Real*)(cond.Cells[2].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1356};
  ((modelica_real *)((data->modelData->realVarsData[723] /* cond.Cells[2].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* cond.Cells[2].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[2].Nt PARAM */)),"/*Real*/(cond.Cells[2].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[2].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[723] /* cond.Cells[2].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[723] /* cond.Cells[2].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[2].M_dot_su variable */));
  threadData->lastEquationSolved = 1356;
}

/*
equation index: 1357
type: SIMPLE_ASSIGN
$START.cond.Cells[1].hnode_su = cond.Cells[1].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1357};
  ((modelica_real *)((data->modelData->realVarsData[832] /* cond.Cells[1].hnode_su variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* cond.Cells[1].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */) = ((modelica_real *)((data->modelData->realVarsData[832] /* cond.Cells[1].hnode_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[832] /* cond.Cells[1].hnode_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */));
  threadData->lastEquationSolved = 1357;
}

/*
equation index: 1358
type: SIMPLE_ASSIGN
$START.cond.Cells[1].h = cond.Cells[1].hstart
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1358};
  ((modelica_real *)((data->modelData->realVarsData[0] /* cond.Cells[1].h STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* cond.Cells[1].hstart PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[0] /* cond.Cells[1].h STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[0] /* cond.Cells[1].h */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */));
  threadData->lastEquationSolved = 1358;
}

/*
equation index: 1359
type: SIMPLE_ASSIGN
$START.cond.Cells[1].M_dot_ex = cond.Cells[1].Mdotnom / (*Real*)(cond.Cells[1].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1359};
  ((modelica_real *)((data->modelData->realVarsData[717] /* cond.Cells[1].M_dot_ex variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[17]] /* cond.Cells[1].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* cond.Cells[1].Nt PARAM */)),"/*Real*/(cond.Cells[1].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cond.Cells[1].M_dot_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[717] /* cond.Cells[1].M_dot_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[717] /* cond.Cells[1].M_dot_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cond.Cells[1].M_dot_ex variable */));
  threadData->lastEquationSolved = 1359;
}

/*
equation index: 1360
type: SIMPLE_ASSIGN
$START.cond.Cells[1].M_dot_su = cond.Cells[1].Mdotnom / (*Real*)(cond.Cells[1].Nt)
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1360};
  ((modelica_real *)((data->modelData->realVarsData[722] /* cond.Cells[1].M_dot_su variable */).attribute .start.data))[0] = DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[17]] /* cond.Cells[1].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* cond.Cells[1].Nt PARAM */)),"/*Real*/(cond.Cells[1].Nt)");
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* cond.Cells[1].M_dot_su variable */) = ((modelica_real *)((data->modelData->realVarsData[722] /* cond.Cells[1].M_dot_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[722] /* cond.Cells[1].M_dot_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* cond.Cells[1].M_dot_su variable */));
  threadData->lastEquationSolved = 1360;
}

/*
equation index: 1361
type: SIMPLE_ASSIGN
$START.cond.Cells[1].p = comp.p_ex_start
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1361};
  ((modelica_real *)((data->modelData->realVarsData[5] /* cond.Cells[1].p STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* comp.p_ex_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[5] /* cond.Cells[1].p STATE(1) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[5] /* cond.Cells[1].p */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  threadData->lastEquationSolved = 1361;
}

/*
equation index: 1362
type: SIMPLE_ASSIGN
$START.comp.h_ex = comp.h_ex_start
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1362};
  ((modelica_real *)((data->modelData->realVarsData[682] /* comp.h_ex variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* comp.h_ex_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* comp.h_ex variable */) = ((modelica_real *)((data->modelData->realVarsData[682] /* comp.h_ex variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[682] /* comp.h_ex */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* comp.h_ex variable */));
  threadData->lastEquationSolved = 1362;
}

/*
equation index: 1363
type: SIMPLE_ASSIGN
$START.comp.h_su = comp.h_su_start
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1363};
  ((modelica_real *)((data->modelData->realVarsData[684] /* comp.h_su variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* comp.h_su_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */) = ((modelica_real *)((data->modelData->realVarsData[684] /* comp.h_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[684] /* comp.h_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */));
  threadData->lastEquationSolved = 1363;
}

/*
equation index: 1364
type: SIMPLE_ASSIGN
$START.comp.rho_su = RefrigerationTrainer.ClosedLoopM1e.comp.Medium.setState_pT(comp.p_su_start, comp.T_su_start, 0).d
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1364};
  ((modelica_real *)((data->modelData->realVarsData[685] /* comp.rho_su variable */).attribute .start.data))[0] = omc_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_setState__pT(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* comp.p_su_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* comp.T_su_start PARAM */), ((modelica_integer) 0))._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* comp.rho_su variable */) = ((modelica_real *)((data->modelData->realVarsData[685] /* comp.rho_su variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[685] /* comp.rho_su */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* comp.rho_su variable */));
  threadData->lastEquationSolved = 1364;
}

/*
equation index: 1365
type: SIMPLE_ASSIGN
$START.txv.DELTAp = txv.DELTAp_nom
*/
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1365};
  ((modelica_real *)((data->modelData->realVarsData[1268] /* txv.DELTAp variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[153]] /* txv.DELTAp_nom PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* txv.DELTAp variable */) = ((modelica_real *)((data->modelData->realVarsData[1268] /* txv.DELTAp variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1268] /* txv.DELTAp */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* txv.DELTAp variable */));
  threadData->lastEquationSolved = 1365;
}
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1e_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1314(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1315(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1316(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1317(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1318(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1319(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1320(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1321(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1322(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1323(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1324(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1325(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1326(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1327(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1328(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1329(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1330(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1331(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1332(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1333(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1334(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1335(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1336(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1337(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1338(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1339(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1340(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1341(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1342(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1343(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1344(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1345(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1346(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1347(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1348(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1349(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1350(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1351(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1352(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1353(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1354(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1355(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1356(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1357(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1358(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1359(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1360(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1361(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1362(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1363(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1364(data, threadData);
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1365(data, threadData);
  messageClose(OMC_LOG_INIT);
  
  return 0;
}

void RefrigerationTrainer_ClosedLoopM1e_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 1376
type: SIMPLE_ASSIGN
evap.Cells[5].TT = evap.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1376};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* evap.Cells[5].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[132]] /* evap.TT PARAM */);
  threadData->lastEquationSolved = 1376;
}

/*
equation index: 1377
type: SIMPLE_ASSIGN
evap.Cells[5].max_drhodt = evap.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1377};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[125]] /* evap.Cells[5].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[145]] /* evap.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1377;
}

/*
equation index: 1382
type: SIMPLE_ASSIGN
evap.Cells[5].hstart = evap.hstart[5]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1382};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* evap.Cells[5].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[144]] /* evap.hstart[5] PARAM */);
  threadData->lastEquationSolved = 1382;
}

/*
equation index: 1383
type: SIMPLE_ASSIGN
evap.pstart = p_evap_start
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1383};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[146]] /* evap.pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[149]] /* p_evap_start PARAM */);
  threadData->lastEquationSolved = 1383;
}

/*
equation index: 1384
type: SIMPLE_ASSIGN
evap.Cells[5].pstart = evap.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1384};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* evap.Cells[5].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[146]] /* evap.pstart PARAM */);
  threadData->lastEquationSolved = 1384;
}

/*
equation index: 1385
type: SIMPLE_ASSIGN
evap.Cells[5].Unom_v = evap.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1385};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* evap.Cells[5].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Unom_v PARAM */);
  threadData->lastEquationSolved = 1385;
}

/*
equation index: 1386
type: SIMPLE_ASSIGN
evap.Cells[5].Unom_tp = evap.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1386};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* evap.Cells[5].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1386;
}

/*
equation index: 1387
type: SIMPLE_ASSIGN
evap.Cells[5].Unom_l = evap.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1387};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* evap.Cells[5].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Unom_l PARAM */);
  threadData->lastEquationSolved = 1387;
}

/*
equation index: 1388
type: SIMPLE_ASSIGN
evap.Mdotnom = mdot_nom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1388};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* evap.Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[147]] /* mdot_nom PARAM */);
  threadData->lastEquationSolved = 1388;
}

/*
equation index: 1389
type: SIMPLE_ASSIGN
evap.Cells[5].Mdotnom = evap.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1389};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[90]] /* evap.Cells[5].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* evap.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1389;
}

/*
equation index: 1390
type: SIMPLE_ASSIGN
evap.Ai = 0.2 * evap.A
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1390};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* evap.Ai PARAM */) = (0.2) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[79]] /* evap.A PARAM */));
  threadData->lastEquationSolved = 1390;
}

/*
equation index: 1391
type: SIMPLE_ASSIGN
evap.Cells[5].Ai = evap.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1391};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* evap.Cells[5].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* evap.Ai PARAM */);
  threadData->lastEquationSolved = 1391;
}

/*
equation index: 1392
type: SIMPLE_ASSIGN
evap.Vi = 0.2 * evap.V
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1392};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* evap.Vi PARAM */) = (0.2) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* evap.V PARAM */));
  threadData->lastEquationSolved = 1392;
}

/*
equation index: 1393
type: SIMPLE_ASSIGN
evap.Cells[5].Vi = evap.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1393};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* evap.Cells[5].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* evap.Vi PARAM */);
  threadData->lastEquationSolved = 1393;
}

/*
equation index: 1394
type: SIMPLE_ASSIGN
evap.Cells[5].Nt = evap.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1394};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[5].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[39]] /* evap.Nt PARAM */);
  threadData->lastEquationSolved = 1394;
}

/*
equation index: 1398
type: SIMPLE_ASSIGN
evap.Cells[4].TT = evap.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1398};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* evap.Cells[4].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[132]] /* evap.TT PARAM */);
  threadData->lastEquationSolved = 1398;
}

/*
equation index: 1399
type: SIMPLE_ASSIGN
evap.Cells[4].max_drhodt = evap.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1399};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[124]] /* evap.Cells[4].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[145]] /* evap.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1399;
}

/*
equation index: 1404
type: SIMPLE_ASSIGN
evap.Cells[4].hstart = evap.hstart[4]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1404};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* evap.Cells[4].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* evap.hstart[4] PARAM */);
  threadData->lastEquationSolved = 1404;
}

/*
equation index: 1405
type: SIMPLE_ASSIGN
evap.Cells[4].pstart = evap.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1405};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[129]] /* evap.Cells[4].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[146]] /* evap.pstart PARAM */);
  threadData->lastEquationSolved = 1405;
}

/*
equation index: 1406
type: SIMPLE_ASSIGN
evap.Cells[4].Unom_v = evap.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1406};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* evap.Cells[4].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Unom_v PARAM */);
  threadData->lastEquationSolved = 1406;
}

/*
equation index: 1407
type: SIMPLE_ASSIGN
evap.Cells[4].Unom_tp = evap.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1407};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[104]] /* evap.Cells[4].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1407;
}

/*
equation index: 1408
type: SIMPLE_ASSIGN
evap.Cells[4].Unom_l = evap.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1408};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* evap.Cells[4].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Unom_l PARAM */);
  threadData->lastEquationSolved = 1408;
}

/*
equation index: 1409
type: SIMPLE_ASSIGN
evap.Cells[4].Mdotnom = evap.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1409};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[89]] /* evap.Cells[4].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* evap.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1409;
}

/*
equation index: 1410
type: SIMPLE_ASSIGN
evap.Cells[4].Ai = evap.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1410};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* evap.Cells[4].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* evap.Ai PARAM */);
  threadData->lastEquationSolved = 1410;
}

/*
equation index: 1411
type: SIMPLE_ASSIGN
evap.Cells[4].Vi = evap.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1411};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* evap.Cells[4].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* evap.Vi PARAM */);
  threadData->lastEquationSolved = 1411;
}

/*
equation index: 1412
type: SIMPLE_ASSIGN
evap.Cells[4].Nt = evap.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1412};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[4].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[39]] /* evap.Nt PARAM */);
  threadData->lastEquationSolved = 1412;
}

/*
equation index: 1416
type: SIMPLE_ASSIGN
evap.Cells[3].TT = evap.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1416};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* evap.Cells[3].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[132]] /* evap.TT PARAM */);
  threadData->lastEquationSolved = 1416;
}

/*
equation index: 1417
type: SIMPLE_ASSIGN
evap.Cells[3].max_drhodt = evap.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1417};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* evap.Cells[3].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[145]] /* evap.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1417;
}

/*
equation index: 1422
type: SIMPLE_ASSIGN
evap.Cells[3].hstart = evap.hstart[3]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1422};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* evap.Cells[3].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* evap.hstart[3] PARAM */);
  threadData->lastEquationSolved = 1422;
}

/*
equation index: 1423
type: SIMPLE_ASSIGN
evap.Cells[3].pstart = evap.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1423};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[128]] /* evap.Cells[3].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[146]] /* evap.pstart PARAM */);
  threadData->lastEquationSolved = 1423;
}

/*
equation index: 1424
type: SIMPLE_ASSIGN
evap.Cells[3].Unom_v = evap.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1424};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* evap.Cells[3].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Unom_v PARAM */);
  threadData->lastEquationSolved = 1424;
}

/*
equation index: 1425
type: SIMPLE_ASSIGN
evap.Cells[3].Unom_tp = evap.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1425};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* evap.Cells[3].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1425;
}

/*
equation index: 1426
type: SIMPLE_ASSIGN
evap.Cells[3].Unom_l = evap.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1426};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* evap.Cells[3].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Unom_l PARAM */);
  threadData->lastEquationSolved = 1426;
}

/*
equation index: 1427
type: SIMPLE_ASSIGN
evap.Cells[3].Mdotnom = evap.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1427};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* evap.Cells[3].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* evap.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1427;
}

/*
equation index: 1428
type: SIMPLE_ASSIGN
evap.Cells[3].Ai = evap.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1428};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* evap.Cells[3].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* evap.Ai PARAM */);
  threadData->lastEquationSolved = 1428;
}

/*
equation index: 1429
type: SIMPLE_ASSIGN
evap.Cells[3].Vi = evap.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1429};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[3].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* evap.Vi PARAM */);
  threadData->lastEquationSolved = 1429;
}

/*
equation index: 1430
type: SIMPLE_ASSIGN
evap.Cells[3].Nt = evap.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1430};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[3].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[39]] /* evap.Nt PARAM */);
  threadData->lastEquationSolved = 1430;
}

/*
equation index: 1434
type: SIMPLE_ASSIGN
evap.Cells[2].TT = evap.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1434};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* evap.Cells[2].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[132]] /* evap.TT PARAM */);
  threadData->lastEquationSolved = 1434;
}

/*
equation index: 1435
type: SIMPLE_ASSIGN
evap.Cells[2].max_drhodt = evap.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1435};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[122]] /* evap.Cells[2].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[145]] /* evap.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1435;
}

/*
equation index: 1440
type: SIMPLE_ASSIGN
evap.Cells[2].hstart = evap.hstart[2]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1440};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* evap.Cells[2].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* evap.hstart[2] PARAM */);
  threadData->lastEquationSolved = 1440;
}

/*
equation index: 1441
type: SIMPLE_ASSIGN
evap.Cells[2].pstart = evap.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1441};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[127]] /* evap.Cells[2].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[146]] /* evap.pstart PARAM */);
  threadData->lastEquationSolved = 1441;
}

/*
equation index: 1442
type: SIMPLE_ASSIGN
evap.Cells[2].Unom_v = evap.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1442};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[107]] /* evap.Cells[2].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Unom_v PARAM */);
  threadData->lastEquationSolved = 1442;
}

/*
equation index: 1443
type: SIMPLE_ASSIGN
evap.Cells[2].Unom_tp = evap.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1443};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[102]] /* evap.Cells[2].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1443;
}

/*
equation index: 1444
type: SIMPLE_ASSIGN
evap.Cells[2].Unom_l = evap.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1444};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* evap.Cells[2].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Unom_l PARAM */);
  threadData->lastEquationSolved = 1444;
}

/*
equation index: 1445
type: SIMPLE_ASSIGN
evap.Cells[2].Mdotnom = evap.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1445};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* evap.Cells[2].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* evap.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1445;
}

/*
equation index: 1446
type: SIMPLE_ASSIGN
evap.Cells[2].Ai = evap.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1446};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[82]] /* evap.Cells[2].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* evap.Ai PARAM */);
  threadData->lastEquationSolved = 1446;
}

/*
equation index: 1447
type: SIMPLE_ASSIGN
evap.Cells[2].Vi = evap.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1447};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[2].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* evap.Vi PARAM */);
  threadData->lastEquationSolved = 1447;
}

/*
equation index: 1448
type: SIMPLE_ASSIGN
evap.Cells[2].Nt = evap.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1448};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[2].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[39]] /* evap.Nt PARAM */);
  threadData->lastEquationSolved = 1448;
}

/*
equation index: 1452
type: SIMPLE_ASSIGN
evap.Cells[1].TT = evap.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1452};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* evap.Cells[1].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[132]] /* evap.TT PARAM */);
  threadData->lastEquationSolved = 1452;
}

/*
equation index: 1453
type: SIMPLE_ASSIGN
evap.Cells[1].max_drhodt = evap.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1453};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[121]] /* evap.Cells[1].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[145]] /* evap.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1453;
}

/*
equation index: 1458
type: SIMPLE_ASSIGN
evap.Cells[1].hstart = evap.hstart[1]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1458};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* evap.Cells[1].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* evap.hstart[1] PARAM */);
  threadData->lastEquationSolved = 1458;
}

/*
equation index: 1459
type: SIMPLE_ASSIGN
evap.Cells[1].pstart = evap.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1459};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[126]] /* evap.Cells[1].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[146]] /* evap.pstart PARAM */);
  threadData->lastEquationSolved = 1459;
}

/*
equation index: 1460
type: SIMPLE_ASSIGN
evap.Cells[1].Unom_v = evap.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1460};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* evap.Cells[1].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Unom_v PARAM */);
  threadData->lastEquationSolved = 1460;
}

/*
equation index: 1461
type: SIMPLE_ASSIGN
evap.Cells[1].Unom_tp = evap.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1461};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* evap.Cells[1].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1461;
}

/*
equation index: 1462
type: SIMPLE_ASSIGN
evap.Cells[1].Unom_l = evap.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1462};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* evap.Cells[1].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Unom_l PARAM */);
  threadData->lastEquationSolved = 1462;
}

/*
equation index: 1463
type: SIMPLE_ASSIGN
evap.Cells[1].Mdotnom = evap.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1463};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* evap.Cells[1].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* evap.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1463;
}

/*
equation index: 1464
type: SIMPLE_ASSIGN
evap.Cells[1].Ai = evap.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[81]] /* evap.Cells[1].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* evap.Ai PARAM */);
  threadData->lastEquationSolved = 1464;
}

/*
equation index: 1465
type: SIMPLE_ASSIGN
evap.Cells[1].Vi = evap.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1465};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* evap.Cells[1].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* evap.Vi PARAM */);
  threadData->lastEquationSolved = 1465;
}

/*
equation index: 1466
type: SIMPLE_ASSIGN
evap.Cells[1].Nt = evap.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1466};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[27]] /* evap.Cells[1].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[39]] /* evap.Nt PARAM */);
  threadData->lastEquationSolved = 1466;
}

/*
equation index: 1476
type: SIMPLE_ASSIGN
txv.p_nom = p_cond_start
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1476};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[157]] /* txv.p_nom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[148]] /* p_cond_start PARAM */);
  threadData->lastEquationSolved = 1476;
}

/*
equation index: 1477
type: SIMPLE_ASSIGN
txv.rho_nom = RefrigerationTrainer.ClosedLoopM1e.txv.Medium.density_pTX(txv.p_nom, txv.T_nom, {})
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1477};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* txv.rho_nom PARAM */) = omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_density__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[157]] /* txv.p_nom PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* txv.T_nom PARAM */), _OMC_LIT16);
  threadData->lastEquationSolved = 1477;
}

/*
equation index: 1478
type: SIMPLE_ASSIGN
txv.Mdot_nom = mdot_nom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1478};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[154]] /* txv.Mdot_nom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[147]] /* mdot_nom PARAM */);
  threadData->lastEquationSolved = 1478;
}

/*
equation index: 1485
type: SIMPLE_ASSIGN
cond.Cells[5].TT = cond.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1485};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* cond.Cells[5].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* cond.TT PARAM */);
  threadData->lastEquationSolved = 1485;
}

/*
equation index: 1486
type: SIMPLE_ASSIGN
cond.Cells[5].max_drhodt = cond.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1486};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* cond.Cells[5].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[76]] /* cond.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1486;
}

/*
equation index: 1491
type: SIMPLE_ASSIGN
cond.Cells[5].hstart = cond.hstart[5]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1491};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* cond.Cells[5].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[75]] /* cond.hstart[5] PARAM */);
  threadData->lastEquationSolved = 1491;
}

/*
equation index: 1492
type: SIMPLE_ASSIGN
cond.pstart = p_cond_start
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1492};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[77]] /* cond.pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[148]] /* p_cond_start PARAM */);
  threadData->lastEquationSolved = 1492;
}

/*
equation index: 1493
type: SIMPLE_ASSIGN
cond.Cells[5].pstart = cond.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1493};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[61]] /* cond.Cells[5].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[77]] /* cond.pstart PARAM */);
  threadData->lastEquationSolved = 1493;
}

/*
equation index: 1494
type: SIMPLE_ASSIGN
cond.Cells[5].Unom_v = cond.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1494};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* cond.Cells[5].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* cond.Unom_v PARAM */);
  threadData->lastEquationSolved = 1494;
}

/*
equation index: 1495
type: SIMPLE_ASSIGN
cond.Cells[5].Unom_tp = cond.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1495};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[36]] /* cond.Cells[5].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1495;
}

/*
equation index: 1496
type: SIMPLE_ASSIGN
cond.Cells[5].Unom_l = cond.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1496};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[31]] /* cond.Cells[5].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Unom_l PARAM */);
  threadData->lastEquationSolved = 1496;
}

/*
equation index: 1497
type: SIMPLE_ASSIGN
cond.Mdotnom = mdot_nom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1497};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[62]] /* cond.Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[147]] /* mdot_nom PARAM */);
  threadData->lastEquationSolved = 1497;
}

/*
equation index: 1498
type: SIMPLE_ASSIGN
cond.Cells[5].Mdotnom = cond.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1498};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* cond.Cells[5].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[62]] /* cond.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1498;
}

/*
equation index: 1499
type: SIMPLE_ASSIGN
cond.Ai = 0.2 * cond.A
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1499};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* cond.Ai PARAM */) = (0.2) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* cond.A PARAM */));
  threadData->lastEquationSolved = 1499;
}

/*
equation index: 1500
type: SIMPLE_ASSIGN
cond.Cells[5].Ai = cond.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1500};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[16]] /* cond.Cells[5].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* cond.Ai PARAM */);
  threadData->lastEquationSolved = 1500;
}

/*
equation index: 1501
type: SIMPLE_ASSIGN
cond.Vi = 0.2 * cond.V
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1501};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* cond.Vi PARAM */) = (0.2) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[69]] /* cond.V PARAM */));
  threadData->lastEquationSolved = 1501;
}

/*
equation index: 1502
type: SIMPLE_ASSIGN
cond.Cells[5].Vi = cond.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1502};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* cond.Cells[5].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* cond.Vi PARAM */);
  threadData->lastEquationSolved = 1502;
}

/*
equation index: 1503
type: SIMPLE_ASSIGN
cond.Cells[5].Nt = cond.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1503};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[5].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[18]] /* cond.Nt PARAM */);
  threadData->lastEquationSolved = 1503;
}

/*
equation index: 1507
type: SIMPLE_ASSIGN
cond.Cells[4].TT = cond.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1507};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* cond.Cells[4].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* cond.TT PARAM */);
  threadData->lastEquationSolved = 1507;
}

/*
equation index: 1508
type: SIMPLE_ASSIGN
cond.Cells[4].max_drhodt = cond.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* cond.Cells[4].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[76]] /* cond.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1508;
}

/*
equation index: 1513
type: SIMPLE_ASSIGN
cond.Cells[4].hstart = cond.hstart[4]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1513};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* cond.Cells[4].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[74]] /* cond.hstart[4] PARAM */);
  threadData->lastEquationSolved = 1513;
}

/*
equation index: 1514
type: SIMPLE_ASSIGN
cond.Cells[4].pstart = cond.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1514};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[60]] /* cond.Cells[4].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[77]] /* cond.pstart PARAM */);
  threadData->lastEquationSolved = 1514;
}

/*
equation index: 1515
type: SIMPLE_ASSIGN
cond.Cells[4].Unom_v = cond.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1515};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* cond.Cells[4].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* cond.Unom_v PARAM */);
  threadData->lastEquationSolved = 1515;
}

/*
equation index: 1516
type: SIMPLE_ASSIGN
cond.Cells[4].Unom_tp = cond.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1516};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[35]] /* cond.Cells[4].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1516;
}

/*
equation index: 1517
type: SIMPLE_ASSIGN
cond.Cells[4].Unom_l = cond.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1517};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[30]] /* cond.Cells[4].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Unom_l PARAM */);
  threadData->lastEquationSolved = 1517;
}

/*
equation index: 1518
type: SIMPLE_ASSIGN
cond.Cells[4].Mdotnom = cond.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1518};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* cond.Cells[4].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[62]] /* cond.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1518;
}

/*
equation index: 1519
type: SIMPLE_ASSIGN
cond.Cells[4].Ai = cond.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1519};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* cond.Cells[4].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* cond.Ai PARAM */);
  threadData->lastEquationSolved = 1519;
}

/*
equation index: 1520
type: SIMPLE_ASSIGN
cond.Cells[4].Vi = cond.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1520};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* cond.Cells[4].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* cond.Vi PARAM */);
  threadData->lastEquationSolved = 1520;
}

/*
equation index: 1521
type: SIMPLE_ASSIGN
cond.Cells[4].Nt = cond.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1521};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[4].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[18]] /* cond.Nt PARAM */);
  threadData->lastEquationSolved = 1521;
}

/*
equation index: 1525
type: SIMPLE_ASSIGN
cond.Cells[3].TT = cond.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1525};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* cond.Cells[3].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* cond.TT PARAM */);
  threadData->lastEquationSolved = 1525;
}

/*
equation index: 1526
type: SIMPLE_ASSIGN
cond.Cells[3].max_drhodt = cond.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1526};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* cond.Cells[3].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[76]] /* cond.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1526;
}

/*
equation index: 1531
type: SIMPLE_ASSIGN
cond.Cells[3].hstart = cond.hstart[3]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1531};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* cond.Cells[3].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[73]] /* cond.hstart[3] PARAM */);
  threadData->lastEquationSolved = 1531;
}

/*
equation index: 1532
type: SIMPLE_ASSIGN
cond.Cells[3].pstart = cond.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* cond.Cells[3].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[77]] /* cond.pstart PARAM */);
  threadData->lastEquationSolved = 1532;
}

/*
equation index: 1533
type: SIMPLE_ASSIGN
cond.Cells[3].Unom_v = cond.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1533};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* cond.Cells[3].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* cond.Unom_v PARAM */);
  threadData->lastEquationSolved = 1533;
}

/*
equation index: 1534
type: SIMPLE_ASSIGN
cond.Cells[3].Unom_tp = cond.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1534};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[34]] /* cond.Cells[3].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1534;
}

/*
equation index: 1535
type: SIMPLE_ASSIGN
cond.Cells[3].Unom_l = cond.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1535};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* cond.Cells[3].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Unom_l PARAM */);
  threadData->lastEquationSolved = 1535;
}

/*
equation index: 1536
type: SIMPLE_ASSIGN
cond.Cells[3].Mdotnom = cond.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1536};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* cond.Cells[3].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[62]] /* cond.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1536;
}

/*
equation index: 1537
type: SIMPLE_ASSIGN
cond.Cells[3].Ai = cond.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1537};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* cond.Cells[3].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* cond.Ai PARAM */);
  threadData->lastEquationSolved = 1537;
}

/*
equation index: 1538
type: SIMPLE_ASSIGN
cond.Cells[3].Vi = cond.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1538};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* cond.Cells[3].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* cond.Vi PARAM */);
  threadData->lastEquationSolved = 1538;
}

/*
equation index: 1539
type: SIMPLE_ASSIGN
cond.Cells[3].Nt = cond.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1539};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[3].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[18]] /* cond.Nt PARAM */);
  threadData->lastEquationSolved = 1539;
}

/*
equation index: 1543
type: SIMPLE_ASSIGN
cond.Cells[2].TT = cond.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1543};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* cond.Cells[2].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* cond.TT PARAM */);
  threadData->lastEquationSolved = 1543;
}

/*
equation index: 1544
type: SIMPLE_ASSIGN
cond.Cells[2].max_drhodt = cond.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1544};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[53]] /* cond.Cells[2].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[76]] /* cond.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1544;
}

/*
equation index: 1549
type: SIMPLE_ASSIGN
cond.Cells[2].hstart = cond.hstart[2]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1549};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* cond.Cells[2].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[72]] /* cond.hstart[2] PARAM */);
  threadData->lastEquationSolved = 1549;
}

/*
equation index: 1550
type: SIMPLE_ASSIGN
cond.Cells[2].pstart = cond.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1550};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* cond.Cells[2].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[77]] /* cond.pstart PARAM */);
  threadData->lastEquationSolved = 1550;
}

/*
equation index: 1551
type: SIMPLE_ASSIGN
cond.Cells[2].Unom_v = cond.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1551};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* cond.Cells[2].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* cond.Unom_v PARAM */);
  threadData->lastEquationSolved = 1551;
}

/*
equation index: 1552
type: SIMPLE_ASSIGN
cond.Cells[2].Unom_tp = cond.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1552};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[33]] /* cond.Cells[2].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1552;
}

/*
equation index: 1553
type: SIMPLE_ASSIGN
cond.Cells[2].Unom_l = cond.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1553};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* cond.Cells[2].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Unom_l PARAM */);
  threadData->lastEquationSolved = 1553;
}

/*
equation index: 1554
type: SIMPLE_ASSIGN
cond.Cells[2].Mdotnom = cond.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1554};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* cond.Cells[2].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[62]] /* cond.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1554;
}

/*
equation index: 1555
type: SIMPLE_ASSIGN
cond.Cells[2].Ai = cond.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1555};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* cond.Cells[2].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* cond.Ai PARAM */);
  threadData->lastEquationSolved = 1555;
}

/*
equation index: 1556
type: SIMPLE_ASSIGN
cond.Cells[2].Vi = cond.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1556};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* cond.Cells[2].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* cond.Vi PARAM */);
  threadData->lastEquationSolved = 1556;
}

/*
equation index: 1557
type: SIMPLE_ASSIGN
cond.Cells[2].Nt = cond.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1557};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[2].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[18]] /* cond.Nt PARAM */);
  threadData->lastEquationSolved = 1557;
}

/*
equation index: 1561
type: SIMPLE_ASSIGN
cond.Cells[1].TT = cond.TT
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1561};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[22]] /* cond.Cells[1].TT PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* cond.TT PARAM */);
  threadData->lastEquationSolved = 1561;
}

/*
equation index: 1562
type: SIMPLE_ASSIGN
cond.Cells[1].max_drhodt = cond.max_drhodt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1562};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* cond.Cells[1].max_drhodt PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[76]] /* cond.max_drhodt PARAM */);
  threadData->lastEquationSolved = 1562;
}

/*
equation index: 1567
type: SIMPLE_ASSIGN
cond.Cells[1].hstart = cond.hstart[1]
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1567};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* cond.Cells[1].hstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* cond.hstart[1] PARAM */);
  threadData->lastEquationSolved = 1567;
}

/*
equation index: 1568
type: SIMPLE_ASSIGN
cond.Cells[1].pstart = cond.pstart
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1568};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* cond.Cells[1].pstart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[77]] /* cond.pstart PARAM */);
  threadData->lastEquationSolved = 1568;
}

/*
equation index: 1569
type: SIMPLE_ASSIGN
cond.Cells[1].Unom_v = cond.Unom_v
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1569};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* cond.Cells[1].Unom_v PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* cond.Unom_v PARAM */);
  threadData->lastEquationSolved = 1569;
}

/*
equation index: 1570
type: SIMPLE_ASSIGN
cond.Cells[1].Unom_tp = cond.Unom_tp
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1570};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* cond.Cells[1].Unom_tp PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Unom_tp PARAM */);
  threadData->lastEquationSolved = 1570;
}

/*
equation index: 1571
type: SIMPLE_ASSIGN
cond.Cells[1].Unom_l = cond.Unom_l
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1571};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* cond.Cells[1].Unom_l PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Unom_l PARAM */);
  threadData->lastEquationSolved = 1571;
}

/*
equation index: 1572
type: SIMPLE_ASSIGN
cond.Cells[1].Mdotnom = cond.Mdotnom
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1572};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[17]] /* cond.Cells[1].Mdotnom PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[62]] /* cond.Mdotnom PARAM */);
  threadData->lastEquationSolved = 1572;
}

/*
equation index: 1573
type: SIMPLE_ASSIGN
cond.Cells[1].Ai = cond.Ai
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1573};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* cond.Cells[1].Ai PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* cond.Ai PARAM */);
  threadData->lastEquationSolved = 1573;
}

/*
equation index: 1574
type: SIMPLE_ASSIGN
cond.Cells[1].Vi = cond.Vi
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1574};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* cond.Cells[1].Vi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* cond.Vi PARAM */);
  threadData->lastEquationSolved = 1574;
}

/*
equation index: 1575
type: SIMPLE_ASSIGN
cond.Cells[1].Nt = cond.Nt
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1575};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* cond.Cells[1].Nt PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[18]] /* cond.Nt PARAM */);
  threadData->lastEquationSolved = 1575;
}

/*
equation index: 1583
type: SIMPLE_ASSIGN
comp.p_ex_start = p_cond_start
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1583};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* comp.p_ex_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[148]] /* p_cond_start PARAM */);
  threadData->lastEquationSolved = 1583;
}

/*
equation index: 1584
type: SIMPLE_ASSIGN
comp.h_ex_start = RefrigerationTrainer.ClosedLoopM1e.comp.Medium.setState_pT(comp.p_ex_start, comp.T_su_start, 0).h
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1584};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* comp.h_ex_start PARAM */) = omc_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_setState__pT(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* comp.p_ex_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* comp.T_su_start PARAM */), ((modelica_integer) 0))._h;
  threadData->lastEquationSolved = 1584;
}

/*
equation index: 1585
type: SIMPLE_ASSIGN
comp.p_su_start = p_evap_start
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1585};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* comp.p_su_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[149]] /* p_evap_start PARAM */);
  threadData->lastEquationSolved = 1585;
}

/*
equation index: 1586
type: SIMPLE_ASSIGN
comp.h_su_start = RefrigerationTrainer.ClosedLoopM1e.comp.Medium.setState_pT(comp.p_su_start, comp.T_su_start, 0).h
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1586};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* comp.h_su_start PARAM */) = omc_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_setState__pT(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* comp.p_su_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* comp.T_su_start PARAM */), ((modelica_integer) 0))._h;
  threadData->lastEquationSolved = 1586;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_669(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_668(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_667(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_666(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_662(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_590(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_589(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_588(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_587(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_583(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_743(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_582(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_581(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_580(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_579(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_578(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_577(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_576(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_575(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_574(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_573(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_495(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_142(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_141(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_140(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_139(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_138(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_137(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_136(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_135(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_134(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_133(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_132(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_131(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_130(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_129(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_128(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_127(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_126(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_125(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_124(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_123(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_122(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_121(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_120(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_119(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_118(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_117(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_116(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_115(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_114(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_113(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_112(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_111(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_110(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_109(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_108(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_107(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_106(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_105(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_104(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_103(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_102(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_101(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_100(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_99(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_98(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_97(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_96(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_95(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_94(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_93(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_92(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_91(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_90(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_89(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_88(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_87(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_86(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_85(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_84(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_83(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_82(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_81(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_80(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_79(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_78(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_77(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_76(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_75(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_74(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_73(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_72(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_71(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_70(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_69(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_68(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_67(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_66(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_65(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_64(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_63(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_62(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_61(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_60(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_59(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_58(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_57(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_56(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_55(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_54(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_53(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_52(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_51(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_50(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_49(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_48(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_47(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_46(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_45(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_44(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_43(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_42(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_41(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_40(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_39(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_38(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_37(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_36(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_35(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_34(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_33(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_32(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_31(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_30(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_29(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_28(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_27(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_26(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_25(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_24(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_23(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_22(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_21(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_20(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_19(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_18(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_17(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_16(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_15(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_14(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_13(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_12(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_11(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_10(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_9(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_8(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_7(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_6(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_5(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_4(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_3(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 1751
type: ALGORITHM

  assert(wall_cond.port.N >= 1, "Variable violating min constraint: 1 <= wall_cond.port.N, has value: " + String(wall_cond.port.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1751};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,69,"Variable violating min constraint: 1 <= wall_cond.port.N, has value: ");
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  static int tmp4 = 0;
  if(!tmp4)
  {
    tmp0 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[44]] /* wall_cond.port.N PARAM */),((modelica_integer) 1));
    if(!tmp0)
    {
      tmp2 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[44]] /* wall_cond.port.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3 = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        const char* assert_cond = "(wall_cond.port.N >= 1)";
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
  threadData->lastEquationSolved = 1751;
}

/*
equation index: 1752
type: ALGORITHM

  assert(wall_evap.port.N >= 1, "Variable violating min constraint: 1 <= wall_evap.port.N, has value: " + String(wall_evap.port.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1752};
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,69,"Variable violating min constraint: 1 <= wall_evap.port.N, has value: ");
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  static int tmp9 = 0;
  if(!tmp9)
  {
    tmp5 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[46]] /* wall_evap.port.N PARAM */),((modelica_integer) 1));
    if(!tmp5)
    {
      tmp7 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[46]] /* wall_evap.port.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta8 = stringAppend(MMC_REFSTRINGLIT(tmp6),tmp7);
      {
        const char* assert_cond = "(wall_evap.port.N >= 1)";
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
  threadData->lastEquationSolved = 1752;
}

/*
equation index: 1753
type: ALGORITHM

  assert(evap.thermalPortConverter.multi.N >= 1, "Variable violating min constraint: 1 <= evap.thermalPortConverter.multi.N, has value: " + String(evap.thermalPortConverter.multi.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1753};
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,86,"Variable violating min constraint: 1 <= evap.thermalPortConverter.multi.N, has value: ");
  modelica_string tmp12;
  modelica_metatype tmpMeta13;
  static int tmp14 = 0;
  if(!tmp14)
  {
    tmp10 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[42]] /* evap.thermalPortConverter.multi.N PARAM */),((modelica_integer) 1));
    if(!tmp10)
    {
      tmp12 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[42]] /* evap.thermalPortConverter.multi.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta13 = stringAppend(MMC_REFSTRINGLIT(tmp11),tmp12);
      {
        const char* assert_cond = "(evap.thermalPortConverter.multi.N >= 1)";
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
  threadData->lastEquationSolved = 1753;
}

/*
equation index: 1754
type: ALGORITHM

  assert(evap.Cells[5].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[5].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[5].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(evap.Cells[5].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1754};
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[5].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp18;
  modelica_metatype tmpMeta19;
  static int tmp20 = 0;
  if(!tmp20)
  {
    tmp15 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[26]] /* evap.Cells[5].Discretization PARAM */),1);
    tmp16 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[26]] /* evap.Cells[5].Discretization PARAM */),5);
    if(!(tmp15 && tmp16))
    {
      tmp18 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[26]] /* evap.Cells[5].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta19 = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        const char* assert_cond = "(evap.Cells[5].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[5].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta19));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta19));
        }
      }
      tmp20 = 1;
    }
  }
  threadData->lastEquationSolved = 1754;
}

/*
equation index: 1755
type: ALGORITHM

  assert(evap.hstart[5] >= -1e10 and evap.hstart[5] <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.hstart[5] <= 1e10, has value: " + String(evap.hstart[5], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1755};
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,83,"Variable violating min/max constraint: -1e10 <= evap.hstart[5] <= 1e10, has value: ");
  modelica_string tmp24;
  modelica_metatype tmpMeta25;
  static int tmp26 = 0;
  if(!tmp26)
  {
    tmp21 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[144]] /* evap.hstart[5] PARAM */),-1e10);
    tmp22 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[144]] /* evap.hstart[5] PARAM */),1e10);
    if(!(tmp21 && tmp22))
    {
      tmp24 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[144]] /* evap.hstart[5] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta25 = stringAppend(MMC_REFSTRINGLIT(tmp23),tmp24);
      {
        const char* assert_cond = "(evap.hstart[5] >= -1e10 and evap.hstart[5] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta25));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta25));
        }
      }
      tmp26 = 1;
    }
  }
  threadData->lastEquationSolved = 1755;
}

/*
equation index: 1756
type: ALGORITHM

  assert(evap.Cells[5].hstart >= -1e10 and evap.Cells[5].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[5].hstart <= 1e10, has value: " + String(evap.Cells[5].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1756};
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,89,"Variable violating min/max constraint: -1e10 <= evap.Cells[5].hstart <= 1e10, has value: ");
  modelica_string tmp30;
  modelica_metatype tmpMeta31;
  static int tmp32 = 0;
  if(!tmp32)
  {
    tmp27 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* evap.Cells[5].hstart PARAM */),-1e10);
    tmp28 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* evap.Cells[5].hstart PARAM */),1e10);
    if(!(tmp27 && tmp28))
    {
      tmp30 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* evap.Cells[5].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta31 = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        const char* assert_cond = "(evap.Cells[5].hstart >= -1e10 and evap.Cells[5].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta31));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta31));
        }
      }
      tmp32 = 1;
    }
  }
  threadData->lastEquationSolved = 1756;
}

/*
equation index: 1757
type: ALGORITHM

  assert(evap.Nt >= 1, "Variable violating min constraint: 1 <= evap.Nt, has value: " + String(evap.Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1757};
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,60,"Variable violating min constraint: 1 <= evap.Nt, has value: ");
  modelica_string tmp35;
  modelica_metatype tmpMeta36;
  static int tmp37 = 0;
  if(!tmp37)
  {
    tmp33 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[39]] /* evap.Nt PARAM */),((modelica_integer) 1));
    if(!tmp33)
    {
      tmp35 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[39]] /* evap.Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta36 = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      {
        const char* assert_cond = "(evap.Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",40,3,40,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta36));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",40,3,40,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta36));
        }
      }
      tmp37 = 1;
    }
  }
  threadData->lastEquationSolved = 1757;
}

/*
equation index: 1758
type: ALGORITHM

  assert(evap.Cells[5].Nt >= 1, "Variable violating min constraint: 1 <= evap.Cells[5].Nt, has value: " + String(evap.Cells[5].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1758};
  modelica_boolean tmp38;
  static const MMC_DEFSTRINGLIT(tmp39,69,"Variable violating min constraint: 1 <= evap.Cells[5].Nt, has value: ");
  modelica_string tmp40;
  modelica_metatype tmpMeta41;
  static int tmp42 = 0;
  if(!tmp42)
  {
    tmp38 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[5].Nt PARAM */),((modelica_integer) 1));
    if(!tmp38)
    {
      tmp40 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[5].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta41 = stringAppend(MMC_REFSTRINGLIT(tmp39),tmp40);
      {
        const char* assert_cond = "(evap.Cells[5].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta41));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta41));
        }
      }
      tmp42 = 1;
    }
  }
  threadData->lastEquationSolved = 1758;
}

/*
equation index: 1759
type: ALGORITHM

  assert(evap.Cells[4].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[4].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[4].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(evap.Cells[4].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1759};
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[4].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp46;
  modelica_metatype tmpMeta47;
  static int tmp48 = 0;
  if(!tmp48)
  {
    tmp43 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* evap.Cells[4].Discretization PARAM */),1);
    tmp44 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* evap.Cells[4].Discretization PARAM */),5);
    if(!(tmp43 && tmp44))
    {
      tmp46 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* evap.Cells[4].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta47 = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        const char* assert_cond = "(evap.Cells[4].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[4].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta47));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta47));
        }
      }
      tmp48 = 1;
    }
  }
  threadData->lastEquationSolved = 1759;
}

/*
equation index: 1760
type: ALGORITHM

  assert(evap.hstart[4] >= -1e10 and evap.hstart[4] <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.hstart[4] <= 1e10, has value: " + String(evap.hstart[4], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1760};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  static const MMC_DEFSTRINGLIT(tmp51,83,"Variable violating min/max constraint: -1e10 <= evap.hstart[4] <= 1e10, has value: ");
  modelica_string tmp52;
  modelica_metatype tmpMeta53;
  static int tmp54 = 0;
  if(!tmp54)
  {
    tmp49 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* evap.hstart[4] PARAM */),-1e10);
    tmp50 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* evap.hstart[4] PARAM */),1e10);
    if(!(tmp49 && tmp50))
    {
      tmp52 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* evap.hstart[4] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta53 = stringAppend(MMC_REFSTRINGLIT(tmp51),tmp52);
      {
        const char* assert_cond = "(evap.hstart[4] >= -1e10 and evap.hstart[4] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta53));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta53));
        }
      }
      tmp54 = 1;
    }
  }
  threadData->lastEquationSolved = 1760;
}

/*
equation index: 1761
type: ALGORITHM

  assert(evap.Cells[4].hstart >= -1e10 and evap.Cells[4].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[4].hstart <= 1e10, has value: " + String(evap.Cells[4].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1761};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,89,"Variable violating min/max constraint: -1e10 <= evap.Cells[4].hstart <= 1e10, has value: ");
  modelica_string tmp58;
  modelica_metatype tmpMeta59;
  static int tmp60 = 0;
  if(!tmp60)
  {
    tmp55 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* evap.Cells[4].hstart PARAM */),-1e10);
    tmp56 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* evap.Cells[4].hstart PARAM */),1e10);
    if(!(tmp55 && tmp56))
    {
      tmp58 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* evap.Cells[4].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta59 = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        const char* assert_cond = "(evap.Cells[4].hstart >= -1e10 and evap.Cells[4].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta59));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta59));
        }
      }
      tmp60 = 1;
    }
  }
  threadData->lastEquationSolved = 1761;
}

/*
equation index: 1762
type: ALGORITHM

  assert(evap.Cells[4].Nt >= 1, "Variable violating min constraint: 1 <= evap.Cells[4].Nt, has value: " + String(evap.Cells[4].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1762};
  modelica_boolean tmp61;
  static const MMC_DEFSTRINGLIT(tmp62,69,"Variable violating min constraint: 1 <= evap.Cells[4].Nt, has value: ");
  modelica_string tmp63;
  modelica_metatype tmpMeta64;
  static int tmp65 = 0;
  if(!tmp65)
  {
    tmp61 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[4].Nt PARAM */),((modelica_integer) 1));
    if(!tmp61)
    {
      tmp63 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[4].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta64 = stringAppend(MMC_REFSTRINGLIT(tmp62),tmp63);
      {
        const char* assert_cond = "(evap.Cells[4].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta64));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta64));
        }
      }
      tmp65 = 1;
    }
  }
  threadData->lastEquationSolved = 1762;
}

/*
equation index: 1763
type: ALGORITHM

  assert(evap.Cells[3].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[3].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[3].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(evap.Cells[3].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1763};
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  static const MMC_DEFSTRINGLIT(tmp68,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[3].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp69;
  modelica_metatype tmpMeta70;
  static int tmp71 = 0;
  if(!tmp71)
  {
    tmp66 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[24]] /* evap.Cells[3].Discretization PARAM */),1);
    tmp67 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[24]] /* evap.Cells[3].Discretization PARAM */),5);
    if(!(tmp66 && tmp67))
    {
      tmp69 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[24]] /* evap.Cells[3].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta70 = stringAppend(MMC_REFSTRINGLIT(tmp68),tmp69);
      {
        const char* assert_cond = "(evap.Cells[3].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[3].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta70));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta70));
        }
      }
      tmp71 = 1;
    }
  }
  threadData->lastEquationSolved = 1763;
}

/*
equation index: 1764
type: ALGORITHM

  assert(evap.hstart[3] >= -1e10 and evap.hstart[3] <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.hstart[3] <= 1e10, has value: " + String(evap.hstart[3], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1764};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,83,"Variable violating min/max constraint: -1e10 <= evap.hstart[3] <= 1e10, has value: ");
  modelica_string tmp75;
  modelica_metatype tmpMeta76;
  static int tmp77 = 0;
  if(!tmp77)
  {
    tmp72 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* evap.hstart[3] PARAM */),-1e10);
    tmp73 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* evap.hstart[3] PARAM */),1e10);
    if(!(tmp72 && tmp73))
    {
      tmp75 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* evap.hstart[3] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta76 = stringAppend(MMC_REFSTRINGLIT(tmp74),tmp75);
      {
        const char* assert_cond = "(evap.hstart[3] >= -1e10 and evap.hstart[3] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta76));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta76));
        }
      }
      tmp77 = 1;
    }
  }
  threadData->lastEquationSolved = 1764;
}

/*
equation index: 1765
type: ALGORITHM

  assert(evap.Cells[3].hstart >= -1e10 and evap.Cells[3].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[3].hstart <= 1e10, has value: " + String(evap.Cells[3].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1765};
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  static const MMC_DEFSTRINGLIT(tmp80,89,"Variable violating min/max constraint: -1e10 <= evap.Cells[3].hstart <= 1e10, has value: ");
  modelica_string tmp81;
  modelica_metatype tmpMeta82;
  static int tmp83 = 0;
  if(!tmp83)
  {
    tmp78 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* evap.Cells[3].hstart PARAM */),-1e10);
    tmp79 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* evap.Cells[3].hstart PARAM */),1e10);
    if(!(tmp78 && tmp79))
    {
      tmp81 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* evap.Cells[3].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta82 = stringAppend(MMC_REFSTRINGLIT(tmp80),tmp81);
      {
        const char* assert_cond = "(evap.Cells[3].hstart >= -1e10 and evap.Cells[3].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta82));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta82));
        }
      }
      tmp83 = 1;
    }
  }
  threadData->lastEquationSolved = 1765;
}

/*
equation index: 1766
type: ALGORITHM

  assert(evap.Cells[3].Nt >= 1, "Variable violating min constraint: 1 <= evap.Cells[3].Nt, has value: " + String(evap.Cells[3].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1766};
  modelica_boolean tmp84;
  static const MMC_DEFSTRINGLIT(tmp85,69,"Variable violating min constraint: 1 <= evap.Cells[3].Nt, has value: ");
  modelica_string tmp86;
  modelica_metatype tmpMeta87;
  static int tmp88 = 0;
  if(!tmp88)
  {
    tmp84 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[3].Nt PARAM */),((modelica_integer) 1));
    if(!tmp84)
    {
      tmp86 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[3].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta87 = stringAppend(MMC_REFSTRINGLIT(tmp85),tmp86);
      {
        const char* assert_cond = "(evap.Cells[3].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta87));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta87));
        }
      }
      tmp88 = 1;
    }
  }
  threadData->lastEquationSolved = 1766;
}

/*
equation index: 1767
type: ALGORITHM

  assert(evap.Cells[2].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[2].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[2].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(evap.Cells[2].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1767};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  static const MMC_DEFSTRINGLIT(tmp91,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[2].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp92;
  modelica_metatype tmpMeta93;
  static int tmp94 = 0;
  if(!tmp94)
  {
    tmp89 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[23]] /* evap.Cells[2].Discretization PARAM */),1);
    tmp90 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[23]] /* evap.Cells[2].Discretization PARAM */),5);
    if(!(tmp89 && tmp90))
    {
      tmp92 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[23]] /* evap.Cells[2].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta93 = stringAppend(MMC_REFSTRINGLIT(tmp91),tmp92);
      {
        const char* assert_cond = "(evap.Cells[2].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[2].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta93));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta93));
        }
      }
      tmp94 = 1;
    }
  }
  threadData->lastEquationSolved = 1767;
}

/*
equation index: 1768
type: ALGORITHM

  assert(evap.hstart[2] >= -1e10 and evap.hstart[2] <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.hstart[2] <= 1e10, has value: " + String(evap.hstart[2], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1768};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  static const MMC_DEFSTRINGLIT(tmp97,83,"Variable violating min/max constraint: -1e10 <= evap.hstart[2] <= 1e10, has value: ");
  modelica_string tmp98;
  modelica_metatype tmpMeta99;
  static int tmp100 = 0;
  if(!tmp100)
  {
    tmp95 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* evap.hstart[2] PARAM */),-1e10);
    tmp96 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* evap.hstart[2] PARAM */),1e10);
    if(!(tmp95 && tmp96))
    {
      tmp98 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* evap.hstart[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta99 = stringAppend(MMC_REFSTRINGLIT(tmp97),tmp98);
      {
        const char* assert_cond = "(evap.hstart[2] >= -1e10 and evap.hstart[2] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta99));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta99));
        }
      }
      tmp100 = 1;
    }
  }
  threadData->lastEquationSolved = 1768;
}

/*
equation index: 1769
type: ALGORITHM

  assert(evap.Cells[2].hstart >= -1e10 and evap.Cells[2].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[2].hstart <= 1e10, has value: " + String(evap.Cells[2].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1769};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  static const MMC_DEFSTRINGLIT(tmp103,89,"Variable violating min/max constraint: -1e10 <= evap.Cells[2].hstart <= 1e10, has value: ");
  modelica_string tmp104;
  modelica_metatype tmpMeta105;
  static int tmp106 = 0;
  if(!tmp106)
  {
    tmp101 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* evap.Cells[2].hstart PARAM */),-1e10);
    tmp102 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* evap.Cells[2].hstart PARAM */),1e10);
    if(!(tmp101 && tmp102))
    {
      tmp104 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* evap.Cells[2].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta105 = stringAppend(MMC_REFSTRINGLIT(tmp103),tmp104);
      {
        const char* assert_cond = "(evap.Cells[2].hstart >= -1e10 and evap.Cells[2].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta105));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta105));
        }
      }
      tmp106 = 1;
    }
  }
  threadData->lastEquationSolved = 1769;
}

/*
equation index: 1770
type: ALGORITHM

  assert(evap.Cells[2].Nt >= 1, "Variable violating min constraint: 1 <= evap.Cells[2].Nt, has value: " + String(evap.Cells[2].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1770};
  modelica_boolean tmp107;
  static const MMC_DEFSTRINGLIT(tmp108,69,"Variable violating min constraint: 1 <= evap.Cells[2].Nt, has value: ");
  modelica_string tmp109;
  modelica_metatype tmpMeta110;
  static int tmp111 = 0;
  if(!tmp111)
  {
    tmp107 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[2].Nt PARAM */),((modelica_integer) 1));
    if(!tmp107)
    {
      tmp109 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[2].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta110 = stringAppend(MMC_REFSTRINGLIT(tmp108),tmp109);
      {
        const char* assert_cond = "(evap.Cells[2].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta110));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta110));
        }
      }
      tmp111 = 1;
    }
  }
  threadData->lastEquationSolved = 1770;
}

/*
equation index: 1771
type: ALGORITHM

  assert(evap.Cells[1].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[1].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[1].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(evap.Cells[1].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1771};
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  static const MMC_DEFSTRINGLIT(tmp114,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Cells[1].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp115;
  modelica_metatype tmpMeta116;
  static int tmp117 = 0;
  if(!tmp117)
  {
    tmp112 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* evap.Cells[1].Discretization PARAM */),1);
    tmp113 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* evap.Cells[1].Discretization PARAM */),5);
    if(!(tmp112 && tmp113))
    {
      tmp115 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* evap.Cells[1].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta116 = stringAppend(MMC_REFSTRINGLIT(tmp114),tmp115);
      {
        const char* assert_cond = "(evap.Cells[1].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Cells[1].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta116));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta116));
        }
      }
      tmp117 = 1;
    }
  }
  threadData->lastEquationSolved = 1771;
}

/*
equation index: 1772
type: ALGORITHM

  assert(evap.hstart[1] >= -1e10 and evap.hstart[1] <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.hstart[1] <= 1e10, has value: " + String(evap.hstart[1], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1772};
  modelica_boolean tmp118;
  modelica_boolean tmp119;
  static const MMC_DEFSTRINGLIT(tmp120,83,"Variable violating min/max constraint: -1e10 <= evap.hstart[1] <= 1e10, has value: ");
  modelica_string tmp121;
  modelica_metatype tmpMeta122;
  static int tmp123 = 0;
  if(!tmp123)
  {
    tmp118 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* evap.hstart[1] PARAM */),-1e10);
    tmp119 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* evap.hstart[1] PARAM */),1e10);
    if(!(tmp118 && tmp119))
    {
      tmp121 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* evap.hstart[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta122 = stringAppend(MMC_REFSTRINGLIT(tmp120),tmp121);
      {
        const char* assert_cond = "(evap.hstart[1] >= -1e10 and evap.hstart[1] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta122));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta122));
        }
      }
      tmp123 = 1;
    }
  }
  threadData->lastEquationSolved = 1772;
}

/*
equation index: 1773
type: ALGORITHM

  assert(evap.Cells[1].hstart >= -1e10 and evap.Cells[1].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[1].hstart <= 1e10, has value: " + String(evap.Cells[1].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1773};
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  static const MMC_DEFSTRINGLIT(tmp126,89,"Variable violating min/max constraint: -1e10 <= evap.Cells[1].hstart <= 1e10, has value: ");
  modelica_string tmp127;
  modelica_metatype tmpMeta128;
  static int tmp129 = 0;
  if(!tmp129)
  {
    tmp124 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* evap.Cells[1].hstart PARAM */),-1e10);
    tmp125 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* evap.Cells[1].hstart PARAM */),1e10);
    if(!(tmp124 && tmp125))
    {
      tmp127 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* evap.Cells[1].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta128 = stringAppend(MMC_REFSTRINGLIT(tmp126),tmp127);
      {
        const char* assert_cond = "(evap.Cells[1].hstart >= -1e10 and evap.Cells[1].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta128));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta128));
        }
      }
      tmp129 = 1;
    }
  }
  threadData->lastEquationSolved = 1773;
}

/*
equation index: 1774
type: ALGORITHM

  assert(evap.Cells[1].Nt >= 1, "Variable violating min constraint: 1 <= evap.Cells[1].Nt, has value: " + String(evap.Cells[1].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1774};
  modelica_boolean tmp130;
  static const MMC_DEFSTRINGLIT(tmp131,69,"Variable violating min constraint: 1 <= evap.Cells[1].Nt, has value: ");
  modelica_string tmp132;
  modelica_metatype tmpMeta133;
  static int tmp134 = 0;
  if(!tmp134)
  {
    tmp130 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[27]] /* evap.Cells[1].Nt PARAM */),((modelica_integer) 1));
    if(!tmp130)
    {
      tmp132 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[27]] /* evap.Cells[1].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta133 = stringAppend(MMC_REFSTRINGLIT(tmp131),tmp132);
      {
        const char* assert_cond = "(evap.Cells[1].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta133));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta133));
        }
      }
      tmp134 = 1;
    }
  }
  threadData->lastEquationSolved = 1774;
}

/*
equation index: 1775
type: ALGORITHM

  assert(evap.Wall_int.N >= 1, "Variable violating min constraint: 1 <= evap.Wall_int.N, has value: " + String(evap.Wall_int.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1775};
  modelica_boolean tmp135;
  static const MMC_DEFSTRINGLIT(tmp136,68,"Variable violating min constraint: 1 <= evap.Wall_int.N, has value: ");
  modelica_string tmp137;
  modelica_metatype tmpMeta138;
  static int tmp139 = 0;
  if(!tmp139)
  {
    tmp135 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[40]] /* evap.Wall_int.N PARAM */),((modelica_integer) 1));
    if(!tmp135)
    {
      tmp137 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[40]] /* evap.Wall_int.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta138 = stringAppend(MMC_REFSTRINGLIT(tmp136),tmp137);
      {
        const char* assert_cond = "(evap.Wall_int.N >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta138));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta138));
        }
      }
      tmp139 = 1;
    }
  }
  threadData->lastEquationSolved = 1775;
}

/*
equation index: 1776
type: ALGORITHM

  assert(evap.Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(evap.Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1776};
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  static const MMC_DEFSTRINGLIT(tmp142,204,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= evap.Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp143;
  modelica_metatype tmpMeta144;
  static int tmp145 = 0;
  if(!tmp145)
  {
    tmp140 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[37]] /* evap.Discretization PARAM */),1);
    tmp141 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[37]] /* evap.Discretization PARAM */),5);
    if(!(tmp140 && tmp141))
    {
      tmp143 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[37]] /* evap.Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta144 = stringAppend(MMC_REFSTRINGLIT(tmp142),tmp143);
      {
        const char* assert_cond = "(evap.Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and evap.Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",74,3,77,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta144));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",74,3,77,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta144));
        }
      }
      tmp145 = 1;
    }
  }
  threadData->lastEquationSolved = 1776;
}

/*
equation index: 1777
type: ALGORITHM

  assert(evap.Tstart_outlet >= 1.0 and evap.Tstart_outlet <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Tstart_outlet <= 1e4, has value: " + String(evap.Tstart_outlet, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1777};
  modelica_boolean tmp146;
  modelica_boolean tmp147;
  static const MMC_DEFSTRINGLIT(tmp148,84,"Variable violating min/max constraint: 1.0 <= evap.Tstart_outlet <= 1e4, has value: ");
  modelica_string tmp149;
  modelica_metatype tmpMeta150;
  static int tmp151 = 0;
  if(!tmp151)
  {
    tmp146 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* evap.Tstart_outlet PARAM */),1.0);
    tmp147 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* evap.Tstart_outlet PARAM */),1e4);
    if(!(tmp146 && tmp147))
    {
      tmp149 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* evap.Tstart_outlet PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta150 = stringAppend(MMC_REFSTRINGLIT(tmp148),tmp149);
      {
        const char* assert_cond = "(evap.Tstart_outlet >= 1.0 and evap.Tstart_outlet <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",62,3,63,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta150));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",62,3,63,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta150));
        }
      }
      tmp151 = 1;
    }
  }
  threadData->lastEquationSolved = 1777;
}

/*
equation index: 1778
type: ALGORITHM

  assert(evap.Tstart_inlet >= 1.0 and evap.Tstart_inlet <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Tstart_inlet <= 1e4, has value: " + String(evap.Tstart_inlet, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1778};
  modelica_boolean tmp152;
  modelica_boolean tmp153;
  static const MMC_DEFSTRINGLIT(tmp154,83,"Variable violating min/max constraint: 1.0 <= evap.Tstart_inlet <= 1e4, has value: ");
  modelica_string tmp155;
  modelica_metatype tmpMeta156;
  static int tmp157 = 0;
  if(!tmp157)
  {
    tmp152 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* evap.Tstart_inlet PARAM */),1.0);
    tmp153 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* evap.Tstart_inlet PARAM */),1e4);
    if(!(tmp152 && tmp153))
    {
      tmp155 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* evap.Tstart_inlet PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta156 = stringAppend(MMC_REFSTRINGLIT(tmp154),tmp155);
      {
        const char* assert_cond = "(evap.Tstart_inlet >= 1.0 and evap.Tstart_inlet <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",60,3,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta156));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",60,3,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta156));
        }
      }
      tmp157 = 1;
    }
  }
  threadData->lastEquationSolved = 1778;
}

/*
equation index: 1779
type: ALGORITHM

  assert(evap.N >= 1, "Variable violating min constraint: 1 <= evap.N, has value: " + String(evap.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1779};
  modelica_boolean tmp158;
  static const MMC_DEFSTRINGLIT(tmp159,59,"Variable violating min constraint: 1 <= evap.N, has value: ");
  modelica_string tmp160;
  modelica_metatype tmpMeta161;
  static int tmp162 = 0;
  if(!tmp162)
  {
    tmp158 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[38]] /* evap.N PARAM */),((modelica_integer) 1));
    if(!tmp158)
    {
      tmp160 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[38]] /* evap.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta161 = stringAppend(MMC_REFSTRINGLIT(tmp159),tmp160);
      {
        const char* assert_cond = "(evap.N >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",39,3,39,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta161));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",39,3,39,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta161));
        }
      }
      tmp162 = 1;
    }
  }
  threadData->lastEquationSolved = 1779;
}

/*
equation index: 1780
type: ALGORITHM

  assert(txv.T_nom >= 0.0, "Variable violating min constraint: 0.0 <= txv.T_nom, has value: " + String(txv.T_nom, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1780};
  modelica_boolean tmp163;
  static const MMC_DEFSTRINGLIT(tmp164,64,"Variable violating min constraint: 0.0 <= txv.T_nom, has value: ");
  modelica_string tmp165;
  modelica_metatype tmpMeta166;
  static int tmp167 = 0;
  if(!tmp167)
  {
    tmp163 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* txv.T_nom PARAM */),0.0);
    if(!tmp163)
    {
      tmp165 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* txv.T_nom PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta166 = stringAppend(MMC_REFSTRINGLIT(tmp164),tmp165);
      {
        const char* assert_cond = "(txv.T_nom >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",27,3,29,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta166));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",27,3,29,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta166));
        }
      }
      tmp167 = 1;
    }
  }
  threadData->lastEquationSolved = 1780;
}

/*
equation index: 1781
type: ALGORITHM

  assert(txv.rho_nom >= 0.0, "Variable violating min constraint: 0.0 <= txv.rho_nom, has value: " + String(txv.rho_nom, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1781};
  modelica_boolean tmp168;
  static const MMC_DEFSTRINGLIT(tmp169,66,"Variable violating min constraint: 0.0 <= txv.rho_nom, has value: ");
  modelica_string tmp170;
  modelica_metatype tmpMeta171;
  static int tmp172 = 0;
  if(!tmp172)
  {
    tmp168 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* txv.rho_nom PARAM */),0.0);
    if(!tmp168)
    {
      tmp170 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* txv.rho_nom PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta171 = stringAppend(MMC_REFSTRINGLIT(tmp169),tmp170);
      {
        const char* assert_cond = "(txv.rho_nom >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",30,3,32,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta171));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",30,3,32,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta171));
        }
      }
      tmp172 = 1;
    }
  }
  threadData->lastEquationSolved = 1781;
}

/*
equation index: 1782
type: ALGORITHM

  assert(txv.Xopen >= 0.0 and txv.Xopen <= 1.0, "Variable violating min/max constraint: 0.0 <= txv.Xopen <= 1.0, has value: " + String(txv.Xopen, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1782};
  modelica_boolean tmp173;
  modelica_boolean tmp174;
  static const MMC_DEFSTRINGLIT(tmp175,75,"Variable violating min/max constraint: 0.0 <= txv.Xopen <= 1.0, has value: ");
  modelica_string tmp176;
  modelica_metatype tmpMeta177;
  static int tmp178 = 0;
  if(!tmp178)
  {
    tmp173 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* txv.Xopen PARAM */),0.0);
    tmp174 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* txv.Xopen PARAM */),1.0);
    if(!(tmp173 && tmp174))
    {
      tmp176 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* txv.Xopen PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta177 = stringAppend(MMC_REFSTRINGLIT(tmp175),tmp176);
      {
        const char* assert_cond = "(txv.Xopen >= 0.0 and txv.Xopen <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",16,3,19,87,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta177));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",16,3,19,87,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta177));
        }
      }
      tmp178 = 1;
    }
  }
  threadData->lastEquationSolved = 1782;
}

/*
equation index: 1783
type: ALGORITHM

  assert(cond.thermalPortConverter.multi.N >= 1, "Variable violating min constraint: 1 <= cond.thermalPortConverter.multi.N, has value: " + String(cond.thermalPortConverter.multi.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1783};
  modelica_boolean tmp179;
  static const MMC_DEFSTRINGLIT(tmp180,86,"Variable violating min constraint: 1 <= cond.thermalPortConverter.multi.N, has value: ");
  modelica_string tmp181;
  modelica_metatype tmpMeta182;
  static int tmp183 = 0;
  if(!tmp183)
  {
    tmp179 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[21]] /* cond.thermalPortConverter.multi.N PARAM */),((modelica_integer) 1));
    if(!tmp179)
    {
      tmp181 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[21]] /* cond.thermalPortConverter.multi.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta182 = stringAppend(MMC_REFSTRINGLIT(tmp180),tmp181);
      {
        const char* assert_cond = "(cond.thermalPortConverter.multi.N >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta182));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta182));
        }
      }
      tmp183 = 1;
    }
  }
  threadData->lastEquationSolved = 1783;
}

/*
equation index: 1784
type: ALGORITHM

  assert(cond.Cells[5].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[5].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[5].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(cond.Cells[5].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1784};
  modelica_boolean tmp184;
  modelica_boolean tmp185;
  static const MMC_DEFSTRINGLIT(tmp186,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[5].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp187;
  modelica_metatype tmpMeta188;
  static int tmp189 = 0;
  if(!tmp189)
  {
    tmp184 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[5]] /* cond.Cells[5].Discretization PARAM */),1);
    tmp185 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[5]] /* cond.Cells[5].Discretization PARAM */),5);
    if(!(tmp184 && tmp185))
    {
      tmp187 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[5]] /* cond.Cells[5].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta188 = stringAppend(MMC_REFSTRINGLIT(tmp186),tmp187);
      {
        const char* assert_cond = "(cond.Cells[5].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[5].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta188));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta188));
        }
      }
      tmp189 = 1;
    }
  }
  threadData->lastEquationSolved = 1784;
}

/*
equation index: 1785
type: ALGORITHM

  assert(cond.hstart[5] >= -1e10 and cond.hstart[5] <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.hstart[5] <= 1e10, has value: " + String(cond.hstart[5], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1785};
  modelica_boolean tmp190;
  modelica_boolean tmp191;
  static const MMC_DEFSTRINGLIT(tmp192,83,"Variable violating min/max constraint: -1e10 <= cond.hstart[5] <= 1e10, has value: ");
  modelica_string tmp193;
  modelica_metatype tmpMeta194;
  static int tmp195 = 0;
  if(!tmp195)
  {
    tmp190 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[75]] /* cond.hstart[5] PARAM */),-1e10);
    tmp191 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[75]] /* cond.hstart[5] PARAM */),1e10);
    if(!(tmp190 && tmp191))
    {
      tmp193 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[75]] /* cond.hstart[5] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta194 = stringAppend(MMC_REFSTRINGLIT(tmp192),tmp193);
      {
        const char* assert_cond = "(cond.hstart[5] >= -1e10 and cond.hstart[5] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta194));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta194));
        }
      }
      tmp195 = 1;
    }
  }
  threadData->lastEquationSolved = 1785;
}

/*
equation index: 1786
type: ALGORITHM

  assert(cond.Cells[5].hstart >= -1e10 and cond.Cells[5].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[5].hstart <= 1e10, has value: " + String(cond.Cells[5].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1786};
  modelica_boolean tmp196;
  modelica_boolean tmp197;
  static const MMC_DEFSTRINGLIT(tmp198,89,"Variable violating min/max constraint: -1e10 <= cond.Cells[5].hstart <= 1e10, has value: ");
  modelica_string tmp199;
  modelica_metatype tmpMeta200;
  static int tmp201 = 0;
  if(!tmp201)
  {
    tmp196 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* cond.Cells[5].hstart PARAM */),-1e10);
    tmp197 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* cond.Cells[5].hstart PARAM */),1e10);
    if(!(tmp196 && tmp197))
    {
      tmp199 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* cond.Cells[5].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta200 = stringAppend(MMC_REFSTRINGLIT(tmp198),tmp199);
      {
        const char* assert_cond = "(cond.Cells[5].hstart >= -1e10 and cond.Cells[5].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta200));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta200));
        }
      }
      tmp201 = 1;
    }
  }
  threadData->lastEquationSolved = 1786;
}

/*
equation index: 1787
type: ALGORITHM

  assert(cond.Nt >= 1, "Variable violating min constraint: 1 <= cond.Nt, has value: " + String(cond.Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1787};
  modelica_boolean tmp202;
  static const MMC_DEFSTRINGLIT(tmp203,60,"Variable violating min constraint: 1 <= cond.Nt, has value: ");
  modelica_string tmp204;
  modelica_metatype tmpMeta205;
  static int tmp206 = 0;
  if(!tmp206)
  {
    tmp202 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[18]] /* cond.Nt PARAM */),((modelica_integer) 1));
    if(!tmp202)
    {
      tmp204 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[18]] /* cond.Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta205 = stringAppend(MMC_REFSTRINGLIT(tmp203),tmp204);
      {
        const char* assert_cond = "(cond.Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",40,3,40,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta205));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",40,3,40,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta205));
        }
      }
      tmp206 = 1;
    }
  }
  threadData->lastEquationSolved = 1787;
}

/*
equation index: 1788
type: ALGORITHM

  assert(cond.Cells[5].Nt >= 1, "Variable violating min constraint: 1 <= cond.Cells[5].Nt, has value: " + String(cond.Cells[5].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1788};
  modelica_boolean tmp207;
  static const MMC_DEFSTRINGLIT(tmp208,69,"Variable violating min constraint: 1 <= cond.Cells[5].Nt, has value: ");
  modelica_string tmp209;
  modelica_metatype tmpMeta210;
  static int tmp211 = 0;
  if(!tmp211)
  {
    tmp207 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[5].Nt PARAM */),((modelica_integer) 1));
    if(!tmp207)
    {
      tmp209 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[5].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta210 = stringAppend(MMC_REFSTRINGLIT(tmp208),tmp209);
      {
        const char* assert_cond = "(cond.Cells[5].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta210));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta210));
        }
      }
      tmp211 = 1;
    }
  }
  threadData->lastEquationSolved = 1788;
}

/*
equation index: 1789
type: ALGORITHM

  assert(cond.Cells[4].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[4].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[4].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(cond.Cells[4].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1789};
  modelica_boolean tmp212;
  modelica_boolean tmp213;
  static const MMC_DEFSTRINGLIT(tmp214,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[4].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp215;
  modelica_metatype tmpMeta216;
  static int tmp217 = 0;
  if(!tmp217)
  {
    tmp212 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[4]] /* cond.Cells[4].Discretization PARAM */),1);
    tmp213 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[4]] /* cond.Cells[4].Discretization PARAM */),5);
    if(!(tmp212 && tmp213))
    {
      tmp215 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[4]] /* cond.Cells[4].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta216 = stringAppend(MMC_REFSTRINGLIT(tmp214),tmp215);
      {
        const char* assert_cond = "(cond.Cells[4].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[4].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta216));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta216));
        }
      }
      tmp217 = 1;
    }
  }
  threadData->lastEquationSolved = 1789;
}

/*
equation index: 1790
type: ALGORITHM

  assert(cond.hstart[4] >= -1e10 and cond.hstart[4] <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.hstart[4] <= 1e10, has value: " + String(cond.hstart[4], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1790};
  modelica_boolean tmp218;
  modelica_boolean tmp219;
  static const MMC_DEFSTRINGLIT(tmp220,83,"Variable violating min/max constraint: -1e10 <= cond.hstart[4] <= 1e10, has value: ");
  modelica_string tmp221;
  modelica_metatype tmpMeta222;
  static int tmp223 = 0;
  if(!tmp223)
  {
    tmp218 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[74]] /* cond.hstart[4] PARAM */),-1e10);
    tmp219 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[74]] /* cond.hstart[4] PARAM */),1e10);
    if(!(tmp218 && tmp219))
    {
      tmp221 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[74]] /* cond.hstart[4] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta222 = stringAppend(MMC_REFSTRINGLIT(tmp220),tmp221);
      {
        const char* assert_cond = "(cond.hstart[4] >= -1e10 and cond.hstart[4] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta222));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta222));
        }
      }
      tmp223 = 1;
    }
  }
  threadData->lastEquationSolved = 1790;
}

/*
equation index: 1791
type: ALGORITHM

  assert(cond.Cells[4].hstart >= -1e10 and cond.Cells[4].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[4].hstart <= 1e10, has value: " + String(cond.Cells[4].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1791};
  modelica_boolean tmp224;
  modelica_boolean tmp225;
  static const MMC_DEFSTRINGLIT(tmp226,89,"Variable violating min/max constraint: -1e10 <= cond.Cells[4].hstart <= 1e10, has value: ");
  modelica_string tmp227;
  modelica_metatype tmpMeta228;
  static int tmp229 = 0;
  if(!tmp229)
  {
    tmp224 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* cond.Cells[4].hstart PARAM */),-1e10);
    tmp225 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* cond.Cells[4].hstart PARAM */),1e10);
    if(!(tmp224 && tmp225))
    {
      tmp227 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* cond.Cells[4].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta228 = stringAppend(MMC_REFSTRINGLIT(tmp226),tmp227);
      {
        const char* assert_cond = "(cond.Cells[4].hstart >= -1e10 and cond.Cells[4].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta228));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta228));
        }
      }
      tmp229 = 1;
    }
  }
  threadData->lastEquationSolved = 1791;
}

/*
equation index: 1792
type: ALGORITHM

  assert(cond.Cells[4].Nt >= 1, "Variable violating min constraint: 1 <= cond.Cells[4].Nt, has value: " + String(cond.Cells[4].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1792};
  modelica_boolean tmp230;
  static const MMC_DEFSTRINGLIT(tmp231,69,"Variable violating min constraint: 1 <= cond.Cells[4].Nt, has value: ");
  modelica_string tmp232;
  modelica_metatype tmpMeta233;
  static int tmp234 = 0;
  if(!tmp234)
  {
    tmp230 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[4].Nt PARAM */),((modelica_integer) 1));
    if(!tmp230)
    {
      tmp232 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[4].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta233 = stringAppend(MMC_REFSTRINGLIT(tmp231),tmp232);
      {
        const char* assert_cond = "(cond.Cells[4].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta233));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta233));
        }
      }
      tmp234 = 1;
    }
  }
  threadData->lastEquationSolved = 1792;
}

/*
equation index: 1793
type: ALGORITHM

  assert(cond.Cells[3].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[3].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[3].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(cond.Cells[3].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1793};
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  static const MMC_DEFSTRINGLIT(tmp237,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[3].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp238;
  modelica_metatype tmpMeta239;
  static int tmp240 = 0;
  if(!tmp240)
  {
    tmp235 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[3]] /* cond.Cells[3].Discretization PARAM */),1);
    tmp236 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[3]] /* cond.Cells[3].Discretization PARAM */),5);
    if(!(tmp235 && tmp236))
    {
      tmp238 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[3]] /* cond.Cells[3].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta239 = stringAppend(MMC_REFSTRINGLIT(tmp237),tmp238);
      {
        const char* assert_cond = "(cond.Cells[3].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[3].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta239));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta239));
        }
      }
      tmp240 = 1;
    }
  }
  threadData->lastEquationSolved = 1793;
}

/*
equation index: 1794
type: ALGORITHM

  assert(cond.hstart[3] >= -1e10 and cond.hstart[3] <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.hstart[3] <= 1e10, has value: " + String(cond.hstart[3], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1794};
  modelica_boolean tmp241;
  modelica_boolean tmp242;
  static const MMC_DEFSTRINGLIT(tmp243,83,"Variable violating min/max constraint: -1e10 <= cond.hstart[3] <= 1e10, has value: ");
  modelica_string tmp244;
  modelica_metatype tmpMeta245;
  static int tmp246 = 0;
  if(!tmp246)
  {
    tmp241 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[73]] /* cond.hstart[3] PARAM */),-1e10);
    tmp242 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[73]] /* cond.hstart[3] PARAM */),1e10);
    if(!(tmp241 && tmp242))
    {
      tmp244 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[73]] /* cond.hstart[3] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta245 = stringAppend(MMC_REFSTRINGLIT(tmp243),tmp244);
      {
        const char* assert_cond = "(cond.hstart[3] >= -1e10 and cond.hstart[3] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta245));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta245));
        }
      }
      tmp246 = 1;
    }
  }
  threadData->lastEquationSolved = 1794;
}

/*
equation index: 1795
type: ALGORITHM

  assert(cond.Cells[3].hstart >= -1e10 and cond.Cells[3].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[3].hstart <= 1e10, has value: " + String(cond.Cells[3].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1795};
  modelica_boolean tmp247;
  modelica_boolean tmp248;
  static const MMC_DEFSTRINGLIT(tmp249,89,"Variable violating min/max constraint: -1e10 <= cond.Cells[3].hstart <= 1e10, has value: ");
  modelica_string tmp250;
  modelica_metatype tmpMeta251;
  static int tmp252 = 0;
  if(!tmp252)
  {
    tmp247 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* cond.Cells[3].hstart PARAM */),-1e10);
    tmp248 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* cond.Cells[3].hstart PARAM */),1e10);
    if(!(tmp247 && tmp248))
    {
      tmp250 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* cond.Cells[3].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta251 = stringAppend(MMC_REFSTRINGLIT(tmp249),tmp250);
      {
        const char* assert_cond = "(cond.Cells[3].hstart >= -1e10 and cond.Cells[3].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta251));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta251));
        }
      }
      tmp252 = 1;
    }
  }
  threadData->lastEquationSolved = 1795;
}

/*
equation index: 1796
type: ALGORITHM

  assert(cond.Cells[3].Nt >= 1, "Variable violating min constraint: 1 <= cond.Cells[3].Nt, has value: " + String(cond.Cells[3].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1796};
  modelica_boolean tmp253;
  static const MMC_DEFSTRINGLIT(tmp254,69,"Variable violating min constraint: 1 <= cond.Cells[3].Nt, has value: ");
  modelica_string tmp255;
  modelica_metatype tmpMeta256;
  static int tmp257 = 0;
  if(!tmp257)
  {
    tmp253 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[3].Nt PARAM */),((modelica_integer) 1));
    if(!tmp253)
    {
      tmp255 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[3].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta256 = stringAppend(MMC_REFSTRINGLIT(tmp254),tmp255);
      {
        const char* assert_cond = "(cond.Cells[3].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta256));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta256));
        }
      }
      tmp257 = 1;
    }
  }
  threadData->lastEquationSolved = 1796;
}

/*
equation index: 1797
type: ALGORITHM

  assert(cond.Cells[2].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[2].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[2].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(cond.Cells[2].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1797};
  modelica_boolean tmp258;
  modelica_boolean tmp259;
  static const MMC_DEFSTRINGLIT(tmp260,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[2].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp261;
  modelica_metatype tmpMeta262;
  static int tmp263 = 0;
  if(!tmp263)
  {
    tmp258 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[2]] /* cond.Cells[2].Discretization PARAM */),1);
    tmp259 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[2]] /* cond.Cells[2].Discretization PARAM */),5);
    if(!(tmp258 && tmp259))
    {
      tmp261 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[2]] /* cond.Cells[2].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta262 = stringAppend(MMC_REFSTRINGLIT(tmp260),tmp261);
      {
        const char* assert_cond = "(cond.Cells[2].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[2].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta262));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta262));
        }
      }
      tmp263 = 1;
    }
  }
  threadData->lastEquationSolved = 1797;
}

/*
equation index: 1798
type: ALGORITHM

  assert(cond.hstart[2] >= -1e10 and cond.hstart[2] <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.hstart[2] <= 1e10, has value: " + String(cond.hstart[2], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1798};
  modelica_boolean tmp264;
  modelica_boolean tmp265;
  static const MMC_DEFSTRINGLIT(tmp266,83,"Variable violating min/max constraint: -1e10 <= cond.hstart[2] <= 1e10, has value: ");
  modelica_string tmp267;
  modelica_metatype tmpMeta268;
  static int tmp269 = 0;
  if(!tmp269)
  {
    tmp264 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[72]] /* cond.hstart[2] PARAM */),-1e10);
    tmp265 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[72]] /* cond.hstart[2] PARAM */),1e10);
    if(!(tmp264 && tmp265))
    {
      tmp267 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[72]] /* cond.hstart[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta268 = stringAppend(MMC_REFSTRINGLIT(tmp266),tmp267);
      {
        const char* assert_cond = "(cond.hstart[2] >= -1e10 and cond.hstart[2] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta268));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta268));
        }
      }
      tmp269 = 1;
    }
  }
  threadData->lastEquationSolved = 1798;
}

/*
equation index: 1799
type: ALGORITHM

  assert(cond.Cells[2].hstart >= -1e10 and cond.Cells[2].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[2].hstart <= 1e10, has value: " + String(cond.Cells[2].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1799};
  modelica_boolean tmp270;
  modelica_boolean tmp271;
  static const MMC_DEFSTRINGLIT(tmp272,89,"Variable violating min/max constraint: -1e10 <= cond.Cells[2].hstart <= 1e10, has value: ");
  modelica_string tmp273;
  modelica_metatype tmpMeta274;
  static int tmp275 = 0;
  if(!tmp275)
  {
    tmp270 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* cond.Cells[2].hstart PARAM */),-1e10);
    tmp271 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* cond.Cells[2].hstart PARAM */),1e10);
    if(!(tmp270 && tmp271))
    {
      tmp273 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* cond.Cells[2].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta274 = stringAppend(MMC_REFSTRINGLIT(tmp272),tmp273);
      {
        const char* assert_cond = "(cond.Cells[2].hstart >= -1e10 and cond.Cells[2].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta274));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta274));
        }
      }
      tmp275 = 1;
    }
  }
  threadData->lastEquationSolved = 1799;
}

/*
equation index: 1800
type: ALGORITHM

  assert(cond.Cells[2].Nt >= 1, "Variable violating min constraint: 1 <= cond.Cells[2].Nt, has value: " + String(cond.Cells[2].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1800};
  modelica_boolean tmp276;
  static const MMC_DEFSTRINGLIT(tmp277,69,"Variable violating min constraint: 1 <= cond.Cells[2].Nt, has value: ");
  modelica_string tmp278;
  modelica_metatype tmpMeta279;
  static int tmp280 = 0;
  if(!tmp280)
  {
    tmp276 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[2].Nt PARAM */),((modelica_integer) 1));
    if(!tmp276)
    {
      tmp278 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[2].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta279 = stringAppend(MMC_REFSTRINGLIT(tmp277),tmp278);
      {
        const char* assert_cond = "(cond.Cells[2].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta279));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta279));
        }
      }
      tmp280 = 1;
    }
  }
  threadData->lastEquationSolved = 1800;
}

/*
equation index: 1801
type: ALGORITHM

  assert(cond.Cells[1].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[1].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[1].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(cond.Cells[1].Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1801};
  modelica_boolean tmp281;
  modelica_boolean tmp282;
  static const MMC_DEFSTRINGLIT(tmp283,213,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Cells[1].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp284;
  modelica_metatype tmpMeta285;
  static int tmp286 = 0;
  if(!tmp286)
  {
    tmp281 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* cond.Cells[1].Discretization PARAM */),1);
    tmp282 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* cond.Cells[1].Discretization PARAM */),5);
    if(!(tmp281 && tmp282))
    {
      tmp284 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* cond.Cells[1].Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta285 = stringAppend(MMC_REFSTRINGLIT(tmp283),tmp284);
      {
        const char* assert_cond = "(cond.Cells[1].Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Cells[1].Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta285));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",40,3,41,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta285));
        }
      }
      tmp286 = 1;
    }
  }
  threadData->lastEquationSolved = 1801;
}

/*
equation index: 1802
type: ALGORITHM

  assert(cond.hstart[1] >= -1e10 and cond.hstart[1] <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.hstart[1] <= 1e10, has value: " + String(cond.hstart[1], "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1802};
  modelica_boolean tmp287;
  modelica_boolean tmp288;
  static const MMC_DEFSTRINGLIT(tmp289,83,"Variable violating min/max constraint: -1e10 <= cond.hstart[1] <= 1e10, has value: ");
  modelica_string tmp290;
  modelica_metatype tmpMeta291;
  static int tmp292 = 0;
  if(!tmp292)
  {
    tmp287 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* cond.hstart[1] PARAM */),-1e10);
    tmp288 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* cond.hstart[1] PARAM */),1e10);
    if(!(tmp287 && tmp288))
    {
      tmp290 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* cond.hstart[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta291 = stringAppend(MMC_REFSTRINGLIT(tmp289),tmp290);
      {
        const char* assert_cond = "(cond.hstart[1] >= -1e10 and cond.hstart[1] <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta291));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",64,3,68,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta291));
        }
      }
      tmp292 = 1;
    }
  }
  threadData->lastEquationSolved = 1802;
}

/*
equation index: 1803
type: ALGORITHM

  assert(cond.Cells[1].hstart >= -1e10 and cond.Cells[1].hstart <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[1].hstart <= 1e10, has value: " + String(cond.Cells[1].hstart, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1803};
  modelica_boolean tmp293;
  modelica_boolean tmp294;
  static const MMC_DEFSTRINGLIT(tmp295,89,"Variable violating min/max constraint: -1e10 <= cond.Cells[1].hstart <= 1e10, has value: ");
  modelica_string tmp296;
  modelica_metatype tmpMeta297;
  static int tmp298 = 0;
  if(!tmp298)
  {
    tmp293 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* cond.Cells[1].hstart PARAM */),-1e10);
    tmp294 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* cond.Cells[1].hstart PARAM */),1e10);
    if(!(tmp293 && tmp294))
    {
      tmp296 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* cond.Cells[1].hstart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta297 = stringAppend(MMC_REFSTRINGLIT(tmp295),tmp296);
      {
        const char* assert_cond = "(cond.Cells[1].hstart >= -1e10 and cond.Cells[1].hstart <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta297));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",35,3,36,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta297));
        }
      }
      tmp298 = 1;
    }
  }
  threadData->lastEquationSolved = 1803;
}

/*
equation index: 1804
type: ALGORITHM

  assert(cond.Cells[1].Nt >= 1, "Variable violating min constraint: 1 <= cond.Cells[1].Nt, has value: " + String(cond.Cells[1].Nt, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1804};
  modelica_boolean tmp299;
  static const MMC_DEFSTRINGLIT(tmp300,69,"Variable violating min constraint: 1 <= cond.Cells[1].Nt, has value: ");
  modelica_string tmp301;
  modelica_metatype tmpMeta302;
  static int tmp303 = 0;
  if(!tmp303)
  {
    tmp299 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* cond.Cells[1].Nt PARAM */),((modelica_integer) 1));
    if(!tmp299)
    {
      tmp301 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* cond.Cells[1].Nt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta302 = stringAppend(MMC_REFSTRINGLIT(tmp300),tmp301);
      {
        const char* assert_cond = "(cond.Cells[1].Nt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta302));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",21,3,21,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta302));
        }
      }
      tmp303 = 1;
    }
  }
  threadData->lastEquationSolved = 1804;
}

/*
equation index: 1805
type: ALGORITHM

  assert(cond.Wall_int.N >= 1, "Variable violating min constraint: 1 <= cond.Wall_int.N, has value: " + String(cond.Wall_int.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1805};
  modelica_boolean tmp304;
  static const MMC_DEFSTRINGLIT(tmp305,68,"Variable violating min constraint: 1 <= cond.Wall_int.N, has value: ");
  modelica_string tmp306;
  modelica_metatype tmpMeta307;
  static int tmp308 = 0;
  if(!tmp308)
  {
    tmp304 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* cond.Wall_int.N PARAM */),((modelica_integer) 1));
    if(!tmp304)
    {
      tmp306 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* cond.Wall_int.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta307 = stringAppend(MMC_REFSTRINGLIT(tmp305),tmp306);
      {
        const char* assert_cond = "(cond.Wall_int.N >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta307));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",3,3,3,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta307));
        }
      }
      tmp308 = 1;
    }
  }
  threadData->lastEquationSolved = 1805;
}

/*
equation index: 1806
type: ALGORITHM

  assert(cond.Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, "Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: " + String(cond.Discretization, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1806};
  modelica_boolean tmp309;
  modelica_boolean tmp310;
  static const MMC_DEFSTRINGLIT(tmp311,204,"Variable violating min/max constraint: ThermoCycle.Functions.Enumerations.Discretizations.centr_diff <= cond.Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth, has value: ");
  modelica_string tmp312;
  modelica_metatype tmpMeta313;
  static int tmp314 = 0;
  if(!tmp314)
  {
    tmp309 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[16]] /* cond.Discretization PARAM */),1);
    tmp310 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[16]] /* cond.Discretization PARAM */),5);
    if(!(tmp309 && tmp310))
    {
      tmp312 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[16]] /* cond.Discretization PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta313 = stringAppend(MMC_REFSTRINGLIT(tmp311),tmp312);
      {
        const char* assert_cond = "(cond.Discretization >= ThermoCycle.Functions.Enumerations.Discretizations.centr_diff and cond.Discretization <= ThermoCycle.Functions.Enumerations.Discretizations.upwind_smooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",74,3,77,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta313));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",74,3,77,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta313));
        }
      }
      tmp314 = 1;
    }
  }
  threadData->lastEquationSolved = 1806;
}

/*
equation index: 1807
type: ALGORITHM

  assert(cond.Tstart_outlet >= 1.0 and cond.Tstart_outlet <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Tstart_outlet <= 1e4, has value: " + String(cond.Tstart_outlet, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1807};
  modelica_boolean tmp315;
  modelica_boolean tmp316;
  static const MMC_DEFSTRINGLIT(tmp317,84,"Variable violating min/max constraint: 1.0 <= cond.Tstart_outlet <= 1e4, has value: ");
  modelica_string tmp318;
  modelica_metatype tmpMeta319;
  static int tmp320 = 0;
  if(!tmp320)
  {
    tmp315 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Tstart_outlet PARAM */),1.0);
    tmp316 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Tstart_outlet PARAM */),1e4);
    if(!(tmp315 && tmp316))
    {
      tmp318 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Tstart_outlet PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta319 = stringAppend(MMC_REFSTRINGLIT(tmp317),tmp318);
      {
        const char* assert_cond = "(cond.Tstart_outlet >= 1.0 and cond.Tstart_outlet <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",62,3,63,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta319));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",62,3,63,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta319));
        }
      }
      tmp320 = 1;
    }
  }
  threadData->lastEquationSolved = 1807;
}

/*
equation index: 1808
type: ALGORITHM

  assert(cond.Tstart_inlet >= 1.0 and cond.Tstart_inlet <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Tstart_inlet <= 1e4, has value: " + String(cond.Tstart_inlet, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1808};
  modelica_boolean tmp321;
  modelica_boolean tmp322;
  static const MMC_DEFSTRINGLIT(tmp323,83,"Variable violating min/max constraint: 1.0 <= cond.Tstart_inlet <= 1e4, has value: ");
  modelica_string tmp324;
  modelica_metatype tmpMeta325;
  static int tmp326 = 0;
  if(!tmp326)
  {
    tmp321 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Tstart_inlet PARAM */),1.0);
    tmp322 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Tstart_inlet PARAM */),1e4);
    if(!(tmp321 && tmp322))
    {
      tmp324 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Tstart_inlet PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta325 = stringAppend(MMC_REFSTRINGLIT(tmp323),tmp324);
      {
        const char* assert_cond = "(cond.Tstart_inlet >= 1.0 and cond.Tstart_inlet <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",60,3,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta325));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",60,3,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta325));
        }
      }
      tmp326 = 1;
    }
  }
  threadData->lastEquationSolved = 1808;
}

/*
equation index: 1809
type: ALGORITHM

  assert(cond.N >= 1, "Variable violating min constraint: 1 <= cond.N, has value: " + String(cond.N, "d"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1809};
  modelica_boolean tmp327;
  static const MMC_DEFSTRINGLIT(tmp328,59,"Variable violating min constraint: 1 <= cond.N, has value: ");
  modelica_string tmp329;
  modelica_metatype tmpMeta330;
  static int tmp331 = 0;
  if(!tmp331)
  {
    tmp327 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[17]] /* cond.N PARAM */),((modelica_integer) 1));
    if(!tmp327)
    {
      tmp329 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[17]] /* cond.N PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta330 = stringAppend(MMC_REFSTRINGLIT(tmp328),tmp329);
      {
        const char* assert_cond = "(cond.N >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",39,3,39,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta330));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",39,3,39,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta330));
        }
      }
      tmp331 = 1;
    }
  }
  threadData->lastEquationSolved = 1809;
}

/*
equation index: 1810
type: ALGORITHM

  assert(comp.T_su_start >= 0.0, "Variable violating min constraint: 0.0 <= comp.T_su_start, has value: " + String(comp.T_su_start, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1810};
  modelica_boolean tmp332;
  static const MMC_DEFSTRINGLIT(tmp333,70,"Variable violating min constraint: 0.0 <= comp.T_su_start, has value: ");
  modelica_string tmp334;
  modelica_metatype tmpMeta335;
  static int tmp336 = 0;
  if(!tmp336)
  {
    tmp332 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* comp.T_su_start PARAM */),0.0);
    if(!tmp332)
    {
      tmp334 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* comp.T_su_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta335 = stringAppend(MMC_REFSTRINGLIT(tmp333),tmp334);
      {
        const char* assert_cond = "(comp.T_su_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/ExpansionAndCompressionMachines/Compressor.mo",36,3,37,78,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta335));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/ExpansionAndCompressionMachines/Compressor.mo",36,3,37,78,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta335));
        }
      }
      tmp336 = 1;
    }
  }
  threadData->lastEquationSolved = 1810;
}

/*
equation index: 1811
type: ALGORITHM

  assert(comp.h_ex_start >= -1e10 and comp.h_ex_start <= 1e10, "Variable violating min/max constraint: -1e10 <= comp.h_ex_start <= 1e10, has value: " + String(comp.h_ex_start, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1811};
  modelica_boolean tmp337;
  modelica_boolean tmp338;
  static const MMC_DEFSTRINGLIT(tmp339,84,"Variable violating min/max constraint: -1e10 <= comp.h_ex_start <= 1e10, has value: ");
  modelica_string tmp340;
  modelica_metatype tmpMeta341;
  static int tmp342 = 0;
  if(!tmp342)
  {
    tmp337 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* comp.h_ex_start PARAM */),-1e10);
    tmp338 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* comp.h_ex_start PARAM */),1e10);
    if(!(tmp337 && tmp338))
    {
      tmp340 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* comp.h_ex_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta341 = stringAppend(MMC_REFSTRINGLIT(tmp339),tmp340);
      {
        const char* assert_cond = "(comp.h_ex_start >= -1e10 and comp.h_ex_start <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/ExpansionAndCompressionMachines/Compressor.mo",40,3,41,171,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta341));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/ExpansionAndCompressionMachines/Compressor.mo",40,3,41,171,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta341));
        }
      }
      tmp342 = 1;
    }
  }
  threadData->lastEquationSolved = 1811;
}

/*
equation index: 1812
type: ALGORITHM

  assert(comp.h_su_start >= -1e10 and comp.h_su_start <= 1e10, "Variable violating min/max constraint: -1e10 <= comp.h_su_start <= 1e10, has value: " + String(comp.h_su_start, "g"));
*/
OMC_DISABLE_OPT
static void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1812};
  modelica_boolean tmp343;
  modelica_boolean tmp344;
  static const MMC_DEFSTRINGLIT(tmp345,84,"Variable violating min/max constraint: -1e10 <= comp.h_su_start <= 1e10, has value: ");
  modelica_string tmp346;
  modelica_metatype tmpMeta347;
  static int tmp348 = 0;
  if(!tmp348)
  {
    tmp343 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* comp.h_su_start PARAM */),-1e10);
    tmp344 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* comp.h_su_start PARAM */),1e10);
    if(!(tmp343 && tmp344))
    {
      tmp346 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* comp.h_su_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta347 = stringAppend(MMC_REFSTRINGLIT(tmp345),tmp346);
      {
        const char* assert_cond = "(comp.h_su_start >= -1e10 and comp.h_su_start <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/ExpansionAndCompressionMachines/Compressor.mo",38,3,39,170,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta347));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/ExpansionAndCompressionMachines/Compressor.mo",38,3,39,170,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta347));
        }
      }
      tmp348 = 1;
    }
  }
  threadData->lastEquationSolved = 1812;
}
OMC_DISABLE_OPT
void RefrigerationTrainer_ClosedLoopM1e_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[350])(DATA*, threadData_t*) = {
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1376,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1377,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1382,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1383,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1384,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1385,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1386,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1387,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1388,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1389,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1390,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1391,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1392,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1393,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1394,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1398,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1399,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1404,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1405,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1406,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1407,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1408,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1409,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1410,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1411,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1412,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1416,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1417,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1422,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1423,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1424,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1425,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1426,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1427,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1428,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1429,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1430,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1434,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1435,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1440,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1441,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1442,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1443,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1444,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1445,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1446,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1447,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1448,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1452,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1453,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1458,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1459,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1460,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1461,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1462,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1463,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1464,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1465,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1466,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1476,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1477,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1478,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1485,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1486,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1491,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1492,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1493,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1494,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1495,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1496,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1497,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1498,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1499,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1500,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1501,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1502,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1503,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1507,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1508,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1513,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1514,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1515,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1516,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1517,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1518,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1519,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1520,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1521,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1525,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1526,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1531,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1532,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1533,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1534,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1535,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1536,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1537,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1538,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1539,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1543,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1544,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1549,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1550,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1551,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1552,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1553,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1554,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1555,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1556,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1557,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1561,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1562,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1567,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1568,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1569,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1570,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1571,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1572,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1573,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1574,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1575,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1583,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1584,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1585,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1586,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_669,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_668,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_667,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_666,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_662,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_590,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_589,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_588,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_587,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_583,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_743,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_582,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_581,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_580,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_579,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_578,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_577,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_576,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_575,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_574,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_573,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_495,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_142,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_141,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_140,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_139,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_138,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_137,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_136,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_135,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_134,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_133,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_132,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_131,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_130,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_129,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_128,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_127,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_126,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_125,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_124,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_123,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_122,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_121,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_120,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_119,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_118,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_117,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_116,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_115,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_114,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_113,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_112,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_111,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_110,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_109,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_108,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_107,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_106,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_105,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_104,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_103,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_102,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_101,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_100,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_99,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_98,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_97,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_96,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_95,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_94,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_93,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_92,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_91,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_90,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_89,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_88,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_87,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_86,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_85,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_84,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_83,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_82,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_81,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_80,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_79,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_78,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_77,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_76,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_75,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_74,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_73,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_72,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_71,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_70,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_69,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_68,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_67,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_66,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_65,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_64,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_63,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_62,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_61,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_60,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_59,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_58,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_57,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_56,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_55,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_54,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_53,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_52,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_51,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_50,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_49,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_48,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_47,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_46,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_45,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_44,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_43,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_42,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_41,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_40,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_39,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_38,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_37,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_36,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_35,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_34,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_33,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_32,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_31,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_30,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_29,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_28,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_27,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_26,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_25,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_24,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_23,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_22,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_21,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_20,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_19,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_18,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_17,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_16,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_15,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_14,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_13,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_12,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_11,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_10,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_9,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_8,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_7,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_6,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_5,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_4,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_3,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1751,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1752,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1753,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1754,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1755,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1756,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1757,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1758,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1759,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1760,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1761,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1762,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1763,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1764,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1765,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1766,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1767,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1768,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1769,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1770,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1771,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1772,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1773,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1774,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1775,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1776,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1777,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1778,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1779,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1780,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1781,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1782,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1783,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1784,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1785,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1786,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1787,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1788,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1789,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1790,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1791,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1792,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1793,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1794,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1795,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1796,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1797,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1798,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1799,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1800,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1801,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1802,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1803,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1804,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1805,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1806,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1807,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1808,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1809,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1810,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1811,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1812
  };
  
  for (int id = 0; id < 350; id++) {
    eqFunctions[id](data, threadData);
  }
}
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1e_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[0]] /* N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* cond.Cells[1].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[11].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* cond.Cells[2].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[12].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* cond.Cells[3].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[13].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* cond.Cells[4].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[14].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[15]] /* cond.Cells[5].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[15].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[17]] /* cond.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[17].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* cond.Wall_int.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[19].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[20]] /* cond.thermalPortConverter.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[20].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[21]] /* cond.thermalPortConverter.multi.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[21].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* evap.Cells[1].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[32].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* evap.Cells[2].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[33].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* evap.Cells[3].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[34].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[35]] /* evap.Cells[4].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[35].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[36]] /* evap.Cells[5].heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[36].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[38]] /* evap.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[38].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[40]] /* evap.Wall_int.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[40].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[41]] /* evap.thermalPortConverter.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[41].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[42]] /* evap.thermalPortConverter.multi.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[42].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* wall_cond.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[43].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[44]] /* wall_cond.port.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[44].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[45]] /* wall_evap.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[45].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[46]] /* wall_evap.port.N PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[46].time_unvarying = 1;
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
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[59]] /* txv.UseNom PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[59].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[60]] /* txv.constinit PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[60].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[61]] /* txv.use_rho_nom PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[61].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* cond.Cells[1].Discretization PARAM */) = 1;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[2]] /* cond.Cells[2].Discretization PARAM */) = 1;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[3]] /* cond.Cells[3].Discretization PARAM */) = 1;
  data->modelData->integerParameterData[3].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[4]] /* cond.Cells[4].Discretization PARAM */) = 1;
  data->modelData->integerParameterData[4].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[5]] /* cond.Cells[5].Discretization PARAM */) = 1;
  data->modelData->integerParameterData[5].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[16]] /* cond.Discretization PARAM */) = 1;
  data->modelData->integerParameterData[16].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* evap.Cells[1].Discretization PARAM */) = 1;
  data->modelData->integerParameterData[22].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[23]] /* evap.Cells[2].Discretization PARAM */) = 1;
  data->modelData->integerParameterData[23].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[24]] /* evap.Cells[3].Discretization PARAM */) = 1;
  data->modelData->integerParameterData[24].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* evap.Cells[4].Discretization PARAM */) = 1;
  data->modelData->integerParameterData[25].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[26]] /* evap.Cells[5].Discretization PARAM */) = 1;
  data->modelData->integerParameterData[26].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[37]] /* evap.Discretization PARAM */) = 1;
  data->modelData->integerParameterData[37].time_unvarying = 1;
  RefrigerationTrainer_ClosedLoopM1e_updateBoundParameters_0(data, threadData);
  return 0;
}

#if defined(__cplusplus)
}
#endif
