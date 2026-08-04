/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "RefrigerationTrainer.ClosedLoopM1e_model.h"
#include "simulation/solver/events.h"
#include "simulation/arrayIndex.h"

/* FIXME these defines are ugly and hard to read, why not use direct function pointers instead? */
#define prefixedName_performSimulation RefrigerationTrainer_ClosedLoopM1e_performSimulation
#define prefixedName_updateContinuousSystem RefrigerationTrainer_ClosedLoopM1e_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation RefrigerationTrainer_ClosedLoopM1e_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>


/* dummy VARINFO and FILEINFO */
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int RefrigerationTrainer_ClosedLoopM1e_input_function(DATA *data, threadData_t *threadData)
{
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* N_rot_hz variable */) = data->simulationInfo->inputVars[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) = data->simulationInfo->inputVars[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) = data->simulationInfo->inputVars[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* txv_opening_frac variable */) = data->simulationInfo->inputVars[3];
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1e_input_function_init(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->inputVars[0] = getStartFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 672);
  data->simulationInfo->inputVars[1] = getStartFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 675);
  data->simulationInfo->inputVars[2] = getStartFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 676);
  data->simulationInfo->inputVars[3] = getStartFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1285);
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1e_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData, data->modelData->realVarsData[672].dimension.numberOfDimensions == 0, "Handling of array variables not yet implemetned.");
  put_real_element(data->simulationInfo->inputVars[0], 0, &data->modelData->realVarsData[672].attribute.start);
  assertStreamPrint(threadData, data->modelData->realVarsData[675].dimension.numberOfDimensions == 0, "Handling of array variables not yet implemetned.");
  put_real_element(data->simulationInfo->inputVars[1], 0, &data->modelData->realVarsData[675].attribute.start);
  assertStreamPrint(threadData, data->modelData->realVarsData[676].dimension.numberOfDimensions == 0, "Handling of array variables not yet implemetned.");
  put_real_element(data->simulationInfo->inputVars[2], 0, &data->modelData->realVarsData[676].attribute.start);
  assertStreamPrint(threadData, data->modelData->realVarsData[1285].dimension.numberOfDimensions == 0, "Handling of array variables not yet implemetned.");
  put_real_element(data->simulationInfo->inputVars[3], 0, &data->modelData->realVarsData[1285].attribute.start);
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1e_inputNames(DATA *data, char ** names){
  names[0] = (char *) data->modelData->realVarsData[672].info.name;
  names[1] = (char *) data->modelData->realVarsData[675].info.name;
  names[2] = (char *) data->modelData->realVarsData[676].info.name;
  names[3] = (char *) data->modelData->realVarsData[1285].info.name;
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1e_data_function(DATA *data, threadData_t *threadData)
{
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1e_dataReconciliationInputNames(DATA *data, char ** names){
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1e_dataReconciliationUnmeasuredVariables(DATA *data, char ** names)
{
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1e_output_function(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->outputVars[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* M_charge_kg variable */);
  data->simulationInfo->outputVars[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* Q_cond_w variable */);
  data->simulationInfo->outputVars[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* Q_evap_w variable */);
  data->simulationInfo->outputVars[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* T_cond_sat_k variable */);
  data->simulationInfo->outputVars[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* T_evap_sat_k variable */);
  data->simulationInfo->outputVars[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* W_comp_w variable */);
  data->simulationInfo->outputVars[6] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[983]] /* cop variable */);
  data->simulationInfo->outputVars[7] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* m_dot_kg_s variable */);
  data->simulationInfo->outputVars[8] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1258]] /* p_discharge_pa variable */);
  data->simulationInfo->outputVars[9] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* p_lift_pa variable */);
  data->simulationInfo->outputVars[10] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* p_suction_pa variable */);
  data->simulationInfo->outputVars[11] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* res_energy_w variable */);
  data->simulationInfo->outputVars[12] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* res_mass_kg_s variable */);
  data->simulationInfo->outputVars[13] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* res_subcool_k variable */);
  data->simulationInfo->outputVars[14] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* res_superheat_k variable */);
  data->simulationInfo->outputVars[15] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1265]] /* subcooling_k variable */);
  data->simulationInfo->outputVars[16] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* superheat_k variable */);
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1e_setc_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1e_setb_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}


/*
equation index: 745
type: SIMPLE_ASSIGN
comp.V_dot_su = comp.epsilon_v * comp.V_s * comp.N_rot
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,745};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* comp.V_dot_su variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* comp.epsilon_v PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* comp.V_s PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* comp.N_rot variable */)));
  threadData->lastEquationSolved = 745;
}

/*
equation index: 746
type: SIMPLE_ASSIGN
comp.rpm = 60.0 * comp.N_rot
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,746};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* comp.rpm variable */) = (60.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* comp.N_rot variable */));
  threadData->lastEquationSolved = 746;
}

void RefrigerationTrainer_ClosedLoopM1e_eqFunction_747(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_748(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_749(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_750(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_751(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_752(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_753(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_754(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_755(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_756(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_757(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_758(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_759(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_760(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_761(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_762(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_763(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_764(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_765(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_766(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_767(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_768(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_769(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_770(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_771(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_772(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_773(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_774(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_792(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_776(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_777(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_778(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_779(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_780(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_781(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_782(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_783(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_784(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_785(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_786(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_787(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_788(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_789(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_790(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_791(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_775(DATA*, threadData_t*);
/*
equation index: 793
indexNonlinear: 3
type: NONLINEAR

vars: {comp.vaporIn.phase, comp.vaporIn.beta, comp.vaporIn.cv, comp.vaporIn.lambda, comp.vaporIn.ddhp, comp.vaporIn.h, comp.vaporIn.cp, comp.vaporIn.p, comp.vaporIn.T, comp.vaporIn.kappa, comp.vaporIn.a, comp.vaporIn.eta, comp.vaporIn.ddph, cond.Cells[1].hnode_su, comp.rho_su, comp.h_su, comp.s_su}
eqns: {747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 792, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 775}
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,793};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 793 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* comp.vaporIn.phase DISCRETE */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* comp.vaporIn.beta variable */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* comp.vaporIn.cv variable */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* comp.vaporIn.lambda variable */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* comp.vaporIn.ddhp variable */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* comp.vaporIn.h variable */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[6] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* comp.vaporIn.cp variable */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[7] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* comp.vaporIn.p variable */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[8] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[688]] /* comp.vaporIn.T variable */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[9] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* comp.vaporIn.kappa variable */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[10] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* comp.vaporIn.a variable */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[11] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* comp.vaporIn.eta variable */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[12] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* comp.vaporIn.ddph variable */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[13] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[14] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* comp.rho_su variable */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[15] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[16] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* comp.s_su variable */);
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,793};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 793 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* comp.vaporIn.phase DISCRETE */) = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* comp.vaporIn.beta variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* comp.vaporIn.cv variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* comp.vaporIn.lambda variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* comp.vaporIn.ddhp variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* comp.vaporIn.h variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[5];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* comp.vaporIn.cp variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[6];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* comp.vaporIn.p variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[7];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[688]] /* comp.vaporIn.T variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[8];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* comp.vaporIn.kappa variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[9];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* comp.vaporIn.a variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[10];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* comp.vaporIn.eta variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[11];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* comp.vaporIn.ddph variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[12];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[13];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* comp.rho_su variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[14];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[15];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* comp.s_su variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[16];
  threadData->lastEquationSolved = 793;
}

/*
equation index: 794
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794 := RefrigerationTrainer.ClosedLoopM1e.txv.Medium.setState_ph(cond.Cells[1].p, evap.Cells[1].hnode_su, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,794};
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState tmp0;
  tmp0 = omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].hnode_su variable */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.T variable */) = tmp0._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.a variable */) = tmp0._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.beta variable */) = tmp0._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.cp variable */) = tmp0._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[660]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.cv variable */) = tmp0._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.d variable */) = tmp0._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[662]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.ddhp variable */) = tmp0._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.ddph variable */) = tmp0._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.eta variable */) = tmp0._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.h variable */) = tmp0._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.kappa variable */) = tmp0._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.lambda variable */) = tmp0._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[668]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.p variable */) = tmp0._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[25]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.phase variable */) = tmp0._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.s variable */) = tmp0._s;
  ;
  threadData->lastEquationSolved = 794;
}

/*
equation index: 795
type: SIMPLE_ASSIGN
txv.fluidState.T = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,795};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* txv.fluidState.T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.T variable */);
  threadData->lastEquationSolved = 795;
}

/*
equation index: 796
type: SIMPLE_ASSIGN
txv.fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,796};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* txv.fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.a variable */);
  threadData->lastEquationSolved = 796;
}

/*
equation index: 797
type: SIMPLE_ASSIGN
txv.fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,797};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* txv.fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.beta variable */);
  threadData->lastEquationSolved = 797;
}

/*
equation index: 798
type: SIMPLE_ASSIGN
txv.fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,798};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* txv.fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.cp variable */);
  threadData->lastEquationSolved = 798;
}

/*
equation index: 799
type: SIMPLE_ASSIGN
txv.fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,799};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* txv.fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[660]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.cv variable */);
  threadData->lastEquationSolved = 799;
}

/*
equation index: 800
type: SIMPLE_ASSIGN
txv.rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,800};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1283]] /* txv.rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.d variable */);
  threadData->lastEquationSolved = 800;
}

/*
equation index: 801
type: SIMPLE_ASSIGN
txv.fluidState.ddhp = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,801};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* txv.fluidState.ddhp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[662]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.ddhp variable */);
  threadData->lastEquationSolved = 801;
}

/*
equation index: 802
type: SIMPLE_ASSIGN
txv.fluidState.ddph = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,802};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* txv.fluidState.ddph variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.ddph variable */);
  threadData->lastEquationSolved = 802;
}

/*
equation index: 803
type: SIMPLE_ASSIGN
txv.fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,803};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1277]] /* txv.fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.eta variable */);
  threadData->lastEquationSolved = 803;
}

/*
equation index: 804
type: SIMPLE_ASSIGN
txv.fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,804};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* txv.fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.h variable */);
  threadData->lastEquationSolved = 804;
}

/*
equation index: 805
type: SIMPLE_ASSIGN
txv.fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,805};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* txv.fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.kappa variable */);
  threadData->lastEquationSolved = 805;
}

/*
equation index: 806
type: SIMPLE_ASSIGN
txv.fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,806};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* txv.fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.lambda variable */);
  threadData->lastEquationSolved = 806;
}

/*
equation index: 807
type: SIMPLE_ASSIGN
txv.fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,807};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* txv.fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[668]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.p variable */);
  threadData->lastEquationSolved = 807;
}

/*
equation index: 808
type: SIMPLE_ASSIGN
txv.fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,808};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[38]] /* txv.fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[25]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.phase variable */);
  threadData->lastEquationSolved = 808;
}

/*
equation index: 809
type: SIMPLE_ASSIGN
txv.fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,809};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1282]] /* txv.fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState794.s variable */);
  threadData->lastEquationSolved = 809;
}

/*
equation index: 810
type: SIMPLE_ASSIGN
W_comp_w = m_dot_kg_s * (comp.h_ex - comp.h_su)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,810};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* W_comp_w variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* m_dot_kg_s variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* comp.h_ex variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */));
  threadData->lastEquationSolved = 810;
}

/*
equation index: 811
type: SIMPLE_ASSIGN
drive.flange.tau = (-0.15915494309189535) * W_comp_w / comp.N_rot
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,811};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[984]] /* drive.flange.tau variable */) = (-0.15915494309189535) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* W_comp_w variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* comp.N_rot variable */),"comp.N_rot",equationIndexes));
  threadData->lastEquationSolved = 811;
}

/*
equation index: 812
type: SIMPLE_ASSIGN
$cse1 = max(W_comp_w, 1.0)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,812};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[670]] /* $cse1 variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* W_comp_w variable */),1.0);
  threadData->lastEquationSolved = 812;
}

/*
equation index: 813
type: SIMPLE_ASSIGN
cond.Cells[1].M_dot_su = m_dot_kg_s / (*Real*)(cond.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,813};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* cond.Cells[1].M_dot_su variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* m_dot_kg_s variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* cond.Cells[1].Nt PARAM */)),"/*Real*/(cond.Cells[1].Nt)",equationIndexes);
  threadData->lastEquationSolved = 813;
}

/*
equation index: 814
type: SIMPLE_ASSIGN
cond.Cells[1].heatTransfer.U[1] = cond.Cells[1].heatTransfer.Unom * (1e-5 + abs(cond.Cells[1].M_dot_su / cond.Cells[1].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,814};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp1 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* cond.Cells[1].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* cond.Cells[1].heatTransfer.Mdotnom variable */),"cond.Cells[1].heatTransfer.Mdotnom",equationIndexes));
  tmp2 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[822]] /* cond.Cells[1].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[827]] /* cond.Cells[1].heatTransfer.Unom variable */)) * (1e-5 + tmp3);
  threadData->lastEquationSolved = 814;
}

/*
equation index: 815
type: SIMPLE_ASSIGN
evap.Cells[5].M_dot_ex = m_dot_kg_s / (*Real*)(evap.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,815};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* evap.Cells[5].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* m_dot_kg_s variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[5].Nt PARAM */)),"/*Real*/(evap.Cells[5].Nt)",equationIndexes);
  threadData->lastEquationSolved = 815;
}

/*
equation index: 816
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816 := RefrigerationTrainer.ClosedLoopM1e.cond.Cells.Medium.setSat_p(cond.Cells[1].p);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,816};
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties tmp8;
  tmp8 = omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.Tsat variable */) = tmp8._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.dTp variable */) = tmp8._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.ddldp variable */) = tmp8._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.ddvdp variable */) = tmp8._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.dhldp variable */) = tmp8._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.dhvdp variable */) = tmp8._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.dl variable */) = tmp8._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.dv variable */) = tmp8._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.hl variable */) = tmp8._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.hv variable */) = tmp8._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.psat variable */) = tmp8._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.sigma variable */) = tmp8._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.sl variable */) = tmp8._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.sv variable */) = tmp8._sv;
  ;
  threadData->lastEquationSolved = 816;
}

/*
equation index: 817
type: SIMPLE_ASSIGN
cond.Cells[1].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,817};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* cond.Cells[1].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.Tsat variable */);
  threadData->lastEquationSolved = 817;
}

/*
equation index: 818
type: SIMPLE_ASSIGN
cond.Cells[1].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.dTp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,818};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* cond.Cells[1].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.dTp variable */);
  threadData->lastEquationSolved = 818;
}

/*
equation index: 819
type: SIMPLE_ASSIGN
cond.Cells[1].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,819};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[857]] /* cond.Cells[1].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.ddldp variable */);
  threadData->lastEquationSolved = 819;
}

/*
equation index: 820
type: SIMPLE_ASSIGN
cond.Cells[1].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,820};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* cond.Cells[1].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.ddvdp variable */);
  threadData->lastEquationSolved = 820;
}

/*
equation index: 821
type: SIMPLE_ASSIGN
cond.Cells[1].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,821};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* cond.Cells[1].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.dhldp variable */);
  threadData->lastEquationSolved = 821;
}

/*
equation index: 822
type: SIMPLE_ASSIGN
cond.Cells[1].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,822};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[872]] /* cond.Cells[1].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.dhvdp variable */);
  threadData->lastEquationSolved = 822;
}

/*
equation index: 823
type: SIMPLE_ASSIGN
cond.Cells[1].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.dl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,823};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[877]] /* cond.Cells[1].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.dl variable */);
  threadData->lastEquationSolved = 823;
}

/*
equation index: 824
type: SIMPLE_ASSIGN
cond.Cells[1].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.dv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,824};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[882]] /* cond.Cells[1].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.dv variable */);
  threadData->lastEquationSolved = 824;
}

/*
equation index: 825
type: SIMPLE_ASSIGN
cond.Cells[1].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.hl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,825};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* cond.Cells[1].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.hl variable */);
  threadData->lastEquationSolved = 825;
}

/*
equation index: 826
type: SIMPLE_ASSIGN
cond.Cells[1].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.hv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,826};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* cond.Cells[1].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.hv variable */);
  threadData->lastEquationSolved = 826;
}

/*
equation index: 827
type: SIMPLE_ASSIGN
cond.Cells[1].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.psat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,827};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* cond.Cells[1].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.psat variable */);
  threadData->lastEquationSolved = 827;
}

/*
equation index: 828
type: SIMPLE_ASSIGN
cond.Cells[1].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.sigma
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,828};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[892]] /* cond.Cells[1].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.sigma variable */);
  threadData->lastEquationSolved = 828;
}

/*
equation index: 829
type: SIMPLE_ASSIGN
cond.Cells[1].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.sl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,829};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* cond.Cells[1].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.sl variable */);
  threadData->lastEquationSolved = 829;
}

/*
equation index: 830
type: SIMPLE_ASSIGN
cond.Cells[1].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.sv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,830};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* cond.Cells[1].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties816.sv variable */);
  threadData->lastEquationSolved = 830;
}

/*
equation index: 831
type: SIMPLE_ASSIGN
cond.Cells[1].x = (cond.Cells[1].h - cond.Cells[1].h_l) / (cond.Cells[1].h_v - cond.Cells[1].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,831};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* cond.Cells[1].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* cond.Cells[1].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* cond.Cells[1].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* cond.Cells[1].h_l variable */),"cond.Cells[1].h_v - cond.Cells[1].h_l",equationIndexes);
  threadData->lastEquationSolved = 831;
}

/*
equation index: 832
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832 := RefrigerationTrainer.ClosedLoopM1e.cond.Cells.Medium.setState_ph(cond.Cells[1].p, cond.Cells[1].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,832};
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState tmp9;
  tmp9 = omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.T variable */) = tmp9._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.a variable */) = tmp9._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.beta variable */) = tmp9._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.cp variable */) = tmp9._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.cv variable */) = tmp9._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.d variable */) = tmp9._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.ddhp variable */) = tmp9._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.ddph variable */) = tmp9._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.eta variable */) = tmp9._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.h variable */) = tmp9._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.kappa variable */) = tmp9._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.lambda variable */) = tmp9._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.p variable */) = tmp9._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[9]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.phase variable */) = tmp9._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.s variable */) = tmp9._s;
  ;
  threadData->lastEquationSolved = 832;
}

/*
equation index: 833
type: SIMPLE_ASSIGN
cond.Cells[1].T = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,833};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cond.Cells[1].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.T variable */);
  threadData->lastEquationSolved = 833;
}

/*
equation index: 834
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,834};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cond.Cells[1].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.a variable */);
  threadData->lastEquationSolved = 834;
}

/*
equation index: 835
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,835};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cond.Cells[1].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.beta variable */);
  threadData->lastEquationSolved = 835;
}

/*
equation index: 836
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,836};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cond.Cells[1].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.cp variable */);
  threadData->lastEquationSolved = 836;
}

/*
equation index: 837
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,837};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cond.Cells[1].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.cv variable */);
  threadData->lastEquationSolved = 837;
}

/*
equation index: 838
type: SIMPLE_ASSIGN
cond.Cells[1].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,838};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* cond.Cells[1].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.d variable */);
  threadData->lastEquationSolved = 838;
}

/*
equation index: 839
type: SIMPLE_ASSIGN
cond.Cells[1].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,839};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cond.Cells[1].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.ddhp variable */);
  threadData->lastEquationSolved = 839;
}

/*
equation index: 840
type: SIMPLE_ASSIGN
cond.Cells[1].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,840};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* cond.Cells[1].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.ddph variable */);
  threadData->lastEquationSolved = 840;
}

/*
equation index: 841
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,841};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* cond.Cells[1].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.eta variable */);
  threadData->lastEquationSolved = 841;
}

/*
equation index: 842
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,842};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* cond.Cells[1].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.h variable */);
  threadData->lastEquationSolved = 842;
}

/*
equation index: 843
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,843};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* cond.Cells[1].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.kappa variable */);
  threadData->lastEquationSolved = 843;
}

/*
equation index: 844
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,844};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* cond.Cells[1].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.lambda variable */);
  threadData->lastEquationSolved = 844;
}

/*
equation index: 845
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,845};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cond.Cells[1].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.p variable */);
  threadData->lastEquationSolved = 845;
}

/*
equation index: 846
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,846};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[28]] /* cond.Cells[1].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[9]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.phase variable */);
  threadData->lastEquationSolved = 846;
}

/*
equation index: 847
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,847};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* cond.Cells[1].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState832.s variable */);
  threadData->lastEquationSolved = 847;
}

/*
equation index: 848
type: SIMPLE_ASSIGN
cond.Cells[1].M_tot = cond.Cells[1].Vi * cond.Cells[1].rho
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,848};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cond.Cells[1].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* cond.Cells[1].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* cond.Cells[1].rho variable */));
  threadData->lastEquationSolved = 848;
}

/*
equation index: 849
type: SIMPLE_ASSIGN
cond.Cells[1].qdot = cond.Cells[1].heatTransfer.U[1] * (T_amb_k - cond.Cells[1].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,849};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[837]] /* cond.Cells[1].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[822]] /* cond.Cells[1].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* T_amb_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cond.Cells[1].T variable */));
  threadData->lastEquationSolved = 849;
}

/*
equation index: 850
type: SIMPLE_ASSIGN
cond.Cells[1].Q_tot = cond.Cells[1].Ai * cond.Cells[1].qdot
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,850};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cond.Cells[1].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* cond.Cells[1].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[837]] /* cond.Cells[1].qdot variable */));
  threadData->lastEquationSolved = 850;
}

/*
equation index: 851
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851 := RefrigerationTrainer.ClosedLoopM1e.cond.Cells.Medium.setSat_p(cond.Cells[1].p);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,851};
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties tmp10;
  tmp10 = omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.Tsat variable */) = tmp10._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.dTp variable */) = tmp10._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.ddldp variable */) = tmp10._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.ddvdp variable */) = tmp10._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.dhldp variable */) = tmp10._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.dhvdp variable */) = tmp10._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.dl variable */) = tmp10._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.dv variable */) = tmp10._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.hl variable */) = tmp10._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.hv variable */) = tmp10._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.psat variable */) = tmp10._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.sigma variable */) = tmp10._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.sl variable */) = tmp10._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.sv variable */) = tmp10._sv;
  ;
  threadData->lastEquationSolved = 851;
}

/*
equation index: 852
type: SIMPLE_ASSIGN
cond.Cells[2].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,852};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[848]] /* cond.Cells[2].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.Tsat variable */);
  threadData->lastEquationSolved = 852;
}

/*
equation index: 853
type: SIMPLE_ASSIGN
cond.Cells[2].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.dTp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,853};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[853]] /* cond.Cells[2].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.dTp variable */);
  threadData->lastEquationSolved = 853;
}

/*
equation index: 854
type: SIMPLE_ASSIGN
cond.Cells[2].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,854};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[858]] /* cond.Cells[2].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.ddldp variable */);
  threadData->lastEquationSolved = 854;
}

/*
equation index: 855
type: SIMPLE_ASSIGN
cond.Cells[2].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,855};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[863]] /* cond.Cells[2].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.ddvdp variable */);
  threadData->lastEquationSolved = 855;
}

/*
equation index: 856
type: SIMPLE_ASSIGN
cond.Cells[2].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,856};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[868]] /* cond.Cells[2].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.dhldp variable */);
  threadData->lastEquationSolved = 856;
}

/*
equation index: 857
type: SIMPLE_ASSIGN
cond.Cells[2].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,857};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[873]] /* cond.Cells[2].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.dhvdp variable */);
  threadData->lastEquationSolved = 857;
}

/*
equation index: 858
type: SIMPLE_ASSIGN
cond.Cells[2].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.dl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,858};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[878]] /* cond.Cells[2].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.dl variable */);
  threadData->lastEquationSolved = 858;
}

/*
equation index: 859
type: SIMPLE_ASSIGN
cond.Cells[2].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.dv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,859};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* cond.Cells[2].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.dv variable */);
  threadData->lastEquationSolved = 859;
}

/*
equation index: 860
type: SIMPLE_ASSIGN
cond.Cells[2].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.hl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,860};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* cond.Cells[2].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.hl variable */);
  threadData->lastEquationSolved = 860;
}

/*
equation index: 861
type: SIMPLE_ASSIGN
cond.Cells[2].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.hv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,861};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* cond.Cells[2].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.hv variable */);
  threadData->lastEquationSolved = 861;
}

/*
equation index: 862
type: SIMPLE_ASSIGN
cond.Cells[2].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.psat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,862};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[888]] /* cond.Cells[2].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.psat variable */);
  threadData->lastEquationSolved = 862;
}

/*
equation index: 863
type: SIMPLE_ASSIGN
cond.Cells[2].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.sigma
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,863};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* cond.Cells[2].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.sigma variable */);
  threadData->lastEquationSolved = 863;
}

/*
equation index: 864
type: SIMPLE_ASSIGN
cond.Cells[2].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.sl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,864};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* cond.Cells[2].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.sl variable */);
  threadData->lastEquationSolved = 864;
}

/*
equation index: 865
type: SIMPLE_ASSIGN
cond.Cells[2].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.sv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,865};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* cond.Cells[2].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties851.sv variable */);
  threadData->lastEquationSolved = 865;
}

/*
equation index: 866
type: SIMPLE_ASSIGN
cond.Cells[2].x = (cond.Cells[2].h - cond.Cells[2].h_l) / (cond.Cells[2].h_v - cond.Cells[2].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,866};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[978]] /* cond.Cells[2].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* cond.Cells[2].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* cond.Cells[2].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* cond.Cells[2].h_l variable */),"cond.Cells[2].h_v - cond.Cells[2].h_l",equationIndexes);
  threadData->lastEquationSolved = 866;
}

/*
equation index: 867
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867 := RefrigerationTrainer.ClosedLoopM1e.cond.Cells.Medium.setState_ph(cond.Cells[1].p, cond.Cells[2].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,867};
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState tmp11;
  tmp11 = omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.T variable */) = tmp11._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.a variable */) = tmp11._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.beta variable */) = tmp11._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.cp variable */) = tmp11._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.cv variable */) = tmp11._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.d variable */) = tmp11._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.ddhp variable */) = tmp11._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.ddph variable */) = tmp11._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.eta variable */) = tmp11._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.h variable */) = tmp11._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.kappa variable */) = tmp11._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.lambda variable */) = tmp11._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.p variable */) = tmp11._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[10]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.phase variable */) = tmp11._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.s variable */) = tmp11._s;
  ;
  threadData->lastEquationSolved = 867;
}

/*
equation index: 868
type: SIMPLE_ASSIGN
cond.Cells[2].T = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,868};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cond.Cells[2].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.T variable */);
  threadData->lastEquationSolved = 868;
}

/*
equation index: 869
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,869};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cond.Cells[2].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.a variable */);
  threadData->lastEquationSolved = 869;
}

/*
equation index: 870
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,870};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cond.Cells[2].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.beta variable */);
  threadData->lastEquationSolved = 870;
}

/*
equation index: 871
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,871};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cond.Cells[2].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.cp variable */);
  threadData->lastEquationSolved = 871;
}

/*
equation index: 872
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,872};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cond.Cells[2].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.cv variable */);
  threadData->lastEquationSolved = 872;
}

/*
equation index: 873
type: SIMPLE_ASSIGN
cond.Cells[2].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,873};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* cond.Cells[2].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.d variable */);
  threadData->lastEquationSolved = 873;
}

/*
equation index: 874
type: SIMPLE_ASSIGN
cond.Cells[2].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,874};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cond.Cells[2].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.ddhp variable */);
  threadData->lastEquationSolved = 874;
}

/*
equation index: 875
type: SIMPLE_ASSIGN
cond.Cells[2].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,875};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cond.Cells[2].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.ddph variable */);
  threadData->lastEquationSolved = 875;
}

/*
equation index: 876
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,876};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* cond.Cells[2].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.eta variable */);
  threadData->lastEquationSolved = 876;
}

/*
equation index: 877
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,877};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* cond.Cells[2].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.h variable */);
  threadData->lastEquationSolved = 877;
}

/*
equation index: 878
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,878};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* cond.Cells[2].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.kappa variable */);
  threadData->lastEquationSolved = 878;
}

/*
equation index: 879
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,879};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* cond.Cells[2].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.lambda variable */);
  threadData->lastEquationSolved = 879;
}

/*
equation index: 880
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,880};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cond.Cells[2].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.p variable */);
  threadData->lastEquationSolved = 880;
}

/*
equation index: 881
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,881};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[29]] /* cond.Cells[2].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[10]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.phase variable */);
  threadData->lastEquationSolved = 881;
}

/*
equation index: 882
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,882};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* cond.Cells[2].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState867.s variable */);
  threadData->lastEquationSolved = 882;
}

/*
equation index: 883
type: SIMPLE_ASSIGN
cond.Cells[2].M_tot = cond.Cells[2].Vi * cond.Cells[2].rho
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,883};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cond.Cells[2].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* cond.Cells[2].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* cond.Cells[2].rho variable */));
  threadData->lastEquationSolved = 883;
}

/*
equation index: 884
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884 := RefrigerationTrainer.ClosedLoopM1e.cond.Cells.Medium.setSat_p(cond.Cells[1].p);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,884};
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties tmp12;
  tmp12 = omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.Tsat variable */) = tmp12._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.dTp variable */) = tmp12._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.ddldp variable */) = tmp12._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.ddvdp variable */) = tmp12._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.dhldp variable */) = tmp12._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.dhvdp variable */) = tmp12._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.dl variable */) = tmp12._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.dv variable */) = tmp12._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.hl variable */) = tmp12._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.hv variable */) = tmp12._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.psat variable */) = tmp12._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.sigma variable */) = tmp12._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.sl variable */) = tmp12._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.sv variable */) = tmp12._sv;
  ;
  threadData->lastEquationSolved = 884;
}

/*
equation index: 885
type: SIMPLE_ASSIGN
cond.Cells[3].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,885};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[849]] /* cond.Cells[3].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.Tsat variable */);
  threadData->lastEquationSolved = 885;
}

/*
equation index: 886
type: SIMPLE_ASSIGN
cond.Cells[3].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.dTp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,886};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[854]] /* cond.Cells[3].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.dTp variable */);
  threadData->lastEquationSolved = 886;
}

/*
equation index: 887
type: SIMPLE_ASSIGN
cond.Cells[3].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,887};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[859]] /* cond.Cells[3].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.ddldp variable */);
  threadData->lastEquationSolved = 887;
}

/*
equation index: 888
type: SIMPLE_ASSIGN
cond.Cells[3].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,888};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[864]] /* cond.Cells[3].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.ddvdp variable */);
  threadData->lastEquationSolved = 888;
}

/*
equation index: 889
type: SIMPLE_ASSIGN
cond.Cells[3].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,889};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[869]] /* cond.Cells[3].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.dhldp variable */);
  threadData->lastEquationSolved = 889;
}

/*
equation index: 890
type: SIMPLE_ASSIGN
cond.Cells[3].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,890};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[874]] /* cond.Cells[3].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.dhvdp variable */);
  threadData->lastEquationSolved = 890;
}

/*
equation index: 891
type: SIMPLE_ASSIGN
cond.Cells[3].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.dl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,891};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[879]] /* cond.Cells[3].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.dl variable */);
  threadData->lastEquationSolved = 891;
}

/*
equation index: 892
type: SIMPLE_ASSIGN
cond.Cells[3].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.dv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,892};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[884]] /* cond.Cells[3].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.dv variable */);
  threadData->lastEquationSolved = 892;
}

/*
equation index: 893
type: SIMPLE_ASSIGN
cond.Cells[3].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.hl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,893};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* cond.Cells[3].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.hl variable */);
  threadData->lastEquationSolved = 893;
}

/*
equation index: 894
type: SIMPLE_ASSIGN
cond.Cells[3].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.hv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,894};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* cond.Cells[3].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.hv variable */);
  threadData->lastEquationSolved = 894;
}

/*
equation index: 895
type: SIMPLE_ASSIGN
cond.Cells[3].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.psat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,895};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* cond.Cells[3].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.psat variable */);
  threadData->lastEquationSolved = 895;
}

/*
equation index: 896
type: SIMPLE_ASSIGN
cond.Cells[3].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.sigma
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,896};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* cond.Cells[3].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.sigma variable */);
  threadData->lastEquationSolved = 896;
}

/*
equation index: 897
type: SIMPLE_ASSIGN
cond.Cells[3].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.sl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,897};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* cond.Cells[3].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.sl variable */);
  threadData->lastEquationSolved = 897;
}

/*
equation index: 898
type: SIMPLE_ASSIGN
cond.Cells[3].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.sv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,898};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* cond.Cells[3].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties884.sv variable */);
  threadData->lastEquationSolved = 898;
}

/*
equation index: 899
type: SIMPLE_ASSIGN
cond.Cells[3].x = (cond.Cells[3].h - cond.Cells[3].h_l) / (cond.Cells[3].h_v - cond.Cells[3].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,899};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[979]] /* cond.Cells[3].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* cond.Cells[3].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* cond.Cells[3].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* cond.Cells[3].h_l variable */),"cond.Cells[3].h_v - cond.Cells[3].h_l",equationIndexes);
  threadData->lastEquationSolved = 899;
}

/*
equation index: 900
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900 := RefrigerationTrainer.ClosedLoopM1e.cond.Cells.Medium.setState_ph(cond.Cells[1].p, cond.Cells[3].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,900};
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState tmp13;
  tmp13 = omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.T variable */) = tmp13._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.a variable */) = tmp13._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.beta variable */) = tmp13._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.cp variable */) = tmp13._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.cv variable */) = tmp13._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.d variable */) = tmp13._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.ddhp variable */) = tmp13._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.ddph variable */) = tmp13._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.eta variable */) = tmp13._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.h variable */) = tmp13._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[330]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.kappa variable */) = tmp13._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.lambda variable */) = tmp13._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.p variable */) = tmp13._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[11]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.phase variable */) = tmp13._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.s variable */) = tmp13._s;
  ;
  threadData->lastEquationSolved = 900;
}

/*
equation index: 901
type: SIMPLE_ASSIGN
cond.Cells[3].T = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,901};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[739]] /* cond.Cells[3].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.T variable */);
  threadData->lastEquationSolved = 901;
}

/*
equation index: 902
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,902};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cond.Cells[3].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.a variable */);
  threadData->lastEquationSolved = 902;
}

/*
equation index: 903
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,903};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cond.Cells[3].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.beta variable */);
  threadData->lastEquationSolved = 903;
}

/*
equation index: 904
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,904};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cond.Cells[3].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.cp variable */);
  threadData->lastEquationSolved = 904;
}

/*
equation index: 905
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,905};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cond.Cells[3].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.cv variable */);
  threadData->lastEquationSolved = 905;
}

/*
equation index: 906
type: SIMPLE_ASSIGN
cond.Cells[3].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,906};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[844]] /* cond.Cells[3].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.d variable */);
  threadData->lastEquationSolved = 906;
}

/*
equation index: 907
type: SIMPLE_ASSIGN
cond.Cells[3].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,907};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cond.Cells[3].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.ddhp variable */);
  threadData->lastEquationSolved = 907;
}

/*
equation index: 908
type: SIMPLE_ASSIGN
cond.Cells[3].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,908};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cond.Cells[3].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.ddph variable */);
  threadData->lastEquationSolved = 908;
}

/*
equation index: 909
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,909};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[779]] /* cond.Cells[3].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.eta variable */);
  threadData->lastEquationSolved = 909;
}

/*
equation index: 910
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,910};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[784]] /* cond.Cells[3].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.h variable */);
  threadData->lastEquationSolved = 910;
}

/*
equation index: 911
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,911};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cond.Cells[3].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[330]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.kappa variable */);
  threadData->lastEquationSolved = 911;
}

/*
equation index: 912
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,912};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* cond.Cells[3].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.lambda variable */);
  threadData->lastEquationSolved = 912;
}

/*
equation index: 913
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,913};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cond.Cells[3].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.p variable */);
  threadData->lastEquationSolved = 913;
}

/*
equation index: 914
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,914};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[30]] /* cond.Cells[3].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[11]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.phase variable */);
  threadData->lastEquationSolved = 914;
}

/*
equation index: 915
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,915};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* cond.Cells[3].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState900.s variable */);
  threadData->lastEquationSolved = 915;
}

/*
equation index: 916
type: SIMPLE_ASSIGN
cond.Cells[3].M_tot = cond.Cells[3].Vi * cond.Cells[3].rho
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,916};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cond.Cells[3].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* cond.Cells[3].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[844]] /* cond.Cells[3].rho variable */));
  threadData->lastEquationSolved = 916;
}

/*
equation index: 917
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917 := RefrigerationTrainer.ClosedLoopM1e.cond.Cells.Medium.setSat_p(cond.Cells[1].p);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,917};
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties tmp14;
  tmp14 = omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.Tsat variable */) = tmp14._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[195]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.dTp variable */) = tmp14._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.ddldp variable */) = tmp14._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.ddvdp variable */) = tmp14._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.dhldp variable */) = tmp14._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.dhvdp variable */) = tmp14._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.dl variable */) = tmp14._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.dv variable */) = tmp14._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.hl variable */) = tmp14._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.hv variable */) = tmp14._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.psat variable */) = tmp14._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.sigma variable */) = tmp14._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[206]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.sl variable */) = tmp14._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[207]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.sv variable */) = tmp14._sv;
  ;
  threadData->lastEquationSolved = 917;
}

/*
equation index: 918
type: SIMPLE_ASSIGN
cond.Cells[4].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,918};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* cond.Cells[4].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.Tsat variable */);
  threadData->lastEquationSolved = 918;
}

/*
equation index: 919
type: SIMPLE_ASSIGN
cond.Cells[4].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.dTp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,919};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[855]] /* cond.Cells[4].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[195]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.dTp variable */);
  threadData->lastEquationSolved = 919;
}

/*
equation index: 920
type: SIMPLE_ASSIGN
cond.Cells[4].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,920};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[860]] /* cond.Cells[4].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.ddldp variable */);
  threadData->lastEquationSolved = 920;
}

/*
equation index: 921
type: SIMPLE_ASSIGN
cond.Cells[4].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,921};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* cond.Cells[4].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.ddvdp variable */);
  threadData->lastEquationSolved = 921;
}

/*
equation index: 922
type: SIMPLE_ASSIGN
cond.Cells[4].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,922};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[870]] /* cond.Cells[4].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.dhldp variable */);
  threadData->lastEquationSolved = 922;
}

/*
equation index: 923
type: SIMPLE_ASSIGN
cond.Cells[4].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,923};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[875]] /* cond.Cells[4].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.dhvdp variable */);
  threadData->lastEquationSolved = 923;
}

/*
equation index: 924
type: SIMPLE_ASSIGN
cond.Cells[4].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.dl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,924};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[880]] /* cond.Cells[4].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.dl variable */);
  threadData->lastEquationSolved = 924;
}

/*
equation index: 925
type: SIMPLE_ASSIGN
cond.Cells[4].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.dv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,925};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[885]] /* cond.Cells[4].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.dv variable */);
  threadData->lastEquationSolved = 925;
}

/*
equation index: 926
type: SIMPLE_ASSIGN
cond.Cells[4].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.hl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,926};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* cond.Cells[4].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.hl variable */);
  threadData->lastEquationSolved = 926;
}

/*
equation index: 927
type: SIMPLE_ASSIGN
cond.Cells[4].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.hv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,927};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* cond.Cells[4].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.hv variable */);
  threadData->lastEquationSolved = 927;
}

/*
equation index: 928
type: SIMPLE_ASSIGN
cond.Cells[4].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.psat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,928};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[890]] /* cond.Cells[4].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.psat variable */);
  threadData->lastEquationSolved = 928;
}

/*
equation index: 929
type: SIMPLE_ASSIGN
cond.Cells[4].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.sigma
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,929};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* cond.Cells[4].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.sigma variable */);
  threadData->lastEquationSolved = 929;
}

/*
equation index: 930
type: SIMPLE_ASSIGN
cond.Cells[4].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.sl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,930};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* cond.Cells[4].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[206]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.sl variable */);
  threadData->lastEquationSolved = 930;
}

/*
equation index: 931
type: SIMPLE_ASSIGN
cond.Cells[4].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.sv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,931};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* cond.Cells[4].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[207]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties917.sv variable */);
  threadData->lastEquationSolved = 931;
}

/*
equation index: 932
type: SIMPLE_ASSIGN
cond.Cells[4].x = (cond.Cells[4].h - cond.Cells[4].h_l) / (cond.Cells[4].h_v - cond.Cells[4].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,932};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[980]] /* cond.Cells[4].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* cond.Cells[4].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* cond.Cells[4].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* cond.Cells[4].h_l variable */),"cond.Cells[4].h_v - cond.Cells[4].h_l",equationIndexes);
  threadData->lastEquationSolved = 932;
}

/*
equation index: 933
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933 := RefrigerationTrainer.ClosedLoopM1e.cond.Cells.Medium.setState_ph(cond.Cells[1].p, cond.Cells[4].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,933};
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState tmp15;
  tmp15 = omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.T variable */) = tmp15._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.a variable */) = tmp15._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.beta variable */) = tmp15._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.cp variable */) = tmp15._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.cv variable */) = tmp15._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.d variable */) = tmp15._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.ddhp variable */) = tmp15._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.ddph variable */) = tmp15._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.eta variable */) = tmp15._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.h variable */) = tmp15._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.kappa variable */) = tmp15._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.lambda variable */) = tmp15._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.p variable */) = tmp15._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[12]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.phase variable */) = tmp15._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.s variable */) = tmp15._s;
  ;
  threadData->lastEquationSolved = 933;
}

/*
equation index: 934
type: SIMPLE_ASSIGN
cond.Cells[4].T = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,934};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cond.Cells[4].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.T variable */);
  threadData->lastEquationSolved = 934;
}

/*
equation index: 935
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,935};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cond.Cells[4].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.a variable */);
  threadData->lastEquationSolved = 935;
}

/*
equation index: 936
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,936};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cond.Cells[4].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.beta variable */);
  threadData->lastEquationSolved = 936;
}

/*
equation index: 937
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,937};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cond.Cells[4].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.cp variable */);
  threadData->lastEquationSolved = 937;
}

/*
equation index: 938
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,938};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cond.Cells[4].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.cv variable */);
  threadData->lastEquationSolved = 938;
}

/*
equation index: 939
type: SIMPLE_ASSIGN
cond.Cells[4].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,939};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* cond.Cells[4].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.d variable */);
  threadData->lastEquationSolved = 939;
}

/*
equation index: 940
type: SIMPLE_ASSIGN
cond.Cells[4].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,940};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* cond.Cells[4].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.ddhp variable */);
  threadData->lastEquationSolved = 940;
}

/*
equation index: 941
type: SIMPLE_ASSIGN
cond.Cells[4].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,941};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cond.Cells[4].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.ddph variable */);
  threadData->lastEquationSolved = 941;
}

/*
equation index: 942
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,942};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* cond.Cells[4].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.eta variable */);
  threadData->lastEquationSolved = 942;
}

/*
equation index: 943
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,943};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* cond.Cells[4].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.h variable */);
  threadData->lastEquationSolved = 943;
}

/*
equation index: 944
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,944};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[790]] /* cond.Cells[4].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.kappa variable */);
  threadData->lastEquationSolved = 944;
}

/*
equation index: 945
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,945};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* cond.Cells[4].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.lambda variable */);
  threadData->lastEquationSolved = 945;
}

/*
equation index: 946
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,946};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* cond.Cells[4].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.p variable */);
  threadData->lastEquationSolved = 946;
}

/*
equation index: 947
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,947};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[31]] /* cond.Cells[4].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[12]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.phase variable */);
  threadData->lastEquationSolved = 947;
}

/*
equation index: 948
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,948};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cond.Cells[4].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState933.s variable */);
  threadData->lastEquationSolved = 948;
}

/*
equation index: 949
type: SIMPLE_ASSIGN
cond.Cells[4].M_tot = cond.Cells[4].Vi * cond.Cells[4].rho
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,949};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cond.Cells[4].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* cond.Cells[4].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* cond.Cells[4].rho variable */));
  threadData->lastEquationSolved = 949;
}

/*
equation index: 950
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950 := RefrigerationTrainer.ClosedLoopM1e.cond.Cells.Medium.setSat_p(cond.Cells[1].p);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,950};
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties tmp16;
  tmp16 = omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[208]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.Tsat variable */) = tmp16._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.dTp variable */) = tmp16._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.ddldp variable */) = tmp16._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.ddvdp variable */) = tmp16._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[212]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.dhldp variable */) = tmp16._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.dhvdp variable */) = tmp16._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.dl variable */) = tmp16._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.dv variable */) = tmp16._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.hl variable */) = tmp16._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.hv variable */) = tmp16._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.psat variable */) = tmp16._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.sigma variable */) = tmp16._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.sl variable */) = tmp16._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.sv variable */) = tmp16._sv;
  ;
  threadData->lastEquationSolved = 950;
}

/*
equation index: 951
type: SIMPLE_ASSIGN
cond.Cells[5].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,951};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* cond.Cells[5].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[208]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.Tsat variable */);
  threadData->lastEquationSolved = 951;
}

/*
equation index: 952
type: SIMPLE_ASSIGN
cond.Cells[5].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.dTp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,952};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[856]] /* cond.Cells[5].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.dTp variable */);
  threadData->lastEquationSolved = 952;
}

/*
equation index: 953
type: SIMPLE_ASSIGN
cond.Cells[5].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,953};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[861]] /* cond.Cells[5].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.ddldp variable */);
  threadData->lastEquationSolved = 953;
}

/*
equation index: 954
type: SIMPLE_ASSIGN
cond.Cells[5].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,954};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[866]] /* cond.Cells[5].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.ddvdp variable */);
  threadData->lastEquationSolved = 954;
}

/*
equation index: 955
type: SIMPLE_ASSIGN
cond.Cells[5].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,955};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[871]] /* cond.Cells[5].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[212]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.dhldp variable */);
  threadData->lastEquationSolved = 955;
}

/*
equation index: 956
type: SIMPLE_ASSIGN
cond.Cells[5].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,956};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[876]] /* cond.Cells[5].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.dhvdp variable */);
  threadData->lastEquationSolved = 956;
}

/*
equation index: 957
type: SIMPLE_ASSIGN
cond.Cells[5].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.dl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,957};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* cond.Cells[5].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.dl variable */);
  threadData->lastEquationSolved = 957;
}

/*
equation index: 958
type: SIMPLE_ASSIGN
cond.Cells[5].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.dv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,958};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[886]] /* cond.Cells[5].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.dv variable */);
  threadData->lastEquationSolved = 958;
}

/*
equation index: 959
type: SIMPLE_ASSIGN
cond.Cells[5].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.hl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,959};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* cond.Cells[5].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.hl variable */);
  threadData->lastEquationSolved = 959;
}

/*
equation index: 960
type: SIMPLE_ASSIGN
cond.Cells[5].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.hv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,960};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* cond.Cells[5].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.hv variable */);
  threadData->lastEquationSolved = 960;
}

/*
equation index: 961
type: SIMPLE_ASSIGN
cond.Cells[5].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.psat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,961};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* cond.Cells[5].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.psat variable */);
  threadData->lastEquationSolved = 961;
}

/*
equation index: 962
type: SIMPLE_ASSIGN
cond.Cells[5].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.sigma
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,962};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* cond.Cells[5].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.sigma variable */);
  threadData->lastEquationSolved = 962;
}

/*
equation index: 963
type: SIMPLE_ASSIGN
cond.Cells[5].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.sl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,963};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* cond.Cells[5].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.sl variable */);
  threadData->lastEquationSolved = 963;
}

/*
equation index: 964
type: SIMPLE_ASSIGN
cond.Cells[5].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.sv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,964};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[906]] /* cond.Cells[5].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties950.sv variable */);
  threadData->lastEquationSolved = 964;
}

/*
equation index: 965
type: SIMPLE_ASSIGN
cond.Cells[5].x = (cond.Cells[5].h - cond.Cells[5].h_l) / (cond.Cells[5].h_v - cond.Cells[5].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,965};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* cond.Cells[5].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* cond.Cells[5].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* cond.Cells[5].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* cond.Cells[5].h_l variable */),"cond.Cells[5].h_v - cond.Cells[5].h_l",equationIndexes);
  threadData->lastEquationSolved = 965;
}

/*
equation index: 966
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966 := RefrigerationTrainer.ClosedLoopM1e.cond.Cells.Medium.setState_ph(cond.Cells[1].p, cond.Cells[5].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,966};
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState tmp17;
  tmp17 = omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.T variable */) = tmp17._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[349]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.a variable */) = tmp17._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[350]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.beta variable */) = tmp17._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[351]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.cp variable */) = tmp17._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[352]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.cv variable */) = tmp17._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.d variable */) = tmp17._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.ddhp variable */) = tmp17._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.ddph variable */) = tmp17._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[356]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.eta variable */) = tmp17._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.h variable */) = tmp17._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.kappa variable */) = tmp17._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[359]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.lambda variable */) = tmp17._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[360]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.p variable */) = tmp17._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[13]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.phase variable */) = tmp17._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[361]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.s variable */) = tmp17._s;
  ;
  threadData->lastEquationSolved = 966;
}

/*
equation index: 967
type: SIMPLE_ASSIGN
cond.Cells[5].T = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,967};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cond.Cells[5].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.T variable */);
  threadData->lastEquationSolved = 967;
}

/*
equation index: 968
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,968};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cond.Cells[5].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[349]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.a variable */);
  threadData->lastEquationSolved = 968;
}

/*
equation index: 969
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,969};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cond.Cells[5].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[350]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.beta variable */);
  threadData->lastEquationSolved = 969;
}

/*
equation index: 970
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,970};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* cond.Cells[5].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[351]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.cp variable */);
  threadData->lastEquationSolved = 970;
}

/*
equation index: 971
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,971};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* cond.Cells[5].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[352]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.cv variable */);
  threadData->lastEquationSolved = 971;
}

/*
equation index: 972
type: SIMPLE_ASSIGN
cond.Cells[5].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,972};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* cond.Cells[5].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.d variable */);
  threadData->lastEquationSolved = 972;
}

/*
equation index: 973
type: SIMPLE_ASSIGN
cond.Cells[5].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,973};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cond.Cells[5].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.ddhp variable */);
  threadData->lastEquationSolved = 973;
}

/*
equation index: 974
type: SIMPLE_ASSIGN
cond.Cells[5].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,974};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cond.Cells[5].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.ddph variable */);
  threadData->lastEquationSolved = 974;
}

/*
equation index: 975
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,975};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[781]] /* cond.Cells[5].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[356]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.eta variable */);
  threadData->lastEquationSolved = 975;
}

/*
equation index: 976
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,976};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cond.Cells[5].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.h variable */);
  threadData->lastEquationSolved = 976;
}

/*
equation index: 977
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,977};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* cond.Cells[5].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.kappa variable */);
  threadData->lastEquationSolved = 977;
}

/*
equation index: 978
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,978};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cond.Cells[5].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[359]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.lambda variable */);
  threadData->lastEquationSolved = 978;
}

/*
equation index: 979
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,979};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* cond.Cells[5].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[360]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.p variable */);
  threadData->lastEquationSolved = 979;
}

/*
equation index: 980
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,980};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[32]] /* cond.Cells[5].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[13]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.phase variable */);
  threadData->lastEquationSolved = 980;
}

/*
equation index: 981
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,981};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* cond.Cells[5].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[361]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState966.s variable */);
  threadData->lastEquationSolved = 981;
}

/*
equation index: 982
type: SIMPLE_ASSIGN
cond.Cells[5].M_tot = cond.Cells[5].Vi * cond.Cells[5].rho
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,982};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cond.Cells[5].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* cond.Cells[5].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* cond.Cells[5].rho variable */));
  threadData->lastEquationSolved = 982;
}

/*
equation index: 983
type: SIMPLE_ASSIGN
cond.M_tot = (*Real*)(cond.Nt) * (cond.Cells[1].M_tot + cond.Cells[2].M_tot + cond.Cells[3].M_tot + cond.Cells[4].M_tot + cond.Cells[5].M_tot)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,983};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[982]] /* cond.M_tot variable */) = (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[18]] /* cond.Nt PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cond.Cells[1].M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cond.Cells[2].M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cond.Cells[3].M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cond.Cells[4].M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cond.Cells[5].M_tot variable */));
  threadData->lastEquationSolved = 983;
}

/*
equation index: 984
type: SIMPLE_ASSIGN
txv.A = txv.Afull * txv_opening_frac
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,984};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1267]] /* txv.A variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* txv.Afull PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* txv_opening_frac variable */));
  threadData->lastEquationSolved = 984;
}

/*
equation index: 985
type: SIMPLE_ASSIGN
p_lift_pa = cond.Cells[1].p - evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,985};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* p_lift_pa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */);
  threadData->lastEquationSolved = 985;
}

/*
equation index: 986
type: SIMPLE_ASSIGN
txv.Mdot = 1.4142135623730951 * txv.A * sqrt(txv.rho) * smooth(1, if noEvent(p_lift_pa > txv.DELTAp_0) then sqrt(p_lift_pa) else if noEvent(p_lift_pa < (-txv.DELTAp_0)) then -sqrt(-p_lift_pa) else 0.25 * sqrt(txv.DELTAp_0) * p_lift_pa / txv.DELTAp_0 * (5.0 - (p_lift_pa / txv.DELTAp_0) ^ 2.0))
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,986};
  modelica_real tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  tmp18 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1283]] /* txv.rho variable */);
  if(!(tmp18 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(txv.rho) was %g should be >= 0", tmp18);
    }
  }tmp19 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* p_lift_pa variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* txv.DELTAp_0 PARAM */));
  tmp27 = (modelica_boolean)tmp19;
  if(tmp27)
  {
    tmp20 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* p_lift_pa variable */);
    if(!(tmp20 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(p_lift_pa) was %g should be >= 0", tmp20);
      }
    }
    tmp28 = sqrt(tmp20);
  }
  else
  {
    tmp21 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* p_lift_pa variable */),(-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* txv.DELTAp_0 PARAM */)));
    tmp25 = (modelica_boolean)tmp21;
    if(tmp25)
    {
      tmp22 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* p_lift_pa variable */));
      if(!(tmp22 >= 0.0))
      {
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"",0,0,0,0,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(-p_lift_pa) was %g should be >= 0", tmp22);
        }
      }
      tmp26 = (-sqrt(tmp22));
    }
    else
    {
      tmp23 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* txv.DELTAp_0 PARAM */);
      if(!(tmp23 >= 0.0))
      {
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"",0,0,0,0,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(txv.DELTAp_0) was %g should be >= 0", tmp23);
        }
      }tmp24 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* p_lift_pa variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* txv.DELTAp_0 PARAM */),"txv.DELTAp_0",equationIndexes);
      tmp26 = ((0.25) * ((sqrt(tmp23)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* p_lift_pa variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* txv.DELTAp_0 PARAM */),"txv.DELTAp_0",equationIndexes)))) * (5.0 - ((tmp24 * tmp24)));
    }
    tmp28 = tmp26;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* txv.Mdot variable */) = (1.4142135623730951) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1267]] /* txv.A variable */)) * ((sqrt(tmp18)) * (tmp28)));
  threadData->lastEquationSolved = 986;
}

/*
equation index: 987
type: SIMPLE_ASSIGN
cond.Cells[5].M_dot_ex = txv.Mdot / (*Real*)(cond.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,987};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* cond.Cells[5].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* txv.Mdot variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[5].Nt PARAM */)),"/*Real*/(cond.Cells[5].Nt)",equationIndexes);
  threadData->lastEquationSolved = 987;
}

void RefrigerationTrainer_ClosedLoopM1e_eqFunction_988(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_989(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_990(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_991(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_992(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_993(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_994(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_995(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_996(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_997(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_998(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_999(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1000(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1001(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1002(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1003(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1004(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1005(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1006(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1007(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1008(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1009(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1010(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1011(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1012(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1013(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1014(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1015(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1016(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1022(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1021(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1020(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1019(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1018(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1017(DATA*, threadData_t*);
/*
equation index: 1057
indexNonlinear: 4
type: NONLINEAR

vars: {$DER.cond.Cells[1].p, $DER.cond.Cells[5].h, $DER.cond.Cells[3].h, $DER.cond.Cells[2].h, $DER.cond.Cells[4].h, $DER.cond.Cells[1].h}
eqns: {988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1022, 1021, 1020, 1019, 1018, 1017}
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1057};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1057 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[5].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[3].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[2].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[4].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* der(cond.Cells[1].h) STATE_DER */);
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1057};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1057 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[1].p) STATE_DER */) = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[5].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[3].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[2].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[4].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* der(cond.Cells[1].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[4].nlsx[5];
  threadData->lastEquationSolved = 1057;
}

/*
equation index: 1058
type: SIMPLE_ASSIGN
Q_cond_w = (*Real*)(cond.Nt) * (cond.Cells[1].Q_tot + cond.Cells[2].Q_tot + cond.Cells[3].Q_tot + cond.Cells[4].Q_tot + cond.Cells[5].Q_tot)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1058};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* Q_cond_w variable */) = (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[18]] /* cond.Nt PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cond.Cells[1].Q_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cond.Cells[2].Q_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cond.Cells[3].Q_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cond.Cells[4].Q_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cond.Cells[5].Q_tot variable */));
  threadData->lastEquationSolved = 1058;
}

/*
equation index: 1059
type: SIMPLE_ASSIGN
evap.Cells[1].M_dot_su = txv.Mdot / (*Real*)(evap.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1059};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* evap.Cells[1].M_dot_su variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* txv.Mdot variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[27]] /* evap.Cells[1].Nt PARAM */)),"/*Real*/(evap.Cells[1].Nt)",equationIndexes);
  threadData->lastEquationSolved = 1059;
}

/*
equation index: 1060
type: SIMPLE_ASSIGN
evap.Cells[1].heatTransfer.U[1] = evap.Cells[1].heatTransfer.Unom * (1e-5 + abs(evap.Cells[1].M_dot_su / evap.Cells[1].heatTransfer.Mdotnom) ^ 0.8)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1060};
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  tmp29 = fabs(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* evap.Cells[1].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* evap.Cells[1].heatTransfer.Mdotnom variable */),"evap.Cells[1].heatTransfer.Mdotnom",equationIndexes));
  tmp30 = 0.8;
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* evap.Cells[1].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1100]] /* evap.Cells[1].heatTransfer.Unom variable */)) * (1e-5 + tmp31);
  threadData->lastEquationSolved = 1060;
}

/*
equation index: 1061
type: SIMPLE_ASSIGN
res_mass_kg_s = m_dot_kg_s + txv.Mdot
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1061};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* res_mass_kg_s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* m_dot_kg_s variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* txv.Mdot variable */);
  threadData->lastEquationSolved = 1061;
}

/*
equation index: 1062
type: SIMPLE_ASSIGN
txv.DELTAp = p_lift_pa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1062};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* txv.DELTAp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* p_lift_pa variable */);
  threadData->lastEquationSolved = 1062;
}

/*
equation index: 1063
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1063};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties tmp36;
  tmp36 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.Tsat variable */) = tmp36._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.dTp variable */) = tmp36._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[364]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.ddldp variable */) = tmp36._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[365]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.ddvdp variable */) = tmp36._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[366]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.dhldp variable */) = tmp36._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.dhvdp variable */) = tmp36._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.dl variable */) = tmp36._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.dv variable */) = tmp36._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[370]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.hl variable */) = tmp36._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.hv variable */) = tmp36._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.psat variable */) = tmp36._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.sigma variable */) = tmp36._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[374]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.sl variable */) = tmp36._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.sv variable */) = tmp36._sv;
  ;
  threadData->lastEquationSolved = 1063;
}

/*
equation index: 1064
type: SIMPLE_ASSIGN
evap.Cells[1].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1064};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* evap.Cells[1].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.Tsat variable */);
  threadData->lastEquationSolved = 1064;
}

/*
equation index: 1065
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.dTp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1065};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* evap.Cells[1].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.dTp variable */);
  threadData->lastEquationSolved = 1065;
}

/*
equation index: 1066
type: SIMPLE_ASSIGN
evap.Cells[1].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1066};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* evap.Cells[1].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[364]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.ddldp variable */);
  threadData->lastEquationSolved = 1066;
}

/*
equation index: 1067
type: SIMPLE_ASSIGN
evap.Cells[1].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1067};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* evap.Cells[1].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[365]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.ddvdp variable */);
  threadData->lastEquationSolved = 1067;
}

/*
equation index: 1068
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1068};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* evap.Cells[1].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[366]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.dhldp variable */);
  threadData->lastEquationSolved = 1068;
}

/*
equation index: 1069
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1069};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1146]] /* evap.Cells[1].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.dhvdp variable */);
  threadData->lastEquationSolved = 1069;
}

/*
equation index: 1070
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.dl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1070};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* evap.Cells[1].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.dl variable */);
  threadData->lastEquationSolved = 1070;
}

/*
equation index: 1071
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.dv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1071};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1156]] /* evap.Cells[1].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.dv variable */);
  threadData->lastEquationSolved = 1071;
}

/*
equation index: 1072
type: SIMPLE_ASSIGN
evap.Cells[1].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.hl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1072};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* evap.Cells[1].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[370]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.hl variable */);
  threadData->lastEquationSolved = 1072;
}

/*
equation index: 1073
type: SIMPLE_ASSIGN
evap.Cells[1].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.hv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1073};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* evap.Cells[1].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.hv variable */);
  threadData->lastEquationSolved = 1073;
}

/*
equation index: 1074
type: SIMPLE_ASSIGN
evap.Cells[1].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.psat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1074};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1161]] /* evap.Cells[1].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.psat variable */);
  threadData->lastEquationSolved = 1074;
}

/*
equation index: 1075
type: SIMPLE_ASSIGN
evap.Cells[1].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.sigma
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1075};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1166]] /* evap.Cells[1].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.sigma variable */);
  threadData->lastEquationSolved = 1075;
}

/*
equation index: 1076
type: SIMPLE_ASSIGN
evap.Cells[1].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.sl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1076};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* evap.Cells[1].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[374]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.sl variable */);
  threadData->lastEquationSolved = 1076;
}

/*
equation index: 1077
type: SIMPLE_ASSIGN
evap.Cells[1].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.sv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1077};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* evap.Cells[1].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1063.sv variable */);
  threadData->lastEquationSolved = 1077;
}

/*
equation index: 1078
type: SIMPLE_ASSIGN
evap.Cells[1].x = (evap.Cells[1].h - evap.Cells[1].h_l) / (evap.Cells[1].h_v - evap.Cells[1].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1078};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1251]] /* evap.Cells[1].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* evap.Cells[1].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* evap.Cells[1].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* evap.Cells[1].h_l variable */),"evap.Cells[1].h_v - evap.Cells[1].h_l",equationIndexes);
  threadData->lastEquationSolved = 1078;
}

/*
equation index: 1079
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[1].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1079};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState tmp37;
  tmp37 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[502]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.T variable */) = tmp37._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[503]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.a variable */) = tmp37._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.beta variable */) = tmp37._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[505]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.cp variable */) = tmp37._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[506]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.cv variable */) = tmp37._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[507]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.d variable */) = tmp37._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[508]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.ddhp variable */) = tmp37._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.ddph variable */) = tmp37._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.eta variable */) = tmp37._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.h variable */) = tmp37._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.kappa variable */) = tmp37._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.lambda variable */) = tmp37._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.p variable */) = tmp37._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[14]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.phase variable */) = tmp37._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.s variable */) = tmp37._s;
  ;
  threadData->lastEquationSolved = 1079;
}

/*
equation index: 1080
type: SIMPLE_ASSIGN
evap.Cells[1].T = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1080};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* evap.Cells[1].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[502]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.T variable */);
  threadData->lastEquationSolved = 1080;
}

/*
equation index: 1081
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1081};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* evap.Cells[1].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[503]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.a variable */);
  threadData->lastEquationSolved = 1081;
}

/*
equation index: 1082
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1082};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* evap.Cells[1].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.beta variable */);
  threadData->lastEquationSolved = 1082;
}

/*
equation index: 1083
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1083};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* evap.Cells[1].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[505]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.cp variable */);
  threadData->lastEquationSolved = 1083;
}

/*
equation index: 1084
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1084};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1045]] /* evap.Cells[1].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[506]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.cv variable */);
  threadData->lastEquationSolved = 1084;
}

/*
equation index: 1085
type: SIMPLE_ASSIGN
evap.Cells[1].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1085};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* evap.Cells[1].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[507]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.d variable */);
  threadData->lastEquationSolved = 1085;
}

/*
equation index: 1086
type: SIMPLE_ASSIGN
evap.Cells[1].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1086};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* evap.Cells[1].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[508]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.ddhp variable */);
  threadData->lastEquationSolved = 1086;
}

/*
equation index: 1087
type: SIMPLE_ASSIGN
evap.Cells[1].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1087};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* evap.Cells[1].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.ddph variable */);
  threadData->lastEquationSolved = 1087;
}

/*
equation index: 1088
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1088};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* evap.Cells[1].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.eta variable */);
  threadData->lastEquationSolved = 1088;
}

/*
equation index: 1089
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1089};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* evap.Cells[1].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.h variable */);
  threadData->lastEquationSolved = 1089;
}

/*
equation index: 1090
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1090};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* evap.Cells[1].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.kappa variable */);
  threadData->lastEquationSolved = 1090;
}

/*
equation index: 1091
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1091};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* evap.Cells[1].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.lambda variable */);
  threadData->lastEquationSolved = 1091;
}

/*
equation index: 1092
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1092};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1070]] /* evap.Cells[1].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.p variable */);
  threadData->lastEquationSolved = 1092;
}

/*
equation index: 1093
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1093};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[33]] /* evap.Cells[1].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[14]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.phase variable */);
  threadData->lastEquationSolved = 1093;
}

/*
equation index: 1094
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1094};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* evap.Cells[1].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1079.s variable */);
  threadData->lastEquationSolved = 1094;
}

/*
equation index: 1095
type: SIMPLE_ASSIGN
evap.Cells[1].M_tot = evap.Cells[1].Vi * evap.Cells[1].rho
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1095};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* evap.Cells[1].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* evap.Cells[1].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* evap.Cells[1].rho variable */));
  threadData->lastEquationSolved = 1095;
}

/*
equation index: 1096
type: SIMPLE_ASSIGN
evap.Cells[1].qdot = evap.Cells[1].heatTransfer.U[1] * (T_box_k - evap.Cells[1].T)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1096};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1111]] /* evap.Cells[1].qdot variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* evap.Cells[1].heatTransfer.U[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* T_box_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* evap.Cells[1].T variable */));
  threadData->lastEquationSolved = 1096;
}

/*
equation index: 1097
type: SIMPLE_ASSIGN
evap.Cells[1].Q_tot = evap.Cells[1].Ai * evap.Cells[1].qdot
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1097};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* evap.Cells[1].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[81]] /* evap.Cells[1].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1111]] /* evap.Cells[1].qdot variable */));
  threadData->lastEquationSolved = 1097;
}

/*
equation index: 1098
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1098};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties tmp38;
  tmp38 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.Tsat variable */) = tmp38._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[377]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.dTp variable */) = tmp38._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.ddldp variable */) = tmp38._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.ddvdp variable */) = tmp38._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.dhldp variable */) = tmp38._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[381]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.dhvdp variable */) = tmp38._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[382]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.dl variable */) = tmp38._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.dv variable */) = tmp38._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.hl variable */) = tmp38._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[385]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.hv variable */) = tmp38._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[386]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.psat variable */) = tmp38._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.sigma variable */) = tmp38._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.sl variable */) = tmp38._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.sv variable */) = tmp38._sv;
  ;
  threadData->lastEquationSolved = 1098;
}

/*
equation index: 1099
type: SIMPLE_ASSIGN
evap.Cells[2].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1099};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* evap.Cells[2].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.Tsat variable */);
  threadData->lastEquationSolved = 1099;
}

/*
equation index: 1100
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.dTp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* evap.Cells[2].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[377]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.dTp variable */);
  threadData->lastEquationSolved = 1100;
}

/*
equation index: 1101
type: SIMPLE_ASSIGN
evap.Cells[2].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* evap.Cells[2].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.ddldp variable */);
  threadData->lastEquationSolved = 1101;
}

/*
equation index: 1102
type: SIMPLE_ASSIGN
evap.Cells[2].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1137]] /* evap.Cells[2].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.ddvdp variable */);
  threadData->lastEquationSolved = 1102;
}

/*
equation index: 1103
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* evap.Cells[2].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.dhldp variable */);
  threadData->lastEquationSolved = 1103;
}

/*
equation index: 1104
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* evap.Cells[2].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[381]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.dhvdp variable */);
  threadData->lastEquationSolved = 1104;
}

/*
equation index: 1105
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.dl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* evap.Cells[2].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[382]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.dl variable */);
  threadData->lastEquationSolved = 1105;
}

/*
equation index: 1106
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.dv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* evap.Cells[2].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.dv variable */);
  threadData->lastEquationSolved = 1106;
}

/*
equation index: 1107
type: SIMPLE_ASSIGN
evap.Cells[2].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.hl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* evap.Cells[2].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.hl variable */);
  threadData->lastEquationSolved = 1107;
}

/*
equation index: 1108
type: SIMPLE_ASSIGN
evap.Cells[2].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.hv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1086]] /* evap.Cells[2].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[385]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.hv variable */);
  threadData->lastEquationSolved = 1108;
}

/*
equation index: 1109
type: SIMPLE_ASSIGN
evap.Cells[2].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.psat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1162]] /* evap.Cells[2].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[386]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.psat variable */);
  threadData->lastEquationSolved = 1109;
}

/*
equation index: 1110
type: SIMPLE_ASSIGN
evap.Cells[2].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.sigma
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1167]] /* evap.Cells[2].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.sigma variable */);
  threadData->lastEquationSolved = 1110;
}

/*
equation index: 1111
type: SIMPLE_ASSIGN
evap.Cells[2].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.sl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* evap.Cells[2].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.sl variable */);
  threadData->lastEquationSolved = 1111;
}

/*
equation index: 1112
type: SIMPLE_ASSIGN
evap.Cells[2].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.sv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* evap.Cells[2].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1098.sv variable */);
  threadData->lastEquationSolved = 1112;
}

/*
equation index: 1113
type: SIMPLE_ASSIGN
evap.Cells[2].x = (evap.Cells[2].h - evap.Cells[2].h_l) / (evap.Cells[2].h_v - evap.Cells[2].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1252]] /* evap.Cells[2].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* evap.Cells[2].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1086]] /* evap.Cells[2].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* evap.Cells[2].h_l variable */),"evap.Cells[2].h_v - evap.Cells[2].h_l",equationIndexes);
  threadData->lastEquationSolved = 1113;
}

/*
equation index: 1114
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[2].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1114};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState tmp39;
  tmp39 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[516]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.T variable */) = tmp39._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[517]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.a variable */) = tmp39._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[518]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.beta variable */) = tmp39._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.cp variable */) = tmp39._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.cv variable */) = tmp39._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.d variable */) = tmp39._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[522]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.ddhp variable */) = tmp39._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[523]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.ddph variable */) = tmp39._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.eta variable */) = tmp39._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.h variable */) = tmp39._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.kappa variable */) = tmp39._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.lambda variable */) = tmp39._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[528]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.p variable */) = tmp39._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[15]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.phase variable */) = tmp39._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.s variable */) = tmp39._s;
  ;
  threadData->lastEquationSolved = 1114;
}

/*
equation index: 1115
type: SIMPLE_ASSIGN
evap.Cells[2].T = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* evap.Cells[2].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[516]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.T variable */);
  threadData->lastEquationSolved = 1115;
}

/*
equation index: 1116
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1116};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* evap.Cells[2].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[517]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.a variable */);
  threadData->lastEquationSolved = 1116;
}

/*
equation index: 1117
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* evap.Cells[2].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[518]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.beta variable */);
  threadData->lastEquationSolved = 1117;
}

/*
equation index: 1118
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* evap.Cells[2].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.cp variable */);
  threadData->lastEquationSolved = 1118;
}

/*
equation index: 1119
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1046]] /* evap.Cells[2].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.cv variable */);
  threadData->lastEquationSolved = 1119;
}

/*
equation index: 1120
type: SIMPLE_ASSIGN
evap.Cells[2].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* evap.Cells[2].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.d variable */);
  threadData->lastEquationSolved = 1120;
}

/*
equation index: 1121
type: SIMPLE_ASSIGN
evap.Cells[2].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* evap.Cells[2].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[522]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.ddhp variable */);
  threadData->lastEquationSolved = 1121;
}

/*
equation index: 1122
type: SIMPLE_ASSIGN
evap.Cells[2].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* evap.Cells[2].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[523]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.ddph variable */);
  threadData->lastEquationSolved = 1122;
}

/*
equation index: 1123
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* evap.Cells[2].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.eta variable */);
  threadData->lastEquationSolved = 1123;
}

/*
equation index: 1124
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* evap.Cells[2].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.h variable */);
  threadData->lastEquationSolved = 1124;
}

/*
equation index: 1125
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* evap.Cells[2].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.kappa variable */);
  threadData->lastEquationSolved = 1125;
}

/*
equation index: 1126
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1126};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1066]] /* evap.Cells[2].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.lambda variable */);
  threadData->lastEquationSolved = 1126;
}

/*
equation index: 1127
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* evap.Cells[2].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[528]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.p variable */);
  threadData->lastEquationSolved = 1127;
}

/*
equation index: 1128
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1128};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[34]] /* evap.Cells[2].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[15]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.phase variable */);
  threadData->lastEquationSolved = 1128;
}

/*
equation index: 1129
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* evap.Cells[2].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1114.s variable */);
  threadData->lastEquationSolved = 1129;
}

/*
equation index: 1130
type: SIMPLE_ASSIGN
evap.Cells[2].M_tot = evap.Cells[2].Vi * evap.Cells[2].rho
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1130};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* evap.Cells[2].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* evap.Cells[2].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* evap.Cells[2].rho variable */));
  threadData->lastEquationSolved = 1130;
}

/*
equation index: 1131
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1131};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties tmp40;
  tmp40 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.Tsat variable */) = tmp40._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.dTp variable */) = tmp40._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[392]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.ddldp variable */) = tmp40._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[393]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.ddvdp variable */) = tmp40._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[394]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.dhldp variable */) = tmp40._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[395]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.dhvdp variable */) = tmp40._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[396]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.dl variable */) = tmp40._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[397]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.dv variable */) = tmp40._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[398]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.hl variable */) = tmp40._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.hv variable */) = tmp40._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.psat variable */) = tmp40._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.sigma variable */) = tmp40._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.sl variable */) = tmp40._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.sv variable */) = tmp40._sv;
  ;
  threadData->lastEquationSolved = 1131;
}

/*
equation index: 1132
type: SIMPLE_ASSIGN
evap.Cells[3].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1132};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* evap.Cells[3].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.Tsat variable */);
  threadData->lastEquationSolved = 1132;
}

/*
equation index: 1133
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.dTp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* evap.Cells[3].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.dTp variable */);
  threadData->lastEquationSolved = 1133;
}

/*
equation index: 1134
type: SIMPLE_ASSIGN
evap.Cells[3].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1134};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* evap.Cells[3].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[392]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.ddldp variable */);
  threadData->lastEquationSolved = 1134;
}

/*
equation index: 1135
type: SIMPLE_ASSIGN
evap.Cells[3].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1138]] /* evap.Cells[3].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[393]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.ddvdp variable */);
  threadData->lastEquationSolved = 1135;
}

/*
equation index: 1136
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1136};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* evap.Cells[3].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[394]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.dhldp variable */);
  threadData->lastEquationSolved = 1136;
}

/*
equation index: 1137
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* evap.Cells[3].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[395]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.dhvdp variable */);
  threadData->lastEquationSolved = 1137;
}

/*
equation index: 1138
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.dl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* evap.Cells[3].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[396]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.dl variable */);
  threadData->lastEquationSolved = 1138;
}

/*
equation index: 1139
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.dv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1158]] /* evap.Cells[3].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[397]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.dv variable */);
  threadData->lastEquationSolved = 1139;
}

/*
equation index: 1140
type: SIMPLE_ASSIGN
evap.Cells[3].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.hl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* evap.Cells[3].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[398]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.hl variable */);
  threadData->lastEquationSolved = 1140;
}

/*
equation index: 1141
type: SIMPLE_ASSIGN
evap.Cells[3].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.hv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* evap.Cells[3].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.hv variable */);
  threadData->lastEquationSolved = 1141;
}

/*
equation index: 1142
type: SIMPLE_ASSIGN
evap.Cells[3].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.psat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1142};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1163]] /* evap.Cells[3].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.psat variable */);
  threadData->lastEquationSolved = 1142;
}

/*
equation index: 1143
type: SIMPLE_ASSIGN
evap.Cells[3].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.sigma
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* evap.Cells[3].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.sigma variable */);
  threadData->lastEquationSolved = 1143;
}

/*
equation index: 1144
type: SIMPLE_ASSIGN
evap.Cells[3].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.sl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* evap.Cells[3].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.sl variable */);
  threadData->lastEquationSolved = 1144;
}

/*
equation index: 1145
type: SIMPLE_ASSIGN
evap.Cells[3].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.sv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* evap.Cells[3].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1131.sv variable */);
  threadData->lastEquationSolved = 1145;
}

/*
equation index: 1146
type: SIMPLE_ASSIGN
evap.Cells[3].x = (evap.Cells[3].h - evap.Cells[3].h_l) / (evap.Cells[3].h_v - evap.Cells[3].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1253]] /* evap.Cells[3].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* evap.Cells[3].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* evap.Cells[3].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* evap.Cells[3].h_l variable */),"evap.Cells[3].h_v - evap.Cells[3].h_l",equationIndexes);
  threadData->lastEquationSolved = 1146;
}

/*
equation index: 1147
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[3].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1147};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState tmp41;
  tmp41 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.T variable */) = tmp41._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.a variable */) = tmp41._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[532]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.beta variable */) = tmp41._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[533]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.cp variable */) = tmp41._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[534]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.cv variable */) = tmp41._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[535]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.d variable */) = tmp41._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[536]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.ddhp variable */) = tmp41._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[537]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.ddph variable */) = tmp41._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[538]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.eta variable */) = tmp41._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.h variable */) = tmp41._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.kappa variable */) = tmp41._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.lambda variable */) = tmp41._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.p variable */) = tmp41._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[16]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.phase variable */) = tmp41._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.s variable */) = tmp41._s;
  ;
  threadData->lastEquationSolved = 1147;
}

/*
equation index: 1148
type: SIMPLE_ASSIGN
evap.Cells[3].T = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* evap.Cells[3].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.T variable */);
  threadData->lastEquationSolved = 1148;
}

/*
equation index: 1149
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* evap.Cells[3].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.a variable */);
  threadData->lastEquationSolved = 1149;
}

/*
equation index: 1150
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* evap.Cells[3].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[532]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.beta variable */);
  threadData->lastEquationSolved = 1150;
}

/*
equation index: 1151
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* evap.Cells[3].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[533]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.cp variable */);
  threadData->lastEquationSolved = 1151;
}

/*
equation index: 1152
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* evap.Cells[3].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[534]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.cv variable */);
  threadData->lastEquationSolved = 1152;
}

/*
equation index: 1153
type: SIMPLE_ASSIGN
evap.Cells[3].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1118]] /* evap.Cells[3].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[535]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.d variable */);
  threadData->lastEquationSolved = 1153;
}

/*
equation index: 1154
type: SIMPLE_ASSIGN
evap.Cells[3].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* evap.Cells[3].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[536]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.ddhp variable */);
  threadData->lastEquationSolved = 1154;
}

/*
equation index: 1155
type: SIMPLE_ASSIGN
evap.Cells[3].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1155};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* evap.Cells[3].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[537]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.ddph variable */);
  threadData->lastEquationSolved = 1155;
}

/*
equation index: 1156
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* evap.Cells[3].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[538]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.eta variable */);
  threadData->lastEquationSolved = 1156;
}

/*
equation index: 1157
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* evap.Cells[3].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.h variable */);
  threadData->lastEquationSolved = 1157;
}

/*
equation index: 1158
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* evap.Cells[3].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.kappa variable */);
  threadData->lastEquationSolved = 1158;
}

/*
equation index: 1159
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1067]] /* evap.Cells[3].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.lambda variable */);
  threadData->lastEquationSolved = 1159;
}

/*
equation index: 1160
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1160};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* evap.Cells[3].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.p variable */);
  threadData->lastEquationSolved = 1160;
}

/*
equation index: 1161
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1161};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[35]] /* evap.Cells[3].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[16]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.phase variable */);
  threadData->lastEquationSolved = 1161;
}

/*
equation index: 1162
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* evap.Cells[3].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1147.s variable */);
  threadData->lastEquationSolved = 1162;
}

/*
equation index: 1163
type: SIMPLE_ASSIGN
evap.Cells[3].M_tot = evap.Cells[3].Vi * evap.Cells[3].rho
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* evap.Cells[3].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* evap.Cells[3].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1118]] /* evap.Cells[3].rho variable */));
  threadData->lastEquationSolved = 1163;
}

/*
equation index: 1164
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1164};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties tmp42;
  tmp42 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.Tsat variable */) = tmp42._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[405]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.dTp variable */) = tmp42._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[406]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.ddldp variable */) = tmp42._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[407]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.ddvdp variable */) = tmp42._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[408]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.dhldp variable */) = tmp42._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.dhvdp variable */) = tmp42._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[410]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.dl variable */) = tmp42._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.dv variable */) = tmp42._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.hl variable */) = tmp42._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.hv variable */) = tmp42._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.psat variable */) = tmp42._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[415]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.sigma variable */) = tmp42._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.sl variable */) = tmp42._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.sv variable */) = tmp42._sv;
  ;
  threadData->lastEquationSolved = 1164;
}

/*
equation index: 1165
type: SIMPLE_ASSIGN
evap.Cells[4].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1165};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* evap.Cells[4].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.Tsat variable */);
  threadData->lastEquationSolved = 1165;
}

/*
equation index: 1166
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.dTp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1129]] /* evap.Cells[4].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[405]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.dTp variable */);
  threadData->lastEquationSolved = 1166;
}

/*
equation index: 1167
type: SIMPLE_ASSIGN
evap.Cells[4].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* evap.Cells[4].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[406]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.ddldp variable */);
  threadData->lastEquationSolved = 1167;
}

/*
equation index: 1168
type: SIMPLE_ASSIGN
evap.Cells[4].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1139]] /* evap.Cells[4].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[407]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.ddvdp variable */);
  threadData->lastEquationSolved = 1168;
}

/*
equation index: 1169
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1144]] /* evap.Cells[4].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[408]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.dhldp variable */);
  threadData->lastEquationSolved = 1169;
}

/*
equation index: 1170
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1149]] /* evap.Cells[4].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.dhvdp variable */);
  threadData->lastEquationSolved = 1170;
}

/*
equation index: 1171
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.dl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* evap.Cells[4].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[410]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.dl variable */);
  threadData->lastEquationSolved = 1171;
}

/*
equation index: 1172
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.dv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1159]] /* evap.Cells[4].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.dv variable */);
  threadData->lastEquationSolved = 1172;
}

/*
equation index: 1173
type: SIMPLE_ASSIGN
evap.Cells[4].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.hl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* evap.Cells[4].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.hl variable */);
  threadData->lastEquationSolved = 1173;
}

/*
equation index: 1174
type: SIMPLE_ASSIGN
evap.Cells[4].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.hv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* evap.Cells[4].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.hv variable */);
  threadData->lastEquationSolved = 1174;
}

/*
equation index: 1175
type: SIMPLE_ASSIGN
evap.Cells[4].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.psat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1164]] /* evap.Cells[4].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.psat variable */);
  threadData->lastEquationSolved = 1175;
}

/*
equation index: 1176
type: SIMPLE_ASSIGN
evap.Cells[4].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.sigma
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1176};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* evap.Cells[4].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[415]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.sigma variable */);
  threadData->lastEquationSolved = 1176;
}

/*
equation index: 1177
type: SIMPLE_ASSIGN
evap.Cells[4].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.sl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* evap.Cells[4].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.sl variable */);
  threadData->lastEquationSolved = 1177;
}

/*
equation index: 1178
type: SIMPLE_ASSIGN
evap.Cells[4].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.sv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* evap.Cells[4].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1164.sv variable */);
  threadData->lastEquationSolved = 1178;
}

/*
equation index: 1179
type: SIMPLE_ASSIGN
evap.Cells[4].x = (evap.Cells[4].h - evap.Cells[4].h_l) / (evap.Cells[4].h_v - evap.Cells[4].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1254]] /* evap.Cells[4].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* evap.Cells[4].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* evap.Cells[4].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* evap.Cells[4].h_l variable */),"evap.Cells[4].h_v - evap.Cells[4].h_l",equationIndexes);
  threadData->lastEquationSolved = 1179;
}

/*
equation index: 1180
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[4].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1180};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState tmp43;
  tmp43 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.T variable */) = tmp43._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.a variable */) = tmp43._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.beta variable */) = tmp43._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[547]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.cp variable */) = tmp43._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[548]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.cv variable */) = tmp43._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.d variable */) = tmp43._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.ddhp variable */) = tmp43._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.ddph variable */) = tmp43._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.eta variable */) = tmp43._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[553]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.h variable */) = tmp43._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.kappa variable */) = tmp43._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.lambda variable */) = tmp43._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.p variable */) = tmp43._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[17]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.phase variable */) = tmp43._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[557]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.s variable */) = tmp43._s;
  ;
  threadData->lastEquationSolved = 1180;
}

/*
equation index: 1181
type: SIMPLE_ASSIGN
evap.Cells[4].T = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* evap.Cells[4].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.T variable */);
  threadData->lastEquationSolved = 1181;
}

/*
equation index: 1182
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* evap.Cells[4].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.a variable */);
  threadData->lastEquationSolved = 1182;
}

/*
equation index: 1183
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1038]] /* evap.Cells[4].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.beta variable */);
  threadData->lastEquationSolved = 1183;
}

/*
equation index: 1184
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1043]] /* evap.Cells[4].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[547]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.cp variable */);
  threadData->lastEquationSolved = 1184;
}

/*
equation index: 1185
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* evap.Cells[4].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[548]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.cv variable */);
  threadData->lastEquationSolved = 1185;
}

/*
equation index: 1186
type: SIMPLE_ASSIGN
evap.Cells[4].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* evap.Cells[4].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.d variable */);
  threadData->lastEquationSolved = 1186;
}

/*
equation index: 1187
type: SIMPLE_ASSIGN
evap.Cells[4].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* evap.Cells[4].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.ddhp variable */);
  threadData->lastEquationSolved = 1187;
}

/*
equation index: 1188
type: SIMPLE_ASSIGN
evap.Cells[4].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* evap.Cells[4].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.ddph variable */);
  threadData->lastEquationSolved = 1188;
}

/*
equation index: 1189
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1053]] /* evap.Cells[4].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.eta variable */);
  threadData->lastEquationSolved = 1189;
}

/*
equation index: 1190
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* evap.Cells[4].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[553]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.h variable */);
  threadData->lastEquationSolved = 1190;
}

/*
equation index: 1191
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1063]] /* evap.Cells[4].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.kappa variable */);
  threadData->lastEquationSolved = 1191;
}

/*
equation index: 1192
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1192};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1068]] /* evap.Cells[4].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.lambda variable */);
  threadData->lastEquationSolved = 1192;
}

/*
equation index: 1193
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1193};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* evap.Cells[4].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.p variable */);
  threadData->lastEquationSolved = 1193;
}

/*
equation index: 1194
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1194};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[36]] /* evap.Cells[4].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[17]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.phase variable */);
  threadData->lastEquationSolved = 1194;
}

/*
equation index: 1195
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* evap.Cells[4].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[557]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1180.s variable */);
  threadData->lastEquationSolved = 1195;
}

/*
equation index: 1196
type: SIMPLE_ASSIGN
evap.Cells[4].M_tot = evap.Cells[4].Vi * evap.Cells[4].rho
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1003]] /* evap.Cells[4].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* evap.Cells[4].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* evap.Cells[4].rho variable */));
  threadData->lastEquationSolved = 1196;
}

/*
equation index: 1197
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1197};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties tmp44;
  tmp44 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.Tsat variable */) = tmp44._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[419]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.dTp variable */) = tmp44._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.ddldp variable */) = tmp44._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[421]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.ddvdp variable */) = tmp44._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[422]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.dhldp variable */) = tmp44._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[423]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.dhvdp variable */) = tmp44._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[424]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.dl variable */) = tmp44._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.dv variable */) = tmp44._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.hl variable */) = tmp44._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.hv variable */) = tmp44._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.psat variable */) = tmp44._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.sigma variable */) = tmp44._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.sl variable */) = tmp44._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.sv variable */) = tmp44._sv;
  ;
  threadData->lastEquationSolved = 1197;
}

/*
equation index: 1198
type: SIMPLE_ASSIGN
evap.Cells[5].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1198};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* evap.Cells[5].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.Tsat variable */);
  threadData->lastEquationSolved = 1198;
}

/*
equation index: 1199
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.dTp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* evap.Cells[5].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[419]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.dTp variable */);
  threadData->lastEquationSolved = 1199;
}

/*
equation index: 1200
type: SIMPLE_ASSIGN
evap.Cells[5].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1200};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1135]] /* evap.Cells[5].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.ddldp variable */);
  threadData->lastEquationSolved = 1200;
}

/*
equation index: 1201
type: SIMPLE_ASSIGN
evap.Cells[5].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* evap.Cells[5].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[421]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.ddvdp variable */);
  threadData->lastEquationSolved = 1201;
}

/*
equation index: 1202
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1145]] /* evap.Cells[5].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[422]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.dhldp variable */);
  threadData->lastEquationSolved = 1202;
}

/*
equation index: 1203
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1150]] /* evap.Cells[5].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[423]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.dhvdp variable */);
  threadData->lastEquationSolved = 1203;
}

/*
equation index: 1204
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.dl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1155]] /* evap.Cells[5].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[424]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.dl variable */);
  threadData->lastEquationSolved = 1204;
}

/*
equation index: 1205
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.dv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1160]] /* evap.Cells[5].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.dv variable */);
  threadData->lastEquationSolved = 1205;
}

/*
equation index: 1206
type: SIMPLE_ASSIGN
evap.Cells[5].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.hl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* evap.Cells[5].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.hl variable */);
  threadData->lastEquationSolved = 1206;
}

/*
equation index: 1207
type: SIMPLE_ASSIGN
evap.Cells[5].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.hv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1207};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* evap.Cells[5].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.hv variable */);
  threadData->lastEquationSolved = 1207;
}

/*
equation index: 1208
type: SIMPLE_ASSIGN
evap.Cells[5].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.psat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* evap.Cells[5].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.psat variable */);
  threadData->lastEquationSolved = 1208;
}

/*
equation index: 1209
type: SIMPLE_ASSIGN
evap.Cells[5].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.sigma
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* evap.Cells[5].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.sigma variable */);
  threadData->lastEquationSolved = 1209;
}

/*
equation index: 1210
type: SIMPLE_ASSIGN
evap.Cells[5].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.sl
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* evap.Cells[5].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.sl variable */);
  threadData->lastEquationSolved = 1210;
}

/*
equation index: 1211
type: SIMPLE_ASSIGN
evap.Cells[5].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.sv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* evap.Cells[5].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties1197.sv variable */);
  threadData->lastEquationSolved = 1211;
}

/*
equation index: 1212
type: SIMPLE_ASSIGN
evap.Cells[5].x = (evap.Cells[5].h - evap.Cells[5].h_l) / (evap.Cells[5].h_v - evap.Cells[5].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1255]] /* evap.Cells[5].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* evap.Cells[5].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* evap.Cells[5].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* evap.Cells[5].h_l variable */),"evap.Cells[5].h_v - evap.Cells[5].h_l",equationIndexes);
  threadData->lastEquationSolved = 1212;
}

/*
equation index: 1213
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213 := RefrigerationTrainer.ClosedLoopM1e.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[5].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1213};
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState tmp45;
  tmp45 = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[558]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.T variable */) = tmp45._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[559]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.a variable */) = tmp45._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[560]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.beta variable */) = tmp45._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[561]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.cp variable */) = tmp45._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[562]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.cv variable */) = tmp45._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.d variable */) = tmp45._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.ddhp variable */) = tmp45._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.ddph variable */) = tmp45._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[566]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.eta variable */) = tmp45._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[567]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.h variable */) = tmp45._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[568]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.kappa variable */) = tmp45._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[569]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.lambda variable */) = tmp45._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[570]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.p variable */) = tmp45._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[18]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.phase variable */) = tmp45._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[571]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.s variable */) = tmp45._s;
  ;
  threadData->lastEquationSolved = 1213;
}

/*
equation index: 1214
type: SIMPLE_ASSIGN
evap.Cells[5].T = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1214};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* evap.Cells[5].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[558]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.T variable */);
  threadData->lastEquationSolved = 1214;
}

/*
equation index: 1215
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.a
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1215};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* evap.Cells[5].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[559]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.a variable */);
  threadData->lastEquationSolved = 1215;
}

/*
equation index: 1216
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.beta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* evap.Cells[5].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[560]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.beta variable */);
  threadData->lastEquationSolved = 1216;
}

/*
equation index: 1217
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.cp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* evap.Cells[5].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[561]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.cp variable */);
  threadData->lastEquationSolved = 1217;
}

/*
equation index: 1218
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.cv
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1218};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* evap.Cells[5].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[562]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.cv variable */);
  threadData->lastEquationSolved = 1218;
}

/*
equation index: 1219
type: SIMPLE_ASSIGN
evap.Cells[5].rho = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.d
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* evap.Cells[5].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.d variable */);
  threadData->lastEquationSolved = 1219;
}

/*
equation index: 1220
type: SIMPLE_ASSIGN
evap.Cells[5].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* evap.Cells[5].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.ddhp variable */);
  threadData->lastEquationSolved = 1220;
}

/*
equation index: 1221
type: SIMPLE_ASSIGN
evap.Cells[5].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.ddph
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* evap.Cells[5].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.ddph variable */);
  threadData->lastEquationSolved = 1221;
}

/*
equation index: 1222
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.eta
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1054]] /* evap.Cells[5].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[566]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.eta variable */);
  threadData->lastEquationSolved = 1222;
}

/*
equation index: 1223
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.h
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* evap.Cells[5].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[567]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.h variable */);
  threadData->lastEquationSolved = 1223;
}

/*
equation index: 1224
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.kappa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* evap.Cells[5].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[568]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.kappa variable */);
  threadData->lastEquationSolved = 1224;
}

/*
equation index: 1225
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.lambda
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1069]] /* evap.Cells[5].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[569]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.lambda variable */);
  threadData->lastEquationSolved = 1225;
}

/*
equation index: 1226
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* evap.Cells[5].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[570]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.p variable */);
  threadData->lastEquationSolved = 1226;
}

/*
equation index: 1227
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.phase
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1227};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[37]] /* evap.Cells[5].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[18]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.phase variable */);
  threadData->lastEquationSolved = 1227;
}

/*
equation index: 1228
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.s
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1228};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* evap.Cells[5].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[571]] /* $TMP_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState1213.s variable */);
  threadData->lastEquationSolved = 1228;
}

/*
equation index: 1229
type: SIMPLE_ASSIGN
evap.Cells[5].M_tot = evap.Cells[5].Vi * evap.Cells[5].rho
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* evap.Cells[5].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* evap.Cells[5].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* evap.Cells[5].rho variable */));
  threadData->lastEquationSolved = 1229;
}

/*
equation index: 1230
type: SIMPLE_ASSIGN
evap.M_tot = (*Real*)(evap.Nt) * (evap.Cells[1].M_tot + evap.Cells[2].M_tot + evap.Cells[3].M_tot + evap.Cells[4].M_tot + evap.Cells[5].M_tot)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* evap.M_tot variable */) = (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[39]] /* evap.Nt PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* evap.Cells[1].M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* evap.Cells[2].M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* evap.Cells[3].M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1003]] /* evap.Cells[4].M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* evap.Cells[5].M_tot variable */));
  threadData->lastEquationSolved = 1230;
}

/*
equation index: 1231
type: SIMPLE_ASSIGN
M_charge_kg = evap.M_tot + cond.M_tot
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* M_charge_kg variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* evap.M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[982]] /* cond.M_tot variable */);
  threadData->lastEquationSolved = 1231;
}

void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1232(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1233(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1234(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1235(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1236(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1237(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1238(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1239(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1240(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1241(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1242(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1243(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1244(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1245(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1246(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1247(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1248(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1249(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1250(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1251(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1252(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1253(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1254(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1255(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1256(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1257(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1258(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1259(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1260(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1266(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1265(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1264(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1263(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1262(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1261(DATA*, threadData_t*);
/*
equation index: 1301
indexNonlinear: 5
type: NONLINEAR

vars: {$DER.evap.Cells[5].p, $DER.evap.Cells[5].h, $DER.evap.Cells[4].h, $DER.evap.Cells[1].h, $DER.evap.Cells[3].h, $DER.evap.Cells[2].h}
eqns: {1232, 1233, 1234, 1235, 1236, 1237, 1238, 1239, 1240, 1241, 1242, 1243, 1244, 1245, 1246, 1247, 1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257, 1258, 1259, 1260, 1266, 1265, 1264, 1263, 1262, 1261}
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1301};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1301 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[5].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[4].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* der(evap.Cells[1].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[3].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[2].h) STATE_DER */);
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1301};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1301 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].p) STATE_DER */) = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[5].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[5].nlsx[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[4].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[5].nlsx[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* der(evap.Cells[1].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[5].nlsx[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[3].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[5].nlsx[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[2].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[5].nlsx[5];
  threadData->lastEquationSolved = 1301;
}

/*
equation index: 1302
type: SIMPLE_ASSIGN
Q_evap_w = (*Real*)(evap.Nt) * (evap.Cells[1].Q_tot + evap.Cells[2].Q_tot + evap.Cells[3].Q_tot + evap.Cells[4].Q_tot + evap.Cells[5].Q_tot)
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* Q_evap_w variable */) = (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[39]] /* evap.Nt PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* evap.Cells[1].Q_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* evap.Cells[2].Q_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* evap.Cells[3].Q_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* evap.Cells[4].Q_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* evap.Cells[5].Q_tot variable */));
  threadData->lastEquationSolved = 1302;
}

/*
equation index: 1303
type: SIMPLE_ASSIGN
cop = Q_evap_w / $cse1
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[983]] /* cop variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* Q_evap_w variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[670]] /* $cse1 variable */),"$cse1",equationIndexes);
  threadData->lastEquationSolved = 1303;
}

/*
equation index: 1304
type: SIMPLE_ASSIGN
res_energy_w = Q_evap_w + W_comp_w + Q_cond_w
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* res_energy_w variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* Q_evap_w variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* W_comp_w variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* Q_cond_w variable */);
  threadData->lastEquationSolved = 1304;
}

/*
equation index: 1305
type: SIMPLE_ASSIGN
$DER.drive.phi = drive.w_fixed
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(drive.phi) STATE_DER */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* drive.w_fixed PARAM */);
  threadData->lastEquationSolved = 1305;
}

/*
equation index: 1306
type: SIMPLE_ASSIGN
p_suction_pa = evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* p_suction_pa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */);
  threadData->lastEquationSolved = 1306;
}

/*
equation index: 1307
type: SIMPLE_ASSIGN
T_evap_sat_k = RefrigerationTrainer.ClosedLoopM1e.Med.setSat_p(p_suction_pa).Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* T_evap_sat_k variable */) = omc_RefrigerationTrainer_ClosedLoopM1e_Med_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* p_suction_pa variable */))._Tsat;
  threadData->lastEquationSolved = 1307;
}

/*
equation index: 1308
type: SIMPLE_ASSIGN
p_discharge_pa = p_suction_pa + p_lift_pa
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1258]] /* p_discharge_pa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* p_suction_pa variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* p_lift_pa variable */);
  threadData->lastEquationSolved = 1308;
}

/*
equation index: 1309
type: SIMPLE_ASSIGN
T_cond_sat_k = RefrigerationTrainer.ClosedLoopM1e.Med.setSat_p(p_discharge_pa).Tsat
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* T_cond_sat_k variable */) = omc_RefrigerationTrainer_ClosedLoopM1e_Med_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1258]] /* p_discharge_pa variable */))._Tsat;
  threadData->lastEquationSolved = 1309;
}

/*
equation index: 1310
type: SIMPLE_ASSIGN
subcooling_k = T_cond_sat_k - RefrigerationTrainer.ClosedLoopM1e.Med.setState_ph(p_discharge_pa, evap.Cells[1].hnode_su, 0).T
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1265]] /* subcooling_k variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* T_cond_sat_k variable */) - (omc_RefrigerationTrainer_ClosedLoopM1e_Med_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1258]] /* p_discharge_pa variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].hnode_su variable */), ((modelica_integer) 0))._T);
  threadData->lastEquationSolved = 1310;
}

/*
equation index: 1311
type: SIMPLE_ASSIGN
res_subcool_k = subcooling_k
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* res_subcool_k variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1265]] /* subcooling_k variable */);
  threadData->lastEquationSolved = 1311;
}

/*
equation index: 1312
type: SIMPLE_ASSIGN
superheat_k = RefrigerationTrainer.ClosedLoopM1e.Med.setState_ph(p_suction_pa, evap.Cells[5].hnode_ex, 0).T - T_evap_sat_k
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* superheat_k variable */) = omc_RefrigerationTrainer_ClosedLoopM1e_Med_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* p_suction_pa variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* evap.Cells[5].hnode_ex variable */), ((modelica_integer) 0))._T - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* T_evap_sat_k variable */);
  threadData->lastEquationSolved = 1312;
}

/*
equation index: 1313
type: SIMPLE_ASSIGN
res_superheat_k = superheat_k - superheat_target_k
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* res_superheat_k variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* superheat_k variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[150]] /* superheat_target_k PARAM */);
  threadData->lastEquationSolved = 1313;
}

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1e_functionDAE(DATA *data, threadData_t *threadData)
{
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  RefrigerationTrainer_ClosedLoopM1e_functionLocalKnownVars(data, threadData);
  static void (*const eqFunctions[385])(DATA*, threadData_t*) = {
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_745,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_746,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_793,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_794,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_795,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_796,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_797,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_798,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_799,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_800,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_801,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_802,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_803,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_804,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_805,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_806,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_807,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_808,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_809,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_810,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_811,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_812,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_813,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_814,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_815,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_816,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_817,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_818,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_819,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_820,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_821,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_822,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_823,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_824,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_825,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_826,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_827,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_828,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_829,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_830,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_831,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_832,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_833,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_834,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_835,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_836,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_837,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_838,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_839,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_840,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_841,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_842,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_843,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_844,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_845,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_846,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_847,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_848,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_849,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_850,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_851,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_852,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_853,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_854,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_855,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_856,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_857,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_858,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_859,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_860,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_861,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_862,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_863,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_864,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_865,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_866,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_867,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_868,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_869,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_870,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_871,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_872,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_873,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_874,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_875,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_876,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_877,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_878,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_879,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_880,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_881,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_882,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_883,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_884,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_885,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_886,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_887,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_888,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_889,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_890,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_891,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_892,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_893,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_894,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_895,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_896,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_897,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_898,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_899,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_900,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_901,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_902,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_903,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_904,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_905,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_906,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_907,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_908,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_909,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_910,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_911,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_912,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_913,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_914,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_915,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_916,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_917,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_918,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_919,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_920,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_921,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_922,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_923,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_924,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_925,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_926,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_927,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_928,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_929,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_930,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_931,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_932,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_933,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_934,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_935,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_936,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_937,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_938,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_939,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_940,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_941,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_942,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_943,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_944,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_945,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_946,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_947,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_948,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_949,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_950,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_951,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_952,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_953,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_954,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_955,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_956,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_957,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_958,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_959,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_960,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_961,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_962,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_963,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_964,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_965,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_966,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_967,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_968,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_969,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_970,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_971,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_972,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_973,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_974,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_975,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_976,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_977,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_978,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_979,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_980,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_981,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_982,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_983,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_984,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_985,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_986,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_987,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1057,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1058,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1059,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1060,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1061,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1062,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1063,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1064,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1065,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1066,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1067,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1068,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1069,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1070,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1071,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1072,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1073,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1074,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1075,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1076,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1077,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1078,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1079,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1080,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1081,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1082,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1083,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1084,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1085,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1086,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1087,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1088,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1089,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1090,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1091,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1092,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1093,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1094,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1095,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1096,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1097,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1098,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1099,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1100,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1101,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1102,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1103,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1104,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1105,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1106,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1107,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1108,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1109,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1110,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1111,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1112,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1113,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1114,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1115,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1116,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1117,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1118,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1119,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1120,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1121,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1122,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1123,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1124,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1125,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1126,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1127,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1128,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1129,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1130,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1131,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1132,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1133,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1134,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1135,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1136,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1137,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1138,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1139,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1140,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1141,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1142,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1143,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1144,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1145,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1146,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1147,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1148,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1149,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1150,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1151,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1152,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1153,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1154,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1155,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1156,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1157,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1158,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1159,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1160,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1161,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1162,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1163,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1164,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1165,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1166,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1167,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1168,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1169,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1170,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1171,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1172,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1173,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1174,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1175,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1176,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1177,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1178,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1179,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1180,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1181,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1182,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1183,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1184,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1185,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1186,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1187,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1188,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1189,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1190,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1191,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1192,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1193,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1194,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1195,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1196,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1197,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1198,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1199,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1200,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1201,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1202,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1203,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1204,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1205,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1206,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1207,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1208,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1209,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1210,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1211,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1212,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1213,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1214,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1215,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1216,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1217,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1218,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1219,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1220,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1221,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1222,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1223,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1224,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1225,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1226,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1227,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1228,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1229,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1230,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1231,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1301,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1302,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1303,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1304,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1305,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1306,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1307,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1308,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1309,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1310,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1311,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1312,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1313
  };
  
  for (int id = 0; id < 385; id++) {
    eqFunctions[id](data, threadData);
  }
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  return 0;
}


int RefrigerationTrainer_ClosedLoopM1e_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

/* forwarded equations */
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_793(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_794(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_795(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_796(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_797(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_798(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_799(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_800(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_801(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_802(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_803(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_804(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_805(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_806(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_807(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_808(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_809(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_813(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_814(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_815(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_832(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_833(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_834(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_835(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_836(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_837(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_838(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_839(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_840(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_841(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_842(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_843(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_844(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_845(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_846(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_847(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_849(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_850(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_867(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_868(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_869(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_870(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_871(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_872(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_873(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_874(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_875(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_876(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_877(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_878(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_879(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_880(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_881(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_882(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_900(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_901(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_902(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_903(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_904(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_905(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_906(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_907(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_908(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_909(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_910(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_911(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_912(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_913(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_914(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_915(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_933(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_934(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_935(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_936(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_937(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_938(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_939(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_940(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_941(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_942(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_943(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_944(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_945(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_946(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_947(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_948(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_966(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_967(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_968(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_969(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_970(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_971(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_972(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_973(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_974(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_975(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_976(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_977(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_978(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_979(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_980(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_981(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_984(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_985(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_986(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_987(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1057(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1059(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1060(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1079(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1080(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1081(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1082(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1083(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1084(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1085(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1086(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1087(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1088(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1089(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1090(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1091(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1092(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1093(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1094(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1096(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1097(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1114(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1115(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1116(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1117(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1118(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1119(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1120(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1121(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1122(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1123(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1124(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1125(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1126(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1127(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1128(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1129(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1147(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1148(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1149(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1150(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1151(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1152(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1153(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1154(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1155(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1156(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1157(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1158(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1159(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1160(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1161(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1162(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1180(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1181(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1182(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1183(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1184(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1185(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1186(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1187(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1188(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1189(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1190(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1191(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1192(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1193(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1194(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1195(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1213(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1214(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1215(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1216(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1217(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1218(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1219(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1220(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1221(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1222(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1223(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1224(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1225(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1226(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1227(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1228(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1301(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1305(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[193])(DATA*, threadData_t*) = {
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_793,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_794,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_795,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_796,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_797,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_798,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_799,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_800,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_801,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_802,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_803,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_804,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_805,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_806,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_807,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_808,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_809,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_813,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_814,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_815,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_832,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_833,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_834,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_835,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_836,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_837,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_838,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_839,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_840,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_841,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_842,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_843,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_844,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_845,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_846,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_847,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_849,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_850,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_867,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_868,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_869,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_870,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_871,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_872,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_873,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_874,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_875,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_876,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_877,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_878,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_879,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_880,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_881,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_882,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_900,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_901,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_902,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_903,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_904,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_905,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_906,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_907,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_908,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_909,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_910,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_911,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_912,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_913,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_914,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_915,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_933,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_934,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_935,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_936,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_937,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_938,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_939,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_940,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_941,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_942,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_943,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_944,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_945,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_946,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_947,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_948,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_966,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_967,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_968,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_969,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_970,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_971,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_972,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_973,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_974,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_975,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_976,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_977,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_978,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_979,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_980,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_981,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_984,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_985,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_986,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_987,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1057,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1059,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1060,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1079,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1080,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1081,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1082,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1083,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1084,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1085,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1086,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1087,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1088,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1089,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1090,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1091,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1092,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1093,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1094,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1096,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1097,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1114,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1115,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1116,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1117,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1118,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1119,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1120,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1121,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1122,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1123,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1124,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1125,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1126,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1127,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1128,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1129,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1147,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1148,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1149,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1150,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1151,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1152,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1153,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1154,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1155,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1156,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1157,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1158,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1159,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1160,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1161,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1162,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1180,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1181,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1182,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1183,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1184,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1185,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1186,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1187,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1188,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1189,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1190,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1191,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1192,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1193,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1194,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1195,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1213,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1214,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1215,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1216,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1217,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1218,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1219,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1220,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1221,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1222,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1223,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1224,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1225,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1226,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1227,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1228,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1301,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1305
  };
  
  if (data->simulationInfo->evalSelection) {
    for (int i = 0; i < data->simulationInfo->evalSelection->n; i++) {
      int id = data->simulationInfo->evalSelection->idx[i];
      eqFunctions[id](data, threadData);
    }
  } else {
    for (int id = 0; id < 193; id++) {
      eqFunctions[id](data, threadData);
    }
  }
}

int RefrigerationTrainer_ClosedLoopM1e_functionODE(DATA *data, threadData_t *threadData)
{
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  RefrigerationTrainer_ClosedLoopM1e_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  return 0;
}

void RefrigerationTrainer_ClosedLoopM1e_ODE_DAG(DATA* data, threadData_t* threadData)
{
  const size_t eqMap[] = {793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 813, 814, 815, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 849, 850, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 984, 985, 986, 987, 1057, 1059, 1060, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1096, 1097, 1114, 1115, 1116, 1117, 1118, 1119, 1120, 1121, 1122, 1123, 1124, 1125, 1126, 1127, 1128, 1129, 1147, 1148, 1149, 1150, 1151, 1152, 1153, 1154, 1155, 1156, 1157, 1158, 1159, 1160, 1161, 1162, 1180, 1181, 1182, 1183, 1184, 1185, 1186, 1187, 1188, 1189, 1190, 1191, 1192, 1193, 1194, 1195, 1213, 1214, 1215, 1216, 1217, 1218, 1219, 1220, 1221, 1222, 1223, 1224, 1225, 1226, 1227, 1228, 1301, 1305};
  buildEvalDAG_ODE(data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);
extern int _main_OptimizationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);

#include "RefrigerationTrainer.ClosedLoopM1e_12jac.h"
#include "RefrigerationTrainer.ClosedLoopM1e_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks RefrigerationTrainer_ClosedLoopM1e_callback = {
  (int (*)(DATA *, threadData_t *, void *)) RefrigerationTrainer_ClosedLoopM1e_performSimulation,    /* performSimulation */
  (int (*)(DATA *, threadData_t *, void *)) RefrigerationTrainer_ClosedLoopM1e_performQSSSimulation,    /* performQSSSimulation */
  RefrigerationTrainer_ClosedLoopM1e_updateContinuousSystem,    /* updateContinuousSystem */
  RefrigerationTrainer_ClosedLoopM1e_callExternalObjectDestructors,    /* callExternalObjectDestructors */
  RefrigerationTrainer_ClosedLoopM1e_initialNonLinearSystem,    /* initialNonLinearSystem */
  NULL,    /* initialLinearSystem */
  NULL,    /* initialMixedSystem */
  #if !defined(OMC_NO_STATESELECTION)
  RefrigerationTrainer_ClosedLoopM1e_initializeStateSets,
  #else
  NULL,
  #endif    /* initializeStateSets */
  RefrigerationTrainer_ClosedLoopM1e_initializeDAEmodeData,
  RefrigerationTrainer_ClosedLoopM1e_ODE_DAG,
  RefrigerationTrainer_ClosedLoopM1e_functionODE,
  RefrigerationTrainer_ClosedLoopM1e_functionAlgebraics,
  RefrigerationTrainer_ClosedLoopM1e_functionDAE,
  RefrigerationTrainer_ClosedLoopM1e_functionLocalKnownVars,
  RefrigerationTrainer_ClosedLoopM1e_input_function,
  RefrigerationTrainer_ClosedLoopM1e_input_function_init,
  RefrigerationTrainer_ClosedLoopM1e_input_function_updateStartValues,
  RefrigerationTrainer_ClosedLoopM1e_data_function,
  RefrigerationTrainer_ClosedLoopM1e_output_function,
  RefrigerationTrainer_ClosedLoopM1e_setc_function,
  RefrigerationTrainer_ClosedLoopM1e_setb_function,
  RefrigerationTrainer_ClosedLoopM1e_function_storeDelayed,
  RefrigerationTrainer_ClosedLoopM1e_function_storeSpatialDistribution,
  RefrigerationTrainer_ClosedLoopM1e_function_initSpatialDistribution,
  RefrigerationTrainer_ClosedLoopM1e_updateBoundVariableAttributes,
  RefrigerationTrainer_ClosedLoopM1e_functionInitialEquations,
  GLOBAL_EQUIDISTANT_HOMOTOPY,
  NULL,
  RefrigerationTrainer_ClosedLoopM1e_functionRemovedInitialEquations,
  RefrigerationTrainer_ClosedLoopM1e_updateBoundParameters,
  RefrigerationTrainer_ClosedLoopM1e_checkForAsserts,
  RefrigerationTrainer_ClosedLoopM1e_function_ZeroCrossingsEquations,
  RefrigerationTrainer_ClosedLoopM1e_function_ZeroCrossings,
  RefrigerationTrainer_ClosedLoopM1e_function_updateRelations,
  RefrigerationTrainer_ClosedLoopM1e_zeroCrossingDescription,
  RefrigerationTrainer_ClosedLoopM1e_relationDescription,
  RefrigerationTrainer_ClosedLoopM1e_function_initSample,
  RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_A,
  RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_ADJ,
  RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_B,
  RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_C,
  RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_D,
  RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_F,
  RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_H,
  RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianA,
  RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianADJ,
  RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianB,
  RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianC,
  RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianD,
  RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianF,
  RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianH,
  RefrigerationTrainer_ClosedLoopM1e_functionJacA_column,
  RefrigerationTrainer_ClosedLoopM1e_functionJacADJ_column,
  RefrigerationTrainer_ClosedLoopM1e_functionJacB_column,
  RefrigerationTrainer_ClosedLoopM1e_functionJacC_column,
  RefrigerationTrainer_ClosedLoopM1e_functionJacD_column,
  RefrigerationTrainer_ClosedLoopM1e_functionJacF_column,
  RefrigerationTrainer_ClosedLoopM1e_functionJacH_column,
  RefrigerationTrainer_ClosedLoopM1e_JacA_DAG,
  RefrigerationTrainer_ClosedLoopM1e_linear_model_frame,
  RefrigerationTrainer_ClosedLoopM1e_linear_model_datarecovery_frame,
  RefrigerationTrainer_ClosedLoopM1e_mayer,
  RefrigerationTrainer_ClosedLoopM1e_lagrange,
  RefrigerationTrainer_ClosedLoopM1e_getInputVarIndicesInOptimization,
  RefrigerationTrainer_ClosedLoopM1e_pickUpBoundsForInputsInOptimization,
  RefrigerationTrainer_ClosedLoopM1e_setInputData,
  RefrigerationTrainer_ClosedLoopM1e_getTimeGrid,
  RefrigerationTrainer_ClosedLoopM1e_symbolicInlineSystem,
  RefrigerationTrainer_ClosedLoopM1e_function_initSynchronous,
  RefrigerationTrainer_ClosedLoopM1e_function_updateSynchronous,
  RefrigerationTrainer_ClosedLoopM1e_function_equationsSynchronous,
  RefrigerationTrainer_ClosedLoopM1e_inputNames,
  RefrigerationTrainer_ClosedLoopM1e_dataReconciliationInputNames,
  RefrigerationTrainer_ClosedLoopM1e_dataReconciliationUnmeasuredVariables,
  NULL,
  NULL,
  NULL,
  NULL,
  -1,
  NULL,
  NULL,
  -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/Users/silam/AppData/Roaming/.openmodelica/libraries/Complex 4.1.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,77,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "ExternalMedia"
#define _OMC_LIT_RESOURCE_1_dir_data "C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,13,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,74,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Modelica"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/Users/silam/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,8,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,78,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ModelicaServices 4.1.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,86,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "RefrigerationTrainer"
#define _OMC_LIT_RESOURCE_4_dir_data "C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,20,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,79,_OMC_LIT_RESOURCE_4_dir_data);

#define _OMC_LIT_RESOURCE_5_name_data "ThermoCycle"
#define _OMC_LIT_RESOURCE_5_dir_data "C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_name,11,_OMC_LIT_RESOURCE_5_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir,97,_OMC_LIT_RESOURCE_5_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,12,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir)}};
void RefrigerationTrainer_ClosedLoopM1e_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &RefrigerationTrainer_ClosedLoopM1e_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "RefrigerationTrainer.ClosedLoopM1e";
  data->modelData->modelFilePrefix = "RefrigerationTrainer.ClosedLoopM1e";
  data->modelData->modelFileName = "ClosedLoopM1e.mo";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer";
  data->modelData->modelGUID = "{0917376c-1157-4d29-87d4-ebd91f44c8de}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "RefrigerationTrainer.ClosedLoopM1e_init.c"
    ;
  static const char contents_info[] =
    #include "RefrigerationTrainer.ClosedLoopM1e_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "RefrigerationTrainer.ClosedLoopM1e_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "RefrigerationTrainer.ClosedLoopM1e_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->modelDataXml.fileName = "RefrigerationTrainer.ClosedLoopM1e_info.json";
  data->modelData->resourcesDir = NULL;
  data->modelData->runTestsuite = 0;
  data->modelData->nStatesArray = 13;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesRealArray = 1286;
  data->modelData->nVariablesIntegerArray = 39;
  data->modelData->nVariablesBooleanArray = 0;
  data->modelData->nVariablesStringArray = 0;
  data->modelData->nParametersRealArray = 160;
  data->modelData->nParametersIntegerArray = 47;
  data->modelData->nParametersBooleanArray = 62;
  data->modelData->nParametersStringArray = 0;
  data->modelData->nParametersReal = 160;
  data->modelData->nParametersInteger = 47;
  data->modelData->nParametersBoolean = 62;
  data->modelData->nParametersString = 0;
  data->modelData->nAliasRealArray = 502;
  data->modelData->nAliasIntegerArray = 10;
  data->modelData->nAliasBooleanArray = 0;
  data->modelData->nAliasStringArray = 0;
  data->modelData->nInputVars = 4;
  data->modelData->nOutputVars = 17;
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 24;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 2083;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 6;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 11;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  data->modelData->nDelayExpressions = 0;
  data->modelData->nBaseClocks = 0;
  data->modelData->nSpatialDistributions = 0;
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->nSetbVars = 0;
  data->modelData->nRelatedBoundaryConditions = 0;
  data->modelData->linearizationDumpLanguage = OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}


#if defined(__MINGW32__) || defined(_MSC_VER)

#if !defined(_UNICODE)
#define _UNICODE
#endif
#if !defined(UNICODE)
#define UNICODE
#endif

#include <windows.h>
char** omc_fixWindowsArgv(int argc, wchar_t **wargv)
{
  char** newargv;
  /* Support for non-ASCII characters
  * Read the unicode command line arguments and translate it to char*
  */
  newargv = (char**)malloc(argc*sizeof(char*));
  for (int i = 0; i < argc; i++) {
    newargv[i] = omc_wchar_to_multibyte_str(wargv[i]);
  }
  return newargv;
}

#define OMC_MAIN wmain
#define OMC_CHAR wchar_t
#define OMC_EXPORT __declspec(dllexport) extern

#else
#define omc_fixWindowsArgv(N, A) (A)
#define OMC_MAIN main
#define OMC_CHAR char
#define OMC_EXPORT extern
#endif

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
#if defined(OMC_DLL_MAIN_DEFINE)
OMC_EXPORT int omcDllMain(int argc, OMC_CHAR **argv)
#else
int OMC_MAIN(int argc, OMC_CHAR** argv)
#endif
{
  char** newargv = omc_fixWindowsArgv(argc, argv);
  /*
    Set the error functions to be used for simulation.
    The default value for them is 'functions' version. Change it here to 'simulation' versions
  */
  omc_assert = omc_assert_simulation;
  omc_assert_withEquationIndexes = omc_assert_simulation_withEquationIndexes;

  omc_assert_warning_withEquationIndexes = omc_assert_warning_simulation_withEquationIndexes;
  omc_assert_warning = omc_assert_warning_simulation;
  omc_terminate = omc_terminate_simulation;
  omc_throw = omc_throw_simulation;

  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    RefrigerationTrainer_ClosedLoopM1e_setupDataStruc(&data, threadData);
    res = _main_initRuntimeAndSimulation(argc, newargv, &data, threadData);
    if(res == 0) {
      if (omc_flag[FLAG_MOO_OPTIMIZATION]) {
        res = _main_OptimizationRuntime(argc, newargv, &data, threadData);
      } else {
        res = _main_SimulationRuntime(argc, newargv, &data, threadData);
      }
    }
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  return res;
}

#ifdef __cplusplus
}
#endif


