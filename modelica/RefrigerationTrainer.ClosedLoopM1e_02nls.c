/* Non Linear Systems */
#include "RefrigerationTrainer.ClosedLoopM1e_model.h"
#include "RefrigerationTrainer.ClosedLoopM1e_12jac.h"
#include "simulation/jacobian_util.h"
#include "simulation/arrayIndex.h"

#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 497
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497 := RefrigerationTrainer.ClosedLoopM1e.comp.Medium.setState_ph(evap.Cells[5].p, comp.h_su, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,497};
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState tmp0;
  tmp0 = omc_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.T variable */) = tmp0._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.a variable */) = tmp0._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.beta variable */) = tmp0._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.cp variable */) = tmp0._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.cv variable */) = tmp0._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.d variable */) = tmp0._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.ddhp variable */) = tmp0._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.ddph variable */) = tmp0._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.eta variable */) = tmp0._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.h variable */) = tmp0._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.kappa variable */) = tmp0._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.lambda variable */) = tmp0._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.p variable */) = tmp0._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.phase variable */) = tmp0._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.s variable */) = tmp0._s;
  ;
  threadData->lastEquationSolved = 497;
}
/*
equation index: 498
type: SIMPLE_ASSIGN
comp.vaporIn.T = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,498};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[688]] /* comp.vaporIn.T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.T variable */);
  threadData->lastEquationSolved = 498;
}
/*
equation index: 499
type: SIMPLE_ASSIGN
comp.vaporIn.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,499};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* comp.vaporIn.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.a variable */);
  threadData->lastEquationSolved = 499;
}
/*
equation index: 500
type: SIMPLE_ASSIGN
comp.vaporIn.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,500};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* comp.vaporIn.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.beta variable */);
  threadData->lastEquationSolved = 500;
}
/*
equation index: 501
type: SIMPLE_ASSIGN
comp.vaporIn.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,501};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* comp.vaporIn.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.cp variable */);
  threadData->lastEquationSolved = 501;
}
/*
equation index: 502
type: SIMPLE_ASSIGN
comp.vaporIn.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,502};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* comp.vaporIn.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.cv variable */);
  threadData->lastEquationSolved = 502;
}
/*
equation index: 503
type: SIMPLE_ASSIGN
comp.rho_su = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,503};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* comp.rho_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.d variable */);
  threadData->lastEquationSolved = 503;
}
/*
equation index: 504
type: SIMPLE_ASSIGN
comp.vaporIn.ddhp = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,504};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* comp.vaporIn.ddhp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.ddhp variable */);
  threadData->lastEquationSolved = 504;
}
/*
equation index: 505
type: SIMPLE_ASSIGN
comp.vaporIn.ddph = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,505};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* comp.vaporIn.ddph variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.ddph variable */);
  threadData->lastEquationSolved = 505;
}
/*
equation index: 506
type: SIMPLE_ASSIGN
comp.vaporIn.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,506};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* comp.vaporIn.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.eta variable */);
  threadData->lastEquationSolved = 506;
}
/*
equation index: 507
type: SIMPLE_ASSIGN
comp.vaporIn.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,507};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* comp.vaporIn.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.h variable */);
  threadData->lastEquationSolved = 507;
}
/*
equation index: 508
type: SIMPLE_ASSIGN
comp.vaporIn.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,508};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* comp.vaporIn.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.kappa variable */);
  threadData->lastEquationSolved = 508;
}
/*
equation index: 509
type: SIMPLE_ASSIGN
comp.vaporIn.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,509};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* comp.vaporIn.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.lambda variable */);
  threadData->lastEquationSolved = 509;
}
/*
equation index: 510
type: SIMPLE_ASSIGN
comp.vaporIn.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,510};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* comp.vaporIn.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.p variable */);
  threadData->lastEquationSolved = 510;
}
/*
equation index: 511
type: SIMPLE_ASSIGN
comp.vaporIn.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,511};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* comp.vaporIn.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.phase variable */);
  threadData->lastEquationSolved = 511;
}
/*
equation index: 512
type: SIMPLE_ASSIGN
comp.s_su = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,512};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* comp.s_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState497.s variable */);
  threadData->lastEquationSolved = 512;
}
/*
equation index: 513
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513 := RefrigerationTrainer.ClosedLoopM1e.comp.Medium.setState_ps(cond.Cells[1].p, comp.s_su, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,513};
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState tmp0;
  tmp0 = omc_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_setState__ps(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* comp.s_su variable */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.T variable */) = tmp0._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.a variable */) = tmp0._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.beta variable */) = tmp0._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.cp variable */) = tmp0._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.cv variable */) = tmp0._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.d variable */) = tmp0._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.ddhp variable */) = tmp0._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.ddph variable */) = tmp0._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.eta variable */) = tmp0._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.h variable */) = tmp0._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.kappa variable */) = tmp0._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.lambda variable */) = tmp0._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.p variable */) = tmp0._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[1]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.phase variable */) = tmp0._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.s variable */) = tmp0._s;
  ;
  threadData->lastEquationSolved = 513;
}
/*
equation index: 514
type: SIMPLE_ASSIGN
comp.vaporOut.T = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,514};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* comp.vaporOut.T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.T variable */);
  threadData->lastEquationSolved = 514;
}
/*
equation index: 515
type: SIMPLE_ASSIGN
comp.vaporOut.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,515};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[701]] /* comp.vaporOut.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.a variable */);
  threadData->lastEquationSolved = 515;
}
/*
equation index: 516
type: SIMPLE_ASSIGN
comp.vaporOut.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,516};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* comp.vaporOut.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.beta variable */);
  threadData->lastEquationSolved = 516;
}
/*
equation index: 517
type: SIMPLE_ASSIGN
comp.vaporOut.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,517};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[703]] /* comp.vaporOut.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.cp variable */);
  threadData->lastEquationSolved = 517;
}
/*
equation index: 518
type: SIMPLE_ASSIGN
comp.vaporOut.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,518};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* comp.vaporOut.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.cv variable */);
  threadData->lastEquationSolved = 518;
}
/*
equation index: 519
type: SIMPLE_ASSIGN
comp.vaporOut.d = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,519};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* comp.vaporOut.d variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.d variable */);
  threadData->lastEquationSolved = 519;
}
/*
equation index: 520
type: SIMPLE_ASSIGN
comp.vaporOut.ddhp = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,520};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[706]] /* comp.vaporOut.ddhp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.ddhp variable */);
  threadData->lastEquationSolved = 520;
}
/*
equation index: 521
type: SIMPLE_ASSIGN
comp.vaporOut.ddph = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[707]] /* comp.vaporOut.ddph variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.ddph variable */);
  threadData->lastEquationSolved = 521;
}
/*
equation index: 522
type: SIMPLE_ASSIGN
comp.vaporOut.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,522};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* comp.vaporOut.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.eta variable */);
  threadData->lastEquationSolved = 522;
}
/*
equation index: 523
type: SIMPLE_ASSIGN
comp.h_ex_s = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* comp.h_ex_s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.h variable */);
  threadData->lastEquationSolved = 523;
}
/*
equation index: 524
type: SIMPLE_ASSIGN
comp.vaporOut.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,524};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[709]] /* comp.vaporOut.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.kappa variable */);
  threadData->lastEquationSolved = 524;
}
/*
equation index: 525
type: SIMPLE_ASSIGN
comp.vaporOut.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* comp.vaporOut.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.lambda variable */);
  threadData->lastEquationSolved = 525;
}
/*
equation index: 526
type: SIMPLE_ASSIGN
comp.vaporOut.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,526};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[711]] /* comp.vaporOut.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.p variable */);
  threadData->lastEquationSolved = 526;
}
/*
equation index: 527
type: SIMPLE_ASSIGN
comp.vaporOut.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,527};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[27]] /* comp.vaporOut.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[1]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.phase variable */);
  threadData->lastEquationSolved = 527;
}
/*
equation index: 528
type: SIMPLE_ASSIGN
comp.vaporOut.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,528};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* comp.vaporOut.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState513.s variable */);
  threadData->lastEquationSolved = 528;
}
/*
equation index: 529
type: SIMPLE_ASSIGN
m_dot_kg_s = comp.V_dot_su * comp.rho_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* m_dot_kg_s variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* comp.V_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* comp.rho_su variable */));
  threadData->lastEquationSolved = 529;
}
/*
equation index: 530
type: SIMPLE_ASSIGN
comp.h_ex = comp.h_su + (comp.h_ex_s - comp.h_su) / comp.epsilon_s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,530};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* comp.h_ex variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */) + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* comp.h_ex_s variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* comp.epsilon_s PARAM */),"comp.epsilon_s",equationIndexes);
  threadData->lastEquationSolved = 530;
}
/*
equation index: 531
type: SIMPLE_ASSIGN
cond.Cells[2].hnode_su = 2.0 * cond.Cells[1].h - cond.Cells[1].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,531};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */);
  threadData->lastEquationSolved = 531;
}
/*
equation index: 532
type: SIMPLE_ASSIGN
cond.Cells[3].hnode_su = 2.0 * cond.Cells[2].h - cond.Cells[2].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,532};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */);
  threadData->lastEquationSolved = 532;
}
/*
equation index: 533
type: SIMPLE_ASSIGN
cond.Cells[4].hnode_su = 2.0 * cond.Cells[3].h - cond.Cells[3].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */);
  threadData->lastEquationSolved = 533;
}
/*
equation index: 534
type: SIMPLE_ASSIGN
cond.Cells[5].hnode_su = 2.0 * cond.Cells[4].h - cond.Cells[4].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,534};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */);
  threadData->lastEquationSolved = 534;
}
/*
equation index: 535
type: SIMPLE_ASSIGN
evap.Cells[1].hnode_su = 2.0 * cond.Cells[5].h - cond.Cells[5].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */);
  threadData->lastEquationSolved = 535;
}
/*
equation index: 536
type: SIMPLE_ASSIGN
evap.Cells[2].hnode_su = 2.0 * evap.Cells[1].h - evap.Cells[1].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,536};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].hnode_su variable */);
  threadData->lastEquationSolved = 536;
}
/*
equation index: 537
type: SIMPLE_ASSIGN
evap.Cells[3].hnode_su = 2.0 * evap.Cells[2].h - evap.Cells[2].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,537};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */);
  threadData->lastEquationSolved = 537;
}
/*
equation index: 538
type: SIMPLE_ASSIGN
evap.Cells[4].hnode_su = 2.0 * evap.Cells[3].h - evap.Cells[3].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,538};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */);
  threadData->lastEquationSolved = 538;
}
/*
equation index: 539
type: SIMPLE_ASSIGN
evap.Cells[5].hnode_su = 2.0 * evap.Cells[4].h - evap.Cells[4].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,539};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */);
  threadData->lastEquationSolved = 539;
}
/*
equation index: 540
type: SIMPLE_ASSIGN
evap.Cells[5].hnode_ex = 2.0 * evap.Cells[5].h - evap.Cells[5].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,540};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* evap.Cells[5].hnode_ex variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */);
  threadData->lastEquationSolved = 540;
}

void residualFunc543(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,543};
  int i,j;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc543: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 543).vars[i]);
      for (j=0; j<2; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc543 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */) = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_497(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_498(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_499(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_500(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_501(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_502(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_503(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_504(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_505(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_506(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_507(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_508(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_509(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_510(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_511(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_512(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_513(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_514(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_515(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_516(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_517(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_518(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_519(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_520(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_521(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_522(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_523(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_524(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_525(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_526(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_527(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_528(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_529(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_530(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_531(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_532(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_533(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_534(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_535(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_536(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_537(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_538(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_539(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_540(data, threadData);
  /* body */
  tmp0 = LessEq((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* m_dot_kg_s variable */)),0.0);
  res[0] = (tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* comp.h_ex variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */);
  threadData->lastEquationSolved = 542;
  tmp1 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* m_dot_kg_s variable */),0.0);
  res[1] = (tmp1?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* comp.h_ex variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* evap.Cells[5].hnode_ex variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */);
  threadData->lastEquationSolved = 541;
  /* restore known outputs */
  threadData->lastEquationSolved = 543;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS543(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+2] = {0,2,2};
  const int rowIndex[4] = {0,1,0,1};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(2, 4, 2);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (2+1)*sizeof(unsigned int));
  
  for(i=2;i<2+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 4*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
}

void freeSparsePatternNLS543(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS543(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS543(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cond.Cells[1].hnode_su */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 832 /* cond.Cells[1].hnode_su */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 832 /* cond.Cells[1].hnode_su */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 832 /* cond.Cells[1].hnode_su */);
  /* static nls data for comp.h_su */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 684 /* comp.h_su */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 684 /* comp.h_su */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 684 /* comp.h_su */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS543(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS543(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS543(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS543(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS543(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */);
}


/* inner equations */

/*
equation index: 591
type: SIMPLE_ASSIGN
cond.Cells[5].dMdt = cond.Cells[5].Vi * (cond.Cells[5].drdh * $DER.cond.Cells[5].h + cond.Cells[5].drdp * $DER.cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cond.Cells[5].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* cond.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cond.Cells[5].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[5].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cond.Cells[5].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 591;
}
/*
equation index: 592
type: SIMPLE_ASSIGN
cond.Cells[4].dMdt = cond.Cells[4].Vi * (cond.Cells[4].drdh * $DER.cond.Cells[4].h + cond.Cells[4].drdp * $DER.cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,592};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* cond.Cells[4].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* cond.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* cond.Cells[4].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[4].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cond.Cells[4].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 592;
}
/*
equation index: 593
type: SIMPLE_ASSIGN
cond.Cells[1].dMdt = cond.Cells[1].Vi * (cond.Cells[1].drdh * $DER.cond.Cells[1].h + cond.Cells[1].drdp * $DER.cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* cond.Cells[1].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* cond.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cond.Cells[1].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* der(cond.Cells[1].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* cond.Cells[1].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 593;
}
/*
equation index: 594
type: SIMPLE_ASSIGN
cond.Cells[2].dMdt = cond.Cells[2].Vi * (cond.Cells[2].drdh * $DER.cond.Cells[2].h + cond.Cells[2].drdp * $DER.cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,594};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* cond.Cells[2].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* cond.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cond.Cells[2].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[2].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cond.Cells[2].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 594;
}
/*
equation index: 595
type: SIMPLE_ASSIGN
cond.Cells[3].dMdt = cond.Cells[3].Vi * (cond.Cells[3].drdh * $DER.cond.Cells[3].h + cond.Cells[3].drdp * $DER.cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,595};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* cond.Cells[3].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* cond.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cond.Cells[3].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[3].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cond.Cells[3].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 595;
}
/*
equation index: 596
type: SIMPLE_ASSIGN
cond.Cells[5].M_dot_su = cond.Cells[5].M_dot_ex + cond.Cells[5].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,596};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[5].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* cond.Cells[5].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cond.Cells[5].dMdt variable */);
  threadData->lastEquationSolved = 596;
}
/*
equation index: 597
type: SIMPLE_ASSIGN
cond.Cells[5].heatTransfer.U[1] = cond.Cells[5].heatTransfer.Unom * (1e-5 + abs(cond.Cells[5].M_dot_su / cond.Cells[5].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,597};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* cond.Cells[5].heatTransfer.Mdotnom variable */),"cond.Cells[5].heatTransfer.Mdotnom",equationIndexes));
  tmp1 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[826]] /* cond.Cells[5].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[831]] /* cond.Cells[5].heatTransfer.Unom variable */)) * (1e-5 + tmp2);
  threadData->lastEquationSolved = 597;
}
/*
equation index: 598
type: SIMPLE_ASSIGN
cond.Cells[5].Q_tot = cond.Cells[5].Vi * cond.Cells[5].rho * $DER.cond.Cells[5].h + cond.Cells[5].M_dot_ex * (evap.Cells[1].hnode_su - cond.Cells[5].h) + cond.Cells[5].M_dot_su * (cond.Cells[5].h - cond.Cells[5].hnode_su) - cond.Cells[5].Vi * $DER.cond.Cells[1].p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,598};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cond.Cells[5].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* cond.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* cond.Cells[5].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[5].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* cond.Cells[5].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[5].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* cond.Cells[5].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 598;
}
/*
equation index: 599
type: SIMPLE_ASSIGN
cond.Cells[5].qdot = cond.Cells[5].heatTransfer.U[1] * (T_amb_k - cond.Cells[5].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,599};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[841]] /* cond.Cells[5].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[826]] /* cond.Cells[5].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cond.Cells[5].T variable */));
  threadData->lastEquationSolved = 599;
}
/*
equation index: 600
type: SIMPLE_ASSIGN
cond.Cells[5].InFlow.m_flow = cond.Cells[5].M_dot_su * (*Real*)(cond.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,600};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cond.Cells[5].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[5].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[5].Nt PARAM */)));
  threadData->lastEquationSolved = 600;
}
/*
equation index: 601
type: SIMPLE_ASSIGN
cond.Cells[4].M_dot_ex = cond.Cells[5].InFlow.m_flow / (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,601};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cond.Cells[4].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cond.Cells[5].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[4].Nt PARAM */)),"/*Real*/(cond.Cells[4].Nt)",equationIndexes);
  threadData->lastEquationSolved = 601;
}
/*
equation index: 602
type: SIMPLE_ASSIGN
cond.Cells[4].M_dot_su = cond.Cells[4].M_dot_ex + cond.Cells[4].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[4].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cond.Cells[4].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* cond.Cells[4].dMdt variable */);
  threadData->lastEquationSolved = 602;
}
/*
equation index: 603
type: SIMPLE_ASSIGN
cond.Cells[4].Q_tot = cond.Cells[4].Vi * cond.Cells[4].rho * $DER.cond.Cells[4].h + cond.Cells[4].M_dot_ex * (cond.Cells[5].hnode_su - cond.Cells[4].h) + cond.Cells[4].M_dot_su * (cond.Cells[4].h - cond.Cells[4].hnode_su) - cond.Cells[4].Vi * $DER.cond.Cells[1].p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,603};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cond.Cells[4].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* cond.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* cond.Cells[4].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[4].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cond.Cells[4].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[4].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* cond.Cells[4].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 603;
}
/*
equation index: 604
type: SIMPLE_ASSIGN
cond.Cells[4].heatTransfer.U[1] = cond.Cells[4].heatTransfer.Unom * (1e-5 + abs(cond.Cells[4].M_dot_su / cond.Cells[4].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,604};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* cond.Cells[4].heatTransfer.Mdotnom variable */),"cond.Cells[4].heatTransfer.Mdotnom",equationIndexes));
  tmp1 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[825]] /* cond.Cells[4].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[830]] /* cond.Cells[4].heatTransfer.Unom variable */)) * (1e-5 + tmp2);
  threadData->lastEquationSolved = 604;
}
/*
equation index: 605
type: SIMPLE_ASSIGN
cond.Cells[4].qdot = cond.Cells[4].heatTransfer.U[1] * (T_amb_k - cond.Cells[4].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,605};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[840]] /* cond.Cells[4].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[825]] /* cond.Cells[4].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cond.Cells[4].T variable */));
  threadData->lastEquationSolved = 605;
}
/*
equation index: 606
type: SIMPLE_ASSIGN
cond.Cells[4].InFlow.m_flow = cond.Cells[4].M_dot_su * (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,606};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cond.Cells[4].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[4].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[4].Nt PARAM */)));
  threadData->lastEquationSolved = 606;
}
/*
equation index: 607
type: SIMPLE_ASSIGN
cond.Cells[3].M_dot_ex = cond.Cells[4].InFlow.m_flow / (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,607};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cond.Cells[3].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cond.Cells[4].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[3].Nt PARAM */)),"/*Real*/(cond.Cells[3].Nt)",equationIndexes);
  threadData->lastEquationSolved = 607;
}
/*
equation index: 608
type: SIMPLE_ASSIGN
cond.Cells[3].M_dot_su = cond.Cells[3].M_dot_ex + cond.Cells[3].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,608};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[3].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cond.Cells[3].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* cond.Cells[3].dMdt variable */);
  threadData->lastEquationSolved = 608;
}
/*
equation index: 609
type: SIMPLE_ASSIGN
cond.Cells[3].Q_tot = cond.Cells[3].Vi * cond.Cells[3].rho * $DER.cond.Cells[3].h + cond.Cells[3].M_dot_ex * (cond.Cells[4].hnode_su - cond.Cells[3].h) + cond.Cells[3].M_dot_su * (cond.Cells[3].h - cond.Cells[3].hnode_su) - cond.Cells[3].Vi * $DER.cond.Cells[1].p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,609};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cond.Cells[3].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* cond.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[844]] /* cond.Cells[3].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[3].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cond.Cells[3].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[3].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* cond.Cells[3].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 609;
}
/*
equation index: 610
type: SIMPLE_ASSIGN
cond.Cells[3].heatTransfer.U[1] = cond.Cells[3].heatTransfer.Unom * (1e-5 + abs(cond.Cells[3].M_dot_su / cond.Cells[3].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,610};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* cond.Cells[3].heatTransfer.Mdotnom variable */),"cond.Cells[3].heatTransfer.Mdotnom",equationIndexes));
  tmp1 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[824]] /* cond.Cells[3].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* cond.Cells[3].heatTransfer.Unom variable */)) * (1e-5 + tmp2);
  threadData->lastEquationSolved = 610;
}
/*
equation index: 611
type: SIMPLE_ASSIGN
cond.Cells[3].qdot = cond.Cells[3].heatTransfer.U[1] * (T_amb_k - cond.Cells[3].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,611};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[839]] /* cond.Cells[3].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[824]] /* cond.Cells[3].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[739]] /* cond.Cells[3].T variable */));
  threadData->lastEquationSolved = 611;
}
/*
equation index: 612
type: SIMPLE_ASSIGN
cond.Cells[3].InFlow.m_flow = cond.Cells[3].M_dot_su * (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,612};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cond.Cells[3].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[3].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[3].Nt PARAM */)));
  threadData->lastEquationSolved = 612;
}
/*
equation index: 613
type: SIMPLE_ASSIGN
cond.Cells[2].M_dot_ex = cond.Cells[3].InFlow.m_flow / (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,613};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cond.Cells[2].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cond.Cells[3].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[2].Nt PARAM */)),"/*Real*/(cond.Cells[2].Nt)",equationIndexes);
  threadData->lastEquationSolved = 613;
}
/*
equation index: 614
type: SIMPLE_ASSIGN
cond.Cells[2].M_dot_su = cond.Cells[2].M_dot_ex + cond.Cells[2].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,614};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[2].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cond.Cells[2].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* cond.Cells[2].dMdt variable */);
  threadData->lastEquationSolved = 614;
}
/*
equation index: 615
type: SIMPLE_ASSIGN
cond.Cells[2].Q_tot = cond.Cells[2].Vi * cond.Cells[2].rho * $DER.cond.Cells[2].h + cond.Cells[2].M_dot_ex * (cond.Cells[3].hnode_su - cond.Cells[2].h) + cond.Cells[2].M_dot_su * (cond.Cells[2].h - cond.Cells[2].hnode_su) - cond.Cells[2].Vi * $DER.cond.Cells[1].p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,615};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cond.Cells[2].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* cond.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* cond.Cells[2].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[2].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cond.Cells[2].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[2].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* cond.Cells[2].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 615;
}
/*
equation index: 616
type: SIMPLE_ASSIGN
cond.Cells[2].heatTransfer.U[1] = cond.Cells[2].heatTransfer.Unom * (1e-5 + abs(cond.Cells[2].M_dot_su / cond.Cells[2].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,616};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* cond.Cells[2].heatTransfer.Mdotnom variable */),"cond.Cells[2].heatTransfer.Mdotnom",equationIndexes));
  tmp1 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[823]] /* cond.Cells[2].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[828]] /* cond.Cells[2].heatTransfer.Unom variable */)) * (1e-5 + tmp2);
  threadData->lastEquationSolved = 616;
}
/*
equation index: 617
type: SIMPLE_ASSIGN
cond.Cells[2].qdot = cond.Cells[2].heatTransfer.U[1] * (T_amb_k - cond.Cells[2].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,617};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[838]] /* cond.Cells[2].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[823]] /* cond.Cells[2].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cond.Cells[2].T variable */));
  threadData->lastEquationSolved = 617;
}
/*
equation index: 618
type: SIMPLE_ASSIGN
cond.Cells[2].InFlow.m_flow = cond.Cells[2].M_dot_su * (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,618};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cond.Cells[2].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[2].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[2].Nt PARAM */)));
  threadData->lastEquationSolved = 618;
}
/*
equation index: 619
type: SIMPLE_ASSIGN
cond.Cells[1].M_dot_ex = cond.Cells[2].InFlow.m_flow / (*Real*)(cond.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,619};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cond.Cells[1].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cond.Cells[2].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* cond.Cells[1].Nt PARAM */)),"/*Real*/(cond.Cells[1].Nt)",equationIndexes);
  threadData->lastEquationSolved = 619;
}

void residualFunc660(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,660};
  int i,j;
  /* iteration variables */
  for (i=0; i<6; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc660: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 660).vars[i]);
      for (j=0; j<6; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc660 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[5].h) STATE_DER */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[4].h) STATE_DER */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* der(cond.Cells[1].h) STATE_DER */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[2].h) STATE_DER */) = xloc[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[3].h) STATE_DER */) = xloc[5];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_591(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_592(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_593(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_594(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_595(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_596(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_597(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_598(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_599(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_600(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_601(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_602(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_603(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_604(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_605(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_606(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_607(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_608(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_609(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_610(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_611(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_612(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_613(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_614(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_615(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_616(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_617(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_618(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_619(data, threadData);
  /* body */
  res[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* cond.Cells[4].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[840]] /* cond.Cells[4].qdot variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cond.Cells[4].Q_tot variable */);
  threadData->lastEquationSolved = 625;
  res[1] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* cond.Cells[3].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[839]] /* cond.Cells[3].qdot variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cond.Cells[3].Q_tot variable */);
  threadData->lastEquationSolved = 624;
  res[2] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* cond.Cells[2].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[838]] /* cond.Cells[2].qdot variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cond.Cells[2].Q_tot variable */);
  threadData->lastEquationSolved = 623;
  res[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* cond.Cells[1].M_dot_su variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cond.Cells[1].M_dot_ex variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* cond.Cells[1].dMdt variable */);
  threadData->lastEquationSolved = 622;
  res[4] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* cond.Cells[1].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cond.Cells[1].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* cond.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* cond.Cells[1].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* der(cond.Cells[1].h) STATE_DER */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cond.Cells[1].Q_tot variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* cond.Cells[1].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 621;
  res[5] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[16]] /* cond.Cells[5].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[841]] /* cond.Cells[5].qdot variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cond.Cells[5].Q_tot variable */);
  threadData->lastEquationSolved = 620;
  /* restore known outputs */
  threadData->lastEquationSolved = 660;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS660(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+6] = {0,6,6,5,2,3,4};
  const int rowIndex[26] = {0,1,2,3,4,5,0,1,2,3,4,5,0,1,2,3,4,3,4,2,3,4,1,2,3,4};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(6, 26, 6);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (6+1)*sizeof(unsigned int));
  
  for(i=2;i<6+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 26*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {5};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {4};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {3};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 1 columns */
  const int indices_4[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 1 columns */
  const int indices_5[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
  
  /* color 6 with 1 columns */
  const int indices_6[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_6[i]] = 6;
}

void freeSparsePatternNLS660(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS660(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 6;
  inSysData->nonlinearPattern->numberOfEqns = 6;
  inSysData->nonlinearPattern->numberOfNonlinear = 0;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((6+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((6+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(0*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(0*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+6] = {0,0,0,0,0,0,0};
  const int index_eqn[1+6] = {0,0,0,0,0,0,0};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (6+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (6+1)*sizeof(unsigned int));
  for(i=2;i<6+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<6+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[0] = {};
  const int rows[0] = {};
  memcpy(inSysData->nonlinearPattern->columns, columns, 0*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 0*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS660(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for der(cond.Cells[1].p) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 18 /* der(cond.Cells[1].p) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 18 /* der(cond.Cells[1].p) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 18 /* der(cond.Cells[1].p) */);
  /* static nls data for der(cond.Cells[5].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 17 /* der(cond.Cells[5].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 17 /* der(cond.Cells[5].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 17 /* der(cond.Cells[5].h) */);
  /* static nls data for der(cond.Cells[4].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 16 /* der(cond.Cells[4].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 16 /* der(cond.Cells[4].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 16 /* der(cond.Cells[4].h) */);
  /* static nls data for der(cond.Cells[1].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 13 /* der(cond.Cells[1].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 13 /* der(cond.Cells[1].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 13 /* der(cond.Cells[1].h) */);
  /* static nls data for der(cond.Cells[2].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 14 /* der(cond.Cells[2].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 14 /* der(cond.Cells[2].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 14 /* der(cond.Cells[2].h) */);
  /* static nls data for der(cond.Cells[3].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 15 /* der(cond.Cells[3].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 15 /* der(cond.Cells[3].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 15 /* der(cond.Cells[3].h) */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS660(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS660(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS660(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS660(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS660(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[5].h) STATE_DER */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[4].h) STATE_DER */);
  array[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* der(cond.Cells[1].h) STATE_DER */);
  array[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[2].h) STATE_DER */);
  array[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[3].h) STATE_DER */);
}


/* inner equations */

/*
equation index: 670
type: SIMPLE_ASSIGN
evap.Cells[5].dMdt = evap.Cells[5].Vi * (evap.Cells[5].drdh * $DER.evap.Cells[5].h + evap.Cells[5].drdp * $DER.evap.Cells[5].p)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,670};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* evap.Cells[5].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* evap.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* evap.Cells[5].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[5].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* evap.Cells[5].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 670;
}
/*
equation index: 671
type: SIMPLE_ASSIGN
evap.Cells[4].dMdt = evap.Cells[4].Vi * (evap.Cells[4].drdh * $DER.evap.Cells[4].h + evap.Cells[4].drdp * $DER.evap.Cells[5].p)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,671};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* evap.Cells[4].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* evap.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* evap.Cells[4].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[4].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* evap.Cells[4].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 671;
}
/*
equation index: 672
type: SIMPLE_ASSIGN
evap.Cells[3].dMdt = evap.Cells[3].Vi * (evap.Cells[3].drdh * $DER.evap.Cells[3].h + evap.Cells[3].drdp * $DER.evap.Cells[5].p)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,672};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* evap.Cells[3].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* evap.Cells[3].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[3].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* evap.Cells[3].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 672;
}
/*
equation index: 673
type: SIMPLE_ASSIGN
evap.Cells[1].dMdt = evap.Cells[1].Vi * (evap.Cells[1].drdh * $DER.evap.Cells[1].h + evap.Cells[1].drdp * $DER.evap.Cells[5].p)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,673};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* evap.Cells[1].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* evap.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* evap.Cells[1].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* der(evap.Cells[1].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* evap.Cells[1].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 673;
}
/*
equation index: 674
type: SIMPLE_ASSIGN
evap.Cells[2].dMdt = evap.Cells[2].Vi * (evap.Cells[2].drdh * $DER.evap.Cells[2].h + evap.Cells[2].drdp * $DER.evap.Cells[5].p)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,674};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* evap.Cells[2].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* evap.Cells[2].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[2].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* evap.Cells[2].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 674;
}
/*
equation index: 675
type: SIMPLE_ASSIGN
evap.Cells[5].M_dot_su = evap.Cells[5].M_dot_ex + evap.Cells[5].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,675};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[5].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* evap.Cells[5].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* evap.Cells[5].dMdt variable */);
  threadData->lastEquationSolved = 675;
}
/*
equation index: 676
type: SIMPLE_ASSIGN
evap.Cells[5].heatTransfer.U[1] = evap.Cells[5].heatTransfer.Unom * (1e-5 + abs(evap.Cells[5].M_dot_su / evap.Cells[5].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,676};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* evap.Cells[5].heatTransfer.Mdotnom variable */),"evap.Cells[5].heatTransfer.Mdotnom",equationIndexes));
  tmp1 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1099]] /* evap.Cells[5].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* evap.Cells[5].heatTransfer.Unom variable */)) * (1e-5 + tmp2);
  threadData->lastEquationSolved = 676;
}
/*
equation index: 677
type: SIMPLE_ASSIGN
evap.Cells[5].Q_tot = evap.Cells[5].Vi * evap.Cells[5].rho * $DER.evap.Cells[5].h + evap.Cells[5].M_dot_ex * (evap.Cells[5].hnode_ex - evap.Cells[5].h) + evap.Cells[5].M_dot_su * (evap.Cells[5].h - evap.Cells[5].hnode_su) - evap.Cells[5].Vi * $DER.evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,677};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* evap.Cells[5].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* evap.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* evap.Cells[5].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[5].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* evap.Cells[5].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* evap.Cells[5].hnode_ex variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[5].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* evap.Cells[5].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 677;
}
/*
equation index: 678
type: SIMPLE_ASSIGN
evap.Cells[5].qdot = evap.Cells[5].heatTransfer.U[1] * (T_box_k - evap.Cells[5].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,678};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* evap.Cells[5].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1099]] /* evap.Cells[5].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* evap.Cells[5].T variable */));
  threadData->lastEquationSolved = 678;
}
/*
equation index: 679
type: SIMPLE_ASSIGN
evap.Cells[5].InFlow.m_flow = evap.Cells[5].M_dot_su * (*Real*)(evap.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,679};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* evap.Cells[5].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[5].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[5].Nt PARAM */)));
  threadData->lastEquationSolved = 679;
}
/*
equation index: 680
type: SIMPLE_ASSIGN
evap.Cells[4].M_dot_ex = evap.Cells[5].InFlow.m_flow / (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,680};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* evap.Cells[4].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* evap.Cells[5].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[4].Nt PARAM */)),"/*Real*/(evap.Cells[4].Nt)",equationIndexes);
  threadData->lastEquationSolved = 680;
}
/*
equation index: 681
type: SIMPLE_ASSIGN
evap.Cells[4].M_dot_su = evap.Cells[4].M_dot_ex + evap.Cells[4].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,681};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[4].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* evap.Cells[4].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* evap.Cells[4].dMdt variable */);
  threadData->lastEquationSolved = 681;
}
/*
equation index: 682
type: SIMPLE_ASSIGN
evap.Cells[4].Q_tot = evap.Cells[4].Vi * evap.Cells[4].rho * $DER.evap.Cells[4].h + evap.Cells[4].M_dot_ex * (evap.Cells[5].hnode_su - evap.Cells[4].h) + evap.Cells[4].M_dot_su * (evap.Cells[4].h - evap.Cells[4].hnode_su) - evap.Cells[4].Vi * $DER.evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,682};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* evap.Cells[4].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* evap.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* evap.Cells[4].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[4].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* evap.Cells[4].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[4].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* evap.Cells[4].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 682;
}
/*
equation index: 683
type: SIMPLE_ASSIGN
evap.Cells[4].heatTransfer.U[1] = evap.Cells[4].heatTransfer.Unom * (1e-5 + abs(evap.Cells[4].M_dot_su / evap.Cells[4].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,683};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* evap.Cells[4].heatTransfer.Mdotnom variable */),"evap.Cells[4].heatTransfer.Mdotnom",equationIndexes));
  tmp1 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1098]] /* evap.Cells[4].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* evap.Cells[4].heatTransfer.Unom variable */)) * (1e-5 + tmp2);
  threadData->lastEquationSolved = 683;
}
/*
equation index: 684
type: SIMPLE_ASSIGN
evap.Cells[4].qdot = evap.Cells[4].heatTransfer.U[1] * (T_box_k - evap.Cells[4].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,684};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1114]] /* evap.Cells[4].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1098]] /* evap.Cells[4].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* evap.Cells[4].T variable */));
  threadData->lastEquationSolved = 684;
}
/*
equation index: 685
type: SIMPLE_ASSIGN
evap.Cells[4].InFlow.m_flow = evap.Cells[4].M_dot_su * (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,685};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* evap.Cells[4].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[4].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[4].Nt PARAM */)));
  threadData->lastEquationSolved = 685;
}
/*
equation index: 686
type: SIMPLE_ASSIGN
evap.Cells[3].M_dot_ex = evap.Cells[4].InFlow.m_flow / (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,686};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* evap.Cells[3].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* evap.Cells[4].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[3].Nt PARAM */)),"/*Real*/(evap.Cells[3].Nt)",equationIndexes);
  threadData->lastEquationSolved = 686;
}
/*
equation index: 687
type: SIMPLE_ASSIGN
evap.Cells[3].M_dot_su = evap.Cells[3].M_dot_ex + evap.Cells[3].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,687};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[3].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* evap.Cells[3].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* evap.Cells[3].dMdt variable */);
  threadData->lastEquationSolved = 687;
}
/*
equation index: 688
type: SIMPLE_ASSIGN
evap.Cells[3].Q_tot = evap.Cells[3].Vi * evap.Cells[3].rho * $DER.evap.Cells[3].h + evap.Cells[3].M_dot_ex * (evap.Cells[4].hnode_su - evap.Cells[3].h) + evap.Cells[3].M_dot_su * (evap.Cells[3].h - evap.Cells[3].hnode_su) - evap.Cells[3].Vi * $DER.evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,688};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* evap.Cells[3].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1118]] /* evap.Cells[3].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[3].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* evap.Cells[3].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[3].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[3].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 688;
}
/*
equation index: 689
type: SIMPLE_ASSIGN
evap.Cells[3].heatTransfer.U[1] = evap.Cells[3].heatTransfer.Unom * (1e-5 + abs(evap.Cells[3].M_dot_su / evap.Cells[3].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,689};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* evap.Cells[3].heatTransfer.Mdotnom variable */),"evap.Cells[3].heatTransfer.Mdotnom",equationIndexes));
  tmp1 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* evap.Cells[3].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* evap.Cells[3].heatTransfer.Unom variable */)) * (1e-5 + tmp2);
  threadData->lastEquationSolved = 689;
}
/*
equation index: 690
type: SIMPLE_ASSIGN
evap.Cells[3].qdot = evap.Cells[3].heatTransfer.U[1] * (T_box_k - evap.Cells[3].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,690};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1113]] /* evap.Cells[3].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* evap.Cells[3].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* evap.Cells[3].T variable */));
  threadData->lastEquationSolved = 690;
}
/*
equation index: 691
type: SIMPLE_ASSIGN
evap.Cells[3].InFlow.m_flow = evap.Cells[3].M_dot_su * (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,691};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* evap.Cells[3].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[3].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[3].Nt PARAM */)));
  threadData->lastEquationSolved = 691;
}
/*
equation index: 692
type: SIMPLE_ASSIGN
evap.Cells[2].M_dot_ex = evap.Cells[3].InFlow.m_flow / (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,692};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* evap.Cells[2].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* evap.Cells[3].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[2].Nt PARAM */)),"/*Real*/(evap.Cells[2].Nt)",equationIndexes);
  threadData->lastEquationSolved = 692;
}
/*
equation index: 693
type: SIMPLE_ASSIGN
evap.Cells[2].M_dot_su = evap.Cells[2].M_dot_ex + evap.Cells[2].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,693};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[2].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* evap.Cells[2].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* evap.Cells[2].dMdt variable */);
  threadData->lastEquationSolved = 693;
}
/*
equation index: 694
type: SIMPLE_ASSIGN
evap.Cells[2].Q_tot = evap.Cells[2].Vi * evap.Cells[2].rho * $DER.evap.Cells[2].h + evap.Cells[2].M_dot_ex * (evap.Cells[3].hnode_su - evap.Cells[2].h) + evap.Cells[2].M_dot_su * (evap.Cells[2].h - evap.Cells[2].hnode_su) - evap.Cells[2].Vi * $DER.evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,694};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* evap.Cells[2].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* evap.Cells[2].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[2].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* evap.Cells[2].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[2].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[2].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 694;
}
/*
equation index: 695
type: SIMPLE_ASSIGN
evap.Cells[2].heatTransfer.U[1] = evap.Cells[2].heatTransfer.Unom * (1e-5 + abs(evap.Cells[2].M_dot_su / evap.Cells[2].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,695};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* evap.Cells[2].heatTransfer.Mdotnom variable */),"evap.Cells[2].heatTransfer.Mdotnom",equationIndexes));
  tmp1 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* evap.Cells[2].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* evap.Cells[2].heatTransfer.Unom variable */)) * (1e-5 + tmp2);
  threadData->lastEquationSolved = 695;
}
/*
equation index: 696
type: SIMPLE_ASSIGN
evap.Cells[2].qdot = evap.Cells[2].heatTransfer.U[1] * (T_box_k - evap.Cells[2].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1112]] /* evap.Cells[2].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* evap.Cells[2].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* evap.Cells[2].T variable */));
  threadData->lastEquationSolved = 696;
}
/*
equation index: 697
type: SIMPLE_ASSIGN
evap.Cells[2].InFlow.m_flow = evap.Cells[2].M_dot_su * (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* evap.Cells[2].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[2].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[2].Nt PARAM */)));
  threadData->lastEquationSolved = 697;
}
/*
equation index: 698
type: SIMPLE_ASSIGN
evap.Cells[1].M_dot_ex = evap.Cells[2].InFlow.m_flow / (*Real*)(evap.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* evap.Cells[1].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* evap.Cells[2].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[27]] /* evap.Cells[1].Nt PARAM */)),"/*Real*/(evap.Cells[1].Nt)",equationIndexes);
  threadData->lastEquationSolved = 698;
}

void residualFunc739(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,739};
  int i,j;
  /* iteration variables */
  for (i=0; i<6; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc739: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 739).vars[i]);
      for (j=0; j<6; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc739 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[5].h) STATE_DER */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[4].h) STATE_DER */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[3].h) STATE_DER */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* der(evap.Cells[1].h) STATE_DER */) = xloc[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[2].h) STATE_DER */) = xloc[5];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_670(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_671(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_672(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_673(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_674(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_675(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_676(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_677(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_678(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_679(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_680(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_681(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_682(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_683(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_684(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_685(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_686(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_687(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_688(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_689(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_690(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_691(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_692(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_693(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_694(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_695(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_696(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_697(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_698(data, threadData);
  /* body */
  res[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[82]] /* evap.Cells[2].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1112]] /* evap.Cells[2].qdot variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* evap.Cells[2].Q_tot variable */);
  threadData->lastEquationSolved = 704;
  res[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* evap.Cells[1].M_dot_su variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* evap.Cells[1].M_dot_ex variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* evap.Cells[1].dMdt variable */);
  threadData->lastEquationSolved = 703;
  res[2] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* evap.Cells[1].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].hnode_su variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* evap.Cells[1].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* evap.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* evap.Cells[1].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* der(evap.Cells[1].h) STATE_DER */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* evap.Cells[1].Q_tot variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* evap.Cells[1].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 702;
  res[3] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* evap.Cells[3].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1113]] /* evap.Cells[3].qdot variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* evap.Cells[3].Q_tot variable */);
  threadData->lastEquationSolved = 701;
  res[4] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* evap.Cells[4].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1114]] /* evap.Cells[4].qdot variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* evap.Cells[4].Q_tot variable */);
  threadData->lastEquationSolved = 700;
  res[5] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* evap.Cells[5].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* evap.Cells[5].qdot variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* evap.Cells[5].Q_tot variable */);
  threadData->lastEquationSolved = 699;
  /* restore known outputs */
  threadData->lastEquationSolved = 739;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS739(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+6] = {0,6,6,5,4,2,3};
  const int rowIndex[26] = {0,1,2,3,4,5,0,1,2,3,4,5,0,1,2,3,4,0,1,2,3,1,2,0,1,2};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(6, 26, 6);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (6+1)*sizeof(unsigned int));
  
  for(i=2;i<6+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 26*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {5};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {4};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {3};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 1 columns */
  const int indices_4[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 1 columns */
  const int indices_5[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
  
  /* color 6 with 1 columns */
  const int indices_6[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_6[i]] = 6;
}

void freeSparsePatternNLS739(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS739(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 6;
  inSysData->nonlinearPattern->numberOfEqns = 6;
  inSysData->nonlinearPattern->numberOfNonlinear = 0;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((6+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((6+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(0*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(0*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+6] = {0,0,0,0,0,0,0};
  const int index_eqn[1+6] = {0,0,0,0,0,0,0};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (6+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (6+1)*sizeof(unsigned int));
  for(i=2;i<6+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<6+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[0] = {};
  const int rows[0] = {};
  memcpy(inSysData->nonlinearPattern->columns, columns, 0*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 0*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS739(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for der(evap.Cells[5].p) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 25 /* der(evap.Cells[5].p) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 25 /* der(evap.Cells[5].p) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 25 /* der(evap.Cells[5].p) */);
  /* static nls data for der(evap.Cells[5].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 24 /* der(evap.Cells[5].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 24 /* der(evap.Cells[5].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 24 /* der(evap.Cells[5].h) */);
  /* static nls data for der(evap.Cells[4].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 23 /* der(evap.Cells[4].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 23 /* der(evap.Cells[4].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 23 /* der(evap.Cells[4].h) */);
  /* static nls data for der(evap.Cells[3].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 22 /* der(evap.Cells[3].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 22 /* der(evap.Cells[3].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 22 /* der(evap.Cells[3].h) */);
  /* static nls data for der(evap.Cells[1].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 20 /* der(evap.Cells[1].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 20 /* der(evap.Cells[1].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 20 /* der(evap.Cells[1].h) */);
  /* static nls data for der(evap.Cells[2].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 21 /* der(evap.Cells[2].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 21 /* der(evap.Cells[2].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 21 /* der(evap.Cells[2].h) */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS739(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS739(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS739(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS739(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS739(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[5].h) STATE_DER */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[4].h) STATE_DER */);
  array[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[3].h) STATE_DER */);
  array[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* der(evap.Cells[1].h) STATE_DER */);
  array[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[2].h) STATE_DER */);
}


/* inner equations */

/*
equation index: 747
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747 := RefrigerationTrainer.ClosedLoopM1e.comp.Medium.setState_ps(cond.Cells[1].p, comp.s_su, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,747};
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState tmp0;
  tmp0 = omc_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_setState__ps(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* comp.s_su variable */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.T variable */) = tmp0._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.a variable */) = tmp0._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.beta variable */) = tmp0._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.cp variable */) = tmp0._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.cv variable */) = tmp0._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.d variable */) = tmp0._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.ddhp variable */) = tmp0._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.ddph variable */) = tmp0._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.eta variable */) = tmp0._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.h variable */) = tmp0._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.kappa variable */) = tmp0._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.lambda variable */) = tmp0._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[66]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.p variable */) = tmp0._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.phase variable */) = tmp0._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.s variable */) = tmp0._s;
  ;
  threadData->lastEquationSolved = 747;
}
/*
equation index: 748
type: SIMPLE_ASSIGN
comp.vaporOut.T = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,748};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* comp.vaporOut.T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.T variable */);
  threadData->lastEquationSolved = 748;
}
/*
equation index: 749
type: SIMPLE_ASSIGN
comp.vaporOut.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,749};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[701]] /* comp.vaporOut.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.a variable */);
  threadData->lastEquationSolved = 749;
}
/*
equation index: 750
type: SIMPLE_ASSIGN
comp.vaporOut.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,750};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* comp.vaporOut.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.beta variable */);
  threadData->lastEquationSolved = 750;
}
/*
equation index: 751
type: SIMPLE_ASSIGN
comp.vaporOut.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,751};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[703]] /* comp.vaporOut.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.cp variable */);
  threadData->lastEquationSolved = 751;
}
/*
equation index: 752
type: SIMPLE_ASSIGN
comp.vaporOut.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,752};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* comp.vaporOut.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.cv variable */);
  threadData->lastEquationSolved = 752;
}
/*
equation index: 753
type: SIMPLE_ASSIGN
comp.vaporOut.d = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,753};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* comp.vaporOut.d variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.d variable */);
  threadData->lastEquationSolved = 753;
}
/*
equation index: 754
type: SIMPLE_ASSIGN
comp.vaporOut.ddhp = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,754};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[706]] /* comp.vaporOut.ddhp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.ddhp variable */);
  threadData->lastEquationSolved = 754;
}
/*
equation index: 755
type: SIMPLE_ASSIGN
comp.vaporOut.ddph = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,755};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[707]] /* comp.vaporOut.ddph variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.ddph variable */);
  threadData->lastEquationSolved = 755;
}
/*
equation index: 756
type: SIMPLE_ASSIGN
comp.vaporOut.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,756};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* comp.vaporOut.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.eta variable */);
  threadData->lastEquationSolved = 756;
}
/*
equation index: 757
type: SIMPLE_ASSIGN
comp.h_ex_s = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,757};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* comp.h_ex_s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.h variable */);
  threadData->lastEquationSolved = 757;
}
/*
equation index: 758
type: SIMPLE_ASSIGN
comp.vaporOut.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,758};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[709]] /* comp.vaporOut.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.kappa variable */);
  threadData->lastEquationSolved = 758;
}
/*
equation index: 759
type: SIMPLE_ASSIGN
comp.vaporOut.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,759};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* comp.vaporOut.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.lambda variable */);
  threadData->lastEquationSolved = 759;
}
/*
equation index: 760
type: SIMPLE_ASSIGN
comp.vaporOut.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,760};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[711]] /* comp.vaporOut.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[66]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.p variable */);
  threadData->lastEquationSolved = 760;
}
/*
equation index: 761
type: SIMPLE_ASSIGN
comp.vaporOut.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,761};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[27]] /* comp.vaporOut.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.phase variable */);
  threadData->lastEquationSolved = 761;
}
/*
equation index: 762
type: SIMPLE_ASSIGN
comp.vaporOut.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,762};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* comp.vaporOut.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState747.s variable */);
  threadData->lastEquationSolved = 762;
}
/*
equation index: 763
type: SIMPLE_ASSIGN
comp.h_ex = comp.h_su + (comp.h_ex_s - comp.h_su) / comp.epsilon_s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,763};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* comp.h_ex variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */) + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* comp.h_ex_s variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* comp.epsilon_s PARAM */),"comp.epsilon_s",equationIndexes);
  threadData->lastEquationSolved = 763;
}
/*
equation index: 764
type: SIMPLE_ASSIGN
m_dot_kg_s = comp.V_dot_su * comp.rho_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,764};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* m_dot_kg_s variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* comp.V_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* comp.rho_su variable */));
  threadData->lastEquationSolved = 764;
}
/*
equation index: 765
type: SIMPLE_ASSIGN
cond.Cells[2].hnode_su = 2.0 * cond.Cells[1].h - cond.Cells[1].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,765};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */);
  threadData->lastEquationSolved = 765;
}
/*
equation index: 766
type: SIMPLE_ASSIGN
cond.Cells[3].hnode_su = 2.0 * cond.Cells[2].h - cond.Cells[2].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,766};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */);
  threadData->lastEquationSolved = 766;
}
/*
equation index: 767
type: SIMPLE_ASSIGN
cond.Cells[4].hnode_su = 2.0 * cond.Cells[3].h - cond.Cells[3].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,767};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */);
  threadData->lastEquationSolved = 767;
}
/*
equation index: 768
type: SIMPLE_ASSIGN
cond.Cells[5].hnode_su = 2.0 * cond.Cells[4].h - cond.Cells[4].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,768};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */);
  threadData->lastEquationSolved = 768;
}
/*
equation index: 769
type: SIMPLE_ASSIGN
evap.Cells[1].hnode_su = 2.0 * cond.Cells[5].h - cond.Cells[5].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,769};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */);
  threadData->lastEquationSolved = 769;
}
/*
equation index: 770
type: SIMPLE_ASSIGN
evap.Cells[2].hnode_su = 2.0 * evap.Cells[1].h - evap.Cells[1].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,770};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].hnode_su variable */);
  threadData->lastEquationSolved = 770;
}
/*
equation index: 771
type: SIMPLE_ASSIGN
evap.Cells[3].hnode_su = 2.0 * evap.Cells[2].h - evap.Cells[2].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,771};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */);
  threadData->lastEquationSolved = 771;
}
/*
equation index: 772
type: SIMPLE_ASSIGN
evap.Cells[4].hnode_su = 2.0 * evap.Cells[3].h - evap.Cells[3].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,772};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */);
  threadData->lastEquationSolved = 772;
}
/*
equation index: 773
type: SIMPLE_ASSIGN
evap.Cells[5].hnode_su = 2.0 * evap.Cells[4].h - evap.Cells[4].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,773};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */);
  threadData->lastEquationSolved = 773;
}
/*
equation index: 774
type: SIMPLE_ASSIGN
evap.Cells[5].hnode_ex = 2.0 * evap.Cells[5].h - evap.Cells[5].hnode_su
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,774};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* evap.Cells[5].hnode_ex variable */) = (2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */);
  threadData->lastEquationSolved = 774;
}
/*
equation index: 776
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776 := RefrigerationTrainer.ClosedLoopM1e.comp.Medium.setState_ph(evap.Cells[5].p, comp.h_su, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,776};
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState tmp0;
  tmp0 = omc_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.T variable */) = tmp0._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.a variable */) = tmp0._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.beta variable */) = tmp0._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.cp variable */) = tmp0._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.cv variable */) = tmp0._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[73]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.d variable */) = tmp0._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[74]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.ddhp variable */) = tmp0._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.ddph variable */) = tmp0._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.eta variable */) = tmp0._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.h variable */) = tmp0._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.kappa variable */) = tmp0._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.lambda variable */) = tmp0._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.p variable */) = tmp0._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[3]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.phase variable */) = tmp0._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.s variable */) = tmp0._s;
  ;
  threadData->lastEquationSolved = 776;
}

void residualFunc793(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,793};
  int i,j;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  /* iteration variables */
  for (i=0; i<17; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc793: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 793).vars[i]);
      for (j=0; j<17; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc793 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* comp.vaporIn.phase DISCRETE */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* comp.vaporIn.beta variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* comp.vaporIn.cv variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* comp.vaporIn.lambda variable */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* comp.vaporIn.ddhp variable */) = xloc[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* comp.vaporIn.h variable */) = xloc[5];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* comp.vaporIn.cp variable */) = xloc[6];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* comp.vaporIn.p variable */) = xloc[7];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[688]] /* comp.vaporIn.T variable */) = xloc[8];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* comp.vaporIn.kappa variable */) = xloc[9];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* comp.vaporIn.a variable */) = xloc[10];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* comp.vaporIn.eta variable */) = xloc[11];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* comp.vaporIn.ddph variable */) = xloc[12];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */) = xloc[13];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* comp.rho_su variable */) = xloc[14];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */) = xloc[15];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* comp.s_su variable */) = xloc[16];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_747(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_748(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_749(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_750(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_751(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_752(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_753(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_754(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_755(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_756(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_757(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_758(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_759(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_760(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_761(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_762(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_763(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_764(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_765(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_766(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_767(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_768(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_769(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_770(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_771(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_772(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_773(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_774(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_776(data, threadData);
  /* body */
  tmp0 = LessEq((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* m_dot_kg_s variable */)),0.0);
  res[0] = (tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* comp.h_ex variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */);
  threadData->lastEquationSolved = 792;
  res[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[688]] /* comp.vaporIn.T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.T variable */);
  threadData->lastEquationSolved = 777;
  res[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* comp.vaporIn.a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.a variable */);
  threadData->lastEquationSolved = 778;
  res[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* comp.vaporIn.beta variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.beta variable */);
  threadData->lastEquationSolved = 779;
  res[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* comp.vaporIn.cp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.cp variable */);
  threadData->lastEquationSolved = 780;
  res[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* comp.vaporIn.cv variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.cv variable */);
  threadData->lastEquationSolved = 781;
  res[6] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* comp.rho_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[73]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.d variable */);
  threadData->lastEquationSolved = 782;
  res[7] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* comp.vaporIn.ddhp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[74]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.ddhp variable */);
  threadData->lastEquationSolved = 783;
  res[8] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* comp.vaporIn.ddph variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.ddph variable */);
  threadData->lastEquationSolved = 784;
  res[9] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* comp.vaporIn.eta variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.eta variable */);
  threadData->lastEquationSolved = 785;
  res[10] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* comp.vaporIn.h variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.h variable */);
  threadData->lastEquationSolved = 786;
  res[11] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* comp.vaporIn.kappa variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.kappa variable */);
  threadData->lastEquationSolved = 787;
  res[12] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* comp.vaporIn.lambda variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.lambda variable */);
  threadData->lastEquationSolved = 788;
  res[13] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* comp.vaporIn.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.p variable */);
  threadData->lastEquationSolved = 789;
  res[14] = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* comp.vaporIn.phase DISCRETE */) - (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[3]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.phase variable */);
  threadData->lastEquationSolved = 790;
  res[15] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* comp.s_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState776.s variable */);
  threadData->lastEquationSolved = 791;
  tmp1 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* m_dot_kg_s variable */),0.0);
  res[16] = (tmp1?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* comp.h_ex variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* evap.Cells[5].hnode_ex variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */);
  threadData->lastEquationSolved = 775;
  /* restore known outputs */
  threadData->lastEquationSolved = 793;
}
void initializeSparsePatternNLS793(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS793(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS793(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS793(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for comp.vaporIn.phase */
  sysData->nominal[i] = data->modelData->integerVarsData[26] /* comp.vaporIn.phase */ .attribute.nominal;
  sysData->min[i]     = data->modelData->integerVarsData[26] /* comp.vaporIn.phase */ .attribute.min;
  sysData->max[i++]   = data->modelData->integerVarsData[26] /* comp.vaporIn.phase */ .attribute.max;
  /* static nls data for comp.vaporIn.beta */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 690 /* comp.vaporIn.beta */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 690 /* comp.vaporIn.beta */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 690 /* comp.vaporIn.beta */);
  /* static nls data for comp.vaporIn.cv */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 692 /* comp.vaporIn.cv */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 692 /* comp.vaporIn.cv */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 692 /* comp.vaporIn.cv */);
  /* static nls data for comp.vaporIn.lambda */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 698 /* comp.vaporIn.lambda */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 698 /* comp.vaporIn.lambda */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 698 /* comp.vaporIn.lambda */);
  /* static nls data for comp.vaporIn.ddhp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 693 /* comp.vaporIn.ddhp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 693 /* comp.vaporIn.ddhp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 693 /* comp.vaporIn.ddhp */);
  /* static nls data for comp.vaporIn.h */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 696 /* comp.vaporIn.h */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 696 /* comp.vaporIn.h */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 696 /* comp.vaporIn.h */);
  /* static nls data for comp.vaporIn.cp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 691 /* comp.vaporIn.cp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 691 /* comp.vaporIn.cp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 691 /* comp.vaporIn.cp */);
  /* static nls data for comp.vaporIn.p */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 699 /* comp.vaporIn.p */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 699 /* comp.vaporIn.p */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 699 /* comp.vaporIn.p */);
  /* static nls data for comp.vaporIn.T */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 688 /* comp.vaporIn.T */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 688 /* comp.vaporIn.T */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 688 /* comp.vaporIn.T */);
  /* static nls data for comp.vaporIn.kappa */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 697 /* comp.vaporIn.kappa */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 697 /* comp.vaporIn.kappa */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 697 /* comp.vaporIn.kappa */);
  /* static nls data for comp.vaporIn.a */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 689 /* comp.vaporIn.a */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 689 /* comp.vaporIn.a */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 689 /* comp.vaporIn.a */);
  /* static nls data for comp.vaporIn.eta */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 695 /* comp.vaporIn.eta */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 695 /* comp.vaporIn.eta */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 695 /* comp.vaporIn.eta */);
  /* static nls data for comp.vaporIn.ddph */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 694 /* comp.vaporIn.ddph */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 694 /* comp.vaporIn.ddph */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 694 /* comp.vaporIn.ddph */);
  /* static nls data for cond.Cells[1].hnode_su */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 832 /* cond.Cells[1].hnode_su */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 832 /* cond.Cells[1].hnode_su */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 832 /* cond.Cells[1].hnode_su */);
  /* static nls data for comp.rho_su */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 685 /* comp.rho_su */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 685 /* comp.rho_su */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 685 /* comp.rho_su */);
  /* static nls data for comp.h_su */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 684 /* comp.h_su */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 684 /* comp.h_su */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 684 /* comp.h_su */);
  /* static nls data for comp.s_su */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 687 /* comp.s_su */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 687 /* comp.s_su */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 687 /* comp.s_su */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS793(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS793(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS793(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS793(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS793(DATA* data, double *array)
{
  array[0] = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* comp.vaporIn.phase DISCRETE */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* comp.vaporIn.beta variable */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* comp.vaporIn.cv variable */);
  array[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* comp.vaporIn.lambda variable */);
  array[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* comp.vaporIn.ddhp variable */);
  array[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* comp.vaporIn.h variable */);
  array[6] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* comp.vaporIn.cp variable */);
  array[7] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* comp.vaporIn.p variable */);
  array[8] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[688]] /* comp.vaporIn.T variable */);
  array[9] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* comp.vaporIn.kappa variable */);
  array[10] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* comp.vaporIn.a variable */);
  array[11] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* comp.vaporIn.eta variable */);
  array[12] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* comp.vaporIn.ddph variable */);
  array[13] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */);
  array[14] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* comp.rho_su variable */);
  array[15] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */);
  array[16] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* comp.s_su variable */);
}


/* inner equations */

/*
equation index: 988
type: SIMPLE_ASSIGN
cond.Cells[5].dMdt = cond.Cells[5].Vi * (cond.Cells[5].drdh * der(cond.Cells[5].h) + cond.Cells[5].drdp * der(cond.Cells[1].p))
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,988};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cond.Cells[5].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* cond.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cond.Cells[5].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[5].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cond.Cells[5].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 988;
}
/*
equation index: 989
type: SIMPLE_ASSIGN
cond.Cells[3].dMdt = cond.Cells[3].Vi * (cond.Cells[3].drdh * der(cond.Cells[3].h) + cond.Cells[3].drdp * der(cond.Cells[1].p))
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,989};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* cond.Cells[3].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* cond.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cond.Cells[3].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[3].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cond.Cells[3].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 989;
}
/*
equation index: 990
type: SIMPLE_ASSIGN
cond.Cells[2].dMdt = cond.Cells[2].Vi * (cond.Cells[2].drdh * der(cond.Cells[2].h) + cond.Cells[2].drdp * der(cond.Cells[1].p))
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,990};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* cond.Cells[2].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* cond.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cond.Cells[2].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[2].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cond.Cells[2].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 990;
}
/*
equation index: 991
type: SIMPLE_ASSIGN
cond.Cells[4].dMdt = cond.Cells[4].Vi * (cond.Cells[4].drdh * der(cond.Cells[4].h) + cond.Cells[4].drdp * der(cond.Cells[1].p))
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,991};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* cond.Cells[4].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* cond.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* cond.Cells[4].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[4].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cond.Cells[4].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 991;
}
/*
equation index: 992
type: SIMPLE_ASSIGN
cond.Cells[1].dMdt = cond.Cells[1].Vi * (cond.Cells[1].drdh * der(cond.Cells[1].h) + cond.Cells[1].drdp * der(cond.Cells[1].p))
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,992};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* cond.Cells[1].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* cond.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cond.Cells[1].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* der(cond.Cells[1].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* cond.Cells[1].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 992;
}
/*
equation index: 993
type: SIMPLE_ASSIGN
cond.Cells[5].M_dot_su = cond.Cells[5].M_dot_ex + cond.Cells[5].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,993};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[5].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* cond.Cells[5].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cond.Cells[5].dMdt variable */);
  threadData->lastEquationSolved = 993;
}
/*
equation index: 994
type: SIMPLE_ASSIGN
cond.Cells[5].Q_tot = cond.Cells[5].Vi * cond.Cells[5].rho * der(cond.Cells[5].h) + cond.Cells[5].M_dot_ex * (evap.Cells[1].hnode_su - cond.Cells[5].h) + cond.Cells[5].M_dot_su * (cond.Cells[5].h - cond.Cells[5].hnode_su) - cond.Cells[5].Vi * der(cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,994};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cond.Cells[5].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* cond.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* cond.Cells[5].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[5].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* cond.Cells[5].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[5].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* cond.Cells[5].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 994;
}
/*
equation index: 995
type: SIMPLE_ASSIGN
cond.Cells[5].heatTransfer.U[1] = cond.Cells[5].heatTransfer.Unom * (1e-5 + abs(cond.Cells[5].M_dot_su / cond.Cells[5].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,995};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* cond.Cells[5].heatTransfer.Mdotnom variable */),"cond.Cells[5].heatTransfer.Mdotnom",equationIndexes));
  tmp1 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[826]] /* cond.Cells[5].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[831]] /* cond.Cells[5].heatTransfer.Unom variable */)) * (1e-5 + tmp2);
  threadData->lastEquationSolved = 995;
}
/*
equation index: 996
type: SIMPLE_ASSIGN
cond.Cells[5].qdot = cond.Cells[5].heatTransfer.U[1] * (T_amb_k - cond.Cells[5].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,996};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[841]] /* cond.Cells[5].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[826]] /* cond.Cells[5].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cond.Cells[5].T variable */));
  threadData->lastEquationSolved = 996;
}
/*
equation index: 997
type: SIMPLE_ASSIGN
cond.Cells[5].InFlow.m_flow = cond.Cells[5].M_dot_su * (*Real*)(cond.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,997};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cond.Cells[5].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[5].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[5].Nt PARAM */)));
  threadData->lastEquationSolved = 997;
}
/*
equation index: 998
type: SIMPLE_ASSIGN
cond.Cells[4].M_dot_ex = cond.Cells[5].InFlow.m_flow / (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,998};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cond.Cells[4].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cond.Cells[5].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[4].Nt PARAM */)),"/*Real*/(cond.Cells[4].Nt)",equationIndexes);
  threadData->lastEquationSolved = 998;
}
/*
equation index: 999
type: SIMPLE_ASSIGN
cond.Cells[4].M_dot_su = cond.Cells[4].M_dot_ex + cond.Cells[4].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,999};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[4].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cond.Cells[4].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* cond.Cells[4].dMdt variable */);
  threadData->lastEquationSolved = 999;
}
/*
equation index: 1000
type: SIMPLE_ASSIGN
cond.Cells[4].Q_tot = cond.Cells[4].Vi * cond.Cells[4].rho * der(cond.Cells[4].h) + cond.Cells[4].M_dot_ex * (cond.Cells[5].hnode_su - cond.Cells[4].h) + cond.Cells[4].M_dot_su * (cond.Cells[4].h - cond.Cells[4].hnode_su) - cond.Cells[4].Vi * der(cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1000};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cond.Cells[4].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* cond.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* cond.Cells[4].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[4].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cond.Cells[4].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[4].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* cond.Cells[4].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 1000;
}
/*
equation index: 1001
type: SIMPLE_ASSIGN
cond.Cells[4].heatTransfer.U[1] = cond.Cells[4].heatTransfer.Unom * (1e-5 + abs(cond.Cells[4].M_dot_su / cond.Cells[4].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1001};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* cond.Cells[4].heatTransfer.Mdotnom variable */),"cond.Cells[4].heatTransfer.Mdotnom",equationIndexes));
  tmp1 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[825]] /* cond.Cells[4].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[830]] /* cond.Cells[4].heatTransfer.Unom variable */)) * (1e-5 + tmp2);
  threadData->lastEquationSolved = 1001;
}
/*
equation index: 1002
type: SIMPLE_ASSIGN
cond.Cells[4].qdot = cond.Cells[4].heatTransfer.U[1] * (T_amb_k - cond.Cells[4].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1002};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[840]] /* cond.Cells[4].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[825]] /* cond.Cells[4].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cond.Cells[4].T variable */));
  threadData->lastEquationSolved = 1002;
}
/*
equation index: 1003
type: SIMPLE_ASSIGN
cond.Cells[4].InFlow.m_flow = cond.Cells[4].M_dot_su * (*Real*)(cond.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1003};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cond.Cells[4].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[4].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* cond.Cells[4].Nt PARAM */)));
  threadData->lastEquationSolved = 1003;
}
/*
equation index: 1004
type: SIMPLE_ASSIGN
cond.Cells[3].M_dot_ex = cond.Cells[4].InFlow.m_flow / (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1004};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cond.Cells[3].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cond.Cells[4].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[3].Nt PARAM */)),"/*Real*/(cond.Cells[3].Nt)",equationIndexes);
  threadData->lastEquationSolved = 1004;
}
/*
equation index: 1005
type: SIMPLE_ASSIGN
cond.Cells[3].M_dot_su = cond.Cells[3].M_dot_ex + cond.Cells[3].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1005};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[3].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cond.Cells[3].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* cond.Cells[3].dMdt variable */);
  threadData->lastEquationSolved = 1005;
}
/*
equation index: 1006
type: SIMPLE_ASSIGN
cond.Cells[3].Q_tot = cond.Cells[3].Vi * cond.Cells[3].rho * der(cond.Cells[3].h) + cond.Cells[3].M_dot_ex * (cond.Cells[4].hnode_su - cond.Cells[3].h) + cond.Cells[3].M_dot_su * (cond.Cells[3].h - cond.Cells[3].hnode_su) - cond.Cells[3].Vi * der(cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1006};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cond.Cells[3].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* cond.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[844]] /* cond.Cells[3].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[3].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cond.Cells[3].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[3].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* cond.Cells[3].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 1006;
}
/*
equation index: 1007
type: SIMPLE_ASSIGN
cond.Cells[3].heatTransfer.U[1] = cond.Cells[3].heatTransfer.Unom * (1e-5 + abs(cond.Cells[3].M_dot_su / cond.Cells[3].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1007};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* cond.Cells[3].heatTransfer.Mdotnom variable */),"cond.Cells[3].heatTransfer.Mdotnom",equationIndexes));
  tmp1 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[824]] /* cond.Cells[3].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* cond.Cells[3].heatTransfer.Unom variable */)) * (1e-5 + tmp2);
  threadData->lastEquationSolved = 1007;
}
/*
equation index: 1008
type: SIMPLE_ASSIGN
cond.Cells[3].qdot = cond.Cells[3].heatTransfer.U[1] * (T_amb_k - cond.Cells[3].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1008};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[839]] /* cond.Cells[3].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[824]] /* cond.Cells[3].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[739]] /* cond.Cells[3].T variable */));
  threadData->lastEquationSolved = 1008;
}
/*
equation index: 1009
type: SIMPLE_ASSIGN
cond.Cells[3].InFlow.m_flow = cond.Cells[3].M_dot_su * (*Real*)(cond.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1009};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cond.Cells[3].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[3].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* cond.Cells[3].Nt PARAM */)));
  threadData->lastEquationSolved = 1009;
}
/*
equation index: 1010
type: SIMPLE_ASSIGN
cond.Cells[2].M_dot_ex = cond.Cells[3].InFlow.m_flow / (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1010};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cond.Cells[2].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cond.Cells[3].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[2].Nt PARAM */)),"/*Real*/(cond.Cells[2].Nt)",equationIndexes);
  threadData->lastEquationSolved = 1010;
}
/*
equation index: 1011
type: SIMPLE_ASSIGN
cond.Cells[2].M_dot_su = cond.Cells[2].M_dot_ex + cond.Cells[2].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1011};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[2].M_dot_su variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cond.Cells[2].M_dot_ex variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* cond.Cells[2].dMdt variable */);
  threadData->lastEquationSolved = 1011;
}
/*
equation index: 1012
type: SIMPLE_ASSIGN
cond.Cells[2].Q_tot = cond.Cells[2].Vi * cond.Cells[2].rho * der(cond.Cells[2].h) + cond.Cells[2].M_dot_ex * (cond.Cells[3].hnode_su - cond.Cells[2].h) + cond.Cells[2].M_dot_su * (cond.Cells[2].h - cond.Cells[2].hnode_su) - cond.Cells[2].Vi * der(cond.Cells[1].p)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1012};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cond.Cells[2].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* cond.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* cond.Cells[2].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[2].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cond.Cells[2].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[2].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* cond.Cells[2].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 1012;
}
/*
equation index: 1013
type: SIMPLE_ASSIGN
cond.Cells[2].heatTransfer.U[1] = cond.Cells[2].heatTransfer.Unom * (1e-5 + abs(cond.Cells[2].M_dot_su / cond.Cells[2].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1013};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* cond.Cells[2].heatTransfer.Mdotnom variable */),"cond.Cells[2].heatTransfer.Mdotnom",equationIndexes));
  tmp1 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[823]] /* cond.Cells[2].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[828]] /* cond.Cells[2].heatTransfer.Unom variable */)) * (1e-5 + tmp2);
  threadData->lastEquationSolved = 1013;
}
/*
equation index: 1014
type: SIMPLE_ASSIGN
cond.Cells[2].qdot = cond.Cells[2].heatTransfer.U[1] * (T_amb_k - cond.Cells[2].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1014};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[838]] /* cond.Cells[2].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[823]] /* cond.Cells[2].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cond.Cells[2].T variable */));
  threadData->lastEquationSolved = 1014;
}
/*
equation index: 1015
type: SIMPLE_ASSIGN
cond.Cells[2].InFlow.m_flow = cond.Cells[2].M_dot_su * (*Real*)(cond.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1015};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cond.Cells[2].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[2].M_dot_su variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* cond.Cells[2].Nt PARAM */)));
  threadData->lastEquationSolved = 1015;
}
/*
equation index: 1016
type: SIMPLE_ASSIGN
cond.Cells[1].M_dot_ex = cond.Cells[2].InFlow.m_flow / (*Real*)(cond.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1016};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cond.Cells[1].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cond.Cells[2].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* cond.Cells[1].Nt PARAM */)),"/*Real*/(cond.Cells[1].Nt)",equationIndexes);
  threadData->lastEquationSolved = 1016;
}

void residualFunc1057(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1057};
  int i,j;
  /* iteration variables */
  for (i=0; i<6; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1057: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1057).vars[i]);
      for (j=0; j<6; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1057 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[5].h) STATE_DER */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[3].h) STATE_DER */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[2].h) STATE_DER */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[4].h) STATE_DER */) = xloc[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* der(cond.Cells[1].h) STATE_DER */) = xloc[5];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_988(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_989(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_990(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_991(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_992(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_993(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_994(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_995(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_996(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_997(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_998(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_999(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1000(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1001(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1002(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1003(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1004(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1005(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1006(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1007(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1008(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1009(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1010(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1011(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1012(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1013(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1014(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1015(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1016(data, threadData);
  /* body */
  res[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[16]] /* cond.Cells[5].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[841]] /* cond.Cells[5].qdot variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cond.Cells[5].Q_tot variable */);
  threadData->lastEquationSolved = 1022;
  res[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* cond.Cells[1].M_dot_su variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cond.Cells[1].M_dot_ex variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* cond.Cells[1].dMdt variable */);
  threadData->lastEquationSolved = 1021;
  res[2] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* cond.Cells[1].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cond.Cells[1].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* cond.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* cond.Cells[1].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* der(cond.Cells[1].h) STATE_DER */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cond.Cells[1].Q_tot variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* cond.Cells[1].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */)));
  threadData->lastEquationSolved = 1020;
  res[3] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* cond.Cells[2].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[838]] /* cond.Cells[2].qdot variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cond.Cells[2].Q_tot variable */);
  threadData->lastEquationSolved = 1019;
  res[4] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* cond.Cells[3].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[839]] /* cond.Cells[3].qdot variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cond.Cells[3].Q_tot variable */);
  threadData->lastEquationSolved = 1018;
  res[5] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* cond.Cells[4].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[840]] /* cond.Cells[4].qdot variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cond.Cells[4].Q_tot variable */);
  threadData->lastEquationSolved = 1017;
  /* restore known outputs */
  threadData->lastEquationSolved = 1057;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1057(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+6] = {0,6,6,4,3,5,2};
  const int rowIndex[26] = {0,1,2,3,4,5,0,1,2,3,4,5,1,2,3,4,1,2,3,1,2,3,4,5,1,2};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(6, 26, 6);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (6+1)*sizeof(unsigned int));
  
  for(i=2;i<6+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 26*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {5};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {4};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {3};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 1 columns */
  const int indices_4[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 1 columns */
  const int indices_5[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
  
  /* color 6 with 1 columns */
  const int indices_6[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_6[i]] = 6;
}

void freeSparsePatternNLS1057(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS1057(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 6;
  inSysData->nonlinearPattern->numberOfEqns = 6;
  inSysData->nonlinearPattern->numberOfNonlinear = 0;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((6+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((6+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(0*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(0*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+6] = {0,0,0,0,0,0,0};
  const int index_eqn[1+6] = {0,0,0,0,0,0,0};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (6+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (6+1)*sizeof(unsigned int));
  for(i=2;i<6+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<6+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[0] = {};
  const int rows[0] = {};
  memcpy(inSysData->nonlinearPattern->columns, columns, 0*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 0*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1057(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for der(cond.Cells[1].p) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 18 /* der(cond.Cells[1].p) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 18 /* der(cond.Cells[1].p) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 18 /* der(cond.Cells[1].p) */);
  /* static nls data for der(cond.Cells[5].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 17 /* der(cond.Cells[5].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 17 /* der(cond.Cells[5].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 17 /* der(cond.Cells[5].h) */);
  /* static nls data for der(cond.Cells[3].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 15 /* der(cond.Cells[3].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 15 /* der(cond.Cells[3].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 15 /* der(cond.Cells[3].h) */);
  /* static nls data for der(cond.Cells[2].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 14 /* der(cond.Cells[2].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 14 /* der(cond.Cells[2].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 14 /* der(cond.Cells[2].h) */);
  /* static nls data for der(cond.Cells[4].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 16 /* der(cond.Cells[4].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 16 /* der(cond.Cells[4].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 16 /* der(cond.Cells[4].h) */);
  /* static nls data for der(cond.Cells[1].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 13 /* der(cond.Cells[1].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 13 /* der(cond.Cells[1].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 13 /* der(cond.Cells[1].h) */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1057(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1057(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1057(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1057(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1057(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[5].h) STATE_DER */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[3].h) STATE_DER */);
  array[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[2].h) STATE_DER */);
  array[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[4].h) STATE_DER */);
  array[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* der(cond.Cells[1].h) STATE_DER */);
}


/* inner equations */

/*
equation index: 1232
type: SIMPLE_ASSIGN
evap.Cells[5].dMdt = evap.Cells[5].Vi * (evap.Cells[5].drdh * der(evap.Cells[5].h) + evap.Cells[5].drdp * der(evap.Cells[5].p))
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* evap.Cells[5].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* evap.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* evap.Cells[5].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[5].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* evap.Cells[5].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1232;
}
/*
equation index: 1233
type: SIMPLE_ASSIGN
evap.Cells[4].dMdt = evap.Cells[4].Vi * (evap.Cells[4].drdh * der(evap.Cells[4].h) + evap.Cells[4].drdp * der(evap.Cells[5].p))
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* evap.Cells[4].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* evap.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* evap.Cells[4].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[4].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* evap.Cells[4].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1233;
}
/*
equation index: 1234
type: SIMPLE_ASSIGN
evap.Cells[1].dMdt = evap.Cells[1].Vi * (evap.Cells[1].drdh * der(evap.Cells[1].h) + evap.Cells[1].drdp * der(evap.Cells[5].p))
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* evap.Cells[1].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* evap.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* evap.Cells[1].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* der(evap.Cells[1].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* evap.Cells[1].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1234;
}
/*
equation index: 1235
type: SIMPLE_ASSIGN
evap.Cells[3].dMdt = evap.Cells[3].Vi * (evap.Cells[3].drdh * der(evap.Cells[3].h) + evap.Cells[3].drdp * der(evap.Cells[5].p))
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* evap.Cells[3].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* evap.Cells[3].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[3].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* evap.Cells[3].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1235;
}
/*
equation index: 1236
type: SIMPLE_ASSIGN
evap.Cells[2].dMdt = evap.Cells[2].Vi * (evap.Cells[2].drdh * der(evap.Cells[2].h) + evap.Cells[2].drdp * der(evap.Cells[5].p))
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* evap.Cells[2].dMdt variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* evap.Cells[2].drdh variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[2].h) STATE_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* evap.Cells[2].drdp variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1236;
}
/*
equation index: 1237
type: SIMPLE_ASSIGN
evap.Cells[1].M_dot_ex = evap.Cells[1].M_dot_su - evap.Cells[1].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* evap.Cells[1].M_dot_ex variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* evap.Cells[1].M_dot_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* evap.Cells[1].dMdt variable */);
  threadData->lastEquationSolved = 1237;
}
/*
equation index: 1238
type: SIMPLE_ASSIGN
evap.Cells[2].InFlow.m_flow = evap.Cells[1].M_dot_ex * (*Real*)(evap.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* evap.Cells[2].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* evap.Cells[1].M_dot_ex variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[27]] /* evap.Cells[1].Nt PARAM */)));
  threadData->lastEquationSolved = 1238;
}
/*
equation index: 1239
type: SIMPLE_ASSIGN
evap.Cells[2].M_dot_su = evap.Cells[2].InFlow.m_flow / (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[2].M_dot_su variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* evap.Cells[2].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[2].Nt PARAM */)),"/*Real*/(evap.Cells[2].Nt)",equationIndexes);
  threadData->lastEquationSolved = 1239;
}
/*
equation index: 1240
type: SIMPLE_ASSIGN
evap.Cells[2].heatTransfer.U[1] = evap.Cells[2].heatTransfer.Unom * (1e-5 + abs(evap.Cells[2].M_dot_su / evap.Cells[2].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1240};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[2].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* evap.Cells[2].heatTransfer.Mdotnom variable */),"evap.Cells[2].heatTransfer.Mdotnom",equationIndexes));
  tmp1 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* evap.Cells[2].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* evap.Cells[2].heatTransfer.Unom variable */)) * (1e-5 + tmp2);
  threadData->lastEquationSolved = 1240;
}
/*
equation index: 1241
type: SIMPLE_ASSIGN
evap.Cells[2].qdot = evap.Cells[2].heatTransfer.U[1] * (T_box_k - evap.Cells[2].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1112]] /* evap.Cells[2].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* evap.Cells[2].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* evap.Cells[2].T variable */));
  threadData->lastEquationSolved = 1241;
}
/*
equation index: 1242
type: SIMPLE_ASSIGN
evap.Cells[2].Q_tot = evap.Cells[2].Ai * evap.Cells[2].qdot
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* evap.Cells[2].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[82]] /* evap.Cells[2].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1112]] /* evap.Cells[2].qdot variable */));
  threadData->lastEquationSolved = 1242;
}
/*
equation index: 1243
type: SIMPLE_ASSIGN
evap.Cells[2].M_dot_ex = evap.Cells[2].M_dot_su - evap.Cells[2].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* evap.Cells[2].M_dot_ex variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[2].M_dot_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* evap.Cells[2].dMdt variable */);
  threadData->lastEquationSolved = 1243;
}
/*
equation index: 1244
type: SIMPLE_ASSIGN
evap.Cells[3].InFlow.m_flow = evap.Cells[2].M_dot_ex * (*Real*)(evap.Cells[2].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* evap.Cells[3].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* evap.Cells[2].M_dot_ex variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* evap.Cells[2].Nt PARAM */)));
  threadData->lastEquationSolved = 1244;
}
/*
equation index: 1245
type: SIMPLE_ASSIGN
evap.Cells[3].M_dot_su = evap.Cells[3].InFlow.m_flow / (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[3].M_dot_su variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* evap.Cells[3].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[3].Nt PARAM */)),"/*Real*/(evap.Cells[3].Nt)",equationIndexes);
  threadData->lastEquationSolved = 1245;
}
/*
equation index: 1246
type: SIMPLE_ASSIGN
evap.Cells[3].heatTransfer.U[1] = evap.Cells[3].heatTransfer.Unom * (1e-5 + abs(evap.Cells[3].M_dot_su / evap.Cells[3].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1246};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[3].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* evap.Cells[3].heatTransfer.Mdotnom variable */),"evap.Cells[3].heatTransfer.Mdotnom",equationIndexes));
  tmp1 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* evap.Cells[3].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* evap.Cells[3].heatTransfer.Unom variable */)) * (1e-5 + tmp2);
  threadData->lastEquationSolved = 1246;
}
/*
equation index: 1247
type: SIMPLE_ASSIGN
evap.Cells[3].qdot = evap.Cells[3].heatTransfer.U[1] * (T_box_k - evap.Cells[3].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1113]] /* evap.Cells[3].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* evap.Cells[3].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* evap.Cells[3].T variable */));
  threadData->lastEquationSolved = 1247;
}
/*
equation index: 1248
type: SIMPLE_ASSIGN
evap.Cells[3].Q_tot = evap.Cells[3].Ai * evap.Cells[3].qdot
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* evap.Cells[3].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* evap.Cells[3].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1113]] /* evap.Cells[3].qdot variable */));
  threadData->lastEquationSolved = 1248;
}
/*
equation index: 1249
type: SIMPLE_ASSIGN
evap.Cells[3].M_dot_ex = evap.Cells[3].M_dot_su - evap.Cells[3].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* evap.Cells[3].M_dot_ex variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[3].M_dot_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* evap.Cells[3].dMdt variable */);
  threadData->lastEquationSolved = 1249;
}
/*
equation index: 1250
type: SIMPLE_ASSIGN
evap.Cells[4].InFlow.m_flow = evap.Cells[3].M_dot_ex * (*Real*)(evap.Cells[3].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* evap.Cells[4].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* evap.Cells[3].M_dot_ex variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* evap.Cells[3].Nt PARAM */)));
  threadData->lastEquationSolved = 1250;
}
/*
equation index: 1251
type: SIMPLE_ASSIGN
evap.Cells[4].M_dot_su = evap.Cells[4].InFlow.m_flow / (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[4].M_dot_su variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* evap.Cells[4].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[4].Nt PARAM */)),"/*Real*/(evap.Cells[4].Nt)",equationIndexes);
  threadData->lastEquationSolved = 1251;
}
/*
equation index: 1252
type: SIMPLE_ASSIGN
evap.Cells[4].heatTransfer.U[1] = evap.Cells[4].heatTransfer.Unom * (1e-5 + abs(evap.Cells[4].M_dot_su / evap.Cells[4].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1252};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[4].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* evap.Cells[4].heatTransfer.Mdotnom variable */),"evap.Cells[4].heatTransfer.Mdotnom",equationIndexes));
  tmp1 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1098]] /* evap.Cells[4].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* evap.Cells[4].heatTransfer.Unom variable */)) * (1e-5 + tmp2);
  threadData->lastEquationSolved = 1252;
}
/*
equation index: 1253
type: SIMPLE_ASSIGN
evap.Cells[4].qdot = evap.Cells[4].heatTransfer.U[1] * (T_box_k - evap.Cells[4].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1114]] /* evap.Cells[4].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1098]] /* evap.Cells[4].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* evap.Cells[4].T variable */));
  threadData->lastEquationSolved = 1253;
}
/*
equation index: 1254
type: SIMPLE_ASSIGN
evap.Cells[4].Q_tot = evap.Cells[4].Ai * evap.Cells[4].qdot
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* evap.Cells[4].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* evap.Cells[4].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1114]] /* evap.Cells[4].qdot variable */));
  threadData->lastEquationSolved = 1254;
}
/*
equation index: 1255
type: SIMPLE_ASSIGN
evap.Cells[4].M_dot_ex = evap.Cells[4].M_dot_su - evap.Cells[4].dMdt
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* evap.Cells[4].M_dot_ex variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[4].M_dot_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* evap.Cells[4].dMdt variable */);
  threadData->lastEquationSolved = 1255;
}
/*
equation index: 1256
type: SIMPLE_ASSIGN
evap.Cells[5].InFlow.m_flow = evap.Cells[4].M_dot_ex * (*Real*)(evap.Cells[4].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1256};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* evap.Cells[5].InFlow.m_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* evap.Cells[4].M_dot_ex variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* evap.Cells[4].Nt PARAM */)));
  threadData->lastEquationSolved = 1256;
}
/*
equation index: 1257
type: SIMPLE_ASSIGN
evap.Cells[5].M_dot_su = evap.Cells[5].InFlow.m_flow / (*Real*)(evap.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[5].M_dot_su variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* evap.Cells[5].InFlow.m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[5].Nt PARAM */)),"/*Real*/(evap.Cells[5].Nt)",equationIndexes);
  threadData->lastEquationSolved = 1257;
}
/*
equation index: 1258
type: SIMPLE_ASSIGN
evap.Cells[5].Q_tot = evap.Cells[5].Vi * evap.Cells[5].rho * der(evap.Cells[5].h) + evap.Cells[5].M_dot_ex * (evap.Cells[5].hnode_ex - evap.Cells[5].h) + evap.Cells[5].M_dot_su * (evap.Cells[5].h - evap.Cells[5].hnode_su) - evap.Cells[5].Vi * der(evap.Cells[5].p)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1258};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* evap.Cells[5].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* evap.Cells[5].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* evap.Cells[5].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[5].h) STATE_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* evap.Cells[5].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* evap.Cells[5].hnode_ex variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[5].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* evap.Cells[5].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1258;
}
/*
equation index: 1259
type: SIMPLE_ASSIGN
evap.Cells[5].heatTransfer.U[1] = evap.Cells[5].heatTransfer.Unom * (1e-5 + abs(evap.Cells[5].M_dot_su / evap.Cells[5].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1259};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[5].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* evap.Cells[5].heatTransfer.Mdotnom variable */),"evap.Cells[5].heatTransfer.Mdotnom",equationIndexes));
  tmp1 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1099]] /* evap.Cells[5].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* evap.Cells[5].heatTransfer.Unom variable */)) * (1e-5 + tmp2);
  threadData->lastEquationSolved = 1259;
}
/*
equation index: 1260
type: SIMPLE_ASSIGN
evap.Cells[5].qdot = evap.Cells[5].heatTransfer.U[1] * (T_box_k - evap.Cells[5].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1260};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* evap.Cells[5].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1099]] /* evap.Cells[5].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* evap.Cells[5].T variable */));
  threadData->lastEquationSolved = 1260;
}

void residualFunc1301(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1301};
  int i,j;
  /* iteration variables */
  for (i=0; i<6; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1301: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1301).vars[i]);
      for (j=0; j<6; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1301 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[5].h) STATE_DER */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[4].h) STATE_DER */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* der(evap.Cells[1].h) STATE_DER */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[3].h) STATE_DER */) = xloc[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[2].h) STATE_DER */) = xloc[5];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1232(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1233(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1234(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1235(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1236(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1237(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1238(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1239(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1240(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1241(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1242(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1243(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1244(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1245(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1246(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1247(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1248(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1249(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1250(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1251(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1252(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1253(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1254(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1255(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1256(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1257(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1258(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1259(data, threadData);
  /* local constraints */
  RefrigerationTrainer_ClosedLoopM1e_eqFunction_1260(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[5].M_dot_su variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* evap.Cells[5].M_dot_ex variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* evap.Cells[5].dMdt variable */);
  threadData->lastEquationSolved = 1266;
  res[1] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* evap.Cells[1].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].hnode_su variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* evap.Cells[1].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* evap.Cells[1].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* evap.Cells[1].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* der(evap.Cells[1].h) STATE_DER */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* evap.Cells[1].Q_tot variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* evap.Cells[1].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1265;
  res[2] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[2].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* evap.Cells[2].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[2].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* evap.Cells[2].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[2].h) STATE_DER */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* evap.Cells[2].Q_tot variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[2].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1264;
  res[3] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[3].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* evap.Cells[3].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[3].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1118]] /* evap.Cells[3].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[3].h) STATE_DER */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* evap.Cells[3].Q_tot variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[3].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1263;
  res[4] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[4].M_dot_su variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* evap.Cells[4].M_dot_ex variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* evap.Cells[4].Vi PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* evap.Cells[4].rho variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[4].h) STATE_DER */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* evap.Cells[4].Q_tot variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* evap.Cells[4].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */)));
  threadData->lastEquationSolved = 1262;
  res[5] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* evap.Cells[5].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* evap.Cells[5].qdot variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* evap.Cells[5].Q_tot variable */);
  threadData->lastEquationSolved = 1261;
  /* restore known outputs */
  threadData->lastEquationSolved = 1301;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1301(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+6] = {0,6,2,3,6,4,5};
  const int rowIndex[26] = {0,1,2,3,4,5,0,5,0,4,5,0,1,2,3,4,5,0,3,4,5,0,2,3,4,5};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(6, 26, 6);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (6+1)*sizeof(unsigned int));
  
  for(i=2;i<6+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 26*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {5};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {4};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {3};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 1 columns */
  const int indices_4[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 1 columns */
  const int indices_5[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
  
  /* color 6 with 1 columns */
  const int indices_6[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_6[i]] = 6;
}

void freeSparsePatternNLS1301(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS1301(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 6;
  inSysData->nonlinearPattern->numberOfEqns = 6;
  inSysData->nonlinearPattern->numberOfNonlinear = 0;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((6+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((6+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(0*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(0*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+6] = {0,0,0,0,0,0,0};
  const int index_eqn[1+6] = {0,0,0,0,0,0,0};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (6+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (6+1)*sizeof(unsigned int));
  for(i=2;i<6+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<6+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[0] = {};
  const int rows[0] = {};
  memcpy(inSysData->nonlinearPattern->columns, columns, 0*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 0*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1301(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for der(evap.Cells[5].p) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 25 /* der(evap.Cells[5].p) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 25 /* der(evap.Cells[5].p) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 25 /* der(evap.Cells[5].p) */);
  /* static nls data for der(evap.Cells[5].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 24 /* der(evap.Cells[5].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 24 /* der(evap.Cells[5].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 24 /* der(evap.Cells[5].h) */);
  /* static nls data for der(evap.Cells[4].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 23 /* der(evap.Cells[4].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 23 /* der(evap.Cells[4].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 23 /* der(evap.Cells[4].h) */);
  /* static nls data for der(evap.Cells[1].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 20 /* der(evap.Cells[1].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 20 /* der(evap.Cells[1].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 20 /* der(evap.Cells[1].h) */);
  /* static nls data for der(evap.Cells[3].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 22 /* der(evap.Cells[3].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 22 /* der(evap.Cells[3].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 22 /* der(evap.Cells[3].h) */);
  /* static nls data for der(evap.Cells[2].h) */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 21 /* der(evap.Cells[2].h) */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 21 /* der(evap.Cells[2].h) */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 21 /* der(evap.Cells[2].h) */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1301(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1301(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1301(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1301(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1301(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[5].h) STATE_DER */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[4].h) STATE_DER */);
  array[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* der(evap.Cells[1].h) STATE_DER */);
  array[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[3].h) STATE_DER */);
  array[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[2].h) STATE_DER */);
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void RefrigerationTrainer_ClosedLoopM1e_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[5].equationIndex = 1301;
  nonLinearSystemData[5].size = 6;
  nonLinearSystemData[5].homotopySupport = 0 /* false */;
  nonLinearSystemData[5].mixedSystem = 0 /* false */;
  nonLinearSystemData[5].residualFunc = residualFunc1301;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac5_column;
  nonLinearSystemData[5].initialAnalyticalJacobian = RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianNLSJac5;
  nonLinearSystemData[5].jacobianIndex = 3 /*jacInx*/;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS1301;
  nonLinearSystemData[5].freeStaticNLSData = freeStaticDataNLS1301;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS1301;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  const int tmp_eqn_indices_5[35] = {1232, 1233, 1234, 1235, 1236, 1237, 1238, 1239, 1240, 1241, 1242, 1243, 1244, 1245, 1246, 1247, 1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257, 1258, 1259, 1260, 1266, 1265, 1264, 1263, 1262, 1261};
  nonLinearSystemData[5].eqn_simcode_indices = malloc(35 * sizeof(int));
  memcpy(nonLinearSystemData[5].eqn_simcode_indices, tmp_eqn_indices_5, 35 * sizeof(int));
  nonLinearSystemData[5].torn_plus_residual_size = 35;
  
  
  nonLinearSystemData[4].equationIndex = 1057;
  nonLinearSystemData[4].size = 6;
  nonLinearSystemData[4].homotopySupport = 0 /* false */;
  nonLinearSystemData[4].mixedSystem = 0 /* false */;
  nonLinearSystemData[4].residualFunc = residualFunc1057;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac4_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[4].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS1057;
  nonLinearSystemData[4].freeStaticNLSData = freeStaticDataNLS1057;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS1057;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  const int tmp_eqn_indices_4[35] = {988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1022, 1021, 1020, 1019, 1018, 1017};
  nonLinearSystemData[4].eqn_simcode_indices = malloc(35 * sizeof(int));
  memcpy(nonLinearSystemData[4].eqn_simcode_indices, tmp_eqn_indices_4, 35 * sizeof(int));
  nonLinearSystemData[4].torn_plus_residual_size = 35;
  
  
  nonLinearSystemData[3].equationIndex = 793;
  nonLinearSystemData[3].size = 17;
  nonLinearSystemData[3].homotopySupport = 0 /* false */;
  nonLinearSystemData[3].mixedSystem = 1 /* true */;
  nonLinearSystemData[3].residualFunc = residualFunc793;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS793;
  nonLinearSystemData[3].freeStaticNLSData = freeStaticDataNLS793;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS793;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  const int tmp_eqn_indices_3[46] = {747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 792, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 775};
  nonLinearSystemData[3].eqn_simcode_indices = malloc(46 * sizeof(int));
  memcpy(nonLinearSystemData[3].eqn_simcode_indices, tmp_eqn_indices_3, 46 * sizeof(int));
  nonLinearSystemData[3].torn_plus_residual_size = 46;
  
  
  nonLinearSystemData[2].equationIndex = 739;
  nonLinearSystemData[2].size = 6;
  nonLinearSystemData[2].homotopySupport = 0 /* false */;
  nonLinearSystemData[2].mixedSystem = 0 /* false */;
  nonLinearSystemData[2].residualFunc = residualFunc739;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac2_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianNLSJac2;
  nonLinearSystemData[2].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS739;
  nonLinearSystemData[2].freeStaticNLSData = freeStaticDataNLS739;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS739;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  const int tmp_eqn_indices_2[35] = {670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 704, 703, 702, 701, 700, 699};
  nonLinearSystemData[2].eqn_simcode_indices = malloc(35 * sizeof(int));
  memcpy(nonLinearSystemData[2].eqn_simcode_indices, tmp_eqn_indices_2, 35 * sizeof(int));
  nonLinearSystemData[2].torn_plus_residual_size = 35;
  
  
  nonLinearSystemData[1].equationIndex = 660;
  nonLinearSystemData[1].size = 6;
  nonLinearSystemData[1].homotopySupport = 0 /* false */;
  nonLinearSystemData[1].mixedSystem = 0 /* false */;
  nonLinearSystemData[1].residualFunc = residualFunc660;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac1_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianNLSJac1;
  nonLinearSystemData[1].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS660;
  nonLinearSystemData[1].freeStaticNLSData = freeStaticDataNLS660;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS660;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  const int tmp_eqn_indices_1[35] = {591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 625, 624, 623, 622, 621, 620};
  nonLinearSystemData[1].eqn_simcode_indices = malloc(35 * sizeof(int));
  memcpy(nonLinearSystemData[1].eqn_simcode_indices, tmp_eqn_indices_1, 35 * sizeof(int));
  nonLinearSystemData[1].torn_plus_residual_size = 35;
  
  
  nonLinearSystemData[0].equationIndex = 543;
  nonLinearSystemData[0].size = 2;
  nonLinearSystemData[0].homotopySupport = 0 /* false */;
  nonLinearSystemData[0].mixedSystem = 1 /* true */;
  nonLinearSystemData[0].residualFunc = residualFunc543;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS543;
  nonLinearSystemData[0].freeStaticNLSData = freeStaticDataNLS543;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS543;
  nonLinearSystemData[0].checkConstraints = NULL;
  
  const int tmp_eqn_indices_0[46] = {497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 542, 541};
  nonLinearSystemData[0].eqn_simcode_indices = malloc(46 * sizeof(int));
  memcpy(nonLinearSystemData[0].eqn_simcode_indices, tmp_eqn_indices_0, 46 * sizeof(int));
  nonLinearSystemData[0].torn_plus_residual_size = 46;
}

#if defined(__cplusplus)
}
#endif
