#include "RefrigerationTrainer.ClosedLoopM1e_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 281
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cond.Cells[4].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.a variable */);
  threadData->lastEquationSolved = 281;
}

/*
equation index: 282
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cond.Cells[4].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.beta variable */);
  threadData->lastEquationSolved = 282;
}

/*
equation index: 283
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cond.Cells[4].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.cp variable */);
  threadData->lastEquationSolved = 283;
}

/*
equation index: 284
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,284};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cond.Cells[4].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.cv variable */);
  threadData->lastEquationSolved = 284;
}

/*
equation index: 285
type: SIMPLE_ASSIGN
cond.Cells[4].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* cond.Cells[4].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.d variable */);
  threadData->lastEquationSolved = 285;
}

/*
equation index: 286
type: SIMPLE_ASSIGN
cond.Cells[4].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,286};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* cond.Cells[4].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.ddhp variable */);
  threadData->lastEquationSolved = 286;
}

/*
equation index: 287
type: SIMPLE_ASSIGN
cond.Cells[4].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cond.Cells[4].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.ddph variable */);
  threadData->lastEquationSolved = 287;
}

/*
equation index: 288
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,288};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* cond.Cells[4].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.eta variable */);
  threadData->lastEquationSolved = 288;
}

/*
equation index: 289
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* cond.Cells[4].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.h variable */);
  threadData->lastEquationSolved = 289;
}

/*
equation index: 290
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[790]] /* cond.Cells[4].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.kappa variable */);
  threadData->lastEquationSolved = 290;
}

/*
equation index: 291
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* cond.Cells[4].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.lambda variable */);
  threadData->lastEquationSolved = 291;
}

/*
equation index: 292
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,292};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* cond.Cells[4].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.p variable */);
  threadData->lastEquationSolved = 292;
}

/*
equation index: 293
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,293};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[31]] /* cond.Cells[4].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[7]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.phase variable */);
  threadData->lastEquationSolved = 293;
}

/*
equation index: 294
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cond.Cells[4].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState279.s variable */);
  threadData->lastEquationSolved = 294;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_949(DATA *data, threadData_t *threadData);


/*
equation index: 296
type: SIMPLE_ASSIGN
cond.Cells[5].h = $START.cond.Cells[5].h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,296};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[4] /* cond.Cells[5].h STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 296;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_965(DATA *data, threadData_t *threadData);


/*
equation index: 298
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298 := RefrigerationTrainer.ClosedLoopM1e.cond.Cells.Medium.setState_ph(cond.Cells[1].p, cond.Cells[5].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,298};
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState tmp9;
  tmp9 = omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.T variable */) = tmp9._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.a variable */) = tmp9._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.beta variable */) = tmp9._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.cp variable */) = tmp9._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.cv variable */) = tmp9._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.d variable */) = tmp9._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.ddhp variable */) = tmp9._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.ddph variable */) = tmp9._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.eta variable */) = tmp9._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.h variable */) = tmp9._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.kappa variable */) = tmp9._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.lambda variable */) = tmp9._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.p variable */) = tmp9._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[8]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.phase variable */) = tmp9._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.s variable */) = tmp9._s;
  ;
  threadData->lastEquationSolved = 298;
}

/*
equation index: 299
type: SIMPLE_ASSIGN
cond.Cells[5].T = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cond.Cells[5].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.T variable */);
  threadData->lastEquationSolved = 299;
}

/*
equation index: 300
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cond.Cells[5].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.a variable */);
  threadData->lastEquationSolved = 300;
}

/*
equation index: 301
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cond.Cells[5].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.beta variable */);
  threadData->lastEquationSolved = 301;
}

/*
equation index: 302
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* cond.Cells[5].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.cp variable */);
  threadData->lastEquationSolved = 302;
}

/*
equation index: 303
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* cond.Cells[5].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.cv variable */);
  threadData->lastEquationSolved = 303;
}

/*
equation index: 304
type: SIMPLE_ASSIGN
cond.Cells[5].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* cond.Cells[5].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.d variable */);
  threadData->lastEquationSolved = 304;
}

/*
equation index: 305
type: SIMPLE_ASSIGN
cond.Cells[5].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cond.Cells[5].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.ddhp variable */);
  threadData->lastEquationSolved = 305;
}

/*
equation index: 306
type: SIMPLE_ASSIGN
cond.Cells[5].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cond.Cells[5].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.ddph variable */);
  threadData->lastEquationSolved = 306;
}

/*
equation index: 307
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[781]] /* cond.Cells[5].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.eta variable */);
  threadData->lastEquationSolved = 307;
}

/*
equation index: 308
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cond.Cells[5].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.h variable */);
  threadData->lastEquationSolved = 308;
}

/*
equation index: 309
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* cond.Cells[5].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.kappa variable */);
  threadData->lastEquationSolved = 309;
}

/*
equation index: 310
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cond.Cells[5].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.lambda variable */);
  threadData->lastEquationSolved = 310;
}

/*
equation index: 311
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* cond.Cells[5].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.p variable */);
  threadData->lastEquationSolved = 311;
}

/*
equation index: 312
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,312};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[32]] /* cond.Cells[5].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[8]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.phase variable */);
  threadData->lastEquationSolved = 312;
}

/*
equation index: 313
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* cond.Cells[5].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState298.s variable */);
  threadData->lastEquationSolved = 313;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_982(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_983(DATA *data, threadData_t *threadData);


/*
equation index: 316
type: SIMPLE_ASSIGN
evap.Cells[1].h = $START.evap.Cells[1].h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[7] /* evap.Cells[1].h STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 316;
}

/*
equation index: 317
type: SIMPLE_ASSIGN
evap.Cells[2].h = $START.evap.Cells[2].h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[8] /* evap.Cells[2].h STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 317;
}

/*
equation index: 318
type: SIMPLE_ASSIGN
evap.Cells[3].h = $START.evap.Cells[3].h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[9] /* evap.Cells[3].h STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 318;
}

/*
equation index: 319
type: SIMPLE_ASSIGN
evap.Cells[4].h = $START.evap.Cells[4].h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[10] /* evap.Cells[4].h STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 319;
}

/*
equation index: 320
type: SIMPLE_ASSIGN
evap.Cells[5].p = $START.evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[12] /* evap.Cells[5].p STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 320;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1306(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1307(DATA *data, threadData_t *threadData);


/*
equation index: 323
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,323};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties tmp10;
  tmp10 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.Tsat variable */) = tmp10._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.dTp variable */) = tmp10._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.ddldp variable */) = tmp10._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.ddvdp variable */) = tmp10._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.dhldp variable */) = tmp10._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.dhvdp variable */) = tmp10._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.dl variable */) = tmp10._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.dv variable */) = tmp10._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.hl variable */) = tmp10._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.hv variable */) = tmp10._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.psat variable */) = tmp10._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.sigma variable */) = tmp10._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.sl variable */) = tmp10._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.sv variable */) = tmp10._sv;
  ;
  threadData->lastEquationSolved = 323;
}

/*
equation index: 324
type: SIMPLE_ASSIGN
evap.Cells[5].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* evap.Cells[5].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.Tsat variable */);
  threadData->lastEquationSolved = 324;
}

/*
equation index: 325
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.dTp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* evap.Cells[5].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.dTp variable */);
  threadData->lastEquationSolved = 325;
}

/*
equation index: 326
type: SIMPLE_ASSIGN
evap.Cells[5].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,326};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1135]] /* evap.Cells[5].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.ddldp variable */);
  threadData->lastEquationSolved = 326;
}

/*
equation index: 327
type: SIMPLE_ASSIGN
evap.Cells[5].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,327};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* evap.Cells[5].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.ddvdp variable */);
  threadData->lastEquationSolved = 327;
}

/*
equation index: 328
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,328};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1145]] /* evap.Cells[5].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.dhldp variable */);
  threadData->lastEquationSolved = 328;
}

/*
equation index: 329
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,329};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1150]] /* evap.Cells[5].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.dhvdp variable */);
  threadData->lastEquationSolved = 329;
}

/*
equation index: 330
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.dl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,330};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1155]] /* evap.Cells[5].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.dl variable */);
  threadData->lastEquationSolved = 330;
}

/*
equation index: 331
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.dv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,331};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1160]] /* evap.Cells[5].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.dv variable */);
  threadData->lastEquationSolved = 331;
}

/*
equation index: 332
type: SIMPLE_ASSIGN
evap.Cells[5].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.hl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,332};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* evap.Cells[5].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.hl variable */);
  threadData->lastEquationSolved = 332;
}

/*
equation index: 333
type: SIMPLE_ASSIGN
evap.Cells[5].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.hv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,333};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* evap.Cells[5].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.hv variable */);
  threadData->lastEquationSolved = 333;
}

/*
equation index: 334
type: SIMPLE_ASSIGN
evap.Cells[5].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.psat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,334};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* evap.Cells[5].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.psat variable */);
  threadData->lastEquationSolved = 334;
}

/*
equation index: 335
type: SIMPLE_ASSIGN
evap.Cells[5].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.sigma
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* evap.Cells[5].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.sigma variable */);
  threadData->lastEquationSolved = 335;
}

/*
equation index: 336
type: SIMPLE_ASSIGN
evap.Cells[5].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.sl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,336};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* evap.Cells[5].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.sl variable */);
  threadData->lastEquationSolved = 336;
}

/*
equation index: 337
type: SIMPLE_ASSIGN
evap.Cells[5].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.sv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* evap.Cells[5].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties323.sv variable */);
  threadData->lastEquationSolved = 337;
}

/*
equation index: 338
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[4].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,338};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState tmp11;
  tmp11 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[572]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.T variable */) = tmp11._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[573]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.a variable */) = tmp11._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[574]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.beta variable */) = tmp11._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.cp variable */) = tmp11._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[576]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.cv variable */) = tmp11._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[577]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.d variable */) = tmp11._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[578]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.ddhp variable */) = tmp11._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[579]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.ddph variable */) = tmp11._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[580]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.eta variable */) = tmp11._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[581]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.h variable */) = tmp11._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[582]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.kappa variable */) = tmp11._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[583]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.lambda variable */) = tmp11._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.p variable */) = tmp11._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[19]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.phase variable */) = tmp11._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.s variable */) = tmp11._s;
  ;
  threadData->lastEquationSolved = 338;
}

/*
equation index: 339
type: SIMPLE_ASSIGN
evap.Cells[4].T = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* evap.Cells[4].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[572]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.T variable */);
  threadData->lastEquationSolved = 339;
}

/*
equation index: 340
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,340};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* evap.Cells[4].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[573]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.a variable */);
  threadData->lastEquationSolved = 340;
}

/*
equation index: 341
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1038]] /* evap.Cells[4].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[574]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.beta variable */);
  threadData->lastEquationSolved = 341;
}

/*
equation index: 342
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,342};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1043]] /* evap.Cells[4].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.cp variable */);
  threadData->lastEquationSolved = 342;
}

/*
equation index: 343
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* evap.Cells[4].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[576]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.cv variable */);
  threadData->lastEquationSolved = 343;
}

/*
equation index: 344
type: SIMPLE_ASSIGN
evap.Cells[4].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,344};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* evap.Cells[4].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[577]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.d variable */);
  threadData->lastEquationSolved = 344;
}

/*
equation index: 345
type: SIMPLE_ASSIGN
evap.Cells[4].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* evap.Cells[4].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[578]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.ddhp variable */);
  threadData->lastEquationSolved = 345;
}

/*
equation index: 346
type: SIMPLE_ASSIGN
evap.Cells[4].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,346};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* evap.Cells[4].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[579]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.ddph variable */);
  threadData->lastEquationSolved = 346;
}

/*
equation index: 347
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,347};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1053]] /* evap.Cells[4].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[580]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.eta variable */);
  threadData->lastEquationSolved = 347;
}

/*
equation index: 348
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,348};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* evap.Cells[4].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[581]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.h variable */);
  threadData->lastEquationSolved = 348;
}

/*
equation index: 349
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,349};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1063]] /* evap.Cells[4].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[582]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.kappa variable */);
  threadData->lastEquationSolved = 349;
}

/*
equation index: 350
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1068]] /* evap.Cells[4].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[583]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.lambda variable */);
  threadData->lastEquationSolved = 350;
}

/*
equation index: 351
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,351};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* evap.Cells[4].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.p variable */);
  threadData->lastEquationSolved = 351;
}

/*
equation index: 352
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,352};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[36]] /* evap.Cells[4].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[19]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.phase variable */);
  threadData->lastEquationSolved = 352;
}

/*
equation index: 353
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,353};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* evap.Cells[4].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState338.s variable */);
  threadData->lastEquationSolved = 353;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1196(DATA *data, threadData_t *threadData);


/*
equation index: 355
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,355};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties tmp12;
  tmp12 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.Tsat variable */) = tmp12._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[447]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.dTp variable */) = tmp12._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[448]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.ddldp variable */) = tmp12._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.ddvdp variable */) = tmp12._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.dhldp variable */) = tmp12._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[451]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.dhvdp variable */) = tmp12._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[452]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.dl variable */) = tmp12._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[453]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.dv variable */) = tmp12._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[454]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.hl variable */) = tmp12._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[455]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.hv variable */) = tmp12._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[456]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.psat variable */) = tmp12._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[457]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.sigma variable */) = tmp12._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[458]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.sl variable */) = tmp12._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[459]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.sv variable */) = tmp12._sv;
  ;
  threadData->lastEquationSolved = 355;
}

/*
equation index: 356
type: SIMPLE_ASSIGN
evap.Cells[4].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,356};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* evap.Cells[4].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.Tsat variable */);
  threadData->lastEquationSolved = 356;
}

/*
equation index: 357
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.dTp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,357};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1129]] /* evap.Cells[4].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[447]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.dTp variable */);
  threadData->lastEquationSolved = 357;
}

/*
equation index: 358
type: SIMPLE_ASSIGN
evap.Cells[4].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,358};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* evap.Cells[4].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[448]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.ddldp variable */);
  threadData->lastEquationSolved = 358;
}

/*
equation index: 359
type: SIMPLE_ASSIGN
evap.Cells[4].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1139]] /* evap.Cells[4].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.ddvdp variable */);
  threadData->lastEquationSolved = 359;
}

/*
equation index: 360
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1144]] /* evap.Cells[4].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.dhldp variable */);
  threadData->lastEquationSolved = 360;
}

/*
equation index: 361
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1149]] /* evap.Cells[4].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[451]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.dhvdp variable */);
  threadData->lastEquationSolved = 361;
}

/*
equation index: 362
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.dl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* evap.Cells[4].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[452]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.dl variable */);
  threadData->lastEquationSolved = 362;
}

/*
equation index: 363
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.dv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,363};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1159]] /* evap.Cells[4].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[453]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.dv variable */);
  threadData->lastEquationSolved = 363;
}

/*
equation index: 364
type: SIMPLE_ASSIGN
evap.Cells[4].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.hl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* evap.Cells[4].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[454]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.hl variable */);
  threadData->lastEquationSolved = 364;
}

/*
equation index: 365
type: SIMPLE_ASSIGN
evap.Cells[4].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.hv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* evap.Cells[4].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[455]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.hv variable */);
  threadData->lastEquationSolved = 365;
}

/*
equation index: 366
type: SIMPLE_ASSIGN
evap.Cells[4].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.psat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1164]] /* evap.Cells[4].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[456]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.psat variable */);
  threadData->lastEquationSolved = 366;
}

/*
equation index: 367
type: SIMPLE_ASSIGN
evap.Cells[4].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.sigma
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* evap.Cells[4].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[457]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.sigma variable */);
  threadData->lastEquationSolved = 367;
}

/*
equation index: 368
type: SIMPLE_ASSIGN
evap.Cells[4].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.sl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* evap.Cells[4].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[458]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.sl variable */);
  threadData->lastEquationSolved = 368;
}

/*
equation index: 369
type: SIMPLE_ASSIGN
evap.Cells[4].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.sv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* evap.Cells[4].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[459]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties355.sv variable */);
  threadData->lastEquationSolved = 369;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1179(DATA *data, threadData_t *threadData);


/*
equation index: 371
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[3].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,371};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState tmp13;
  tmp13 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.T variable */) = tmp13._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[587]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.a variable */) = tmp13._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[588]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.beta variable */) = tmp13._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[589]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.cp variable */) = tmp13._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.cv variable */) = tmp13._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[591]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.d variable */) = tmp13._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.ddhp variable */) = tmp13._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.ddph variable */) = tmp13._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[594]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.eta variable */) = tmp13._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.h variable */) = tmp13._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.kappa variable */) = tmp13._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.lambda variable */) = tmp13._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[598]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.p variable */) = tmp13._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[20]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.phase variable */) = tmp13._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[599]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.s variable */) = tmp13._s;
  ;
  threadData->lastEquationSolved = 371;
}

/*
equation index: 372
type: SIMPLE_ASSIGN
evap.Cells[3].T = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,372};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* evap.Cells[3].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.T variable */);
  threadData->lastEquationSolved = 372;
}

/*
equation index: 373
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* evap.Cells[3].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[587]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.a variable */);
  threadData->lastEquationSolved = 373;
}

/*
equation index: 374
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* evap.Cells[3].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[588]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.beta variable */);
  threadData->lastEquationSolved = 374;
}

/*
equation index: 375
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* evap.Cells[3].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[589]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.cp variable */);
  threadData->lastEquationSolved = 375;
}

/*
equation index: 376
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,376};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* evap.Cells[3].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.cv variable */);
  threadData->lastEquationSolved = 376;
}

/*
equation index: 377
type: SIMPLE_ASSIGN
evap.Cells[3].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,377};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1118]] /* evap.Cells[3].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[591]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.d variable */);
  threadData->lastEquationSolved = 377;
}

/*
equation index: 378
type: SIMPLE_ASSIGN
evap.Cells[3].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,378};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* evap.Cells[3].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.ddhp variable */);
  threadData->lastEquationSolved = 378;
}

/*
equation index: 379
type: SIMPLE_ASSIGN
evap.Cells[3].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,379};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* evap.Cells[3].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.ddph variable */);
  threadData->lastEquationSolved = 379;
}

/*
equation index: 380
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,380};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* evap.Cells[3].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[594]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.eta variable */);
  threadData->lastEquationSolved = 380;
}

/*
equation index: 381
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,381};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* evap.Cells[3].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.h variable */);
  threadData->lastEquationSolved = 381;
}

/*
equation index: 382
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* evap.Cells[3].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.kappa variable */);
  threadData->lastEquationSolved = 382;
}

/*
equation index: 383
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1067]] /* evap.Cells[3].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.lambda variable */);
  threadData->lastEquationSolved = 383;
}

/*
equation index: 384
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* evap.Cells[3].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[598]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.p variable */);
  threadData->lastEquationSolved = 384;
}

/*
equation index: 385
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,385};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[35]] /* evap.Cells[3].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[20]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.phase variable */);
  threadData->lastEquationSolved = 385;
}

/*
equation index: 386
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,386};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* evap.Cells[3].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[599]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState371.s variable */);
  threadData->lastEquationSolved = 386;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1163(DATA *data, threadData_t *threadData);


/*
equation index: 388
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,388};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties tmp14;
  tmp14 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[460]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.Tsat variable */) = tmp14._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[461]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.dTp variable */) = tmp14._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.ddldp variable */) = tmp14._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[463]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.ddvdp variable */) = tmp14._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.dhldp variable */) = tmp14._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[465]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.dhvdp variable */) = tmp14._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[466]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.dl variable */) = tmp14._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[467]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.dv variable */) = tmp14._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[468]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.hl variable */) = tmp14._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[469]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.hv variable */) = tmp14._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.psat variable */) = tmp14._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[471]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.sigma variable */) = tmp14._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[472]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.sl variable */) = tmp14._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[473]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.sv variable */) = tmp14._sv;
  ;
  threadData->lastEquationSolved = 388;
}

/*
equation index: 389
type: SIMPLE_ASSIGN
evap.Cells[3].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,389};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* evap.Cells[3].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[460]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.Tsat variable */);
  threadData->lastEquationSolved = 389;
}

/*
equation index: 390
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.dTp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,390};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* evap.Cells[3].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[461]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.dTp variable */);
  threadData->lastEquationSolved = 390;
}

/*
equation index: 391
type: SIMPLE_ASSIGN
evap.Cells[3].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,391};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* evap.Cells[3].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.ddldp variable */);
  threadData->lastEquationSolved = 391;
}

/*
equation index: 392
type: SIMPLE_ASSIGN
evap.Cells[3].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,392};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1138]] /* evap.Cells[3].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[463]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.ddvdp variable */);
  threadData->lastEquationSolved = 392;
}

/*
equation index: 393
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,393};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* evap.Cells[3].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.dhldp variable */);
  threadData->lastEquationSolved = 393;
}

/*
equation index: 394
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,394};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* evap.Cells[3].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[465]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.dhvdp variable */);
  threadData->lastEquationSolved = 394;
}

/*
equation index: 395
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.dl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,395};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* evap.Cells[3].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[466]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.dl variable */);
  threadData->lastEquationSolved = 395;
}

/*
equation index: 396
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.dv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,396};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1158]] /* evap.Cells[3].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[467]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.dv variable */);
  threadData->lastEquationSolved = 396;
}

/*
equation index: 397
type: SIMPLE_ASSIGN
evap.Cells[3].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.hl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,397};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* evap.Cells[3].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[468]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.hl variable */);
  threadData->lastEquationSolved = 397;
}

/*
equation index: 398
type: SIMPLE_ASSIGN
evap.Cells[3].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.hv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,398};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* evap.Cells[3].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[469]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.hv variable */);
  threadData->lastEquationSolved = 398;
}

/*
equation index: 399
type: SIMPLE_ASSIGN
evap.Cells[3].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.psat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,399};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1163]] /* evap.Cells[3].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.psat variable */);
  threadData->lastEquationSolved = 399;
}

/*
equation index: 400
type: SIMPLE_ASSIGN
evap.Cells[3].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.sigma
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,400};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* evap.Cells[3].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[471]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.sigma variable */);
  threadData->lastEquationSolved = 400;
}

/*
equation index: 401
type: SIMPLE_ASSIGN
evap.Cells[3].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.sl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,401};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* evap.Cells[3].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[472]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.sl variable */);
  threadData->lastEquationSolved = 401;
}

/*
equation index: 402
type: SIMPLE_ASSIGN
evap.Cells[3].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.sv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,402};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* evap.Cells[3].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[473]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties388.sv variable */);
  threadData->lastEquationSolved = 402;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1146(DATA *data, threadData_t *threadData);


/*
equation index: 404
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[2].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,404};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState tmp15;
  tmp15 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[600]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.T variable */) = tmp15._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[601]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.a variable */) = tmp15._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.beta variable */) = tmp15._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.cp variable */) = tmp15._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.cv variable */) = tmp15._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.d variable */) = tmp15._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.ddhp variable */) = tmp15._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.ddph variable */) = tmp15._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.eta variable */) = tmp15._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.h variable */) = tmp15._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.kappa variable */) = tmp15._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.lambda variable */) = tmp15._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.p variable */) = tmp15._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[21]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.phase variable */) = tmp15._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.s variable */) = tmp15._s;
  ;
  threadData->lastEquationSolved = 404;
}

/*
equation index: 405
type: SIMPLE_ASSIGN
evap.Cells[2].T = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,405};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* evap.Cells[2].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[600]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.T variable */);
  threadData->lastEquationSolved = 405;
}

/*
equation index: 406
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,406};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* evap.Cells[2].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[601]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.a variable */);
  threadData->lastEquationSolved = 406;
}

/*
equation index: 407
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,407};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* evap.Cells[2].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.beta variable */);
  threadData->lastEquationSolved = 407;
}

/*
equation index: 408
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,408};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* evap.Cells[2].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.cp variable */);
  threadData->lastEquationSolved = 408;
}

/*
equation index: 409
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,409};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1046]] /* evap.Cells[2].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.cv variable */);
  threadData->lastEquationSolved = 409;
}

/*
equation index: 410
type: SIMPLE_ASSIGN
evap.Cells[2].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,410};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* evap.Cells[2].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.d variable */);
  threadData->lastEquationSolved = 410;
}

/*
equation index: 411
type: SIMPLE_ASSIGN
evap.Cells[2].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,411};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* evap.Cells[2].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.ddhp variable */);
  threadData->lastEquationSolved = 411;
}

/*
equation index: 412
type: SIMPLE_ASSIGN
evap.Cells[2].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,412};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* evap.Cells[2].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.ddph variable */);
  threadData->lastEquationSolved = 412;
}

/*
equation index: 413
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,413};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* evap.Cells[2].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.eta variable */);
  threadData->lastEquationSolved = 413;
}

/*
equation index: 414
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,414};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* evap.Cells[2].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.h variable */);
  threadData->lastEquationSolved = 414;
}

/*
equation index: 415
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,415};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* evap.Cells[2].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.kappa variable */);
  threadData->lastEquationSolved = 415;
}

/*
equation index: 416
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,416};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1066]] /* evap.Cells[2].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.lambda variable */);
  threadData->lastEquationSolved = 416;
}

/*
equation index: 417
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,417};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* evap.Cells[2].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.p variable */);
  threadData->lastEquationSolved = 417;
}

/*
equation index: 418
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,418};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[34]] /* evap.Cells[2].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[21]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.phase variable */);
  threadData->lastEquationSolved = 418;
}

/*
equation index: 419
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,419};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* evap.Cells[2].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState404.s variable */);
  threadData->lastEquationSolved = 419;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1130(DATA *data, threadData_t *threadData);


/*
equation index: 421
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,421};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties tmp16;
  tmp16 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[474]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.Tsat variable */) = tmp16._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[475]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.dTp variable */) = tmp16._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[476]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.ddldp variable */) = tmp16._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[477]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.ddvdp variable */) = tmp16._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.dhldp variable */) = tmp16._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.dhvdp variable */) = tmp16._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.dl variable */) = tmp16._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.dv variable */) = tmp16._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[482]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.hl variable */) = tmp16._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.hv variable */) = tmp16._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.psat variable */) = tmp16._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.sigma variable */) = tmp16._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.sl variable */) = tmp16._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.sv variable */) = tmp16._sv;
  ;
  threadData->lastEquationSolved = 421;
}

/*
equation index: 422
type: SIMPLE_ASSIGN
evap.Cells[2].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,422};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* evap.Cells[2].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[474]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.Tsat variable */);
  threadData->lastEquationSolved = 422;
}

/*
equation index: 423
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.dTp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* evap.Cells[2].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[475]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.dTp variable */);
  threadData->lastEquationSolved = 423;
}

/*
equation index: 424
type: SIMPLE_ASSIGN
evap.Cells[2].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,424};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* evap.Cells[2].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[476]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.ddldp variable */);
  threadData->lastEquationSolved = 424;
}

/*
equation index: 425
type: SIMPLE_ASSIGN
evap.Cells[2].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,425};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1137]] /* evap.Cells[2].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[477]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.ddvdp variable */);
  threadData->lastEquationSolved = 425;
}

/*
equation index: 426
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,426};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* evap.Cells[2].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.dhldp variable */);
  threadData->lastEquationSolved = 426;
}

/*
equation index: 427
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,427};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* evap.Cells[2].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.dhvdp variable */);
  threadData->lastEquationSolved = 427;
}

/*
equation index: 428
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.dl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,428};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* evap.Cells[2].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.dl variable */);
  threadData->lastEquationSolved = 428;
}

/*
equation index: 429
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.dv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,429};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* evap.Cells[2].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.dv variable */);
  threadData->lastEquationSolved = 429;
}

/*
equation index: 430
type: SIMPLE_ASSIGN
evap.Cells[2].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.hl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,430};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* evap.Cells[2].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[482]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.hl variable */);
  threadData->lastEquationSolved = 430;
}

/*
equation index: 431
type: SIMPLE_ASSIGN
evap.Cells[2].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.hv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,431};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1086]] /* evap.Cells[2].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.hv variable */);
  threadData->lastEquationSolved = 431;
}

/*
equation index: 432
type: SIMPLE_ASSIGN
evap.Cells[2].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.psat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,432};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1162]] /* evap.Cells[2].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.psat variable */);
  threadData->lastEquationSolved = 432;
}

/*
equation index: 433
type: SIMPLE_ASSIGN
evap.Cells[2].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.sigma
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,433};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1167]] /* evap.Cells[2].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.sigma variable */);
  threadData->lastEquationSolved = 433;
}

/*
equation index: 434
type: SIMPLE_ASSIGN
evap.Cells[2].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.sl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,434};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* evap.Cells[2].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.sl variable */);
  threadData->lastEquationSolved = 434;
}

/*
equation index: 435
type: SIMPLE_ASSIGN
evap.Cells[2].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.sv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,435};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* evap.Cells[2].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties421.sv variable */);
  threadData->lastEquationSolved = 435;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1113(DATA *data, threadData_t *threadData);


/*
equation index: 437
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[1].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,437};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState tmp17;
  tmp17 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.T variable */) = tmp17._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.a variable */) = tmp17._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.beta variable */) = tmp17._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.cp variable */) = tmp17._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[618]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.cv variable */) = tmp17._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[619]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.d variable */) = tmp17._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[620]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.ddhp variable */) = tmp17._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.ddph variable */) = tmp17._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.eta variable */) = tmp17._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.h variable */) = tmp17._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[624]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.kappa variable */) = tmp17._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.lambda variable */) = tmp17._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.p variable */) = tmp17._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[22]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.phase variable */) = tmp17._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.s variable */) = tmp17._s;
  ;
  threadData->lastEquationSolved = 437;
}

/*
equation index: 438
type: SIMPLE_ASSIGN
evap.Cells[1].T = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,438};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* evap.Cells[1].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.T variable */);
  threadData->lastEquationSolved = 438;
}

/*
equation index: 439
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,439};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* evap.Cells[1].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.a variable */);
  threadData->lastEquationSolved = 439;
}

/*
equation index: 440
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,440};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* evap.Cells[1].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.beta variable */);
  threadData->lastEquationSolved = 440;
}

/*
equation index: 441
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,441};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* evap.Cells[1].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.cp variable */);
  threadData->lastEquationSolved = 441;
}

/*
equation index: 442
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,442};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1045]] /* evap.Cells[1].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[618]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.cv variable */);
  threadData->lastEquationSolved = 442;
}

/*
equation index: 443
type: SIMPLE_ASSIGN
evap.Cells[1].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,443};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* evap.Cells[1].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[619]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.d variable */);
  threadData->lastEquationSolved = 443;
}

/*
equation index: 444
type: SIMPLE_ASSIGN
evap.Cells[1].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,444};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* evap.Cells[1].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[620]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.ddhp variable */);
  threadData->lastEquationSolved = 444;
}

/*
equation index: 445
type: SIMPLE_ASSIGN
evap.Cells[1].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,445};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* evap.Cells[1].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.ddph variable */);
  threadData->lastEquationSolved = 445;
}

/*
equation index: 446
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,446};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* evap.Cells[1].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.eta variable */);
  threadData->lastEquationSolved = 446;
}

/*
equation index: 447
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,447};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* evap.Cells[1].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.h variable */);
  threadData->lastEquationSolved = 447;
}

/*
equation index: 448
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,448};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* evap.Cells[1].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[624]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.kappa variable */);
  threadData->lastEquationSolved = 448;
}

/*
equation index: 449
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,449};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* evap.Cells[1].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.lambda variable */);
  threadData->lastEquationSolved = 449;
}

/*
equation index: 450
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,450};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1070]] /* evap.Cells[1].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.p variable */);
  threadData->lastEquationSolved = 450;
}

/*
equation index: 451
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,451};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[33]] /* evap.Cells[1].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[22]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.phase variable */);
  threadData->lastEquationSolved = 451;
}

/*
equation index: 452
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,452};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* evap.Cells[1].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState437.s variable */);
  threadData->lastEquationSolved = 452;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1095(DATA *data, threadData_t *threadData);


/*
equation index: 454
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,454};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties tmp18;
  tmp18 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.Tsat variable */) = tmp18._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.dTp variable */) = tmp18._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.ddldp variable */) = tmp18._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.ddvdp variable */) = tmp18._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.dhldp variable */) = tmp18._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.dhvdp variable */) = tmp18._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.dl variable */) = tmp18._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[495]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.dv variable */) = tmp18._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[496]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.hl variable */) = tmp18._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[497]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.hv variable */) = tmp18._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[498]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.psat variable */) = tmp18._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.sigma variable */) = tmp18._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.sl variable */) = tmp18._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.sv variable */) = tmp18._sv;
  ;
  threadData->lastEquationSolved = 454;
}

/*
equation index: 455
type: SIMPLE_ASSIGN
evap.Cells[1].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,455};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* evap.Cells[1].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.Tsat variable */);
  threadData->lastEquationSolved = 455;
}

/*
equation index: 456
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.dTp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,456};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* evap.Cells[1].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.dTp variable */);
  threadData->lastEquationSolved = 456;
}

/*
equation index: 457
type: SIMPLE_ASSIGN
evap.Cells[1].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,457};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* evap.Cells[1].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.ddldp variable */);
  threadData->lastEquationSolved = 457;
}

/*
equation index: 458
type: SIMPLE_ASSIGN
evap.Cells[1].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,458};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* evap.Cells[1].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.ddvdp variable */);
  threadData->lastEquationSolved = 458;
}

/*
equation index: 459
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,459};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* evap.Cells[1].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.dhldp variable */);
  threadData->lastEquationSolved = 459;
}

/*
equation index: 460
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,460};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1146]] /* evap.Cells[1].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.dhvdp variable */);
  threadData->lastEquationSolved = 460;
}

/*
equation index: 461
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.dl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,461};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* evap.Cells[1].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.dl variable */);
  threadData->lastEquationSolved = 461;
}

/*
equation index: 462
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.dv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,462};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1156]] /* evap.Cells[1].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[495]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.dv variable */);
  threadData->lastEquationSolved = 462;
}

/*
equation index: 463
type: SIMPLE_ASSIGN
evap.Cells[1].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.hl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,463};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* evap.Cells[1].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[496]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.hl variable */);
  threadData->lastEquationSolved = 463;
}

/*
equation index: 464
type: SIMPLE_ASSIGN
evap.Cells[1].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.hv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,464};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* evap.Cells[1].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[497]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.hv variable */);
  threadData->lastEquationSolved = 464;
}

/*
equation index: 465
type: SIMPLE_ASSIGN
evap.Cells[1].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.psat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,465};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1161]] /* evap.Cells[1].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[498]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.psat variable */);
  threadData->lastEquationSolved = 465;
}

/*
equation index: 466
type: SIMPLE_ASSIGN
evap.Cells[1].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.sigma
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,466};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1166]] /* evap.Cells[1].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.sigma variable */);
  threadData->lastEquationSolved = 466;
}

/*
equation index: 467
type: SIMPLE_ASSIGN
evap.Cells[1].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.sl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,467};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* evap.Cells[1].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.sl variable */);
  threadData->lastEquationSolved = 467;
}

/*
equation index: 468
type: SIMPLE_ASSIGN
evap.Cells[1].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.sv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,468};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* evap.Cells[1].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties454.sv variable */);
  threadData->lastEquationSolved = 468;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1078(DATA *data, threadData_t *threadData);


/*
equation index: 470
type: SIMPLE_ASSIGN
txv.DELTAp = cond.Cells[1].p - evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,470};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* txv.DELTAp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */);
  threadData->lastEquationSolved = 470;
}

/*
equation index: 471
type: SIMPLE_ASSIGN
p_lift_pa = txv.DELTAp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,471};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* p_lift_pa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* txv.DELTAp variable */);
  threadData->lastEquationSolved = 471;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1308(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1309(DATA *data, threadData_t *threadData);


/*
equation index: 474
type: SIMPLE_ASSIGN
evap.Cells[5].h = $START.evap.Cells[5].h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,474};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[11] /* evap.Cells[5].h STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 474;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1212(DATA *data, threadData_t *threadData);


/*
equation index: 476
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[5].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,476};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState tmp19;
  tmp19 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.T variable */) = tmp19._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.a variable */) = tmp19._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.beta variable */) = tmp19._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.cp variable */) = tmp19._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.cv variable */) = tmp19._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.d variable */) = tmp19._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.ddhp variable */) = tmp19._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.ddph variable */) = tmp19._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.eta variable */) = tmp19._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.h variable */) = tmp19._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.kappa variable */) = tmp19._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.lambda variable */) = tmp19._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.p variable */) = tmp19._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[23]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.phase variable */) = tmp19._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.s variable */) = tmp19._s;
  ;
  threadData->lastEquationSolved = 476;
}

/*
equation index: 477
type: SIMPLE_ASSIGN
evap.Cells[5].T = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,477};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* evap.Cells[5].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.T variable */);
  threadData->lastEquationSolved = 477;
}

/*
equation index: 478
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,478};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* evap.Cells[5].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.a variable */);
  threadData->lastEquationSolved = 478;
}

/*
equation index: 479
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,479};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* evap.Cells[5].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.beta variable */);
  threadData->lastEquationSolved = 479;
}

/*
equation index: 480
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,480};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* evap.Cells[5].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.cp variable */);
  threadData->lastEquationSolved = 480;
}

/*
equation index: 481
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,481};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* evap.Cells[5].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.cv variable */);
  threadData->lastEquationSolved = 481;
}

/*
equation index: 482
type: SIMPLE_ASSIGN
evap.Cells[5].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,482};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* evap.Cells[5].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.d variable */);
  threadData->lastEquationSolved = 482;
}

/*
equation index: 483
type: SIMPLE_ASSIGN
evap.Cells[5].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,483};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* evap.Cells[5].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.ddhp variable */);
  threadData->lastEquationSolved = 483;
}

/*
equation index: 484
type: SIMPLE_ASSIGN
evap.Cells[5].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,484};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* evap.Cells[5].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.ddph variable */);
  threadData->lastEquationSolved = 484;
}

/*
equation index: 485
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,485};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1054]] /* evap.Cells[5].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.eta variable */);
  threadData->lastEquationSolved = 485;
}

/*
equation index: 486
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,486};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* evap.Cells[5].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.h variable */);
  threadData->lastEquationSolved = 486;
}

/*
equation index: 487
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,487};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* evap.Cells[5].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.kappa variable */);
  threadData->lastEquationSolved = 487;
}

/*
equation index: 488
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,488};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1069]] /* evap.Cells[5].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.lambda variable */);
  threadData->lastEquationSolved = 488;
}

/*
equation index: 489
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,489};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* evap.Cells[5].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.p variable */);
  threadData->lastEquationSolved = 489;
}

/*
equation index: 490
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,490};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[37]] /* evap.Cells[5].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[23]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.phase variable */);
  threadData->lastEquationSolved = 490;
}

/*
equation index: 491
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,491};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* evap.Cells[5].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState476.s variable */);
  threadData->lastEquationSolved = 491;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1229(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1230(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1231(DATA *data, threadData_t *threadData);


/*
equation index: 495
type: SIMPLE_ASSIGN
comp.N_rot = (-drive.w_fixed) / (-6.283185307179586)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,495};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* comp.N_rot variable */) = DIVISION_SIM((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* drive.w_fixed PARAM */)),-6.283185307179586,"-6.283185307179586",equationIndexes);
  threadData->lastEquationSolved = 495;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_745(DATA *data, threadData_t *threadData);


void RefrigerationTrainer_ClosedLoopM1e_eqFunction_497(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_498(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_499(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_500(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_501(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_502(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_503(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_504(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_505(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_506(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_507(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_508(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_509(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_510(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_511(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_512(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_513(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_514(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_515(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_516(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_517(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_518(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_519(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_520(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_521(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_522(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_523(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_524(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_525(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_526(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_527(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_528(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_529(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_530(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_531(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_532(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_533(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_534(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_535(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_536(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_537(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_538(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_539(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_540(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_542(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_541(DATA*, threadData_t*);
/*
equation index: 543
indexNonlinear: 0
type: NONLINEAR

vars: {cond.Cells[1].hnode_su, comp.h_su}
eqns: {497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 542, 541}
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,543};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 543 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */);
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,543};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 543 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  threadData->lastEquationSolved = 543;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_815(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_813(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1310(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1311(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1312(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1313(DATA *data, threadData_t *threadData);


/*
equation index: 550
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550 := RefrigerationTrainer.ClosedLoopM1e.txv.Medium.setState_ph(cond.Cells[1].p, evap.Cells[1].hnode_su, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,550};
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState tmp20;
  tmp20 = omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].hnode_su variable */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.T variable */) = tmp20._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.a variable */) = tmp20._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.beta variable */) = tmp20._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.cp variable */) = tmp20._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.cv variable */) = tmp20._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.d variable */) = tmp20._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.ddhp variable */) = tmp20._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.ddph variable */) = tmp20._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.eta variable */) = tmp20._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.h variable */) = tmp20._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.kappa variable */) = tmp20._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.lambda variable */) = tmp20._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[654]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.p variable */) = tmp20._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[24]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.phase variable */) = tmp20._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.s variable */) = tmp20._s;
  ;
  threadData->lastEquationSolved = 550;
}

/*
equation index: 551
type: SIMPLE_ASSIGN
txv.fluidState.T = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,551};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* txv.fluidState.T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.T variable */);
  threadData->lastEquationSolved = 551;
}

/*
equation index: 552
type: SIMPLE_ASSIGN
txv.fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,552};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* txv.fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.a variable */);
  threadData->lastEquationSolved = 552;
}

/*
equation index: 553
type: SIMPLE_ASSIGN
txv.fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,553};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* txv.fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.beta variable */);
  threadData->lastEquationSolved = 553;
}

/*
equation index: 554
type: SIMPLE_ASSIGN
txv.fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,554};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* txv.fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.cp variable */);
  threadData->lastEquationSolved = 554;
}

/*
equation index: 555
type: SIMPLE_ASSIGN
txv.fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,555};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* txv.fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.cv variable */);
  threadData->lastEquationSolved = 555;
}

/*
equation index: 556
type: SIMPLE_ASSIGN
txv.rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,556};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1283]] /* txv.rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.d variable */);
  threadData->lastEquationSolved = 556;
}

/*
equation index: 557
type: SIMPLE_ASSIGN
txv.fluidState.ddhp = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,557};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* txv.fluidState.ddhp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.ddhp variable */);
  threadData->lastEquationSolved = 557;
}

/*
equation index: 558
type: SIMPLE_ASSIGN
txv.fluidState.ddph = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* txv.fluidState.ddph variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.ddph variable */);
  threadData->lastEquationSolved = 558;
}

/*
equation index: 559
type: SIMPLE_ASSIGN
txv.fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,559};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1277]] /* txv.fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.eta variable */);
  threadData->lastEquationSolved = 559;
}

/*
equation index: 560
type: SIMPLE_ASSIGN
txv.fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,560};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* txv.fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.h variable */);
  threadData->lastEquationSolved = 560;
}

/*
equation index: 561
type: SIMPLE_ASSIGN
txv.fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,561};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* txv.fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.kappa variable */);
  threadData->lastEquationSolved = 561;
}

/*
equation index: 562
type: SIMPLE_ASSIGN
txv.fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,562};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* txv.fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.lambda variable */);
  threadData->lastEquationSolved = 562;
}

/*
equation index: 563
type: SIMPLE_ASSIGN
txv.fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,563};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* txv.fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[654]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.p variable */);
  threadData->lastEquationSolved = 563;
}

/*
equation index: 564
type: SIMPLE_ASSIGN
txv.fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,564};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[38]] /* txv.fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[24]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.phase variable */);
  threadData->lastEquationSolved = 564;
}

/*
equation index: 565
type: SIMPLE_ASSIGN
txv.fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1282]] /* txv.fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState550.s variable */);
  threadData->lastEquationSolved = 565;
}

/*
equation index: 566
type: SIMPLE_ASSIGN
txv.Mdot = 1.4142135623730951 * txv.A * sqrt(txv.rho) * smooth(1, if noEvent(txv.DELTAp > txv.DELTAp_0) then sqrt(txv.DELTAp) else if noEvent(txv.DELTAp < (-txv.DELTAp_0)) then -sqrt(-txv.DELTAp) else 0.25 * sqrt(txv.DELTAp_0) * txv.DELTAp / txv.DELTAp_0 * (5.0 - (txv.DELTAp / txv.DELTAp_0) ^ 2.0))
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,566};
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  tmp21 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1283]] /* txv.rho variable */);
  if(!(tmp21 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(txv.rho) was %g should be >= 0", tmp21);
    }
  }tmp22 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* txv.DELTAp variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* txv.DELTAp_0 PARAM */));
  tmp30 = (modelica_boolean)tmp22;
  if(tmp30)
  {
    tmp23 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* txv.DELTAp variable */);
    if(!(tmp23 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(txv.DELTAp) was %g should be >= 0", tmp23);
      }
    }
    tmp31 = sqrt(tmp23);
  }
  else
  {
    tmp24 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* txv.DELTAp variable */),(-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* txv.DELTAp_0 PARAM */)));
    tmp28 = (modelica_boolean)tmp24;
    if(tmp28)
    {
      tmp25 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* txv.DELTAp variable */));
      if(!(tmp25 >= 0.0))
      {
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"",0,0,0,0,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(-txv.DELTAp) was %g should be >= 0", tmp25);
        }
      }
      tmp29 = (-sqrt(tmp25));
    }
    else
    {
      tmp26 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* txv.DELTAp_0 PARAM */);
      if(!(tmp26 >= 0.0))
      {
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"",0,0,0,0,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(txv.DELTAp_0) was %g should be >= 0", tmp26);
        }
      }tmp27 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* txv.DELTAp variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* txv.DELTAp_0 PARAM */),"txv.DELTAp_0",equationIndexes);
      tmp29 = ((0.25) * ((sqrt(tmp26)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* txv.DELTAp variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* txv.DELTAp_0 PARAM */),"txv.DELTAp_0",equationIndexes)))) * (5.0 - ((tmp27 * tmp27)));
    }
    tmp31 = tmp29;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* txv.Mdot variable */) = (1.4142135623730951) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1267]] /* txv.A variable */)) * ((sqrt(tmp21)) * (tmp31)));
  threadData->lastEquationSolved = 566;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1061(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1059(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_987(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_810(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_811(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_746(DATA *data, threadData_t *threadData);


/*
equation index: 573
type: SIMPLE_ASSIGN
evap.Cells[5].heatTransfer.Unom = 0.3333333333333333 * (evap.Cells[5].Unom_l + evap.Cells[5].Unom_tp + evap.Cells[5].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,573};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* evap.Cells[5].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* evap.Cells[5].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* evap.Cells[5].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* evap.Cells[5].Unom_v PARAM */));
  threadData->lastEquationSolved = 573;
}

/*
equation index: 574
type: SIMPLE_ASSIGN
evap.Cells[4].heatTransfer.Unom = 0.3333333333333333 * (evap.Cells[4].Unom_l + evap.Cells[4].Unom_tp + evap.Cells[4].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,574};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* evap.Cells[4].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* evap.Cells[4].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[104]] /* evap.Cells[4].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* evap.Cells[4].Unom_v PARAM */));
  threadData->lastEquationSolved = 574;
}

/*
equation index: 575
type: SIMPLE_ASSIGN
evap.Cells[3].heatTransfer.Unom = 0.3333333333333333 * (evap.Cells[3].Unom_l + evap.Cells[3].Unom_tp + evap.Cells[3].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,575};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* evap.Cells[3].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* evap.Cells[3].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* evap.Cells[3].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* evap.Cells[3].Unom_v PARAM */));
  threadData->lastEquationSolved = 575;
}

/*
equation index: 576
type: SIMPLE_ASSIGN
evap.Cells[2].heatTransfer.Unom = 0.3333333333333333 * (evap.Cells[2].Unom_l + evap.Cells[2].Unom_tp + evap.Cells[2].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,576};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* evap.Cells[2].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* evap.Cells[2].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[102]] /* evap.Cells[2].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[107]] /* evap.Cells[2].Unom_v PARAM */));
  threadData->lastEquationSolved = 576;
}

/*
equation index: 577
type: SIMPLE_ASSIGN
evap.Cells[1].heatTransfer.Unom = 0.3333333333333333 * (evap.Cells[1].Unom_l + evap.Cells[1].Unom_tp + evap.Cells[1].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,577};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1100]] /* evap.Cells[1].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* evap.Cells[1].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* evap.Cells[1].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* evap.Cells[1].Unom_v PARAM */));
  threadData->lastEquationSolved = 577;
}

/*
equation index: 578
type: SIMPLE_ASSIGN
cond.Cells[5].heatTransfer.Unom = 0.3333333333333333 * (cond.Cells[5].Unom_l + cond.Cells[5].Unom_tp + cond.Cells[5].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,578};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[831]] /* cond.Cells[5].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[31]] /* cond.Cells[5].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[36]] /* cond.Cells[5].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* cond.Cells[5].Unom_v PARAM */));
  threadData->lastEquationSolved = 578;
}

/*
equation index: 579
type: SIMPLE_ASSIGN
cond.Cells[4].heatTransfer.Unom = 0.3333333333333333 * (cond.Cells[4].Unom_l + cond.Cells[4].Unom_tp + cond.Cells[4].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,579};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[830]] /* cond.Cells[4].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[30]] /* cond.Cells[4].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[35]] /* cond.Cells[4].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* cond.Cells[4].Unom_v PARAM */));
  threadData->lastEquationSolved = 579;
}

/*
equation index: 580
type: SIMPLE_ASSIGN
cond.Cells[3].heatTransfer.Unom = 0.3333333333333333 * (cond.Cells[3].Unom_l + cond.Cells[3].Unom_tp + cond.Cells[3].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,580};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* cond.Cells[3].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* cond.Cells[3].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[34]] /* cond.Cells[3].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* cond.Cells[3].Unom_v PARAM */));
  threadData->lastEquationSolved = 580;
}

/*
equation index: 581
type: SIMPLE_ASSIGN
cond.Cells[2].heatTransfer.Unom = 0.3333333333333333 * (cond.Cells[2].Unom_l + cond.Cells[2].Unom_tp + cond.Cells[2].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,581};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[828]] /* cond.Cells[2].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* cond.Cells[2].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[33]] /* cond.Cells[2].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* cond.Cells[2].Unom_v PARAM */));
  threadData->lastEquationSolved = 581;
}

/*
equation index: 582
type: SIMPLE_ASSIGN
cond.Cells[1].heatTransfer.Unom = 0.3333333333333333 * (cond.Cells[1].Unom_l + cond.Cells[1].Unom_tp + cond.Cells[1].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,582};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[827]] /* cond.Cells[1].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* cond.Cells[1].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* cond.Cells[1].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* cond.Cells[1].Unom_v PARAM */));
  threadData->lastEquationSolved = 582;
}

/*
equation index: 583
type: SIMPLE_ASSIGN
cond.Cells[1].heatTransfer.Mdotnom = cond.Cells[1].Mdotnom / (*Real*)(cond.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* cond.Cells[1].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[17]] /* cond.Cells[1].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* cond.Cells[1].Nt PARAM */)),"/*Real*/(cond.Cells[1].Nt)",equationIndexes);
  threadData->lastEquationSolved = 583;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_814(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_849(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_850(DATA *data, threadData_t *threadData);


/*
equation index: 587
type: SIMPLE_ASSIGN
cond.Cells[2].heatTransfer.Mdotnom = cond.Cells[2].Mdotnom / (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* cond.Cells[2].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* cond.Cells[2].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[2].Nt PARAM */)),"/*Real*/(cond.Cells[2].Nt)",equationIndexes);
  threadData->lastEquationSolved = 587;
}

/*
equation index: 588
type: SIMPLE_ASSIGN
cond.Cells[3].heatTransfer.Mdotnom = cond.Cells[3].Mdotnom / (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,588};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* cond.Cells[3].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* cond.Cells[3].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[3].Nt PARAM */)),"/*Real*/(cond.Cells[3].Nt)",equationIndexes);
  threadData->lastEquationSolved = 588;
}

/*
equation index: 589
type: SIMPLE_ASSIGN
cond.Cells[4].heatTransfer.Mdotnom = cond.Cells[4].Mdotnom / (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,589};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* cond.Cells[4].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* cond.Cells[4].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[4].Nt PARAM */)),"/*Real*/(cond.Cells[4].Nt)",equationIndexes);
  threadData->lastEquationSolved = 589;
}

/*
equation index: 590
type: SIMPLE_ASSIGN
cond.Cells[5].heatTransfer.Mdotnom = cond.Cells[5].Mdotnom / (*Real*)(cond.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,590};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* cond.Cells[5].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* cond.Cells[5].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[5].Nt PARAM */)),"/*Real*/(cond.Cells[5].Nt)",equationIndexes);
  threadData->lastEquationSolved = 590;
}

void RefrigerationTrainer_ClosedLoopM1e_eqFunction_591(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_592(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_593(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_594(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_595(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_596(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_597(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_598(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_599(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_600(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_601(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_602(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_603(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_604(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_605(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_606(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_607(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_608(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_609(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_610(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_611(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_612(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_613(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_614(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_615(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_616(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_617(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_618(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_619(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_625(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_624(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_623(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_622(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_621(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_620(DATA*, threadData_t*);
/*
equation index: 660
indexNonlinear: 1
type: NONLINEAR

vars: {$DER.cond.Cells[1].p, $DER.cond.Cells[5].h, $DER.cond.Cells[4].h, $DER.cond.Cells[1].h, $DER.cond.Cells[2].h, $DER.cond.Cells[3].h}
eqns: {591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 625, 624, 623, 622, 621, 620}
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,660};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 660 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[5].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[4].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* der(cond.Cells[1].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[2].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[3].h) STATE_DER */);
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,660};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 660 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */) = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[5].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[4].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* der(cond.Cells[1].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[2].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[3].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  threadData->lastEquationSolved = 660;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1058(DATA *data, threadData_t *threadData);


/*
equation index: 662
type: SIMPLE_ASSIGN
evap.Cells[1].heatTransfer.Mdotnom = evap.Cells[1].Mdotnom / (*Real*)(evap.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,662};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* evap.Cells[1].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* evap.Cells[1].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[27]] /* evap.Cells[1].Nt PARAM */)),"/*Real*/(evap.Cells[1].Nt)",equationIndexes);
  threadData->lastEquationSolved = 662;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1060(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1096(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1097(DATA *data, threadData_t *threadData);


/*
equation index: 666
type: SIMPLE_ASSIGN
evap.Cells[2].heatTransfer.Mdotnom = evap.Cells[2].Mdotnom / (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,666};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* evap.Cells[2].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* evap.Cells[2].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[2].Nt PARAM */)),"/*Real*/(evap.Cells[2].Nt)",equationIndexes);
  threadData->lastEquationSolved = 666;
}

/*
equation index: 667
type: SIMPLE_ASSIGN
evap.Cells[3].heatTransfer.Mdotnom = evap.Cells[3].Mdotnom / (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,667};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* evap.Cells[3].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* evap.Cells[3].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[3].Nt PARAM */)),"/*Real*/(evap.Cells[3].Nt)",equationIndexes);
  threadData->lastEquationSolved = 667;
}

/*
equation index: 668
type: SIMPLE_ASSIGN
evap.Cells[4].heatTransfer.Mdotnom = evap.Cells[4].Mdotnom / (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,668};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* evap.Cells[4].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[89]] /* evap.Cells[4].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[4].Nt PARAM */)),"/*Real*/(evap.Cells[4].Nt)",equationIndexes);
  threadData->lastEquationSolved = 668;
}

/*
equation index: 669
type: SIMPLE_ASSIGN
evap.Cells[5].heatTransfer.Mdotnom = evap.Cells[5].Mdotnom / (*Real*)(evap.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,669};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* evap.Cells[5].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[90]] /* evap.Cells[5].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[5].Nt PARAM */)),"/*Real*/(evap.Cells[5].Nt)",equationIndexes);
  threadData->lastEquationSolved = 669;
}

void RefrigerationTrainer_ClosedLoopM1e_eqFunction_670(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_671(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_672(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_673(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_674(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_675(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_676(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_677(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_678(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_679(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_680(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_681(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_682(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_683(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_684(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_685(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_686(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_687(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_688(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_689(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_690(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_691(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_692(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_693(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_694(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_695(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_696(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_697(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_698(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_704(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_703(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_702(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_701(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_700(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_699(DATA*, threadData_t*);
/*
equation index: 739
indexNonlinear: 2
type: NONLINEAR

vars: {$DER.evap.Cells[5].p, $DER.evap.Cells[5].h, $DER.evap.Cells[4].h, $DER.evap.Cells[3].h, $DER.evap.Cells[1].h, $DER.evap.Cells[2].h}
eqns: {670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 704, 703, 702, 701, 700, 699}
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,739};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 739 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[5].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[4].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[3].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* der(evap.Cells[1].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[2].h) STATE_DER */);
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,739};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 739 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */) = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[5].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[4].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[3].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* der(evap.Cells[1].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[2].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  threadData->lastEquationSolved = 739;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1302(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1304(DATA *data, threadData_t *threadData);


/*
equation index: 742
type: SIMPLE_ASSIGN
cop = Q_evap_w / max(W_comp_w, 1.0)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[983]] /* cop variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* Q_evap_w variable */),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* W_comp_w variable */),1.0),"max(W_comp_w, 1.0)",equationIndexes);
  threadData->lastEquationSolved = 742;
}

/*
equation index: 743
type: SIMPLE_ASSIGN
drive.phi_support = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,743};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[985]] /* drive.phi_support variable */) = 0.0;
  threadData->lastEquationSolved = 743;
}
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1305(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void RefrigerationTrainer_ClosedLoopM1e_functionInitialEquations_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[280])(DATA*, threadData_t*) = {
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_281,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_282,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_283,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_284,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_285,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_286,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_287,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_288,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_289,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_290,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_291,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_292,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_293,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_294,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_949,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_296,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_965,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_298,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_299,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_300,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_301,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_302,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_303,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_304,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_305,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_306,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_307,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_308,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_309,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_310,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_311,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_312,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_313,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_982,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_983,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_316,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_317,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_318,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_319,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_320,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1306,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1307,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_323,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_324,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_325,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_326,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_327,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_328,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_329,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_330,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_331,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_332,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_333,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_334,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_335,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_336,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_337,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_338,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_339,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_340,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_341,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_342,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_343,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_344,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_345,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_346,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_347,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_348,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_349,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_350,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_351,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_352,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_353,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1196,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_355,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_356,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_357,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_358,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_359,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_360,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_361,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_362,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_363,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_364,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_365,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_366,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_367,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_368,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_369,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1179,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_371,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_372,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_373,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_374,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_375,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_376,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_377,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_378,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_379,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_380,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_381,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_382,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_383,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_384,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_385,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_386,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1163,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_388,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_389,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_390,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_391,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_392,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_393,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_394,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_395,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_396,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_397,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_398,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_399,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_400,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_401,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_402,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1146,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_404,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_405,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_406,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_407,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_408,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_409,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_410,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_411,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_412,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_413,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_414,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_415,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_416,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_417,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_418,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_419,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1130,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_421,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_422,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_423,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_424,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_425,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_426,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_427,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_428,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_429,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_430,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_431,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_432,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_433,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_434,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_435,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1113,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_437,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_438,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_439,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_440,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_441,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_442,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_443,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_444,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_445,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_446,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_447,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_448,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_449,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_450,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_451,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_452,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1095,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_454,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_455,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_456,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_457,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_458,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_459,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_460,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_461,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_462,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_463,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_464,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_465,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_466,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_467,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_468,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1078,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_470,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_471,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1308,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1309,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_474,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1212,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_476,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_477,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_478,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_479,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_480,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_481,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_482,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_483,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_484,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_485,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_486,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_487,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_488,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_489,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_490,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_491,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1229,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1230,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1231,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_495,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_745,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_543,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_815,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_813,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1310,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1311,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1312,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1313,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_550,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_551,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_552,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_553,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_554,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_555,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_556,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_557,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_558,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_559,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_560,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_561,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_562,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_563,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_564,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_565,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_566,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1061,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1059,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_987,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_810,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_811,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_746,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_573,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_574,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_575,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_576,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_577,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_578,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_579,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_580,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_581,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_582,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_583,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_814,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_849,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_850,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_587,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_588,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_589,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_590,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_660,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1058,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_662,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1060,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1096,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1097,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_666,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_667,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_668,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_669,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_739,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1302,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1304,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_742,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_743,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1305
  };
  
  for (int id = 0; id < 280; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif