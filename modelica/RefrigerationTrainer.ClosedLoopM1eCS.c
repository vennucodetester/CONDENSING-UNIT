/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "RefrigerationTrainer.ClosedLoopM1eCS_model.h"
#include "simulation/solver/events.h"
#include "simulation/arrayIndex.h"

/* FIXME these defines are ugly and hard to read, why not use direct function pointers instead? */
#define prefixedName_performSimulation RefrigerationTrainer_ClosedLoopM1eCS_performSimulation
#define prefixedName_updateContinuousSystem RefrigerationTrainer_ClosedLoopM1eCS_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation RefrigerationTrainer_ClosedLoopM1eCS_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>


/* dummy VARINFO and FILEINFO */
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int RefrigerationTrainer_ClosedLoopM1eCS_input_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_input_function_init(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_inputNames(DATA *data, char ** names){
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_data_function(DATA *data, threadData_t *threadData)
{
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_dataReconciliationInputNames(DATA *data, char ** names){
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_dataReconciliationUnmeasuredVariables(DATA *data, char ** names)
{
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_output_function(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->outputVars[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[591]] /* M_charge_kg variable */);
  data->simulationInfo->outputVars[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* Q_cond_w variable */);
  data->simulationInfo->outputVars[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* Q_evap_w variable */);
  data->simulationInfo->outputVars[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[594]] /* T_air_in_evap_k variable */);
  data->simulationInfo->outputVars[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* T_air_off_cond_k variable */);
  data->simulationInfo->outputVars[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* T_air_off_evap_k variable */);
  data->simulationInfo->outputVars[6] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* T_cond_sat_k variable */);
  data->simulationInfo->outputVars[7] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[598]] /* T_discharge_k variable */);
  data->simulationInfo->outputVars[8] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[599]] /* T_evap_sat_k variable */);
  data->simulationInfo->outputVars[9] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[600]] /* T_liquid_k variable */);
  data->simulationInfo->outputVars[10] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[601]] /* T_suction_k variable */);
  data->simulationInfo->outputVars[11] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* W_comp_w variable */);
  data->simulationInfo->outputVars[12] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[906]] /* cop variable */);
  data->simulationInfo->outputVars[13] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* m_dot_circuit_kg_s_1 variable */);
  data->simulationInfo->outputVars[14] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */);
  data->simulationInfo->outputVars[15] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1181]] /* m_dot_kg_s variable */);
  data->simulationInfo->outputVars[16] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1182]] /* p_cond_in_pa variable */);
  data->simulationInfo->outputVars[17] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1183]] /* p_discharge_pa variable */);
  data->simulationInfo->outputVars[18] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1184]] /* p_evap_out_pa variable */);
  data->simulationInfo->outputVars[19] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* p_lift_pa variable */);
  data->simulationInfo->outputVars[20] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* p_suction_pa variable */);
  data->simulationInfo->outputVars[21] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* p_txv_inlet_pa variable */);
  data->simulationInfo->outputVars[22] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* res_energy_w variable */);
  data->simulationInfo->outputVars[23] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* res_mass_kg_s variable */);
  data->simulationInfo->outputVars[24] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1190]] /* res_subcool_k variable */);
  data->simulationInfo->outputVars[25] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1191]] /* res_superheat_k variable */);
  data->simulationInfo->outputVars[26] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1192]] /* subcooling_k variable */);
  data->simulationInfo->outputVars[27] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1193]] /* superheat_circuit_k_1 variable */);
  data->simulationInfo->outputVars[28] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* superheat_circuit_k_2 variable */);
  data->simulationInfo->outputVars[29] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* superheat_k variable */);
  data->simulationInfo->outputVars[30] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1196]] /* superheat_mixed_k variable */);
  data->simulationInfo->outputVars[31] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* txv_opening_cmd STATE(1) */);
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_setc_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_setb_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}


/*
equation index: 788
type: SIMPLE_ASSIGN
comp.rpm = 60.0 * comp.N_rot
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,788};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* comp.rpm variable */) = (60.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* comp.N_rot variable */));
  threadData->lastEquationSolved = 788;
}

/*
equation index: 789
type: SIMPLE_ASSIGN
comp.V_dot_su = comp.epsilon_v * comp.V_s * comp.N_rot
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,789};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* comp.V_dot_su variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* comp.epsilon_v PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* comp.V_s PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* comp.N_rot variable */)));
  threadData->lastEquationSolved = 789;
}

/*
equation index: 790
type: SIMPLE_ASSIGN
$DER.drive.phi = drive.w_fixed
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,790};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* der(drive.phi) STATE_DER */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* drive.w_fixed PARAM */);
  threadData->lastEquationSolved = 790;
}

void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_791(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_792(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_793(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_794(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_795(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_796(DATA*, threadData_t*);
/*
equation index: 797
indexNonlinear: 3
type: NONLINEAR

vars: {comp.h_su}
eqns: {791, 792, 793, 794, 795, 796}
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,797};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 797 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */);
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,797};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 797 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  threadData->lastEquationSolved = 797;
}

/*
equation index: 798
type: SIMPLE_ASSIGN
$whenCondition2 = time > 0.0 and (comp.h_ex < 1e5 or comp.h_ex > comp.h_valid_max)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,798};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  tmp1 = 1.0;
  tmp2 = 0.0;
  relationhysteresis(data, &tmp0, data->localData[0]->timeValue, 0.0, tmp1, tmp2, 2, Greater, GreaterZC);
  tmp4 = 1e6;
  tmp5 = 1e5;
  relationhysteresis(data, &tmp3, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */), 1e5, tmp4, tmp5, 3, Less, LessZC);
  tmp7 = 1e6;
  tmp8 = 1e6;
  relationhysteresis(data, &tmp6, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* comp.h_valid_max PARAM */), tmp7, tmp8, 4, Greater, GreaterZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = (tmp0 && (tmp3 || tmp6));
  threadData->lastEquationSolved = 798;
}

/*
equation index: 799
type: SIMPLE_ASSIGN
$whenCondition1 = time > 0.0 and (comp.h_su < 1e5 or comp.h_su > comp.h_valid_max)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,799};
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  tmp10 = 1.0;
  tmp11 = 0.0;
  relationhysteresis(data, &tmp9, data->localData[0]->timeValue, 0.0, tmp10, tmp11, 2, Greater, GreaterZC);
  tmp13 = 1e6;
  tmp14 = 1e5;
  relationhysteresis(data, &tmp12, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */), 1e5, tmp13, tmp14, 5, Less, LessZC);
  tmp16 = 1e6;
  tmp17 = 1e6;
  relationhysteresis(data, &tmp15, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* comp.h_valid_max PARAM */), tmp16, tmp17, 6, Greater, GreaterZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = (tmp9 && (tmp12 || tmp15));
  threadData->lastEquationSolved = 799;
}

/*
equation index: 800
type: SIMPLE_ASSIGN
W_comp_w = m_dot_circuit_kg_s_2 * (comp.h_ex - comp.h_su)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,800};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* W_comp_w variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */));
  threadData->lastEquationSolved = 800;
}

/*
equation index: 801
type: SIMPLE_ASSIGN
drive.flange.tau = (-0.15915494309189535) * W_comp_w / comp.N_rot
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,801};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* drive.flange.tau variable */) = (-0.15915494309189535) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* W_comp_w variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* comp.N_rot variable */),"comp.N_rot",equationIndexes));
  threadData->lastEquationSolved = 801;
}

/*
equation index: 802
type: SIMPLE_ASSIGN
$cse3 = max(W_comp_w, 1.0)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,802};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* $cse3 variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* W_comp_w variable */),1.0);
  threadData->lastEquationSolved = 802;
}

/*
equation index: 803
type: SIMPLE_ASSIGN
cond.Cells[1].hnode_su = (if noEvent((-m_dot_circuit_kg_s_2) > 0.0) then 0.0 else comp.h_ex) / (1.0 - (if noEvent((-m_dot_circuit_kg_s_2) > 0.0) then 1.0 else 0.0))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,803};
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  tmp18 = Greater((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */)),0.0);
  tmp19 = Greater((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cond.Cells[1].hnode_su variable */) = DIVISION_SIM((tmp18?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */)),1.0 - ((tmp19?1.0:0.0)),"1.0 - (if noEvent((-m_dot_circuit_kg_s_2) > 0.0) then 1.0 else 0.0)",equationIndexes);
  threadData->lastEquationSolved = 803;
}

/*
equation index: 804
type: SIMPLE_ASSIGN
cond.Cells[1].M_dot_su = m_dot_circuit_kg_s_2 / (*Real*)(cond.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,804};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cond.Cells[1].M_dot_su variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* cond.Cells[1].Nt PARAM */)),"/*Real*/(cond.Cells[1].Nt)",equationIndexes);
  threadData->lastEquationSolved = 804;
}

/*
equation index: 805
type: SIMPLE_ASSIGN
cond.Cells[1].heatTransfer.U[1] = cond.Cells[1].heatTransfer.Unom * (1e-5 + (1e-6 + (cond.Cells[1].M_dot_su / cond.Cells[1].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,805};
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  tmp20 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cond.Cells[1].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[739]] /* cond.Cells[1].heatTransfer.Mdotnom variable */),"cond.Cells[1].heatTransfer.Mdotnom",equationIndexes);
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* cond.Cells[1].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cond.Cells[1].heatTransfer.Unom variable */)) * (1e-5 + tmp23);
  threadData->lastEquationSolved = 805;
}

/*
equation index: 806
type: SIMPLE_ASSIGN
evap.Cells[5].M_dot_ex = m_dot_circuit_kg_s_2 / (*Real*)(evap.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,806};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* evap.Cells[5].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[35]] /* evap.Cells[5].Nt PARAM */)),"/*Real*/(evap.Cells[5].Nt)",equationIndexes);
  threadData->lastEquationSolved = 806;
}

/*
equation index: 807
type: SIMPLE_ASSIGN
m_dot_kg_s = m_dot_circuit_kg_s_2
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,807};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1181]] /* m_dot_kg_s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */);
  threadData->lastEquationSolved = 807;
}

/*
equation index: 808
type: SIMPLE_ASSIGN
m_dot_circuit_kg_s_1 = m_dot_circuit_kg_s_2
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,808};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* m_dot_circuit_kg_s_1 variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */);
  threadData->lastEquationSolved = 808;
}

/*
equation index: 809
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setSat_p(cond.Cells[1].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,809};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties tmp28;
  tmp28 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.Tsat variable */) = tmp28._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.dTp variable */) = tmp28._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.ddldp variable */) = tmp28._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.ddvdp variable */) = tmp28._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.dhldp variable */) = tmp28._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.dhvdp variable */) = tmp28._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.dl variable */) = tmp28._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[105]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.dv variable */) = tmp28._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.hl variable */) = tmp28._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.hv variable */) = tmp28._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.psat variable */) = tmp28._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.sigma variable */) = tmp28._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.sl variable */) = tmp28._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.sv variable */) = tmp28._sv;
  ;
  threadData->lastEquationSolved = 809;
}

/*
equation index: 810
type: SIMPLE_ASSIGN
cond.Cells[1].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,810};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cond.Cells[1].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.Tsat variable */);
  threadData->lastEquationSolved = 810;
}

/*
equation index: 811
type: SIMPLE_ASSIGN
cond.Cells[1].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,811};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cond.Cells[1].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.dTp variable */);
  threadData->lastEquationSolved = 811;
}

/*
equation index: 812
type: SIMPLE_ASSIGN
cond.Cells[1].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,812};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cond.Cells[1].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.ddldp variable */);
  threadData->lastEquationSolved = 812;
}

/*
equation index: 813
type: SIMPLE_ASSIGN
cond.Cells[1].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,813};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* cond.Cells[1].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.ddvdp variable */);
  threadData->lastEquationSolved = 813;
}

/*
equation index: 814
type: SIMPLE_ASSIGN
cond.Cells[1].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,814};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* cond.Cells[1].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.dhldp variable */);
  threadData->lastEquationSolved = 814;
}

/*
equation index: 815
type: SIMPLE_ASSIGN
cond.Cells[1].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,815};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[790]] /* cond.Cells[1].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.dhvdp variable */);
  threadData->lastEquationSolved = 815;
}

/*
equation index: 816
type: SIMPLE_ASSIGN
cond.Cells[1].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,816};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* cond.Cells[1].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.dl variable */);
  threadData->lastEquationSolved = 816;
}

/*
equation index: 817
type: SIMPLE_ASSIGN
cond.Cells[1].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,817};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* cond.Cells[1].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[105]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.dv variable */);
  threadData->lastEquationSolved = 817;
}

/*
equation index: 818
type: SIMPLE_ASSIGN
cond.Cells[1].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,818};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cond.Cells[1].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.hl variable */);
  threadData->lastEquationSolved = 818;
}

/*
equation index: 819
type: SIMPLE_ASSIGN
cond.Cells[1].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,819};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cond.Cells[1].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.hv variable */);
  threadData->lastEquationSolved = 819;
}

/*
equation index: 820
type: SIMPLE_ASSIGN
cond.Cells[1].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,820};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cond.Cells[1].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.psat variable */);
  threadData->lastEquationSolved = 820;
}

/*
equation index: 821
type: SIMPLE_ASSIGN
cond.Cells[1].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,821};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* cond.Cells[1].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.sigma variable */);
  threadData->lastEquationSolved = 821;
}

/*
equation index: 822
type: SIMPLE_ASSIGN
cond.Cells[1].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,822};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* cond.Cells[1].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.sl variable */);
  threadData->lastEquationSolved = 822;
}

/*
equation index: 823
type: SIMPLE_ASSIGN
cond.Cells[1].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,823};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* cond.Cells[1].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties809.sv variable */);
  threadData->lastEquationSolved = 823;
}

/*
equation index: 824
type: SIMPLE_ASSIGN
cond.Cells[1].x = (cond.Cells[1].h - cond.Cells[1].h_l) / (cond.Cells[1].h_v - cond.Cells[1].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,824};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* cond.Cells[1].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cond.Cells[1].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cond.Cells[1].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cond.Cells[1].h_l variable */),"cond.Cells[1].h_v - cond.Cells[1].h_l",equationIndexes);
  threadData->lastEquationSolved = 824;
}

/*
equation index: 825
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setState_ph(cond.Cells[1].p, cond.Cells[1].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,825};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState tmp29;
  tmp29 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.T variable */) = tmp29._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.a variable */) = tmp29._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.beta variable */) = tmp29._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.cp variable */) = tmp29._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[242]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.cv variable */) = tmp29._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.d variable */) = tmp29._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[244]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.ddhp variable */) = tmp29._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.ddph variable */) = tmp29._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.eta variable */) = tmp29._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.h variable */) = tmp29._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.kappa variable */) = tmp29._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.lambda variable */) = tmp29._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.p variable */) = tmp29._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[5]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.phase variable */) = tmp29._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.s variable */) = tmp29._s;
  ;
  threadData->lastEquationSolved = 825;
}

/*
equation index: 826
type: SIMPLE_ASSIGN
cond.Cells[1].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,826};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* cond.Cells[1].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.T variable */);
  threadData->lastEquationSolved = 826;
}

/*
equation index: 827
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,827};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cond.Cells[1].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.a variable */);
  threadData->lastEquationSolved = 827;
}

/*
equation index: 828
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,828};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* cond.Cells[1].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.beta variable */);
  threadData->lastEquationSolved = 828;
}

/*
equation index: 829
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,829};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* cond.Cells[1].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.cp variable */);
  threadData->lastEquationSolved = 829;
}

/*
equation index: 830
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,830};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cond.Cells[1].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[242]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.cv variable */);
  threadData->lastEquationSolved = 830;
}

/*
equation index: 831
type: SIMPLE_ASSIGN
cond.Cells[1].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,831};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cond.Cells[1].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.d variable */);
  threadData->lastEquationSolved = 831;
}

/*
equation index: 832
type: SIMPLE_ASSIGN
cond.Cells[1].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,832};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* cond.Cells[1].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[244]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.ddhp variable */);
  threadData->lastEquationSolved = 832;
}

/*
equation index: 833
type: SIMPLE_ASSIGN
cond.Cells[1].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,833};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* cond.Cells[1].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.ddph variable */);
  threadData->lastEquationSolved = 833;
}

/*
equation index: 834
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,834};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* cond.Cells[1].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.eta variable */);
  threadData->lastEquationSolved = 834;
}

/*
equation index: 835
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,835};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* cond.Cells[1].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.h variable */);
  threadData->lastEquationSolved = 835;
}

/*
equation index: 836
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,836};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[709]] /* cond.Cells[1].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.kappa variable */);
  threadData->lastEquationSolved = 836;
}

/*
equation index: 837
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,837};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cond.Cells[1].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.lambda variable */);
  threadData->lastEquationSolved = 837;
}

/*
equation index: 838
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,838};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cond.Cells[1].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.p variable */);
  threadData->lastEquationSolved = 838;
}

/*
equation index: 839
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,839};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[20]] /* cond.Cells[1].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[5]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.phase variable */);
  threadData->lastEquationSolved = 839;
}

/*
equation index: 840
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,840};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[1].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState825.s variable */);
  threadData->lastEquationSolved = 840;
}

/*
equation index: 849
type: LINEAR

<var>coil_cond.Q_cell[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,849};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[603]] /* coil_cond.Q_cell[1] variable */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 849 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,849};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 849 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* coil_cond.Q_cell[1] variable */) = aux_x[0];

  threadData->lastEquationSolved = 849;
}

/*
equation index: 850
type: SIMPLE_ASSIGN
cond.Cells[1].Q_tot = cond.Cells[1].Ai * cond.Cells[1].qdot
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,850};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[654]] /* cond.Cells[1].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[33]] /* cond.Cells[1].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cond.Cells[1].qdot variable */));
  threadData->lastEquationSolved = 850;
}

/*
equation index: 851
type: SIMPLE_ASSIGN
cond.Cells[1].M_tot = cond.Cells[1].Vi * cond.Cells[1].rho
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,851};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* cond.Cells[1].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* cond.Cells[1].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cond.Cells[1].rho variable */));
  threadData->lastEquationSolved = 851;
}

/*
equation index: 852
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setSat_p(cond.Cells[1].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,852};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties tmp30;
  tmp30 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.Tsat variable */) = tmp30._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.dTp variable */) = tmp30._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.ddldp variable */) = tmp30._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.ddvdp variable */) = tmp30._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.dhldp variable */) = tmp30._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.dhvdp variable */) = tmp30._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.dl variable */) = tmp30._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.dv variable */) = tmp30._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.hl variable */) = tmp30._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[121]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.hv variable */) = tmp30._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.psat variable */) = tmp30._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.sigma variable */) = tmp30._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.sl variable */) = tmp30._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.sv variable */) = tmp30._sv;
  ;
  threadData->lastEquationSolved = 852;
}

/*
equation index: 853
type: SIMPLE_ASSIGN
cond.Cells[2].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,853};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cond.Cells[2].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.Tsat variable */);
  threadData->lastEquationSolved = 853;
}

/*
equation index: 854
type: SIMPLE_ASSIGN
cond.Cells[2].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,854};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* cond.Cells[2].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.dTp variable */);
  threadData->lastEquationSolved = 854;
}

/*
equation index: 855
type: SIMPLE_ASSIGN
cond.Cells[2].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,855};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* cond.Cells[2].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.ddldp variable */);
  threadData->lastEquationSolved = 855;
}

/*
equation index: 856
type: SIMPLE_ASSIGN
cond.Cells[2].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,856};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[781]] /* cond.Cells[2].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.ddvdp variable */);
  threadData->lastEquationSolved = 856;
}

/*
equation index: 857
type: SIMPLE_ASSIGN
cond.Cells[2].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,857};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cond.Cells[2].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.dhldp variable */);
  threadData->lastEquationSolved = 857;
}

/*
equation index: 858
type: SIMPLE_ASSIGN
cond.Cells[2].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,858};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* cond.Cells[2].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.dhvdp variable */);
  threadData->lastEquationSolved = 858;
}

/*
equation index: 859
type: SIMPLE_ASSIGN
cond.Cells[2].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,859};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cond.Cells[2].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.dl variable */);
  threadData->lastEquationSolved = 859;
}

/*
equation index: 860
type: SIMPLE_ASSIGN
cond.Cells[2].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,860};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* cond.Cells[2].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.dv variable */);
  threadData->lastEquationSolved = 860;
}

/*
equation index: 861
type: SIMPLE_ASSIGN
cond.Cells[2].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,861};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cond.Cells[2].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.hl variable */);
  threadData->lastEquationSolved = 861;
}

/*
equation index: 862
type: SIMPLE_ASSIGN
cond.Cells[2].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,862};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cond.Cells[2].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[121]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.hv variable */);
  threadData->lastEquationSolved = 862;
}

/*
equation index: 863
type: SIMPLE_ASSIGN
cond.Cells[2].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,863};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* cond.Cells[2].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.psat variable */);
  threadData->lastEquationSolved = 863;
}

/*
equation index: 864
type: SIMPLE_ASSIGN
cond.Cells[2].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,864};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* cond.Cells[2].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.sigma variable */);
  threadData->lastEquationSolved = 864;
}

/*
equation index: 865
type: SIMPLE_ASSIGN
cond.Cells[2].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,865};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* cond.Cells[2].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.sl variable */);
  threadData->lastEquationSolved = 865;
}

/*
equation index: 866
type: SIMPLE_ASSIGN
cond.Cells[2].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,866};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* cond.Cells[2].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties852.sv variable */);
  threadData->lastEquationSolved = 866;
}

/*
equation index: 867
type: SIMPLE_ASSIGN
cond.Cells[2].x = (cond.Cells[2].h - cond.Cells[2].h_l) / (cond.Cells[2].h_v - cond.Cells[2].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,867};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* cond.Cells[2].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cond.Cells[2].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cond.Cells[2].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cond.Cells[2].h_l variable */),"cond.Cells[2].h_v - cond.Cells[2].h_l",equationIndexes);
  threadData->lastEquationSolved = 867;
}

/*
equation index: 868
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setState_ph(cond.Cells[1].p, cond.Cells[2].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,868};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState tmp31;
  tmp31 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.T variable */) = tmp31._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.a variable */) = tmp31._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.beta variable */) = tmp31._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.cp variable */) = tmp31._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.cv variable */) = tmp31._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.d variable */) = tmp31._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.ddhp variable */) = tmp31._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.ddph variable */) = tmp31._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.eta variable */) = tmp31._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.h variable */) = tmp31._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.kappa variable */) = tmp31._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.lambda variable */) = tmp31._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.p variable */) = tmp31._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[6]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.phase variable */) = tmp31._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.s variable */) = tmp31._s;
  ;
  threadData->lastEquationSolved = 868;
}

/*
equation index: 869
type: SIMPLE_ASSIGN
cond.Cells[2].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,869};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[660]] /* cond.Cells[2].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.T variable */);
  threadData->lastEquationSolved = 869;
}

/*
equation index: 870
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,870};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cond.Cells[2].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.a variable */);
  threadData->lastEquationSolved = 870;
}

/*
equation index: 871
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,871};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* cond.Cells[2].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.beta variable */);
  threadData->lastEquationSolved = 871;
}

/*
equation index: 872
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,872};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* cond.Cells[2].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.cp variable */);
  threadData->lastEquationSolved = 872;
}

/*
equation index: 873
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,873};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* cond.Cells[2].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.cv variable */);
  threadData->lastEquationSolved = 873;
}

/*
equation index: 874
type: SIMPLE_ASSIGN
cond.Cells[2].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,874};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cond.Cells[2].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.d variable */);
  threadData->lastEquationSolved = 874;
}

/*
equation index: 875
type: SIMPLE_ASSIGN
cond.Cells[2].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,875};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[670]] /* cond.Cells[2].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.ddhp variable */);
  threadData->lastEquationSolved = 875;
}

/*
equation index: 876
type: SIMPLE_ASSIGN
cond.Cells[2].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,876};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* cond.Cells[2].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.ddph variable */);
  threadData->lastEquationSolved = 876;
}

/*
equation index: 877
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,877};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* cond.Cells[2].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.eta variable */);
  threadData->lastEquationSolved = 877;
}

/*
equation index: 878
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,878};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* cond.Cells[2].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.h variable */);
  threadData->lastEquationSolved = 878;
}

/*
equation index: 879
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,879};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cond.Cells[2].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.kappa variable */);
  threadData->lastEquationSolved = 879;
}

/*
equation index: 880
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,880};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cond.Cells[2].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.lambda variable */);
  threadData->lastEquationSolved = 880;
}

/*
equation index: 881
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,881};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cond.Cells[2].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.p variable */);
  threadData->lastEquationSolved = 881;
}

/*
equation index: 882
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,882};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[21]] /* cond.Cells[2].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[6]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.phase variable */);
  threadData->lastEquationSolved = 882;
}

/*
equation index: 883
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,883};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[2].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState868.s variable */);
  threadData->lastEquationSolved = 883;
}

/*
equation index: 884
type: SIMPLE_ASSIGN
cond.Cells[2].M_tot = cond.Cells[2].Vi * cond.Cells[2].rho
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,884};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cond.Cells[2].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* cond.Cells[2].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cond.Cells[2].rho variable */));
  threadData->lastEquationSolved = 884;
}

/*
equation index: 885
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setSat_p(cond.Cells[1].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,885};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties tmp32;
  tmp32 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.Tsat variable */) = tmp32._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.dTp variable */) = tmp32._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.ddldp variable */) = tmp32._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.ddvdp variable */) = tmp32._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.dhldp variable */) = tmp32._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.dhvdp variable */) = tmp32._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[132]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.dl variable */) = tmp32._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[133]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.dv variable */) = tmp32._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.hl variable */) = tmp32._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.hv variable */) = tmp32._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.psat variable */) = tmp32._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.sigma variable */) = tmp32._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.sl variable */) = tmp32._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[139]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.sv variable */) = tmp32._sv;
  ;
  threadData->lastEquationSolved = 885;
}

/*
equation index: 886
type: SIMPLE_ASSIGN
cond.Cells[3].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,886};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cond.Cells[3].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.Tsat variable */);
  threadData->lastEquationSolved = 886;
}

/*
equation index: 887
type: SIMPLE_ASSIGN
cond.Cells[3].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,887};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cond.Cells[3].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.dTp variable */);
  threadData->lastEquationSolved = 887;
}

/*
equation index: 888
type: SIMPLE_ASSIGN
cond.Cells[3].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,888};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* cond.Cells[3].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.ddldp variable */);
  threadData->lastEquationSolved = 888;
}

/*
equation index: 889
type: SIMPLE_ASSIGN
cond.Cells[3].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,889};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* cond.Cells[3].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.ddvdp variable */);
  threadData->lastEquationSolved = 889;
}

/*
equation index: 890
type: SIMPLE_ASSIGN
cond.Cells[3].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,890};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* cond.Cells[3].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.dhldp variable */);
  threadData->lastEquationSolved = 890;
}

/*
equation index: 891
type: SIMPLE_ASSIGN
cond.Cells[3].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,891};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* cond.Cells[3].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.dhvdp variable */);
  threadData->lastEquationSolved = 891;
}

/*
equation index: 892
type: SIMPLE_ASSIGN
cond.Cells[3].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,892};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cond.Cells[3].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[132]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.dl variable */);
  threadData->lastEquationSolved = 892;
}

/*
equation index: 893
type: SIMPLE_ASSIGN
cond.Cells[3].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,893};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* cond.Cells[3].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[133]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.dv variable */);
  threadData->lastEquationSolved = 893;
}

/*
equation index: 894
type: SIMPLE_ASSIGN
cond.Cells[3].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,894};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cond.Cells[3].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.hl variable */);
  threadData->lastEquationSolved = 894;
}

/*
equation index: 895
type: SIMPLE_ASSIGN
cond.Cells[3].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,895};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cond.Cells[3].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.hv variable */);
  threadData->lastEquationSolved = 895;
}

/*
equation index: 896
type: SIMPLE_ASSIGN
cond.Cells[3].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,896};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* cond.Cells[3].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.psat variable */);
  threadData->lastEquationSolved = 896;
}

/*
equation index: 897
type: SIMPLE_ASSIGN
cond.Cells[3].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,897};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* cond.Cells[3].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.sigma variable */);
  threadData->lastEquationSolved = 897;
}

/*
equation index: 898
type: SIMPLE_ASSIGN
cond.Cells[3].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,898};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* cond.Cells[3].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.sl variable */);
  threadData->lastEquationSolved = 898;
}

/*
equation index: 899
type: SIMPLE_ASSIGN
cond.Cells[3].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,899};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[822]] /* cond.Cells[3].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[139]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties885.sv variable */);
  threadData->lastEquationSolved = 899;
}

/*
equation index: 900
type: SIMPLE_ASSIGN
cond.Cells[3].x = (cond.Cells[3].h - cond.Cells[3].h_l) / (cond.Cells[3].h_v - cond.Cells[3].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,900};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* cond.Cells[3].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cond.Cells[3].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cond.Cells[3].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cond.Cells[3].h_l variable */),"cond.Cells[3].h_v - cond.Cells[3].h_l",equationIndexes);
  threadData->lastEquationSolved = 900;
}

/*
equation index: 901
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setState_ph(cond.Cells[1].p, cond.Cells[3].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,901};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState tmp33;
  tmp33 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.T variable */) = tmp33._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.a variable */) = tmp33._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.beta variable */) = tmp33._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.cp variable */) = tmp33._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.cv variable */) = tmp33._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.d variable */) = tmp33._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.ddhp variable */) = tmp33._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.ddph variable */) = tmp33._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.eta variable */) = tmp33._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.h variable */) = tmp33._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.kappa variable */) = tmp33._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.lambda variable */) = tmp33._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.p variable */) = tmp33._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[7]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.phase variable */) = tmp33._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.s variable */) = tmp33._s;
  ;
  threadData->lastEquationSolved = 901;
}

/*
equation index: 902
type: SIMPLE_ASSIGN
cond.Cells[3].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,902};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* cond.Cells[3].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.T variable */);
  threadData->lastEquationSolved = 902;
}

/*
equation index: 903
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,903};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* cond.Cells[3].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.a variable */);
  threadData->lastEquationSolved = 903;
}

/*
equation index: 904
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,904};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* cond.Cells[3].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.beta variable */);
  threadData->lastEquationSolved = 904;
}

/*
equation index: 905
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,905};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cond.Cells[3].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.cp variable */);
  threadData->lastEquationSolved = 905;
}

/*
equation index: 906
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,906};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cond.Cells[3].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.cv variable */);
  threadData->lastEquationSolved = 906;
}

/*
equation index: 907
type: SIMPLE_ASSIGN
cond.Cells[3].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,907};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cond.Cells[3].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.d variable */);
  threadData->lastEquationSolved = 907;
}

/*
equation index: 908
type: SIMPLE_ASSIGN
cond.Cells[3].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,908};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* cond.Cells[3].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.ddhp variable */);
  threadData->lastEquationSolved = 908;
}

/*
equation index: 909
type: SIMPLE_ASSIGN
cond.Cells[3].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,909};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* cond.Cells[3].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.ddph variable */);
  threadData->lastEquationSolved = 909;
}

/*
equation index: 910
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,910};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[701]] /* cond.Cells[3].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.eta variable */);
  threadData->lastEquationSolved = 910;
}

/*
equation index: 911
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,911};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[706]] /* cond.Cells[3].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.h variable */);
  threadData->lastEquationSolved = 911;
}

/*
equation index: 912
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,912};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[711]] /* cond.Cells[3].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.kappa variable */);
  threadData->lastEquationSolved = 912;
}

/*
equation index: 913
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,913};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cond.Cells[3].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.lambda variable */);
  threadData->lastEquationSolved = 913;
}

/*
equation index: 914
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,914};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* cond.Cells[3].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.p variable */);
  threadData->lastEquationSolved = 914;
}

/*
equation index: 915
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,915};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[22]] /* cond.Cells[3].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[7]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.phase variable */);
  threadData->lastEquationSolved = 915;
}

/*
equation index: 916
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,916};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[3].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState901.s variable */);
  threadData->lastEquationSolved = 916;
}

/*
equation index: 917
type: SIMPLE_ASSIGN
cond.Cells[3].M_tot = cond.Cells[3].Vi * cond.Cells[3].rho
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,917};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cond.Cells[3].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* cond.Cells[3].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cond.Cells[3].rho variable */));
  threadData->lastEquationSolved = 917;
}

/*
equation index: 918
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setSat_p(cond.Cells[1].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,918};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties tmp34;
  tmp34 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.Tsat variable */) = tmp34._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.dTp variable */) = tmp34._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.ddldp variable */) = tmp34._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.ddvdp variable */) = tmp34._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.dhldp variable */) = tmp34._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[145]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.dhvdp variable */) = tmp34._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.dl variable */) = tmp34._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.dv variable */) = tmp34._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.hl variable */) = tmp34._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.hv variable */) = tmp34._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.psat variable */) = tmp34._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.sigma variable */) = tmp34._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.sl variable */) = tmp34._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.sv variable */) = tmp34._sv;
  ;
  threadData->lastEquationSolved = 918;
}

/*
equation index: 919
type: SIMPLE_ASSIGN
cond.Cells[4].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,919};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cond.Cells[4].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.Tsat variable */);
  threadData->lastEquationSolved = 919;
}

/*
equation index: 920
type: SIMPLE_ASSIGN
cond.Cells[4].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,920};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cond.Cells[4].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.dTp variable */);
  threadData->lastEquationSolved = 920;
}

/*
equation index: 921
type: SIMPLE_ASSIGN
cond.Cells[4].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,921};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* cond.Cells[4].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.ddldp variable */);
  threadData->lastEquationSolved = 921;
}

/*
equation index: 922
type: SIMPLE_ASSIGN
cond.Cells[4].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,922};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* cond.Cells[4].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.ddvdp variable */);
  threadData->lastEquationSolved = 922;
}

/*
equation index: 923
type: SIMPLE_ASSIGN
cond.Cells[4].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,923};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* cond.Cells[4].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.dhldp variable */);
  threadData->lastEquationSolved = 923;
}

/*
equation index: 924
type: SIMPLE_ASSIGN
cond.Cells[4].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,924};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* cond.Cells[4].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[145]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.dhvdp variable */);
  threadData->lastEquationSolved = 924;
}

/*
equation index: 925
type: SIMPLE_ASSIGN
cond.Cells[4].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,925};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cond.Cells[4].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.dl variable */);
  threadData->lastEquationSolved = 925;
}

/*
equation index: 926
type: SIMPLE_ASSIGN
cond.Cells[4].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,926};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* cond.Cells[4].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.dv variable */);
  threadData->lastEquationSolved = 926;
}

/*
equation index: 927
type: SIMPLE_ASSIGN
cond.Cells[4].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,927};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cond.Cells[4].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.hl variable */);
  threadData->lastEquationSolved = 927;
}

/*
equation index: 928
type: SIMPLE_ASSIGN
cond.Cells[4].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,928};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cond.Cells[4].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.hv variable */);
  threadData->lastEquationSolved = 928;
}

/*
equation index: 929
type: SIMPLE_ASSIGN
cond.Cells[4].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,929};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* cond.Cells[4].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.psat variable */);
  threadData->lastEquationSolved = 929;
}

/*
equation index: 930
type: SIMPLE_ASSIGN
cond.Cells[4].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,930};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* cond.Cells[4].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.sigma variable */);
  threadData->lastEquationSolved = 930;
}

/*
equation index: 931
type: SIMPLE_ASSIGN
cond.Cells[4].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,931};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* cond.Cells[4].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.sl variable */);
  threadData->lastEquationSolved = 931;
}

/*
equation index: 932
type: SIMPLE_ASSIGN
cond.Cells[4].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,932};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[823]] /* cond.Cells[4].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties918.sv variable */);
  threadData->lastEquationSolved = 932;
}

/*
equation index: 933
type: SIMPLE_ASSIGN
cond.Cells[4].x = (cond.Cells[4].h - cond.Cells[4].h_l) / (cond.Cells[4].h_v - cond.Cells[4].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,933};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* cond.Cells[4].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cond.Cells[4].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cond.Cells[4].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cond.Cells[4].h_l variable */),"cond.Cells[4].h_v - cond.Cells[4].h_l",equationIndexes);
  threadData->lastEquationSolved = 933;
}

/*
equation index: 934
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setState_ph(cond.Cells[1].p, cond.Cells[4].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,934};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState tmp35;
  tmp35 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.T variable */) = tmp35._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.a variable */) = tmp35._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.beta variable */) = tmp35._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.cp variable */) = tmp35._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.cv variable */) = tmp35._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.d variable */) = tmp35._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.ddhp variable */) = tmp35._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.ddph variable */) = tmp35._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.eta variable */) = tmp35._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.h variable */) = tmp35._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.kappa variable */) = tmp35._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.lambda variable */) = tmp35._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.p variable */) = tmp35._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[8]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.phase variable */) = tmp35._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.s variable */) = tmp35._s;
  ;
  threadData->lastEquationSolved = 934;
}

/*
equation index: 935
type: SIMPLE_ASSIGN
cond.Cells[4].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,935};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[662]] /* cond.Cells[4].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.T variable */);
  threadData->lastEquationSolved = 935;
}

/*
equation index: 936
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,936};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* cond.Cells[4].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.a variable */);
  threadData->lastEquationSolved = 936;
}

/*
equation index: 937
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,937};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* cond.Cells[4].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.beta variable */);
  threadData->lastEquationSolved = 937;
}

/*
equation index: 938
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,938};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cond.Cells[4].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.cp variable */);
  threadData->lastEquationSolved = 938;
}

/*
equation index: 939
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,939};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cond.Cells[4].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.cv variable */);
  threadData->lastEquationSolved = 939;
}

/*
equation index: 940
type: SIMPLE_ASSIGN
cond.Cells[4].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,940};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cond.Cells[4].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.d variable */);
  threadData->lastEquationSolved = 940;
}

/*
equation index: 941
type: SIMPLE_ASSIGN
cond.Cells[4].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,941};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* cond.Cells[4].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.ddhp variable */);
  threadData->lastEquationSolved = 941;
}

/*
equation index: 942
type: SIMPLE_ASSIGN
cond.Cells[4].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,942};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cond.Cells[4].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.ddph variable */);
  threadData->lastEquationSolved = 942;
}

/*
equation index: 943
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,943};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cond.Cells[4].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.eta variable */);
  threadData->lastEquationSolved = 943;
}

/*
equation index: 944
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,944};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[707]] /* cond.Cells[4].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.h variable */);
  threadData->lastEquationSolved = 944;
}

/*
equation index: 945
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,945};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* cond.Cells[4].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.kappa variable */);
  threadData->lastEquationSolved = 945;
}

/*
equation index: 946
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,946};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cond.Cells[4].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.lambda variable */);
  threadData->lastEquationSolved = 946;
}

/*
equation index: 947
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,947};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* cond.Cells[4].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.p variable */);
  threadData->lastEquationSolved = 947;
}

/*
equation index: 948
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,948};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[23]] /* cond.Cells[4].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[8]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.phase variable */);
  threadData->lastEquationSolved = 948;
}

/*
equation index: 949
type: SIMPLE_ASSIGN
cond.Cells[4].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,949};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cond.Cells[4].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState934.s variable */);
  threadData->lastEquationSolved = 949;
}

/*
equation index: 950
type: SIMPLE_ASSIGN
cond.Cells[4].M_tot = cond.Cells[4].Vi * cond.Cells[4].rho
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,950};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cond.Cells[4].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* cond.Cells[4].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cond.Cells[4].rho variable */));
  threadData->lastEquationSolved = 950;
}

/*
equation index: 951
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setSat_p(cond.Cells[1].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,951};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties tmp36;
  tmp36 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.Tsat variable */) = tmp36._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.dTp variable */) = tmp36._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.ddldp variable */) = tmp36._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.ddvdp variable */) = tmp36._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.dhldp variable */) = tmp36._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.dhvdp variable */) = tmp36._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.dl variable */) = tmp36._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.dv variable */) = tmp36._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.hl variable */) = tmp36._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.hv variable */) = tmp36._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.psat variable */) = tmp36._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.sigma variable */) = tmp36._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.sl variable */) = tmp36._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.sv variable */) = tmp36._sv;
  ;
  threadData->lastEquationSolved = 951;
}

/*
equation index: 952
type: SIMPLE_ASSIGN
cond.Cells[5].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,952};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cond.Cells[5].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.Tsat variable */);
  threadData->lastEquationSolved = 952;
}

/*
equation index: 953
type: SIMPLE_ASSIGN
cond.Cells[5].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,953};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cond.Cells[5].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.dTp variable */);
  threadData->lastEquationSolved = 953;
}

/*
equation index: 954
type: SIMPLE_ASSIGN
cond.Cells[5].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,954};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[779]] /* cond.Cells[5].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.ddldp variable */);
  threadData->lastEquationSolved = 954;
}

/*
equation index: 955
type: SIMPLE_ASSIGN
cond.Cells[5].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,955};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[784]] /* cond.Cells[5].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.ddvdp variable */);
  threadData->lastEquationSolved = 955;
}

/*
equation index: 956
type: SIMPLE_ASSIGN
cond.Cells[5].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,956};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cond.Cells[5].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.dhldp variable */);
  threadData->lastEquationSolved = 956;
}

/*
equation index: 957
type: SIMPLE_ASSIGN
cond.Cells[5].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,957};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* cond.Cells[5].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.dhvdp variable */);
  threadData->lastEquationSolved = 957;
}

/*
equation index: 958
type: SIMPLE_ASSIGN
cond.Cells[5].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,958};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cond.Cells[5].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.dl variable */);
  threadData->lastEquationSolved = 958;
}

/*
equation index: 959
type: SIMPLE_ASSIGN
cond.Cells[5].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,959};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* cond.Cells[5].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.dv variable */);
  threadData->lastEquationSolved = 959;
}

/*
equation index: 960
type: SIMPLE_ASSIGN
cond.Cells[5].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,960};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cond.Cells[5].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.hl variable */);
  threadData->lastEquationSolved = 960;
}

/*
equation index: 961
type: SIMPLE_ASSIGN
cond.Cells[5].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,961};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cond.Cells[5].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.hv variable */);
  threadData->lastEquationSolved = 961;
}

/*
equation index: 962
type: SIMPLE_ASSIGN
cond.Cells[5].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,962};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* cond.Cells[5].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.psat variable */);
  threadData->lastEquationSolved = 962;
}

/*
equation index: 963
type: SIMPLE_ASSIGN
cond.Cells[5].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,963};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* cond.Cells[5].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.sigma variable */);
  threadData->lastEquationSolved = 963;
}

/*
equation index: 964
type: SIMPLE_ASSIGN
cond.Cells[5].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,964};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* cond.Cells[5].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.sl variable */);
  threadData->lastEquationSolved = 964;
}

/*
equation index: 965
type: SIMPLE_ASSIGN
cond.Cells[5].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,965};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[824]] /* cond.Cells[5].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties951.sv variable */);
  threadData->lastEquationSolved = 965;
}

/*
equation index: 966
type: SIMPLE_ASSIGN
cond.Cells[5].x = (cond.Cells[5].h - cond.Cells[5].h_l) / (cond.Cells[5].h_v - cond.Cells[5].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,966};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* cond.Cells[5].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cond.Cells[5].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cond.Cells[5].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cond.Cells[5].h_l variable */),"cond.Cells[5].h_v - cond.Cells[5].h_l",equationIndexes);
  threadData->lastEquationSolved = 966;
}

/*
equation index: 967
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setState_ph(cond.Cells[1].p, cond.Cells[5].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,967};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState tmp37;
  tmp37 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.T variable */) = tmp37._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.a variable */) = tmp37._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.beta variable */) = tmp37._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.cp variable */) = tmp37._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.cv variable */) = tmp37._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.d variable */) = tmp37._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.ddhp variable */) = tmp37._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.ddph variable */) = tmp37._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.eta variable */) = tmp37._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.h variable */) = tmp37._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.kappa variable */) = tmp37._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.lambda variable */) = tmp37._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.p variable */) = tmp37._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[9]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.phase variable */) = tmp37._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.s variable */) = tmp37._s;
  ;
  threadData->lastEquationSolved = 967;
}

/*
equation index: 968
type: SIMPLE_ASSIGN
cond.Cells[5].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,968};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* cond.Cells[5].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.T variable */);
  threadData->lastEquationSolved = 968;
}

/*
equation index: 969
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,969};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* cond.Cells[5].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.a variable */);
  threadData->lastEquationSolved = 969;
}

/*
equation index: 970
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,970};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[688]] /* cond.Cells[5].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.beta variable */);
  threadData->lastEquationSolved = 970;
}

/*
equation index: 971
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,971};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cond.Cells[5].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.cp variable */);
  threadData->lastEquationSolved = 971;
}

/*
equation index: 972
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,972};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cond.Cells[5].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.cv variable */);
  threadData->lastEquationSolved = 972;
}

/*
equation index: 973
type: SIMPLE_ASSIGN
cond.Cells[5].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,973};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cond.Cells[5].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.d variable */);
  threadData->lastEquationSolved = 973;
}

/*
equation index: 974
type: SIMPLE_ASSIGN
cond.Cells[5].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,974};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* cond.Cells[5].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.ddhp variable */);
  threadData->lastEquationSolved = 974;
}

/*
equation index: 975
type: SIMPLE_ASSIGN
cond.Cells[5].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,975};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cond.Cells[5].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.ddph variable */);
  threadData->lastEquationSolved = 975;
}

/*
equation index: 976
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,976};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[703]] /* cond.Cells[5].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.eta variable */);
  threadData->lastEquationSolved = 976;
}

/*
equation index: 977
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,977};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* cond.Cells[5].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.h variable */);
  threadData->lastEquationSolved = 977;
}

/*
equation index: 978
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,978};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cond.Cells[5].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.kappa variable */);
  threadData->lastEquationSolved = 978;
}

/*
equation index: 979
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,979};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cond.Cells[5].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.lambda variable */);
  threadData->lastEquationSolved = 979;
}

/*
equation index: 980
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,980};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[5].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.p variable */);
  threadData->lastEquationSolved = 980;
}

/*
equation index: 981
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,981};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[24]] /* cond.Cells[5].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[9]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.phase variable */);
  threadData->lastEquationSolved = 981;
}

/*
equation index: 982
type: SIMPLE_ASSIGN
cond.Cells[5].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,982};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cond.Cells[5].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState967.s variable */);
  threadData->lastEquationSolved = 982;
}

/*
equation index: 983
type: SIMPLE_ASSIGN
cond.Cells[5].M_tot = cond.Cells[5].Vi * cond.Cells[5].rho
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,983};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cond.Cells[5].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* cond.Cells[5].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cond.Cells[5].rho variable */));
  threadData->lastEquationSolved = 983;
}

/*
equation index: 984
type: SIMPLE_ASSIGN
cond.M_tot = (*Real*)(cond.Nt) * (cond.Cells[1].M_tot + cond.Cells[2].M_tot + cond.Cells[3].M_tot + cond.Cells[4].M_tot + cond.Cells[5].M_tot)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,984};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* cond.M_tot variable */) = (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* cond.Nt PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* cond.Cells[1].M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cond.Cells[2].M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cond.Cells[3].M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cond.Cells[4].M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cond.Cells[5].M_tot variable */));
  threadData->lastEquationSolved = 984;
}

/*
equation index: 985
type: SIMPLE_ASSIGN
txv.A = txv.Afull * txv_opening_cmd
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,985};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* txv.A variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* txv.Afull PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* txv_opening_cmd STATE(1) */));
  threadData->lastEquationSolved = 985;
}

/*
equation index: 986
type: SIMPLE_ASSIGN
txv.rho = RefrigerationTrainer.ClosedLoopM1eCS.txv.Medium.setState_ph(cond.Cells[1].p, cond.Cells[5].h, 0).d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,986};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* txv.rho variable */) = omc_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */), ((modelica_integer) 0))._d;
  threadData->lastEquationSolved = 986;
}

/*
equation index: 987
type: SIMPLE_ASSIGN
p_lift_pa = cond.Cells[1].p - evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,987};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* p_lift_pa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */);
  threadData->lastEquationSolved = 987;
}

/*
equation index: 988
type: SIMPLE_ASSIGN
txv.Mdot = 1.4142135623730951 * txv.A * sqrt(txv.rho) * smooth(1, if noEvent(p_lift_pa > txv.DELTAp_0) then sqrt(p_lift_pa) else if noEvent(p_lift_pa < (-txv.DELTAp_0)) then -sqrt(-p_lift_pa) else 0.25 * sqrt(txv.DELTAp_0) * p_lift_pa / txv.DELTAp_0 * (5.0 - (p_lift_pa / txv.DELTAp_0) ^ 2.0))
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,988};
  modelica_real tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  modelica_boolean tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_boolean tmp45;
  modelica_real tmp46;
  modelica_boolean tmp47;
  modelica_real tmp48;
  tmp38 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* txv.rho variable */);
  if(!(tmp38 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(txv.rho) was %g should be >= 0", tmp38);
    }
  }tmp39 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* p_lift_pa variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* txv.DELTAp_0 PARAM */));
  tmp47 = (modelica_boolean)tmp39;
  if(tmp47)
  {
    tmp40 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* p_lift_pa variable */);
    if(!(tmp40 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(p_lift_pa) was %g should be >= 0", tmp40);
      }
    }
    tmp48 = sqrt(tmp40);
  }
  else
  {
    tmp41 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* p_lift_pa variable */),(-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* txv.DELTAp_0 PARAM */)));
    tmp45 = (modelica_boolean)tmp41;
    if(tmp45)
    {
      tmp42 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* p_lift_pa variable */));
      if(!(tmp42 >= 0.0))
      {
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"",0,0,0,0,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(-p_lift_pa) was %g should be >= 0", tmp42);
        }
      }
      tmp46 = (-sqrt(tmp42));
    }
    else
    {
      tmp43 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* txv.DELTAp_0 PARAM */);
      if(!(tmp43 >= 0.0))
      {
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"",0,0,0,0,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(txv.DELTAp_0) was %g should be >= 0", tmp43);
        }
      }tmp44 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* p_lift_pa variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* txv.DELTAp_0 PARAM */),"txv.DELTAp_0",equationIndexes);
      tmp46 = ((0.25) * ((sqrt(tmp43)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* p_lift_pa variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* txv.DELTAp_0 PARAM */),"txv.DELTAp_0",equationIndexes)))) * (5.0 - ((tmp44 * tmp44)));
    }
    tmp48 = tmp46;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* txv.Mdot variable */) = (1.4142135623730951) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* txv.A variable */)) * ((sqrt(tmp38)) * (tmp48)));
  threadData->lastEquationSolved = 988;
}

/*
equation index: 989
type: SIMPLE_ASSIGN
evap.Cells[1].M_dot_su = txv.Mdot / (*Real*)(evap.Cells[1].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,989};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* evap.Cells[1].M_dot_su variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* txv.Mdot variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* evap.Cells[1].Nt PARAM */)),"/*Real*/(evap.Cells[1].Nt)",equationIndexes);
  threadData->lastEquationSolved = 989;
}

/*
equation index: 990
type: SIMPLE_ASSIGN
evap.Cells[1].heatTransfer.U[1] = evap.Cells[1].heatTransfer.Unom * (1e-5 + (1e-6 + (evap.Cells[1].M_dot_su / evap.Cells[1].heatTransfer.Mdotnom) ^ 2.0) ^ 0.4)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,990};
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  tmp49 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* evap.Cells[1].M_dot_su variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* evap.Cells[1].heatTransfer.Mdotnom variable */),"evap.Cells[1].heatTransfer.Mdotnom",equationIndexes);
  tmp50 = 1e-6 + (tmp49 * tmp49);
  tmp51 = 0.4;
  if(tmp50 < 0.0 && tmp51 != 0.0)
  {
    tmp53 = modf(tmp51, &tmp54);
    
    if(tmp53 > 0.5)
    {
      tmp53 -= 1.0;
      tmp54 += 1.0;
    }
    else if(tmp53 < -0.5)
    {
      tmp53 += 1.0;
      tmp54 -= 1.0;
    }
    
    if(fabs(tmp53) < 1e-10)
      tmp52 = pow(tmp50, tmp54);
    else
    {
      tmp56 = modf(1.0/tmp51, &tmp55);
      if(tmp56 > 0.5)
      {
        tmp56 -= 1.0;
        tmp55 += 1.0;
      }
      else if(tmp56 < -0.5)
      {
        tmp56 += 1.0;
        tmp55 -= 1.0;
      }
      if(fabs(tmp56) < 1e-10 && ((unsigned long)tmp55 & 1))
      {
        tmp52 = -pow(-tmp50, tmp53)*pow(tmp50, tmp54);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp50, tmp51);
      }
    }
  }
  else
  {
    tmp52 = pow(tmp50, tmp51);
  }
  if(isnan(tmp52) || isinf(tmp52))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp50, tmp51);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* evap.Cells[1].heatTransfer.U[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* evap.Cells[1].heatTransfer.Unom variable */)) * (1e-5 + tmp52);
  threadData->lastEquationSolved = 990;
}

/*
equation index: 991
type: SIMPLE_ASSIGN
cond.Cells[5].M_dot_ex = txv.Mdot / (*Real*)(cond.Cells[5].Nt)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,991};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* cond.Cells[5].M_dot_ex variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* txv.Mdot variable */),((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* cond.Cells[5].Nt PARAM */)),"/*Real*/(cond.Cells[5].Nt)",equationIndexes);
  threadData->lastEquationSolved = 991;
}

void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_992(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_993(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_994(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_995(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_996(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_997(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_998(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_999(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1000(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1001(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1002(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1003(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1004(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1005(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1006(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1007(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1008(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1009(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1010(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1011(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1012(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1013(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1014(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1015(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1016(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1017(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1018(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1019(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1020(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1021(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1022(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1023(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1024(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1025(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1026(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1027(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1028(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1029(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1030(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1031(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1032(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1033(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1038(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1037(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1036(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1035(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1034(DATA*, threadData_t*);
/*
equation index: 1085
indexNonlinear: 4
type: NONLINEAR

vars: {$DER.cond.Cells[5].h, $DER.cond.Cells[4].h, $DER.cond.Cells[3].h, $DER.cond.Cells[2].h, $DER.cond.Cells[1].h}
eqns: {992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1038, 1037, 1036, 1035, 1034}
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1085};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1085 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[5].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[4].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[3].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[2].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[1].h) STATE_DER */);
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1085};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1085 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(cond.Cells[5].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(cond.Cells[4].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(cond.Cells[3].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(cond.Cells[2].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(cond.Cells[1].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  threadData->lastEquationSolved = 1085;
}

/*
equation index: 1086
type: SIMPLE_ASSIGN
Q_cond_w = (*Real*)(cond.Nt) * (cond.Cells[1].Q_tot + cond.Cells[2].Q_tot + cond.Cells[3].Q_tot + cond.Cells[4].Q_tot + cond.Cells[5].Q_tot)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1086};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* Q_cond_w variable */) = (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* cond.Nt PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[654]] /* cond.Cells[1].Q_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* cond.Cells[2].Q_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* cond.Cells[3].Q_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* cond.Cells[4].Q_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cond.Cells[5].Q_tot variable */));
  threadData->lastEquationSolved = 1086;
}

/*
equation index: 1087
type: SIMPLE_ASSIGN
res_mass_kg_s = m_dot_circuit_kg_s_2 + txv.Mdot
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1087};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* res_mass_kg_s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* txv.Mdot variable */);
  threadData->lastEquationSolved = 1087;
}

/*
equation index: 1088
type: SIMPLE_ASSIGN
txv.DELTAp = p_lift_pa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1088};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* txv.DELTAp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* p_lift_pa variable */);
  threadData->lastEquationSolved = 1088;
}

/*
equation index: 1089
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1089};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties tmp57;
  tmp57 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.Tsat variable */) = tmp57._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.dTp variable */) = tmp57._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.ddldp variable */) = tmp57._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.ddvdp variable */) = tmp57._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.dhldp variable */) = tmp57._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.dhvdp variable */) = tmp57._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.dl variable */) = tmp57._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.dv variable */) = tmp57._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.hl variable */) = tmp57._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.hv variable */) = tmp57._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.psat variable */) = tmp57._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.sigma variable */) = tmp57._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.sl variable */) = tmp57._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.sv variable */) = tmp57._sv;
  ;
  threadData->lastEquationSolved = 1089;
}

/*
equation index: 1090
type: SIMPLE_ASSIGN
evap.Cells[1].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1090};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1038]] /* evap.Cells[1].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.Tsat variable */);
  threadData->lastEquationSolved = 1090;
}

/*
equation index: 1091
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1091};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1043]] /* evap.Cells[1].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.dTp variable */);
  threadData->lastEquationSolved = 1091;
}

/*
equation index: 1092
type: SIMPLE_ASSIGN
evap.Cells[1].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1092};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* evap.Cells[1].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.ddldp variable */);
  threadData->lastEquationSolved = 1092;
}

/*
equation index: 1093
type: SIMPLE_ASSIGN
evap.Cells[1].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1093};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1053]] /* evap.Cells[1].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.ddvdp variable */);
  threadData->lastEquationSolved = 1093;
}

/*
equation index: 1094
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1094};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* evap.Cells[1].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.dhldp variable */);
  threadData->lastEquationSolved = 1094;
}

/*
equation index: 1095
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1095};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1063]] /* evap.Cells[1].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.dhvdp variable */);
  threadData->lastEquationSolved = 1095;
}

/*
equation index: 1096
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1096};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1068]] /* evap.Cells[1].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.dl variable */);
  threadData->lastEquationSolved = 1096;
}

/*
equation index: 1097
type: SIMPLE_ASSIGN
evap.Cells[1].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1097};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* evap.Cells[1].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.dv variable */);
  threadData->lastEquationSolved = 1097;
}

/*
equation index: 1098
type: SIMPLE_ASSIGN
evap.Cells[1].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1098};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1003]] /* evap.Cells[1].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.hl variable */);
  threadData->lastEquationSolved = 1098;
}

/*
equation index: 1099
type: SIMPLE_ASSIGN
evap.Cells[1].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1099};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* evap.Cells[1].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.hv variable */);
  threadData->lastEquationSolved = 1099;
}

/*
equation index: 1100
type: SIMPLE_ASSIGN
evap.Cells[1].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* evap.Cells[1].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.psat variable */);
  threadData->lastEquationSolved = 1100;
}

/*
equation index: 1101
type: SIMPLE_ASSIGN
evap.Cells[1].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* evap.Cells[1].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.sigma variable */);
  threadData->lastEquationSolved = 1101;
}

/*
equation index: 1102
type: SIMPLE_ASSIGN
evap.Cells[1].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* evap.Cells[1].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.sl variable */);
  threadData->lastEquationSolved = 1102;
}

/*
equation index: 1103
type: SIMPLE_ASSIGN
evap.Cells[1].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* evap.Cells[1].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1089.sv variable */);
  threadData->lastEquationSolved = 1103;
}

/*
equation index: 1104
type: SIMPLE_ASSIGN
evap.Cells[1].x = (evap.Cells[1].h - evap.Cells[1].h_l) / (evap.Cells[1].h_v - evap.Cells[1].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* evap.Cells[1].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1003]] /* evap.Cells[1].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* evap.Cells[1].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1003]] /* evap.Cells[1].h_l variable */),"evap.Cells[1].h_v - evap.Cells[1].h_l",equationIndexes);
  threadData->lastEquationSolved = 1104;
}

/*
equation index: 1105
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[1].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1105};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState tmp58;
  tmp58 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[448]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.T variable */) = tmp58._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.a variable */) = tmp58._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.beta variable */) = tmp58._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[451]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.cp variable */) = tmp58._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[452]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.cv variable */) = tmp58._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[453]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.d variable */) = tmp58._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[454]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.ddhp variable */) = tmp58._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[455]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.ddph variable */) = tmp58._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[456]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.eta variable */) = tmp58._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[457]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.h variable */) = tmp58._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[458]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.kappa variable */) = tmp58._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[459]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.lambda variable */) = tmp58._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[460]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.p variable */) = tmp58._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[10]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.phase variable */) = tmp58._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[461]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.s variable */) = tmp58._s;
  ;
  threadData->lastEquationSolved = 1105;
}

/*
equation index: 1106
type: SIMPLE_ASSIGN
evap.Cells[1].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[933]] /* evap.Cells[1].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[448]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.T variable */);
  threadData->lastEquationSolved = 1106;
}

/*
equation index: 1107
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[953]] /* evap.Cells[1].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.a variable */);
  threadData->lastEquationSolved = 1107;
}

/*
equation index: 1108
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* evap.Cells[1].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.beta variable */);
  threadData->lastEquationSolved = 1108;
}

/*
equation index: 1109
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* evap.Cells[1].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[451]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.cp variable */);
  threadData->lastEquationSolved = 1109;
}

/*
equation index: 1110
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* evap.Cells[1].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[452]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.cv variable */);
  threadData->lastEquationSolved = 1110;
}

/*
equation index: 1111
type: SIMPLE_ASSIGN
evap.Cells[1].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* evap.Cells[1].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[453]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.d variable */);
  threadData->lastEquationSolved = 1111;
}

/*
equation index: 1112
type: SIMPLE_ASSIGN
evap.Cells[1].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[943]] /* evap.Cells[1].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[454]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.ddhp variable */);
  threadData->lastEquationSolved = 1112;
}

/*
equation index: 1113
type: SIMPLE_ASSIGN
evap.Cells[1].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* evap.Cells[1].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[455]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.ddph variable */);
  threadData->lastEquationSolved = 1113;
}

/*
equation index: 1114
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[973]] /* evap.Cells[1].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[456]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.eta variable */);
  threadData->lastEquationSolved = 1114;
}

/*
equation index: 1115
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[978]] /* evap.Cells[1].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[457]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.h variable */);
  threadData->lastEquationSolved = 1115;
}

/*
equation index: 1116
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1116};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[983]] /* evap.Cells[1].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[458]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.kappa variable */);
  threadData->lastEquationSolved = 1116;
}

/*
equation index: 1117
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* evap.Cells[1].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[459]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.lambda variable */);
  threadData->lastEquationSolved = 1117;
}

/*
equation index: 1118
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* evap.Cells[1].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[460]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.p variable */);
  threadData->lastEquationSolved = 1118;
}

/*
equation index: 1119
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1119};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[25]] /* evap.Cells[1].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[10]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.phase variable */);
  threadData->lastEquationSolved = 1119;
}

/*
equation index: 1120
type: SIMPLE_ASSIGN
evap.Cells[1].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[1].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[461]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1105.s variable */);
  threadData->lastEquationSolved = 1120;
}

/*
equation index: 1129
type: LINEAR

<var>coil_evap.Q_cell[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1129};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[615]] /* coil_evap.Q_cell[1] variable */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 1129 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 3, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1129};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 1129 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* coil_evap.Q_cell[1] variable */) = aux_x[0];

  threadData->lastEquationSolved = 1129;
}

/*
equation index: 1130
type: SIMPLE_ASSIGN
evap.Cells[1].Q_tot = evap.Cells[1].Ai * evap.Cells[1].qdot
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1130};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[928]] /* evap.Cells[1].Q_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[104]] /* evap.Cells[1].Ai PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* evap.Cells[1].qdot variable */));
  threadData->lastEquationSolved = 1130;
}

/*
equation index: 1131
type: SIMPLE_ASSIGN
evap.Cells[1].M_tot = evap.Cells[1].Vi * evap.Cells[1].rho
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1131};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[923]] /* evap.Cells[1].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* evap.Cells[1].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* evap.Cells[1].rho variable */));
  threadData->lastEquationSolved = 1131;
}

/*
equation index: 1132
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1132};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties tmp59;
  tmp59 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.Tsat variable */) = tmp59._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.dTp variable */) = tmp59._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.ddldp variable */) = tmp59._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.ddvdp variable */) = tmp59._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.dhldp variable */) = tmp59._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.dhvdp variable */) = tmp59._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.dl variable */) = tmp59._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.dv variable */) = tmp59._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[330]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.hl variable */) = tmp59._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.hv variable */) = tmp59._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.psat variable */) = tmp59._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.sigma variable */) = tmp59._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.sl variable */) = tmp59._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.sv variable */) = tmp59._sv;
  ;
  threadData->lastEquationSolved = 1132;
}

/*
equation index: 1133
type: SIMPLE_ASSIGN
evap.Cells[2].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* evap.Cells[2].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.Tsat variable */);
  threadData->lastEquationSolved = 1133;
}

/*
equation index: 1134
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1134};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* evap.Cells[2].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.dTp variable */);
  threadData->lastEquationSolved = 1134;
}

/*
equation index: 1135
type: SIMPLE_ASSIGN
evap.Cells[2].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* evap.Cells[2].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.ddldp variable */);
  threadData->lastEquationSolved = 1135;
}

/*
equation index: 1136
type: SIMPLE_ASSIGN
evap.Cells[2].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1136};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1054]] /* evap.Cells[2].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.ddvdp variable */);
  threadData->lastEquationSolved = 1136;
}

/*
equation index: 1137
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* evap.Cells[2].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.dhldp variable */);
  threadData->lastEquationSolved = 1137;
}

/*
equation index: 1138
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* evap.Cells[2].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.dhvdp variable */);
  threadData->lastEquationSolved = 1138;
}

/*
equation index: 1139
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1069]] /* evap.Cells[2].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.dl variable */);
  threadData->lastEquationSolved = 1139;
}

/*
equation index: 1140
type: SIMPLE_ASSIGN
evap.Cells[2].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* evap.Cells[2].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.dv variable */);
  threadData->lastEquationSolved = 1140;
}

/*
equation index: 1141
type: SIMPLE_ASSIGN
evap.Cells[2].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* evap.Cells[2].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[330]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.hl variable */);
  threadData->lastEquationSolved = 1141;
}

/*
equation index: 1142
type: SIMPLE_ASSIGN
evap.Cells[2].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1142};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* evap.Cells[2].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.hv variable */);
  threadData->lastEquationSolved = 1142;
}

/*
equation index: 1143
type: SIMPLE_ASSIGN
evap.Cells[2].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* evap.Cells[2].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.psat variable */);
  threadData->lastEquationSolved = 1143;
}

/*
equation index: 1144
type: SIMPLE_ASSIGN
evap.Cells[2].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* evap.Cells[2].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.sigma variable */);
  threadData->lastEquationSolved = 1144;
}

/*
equation index: 1145
type: SIMPLE_ASSIGN
evap.Cells[2].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* evap.Cells[2].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.sl variable */);
  threadData->lastEquationSolved = 1145;
}

/*
equation index: 1146
type: SIMPLE_ASSIGN
evap.Cells[2].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* evap.Cells[2].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1132.sv variable */);
  threadData->lastEquationSolved = 1146;
}

/*
equation index: 1147
type: SIMPLE_ASSIGN
evap.Cells[2].x = (evap.Cells[2].h - evap.Cells[2].h_l) / (evap.Cells[2].h_v - evap.Cells[2].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1147};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* evap.Cells[2].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* evap.Cells[2].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* evap.Cells[2].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* evap.Cells[2].h_l variable */),"evap.Cells[2].h_v - evap.Cells[2].h_l",equationIndexes);
  threadData->lastEquationSolved = 1147;
}

/*
equation index: 1148
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[2].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1148};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState tmp60;
  tmp60 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.T variable */) = tmp60._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[463]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.a variable */) = tmp60._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.beta variable */) = tmp60._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[465]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.cp variable */) = tmp60._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[466]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.cv variable */) = tmp60._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[467]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.d variable */) = tmp60._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[468]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.ddhp variable */) = tmp60._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[469]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.ddph variable */) = tmp60._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.eta variable */) = tmp60._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[471]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.h variable */) = tmp60._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[472]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.kappa variable */) = tmp60._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[473]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.lambda variable */) = tmp60._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[474]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.p variable */) = tmp60._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[11]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.phase variable */) = tmp60._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[475]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.s variable */) = tmp60._s;
  ;
  threadData->lastEquationSolved = 1148;
}

/*
equation index: 1149
type: SIMPLE_ASSIGN
evap.Cells[2].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* evap.Cells[2].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.T variable */);
  threadData->lastEquationSolved = 1149;
}

/*
equation index: 1150
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* evap.Cells[2].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[463]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.a variable */);
  threadData->lastEquationSolved = 1150;
}

/*
equation index: 1151
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[959]] /* evap.Cells[2].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.beta variable */);
  threadData->lastEquationSolved = 1151;
}

/*
equation index: 1152
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* evap.Cells[2].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[465]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.cp variable */);
  threadData->lastEquationSolved = 1152;
}

/*
equation index: 1153
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* evap.Cells[2].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[466]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.cv variable */);
  threadData->lastEquationSolved = 1153;
}

/*
equation index: 1154
type: SIMPLE_ASSIGN
evap.Cells[2].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* evap.Cells[2].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[467]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.d variable */);
  threadData->lastEquationSolved = 1154;
}

/*
equation index: 1155
type: SIMPLE_ASSIGN
evap.Cells[2].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1155};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* evap.Cells[2].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[468]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.ddhp variable */);
  threadData->lastEquationSolved = 1155;
}

/*
equation index: 1156
type: SIMPLE_ASSIGN
evap.Cells[2].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* evap.Cells[2].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[469]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.ddph variable */);
  threadData->lastEquationSolved = 1156;
}

/*
equation index: 1157
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* evap.Cells[2].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.eta variable */);
  threadData->lastEquationSolved = 1157;
}

/*
equation index: 1158
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[979]] /* evap.Cells[2].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[471]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.h variable */);
  threadData->lastEquationSolved = 1158;
}

/*
equation index: 1159
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[984]] /* evap.Cells[2].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[472]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.kappa variable */);
  threadData->lastEquationSolved = 1159;
}

/*
equation index: 1160
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1160};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* evap.Cells[2].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[473]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.lambda variable */);
  threadData->lastEquationSolved = 1160;
}

/*
equation index: 1161
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* evap.Cells[2].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[474]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.p variable */);
  threadData->lastEquationSolved = 1161;
}

/*
equation index: 1162
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1162};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* evap.Cells[2].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[11]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.phase variable */);
  threadData->lastEquationSolved = 1162;
}

/*
equation index: 1163
type: SIMPLE_ASSIGN
evap.Cells[2].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[2].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[475]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1148.s variable */);
  threadData->lastEquationSolved = 1163;
}

/*
equation index: 1164
type: SIMPLE_ASSIGN
evap.Cells[2].M_tot = evap.Cells[2].Vi * evap.Cells[2].rho
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[924]] /* evap.Cells[2].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* evap.Cells[2].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* evap.Cells[2].rho variable */));
  threadData->lastEquationSolved = 1164;
}

/*
equation index: 1165
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1165};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties tmp61;
  tmp61 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.Tsat variable */) = tmp61._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.dTp variable */) = tmp61._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.ddldp variable */) = tmp61._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.ddvdp variable */) = tmp61._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.dhldp variable */) = tmp61._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.dhvdp variable */) = tmp61._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.dl variable */) = tmp61._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.dv variable */) = tmp61._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.hl variable */) = tmp61._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.hv variable */) = tmp61._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.psat variable */) = tmp61._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.sigma variable */) = tmp61._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.sl variable */) = tmp61._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[349]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.sv variable */) = tmp61._sv;
  ;
  threadData->lastEquationSolved = 1165;
}

/*
equation index: 1166
type: SIMPLE_ASSIGN
evap.Cells[3].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* evap.Cells[3].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.Tsat variable */);
  threadData->lastEquationSolved = 1166;
}

/*
equation index: 1167
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1045]] /* evap.Cells[3].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.dTp variable */);
  threadData->lastEquationSolved = 1167;
}

/*
equation index: 1168
type: SIMPLE_ASSIGN
evap.Cells[3].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* evap.Cells[3].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.ddldp variable */);
  threadData->lastEquationSolved = 1168;
}

/*
equation index: 1169
type: SIMPLE_ASSIGN
evap.Cells[3].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* evap.Cells[3].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.ddvdp variable */);
  threadData->lastEquationSolved = 1169;
}

/*
equation index: 1170
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* evap.Cells[3].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.dhldp variable */);
  threadData->lastEquationSolved = 1170;
}

/*
equation index: 1171
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* evap.Cells[3].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.dhvdp variable */);
  threadData->lastEquationSolved = 1171;
}

/*
equation index: 1172
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1070]] /* evap.Cells[3].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.dl variable */);
  threadData->lastEquationSolved = 1172;
}

/*
equation index: 1173
type: SIMPLE_ASSIGN
evap.Cells[3].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* evap.Cells[3].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.dv variable */);
  threadData->lastEquationSolved = 1173;
}

/*
equation index: 1174
type: SIMPLE_ASSIGN
evap.Cells[3].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* evap.Cells[3].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.hl variable */);
  threadData->lastEquationSolved = 1174;
}

/*
equation index: 1175
type: SIMPLE_ASSIGN
evap.Cells[3].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* evap.Cells[3].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.hv variable */);
  threadData->lastEquationSolved = 1175;
}

/*
equation index: 1176
type: SIMPLE_ASSIGN
evap.Cells[3].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1176};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* evap.Cells[3].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.psat variable */);
  threadData->lastEquationSolved = 1176;
}

/*
equation index: 1177
type: SIMPLE_ASSIGN
evap.Cells[3].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* evap.Cells[3].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.sigma variable */);
  threadData->lastEquationSolved = 1177;
}

/*
equation index: 1178
type: SIMPLE_ASSIGN
evap.Cells[3].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* evap.Cells[3].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.sl variable */);
  threadData->lastEquationSolved = 1178;
}

/*
equation index: 1179
type: SIMPLE_ASSIGN
evap.Cells[3].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* evap.Cells[3].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[349]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1165.sv variable */);
  threadData->lastEquationSolved = 1179;
}

/*
equation index: 1180
type: SIMPLE_ASSIGN
evap.Cells[3].x = (evap.Cells[3].h - evap.Cells[3].h_l) / (evap.Cells[3].h_v - evap.Cells[3].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1180};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* evap.Cells[3].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* evap.Cells[3].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* evap.Cells[3].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* evap.Cells[3].h_l variable */),"evap.Cells[3].h_v - evap.Cells[3].h_l",equationIndexes);
  threadData->lastEquationSolved = 1180;
}

/*
equation index: 1181
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[3].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1181};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState tmp62;
  tmp62 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[476]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.T variable */) = tmp62._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[477]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.a variable */) = tmp62._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.beta variable */) = tmp62._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.cp variable */) = tmp62._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.cv variable */) = tmp62._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.d variable */) = tmp62._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[482]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.ddhp variable */) = tmp62._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.ddph variable */) = tmp62._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.eta variable */) = tmp62._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.h variable */) = tmp62._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.kappa variable */) = tmp62._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.lambda variable */) = tmp62._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.p variable */) = tmp62._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[12]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.phase variable */) = tmp62._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.s variable */) = tmp62._s;
  ;
  threadData->lastEquationSolved = 1181;
}

/*
equation index: 1182
type: SIMPLE_ASSIGN
evap.Cells[3].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* evap.Cells[3].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[476]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.T variable */);
  threadData->lastEquationSolved = 1182;
}

/*
equation index: 1183
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[955]] /* evap.Cells[3].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[477]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.a variable */);
  threadData->lastEquationSolved = 1183;
}

/*
equation index: 1184
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[960]] /* evap.Cells[3].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.beta variable */);
  threadData->lastEquationSolved = 1184;
}

/*
equation index: 1185
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* evap.Cells[3].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.cp variable */);
  threadData->lastEquationSolved = 1185;
}

/*
equation index: 1186
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* evap.Cells[3].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.cv variable */);
  threadData->lastEquationSolved = 1186;
}

/*
equation index: 1187
type: SIMPLE_ASSIGN
evap.Cells[3].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* evap.Cells[3].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.d variable */);
  threadData->lastEquationSolved = 1187;
}

/*
equation index: 1188
type: SIMPLE_ASSIGN
evap.Cells[3].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[945]] /* evap.Cells[3].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[482]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.ddhp variable */);
  threadData->lastEquationSolved = 1188;
}

/*
equation index: 1189
type: SIMPLE_ASSIGN
evap.Cells[3].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[950]] /* evap.Cells[3].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.ddph variable */);
  threadData->lastEquationSolved = 1189;
}

/*
equation index: 1190
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[975]] /* evap.Cells[3].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.eta variable */);
  threadData->lastEquationSolved = 1190;
}

/*
equation index: 1191
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[980]] /* evap.Cells[3].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.h variable */);
  threadData->lastEquationSolved = 1191;
}

/*
equation index: 1192
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1192};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[985]] /* evap.Cells[3].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.kappa variable */);
  threadData->lastEquationSolved = 1192;
}

/*
equation index: 1193
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1193};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* evap.Cells[3].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.lambda variable */);
  threadData->lastEquationSolved = 1193;
}

/*
equation index: 1194
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1194};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* evap.Cells[3].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.p variable */);
  threadData->lastEquationSolved = 1194;
}

/*
equation index: 1195
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1195};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[27]] /* evap.Cells[3].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[12]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.phase variable */);
  threadData->lastEquationSolved = 1195;
}

/*
equation index: 1196
type: SIMPLE_ASSIGN
evap.Cells[3].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* evap.Cells[3].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1181.s variable */);
  threadData->lastEquationSolved = 1196;
}

/*
equation index: 1197
type: SIMPLE_ASSIGN
evap.Cells[3].M_tot = evap.Cells[3].Vi * evap.Cells[3].rho
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1197};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* evap.Cells[3].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* evap.Cells[3].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* evap.Cells[3].rho variable */));
  threadData->lastEquationSolved = 1197;
}

/*
equation index: 1198
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1198};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties tmp63;
  tmp63 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[350]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.Tsat variable */) = tmp63._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[351]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.dTp variable */) = tmp63._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[352]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.ddldp variable */) = tmp63._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.ddvdp variable */) = tmp63._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.dhldp variable */) = tmp63._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.dhvdp variable */) = tmp63._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[356]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.dl variable */) = tmp63._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.dv variable */) = tmp63._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.hl variable */) = tmp63._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[359]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.hv variable */) = tmp63._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[360]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.psat variable */) = tmp63._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[361]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.sigma variable */) = tmp63._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.sl variable */) = tmp63._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.sv variable */) = tmp63._sv;
  ;
  threadData->lastEquationSolved = 1198;
}

/*
equation index: 1199
type: SIMPLE_ASSIGN
evap.Cells[4].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* evap.Cells[4].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[350]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.Tsat variable */);
  threadData->lastEquationSolved = 1199;
}

/*
equation index: 1200
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1200};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1046]] /* evap.Cells[4].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[351]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.dTp variable */);
  threadData->lastEquationSolved = 1200;
}

/*
equation index: 1201
type: SIMPLE_ASSIGN
evap.Cells[4].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* evap.Cells[4].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[352]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.ddldp variable */);
  threadData->lastEquationSolved = 1201;
}

/*
equation index: 1202
type: SIMPLE_ASSIGN
evap.Cells[4].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* evap.Cells[4].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.ddvdp variable */);
  threadData->lastEquationSolved = 1202;
}

/*
equation index: 1203
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* evap.Cells[4].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.dhldp variable */);
  threadData->lastEquationSolved = 1203;
}

/*
equation index: 1204
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1066]] /* evap.Cells[4].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.dhvdp variable */);
  threadData->lastEquationSolved = 1204;
}

/*
equation index: 1205
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* evap.Cells[4].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[356]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.dl variable */);
  threadData->lastEquationSolved = 1205;
}

/*
equation index: 1206
type: SIMPLE_ASSIGN
evap.Cells[4].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* evap.Cells[4].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.dv variable */);
  threadData->lastEquationSolved = 1206;
}

/*
equation index: 1207
type: SIMPLE_ASSIGN
evap.Cells[4].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1207};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* evap.Cells[4].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.hl variable */);
  threadData->lastEquationSolved = 1207;
}

/*
equation index: 1208
type: SIMPLE_ASSIGN
evap.Cells[4].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* evap.Cells[4].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[359]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.hv variable */);
  threadData->lastEquationSolved = 1208;
}

/*
equation index: 1209
type: SIMPLE_ASSIGN
evap.Cells[4].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* evap.Cells[4].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[360]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.psat variable */);
  threadData->lastEquationSolved = 1209;
}

/*
equation index: 1210
type: SIMPLE_ASSIGN
evap.Cells[4].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1086]] /* evap.Cells[4].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[361]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.sigma variable */);
  threadData->lastEquationSolved = 1210;
}

/*
equation index: 1211
type: SIMPLE_ASSIGN
evap.Cells[4].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* evap.Cells[4].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.sl variable */);
  threadData->lastEquationSolved = 1211;
}

/*
equation index: 1212
type: SIMPLE_ASSIGN
evap.Cells[4].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* evap.Cells[4].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1198.sv variable */);
  threadData->lastEquationSolved = 1212;
}

/*
equation index: 1213
type: SIMPLE_ASSIGN
evap.Cells[4].x = (evap.Cells[4].h - evap.Cells[4].h_l) / (evap.Cells[4].h_v - evap.Cells[4].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1213};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* evap.Cells[4].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* evap.Cells[4].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* evap.Cells[4].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* evap.Cells[4].h_l variable */),"evap.Cells[4].h_v - evap.Cells[4].h_l",equationIndexes);
  threadData->lastEquationSolved = 1213;
}

/*
equation index: 1214
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[4].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1214};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState tmp64;
  tmp64 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.T variable */) = tmp64._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.a variable */) = tmp64._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.beta variable */) = tmp64._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.cp variable */) = tmp64._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.cv variable */) = tmp64._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[495]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.d variable */) = tmp64._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[496]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.ddhp variable */) = tmp64._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[497]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.ddph variable */) = tmp64._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[498]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.eta variable */) = tmp64._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.h variable */) = tmp64._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.kappa variable */) = tmp64._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.lambda variable */) = tmp64._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[502]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.p variable */) = tmp64._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[13]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.phase variable */) = tmp64._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[503]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.s variable */) = tmp64._s;
  ;
  threadData->lastEquationSolved = 1214;
}

/*
equation index: 1215
type: SIMPLE_ASSIGN
evap.Cells[4].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1215};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[936]] /* evap.Cells[4].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.T variable */);
  threadData->lastEquationSolved = 1215;
}

/*
equation index: 1216
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[956]] /* evap.Cells[4].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.a variable */);
  threadData->lastEquationSolved = 1216;
}

/*
equation index: 1217
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[961]] /* evap.Cells[4].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.beta variable */);
  threadData->lastEquationSolved = 1217;
}

/*
equation index: 1218
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1218};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* evap.Cells[4].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.cp variable */);
  threadData->lastEquationSolved = 1218;
}

/*
equation index: 1219
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* evap.Cells[4].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.cv variable */);
  threadData->lastEquationSolved = 1219;
}

/*
equation index: 1220
type: SIMPLE_ASSIGN
evap.Cells[4].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* evap.Cells[4].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[495]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.d variable */);
  threadData->lastEquationSolved = 1220;
}

/*
equation index: 1221
type: SIMPLE_ASSIGN
evap.Cells[4].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[946]] /* evap.Cells[4].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[496]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.ddhp variable */);
  threadData->lastEquationSolved = 1221;
}

/*
equation index: 1222
type: SIMPLE_ASSIGN
evap.Cells[4].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[951]] /* evap.Cells[4].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[497]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.ddph variable */);
  threadData->lastEquationSolved = 1222;
}

/*
equation index: 1223
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[976]] /* evap.Cells[4].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[498]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.eta variable */);
  threadData->lastEquationSolved = 1223;
}

/*
equation index: 1224
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* evap.Cells[4].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.h variable */);
  threadData->lastEquationSolved = 1224;
}

/*
equation index: 1225
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* evap.Cells[4].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.kappa variable */);
  threadData->lastEquationSolved = 1225;
}

/*
equation index: 1226
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* evap.Cells[4].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.lambda variable */);
  threadData->lastEquationSolved = 1226;
}

/*
equation index: 1227
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[4].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[502]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.p variable */);
  threadData->lastEquationSolved = 1227;
}

/*
equation index: 1228
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1228};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[28]] /* evap.Cells[4].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[13]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.phase variable */);
  threadData->lastEquationSolved = 1228;
}

/*
equation index: 1229
type: SIMPLE_ASSIGN
evap.Cells[4].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* evap.Cells[4].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[503]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1214.s variable */);
  threadData->lastEquationSolved = 1229;
}

/*
equation index: 1230
type: SIMPLE_ASSIGN
evap.Cells[4].M_tot = evap.Cells[4].Vi * evap.Cells[4].rho
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[926]] /* evap.Cells[4].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* evap.Cells[4].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* evap.Cells[4].rho variable */));
  threadData->lastEquationSolved = 1230;
}

/*
equation index: 1231
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setSat_p(evap.Cells[5].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1231};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties tmp65;
  tmp65 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[364]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.Tsat variable */) = tmp65._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[365]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.dTp variable */) = tmp65._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[366]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.ddldp variable */) = tmp65._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.ddvdp variable */) = tmp65._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.dhldp variable */) = tmp65._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.dhvdp variable */) = tmp65._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[370]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.dl variable */) = tmp65._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.dv variable */) = tmp65._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.hl variable */) = tmp65._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.hv variable */) = tmp65._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[374]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.psat variable */) = tmp65._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.sigma variable */) = tmp65._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.sl variable */) = tmp65._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[377]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.sv variable */) = tmp65._sv;
  ;
  threadData->lastEquationSolved = 1231;
}

/*
equation index: 1232
type: SIMPLE_ASSIGN
evap.Cells[5].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* evap.Cells[5].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[364]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.Tsat variable */);
  threadData->lastEquationSolved = 1232;
}

/*
equation index: 1233
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* evap.Cells[5].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[365]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.dTp variable */);
  threadData->lastEquationSolved = 1233;
}

/*
equation index: 1234
type: SIMPLE_ASSIGN
evap.Cells[5].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* evap.Cells[5].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[366]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.ddldp variable */);
  threadData->lastEquationSolved = 1234;
}

/*
equation index: 1235
type: SIMPLE_ASSIGN
evap.Cells[5].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* evap.Cells[5].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.ddvdp variable */);
  threadData->lastEquationSolved = 1235;
}

/*
equation index: 1236
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* evap.Cells[5].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.dhldp variable */);
  threadData->lastEquationSolved = 1236;
}

/*
equation index: 1237
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1067]] /* evap.Cells[5].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.dhvdp variable */);
  threadData->lastEquationSolved = 1237;
}

/*
equation index: 1238
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* evap.Cells[5].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[370]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.dl variable */);
  threadData->lastEquationSolved = 1238;
}

/*
equation index: 1239
type: SIMPLE_ASSIGN
evap.Cells[5].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* evap.Cells[5].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.dv variable */);
  threadData->lastEquationSolved = 1239;
}

/*
equation index: 1240
type: SIMPLE_ASSIGN
evap.Cells[5].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* evap.Cells[5].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.hl variable */);
  threadData->lastEquationSolved = 1240;
}

/*
equation index: 1241
type: SIMPLE_ASSIGN
evap.Cells[5].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* evap.Cells[5].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.hv variable */);
  threadData->lastEquationSolved = 1241;
}

/*
equation index: 1242
type: SIMPLE_ASSIGN
evap.Cells[5].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* evap.Cells[5].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[374]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.psat variable */);
  threadData->lastEquationSolved = 1242;
}

/*
equation index: 1243
type: SIMPLE_ASSIGN
evap.Cells[5].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* evap.Cells[5].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.sigma variable */);
  threadData->lastEquationSolved = 1243;
}

/*
equation index: 1244
type: SIMPLE_ASSIGN
evap.Cells[5].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* evap.Cells[5].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.sl variable */);
  threadData->lastEquationSolved = 1244;
}

/*
equation index: 1245
type: SIMPLE_ASSIGN
evap.Cells[5].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* evap.Cells[5].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[377]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties1231.sv variable */);
  threadData->lastEquationSolved = 1245;
}

/*
equation index: 1246
type: SIMPLE_ASSIGN
evap.Cells[5].x = (evap.Cells[5].h - evap.Cells[5].h_l) / (evap.Cells[5].h_v - evap.Cells[5].h_l)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* evap.Cells[5].x variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* evap.Cells[5].h_l variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* evap.Cells[5].h_v variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* evap.Cells[5].h_l variable */),"evap.Cells[5].h_v - evap.Cells[5].h_l",equationIndexes);
  threadData->lastEquationSolved = 1246;
}

/*
equation index: 1247
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247 := RefrigerationTrainer.ClosedLoopM1eCS.evap.Cells.Medium.setState_ph(evap.Cells[5].p, evap.Cells[5].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1247};
  RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState tmp66;
  tmp66 = omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.T variable */) = tmp66._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[505]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.a variable */) = tmp66._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[506]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.beta variable */) = tmp66._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[507]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.cp variable */) = tmp66._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[508]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.cv variable */) = tmp66._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.d variable */) = tmp66._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.ddhp variable */) = tmp66._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.ddph variable */) = tmp66._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.eta variable */) = tmp66._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.h variable */) = tmp66._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.kappa variable */) = tmp66._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.lambda variable */) = tmp66._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[516]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.p variable */) = tmp66._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[14]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.phase variable */) = tmp66._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[517]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.s variable */) = tmp66._s;
  ;
  threadData->lastEquationSolved = 1247;
}

/*
equation index: 1248
type: SIMPLE_ASSIGN
evap.Cells[5].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[937]] /* evap.Cells[5].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.T variable */);
  threadData->lastEquationSolved = 1248;
}

/*
equation index: 1249
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* evap.Cells[5].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[505]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.a variable */);
  threadData->lastEquationSolved = 1249;
}

/*
equation index: 1250
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[962]] /* evap.Cells[5].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[506]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.beta variable */);
  threadData->lastEquationSolved = 1250;
}

/*
equation index: 1251
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* evap.Cells[5].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[507]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.cp variable */);
  threadData->lastEquationSolved = 1251;
}

/*
equation index: 1252
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* evap.Cells[5].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[508]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.cv variable */);
  threadData->lastEquationSolved = 1252;
}

/*
equation index: 1253
type: SIMPLE_ASSIGN
evap.Cells[5].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* evap.Cells[5].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.d variable */);
  threadData->lastEquationSolved = 1253;
}

/*
equation index: 1254
type: SIMPLE_ASSIGN
evap.Cells[5].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* evap.Cells[5].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.ddhp variable */);
  threadData->lastEquationSolved = 1254;
}

/*
equation index: 1255
type: SIMPLE_ASSIGN
evap.Cells[5].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* evap.Cells[5].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.ddph variable */);
  threadData->lastEquationSolved = 1255;
}

/*
equation index: 1256
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1256};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* evap.Cells[5].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.eta variable */);
  threadData->lastEquationSolved = 1256;
}

/*
equation index: 1257
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[982]] /* evap.Cells[5].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.h variable */);
  threadData->lastEquationSolved = 1257;
}

/*
equation index: 1258
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1258};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* evap.Cells[5].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.kappa variable */);
  threadData->lastEquationSolved = 1258;
}

/*
equation index: 1259
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* evap.Cells[5].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.lambda variable */);
  threadData->lastEquationSolved = 1259;
}

/*
equation index: 1260
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1260};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[5].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[516]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.p variable */);
  threadData->lastEquationSolved = 1260;
}

/*
equation index: 1261
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1261};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[29]] /* evap.Cells[5].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[14]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.phase variable */);
  threadData->lastEquationSolved = 1261;
}

/*
equation index: 1262
type: SIMPLE_ASSIGN
evap.Cells[5].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* evap.Cells[5].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[517]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState1247.s variable */);
  threadData->lastEquationSolved = 1262;
}

/*
equation index: 1263
type: SIMPLE_ASSIGN
evap.Cells[5].M_tot = evap.Cells[5].Vi * evap.Cells[5].rho
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1263};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[927]] /* evap.Cells[5].M_tot variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* evap.Cells[5].Vi PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* evap.Cells[5].rho variable */));
  threadData->lastEquationSolved = 1263;
}

/*
equation index: 1264
type: SIMPLE_ASSIGN
evap.M_tot = (*Real*)(evap.Nt) * (evap.Cells[1].M_tot + evap.Cells[2].M_tot + evap.Cells[3].M_tot + evap.Cells[4].M_tot + evap.Cells[5].M_tot)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1264};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* evap.M_tot variable */) = (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* evap.Nt PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[923]] /* evap.Cells[1].M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[924]] /* evap.Cells[2].M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* evap.Cells[3].M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[926]] /* evap.Cells[4].M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[927]] /* evap.Cells[5].M_tot variable */));
  threadData->lastEquationSolved = 1264;
}

/*
equation index: 1265
type: SIMPLE_ASSIGN
M_charge_kg = evap.M_tot + cond.M_tot
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1265};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[591]] /* M_charge_kg variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* evap.M_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* cond.M_tot variable */);
  threadData->lastEquationSolved = 1265;
}

void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1266(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1267(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1268(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1269(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1270(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1271(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1272(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1273(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1274(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1275(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1276(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1277(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1278(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1279(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1280(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1281(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1282(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1283(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1284(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1285(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1286(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1287(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1288(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1289(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1290(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1291(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1292(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1293(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1294(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1295(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1296(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1297(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1298(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1299(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1300(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1301(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1302(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1303(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1304(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1305(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1306(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1307(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1312(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1311(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1310(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1309(DATA*, threadData_t*);
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1308(DATA*, threadData_t*);
/*
equation index: 1359
indexNonlinear: 5
type: NONLINEAR

vars: {$DER.evap.Cells[5].h, $DER.evap.Cells[1].h, $DER.evap.Cells[2].h, $DER.evap.Cells[3].h, $DER.evap.Cells[4].h}
eqns: {1266, 1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277, 1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294, 1295, 1296, 1297, 1298, 1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1312, 1311, 1310, 1309, 1308}
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1359};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1359 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[1].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[2].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[3].h) STATE_DER */);
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[4].h) STATE_DER */);
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1359};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1359 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(evap.Cells[5].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(evap.Cells[1].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[5].nlsx[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(evap.Cells[2].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[5].nlsx[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(evap.Cells[3].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[5].nlsx[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(evap.Cells[4].h) STATE_DER */) = data->simulationInfo->nonlinearSystemData[5].nlsx[4];
  threadData->lastEquationSolved = 1359;
}

/*
equation index: 1360
type: SIMPLE_ASSIGN
Q_evap_w = (*Real*)(evap.Nt) * (evap.Cells[1].Q_tot + evap.Cells[2].Q_tot + evap.Cells[3].Q_tot + evap.Cells[4].Q_tot + evap.Cells[5].Q_tot)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* Q_evap_w variable */) = (((modelica_real)(data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* evap.Nt PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[928]] /* evap.Cells[1].Q_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[929]] /* evap.Cells[2].Q_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* evap.Cells[3].Q_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[931]] /* evap.Cells[4].Q_tot variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* evap.Cells[5].Q_tot variable */));
  threadData->lastEquationSolved = 1360;
}

/*
equation index: 1361
type: SIMPLE_ASSIGN
cop = Q_evap_w / $cse3
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[906]] /* cop variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* Q_evap_w variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* $cse3 variable */),"$cse3",equationIndexes);
  threadData->lastEquationSolved = 1361;
}

/*
equation index: 1362
type: SIMPLE_ASSIGN
res_energy_w = Q_evap_w + W_comp_w + Q_cond_w
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* res_energy_w variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* Q_evap_w variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* W_comp_w variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* Q_cond_w variable */);
  threadData->lastEquationSolved = 1362;
}

/*
equation index: 1363
type: SIMPLE_ASSIGN
txv_saturated = txv_opening_cmd >= 0.999 or txv_opening_cmd <= 0.051
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1363};
  modelica_boolean tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  tmp68 = 1.0;
  tmp69 = 0.999;
  relationhysteresis(data, &tmp67, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* txv_opening_cmd STATE(1) */), 0.999, tmp68, tmp69, 0, GreaterEq, GreaterEqZC);
  tmp71 = 1.0;
  tmp72 = 0.051;
  relationhysteresis(data, &tmp70, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* txv_opening_cmd STATE(1) */), 0.051, tmp71, tmp72, 1, LessEq, LessEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* txv_saturated DISCRETE */) = (tmp67 || tmp70);
  threadData->lastEquationSolved = 1363;
}

/*
equation index: 1364
type: SIMPLE_ASSIGN
p_discharge_pa = cond.Cells[1].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1183]] /* p_discharge_pa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */);
  threadData->lastEquationSolved = 1364;
}

/*
equation index: 1365
type: SIMPLE_ASSIGN
T_cond_sat_k = RefrigerationTrainer.ClosedLoopM1eCS.Med.setSat_p(p_discharge_pa).Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* T_cond_sat_k variable */) = omc_RefrigerationTrainer_ClosedLoopM1eCS_Med_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1183]] /* p_discharge_pa variable */))._Tsat;
  threadData->lastEquationSolved = 1365;
}

/*
equation index: 1366
type: SIMPLE_ASSIGN
subcooling_k = T_cond_sat_k - RefrigerationTrainer.ClosedLoopM1eCS.Med.setState_ph(p_discharge_pa, cond.Cells[5].h, 0).T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1192]] /* subcooling_k variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* T_cond_sat_k variable */) - (omc_RefrigerationTrainer_ClosedLoopM1eCS_Med_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1183]] /* p_discharge_pa variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */), ((modelica_integer) 0))._T);
  threadData->lastEquationSolved = 1366;
}

/*
equation index: 1367
type: SIMPLE_ASSIGN
res_subcool_k = subcooling_k
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1190]] /* res_subcool_k variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1192]] /* subcooling_k variable */);
  threadData->lastEquationSolved = 1367;
}

/*
equation index: 1368
type: SIMPLE_ASSIGN
T_liquid_k = T_cond_sat_k - subcooling_k
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[600]] /* T_liquid_k variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* T_cond_sat_k variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1192]] /* subcooling_k variable */);
  threadData->lastEquationSolved = 1368;
}

/*
equation index: 1369
type: SIMPLE_ASSIGN
T_discharge_k = RefrigerationTrainer.ClosedLoopM1eCS.Med.setState_ph(p_discharge_pa, cond.Cells[1].hnode_su, 0).T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[598]] /* T_discharge_k variable */) = omc_RefrigerationTrainer_ClosedLoopM1eCS_Med_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1183]] /* p_discharge_pa variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cond.Cells[1].hnode_su variable */), ((modelica_integer) 0))._T;
  threadData->lastEquationSolved = 1369;
}

/*
equation index: 1370
type: SIMPLE_ASSIGN
p_txv_inlet_pa = cond.Cells[1].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1370};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* p_txv_inlet_pa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */);
  threadData->lastEquationSolved = 1370;
}

/*
equation index: 1371
type: SIMPLE_ASSIGN
p_cond_in_pa = cond.Cells[1].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1182]] /* p_cond_in_pa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */);
  threadData->lastEquationSolved = 1371;
}

/*
equation index: 1372
type: SIMPLE_ASSIGN
p_suction_pa = evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1372};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* p_suction_pa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */);
  threadData->lastEquationSolved = 1372;
}

/*
equation index: 1373
type: SIMPLE_ASSIGN
T_evap_sat_k = RefrigerationTrainer.ClosedLoopM1eCS.Med.setSat_p(p_suction_pa).Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[599]] /* T_evap_sat_k variable */) = omc_RefrigerationTrainer_ClosedLoopM1eCS_Med_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* p_suction_pa variable */))._Tsat;
  threadData->lastEquationSolved = 1373;
}

/*
equation index: 1374
type: SIMPLE_ASSIGN
superheat_k = RefrigerationTrainer.ClosedLoopM1eCS.Med.setState_ph(p_suction_pa, evap.Cells[5].h, 0).T - T_evap_sat_k
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* superheat_k variable */) = omc_RefrigerationTrainer_ClosedLoopM1eCS_Med_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* p_suction_pa variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */), ((modelica_integer) 0))._T - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[599]] /* T_evap_sat_k variable */);
  threadData->lastEquationSolved = 1374;
}

/*
equation index: 1375
type: SIMPLE_ASSIGN
res_superheat_k = superheat_k - superheat_target_k
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1191]] /* res_superheat_k variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* superheat_k variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[175]] /* superheat_target_k PARAM */);
  threadData->lastEquationSolved = 1375;
}

/*
equation index: 1376
type: SIMPLE_ASSIGN
$cse2 = min(1.0, txv_opening_frac + 0.05 * res_superheat_k)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1376};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[589]] /* $cse2 variable */) = fmin(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[186]] /* txv_opening_frac PARAM */) + (0.05) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1191]] /* res_superheat_k variable */)));
  threadData->lastEquationSolved = 1376;
}

/*
equation index: 1377
type: SIMPLE_ASSIGN
$cse1 = max(0.05, $cse2)
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1377};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[588]] /* $cse1 variable */) = fmax(0.05,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[589]] /* $cse2 variable */));
  threadData->lastEquationSolved = 1377;
}

/*
equation index: 1378
type: SIMPLE_ASSIGN
$DER.txv_opening_cmd = ($cse1 - txv_opening_cmd) / tau_txv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1378};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* der(txv_opening_cmd) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[588]] /* $cse1 variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* txv_opening_cmd STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* tau_txv PARAM */),"tau_txv",equationIndexes);
  threadData->lastEquationSolved = 1378;
}

/*
equation index: 1379
type: SIMPLE_ASSIGN
superheat_mixed_k = superheat_k
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1379};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1196]] /* superheat_mixed_k variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* superheat_k variable */);
  threadData->lastEquationSolved = 1379;
}

/*
equation index: 1380
type: SIMPLE_ASSIGN
superheat_circuit_k_2 = superheat_mixed_k
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1380};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* superheat_circuit_k_2 variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1196]] /* superheat_mixed_k variable */);
  threadData->lastEquationSolved = 1380;
}

/*
equation index: 1381
type: SIMPLE_ASSIGN
superheat_circuit_k_1 = superheat_mixed_k
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1381};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1193]] /* superheat_circuit_k_1 variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1196]] /* superheat_mixed_k variable */);
  threadData->lastEquationSolved = 1381;
}

/*
equation index: 1382
type: SIMPLE_ASSIGN
T_suction_k = T_evap_sat_k + superheat_k
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[601]] /* T_suction_k variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[599]] /* T_evap_sat_k variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* superheat_k variable */);
  threadData->lastEquationSolved = 1382;
}

/*
equation index: 1383
type: SIMPLE_ASSIGN
p_evap_out_pa = evap.Cells[5].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1184]] /* p_evap_out_pa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */);
  threadData->lastEquationSolved = 1383;
}

/*
equation index: 1384
type: SIMPLE_ASSIGN
T_air_in_evap_k = T_box_k
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[594]] /* T_air_in_evap_k variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* T_box_k PARAM */);
  threadData->lastEquationSolved = 1384;
}

/*
equation index: 1386
type: WHEN

when {$whenCondition1} then
  assert(false, "CompressorEM: SUCTION enthalpy h_su has left the fluid's valid range. The solver reached a nonphysical state - the result is not trustworthy even if it converges. Check start values before anything else.", AssertionLevel.error);
end when;
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1386};
  static const MMC_DEFSTRINGLIT(tmp73,203,"CompressorEM: SUCTION enthalpy h_su has left the fluid's valid range. The solver reached a nonphysical state - the result is not trustworthy even if it converges. Check start values before anything else.");
  static int tmp74 = 0;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    {
      if(!0 /* false */)
      {
        {
          const char* assert_cond = "(false)";
          if (data->simulationInfo->noThrowAsserts) {
            FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",204,5,207,67,0};
            infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp73)));
            data->simulationInfo->needToReThrow = 1;
          } else {
            FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",204,5,207,67,0};
            omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp73)));
          }
        }
      }
    }
  }
  threadData->lastEquationSolved = 1386;
}

/*
equation index: 1385
type: WHEN

when {$whenCondition2} then
  assert(false, "CompressorEM: DISCHARGE enthalpy h_ex has left the fluid's valid range. The solver reached a nonphysical state - the result is not trustworthy even if it converges. Check start values before anything else.", AssertionLevel.error);
end when;
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1385};
  static const MMC_DEFSTRINGLIT(tmp75,205,"CompressorEM: DISCHARGE enthalpy h_ex has left the fluid's valid range. The solver reached a nonphysical state - the result is not trustworthy even if it converges. Check start values before anything else.");
  static int tmp76 = 0;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */) /* edge */))
  {
    {
      if(!0 /* false */)
      {
        {
          const char* assert_cond = "(false)";
          if (data->simulationInfo->noThrowAsserts) {
            FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",211,5,214,67,0};
            infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp75)));
            data->simulationInfo->needToReThrow = 1;
          } else {
            FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",211,5,214,67,0};
            omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp75)));
          }
        }
      }
    }
  }
  threadData->lastEquationSolved = 1385;
}

OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_functionDAE(DATA *data, threadData_t *threadData)
{
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  RefrigerationTrainer_ClosedLoopM1eCS_functionLocalKnownVars(data, threadData);
  static void (*const eqFunctions[391])(DATA*, threadData_t*) = {
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_788,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_789,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_790,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_797,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_798,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_799,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_800,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_801,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_802,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_803,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_804,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_805,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_806,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_807,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_808,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_809,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_810,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_811,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_812,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_813,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_814,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_815,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_816,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_817,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_818,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_819,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_820,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_821,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_822,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_823,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_824,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_825,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_826,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_827,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_828,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_829,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_830,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_831,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_832,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_833,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_834,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_835,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_836,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_837,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_838,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_839,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_840,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_849,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_850,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_851,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_852,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_853,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_854,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_855,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_856,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_857,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_858,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_859,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_860,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_861,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_862,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_863,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_864,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_865,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_866,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_867,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_868,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_869,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_870,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_871,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_872,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_873,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_874,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_875,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_876,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_877,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_878,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_879,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_880,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_881,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_882,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_883,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_884,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_885,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_886,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_887,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_888,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_889,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_890,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_891,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_892,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_893,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_894,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_895,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_896,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_897,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_898,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_899,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_900,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_901,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_902,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_903,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_904,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_905,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_906,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_907,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_908,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_909,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_910,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_911,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_912,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_913,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_914,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_915,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_916,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_917,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_918,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_919,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_920,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_921,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_922,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_923,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_924,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_925,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_926,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_927,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_928,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_929,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_930,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_931,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_932,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_933,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_934,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_935,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_936,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_937,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_938,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_939,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_940,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_941,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_942,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_943,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_944,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_945,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_946,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_947,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_948,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_949,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_950,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_951,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_952,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_953,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_954,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_955,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_956,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_957,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_958,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_959,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_960,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_961,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_962,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_963,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_964,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_965,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_966,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_967,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_968,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_969,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_970,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_971,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_972,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_973,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_974,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_975,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_976,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_977,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_978,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_979,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_980,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_981,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_982,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_983,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_984,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_985,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_986,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_987,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_988,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_989,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_990,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_991,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1085,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1086,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1087,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1088,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1089,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1090,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1091,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1092,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1093,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1094,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1095,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1096,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1097,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1098,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1099,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1100,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1101,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1102,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1103,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1104,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1105,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1106,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1107,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1108,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1109,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1110,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1111,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1112,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1113,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1114,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1115,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1116,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1117,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1118,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1119,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1120,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1129,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1130,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1131,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1132,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1133,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1134,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1135,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1136,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1137,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1138,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1139,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1140,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1141,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1142,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1143,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1144,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1145,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1146,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1147,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1148,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1149,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1150,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1151,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1152,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1153,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1154,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1155,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1156,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1157,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1158,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1159,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1160,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1161,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1162,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1163,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1164,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1165,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1166,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1167,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1168,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1169,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1170,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1171,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1172,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1173,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1174,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1175,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1176,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1177,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1178,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1179,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1180,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1181,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1182,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1183,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1184,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1185,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1186,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1187,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1188,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1189,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1190,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1191,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1192,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1193,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1194,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1195,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1196,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1197,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1198,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1199,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1200,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1201,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1202,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1203,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1204,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1205,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1206,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1207,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1208,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1209,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1210,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1211,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1212,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1213,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1214,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1215,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1216,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1217,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1218,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1219,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1220,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1221,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1222,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1223,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1224,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1225,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1226,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1227,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1228,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1229,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1230,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1231,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1232,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1233,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1234,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1235,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1236,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1237,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1238,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1239,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1240,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1241,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1242,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1243,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1244,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1245,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1246,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1247,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1248,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1249,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1250,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1251,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1252,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1253,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1254,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1255,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1256,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1257,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1258,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1259,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1260,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1261,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1262,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1263,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1264,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1265,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1359,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1360,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1361,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1362,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1363,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1364,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1365,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1366,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1367,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1368,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1369,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1370,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1371,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1372,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1373,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1374,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1375,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1376,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1377,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1378,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1379,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1380,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1381,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1382,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1383,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1384,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1386,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1385
  };
  
  for (int id = 0; id < 391; id++) {
    eqFunctions[id](data, threadData);
  }
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  return 0;
}


int RefrigerationTrainer_ClosedLoopM1eCS_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

/* forwarded equations */
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_797(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_803(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_804(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_805(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_806(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_825(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_826(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_827(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_828(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_829(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_830(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_831(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_832(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_833(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_834(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_835(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_836(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_837(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_838(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_839(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_840(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_849(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_850(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_868(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_869(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_870(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_871(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_872(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_873(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_874(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_875(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_876(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_877(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_878(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_879(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_880(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_881(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_882(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_883(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_901(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_902(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_903(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_904(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_905(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_906(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_907(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_908(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_909(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_910(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_911(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_912(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_913(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_914(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_915(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_916(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_934(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_935(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_936(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_937(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_938(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_939(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_940(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_941(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_942(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_943(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_944(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_945(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_946(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_947(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_948(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_949(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_967(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_968(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_969(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_970(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_971(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_972(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_973(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_974(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_975(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_976(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_977(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_978(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_979(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_980(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_981(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_982(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_985(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_986(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_987(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_988(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_989(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_990(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_991(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1085(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1105(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1106(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1107(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1108(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1109(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1110(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1111(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1112(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1113(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1114(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1115(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1116(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1117(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1118(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1119(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1120(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1129(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1130(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1148(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1149(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1150(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1151(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1152(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1153(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1154(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1155(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1156(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1157(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1158(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1159(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1160(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1161(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1162(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1163(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1181(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1182(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1183(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1184(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1185(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1186(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1187(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1188(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1189(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1190(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1191(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1192(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1193(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1194(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1195(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1196(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1214(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1215(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1216(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1217(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1218(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1219(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1220(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1221(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1222(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1223(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1224(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1225(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1226(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1227(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1228(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1229(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1247(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1248(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1249(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1250(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1251(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1252(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1253(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1254(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1255(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1256(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1257(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1258(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1259(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1260(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1261(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1262(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1359(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1372(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1373(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1374(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1375(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1376(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1377(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1378(DATA* data, threadData_t *threadData);
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_790(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[186])(DATA*, threadData_t*) = {
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_797,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_803,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_804,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_805,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_806,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_825,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_826,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_827,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_828,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_829,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_830,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_831,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_832,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_833,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_834,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_835,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_836,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_837,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_838,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_839,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_840,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_849,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_850,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_868,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_869,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_870,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_871,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_872,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_873,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_874,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_875,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_876,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_877,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_878,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_879,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_880,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_881,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_882,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_883,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_901,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_902,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_903,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_904,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_905,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_906,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_907,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_908,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_909,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_910,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_911,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_912,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_913,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_914,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_915,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_916,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_934,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_935,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_936,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_937,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_938,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_939,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_940,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_941,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_942,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_943,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_944,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_945,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_946,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_947,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_948,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_949,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_967,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_968,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_969,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_970,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_971,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_972,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_973,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_974,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_975,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_976,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_977,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_978,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_979,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_980,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_981,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_982,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_985,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_986,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_987,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_988,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_989,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_990,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_991,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1085,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1105,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1106,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1107,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1108,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1109,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1110,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1111,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1112,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1113,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1114,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1115,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1116,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1117,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1118,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1119,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1120,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1129,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1130,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1148,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1149,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1150,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1151,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1152,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1153,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1154,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1155,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1156,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1157,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1158,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1159,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1160,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1161,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1162,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1163,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1181,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1182,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1183,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1184,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1185,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1186,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1187,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1188,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1189,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1190,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1191,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1192,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1193,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1194,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1195,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1196,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1214,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1215,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1216,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1217,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1218,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1219,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1220,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1221,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1222,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1223,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1224,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1225,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1226,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1227,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1228,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1229,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1247,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1248,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1249,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1250,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1251,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1252,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1253,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1254,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1255,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1256,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1257,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1258,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1259,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1260,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1261,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1262,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1359,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1372,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1373,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1374,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1375,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1376,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1377,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1378,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_790
  };
  
  if (data->simulationInfo->evalSelection) {
    for (int i = 0; i < data->simulationInfo->evalSelection->n; i++) {
      int id = data->simulationInfo->evalSelection->idx[i];
      eqFunctions[id](data, threadData);
    }
  } else {
    for (int id = 0; id < 186; id++) {
      eqFunctions[id](data, threadData);
    }
  }
}

int RefrigerationTrainer_ClosedLoopM1eCS_functionODE(DATA *data, threadData_t *threadData)
{
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  RefrigerationTrainer_ClosedLoopM1eCS_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  return 0;
}

void RefrigerationTrainer_ClosedLoopM1eCS_ODE_DAG(DATA* data, threadData_t* threadData)
{
  const size_t eqMap[] = {797, 803, 804, 805, 806, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 849, 850, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 985, 986, 987, 988, 989, 990, 991, 1085, 1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1120, 1129, 1130, 1148, 1149, 1150, 1151, 1152, 1153, 1154, 1155, 1156, 1157, 1158, 1159, 1160, 1161, 1162, 1163, 1181, 1182, 1183, 1184, 1185, 1186, 1187, 1188, 1189, 1190, 1191, 1192, 1193, 1194, 1195, 1196, 1214, 1215, 1216, 1217, 1218, 1219, 1220, 1221, 1222, 1223, 1224, 1225, 1226, 1227, 1228, 1229, 1247, 1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257, 1258, 1259, 1260, 1261, 1262, 1359, 1372, 1373, 1374, 1375, 1376, 1377, 1378, 790};
  buildEvalDAG_ODE(data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);
extern int _main_OptimizationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);

#include "RefrigerationTrainer.ClosedLoopM1eCS_12jac.h"
#include "RefrigerationTrainer.ClosedLoopM1eCS_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks RefrigerationTrainer_ClosedLoopM1eCS_callback = {
  (int (*)(DATA *, threadData_t *, void *)) RefrigerationTrainer_ClosedLoopM1eCS_performSimulation,    /* performSimulation */
  (int (*)(DATA *, threadData_t *, void *)) RefrigerationTrainer_ClosedLoopM1eCS_performQSSSimulation,    /* performQSSSimulation */
  RefrigerationTrainer_ClosedLoopM1eCS_updateContinuousSystem,    /* updateContinuousSystem */
  RefrigerationTrainer_ClosedLoopM1eCS_callExternalObjectDestructors,    /* callExternalObjectDestructors */
  RefrigerationTrainer_ClosedLoopM1eCS_initialNonLinearSystem,    /* initialNonLinearSystem */
  RefrigerationTrainer_ClosedLoopM1eCS_initialLinearSystem,    /* initialLinearSystem */
  NULL,    /* initialMixedSystem */
  #if !defined(OMC_NO_STATESELECTION)
  RefrigerationTrainer_ClosedLoopM1eCS_initializeStateSets,
  #else
  NULL,
  #endif    /* initializeStateSets */
  RefrigerationTrainer_ClosedLoopM1eCS_initializeDAEmodeData,
  RefrigerationTrainer_ClosedLoopM1eCS_ODE_DAG,
  RefrigerationTrainer_ClosedLoopM1eCS_functionODE,
  RefrigerationTrainer_ClosedLoopM1eCS_functionAlgebraics,
  RefrigerationTrainer_ClosedLoopM1eCS_functionDAE,
  RefrigerationTrainer_ClosedLoopM1eCS_functionLocalKnownVars,
  RefrigerationTrainer_ClosedLoopM1eCS_input_function,
  RefrigerationTrainer_ClosedLoopM1eCS_input_function_init,
  RefrigerationTrainer_ClosedLoopM1eCS_input_function_updateStartValues,
  RefrigerationTrainer_ClosedLoopM1eCS_data_function,
  RefrigerationTrainer_ClosedLoopM1eCS_output_function,
  RefrigerationTrainer_ClosedLoopM1eCS_setc_function,
  RefrigerationTrainer_ClosedLoopM1eCS_setb_function,
  RefrigerationTrainer_ClosedLoopM1eCS_function_storeDelayed,
  RefrigerationTrainer_ClosedLoopM1eCS_function_storeSpatialDistribution,
  RefrigerationTrainer_ClosedLoopM1eCS_function_initSpatialDistribution,
  RefrigerationTrainer_ClosedLoopM1eCS_updateBoundVariableAttributes,
  RefrigerationTrainer_ClosedLoopM1eCS_functionInitialEquations,
  GLOBAL_EQUIDISTANT_HOMOTOPY,
  NULL,
  RefrigerationTrainer_ClosedLoopM1eCS_functionRemovedInitialEquations,
  RefrigerationTrainer_ClosedLoopM1eCS_updateBoundParameters,
  RefrigerationTrainer_ClosedLoopM1eCS_checkForAsserts,
  RefrigerationTrainer_ClosedLoopM1eCS_function_ZeroCrossingsEquations,
  RefrigerationTrainer_ClosedLoopM1eCS_function_ZeroCrossings,
  RefrigerationTrainer_ClosedLoopM1eCS_function_updateRelations,
  RefrigerationTrainer_ClosedLoopM1eCS_zeroCrossingDescription,
  RefrigerationTrainer_ClosedLoopM1eCS_relationDescription,
  RefrigerationTrainer_ClosedLoopM1eCS_function_initSample,
  RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_A,
  RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_ADJ,
  RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_B,
  RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_C,
  RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_D,
  RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_F,
  RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_H,
  RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianA,
  RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianADJ,
  RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianB,
  RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianC,
  RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianD,
  RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianF,
  RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianH,
  RefrigerationTrainer_ClosedLoopM1eCS_functionJacA_column,
  RefrigerationTrainer_ClosedLoopM1eCS_functionJacADJ_column,
  RefrigerationTrainer_ClosedLoopM1eCS_functionJacB_column,
  RefrigerationTrainer_ClosedLoopM1eCS_functionJacC_column,
  RefrigerationTrainer_ClosedLoopM1eCS_functionJacD_column,
  RefrigerationTrainer_ClosedLoopM1eCS_functionJacF_column,
  RefrigerationTrainer_ClosedLoopM1eCS_functionJacH_column,
  RefrigerationTrainer_ClosedLoopM1eCS_JacA_DAG,
  RefrigerationTrainer_ClosedLoopM1eCS_linear_model_frame,
  RefrigerationTrainer_ClosedLoopM1eCS_linear_model_datarecovery_frame,
  RefrigerationTrainer_ClosedLoopM1eCS_mayer,
  RefrigerationTrainer_ClosedLoopM1eCS_lagrange,
  RefrigerationTrainer_ClosedLoopM1eCS_getInputVarIndicesInOptimization,
  RefrigerationTrainer_ClosedLoopM1eCS_pickUpBoundsForInputsInOptimization,
  RefrigerationTrainer_ClosedLoopM1eCS_setInputData,
  RefrigerationTrainer_ClosedLoopM1eCS_getTimeGrid,
  RefrigerationTrainer_ClosedLoopM1eCS_symbolicInlineSystem,
  RefrigerationTrainer_ClosedLoopM1eCS_function_initSynchronous,
  RefrigerationTrainer_ClosedLoopM1eCS_function_updateSynchronous,
  RefrigerationTrainer_ClosedLoopM1eCS_function_equationsSynchronous,
  RefrigerationTrainer_ClosedLoopM1eCS_inputNames,
  RefrigerationTrainer_ClosedLoopM1eCS_dataReconciliationInputNames,
  RefrigerationTrainer_ClosedLoopM1eCS_dataReconciliationUnmeasuredVariables,
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
void RefrigerationTrainer_ClosedLoopM1eCS_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &RefrigerationTrainer_ClosedLoopM1eCS_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "RefrigerationTrainer.ClosedLoopM1eCS";
  data->modelData->modelFilePrefix = "RefrigerationTrainer.ClosedLoopM1eCS";
  data->modelData->modelFileName = "ClosedLoopM1eCS.mo";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer";
  data->modelData->modelGUID = "{3300a783-512f-42b7-9e3d-78858d36c6a0}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "RefrigerationTrainer.ClosedLoopM1eCS_init.c"
    ;
  static const char contents_info[] =
    #include "RefrigerationTrainer.ClosedLoopM1eCS_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "RefrigerationTrainer.ClosedLoopM1eCS_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "RefrigerationTrainer.ClosedLoopM1eCS_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->modelDataXml.fileName = "RefrigerationTrainer.ClosedLoopM1eCS_info.json";
  data->modelData->resourcesDir = NULL;
  data->modelData->runTestsuite = 0;
  data->modelData->nStatesArray = 14;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesRealArray = 1212;
  data->modelData->nVariablesIntegerArray = 30;
  data->modelData->nVariablesBooleanArray = 3;
  data->modelData->nVariablesStringArray = 0;
  data->modelData->nParametersRealArray = 188;
  data->modelData->nParametersIntegerArray = 51;
  data->modelData->nParametersBooleanArray = 64;
  data->modelData->nParametersStringArray = 0;
  data->modelData->nParametersReal = 188;
  data->modelData->nParametersInteger = 51;
  data->modelData->nParametersBoolean = 64;
  data->modelData->nParametersString = 0;
  data->modelData->nAliasRealArray = 516;
  data->modelData->nAliasIntegerArray = 10;
  data->modelData->nAliasBooleanArray = 0;
  data->modelData->nAliasStringArray = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 33;
  data->modelData->nZeroCrossings = 3;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 7;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 26;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 2153;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 4;
  data->modelData->nNonLinearSystems = 6;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 15;
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
  
    RefrigerationTrainer_ClosedLoopM1eCS_setupDataStruc(&data, threadData);
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


