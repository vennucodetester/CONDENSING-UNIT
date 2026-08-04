#include "RefrigerationTrainer.ClosedLoopM1eCS_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_933(DATA *data, threadData_t *threadData);


/*
equation index: 292
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setState_ph(cond.Cells[1].p, cond.Cells[4].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,292};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState tmp8;
  tmp8 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.T variable */) = tmp8._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.a variable */) = tmp8._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[212]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.beta variable */) = tmp8._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.cp variable */) = tmp8._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.cv variable */) = tmp8._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.d variable */) = tmp8._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.ddhp variable */) = tmp8._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.ddph variable */) = tmp8._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.eta variable */) = tmp8._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.h variable */) = tmp8._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.kappa variable */) = tmp8._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.lambda variable */) = tmp8._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.p variable */) = tmp8._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[3]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.phase variable */) = tmp8._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.s variable */) = tmp8._s;
  ;
  threadData->lastEquationSolved = 292;
}

/*
equation index: 293
type: SIMPLE_ASSIGN
cond.Cells[4].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[662]] /* cond.Cells[4].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.T variable */);
  threadData->lastEquationSolved = 293;
}

/*
equation index: 294
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* cond.Cells[4].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.a variable */);
  threadData->lastEquationSolved = 294;
}

/*
equation index: 295
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* cond.Cells[4].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[212]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.beta variable */);
  threadData->lastEquationSolved = 295;
}

/*
equation index: 296
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,296};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cond.Cells[4].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.cp variable */);
  threadData->lastEquationSolved = 296;
}

/*
equation index: 297
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cond.Cells[4].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.cv variable */);
  threadData->lastEquationSolved = 297;
}

/*
equation index: 298
type: SIMPLE_ASSIGN
cond.Cells[4].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cond.Cells[4].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.d variable */);
  threadData->lastEquationSolved = 298;
}

/*
equation index: 299
type: SIMPLE_ASSIGN
cond.Cells[4].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* cond.Cells[4].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.ddhp variable */);
  threadData->lastEquationSolved = 299;
}

/*
equation index: 300
type: SIMPLE_ASSIGN
cond.Cells[4].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cond.Cells[4].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.ddph variable */);
  threadData->lastEquationSolved = 300;
}

/*
equation index: 301
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cond.Cells[4].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.eta variable */);
  threadData->lastEquationSolved = 301;
}

/*
equation index: 302
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[707]] /* cond.Cells[4].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.h variable */);
  threadData->lastEquationSolved = 302;
}

/*
equation index: 303
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* cond.Cells[4].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.kappa variable */);
  threadData->lastEquationSolved = 303;
}

/*
equation index: 304
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cond.Cells[4].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.lambda variable */);
  threadData->lastEquationSolved = 304;
}

/*
equation index: 305
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* cond.Cells[4].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.p variable */);
  threadData->lastEquationSolved = 305;
}

/*
equation index: 306
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,306};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[23]] /* cond.Cells[4].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[3]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.phase variable */);
  threadData->lastEquationSolved = 306;
}

/*
equation index: 307
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cond.Cells[4].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState292.s variable */);
  threadData->lastEquationSolved = 307;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_950(DATA *data, threadData_t *threadData);


/*
equation index: 309
type: SIMPLE_ASSIGN
cond.Cells[5].h = $START.cond.Cells[5].h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[4] /* cond.Cells[5].h STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 309;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1366(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1367(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1368(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_986(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_966(DATA *data, threadData_t *threadData);


/*
equation index: 315
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setState_ph(cond.Cells[1].p, cond.Cells[5].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,315};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState tmp9;
  tmp9 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.T variable */) = tmp9._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.a variable */) = tmp9._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.beta variable */) = tmp9._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.cp variable */) = tmp9._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.cv variable */) = tmp9._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.d variable */) = tmp9._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.ddhp variable */) = tmp9._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[231]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.ddph variable */) = tmp9._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[232]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.eta variable */) = tmp9._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[233]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.h variable */) = tmp9._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.kappa variable */) = tmp9._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.lambda variable */) = tmp9._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.p variable */) = tmp9._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[4]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.phase variable */) = tmp9._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.s variable */) = tmp9._s;
  ;
  threadData->lastEquationSolved = 315;
}

/*
equation index: 316
type: SIMPLE_ASSIGN
cond.Cells[5].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* cond.Cells[5].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.T variable */);
  threadData->lastEquationSolved = 316;
}

/*
equation index: 317
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* cond.Cells[5].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.a variable */);
  threadData->lastEquationSolved = 317;
}

/*
equation index: 318
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[688]] /* cond.Cells[5].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.beta variable */);
  threadData->lastEquationSolved = 318;
}

/*
equation index: 319
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cond.Cells[5].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.cp variable */);
  threadData->lastEquationSolved = 319;
}

/*
equation index: 320
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cond.Cells[5].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.cv variable */);
  threadData->lastEquationSolved = 320;
}

/*
equation index: 321
type: SIMPLE_ASSIGN
cond.Cells[5].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cond.Cells[5].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.d variable */);
  threadData->lastEquationSolved = 321;
}

/*
equation index: 322
type: SIMPLE_ASSIGN
cond.Cells[5].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* cond.Cells[5].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.ddhp variable */);
  threadData->lastEquationSolved = 322;
}

/*
equation index: 323
type: SIMPLE_ASSIGN
cond.Cells[5].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cond.Cells[5].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[231]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.ddph variable */);
  threadData->lastEquationSolved = 323;
}

/*
equation index: 324
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[703]] /* cond.Cells[5].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[232]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.eta variable */);
  threadData->lastEquationSolved = 324;
}

/*
equation index: 325
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* cond.Cells[5].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[233]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.h variable */);
  threadData->lastEquationSolved = 325;
}

/*
equation index: 326
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,326};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cond.Cells[5].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.kappa variable */);
  threadData->lastEquationSolved = 326;
}

/*
equation index: 327
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,327};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cond.Cells[5].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.lambda variable */);
  threadData->lastEquationSolved = 327;
}

/*
equation index: 328
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,328};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[5].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.p variable */);
  threadData->lastEquationSolved = 328;
}

/*
equation index: 329
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,329};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[24]] /* cond.Cells[5].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[4]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.phase variable */);
  threadData->lastEquationSolved = 329;
}

/*
equation index: 330
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,330};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cond.Cells[5].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState315.s variable */);
  threadData->lastEquationSolved = 330;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_983(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_984(DATA *data, threadData_t *threadData);


/*
equation index: 333
type: SIMPLE_ASSIGN
evap.Cells[1].h = $START.evap.Cells[1].h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,333};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[7] /* evap.Cells[1].h STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 333;
}

/*
equation index: 334
type: SIMPLE_ASSIGN
evap.Cells[2].h = $START.evap.Cells[2].h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,334};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[8] /* evap.Cells[2].h STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 334;
}

/*
equation index: 335
type: SIMPLE_ASSIGN
evap.Cells[3].h = $START.evap.Cells[3].h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[9] /* evap.Cells[3].h STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 335;
}

/*
equation index: 336
type: SIMPLE_ASSIGN
evap.Cells[4].h = $START.evap.Cells[4].h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,336};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[10] /* evap.Cells[4].h STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 336;
}

/*
equation index: 337
type: SIMPLE_ASSIGN
evap.Cells[5].p = $START.evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[12] /* evap.Cells[5].p STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 337;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1383(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1372(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1373(DATA *data, threadData_t *threadData);


/*
equation index: 341
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,341};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties tmp10;
  tmp10 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.Tsat variable */) = tmp10._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.dTp variable */) = tmp10._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.ddldp variable */) = tmp10._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[381]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.ddvdp variable */) = tmp10._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[382]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.dhldp variable */) = tmp10._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.dhvdp variable */) = tmp10._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.dl variable */) = tmp10._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[385]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.dv variable */) = tmp10._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[386]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.hl variable */) = tmp10._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.hv variable */) = tmp10._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.psat variable */) = tmp10._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.sigma variable */) = tmp10._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.sl variable */) = tmp10._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.sv variable */) = tmp10._sv;
  ;
  threadData->lastEquationSolved = 341;
}

/*
equation index: 342
type: SIMPLE_ASSIGN
evap.Cells[5].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,342};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* evap.Cells[5].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.Tsat variable */);
  threadData->lastEquationSolved = 342;
}

/*
equation index: 343
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* evap.Cells[5].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.dTp variable */);
  threadData->lastEquationSolved = 343;
}

/*
equation index: 344
type: SIMPLE_ASSIGN
evap.Cells[5].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,344};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* evap.Cells[5].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.ddldp variable */);
  threadData->lastEquationSolved = 344;
}

/*
equation index: 345
type: SIMPLE_ASSIGN
evap.Cells[5].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* evap.Cells[5].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[381]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.ddvdp variable */);
  threadData->lastEquationSolved = 345;
}

/*
equation index: 346
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,346};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* evap.Cells[5].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[382]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.dhldp variable */);
  threadData->lastEquationSolved = 346;
}

/*
equation index: 347
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,347};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1067]] /* evap.Cells[5].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.dhvdp variable */);
  threadData->lastEquationSolved = 347;
}

/*
equation index: 348
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,348};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* evap.Cells[5].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.dl variable */);
  threadData->lastEquationSolved = 348;
}

/*
equation index: 349
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,349};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* evap.Cells[5].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[385]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.dv variable */);
  threadData->lastEquationSolved = 349;
}

/*
equation index: 350
type: SIMPLE_ASSIGN
evap.Cells[5].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* evap.Cells[5].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[386]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.hl variable */);
  threadData->lastEquationSolved = 350;
}

/*
equation index: 351
type: SIMPLE_ASSIGN
evap.Cells[5].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,351};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* evap.Cells[5].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.hv variable */);
  threadData->lastEquationSolved = 351;
}

/*
equation index: 352
type: SIMPLE_ASSIGN
evap.Cells[5].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,352};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* evap.Cells[5].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.psat variable */);
  threadData->lastEquationSolved = 352;
}

/*
equation index: 353
type: SIMPLE_ASSIGN
evap.Cells[5].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,353};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* evap.Cells[5].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.sigma variable */);
  threadData->lastEquationSolved = 353;
}

/*
equation index: 354
type: SIMPLE_ASSIGN
evap.Cells[5].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,354};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* evap.Cells[5].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.sl variable */);
  threadData->lastEquationSolved = 354;
}

/*
equation index: 355
type: SIMPLE_ASSIGN
evap.Cells[5].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,355};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* evap.Cells[5].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties341.sv variable */);
  threadData->lastEquationSolved = 355;
}

/*
equation index: 356
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[4].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,356};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState tmp11;
  tmp11 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[518]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.T variable */) = tmp11._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.a variable */) = tmp11._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.beta variable */) = tmp11._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.cp variable */) = tmp11._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[522]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.cv variable */) = tmp11._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[523]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.d variable */) = tmp11._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.ddhp variable */) = tmp11._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.ddph variable */) = tmp11._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.eta variable */) = tmp11._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.h variable */) = tmp11._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[528]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.kappa variable */) = tmp11._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.lambda variable */) = tmp11._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.p variable */) = tmp11._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[15]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.phase variable */) = tmp11._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.s variable */) = tmp11._s;
  ;
  threadData->lastEquationSolved = 356;
}

/*
equation index: 357
type: SIMPLE_ASSIGN
evap.Cells[4].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,357};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[936]] /* evap.Cells[4].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[518]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.T variable */);
  threadData->lastEquationSolved = 357;
}

/*
equation index: 358
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,358};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[956]] /* evap.Cells[4].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.a variable */);
  threadData->lastEquationSolved = 358;
}

/*
equation index: 359
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[961]] /* evap.Cells[4].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.beta variable */);
  threadData->lastEquationSolved = 359;
}

/*
equation index: 360
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* evap.Cells[4].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.cp variable */);
  threadData->lastEquationSolved = 360;
}

/*
equation index: 361
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* evap.Cells[4].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[522]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.cv variable */);
  threadData->lastEquationSolved = 361;
}

/*
equation index: 362
type: SIMPLE_ASSIGN
evap.Cells[4].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* evap.Cells[4].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[523]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.d variable */);
  threadData->lastEquationSolved = 362;
}

/*
equation index: 363
type: SIMPLE_ASSIGN
evap.Cells[4].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,363};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[946]] /* evap.Cells[4].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.ddhp variable */);
  threadData->lastEquationSolved = 363;
}

/*
equation index: 364
type: SIMPLE_ASSIGN
evap.Cells[4].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[951]] /* evap.Cells[4].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.ddph variable */);
  threadData->lastEquationSolved = 364;
}

/*
equation index: 365
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[976]] /* evap.Cells[4].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.eta variable */);
  threadData->lastEquationSolved = 365;
}

/*
equation index: 366
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* evap.Cells[4].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.h variable */);
  threadData->lastEquationSolved = 366;
}

/*
equation index: 367
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* evap.Cells[4].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[528]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.kappa variable */);
  threadData->lastEquationSolved = 367;
}

/*
equation index: 368
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* evap.Cells[4].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.lambda variable */);
  threadData->lastEquationSolved = 368;
}

/*
equation index: 369
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[4].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.p variable */);
  threadData->lastEquationSolved = 369;
}

/*
equation index: 370
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,370};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[28]] /* evap.Cells[4].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[15]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.phase variable */);
  threadData->lastEquationSolved = 370;
}

/*
equation index: 371
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* evap.Cells[4].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState356.s variable */);
  threadData->lastEquationSolved = 371;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1230(DATA *data, threadData_t *threadData);


/*
equation index: 373
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,373};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties tmp12;
  tmp12 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[392]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.Tsat variable */) = tmp12._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[393]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.dTp variable */) = tmp12._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[394]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.ddldp variable */) = tmp12._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[395]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.ddvdp variable */) = tmp12._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[396]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.dhldp variable */) = tmp12._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[397]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.dhvdp variable */) = tmp12._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[398]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.dl variable */) = tmp12._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.dv variable */) = tmp12._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.hl variable */) = tmp12._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.hv variable */) = tmp12._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.psat variable */) = tmp12._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.sigma variable */) = tmp12._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.sl variable */) = tmp12._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[405]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.sv variable */) = tmp12._sv;
  ;
  threadData->lastEquationSolved = 373;
}

/*
equation index: 374
type: SIMPLE_ASSIGN
evap.Cells[4].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* evap.Cells[4].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[392]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.Tsat variable */);
  threadData->lastEquationSolved = 374;
}

/*
equation index: 375
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1046]] /* evap.Cells[4].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[393]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.dTp variable */);
  threadData->lastEquationSolved = 375;
}

/*
equation index: 376
type: SIMPLE_ASSIGN
evap.Cells[4].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,376};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* evap.Cells[4].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[394]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.ddldp variable */);
  threadData->lastEquationSolved = 376;
}

/*
equation index: 377
type: SIMPLE_ASSIGN
evap.Cells[4].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,377};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* evap.Cells[4].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[395]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.ddvdp variable */);
  threadData->lastEquationSolved = 377;
}

/*
equation index: 378
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,378};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* evap.Cells[4].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[396]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.dhldp variable */);
  threadData->lastEquationSolved = 378;
}

/*
equation index: 379
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,379};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1066]] /* evap.Cells[4].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[397]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.dhvdp variable */);
  threadData->lastEquationSolved = 379;
}

/*
equation index: 380
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,380};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* evap.Cells[4].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[398]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.dl variable */);
  threadData->lastEquationSolved = 380;
}

/*
equation index: 381
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,381};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* evap.Cells[4].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.dv variable */);
  threadData->lastEquationSolved = 381;
}

/*
equation index: 382
type: SIMPLE_ASSIGN
evap.Cells[4].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* evap.Cells[4].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.hl variable */);
  threadData->lastEquationSolved = 382;
}

/*
equation index: 383
type: SIMPLE_ASSIGN
evap.Cells[4].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* evap.Cells[4].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.hv variable */);
  threadData->lastEquationSolved = 383;
}

/*
equation index: 384
type: SIMPLE_ASSIGN
evap.Cells[4].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* evap.Cells[4].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.psat variable */);
  threadData->lastEquationSolved = 384;
}

/*
equation index: 385
type: SIMPLE_ASSIGN
evap.Cells[4].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,385};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1086]] /* evap.Cells[4].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.sigma variable */);
  threadData->lastEquationSolved = 385;
}

/*
equation index: 386
type: SIMPLE_ASSIGN
evap.Cells[4].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,386};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* evap.Cells[4].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.sl variable */);
  threadData->lastEquationSolved = 386;
}

/*
equation index: 387
type: SIMPLE_ASSIGN
evap.Cells[4].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* evap.Cells[4].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[405]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties373.sv variable */);
  threadData->lastEquationSolved = 387;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1213(DATA *data, threadData_t *threadData);


/*
equation index: 389
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[3].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,389};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState tmp13;
  tmp13 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[532]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.T variable */) = tmp13._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[533]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.a variable */) = tmp13._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[534]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.beta variable */) = tmp13._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[535]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.cp variable */) = tmp13._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[536]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.cv variable */) = tmp13._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[537]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.d variable */) = tmp13._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[538]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.ddhp variable */) = tmp13._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.ddph variable */) = tmp13._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.eta variable */) = tmp13._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.h variable */) = tmp13._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.kappa variable */) = tmp13._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.lambda variable */) = tmp13._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.p variable */) = tmp13._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[16]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.phase variable */) = tmp13._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.s variable */) = tmp13._s;
  ;
  threadData->lastEquationSolved = 389;
}

/*
equation index: 390
type: SIMPLE_ASSIGN
evap.Cells[3].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,390};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* evap.Cells[3].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[532]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.T variable */);
  threadData->lastEquationSolved = 390;
}

/*
equation index: 391
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,391};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[955]] /* evap.Cells[3].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[533]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.a variable */);
  threadData->lastEquationSolved = 391;
}

/*
equation index: 392
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,392};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[960]] /* evap.Cells[3].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[534]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.beta variable */);
  threadData->lastEquationSolved = 392;
}

/*
equation index: 393
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,393};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* evap.Cells[3].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[535]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.cp variable */);
  threadData->lastEquationSolved = 393;
}

/*
equation index: 394
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,394};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* evap.Cells[3].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[536]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.cv variable */);
  threadData->lastEquationSolved = 394;
}

/*
equation index: 395
type: SIMPLE_ASSIGN
evap.Cells[3].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,395};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* evap.Cells[3].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[537]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.d variable */);
  threadData->lastEquationSolved = 395;
}

/*
equation index: 396
type: SIMPLE_ASSIGN
evap.Cells[3].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,396};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[945]] /* evap.Cells[3].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[538]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.ddhp variable */);
  threadData->lastEquationSolved = 396;
}

/*
equation index: 397
type: SIMPLE_ASSIGN
evap.Cells[3].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,397};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[950]] /* evap.Cells[3].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.ddph variable */);
  threadData->lastEquationSolved = 397;
}

/*
equation index: 398
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,398};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[975]] /* evap.Cells[3].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.eta variable */);
  threadData->lastEquationSolved = 398;
}

/*
equation index: 399
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,399};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[980]] /* evap.Cells[3].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.h variable */);
  threadData->lastEquationSolved = 399;
}

/*
equation index: 400
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,400};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[985]] /* evap.Cells[3].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.kappa variable */);
  threadData->lastEquationSolved = 400;
}

/*
equation index: 401
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,401};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* evap.Cells[3].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.lambda variable */);
  threadData->lastEquationSolved = 401;
}

/*
equation index: 402
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,402};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* evap.Cells[3].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.p variable */);
  threadData->lastEquationSolved = 402;
}

/*
equation index: 403
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,403};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[27]] /* evap.Cells[3].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[16]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.phase variable */);
  threadData->lastEquationSolved = 403;
}

/*
equation index: 404
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,404};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* evap.Cells[3].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState389.s variable */);
  threadData->lastEquationSolved = 404;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1197(DATA *data, threadData_t *threadData);


/*
equation index: 406
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,406};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties tmp14;
  tmp14 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[406]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.Tsat variable */) = tmp14._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[407]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.dTp variable */) = tmp14._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[408]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.ddldp variable */) = tmp14._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.ddvdp variable */) = tmp14._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[410]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.dhldp variable */) = tmp14._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.dhvdp variable */) = tmp14._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.dl variable */) = tmp14._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.dv variable */) = tmp14._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.hl variable */) = tmp14._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[415]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.hv variable */) = tmp14._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.psat variable */) = tmp14._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.sigma variable */) = tmp14._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.sl variable */) = tmp14._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[419]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.sv variable */) = tmp14._sv;
  ;
  threadData->lastEquationSolved = 406;
}

/*
equation index: 407
type: SIMPLE_ASSIGN
evap.Cells[3].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,407};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* evap.Cells[3].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[406]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.Tsat variable */);
  threadData->lastEquationSolved = 407;
}

/*
equation index: 408
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,408};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1045]] /* evap.Cells[3].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[407]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.dTp variable */);
  threadData->lastEquationSolved = 408;
}

/*
equation index: 409
type: SIMPLE_ASSIGN
evap.Cells[3].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,409};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* evap.Cells[3].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[408]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.ddldp variable */);
  threadData->lastEquationSolved = 409;
}

/*
equation index: 410
type: SIMPLE_ASSIGN
evap.Cells[3].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,410};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* evap.Cells[3].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.ddvdp variable */);
  threadData->lastEquationSolved = 410;
}

/*
equation index: 411
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,411};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* evap.Cells[3].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[410]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.dhldp variable */);
  threadData->lastEquationSolved = 411;
}

/*
equation index: 412
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,412};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* evap.Cells[3].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.dhvdp variable */);
  threadData->lastEquationSolved = 412;
}

/*
equation index: 413
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,413};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1070]] /* evap.Cells[3].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.dl variable */);
  threadData->lastEquationSolved = 413;
}

/*
equation index: 414
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,414};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* evap.Cells[3].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.dv variable */);
  threadData->lastEquationSolved = 414;
}

/*
equation index: 415
type: SIMPLE_ASSIGN
evap.Cells[3].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,415};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* evap.Cells[3].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.hl variable */);
  threadData->lastEquationSolved = 415;
}

/*
equation index: 416
type: SIMPLE_ASSIGN
evap.Cells[3].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,416};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* evap.Cells[3].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[415]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.hv variable */);
  threadData->lastEquationSolved = 416;
}

/*
equation index: 417
type: SIMPLE_ASSIGN
evap.Cells[3].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,417};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* evap.Cells[3].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.psat variable */);
  threadData->lastEquationSolved = 417;
}

/*
equation index: 418
type: SIMPLE_ASSIGN
evap.Cells[3].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,418};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* evap.Cells[3].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.sigma variable */);
  threadData->lastEquationSolved = 418;
}

/*
equation index: 419
type: SIMPLE_ASSIGN
evap.Cells[3].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,419};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* evap.Cells[3].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.sl variable */);
  threadData->lastEquationSolved = 419;
}

/*
equation index: 420
type: SIMPLE_ASSIGN
evap.Cells[3].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,420};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* evap.Cells[3].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[419]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties406.sv variable */);
  threadData->lastEquationSolved = 420;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1180(DATA *data, threadData_t *threadData);


/*
equation index: 422
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[2].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,422};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState tmp15;
  tmp15 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.T variable */) = tmp15._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[547]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.a variable */) = tmp15._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[548]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.beta variable */) = tmp15._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.cp variable */) = tmp15._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.cv variable */) = tmp15._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.d variable */) = tmp15._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.ddhp variable */) = tmp15._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[553]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.ddph variable */) = tmp15._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.eta variable */) = tmp15._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.h variable */) = tmp15._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.kappa variable */) = tmp15._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[557]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.lambda variable */) = tmp15._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[558]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.p variable */) = tmp15._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[17]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.phase variable */) = tmp15._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[559]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.s variable */) = tmp15._s;
  ;
  threadData->lastEquationSolved = 422;
}

/*
equation index: 423
type: SIMPLE_ASSIGN
evap.Cells[2].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* evap.Cells[2].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.T variable */);
  threadData->lastEquationSolved = 423;
}

/*
equation index: 424
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,424};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* evap.Cells[2].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[547]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.a variable */);
  threadData->lastEquationSolved = 424;
}

/*
equation index: 425
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,425};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[959]] /* evap.Cells[2].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[548]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.beta variable */);
  threadData->lastEquationSolved = 425;
}

/*
equation index: 426
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,426};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* evap.Cells[2].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.cp variable */);
  threadData->lastEquationSolved = 426;
}

/*
equation index: 427
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,427};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* evap.Cells[2].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.cv variable */);
  threadData->lastEquationSolved = 427;
}

/*
equation index: 428
type: SIMPLE_ASSIGN
evap.Cells[2].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,428};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* evap.Cells[2].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.d variable */);
  threadData->lastEquationSolved = 428;
}

/*
equation index: 429
type: SIMPLE_ASSIGN
evap.Cells[2].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,429};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* evap.Cells[2].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.ddhp variable */);
  threadData->lastEquationSolved = 429;
}

/*
equation index: 430
type: SIMPLE_ASSIGN
evap.Cells[2].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,430};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* evap.Cells[2].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[553]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.ddph variable */);
  threadData->lastEquationSolved = 430;
}

/*
equation index: 431
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,431};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* evap.Cells[2].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.eta variable */);
  threadData->lastEquationSolved = 431;
}

/*
equation index: 432
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,432};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[979]] /* evap.Cells[2].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.h variable */);
  threadData->lastEquationSolved = 432;
}

/*
equation index: 433
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,433};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[984]] /* evap.Cells[2].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.kappa variable */);
  threadData->lastEquationSolved = 433;
}

/*
equation index: 434
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,434};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* evap.Cells[2].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[557]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.lambda variable */);
  threadData->lastEquationSolved = 434;
}

/*
equation index: 435
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,435};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* evap.Cells[2].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[558]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.p variable */);
  threadData->lastEquationSolved = 435;
}

/*
equation index: 436
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,436};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* evap.Cells[2].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[17]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.phase variable */);
  threadData->lastEquationSolved = 436;
}

/*
equation index: 437
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,437};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[2].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[559]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState422.s variable */);
  threadData->lastEquationSolved = 437;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1164(DATA *data, threadData_t *threadData);


/*
equation index: 439
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,439};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties tmp16;
  tmp16 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.Tsat variable */) = tmp16._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[421]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.dTp variable */) = tmp16._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[422]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.ddldp variable */) = tmp16._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[423]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.ddvdp variable */) = tmp16._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[424]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.dhldp variable */) = tmp16._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.dhvdp variable */) = tmp16._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.dl variable */) = tmp16._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.dv variable */) = tmp16._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.hl variable */) = tmp16._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.hv variable */) = tmp16._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.psat variable */) = tmp16._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.sigma variable */) = tmp16._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.sl variable */) = tmp16._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.sv variable */) = tmp16._sv;
  ;
  threadData->lastEquationSolved = 439;
}

/*
equation index: 440
type: SIMPLE_ASSIGN
evap.Cells[2].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,440};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* evap.Cells[2].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.Tsat variable */);
  threadData->lastEquationSolved = 440;
}

/*
equation index: 441
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,441};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* evap.Cells[2].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[421]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.dTp variable */);
  threadData->lastEquationSolved = 441;
}

/*
equation index: 442
type: SIMPLE_ASSIGN
evap.Cells[2].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,442};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* evap.Cells[2].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[422]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.ddldp variable */);
  threadData->lastEquationSolved = 442;
}

/*
equation index: 443
type: SIMPLE_ASSIGN
evap.Cells[2].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,443};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1054]] /* evap.Cells[2].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[423]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.ddvdp variable */);
  threadData->lastEquationSolved = 443;
}

/*
equation index: 444
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,444};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* evap.Cells[2].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[424]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.dhldp variable */);
  threadData->lastEquationSolved = 444;
}

/*
equation index: 445
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,445};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* evap.Cells[2].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.dhvdp variable */);
  threadData->lastEquationSolved = 445;
}

/*
equation index: 446
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,446};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1069]] /* evap.Cells[2].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.dl variable */);
  threadData->lastEquationSolved = 446;
}

/*
equation index: 447
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,447};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* evap.Cells[2].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.dv variable */);
  threadData->lastEquationSolved = 447;
}

/*
equation index: 448
type: SIMPLE_ASSIGN
evap.Cells[2].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,448};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* evap.Cells[2].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.hl variable */);
  threadData->lastEquationSolved = 448;
}

/*
equation index: 449
type: SIMPLE_ASSIGN
evap.Cells[2].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,449};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* evap.Cells[2].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.hv variable */);
  threadData->lastEquationSolved = 449;
}

/*
equation index: 450
type: SIMPLE_ASSIGN
evap.Cells[2].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,450};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* evap.Cells[2].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.psat variable */);
  threadData->lastEquationSolved = 450;
}

/*
equation index: 451
type: SIMPLE_ASSIGN
evap.Cells[2].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,451};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* evap.Cells[2].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.sigma variable */);
  threadData->lastEquationSolved = 451;
}

/*
equation index: 452
type: SIMPLE_ASSIGN
evap.Cells[2].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,452};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* evap.Cells[2].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.sl variable */);
  threadData->lastEquationSolved = 452;
}

/*
equation index: 453
type: SIMPLE_ASSIGN
evap.Cells[2].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,453};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* evap.Cells[2].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties439.sv variable */);
  threadData->lastEquationSolved = 453;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1147(DATA *data, threadData_t *threadData);


/*
equation index: 455
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[1].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,455};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState tmp17;
  tmp17 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[560]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.T variable */) = tmp17._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[561]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.a variable */) = tmp17._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[562]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.beta variable */) = tmp17._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.cp variable */) = tmp17._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.cv variable */) = tmp17._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.d variable */) = tmp17._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[566]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.ddhp variable */) = tmp17._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[567]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.ddph variable */) = tmp17._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[568]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.eta variable */) = tmp17._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[569]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.h variable */) = tmp17._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[570]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.kappa variable */) = tmp17._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[571]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.lambda variable */) = tmp17._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[572]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.p variable */) = tmp17._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[18]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.phase variable */) = tmp17._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[573]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.s variable */) = tmp17._s;
  ;
  threadData->lastEquationSolved = 455;
}

/*
equation index: 456
type: SIMPLE_ASSIGN
evap.Cells[1].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,456};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[933]] /* evap.Cells[1].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[560]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.T variable */);
  threadData->lastEquationSolved = 456;
}

/*
equation index: 457
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,457};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[953]] /* evap.Cells[1].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[561]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.a variable */);
  threadData->lastEquationSolved = 457;
}

/*
equation index: 458
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,458};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* evap.Cells[1].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[562]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.beta variable */);
  threadData->lastEquationSolved = 458;
}

/*
equation index: 459
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,459};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* evap.Cells[1].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.cp variable */);
  threadData->lastEquationSolved = 459;
}

/*
equation index: 460
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,460};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* evap.Cells[1].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.cv variable */);
  threadData->lastEquationSolved = 460;
}

/*
equation index: 461
type: SIMPLE_ASSIGN
evap.Cells[1].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,461};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* evap.Cells[1].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.d variable */);
  threadData->lastEquationSolved = 461;
}

/*
equation index: 462
type: SIMPLE_ASSIGN
evap.Cells[1].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,462};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[943]] /* evap.Cells[1].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[566]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.ddhp variable */);
  threadData->lastEquationSolved = 462;
}

/*
equation index: 463
type: SIMPLE_ASSIGN
evap.Cells[1].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,463};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* evap.Cells[1].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[567]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.ddph variable */);
  threadData->lastEquationSolved = 463;
}

/*
equation index: 464
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,464};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[973]] /* evap.Cells[1].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[568]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.eta variable */);
  threadData->lastEquationSolved = 464;
}

/*
equation index: 465
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,465};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[978]] /* evap.Cells[1].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[569]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.h variable */);
  threadData->lastEquationSolved = 465;
}

/*
equation index: 466
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,466};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[983]] /* evap.Cells[1].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[570]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.kappa variable */);
  threadData->lastEquationSolved = 466;
}

/*
equation index: 467
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,467};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* evap.Cells[1].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[571]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.lambda variable */);
  threadData->lastEquationSolved = 467;
}

/*
equation index: 468
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,468};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* evap.Cells[1].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[572]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.p variable */);
  threadData->lastEquationSolved = 468;
}

/*
equation index: 469
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,469};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[25]] /* evap.Cells[1].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[18]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.phase variable */);
  threadData->lastEquationSolved = 469;
}

/*
equation index: 470
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,470};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[1].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[573]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState455.s variable */);
  threadData->lastEquationSolved = 470;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1131(DATA *data, threadData_t *threadData);


/*
equation index: 472
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,472};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties tmp18;
  tmp18 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.Tsat variable */) = tmp18._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.dTp variable */) = tmp18._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.ddldp variable */) = tmp18._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.ddvdp variable */) = tmp18._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.dhldp variable */) = tmp18._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.dhvdp variable */) = tmp18._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.dl variable */) = tmp18._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.dv variable */) = tmp18._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.hl variable */) = tmp18._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.hv variable */) = tmp18._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.psat variable */) = tmp18._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.sigma variable */) = tmp18._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.sl variable */) = tmp18._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[447]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.sv variable */) = tmp18._sv;
  ;
  threadData->lastEquationSolved = 472;
}

/*
equation index: 473
type: SIMPLE_ASSIGN
evap.Cells[1].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,473};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1038]] /* evap.Cells[1].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.Tsat variable */);
  threadData->lastEquationSolved = 473;
}

/*
equation index: 474
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,474};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1043]] /* evap.Cells[1].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.dTp variable */);
  threadData->lastEquationSolved = 474;
}

/*
equation index: 475
type: SIMPLE_ASSIGN
evap.Cells[1].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,475};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* evap.Cells[1].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.ddldp variable */);
  threadData->lastEquationSolved = 475;
}

/*
equation index: 476
type: SIMPLE_ASSIGN
evap.Cells[1].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,476};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1053]] /* evap.Cells[1].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.ddvdp variable */);
  threadData->lastEquationSolved = 476;
}

/*
equation index: 477
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,477};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* evap.Cells[1].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.dhldp variable */);
  threadData->lastEquationSolved = 477;
}

/*
equation index: 478
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,478};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1063]] /* evap.Cells[1].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.dhvdp variable */);
  threadData->lastEquationSolved = 478;
}

/*
equation index: 479
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,479};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1068]] /* evap.Cells[1].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.dl variable */);
  threadData->lastEquationSolved = 479;
}

/*
equation index: 480
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,480};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* evap.Cells[1].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.dv variable */);
  threadData->lastEquationSolved = 480;
}

/*
equation index: 481
type: SIMPLE_ASSIGN
evap.Cells[1].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,481};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1003]] /* evap.Cells[1].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.hl variable */);
  threadData->lastEquationSolved = 481;
}

/*
equation index: 482
type: SIMPLE_ASSIGN
evap.Cells[1].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,482};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* evap.Cells[1].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.hv variable */);
  threadData->lastEquationSolved = 482;
}

/*
equation index: 483
type: SIMPLE_ASSIGN
evap.Cells[1].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,483};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* evap.Cells[1].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.psat variable */);
  threadData->lastEquationSolved = 483;
}

/*
equation index: 484
type: SIMPLE_ASSIGN
evap.Cells[1].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,484};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* evap.Cells[1].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.sigma variable */);
  threadData->lastEquationSolved = 484;
}

/*
equation index: 485
type: SIMPLE_ASSIGN
evap.Cells[1].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,485};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* evap.Cells[1].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.sl variable */);
  threadData->lastEquationSolved = 485;
}

/*
equation index: 486
type: SIMPLE_ASSIGN
evap.Cells[1].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,486};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* evap.Cells[1].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[447]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties472.sv variable */);
  threadData->lastEquationSolved = 486;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1104(DATA *data, threadData_t *threadData);


/*
equation index: 488
type: SIMPLE_ASSIGN
txv.DELTAp = cond.Cells[1].p - evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,488};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* txv.DELTAp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */);
  threadData->lastEquationSolved = 488;
}

/*
equation index: 489
type: SIMPLE_ASSIGN
p_lift_pa = txv.DELTAp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,489};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* p_lift_pa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* txv.DELTAp variable */);
  threadData->lastEquationSolved = 489;
}

/*
equation index: 490
type: SIMPLE_ASSIGN
evap.Cells[5].h = $START.evap.Cells[5].h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,490};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[11] /* evap.Cells[5].h STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 490;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1374(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1379(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1381(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1380(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1375(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1382(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1246(DATA *data, threadData_t *threadData);


/*
equation index: 498
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[5].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,498};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState tmp19;
  tmp19 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[574]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.T variable */) = tmp19._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.a variable */) = tmp19._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[576]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.beta variable */) = tmp19._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[577]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.cp variable */) = tmp19._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[578]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.cv variable */) = tmp19._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[579]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.d variable */) = tmp19._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[580]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.ddhp variable */) = tmp19._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[581]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.ddph variable */) = tmp19._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[582]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.eta variable */) = tmp19._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[583]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.h variable */) = tmp19._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.kappa variable */) = tmp19._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.lambda variable */) = tmp19._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.p variable */) = tmp19._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[19]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.phase variable */) = tmp19._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[587]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.s variable */) = tmp19._s;
  ;
  threadData->lastEquationSolved = 498;
}

/*
equation index: 499
type: SIMPLE_ASSIGN
evap.Cells[5].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,499};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[937]] /* evap.Cells[5].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[574]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.T variable */);
  threadData->lastEquationSolved = 499;
}

/*
equation index: 500
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,500};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* evap.Cells[5].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.a variable */);
  threadData->lastEquationSolved = 500;
}

/*
equation index: 501
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,501};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[962]] /* evap.Cells[5].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[576]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.beta variable */);
  threadData->lastEquationSolved = 501;
}

/*
equation index: 502
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,502};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* evap.Cells[5].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[577]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.cp variable */);
  threadData->lastEquationSolved = 502;
}

/*
equation index: 503
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,503};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* evap.Cells[5].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[578]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.cv variable */);
  threadData->lastEquationSolved = 503;
}

/*
equation index: 504
type: SIMPLE_ASSIGN
evap.Cells[5].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,504};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* evap.Cells[5].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[579]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.d variable */);
  threadData->lastEquationSolved = 504;
}

/*
equation index: 505
type: SIMPLE_ASSIGN
evap.Cells[5].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,505};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* evap.Cells[5].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[580]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.ddhp variable */);
  threadData->lastEquationSolved = 505;
}

/*
equation index: 506
type: SIMPLE_ASSIGN
evap.Cells[5].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,506};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* evap.Cells[5].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[581]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.ddph variable */);
  threadData->lastEquationSolved = 506;
}

/*
equation index: 507
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,507};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* evap.Cells[5].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[582]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.eta variable */);
  threadData->lastEquationSolved = 507;
}

/*
equation index: 508
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,508};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[982]] /* evap.Cells[5].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[583]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.h variable */);
  threadData->lastEquationSolved = 508;
}

/*
equation index: 509
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,509};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* evap.Cells[5].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.kappa variable */);
  threadData->lastEquationSolved = 509;
}

/*
equation index: 510
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,510};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* evap.Cells[5].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.lambda variable */);
  threadData->lastEquationSolved = 510;
}

/*
equation index: 511
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,511};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[5].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.p variable */);
  threadData->lastEquationSolved = 511;
}

/*
equation index: 512
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,512};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[29]] /* evap.Cells[5].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[19]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.phase variable */);
  threadData->lastEquationSolved = 512;
}

/*
equation index: 513
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,513};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* evap.Cells[5].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[587]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState498.s variable */);
  threadData->lastEquationSolved = 513;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1263(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1264(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1265(DATA *data, threadData_t *threadData);


/*
equation index: 517
type: SIMPLE_ASSIGN
comp.N_rot = (-drive.w_fixed) / (-6.283185307179586)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,517};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* comp.N_rot variable */) = DIVISION_SIM((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* drive.w_fixed PARAM */)),-6.283185307179586,"-6.283185307179586",equationIndexes);
  threadData->lastEquationSolved = 517;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_788(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_789(DATA *data, threadData_t *threadData);


void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_520(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_521(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_522(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_523(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_524(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_525(DATA*, threadData_t*);
/*
equation index: 526
indexNonlinear: 0
type: NONLINEAR

vars: {comp.h_su}
eqns: {520, 521, 522, 523, 524, 525}
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,526};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 526 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */);
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,526};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 526 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  threadData->lastEquationSolved = 526;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_808(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_807(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_806(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_804(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_798(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_803(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1369(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_799(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_800(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_801(DATA *data, threadData_t *threadData);


/*
equation index: 537
type: SIMPLE_ASSIGN
evap.Cells[5].heatTransfer.Unom = 0.3333333333333333 * (evap.Cells[5].Unom_l + evap.Cells[5].Unom_tp + evap.Cells[5].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,537};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* evap.Cells[5].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* evap.Cells[5].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[128]] /* evap.Cells[5].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* evap.Cells[5].Unom_v PARAM */));
  threadData->lastEquationSolved = 537;
}

/*
equation index: 538
type: SIMPLE_ASSIGN
evap.Cells[4].heatTransfer.Unom = 0.3333333333333333 * (evap.Cells[4].Unom_l + evap.Cells[4].Unom_tp + evap.Cells[4].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,538};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* evap.Cells[4].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[122]] /* evap.Cells[4].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[127]] /* evap.Cells[4].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[132]] /* evap.Cells[4].Unom_v PARAM */));
  threadData->lastEquationSolved = 538;
}

/*
equation index: 539
type: SIMPLE_ASSIGN
evap.Cells[3].heatTransfer.Unom = 0.3333333333333333 * (evap.Cells[3].Unom_l + evap.Cells[3].Unom_tp + evap.Cells[3].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,539};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* evap.Cells[3].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[121]] /* evap.Cells[3].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[126]] /* evap.Cells[3].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* evap.Cells[3].Unom_v PARAM */));
  threadData->lastEquationSolved = 539;
}

/*
equation index: 540
type: SIMPLE_ASSIGN
evap.Cells[2].heatTransfer.Unom = 0.3333333333333333 * (evap.Cells[2].Unom_l + evap.Cells[2].Unom_tp + evap.Cells[2].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,540};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* evap.Cells[2].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* evap.Cells[2].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[125]] /* evap.Cells[2].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* evap.Cells[2].Unom_v PARAM */));
  threadData->lastEquationSolved = 540;
}

/*
equation index: 541
type: SIMPLE_ASSIGN
evap.Cells[1].heatTransfer.Unom = 0.3333333333333333 * (evap.Cells[1].Unom_l + evap.Cells[1].Unom_tp + evap.Cells[1].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,541};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* evap.Cells[1].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* evap.Cells[1].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[124]] /* evap.Cells[1].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[129]] /* evap.Cells[1].Unom_v PARAM */));
  threadData->lastEquationSolved = 541;
}

/*
equation index: 542
type: SIMPLE_ASSIGN
cond.Cells[5].heatTransfer.Unom = 0.3333333333333333 * (cond.Cells[5].Unom_l + cond.Cells[5].Unom_tp + cond.Cells[5].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,542};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cond.Cells[5].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* cond.Cells[5].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* cond.Cells[5].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[62]] /* cond.Cells[5].Unom_v PARAM */));
  threadData->lastEquationSolved = 542;
}

/*
equation index: 543
type: SIMPLE_ASSIGN
cond.Cells[4].heatTransfer.Unom = 0.3333333333333333 * (cond.Cells[4].Unom_l + cond.Cells[4].Unom_tp + cond.Cells[4].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,543};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* cond.Cells[4].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* cond.Cells[4].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* cond.Cells[4].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[61]] /* cond.Cells[4].Unom_v PARAM */));
  threadData->lastEquationSolved = 543;
}

/*
equation index: 544
type: SIMPLE_ASSIGN
cond.Cells[3].heatTransfer.Unom = 0.3333333333333333 * (cond.Cells[3].Unom_l + cond.Cells[3].Unom_tp + cond.Cells[3].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,544};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cond.Cells[3].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* cond.Cells[3].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* cond.Cells[3].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[60]] /* cond.Cells[3].Unom_v PARAM */));
  threadData->lastEquationSolved = 544;
}

/*
equation index: 545
type: SIMPLE_ASSIGN
cond.Cells[2].heatTransfer.Unom = 0.3333333333333333 * (cond.Cells[2].Unom_l + cond.Cells[2].Unom_tp + cond.Cells[2].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,545};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* cond.Cells[2].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* cond.Cells[2].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* cond.Cells[2].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* cond.Cells[2].Unom_v PARAM */));
  threadData->lastEquationSolved = 545;
}

/*
equation index: 546
type: SIMPLE_ASSIGN
cond.Cells[1].heatTransfer.Unom = 0.3333333333333333 * (cond.Cells[1].Unom_l + cond.Cells[1].Unom_tp + cond.Cells[1].Unom_v)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,546};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cond.Cells[1].heatTransfer.Unom variable */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* cond.Cells[1].Unom_l PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[53]] /* cond.Cells[1].Unom_tp PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* cond.Cells[1].Unom_v PARAM */));
  threadData->lastEquationSolved = 546;
}

/*
equation index: 547
type: SIMPLE_ASSIGN
coil_evap.m_dot_air = max(0.01, coil_evap.V_dot_air_m3_s * coil_evap.rho_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,547};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* coil_evap.m_dot_air variable */) = fmax(0.01,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* coil_evap.V_dot_air_m3_s PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[16]] /* coil_evap.rho_air PARAM */)));
  threadData->lastEquationSolved = 547;
}

/*
equation index: 548
type: SIMPLE_ASSIGN
coil_evap.UA_air_tot = coil_evap.UA_air_nom * (1e-6 + (max(0.01, coil_evap.V_dot_air_m3_s) / coil_evap.V_dot_air_nom) ^ 2.0) ^ 0.4
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,548};
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  tmp20 = DIVISION_SIM(fmax(0.01,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* coil_evap.V_dot_air_m3_s PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* coil_evap.V_dot_air_nom PARAM */),"coil_evap.V_dot_air_nom",equationIndexes);
  tmp21 = 1e-6 + (tmp20 * tmp20);
  tmp22 = 0.4;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[624]] /* coil_evap.UA_air_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* coil_evap.UA_air_nom PARAM */)) * (tmp23);
  threadData->lastEquationSolved = 548;
}

/*
equation index: 549
type: SIMPLE_ASSIGN
coil_evap.UA_cell = 0.2 * coil_evap.UA_air_tot
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,549};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* coil_evap.UA_cell variable */) = (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[624]] /* coil_evap.UA_air_tot variable */));
  threadData->lastEquationSolved = 549;
}

/*
equation index: 550
type: SIMPLE_ASSIGN
coil_cond.m_dot_air = max(0.01, coil_cond.V_dot_air_m3_s * coil_cond.rho_air)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,550};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* coil_cond.m_dot_air variable */) = fmax(0.01,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* coil_cond.V_dot_air_m3_s PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* coil_cond.rho_air PARAM */)));
  threadData->lastEquationSolved = 550;
}

/*
equation index: 551
type: SIMPLE_ASSIGN
coil_cond.UA_air_tot = coil_cond.UA_air_nom * (1e-6 + (max(0.01, coil_cond.V_dot_air_m3_s) / coil_cond.V_dot_air_nom) ^ 2.0) ^ 0.4
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,551};
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  tmp28 = DIVISION_SIM(fmax(0.01,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* coil_cond.V_dot_air_m3_s PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* coil_cond.V_dot_air_nom PARAM */),"coil_cond.V_dot_air_nom",equationIndexes);
  tmp29 = 1e-6 + (tmp28 * tmp28);
  tmp30 = 0.4;
  if(tmp29 < 0.0 && tmp30 != 0.0)
  {
    tmp32 = modf(tmp30, &tmp33);
    
    if(tmp32 > 0.5)
    {
      tmp32 -= 1.0;
      tmp33 += 1.0;
    }
    else if(tmp32 < -0.5)
    {
      tmp32 += 1.0;
      tmp33 -= 1.0;
    }
    
    if(fabs(tmp32) < 1e-10)
      tmp31 = pow(tmp29, tmp33);
    else
    {
      tmp35 = modf(1.0/tmp30, &tmp34);
      if(tmp35 > 0.5)
      {
        tmp35 -= 1.0;
        tmp34 += 1.0;
      }
      else if(tmp35 < -0.5)
      {
        tmp35 += 1.0;
        tmp34 -= 1.0;
      }
      if(fabs(tmp35) < 1e-10 && ((unsigned long)tmp34 & 1))
      {
        tmp31 = -pow(-tmp29, tmp32)*pow(tmp29, tmp33);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp29, tmp30);
      }
    }
  }
  else
  {
    tmp31 = pow(tmp29, tmp30);
  }
  if(isnan(tmp31) || isinf(tmp31))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp29, tmp30);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* coil_cond.UA_air_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* coil_cond.UA_air_nom PARAM */)) * (tmp31);
  threadData->lastEquationSolved = 551;
}

/*
equation index: 552
type: SIMPLE_ASSIGN
coil_cond.UA_cell = 0.2 * coil_cond.UA_air_tot
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,552};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* coil_cond.UA_cell variable */) = (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* coil_cond.UA_air_tot variable */));
  threadData->lastEquationSolved = 552;
}

/*
equation index: 553
type: SIMPLE_ASSIGN
cond.Cells[1].heatTransfer.Mdotnom = cond.Cells[1].Mdotnom / (*Real*)(cond.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,553};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[739]] /* cond.Cells[1].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* cond.Cells[1].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[1].Nt PARAM */)),"/*Real*/(cond.Cells[1].Nt)",equationIndexes);
  threadData->lastEquationSolved = 553;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_805(DATA *data, threadData_t *threadData);


/*
equation index: 563
type: LINEAR

<var>cond.Wall_int.T[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,563};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[901]] /* cond.Wall_int.T[1] variable */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 563 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,563};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 563 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* cond.Wall_int.T[1] variable */) = aux_x[0];

  threadData->lastEquationSolved = 563;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_850(DATA *data, threadData_t *threadData);


/*
equation index: 565
type: SIMPLE_ASSIGN
cond.Cells[2].heatTransfer.Mdotnom = cond.Cells[2].Mdotnom / (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cond.Cells[2].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* cond.Cells[2].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* cond.Cells[2].Nt PARAM */)),"/*Real*/(cond.Cells[2].Nt)",equationIndexes);
  threadData->lastEquationSolved = 565;
}

/*
equation index: 566
type: SIMPLE_ASSIGN
cond.Cells[3].heatTransfer.Mdotnom = cond.Cells[3].Mdotnom / (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,566};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cond.Cells[3].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* cond.Cells[3].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* cond.Cells[3].Nt PARAM */)),"/*Real*/(cond.Cells[3].Nt)",equationIndexes);
  threadData->lastEquationSolved = 566;
}

/*
equation index: 567
type: SIMPLE_ASSIGN
cond.Cells[4].heatTransfer.Mdotnom = cond.Cells[4].Mdotnom / (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* cond.Cells[4].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* cond.Cells[4].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* cond.Cells[4].Nt PARAM */)),"/*Real*/(cond.Cells[4].Nt)",equationIndexes);
  threadData->lastEquationSolved = 567;
}

/*
equation index: 568
type: SIMPLE_ASSIGN
cond.Cells[5].heatTransfer.Mdotnom = cond.Cells[5].Mdotnom / (*Real*)(cond.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* cond.Cells[5].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* cond.Cells[5].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* cond.Cells[5].Nt PARAM */)),"/*Real*/(cond.Cells[5].Nt)",equationIndexes);
  threadData->lastEquationSolved = 568;
}

/*
equation index: 569
type: SIMPLE_ASSIGN
evap.Cells[1].heatTransfer.Mdotnom = evap.Cells[1].Mdotnom / (*Real*)(evap.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,569};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* evap.Cells[1].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* evap.Cells[1].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[1].Nt PARAM */)),"/*Real*/(evap.Cells[1].Nt)",equationIndexes);
  threadData->lastEquationSolved = 569;
}

/*
equation index: 570
type: SIMPLE_ASSIGN
evap.Cells[2].heatTransfer.Mdotnom = evap.Cells[2].Mdotnom / (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* evap.Cells[2].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* evap.Cells[2].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* evap.Cells[2].Nt PARAM */)),"/*Real*/(evap.Cells[2].Nt)",equationIndexes);
  threadData->lastEquationSolved = 570;
}

/*
equation index: 571
type: SIMPLE_ASSIGN
evap.Cells[3].heatTransfer.Mdotnom = evap.Cells[3].Mdotnom / (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,571};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* evap.Cells[3].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* evap.Cells[3].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* evap.Cells[3].Nt PARAM */)),"/*Real*/(evap.Cells[3].Nt)",equationIndexes);
  threadData->lastEquationSolved = 571;
}

/*
equation index: 572
type: SIMPLE_ASSIGN
evap.Cells[4].heatTransfer.Mdotnom = evap.Cells[4].Mdotnom / (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,572};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* evap.Cells[4].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[4].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* evap.Cells[4].Nt PARAM */)),"/*Real*/(evap.Cells[4].Nt)",equationIndexes);
  threadData->lastEquationSolved = 572;
}

/*
equation index: 573
type: SIMPLE_ASSIGN
evap.Cells[5].heatTransfer.Mdotnom = evap.Cells[5].Mdotnom / (*Real*)(evap.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,573};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* evap.Cells[5].heatTransfer.Mdotnom variable */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[5].Mdotnom PARAM */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[35]] /* evap.Cells[5].Nt PARAM */)),"/*Real*/(evap.Cells[5].Nt)",equationIndexes);
  threadData->lastEquationSolved = 573;
}

/*
equation index: 574
type: SIMPLE_ASSIGN
txv_opening_cmd = txv_opening_frac
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,574};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* txv_opening_cmd STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[186]] /* txv_opening_frac PARAM */);
  threadData->lastEquationSolved = 574;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1363(DATA *data, threadData_t *threadData);


/*
equation index: 576
type: SIMPLE_ASSIGN
$DER.txv_opening_cmd = (max(0.05, min(1.0, txv_opening_frac + 0.05 * res_superheat_k)) - txv_opening_cmd) / tau_txv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,576};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* der(txv_opening_cmd) STATE_DER */) = DIVISION_SIM(fmax(0.05,fmin(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[186]] /* txv_opening_frac PARAM */) + (0.05) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1191]] /* res_superheat_k variable */)))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* txv_opening_cmd STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* tau_txv PARAM */),"tau_txv",equationIndexes);
  threadData->lastEquationSolved = 576;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_985(DATA *data, threadData_t *threadData);


/*
equation index: 578
type: SIMPLE_ASSIGN
txv.Mdot = 1.4142135623730951 * txv.A * sqrt(txv.rho) * smooth(1, if noEvent(txv.DELTAp > txv.DELTAp_0) then sqrt(txv.DELTAp) else if noEvent(txv.DELTAp < (-txv.DELTAp_0)) then -sqrt(-txv.DELTAp) else 0.25 * sqrt(txv.DELTAp_0) * txv.DELTAp / txv.DELTAp_0 * (5.0 - (txv.DELTAp / txv.DELTAp_0) ^ 2.0))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,578};
  modelica_real tmp36;
  modelica_boolean tmp37;
  modelica_real tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_boolean tmp43;
  modelica_real tmp44;
  modelica_boolean tmp45;
  modelica_real tmp46;
  tmp36 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* txv.rho variable */);
  if(!(tmp36 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(txv.rho) was %g should be >= 0", tmp36);
    }
  }tmp37 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* txv.DELTAp variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* txv.DELTAp_0 PARAM */));
  tmp45 = (modelica_boolean)tmp37;
  if(tmp45)
  {
    tmp38 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* txv.DELTAp variable */);
    if(!(tmp38 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(txv.DELTAp) was %g should be >= 0", tmp38);
      }
    }
    tmp46 = sqrt(tmp38);
  }
  else
  {
    tmp39 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* txv.DELTAp variable */),(-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* txv.DELTAp_0 PARAM */)));
    tmp43 = (modelica_boolean)tmp39;
    if(tmp43)
    {
      tmp40 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* txv.DELTAp variable */));
      if(!(tmp40 >= 0.0))
      {
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"",0,0,0,0,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(-txv.DELTAp) was %g should be >= 0", tmp40);
        }
      }
      tmp44 = (-sqrt(tmp40));
    }
    else
    {
      tmp41 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* txv.DELTAp_0 PARAM */);
      if(!(tmp41 >= 0.0))
      {
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"",0,0,0,0,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(txv.DELTAp_0) was %g should be >= 0", tmp41);
        }
      }tmp42 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* txv.DELTAp variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* txv.DELTAp_0 PARAM */),"txv.DELTAp_0",equationIndexes);
      tmp44 = ((0.25) * ((sqrt(tmp41)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* txv.DELTAp variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* txv.DELTAp_0 PARAM */),"txv.DELTAp_0",equationIndexes)))) * (5.0 - ((tmp42 * tmp42)));
    }
    tmp46 = tmp44;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* txv.Mdot variable */) = (1.4142135623730951) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* txv.A variable */)) * ((sqrt(tmp36)) * (tmp46)));
  threadData->lastEquationSolved = 578;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1087(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_989(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_990(DATA *data, threadData_t *threadData);


/*
equation index: 590
type: LINEAR

<var>evap.Wall_int.T[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,590};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1174]] /* evap.Wall_int.T[1] variable */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 590 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,590};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 590 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* evap.Wall_int.T[1] variable */) = aux_x[0];

  threadData->lastEquationSolved = 590;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1130(DATA *data, threadData_t *threadData);


void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_592(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_593(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_594(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_595(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_596(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_597(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_598(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_599(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_600(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_601(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_602(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_603(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_604(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_605(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_606(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_607(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_608(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_609(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_610(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_611(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_612(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_613(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_614(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_615(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_616(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_617(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_618(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_619(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_620(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_621(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_622(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_623(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_624(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_625(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_626(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_627(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_628(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_629(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_630(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_631(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_632(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_633(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_638(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_637(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_636(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_635(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_634(DATA*, threadData_t*);
/*
equation index: 685
indexNonlinear: 1
type: NONLINEAR

vars: {$DER.evap.Cells[1].h, $DER.evap.Cells[2].h, $DER.evap.Cells[5].h, $DER.evap.Cells[4].h, $DER.evap.Cells[3].h}
eqns: {592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 638, 637, 636, 635, 634}
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,685};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 685 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[1].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[2].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[4].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[3].h) STATE_DER */);
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,685};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 685 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[1].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[2].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[4].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[3].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  threadData->lastEquationSolved = 685;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1360(DATA *data, threadData_t *threadData);


/*
equation index: 687
type: SIMPLE_ASSIGN
cop = Q_evap_w / max(W_comp_w, 1.0)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,687};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[906]] /* cop variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* Q_evap_w variable */),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* W_comp_w variable */),1.0),"max(W_comp_w, 1.0)",equationIndexes);
  threadData->lastEquationSolved = 687;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_991(DATA *data, threadData_t *threadData);


void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_689(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_690(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_691(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_692(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_693(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_694(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_695(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_696(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_697(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_698(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_699(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_700(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_701(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_702(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_703(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_704(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_705(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_706(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_707(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_708(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_709(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_710(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_711(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_712(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_713(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_714(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_715(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_716(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_717(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_718(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_719(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_720(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_721(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_722(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_723(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_724(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_725(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_726(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_727(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_728(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_729(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_730(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_735(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_734(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_733(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_732(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_731(DATA*, threadData_t*);
/*
equation index: 782
indexNonlinear: 2
type: NONLINEAR

vars: {$DER.cond.Cells[5].h, $DER.cond.Cells[4].h, $DER.cond.Cells[1].h, $DER.cond.Cells[2].h, $DER.cond.Cells[3].h}
eqns: {689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 735, 734, 733, 732, 731}
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,782};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 782 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[5].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[4].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[1].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[2].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[3].h) STATE_DER */);
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,782};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 782 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[5].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[4].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[1].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[2].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[3].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  threadData->lastEquationSolved = 782;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1086(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1362(DATA *data, threadData_t *threadData);


/*
equation index: 785
type: SIMPLE_ASSIGN
drive.phi_support = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,785};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[908]] /* drive.phi_support variable */) = 0.0;
  threadData->lastEquationSolved = 785;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1384(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_790(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void RefrigerationTrainer_ClosedLoopM1eCS_functionInitialEquations_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[289])(DATA*, threadData_t*) = {
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_933,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_292,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_293,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_294,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_295,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_296,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_297,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_298,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_299,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_300,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_301,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_302,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_303,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_304,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_305,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_306,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_307,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_950,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_309,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1366,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1367,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1368,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_986,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_966,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_315,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_316,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_317,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_318,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_319,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_320,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_321,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_322,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_323,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_324,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_325,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_326,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_327,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_328,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_329,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_330,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_983,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_984,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_333,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_334,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_335,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_336,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_337,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1383,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1372,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1373,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_341,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_342,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_343,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_344,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_345,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_346,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_347,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_348,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_349,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_350,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_351,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_352,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_353,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_354,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_355,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_356,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_357,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_358,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_359,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_360,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_361,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_362,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_363,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_364,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_365,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_366,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_367,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_368,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_369,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_370,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_371,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1230,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_373,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_374,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_375,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_376,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_377,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_378,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_379,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_380,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_381,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_382,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_383,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_384,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_385,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_386,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_387,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1213,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_389,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_390,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_391,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_392,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_393,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_394,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_395,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_396,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_397,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_398,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_399,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_400,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_401,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_402,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_403,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_404,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1197,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_406,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_407,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_408,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_409,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_410,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_411,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_412,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_413,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_414,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_415,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_416,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_417,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_418,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_419,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_420,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1180,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_422,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_423,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_424,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_425,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_426,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_427,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_428,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_429,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_430,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_431,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_432,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_433,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_434,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_435,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_436,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_437,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1164,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_439,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_440,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_441,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_442,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_443,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_444,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_445,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_446,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_447,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_448,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_449,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_450,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_451,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_452,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_453,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1147,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_455,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_456,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_457,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_458,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_459,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_460,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_461,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_462,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_463,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_464,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_465,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_466,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_467,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_468,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_469,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_470,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1131,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_472,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_473,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_474,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_475,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_476,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_477,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_478,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_479,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_480,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_481,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_482,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_483,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_484,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_485,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_486,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1104,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_488,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_489,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_490,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1374,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1379,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1381,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1380,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1375,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1382,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1246,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_498,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_499,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_500,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_501,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_502,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_503,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_504,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_505,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_506,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_507,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_508,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_509,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_510,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_511,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_512,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_513,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1263,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1264,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1265,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_517,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_788,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_789,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_526,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_808,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_807,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_806,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_804,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_798,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_803,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1369,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_799,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_800,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_801,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_537,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_538,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_539,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_540,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_541,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_542,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_543,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_544,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_545,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_546,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_547,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_548,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_549,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_550,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_551,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_552,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_553,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_805,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_563,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_850,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_565,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_566,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_567,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_568,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_569,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_570,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_571,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_572,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_573,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_574,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1363,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_576,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_985,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_578,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1087,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_989,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_990,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_590,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1130,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_685,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1360,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_687,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_991,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_782,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1086,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1362,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_785,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1384,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_790
  };
  
  for (int id = 0; id < 289; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif