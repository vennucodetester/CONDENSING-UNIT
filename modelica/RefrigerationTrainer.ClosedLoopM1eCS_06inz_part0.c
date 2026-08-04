#include "RefrigerationTrainer.ClosedLoopM1eCS_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 1
type: SIMPLE_ASSIGN
drive.phi = $START.drive.phi
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* drive.phi STATE(1,drive.w_fixed) */) = ((modelica_real *)((data->modelData->realVarsData[6] /* drive.phi STATE(1,drive.w_fixed) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1;
}

/*
equation index: 2
type: SIMPLE_ASSIGN
wall_evap_placeholder.port.phi[1] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1207]] /* wall_evap_placeholder.port.phi[1] variable */) = 0.0;
  threadData->lastEquationSolved = 2;
}

/*
equation index: 3
type: SIMPLE_ASSIGN
wall_evap_placeholder.port.phi[2] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_3(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* wall_evap_placeholder.port.phi[2] variable */) = 0.0;
  threadData->lastEquationSolved = 3;
}

/*
equation index: 4
type: SIMPLE_ASSIGN
wall_evap_placeholder.port.phi[3] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_4(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1209]] /* wall_evap_placeholder.port.phi[3] variable */) = 0.0;
  threadData->lastEquationSolved = 4;
}

/*
equation index: 5
type: SIMPLE_ASSIGN
wall_evap_placeholder.port.phi[4] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_5(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* wall_evap_placeholder.port.phi[4] variable */) = 0.0;
  threadData->lastEquationSolved = 5;
}

/*
equation index: 6
type: SIMPLE_ASSIGN
wall_evap_placeholder.port.phi[5] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_6(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* wall_evap_placeholder.port.phi[5] variable */) = 0.0;
  threadData->lastEquationSolved = 6;
}

/*
equation index: 7
type: SIMPLE_ASSIGN
wall_cond_placeholder.port.phi[1] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_7(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1202]] /* wall_cond_placeholder.port.phi[1] variable */) = 0.0;
  threadData->lastEquationSolved = 7;
}

/*
equation index: 8
type: SIMPLE_ASSIGN
wall_cond_placeholder.port.phi[2] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_8(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1203]] /* wall_cond_placeholder.port.phi[2] variable */) = 0.0;
  threadData->lastEquationSolved = 8;
}

/*
equation index: 9
type: SIMPLE_ASSIGN
wall_cond_placeholder.port.phi[3] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_9(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* wall_cond_placeholder.port.phi[3] variable */) = 0.0;
  threadData->lastEquationSolved = 9;
}

/*
equation index: 10
type: SIMPLE_ASSIGN
wall_cond_placeholder.port.phi[4] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_10(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* wall_cond_placeholder.port.phi[4] variable */) = 0.0;
  threadData->lastEquationSolved = 10;
}

/*
equation index: 11
type: SIMPLE_ASSIGN
wall_cond_placeholder.port.phi[5] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_11(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1206]] /* wall_cond_placeholder.port.phi[5] variable */) = 0.0;
  threadData->lastEquationSolved = 11;
}

/*
equation index: 12
type: SIMPLE_ASSIGN
cond.Cells[1].sat_in[1] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_12(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[825]] /* cond.Cells[1].sat_in[1] variable */) = 0.0;
  threadData->lastEquationSolved = 12;
}

/*
equation index: 13
type: SIMPLE_ASSIGN
cond.Cells[1].sat_in[2] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_13(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[826]] /* cond.Cells[1].sat_in[2] variable */) = 0.0;
  threadData->lastEquationSolved = 13;
}

/*
equation index: 14
type: SIMPLE_ASSIGN
cond.Cells[1].sat_in[3] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_14(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[827]] /* cond.Cells[1].sat_in[3] variable */) = 0.0;
  threadData->lastEquationSolved = 14;
}

/*
equation index: 15
type: SIMPLE_ASSIGN
cond.Cells[1].sat_in[4] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_15(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[828]] /* cond.Cells[1].sat_in[4] variable */) = 0.0;
  threadData->lastEquationSolved = 15;
}

/*
equation index: 16
type: SIMPLE_ASSIGN
cond.Cells[1].sat_in[5] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_16(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* cond.Cells[1].sat_in[5] variable */) = 0.0;
  threadData->lastEquationSolved = 16;
}

/*
equation index: 17
type: SIMPLE_ASSIGN
cond.Cells[1].sat_in[6] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_17(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[830]] /* cond.Cells[1].sat_in[6] variable */) = 0.0;
  threadData->lastEquationSolved = 17;
}

/*
equation index: 18
type: SIMPLE_ASSIGN
cond.Cells[1].sat_in[7] = 1e5
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_18(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[831]] /* cond.Cells[1].sat_in[7] variable */) = 1e5;
  threadData->lastEquationSolved = 18;
}

/*
equation index: 19
type: SIMPLE_ASSIGN
cond.Cells[1].sat_in[8] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_19(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,19};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].sat_in[8] variable */) = 0.0;
  threadData->lastEquationSolved = 19;
}

/*
equation index: 20
type: SIMPLE_ASSIGN
cond.Cells[1].sat_in[9] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_20(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,20};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[1].sat_in[9] variable */) = 0.0;
  threadData->lastEquationSolved = 20;
}

/*
equation index: 21
type: SIMPLE_ASSIGN
cond.Cells[1].sat_in[10] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_21(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,21};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[1].sat_in[10] variable */) = 0.0;
  threadData->lastEquationSolved = 21;
}

/*
equation index: 22
type: SIMPLE_ASSIGN
cond.Cells[1].sat_in[11] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_22(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,22};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[1].sat_in[11] variable */) = 0.0;
  threadData->lastEquationSolved = 22;
}

/*
equation index: 23
type: SIMPLE_ASSIGN
cond.Cells[1].sat_in[12] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_23(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,23};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[1].sat_in[12] variable */) = 0.0;
  threadData->lastEquationSolved = 23;
}

/*
equation index: 24
type: SIMPLE_ASSIGN
cond.Cells[1].sat_in[13] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_24(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,24};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[837]] /* cond.Cells[1].sat_in[13] variable */) = 0.0;
  threadData->lastEquationSolved = 24;
}

/*
equation index: 25
type: SIMPLE_ASSIGN
cond.Cells[1].sat_in[14] = 300.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_25(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,25};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[838]] /* cond.Cells[1].sat_in[14] variable */) = 300.0;
  threadData->lastEquationSolved = 25;
}

/*
equation index: 26
type: SIMPLE_ASSIGN
cond.Cells[2].sat_in[1] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_26(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[839]] /* cond.Cells[2].sat_in[1] variable */) = 0.0;
  threadData->lastEquationSolved = 26;
}

/*
equation index: 27
type: SIMPLE_ASSIGN
cond.Cells[2].sat_in[2] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_27(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,27};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[840]] /* cond.Cells[2].sat_in[2] variable */) = 0.0;
  threadData->lastEquationSolved = 27;
}

/*
equation index: 28
type: SIMPLE_ASSIGN
cond.Cells[2].sat_in[3] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_28(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,28};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[841]] /* cond.Cells[2].sat_in[3] variable */) = 0.0;
  threadData->lastEquationSolved = 28;
}

/*
equation index: 29
type: SIMPLE_ASSIGN
cond.Cells[2].sat_in[4] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_29(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,29};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* cond.Cells[2].sat_in[4] variable */) = 0.0;
  threadData->lastEquationSolved = 29;
}

/*
equation index: 30
type: SIMPLE_ASSIGN
cond.Cells[2].sat_in[5] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_30(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* cond.Cells[2].sat_in[5] variable */) = 0.0;
  threadData->lastEquationSolved = 30;
}

/*
equation index: 31
type: SIMPLE_ASSIGN
cond.Cells[2].sat_in[6] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_31(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,31};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[844]] /* cond.Cells[2].sat_in[6] variable */) = 0.0;
  threadData->lastEquationSolved = 31;
}

/*
equation index: 32
type: SIMPLE_ASSIGN
cond.Cells[2].sat_in[7] = 1e5
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_32(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,32};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* cond.Cells[2].sat_in[7] variable */) = 1e5;
  threadData->lastEquationSolved = 32;
}

/*
equation index: 33
type: SIMPLE_ASSIGN
cond.Cells[2].sat_in[8] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_33(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,33};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* cond.Cells[2].sat_in[8] variable */) = 0.0;
  threadData->lastEquationSolved = 33;
}

/*
equation index: 34
type: SIMPLE_ASSIGN
cond.Cells[2].sat_in[9] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_34(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* cond.Cells[2].sat_in[9] variable */) = 0.0;
  threadData->lastEquationSolved = 34;
}

/*
equation index: 35
type: SIMPLE_ASSIGN
cond.Cells[2].sat_in[10] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_35(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,35};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[848]] /* cond.Cells[2].sat_in[10] variable */) = 0.0;
  threadData->lastEquationSolved = 35;
}

/*
equation index: 36
type: SIMPLE_ASSIGN
cond.Cells[2].sat_in[11] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_36(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,36};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[849]] /* cond.Cells[2].sat_in[11] variable */) = 0.0;
  threadData->lastEquationSolved = 36;
}

/*
equation index: 37
type: SIMPLE_ASSIGN
cond.Cells[2].sat_in[12] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_37(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,37};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* cond.Cells[2].sat_in[12] variable */) = 0.0;
  threadData->lastEquationSolved = 37;
}

/*
equation index: 38
type: SIMPLE_ASSIGN
cond.Cells[2].sat_in[13] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_38(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,38};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* cond.Cells[2].sat_in[13] variable */) = 0.0;
  threadData->lastEquationSolved = 38;
}

/*
equation index: 39
type: SIMPLE_ASSIGN
cond.Cells[2].sat_in[14] = 300.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_39(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* cond.Cells[2].sat_in[14] variable */) = 300.0;
  threadData->lastEquationSolved = 39;
}

/*
equation index: 40
type: SIMPLE_ASSIGN
cond.Cells[3].sat_in[1] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_40(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[853]] /* cond.Cells[3].sat_in[1] variable */) = 0.0;
  threadData->lastEquationSolved = 40;
}

/*
equation index: 41
type: SIMPLE_ASSIGN
cond.Cells[3].sat_in[2] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_41(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,41};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[854]] /* cond.Cells[3].sat_in[2] variable */) = 0.0;
  threadData->lastEquationSolved = 41;
}

/*
equation index: 42
type: SIMPLE_ASSIGN
cond.Cells[3].sat_in[3] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_42(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,42};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[855]] /* cond.Cells[3].sat_in[3] variable */) = 0.0;
  threadData->lastEquationSolved = 42;
}

/*
equation index: 43
type: SIMPLE_ASSIGN
cond.Cells[3].sat_in[4] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_43(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,43};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[856]] /* cond.Cells[3].sat_in[4] variable */) = 0.0;
  threadData->lastEquationSolved = 43;
}

/*
equation index: 44
type: SIMPLE_ASSIGN
cond.Cells[3].sat_in[5] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_44(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,44};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[857]] /* cond.Cells[3].sat_in[5] variable */) = 0.0;
  threadData->lastEquationSolved = 44;
}

/*
equation index: 45
type: SIMPLE_ASSIGN
cond.Cells[3].sat_in[6] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_45(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,45};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[858]] /* cond.Cells[3].sat_in[6] variable */) = 0.0;
  threadData->lastEquationSolved = 45;
}

/*
equation index: 46
type: SIMPLE_ASSIGN
cond.Cells[3].sat_in[7] = 1e5
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_46(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,46};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[859]] /* cond.Cells[3].sat_in[7] variable */) = 1e5;
  threadData->lastEquationSolved = 46;
}

/*
equation index: 47
type: SIMPLE_ASSIGN
cond.Cells[3].sat_in[8] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_47(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,47};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[860]] /* cond.Cells[3].sat_in[8] variable */) = 0.0;
  threadData->lastEquationSolved = 47;
}

/*
equation index: 48
type: SIMPLE_ASSIGN
cond.Cells[3].sat_in[9] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_48(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,48};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[861]] /* cond.Cells[3].sat_in[9] variable */) = 0.0;
  threadData->lastEquationSolved = 48;
}

/*
equation index: 49
type: SIMPLE_ASSIGN
cond.Cells[3].sat_in[10] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_49(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,49};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* cond.Cells[3].sat_in[10] variable */) = 0.0;
  threadData->lastEquationSolved = 49;
}

/*
equation index: 50
type: SIMPLE_ASSIGN
cond.Cells[3].sat_in[11] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_50(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,50};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[863]] /* cond.Cells[3].sat_in[11] variable */) = 0.0;
  threadData->lastEquationSolved = 50;
}

/*
equation index: 51
type: SIMPLE_ASSIGN
cond.Cells[3].sat_in[12] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_51(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,51};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[864]] /* cond.Cells[3].sat_in[12] variable */) = 0.0;
  threadData->lastEquationSolved = 51;
}

/*
equation index: 52
type: SIMPLE_ASSIGN
cond.Cells[3].sat_in[13] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_52(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,52};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* cond.Cells[3].sat_in[13] variable */) = 0.0;
  threadData->lastEquationSolved = 52;
}

/*
equation index: 53
type: SIMPLE_ASSIGN
cond.Cells[3].sat_in[14] = 300.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_53(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,53};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[866]] /* cond.Cells[3].sat_in[14] variable */) = 300.0;
  threadData->lastEquationSolved = 53;
}

/*
equation index: 54
type: SIMPLE_ASSIGN
cond.Cells[4].sat_in[1] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_54(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,54};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* cond.Cells[4].sat_in[1] variable */) = 0.0;
  threadData->lastEquationSolved = 54;
}

/*
equation index: 55
type: SIMPLE_ASSIGN
cond.Cells[4].sat_in[2] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_55(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,55};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[868]] /* cond.Cells[4].sat_in[2] variable */) = 0.0;
  threadData->lastEquationSolved = 55;
}

/*
equation index: 56
type: SIMPLE_ASSIGN
cond.Cells[4].sat_in[3] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_56(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,56};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[869]] /* cond.Cells[4].sat_in[3] variable */) = 0.0;
  threadData->lastEquationSolved = 56;
}

/*
equation index: 57
type: SIMPLE_ASSIGN
cond.Cells[4].sat_in[4] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_57(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,57};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[870]] /* cond.Cells[4].sat_in[4] variable */) = 0.0;
  threadData->lastEquationSolved = 57;
}

/*
equation index: 58
type: SIMPLE_ASSIGN
cond.Cells[4].sat_in[5] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_58(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,58};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[871]] /* cond.Cells[4].sat_in[5] variable */) = 0.0;
  threadData->lastEquationSolved = 58;
}

/*
equation index: 59
type: SIMPLE_ASSIGN
cond.Cells[4].sat_in[6] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_59(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,59};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[872]] /* cond.Cells[4].sat_in[6] variable */) = 0.0;
  threadData->lastEquationSolved = 59;
}

/*
equation index: 60
type: SIMPLE_ASSIGN
cond.Cells[4].sat_in[7] = 1e5
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_60(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,60};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[873]] /* cond.Cells[4].sat_in[7] variable */) = 1e5;
  threadData->lastEquationSolved = 60;
}

/*
equation index: 61
type: SIMPLE_ASSIGN
cond.Cells[4].sat_in[8] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_61(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,61};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[874]] /* cond.Cells[4].sat_in[8] variable */) = 0.0;
  threadData->lastEquationSolved = 61;
}

/*
equation index: 62
type: SIMPLE_ASSIGN
cond.Cells[4].sat_in[9] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_62(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,62};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[875]] /* cond.Cells[4].sat_in[9] variable */) = 0.0;
  threadData->lastEquationSolved = 62;
}

/*
equation index: 63
type: SIMPLE_ASSIGN
cond.Cells[4].sat_in[10] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_63(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,63};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[876]] /* cond.Cells[4].sat_in[10] variable */) = 0.0;
  threadData->lastEquationSolved = 63;
}

/*
equation index: 64
type: SIMPLE_ASSIGN
cond.Cells[4].sat_in[11] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_64(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,64};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[877]] /* cond.Cells[4].sat_in[11] variable */) = 0.0;
  threadData->lastEquationSolved = 64;
}

/*
equation index: 65
type: SIMPLE_ASSIGN
cond.Cells[4].sat_in[12] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_65(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,65};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[878]] /* cond.Cells[4].sat_in[12] variable */) = 0.0;
  threadData->lastEquationSolved = 65;
}

/*
equation index: 66
type: SIMPLE_ASSIGN
cond.Cells[4].sat_in[13] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_66(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,66};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[879]] /* cond.Cells[4].sat_in[13] variable */) = 0.0;
  threadData->lastEquationSolved = 66;
}

/*
equation index: 67
type: SIMPLE_ASSIGN
cond.Cells[4].sat_in[14] = 300.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_67(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,67};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[880]] /* cond.Cells[4].sat_in[14] variable */) = 300.0;
  threadData->lastEquationSolved = 67;
}

/*
equation index: 68
type: SIMPLE_ASSIGN
cond.Cells[5].sat_in[1] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_68(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,68};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* cond.Cells[5].sat_in[1] variable */) = 0.0;
  threadData->lastEquationSolved = 68;
}

/*
equation index: 69
type: SIMPLE_ASSIGN
cond.Cells[5].sat_in[2] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_69(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,69};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[882]] /* cond.Cells[5].sat_in[2] variable */) = 0.0;
  threadData->lastEquationSolved = 69;
}

/*
equation index: 70
type: SIMPLE_ASSIGN
cond.Cells[5].sat_in[3] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_70(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,70};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* cond.Cells[5].sat_in[3] variable */) = 0.0;
  threadData->lastEquationSolved = 70;
}

/*
equation index: 71
type: SIMPLE_ASSIGN
cond.Cells[5].sat_in[4] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_71(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,71};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[884]] /* cond.Cells[5].sat_in[4] variable */) = 0.0;
  threadData->lastEquationSolved = 71;
}

/*
equation index: 72
type: SIMPLE_ASSIGN
cond.Cells[5].sat_in[5] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_72(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,72};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[885]] /* cond.Cells[5].sat_in[5] variable */) = 0.0;
  threadData->lastEquationSolved = 72;
}

/*
equation index: 73
type: SIMPLE_ASSIGN
cond.Cells[5].sat_in[6] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_73(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,73};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[886]] /* cond.Cells[5].sat_in[6] variable */) = 0.0;
  threadData->lastEquationSolved = 73;
}

/*
equation index: 74
type: SIMPLE_ASSIGN
cond.Cells[5].sat_in[7] = 1e5
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_74(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* cond.Cells[5].sat_in[7] variable */) = 1e5;
  threadData->lastEquationSolved = 74;
}

/*
equation index: 75
type: SIMPLE_ASSIGN
cond.Cells[5].sat_in[8] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_75(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,75};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[888]] /* cond.Cells[5].sat_in[8] variable */) = 0.0;
  threadData->lastEquationSolved = 75;
}

/*
equation index: 76
type: SIMPLE_ASSIGN
cond.Cells[5].sat_in[9] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_76(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,76};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* cond.Cells[5].sat_in[9] variable */) = 0.0;
  threadData->lastEquationSolved = 76;
}

/*
equation index: 77
type: SIMPLE_ASSIGN
cond.Cells[5].sat_in[10] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_77(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,77};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[890]] /* cond.Cells[5].sat_in[10] variable */) = 0.0;
  threadData->lastEquationSolved = 77;
}

/*
equation index: 78
type: SIMPLE_ASSIGN
cond.Cells[5].sat_in[11] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_78(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,78};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* cond.Cells[5].sat_in[11] variable */) = 0.0;
  threadData->lastEquationSolved = 78;
}

/*
equation index: 79
type: SIMPLE_ASSIGN
cond.Cells[5].sat_in[12] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_79(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,79};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[892]] /* cond.Cells[5].sat_in[12] variable */) = 0.0;
  threadData->lastEquationSolved = 79;
}

/*
equation index: 80
type: SIMPLE_ASSIGN
cond.Cells[5].sat_in[13] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_80(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,80};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* cond.Cells[5].sat_in[13] variable */) = 0.0;
  threadData->lastEquationSolved = 80;
}

/*
equation index: 81
type: SIMPLE_ASSIGN
cond.Cells[5].sat_in[14] = 300.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_81(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,81};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* cond.Cells[5].sat_in[14] variable */) = 300.0;
  threadData->lastEquationSolved = 81;
}

/*
equation index: 82
type: SIMPLE_ASSIGN
evap.Cells[1].sat_in[1] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_82(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,82};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1098]] /* evap.Cells[1].sat_in[1] variable */) = 0.0;
  threadData->lastEquationSolved = 82;
}

/*
equation index: 83
type: SIMPLE_ASSIGN
evap.Cells[1].sat_in[2] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_83(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,83};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1099]] /* evap.Cells[1].sat_in[2] variable */) = 0.0;
  threadData->lastEquationSolved = 83;
}

/*
equation index: 84
type: SIMPLE_ASSIGN
evap.Cells[1].sat_in[3] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_84(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,84};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1100]] /* evap.Cells[1].sat_in[3] variable */) = 0.0;
  threadData->lastEquationSolved = 84;
}

/*
equation index: 85
type: SIMPLE_ASSIGN
evap.Cells[1].sat_in[4] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_85(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,85};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* evap.Cells[1].sat_in[4] variable */) = 0.0;
  threadData->lastEquationSolved = 85;
}

/*
equation index: 86
type: SIMPLE_ASSIGN
evap.Cells[1].sat_in[5] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_86(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,86};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* evap.Cells[1].sat_in[5] variable */) = 0.0;
  threadData->lastEquationSolved = 86;
}

/*
equation index: 87
type: SIMPLE_ASSIGN
evap.Cells[1].sat_in[6] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_87(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,87};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* evap.Cells[1].sat_in[6] variable */) = 0.0;
  threadData->lastEquationSolved = 87;
}

/*
equation index: 88
type: SIMPLE_ASSIGN
evap.Cells[1].sat_in[7] = 1e5
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_88(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,88};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* evap.Cells[1].sat_in[7] variable */) = 1e5;
  threadData->lastEquationSolved = 88;
}

/*
equation index: 89
type: SIMPLE_ASSIGN
evap.Cells[1].sat_in[8] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_89(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,89};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* evap.Cells[1].sat_in[8] variable */) = 0.0;
  threadData->lastEquationSolved = 89;
}

/*
equation index: 90
type: SIMPLE_ASSIGN
evap.Cells[1].sat_in[9] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_90(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,90};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].sat_in[9] variable */) = 0.0;
  threadData->lastEquationSolved = 90;
}

/*
equation index: 91
type: SIMPLE_ASSIGN
evap.Cells[1].sat_in[10] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_91(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,91};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[1].sat_in[10] variable */) = 0.0;
  threadData->lastEquationSolved = 91;
}

/*
equation index: 92
type: SIMPLE_ASSIGN
evap.Cells[1].sat_in[11] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_92(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,92};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[1].sat_in[11] variable */) = 0.0;
  threadData->lastEquationSolved = 92;
}

/*
equation index: 93
type: SIMPLE_ASSIGN
evap.Cells[1].sat_in[12] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_93(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,93};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[1].sat_in[12] variable */) = 0.0;
  threadData->lastEquationSolved = 93;
}

/*
equation index: 94
type: SIMPLE_ASSIGN
evap.Cells[1].sat_in[13] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_94(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,94};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[1].sat_in[13] variable */) = 0.0;
  threadData->lastEquationSolved = 94;
}

/*
equation index: 95
type: SIMPLE_ASSIGN
evap.Cells[1].sat_in[14] = 300.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_95(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,95};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1111]] /* evap.Cells[1].sat_in[14] variable */) = 300.0;
  threadData->lastEquationSolved = 95;
}

/*
equation index: 96
type: SIMPLE_ASSIGN
evap.Cells[2].sat_in[1] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_96(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,96};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1112]] /* evap.Cells[2].sat_in[1] variable */) = 0.0;
  threadData->lastEquationSolved = 96;
}

/*
equation index: 97
type: SIMPLE_ASSIGN
evap.Cells[2].sat_in[2] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_97(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,97};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1113]] /* evap.Cells[2].sat_in[2] variable */) = 0.0;
  threadData->lastEquationSolved = 97;
}

/*
equation index: 98
type: SIMPLE_ASSIGN
evap.Cells[2].sat_in[3] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_98(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,98};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1114]] /* evap.Cells[2].sat_in[3] variable */) = 0.0;
  threadData->lastEquationSolved = 98;
}

/*
equation index: 99
type: SIMPLE_ASSIGN
evap.Cells[2].sat_in[4] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_99(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,99};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* evap.Cells[2].sat_in[4] variable */) = 0.0;
  threadData->lastEquationSolved = 99;
}

/*
equation index: 100
type: SIMPLE_ASSIGN
evap.Cells[2].sat_in[5] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* evap.Cells[2].sat_in[5] variable */) = 0.0;
  threadData->lastEquationSolved = 100;
}

/*
equation index: 101
type: SIMPLE_ASSIGN
evap.Cells[2].sat_in[6] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* evap.Cells[2].sat_in[6] variable */) = 0.0;
  threadData->lastEquationSolved = 101;
}

/*
equation index: 102
type: SIMPLE_ASSIGN
evap.Cells[2].sat_in[7] = 1e5
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1118]] /* evap.Cells[2].sat_in[7] variable */) = 1e5;
  threadData->lastEquationSolved = 102;
}

/*
equation index: 103
type: SIMPLE_ASSIGN
evap.Cells[2].sat_in[8] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* evap.Cells[2].sat_in[8] variable */) = 0.0;
  threadData->lastEquationSolved = 103;
}

/*
equation index: 104
type: SIMPLE_ASSIGN
evap.Cells[2].sat_in[9] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* evap.Cells[2].sat_in[9] variable */) = 0.0;
  threadData->lastEquationSolved = 104;
}

/*
equation index: 105
type: SIMPLE_ASSIGN
evap.Cells[2].sat_in[10] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* evap.Cells[2].sat_in[10] variable */) = 0.0;
  threadData->lastEquationSolved = 105;
}

/*
equation index: 106
type: SIMPLE_ASSIGN
evap.Cells[2].sat_in[11] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* evap.Cells[2].sat_in[11] variable */) = 0.0;
  threadData->lastEquationSolved = 106;
}

/*
equation index: 107
type: SIMPLE_ASSIGN
evap.Cells[2].sat_in[12] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* evap.Cells[2].sat_in[12] variable */) = 0.0;
  threadData->lastEquationSolved = 107;
}

/*
equation index: 108
type: SIMPLE_ASSIGN
evap.Cells[2].sat_in[13] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* evap.Cells[2].sat_in[13] variable */) = 0.0;
  threadData->lastEquationSolved = 108;
}

/*
equation index: 109
type: SIMPLE_ASSIGN
evap.Cells[2].sat_in[14] = 300.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* evap.Cells[2].sat_in[14] variable */) = 300.0;
  threadData->lastEquationSolved = 109;
}

/*
equation index: 110
type: SIMPLE_ASSIGN
evap.Cells[3].sat_in[1] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* evap.Cells[3].sat_in[1] variable */) = 0.0;
  threadData->lastEquationSolved = 110;
}

/*
equation index: 111
type: SIMPLE_ASSIGN
evap.Cells[3].sat_in[2] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* evap.Cells[3].sat_in[2] variable */) = 0.0;
  threadData->lastEquationSolved = 111;
}

/*
equation index: 112
type: SIMPLE_ASSIGN
evap.Cells[3].sat_in[3] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* evap.Cells[3].sat_in[3] variable */) = 0.0;
  threadData->lastEquationSolved = 112;
}

/*
equation index: 113
type: SIMPLE_ASSIGN
evap.Cells[3].sat_in[4] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1129]] /* evap.Cells[3].sat_in[4] variable */) = 0.0;
  threadData->lastEquationSolved = 113;
}

/*
equation index: 114
type: SIMPLE_ASSIGN
evap.Cells[3].sat_in[5] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* evap.Cells[3].sat_in[5] variable */) = 0.0;
  threadData->lastEquationSolved = 114;
}

/*
equation index: 115
type: SIMPLE_ASSIGN
evap.Cells[3].sat_in[6] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* evap.Cells[3].sat_in[6] variable */) = 0.0;
  threadData->lastEquationSolved = 115;
}

/*
equation index: 116
type: SIMPLE_ASSIGN
evap.Cells[3].sat_in[7] = 1e5
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,116};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* evap.Cells[3].sat_in[7] variable */) = 1e5;
  threadData->lastEquationSolved = 116;
}

/*
equation index: 117
type: SIMPLE_ASSIGN
evap.Cells[3].sat_in[8] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* evap.Cells[3].sat_in[8] variable */) = 0.0;
  threadData->lastEquationSolved = 117;
}

/*
equation index: 118
type: SIMPLE_ASSIGN
evap.Cells[3].sat_in[9] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* evap.Cells[3].sat_in[9] variable */) = 0.0;
  threadData->lastEquationSolved = 118;
}

/*
equation index: 119
type: SIMPLE_ASSIGN
evap.Cells[3].sat_in[10] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1135]] /* evap.Cells[3].sat_in[10] variable */) = 0.0;
  threadData->lastEquationSolved = 119;
}

/*
equation index: 120
type: SIMPLE_ASSIGN
evap.Cells[3].sat_in[11] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* evap.Cells[3].sat_in[11] variable */) = 0.0;
  threadData->lastEquationSolved = 120;
}

/*
equation index: 121
type: SIMPLE_ASSIGN
evap.Cells[3].sat_in[12] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1137]] /* evap.Cells[3].sat_in[12] variable */) = 0.0;
  threadData->lastEquationSolved = 121;
}

/*
equation index: 122
type: SIMPLE_ASSIGN
evap.Cells[3].sat_in[13] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1138]] /* evap.Cells[3].sat_in[13] variable */) = 0.0;
  threadData->lastEquationSolved = 122;
}

/*
equation index: 123
type: SIMPLE_ASSIGN
evap.Cells[3].sat_in[14] = 300.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1139]] /* evap.Cells[3].sat_in[14] variable */) = 300.0;
  threadData->lastEquationSolved = 123;
}

/*
equation index: 124
type: SIMPLE_ASSIGN
evap.Cells[4].sat_in[1] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* evap.Cells[4].sat_in[1] variable */) = 0.0;
  threadData->lastEquationSolved = 124;
}

/*
equation index: 125
type: SIMPLE_ASSIGN
evap.Cells[4].sat_in[2] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* evap.Cells[4].sat_in[2] variable */) = 0.0;
  threadData->lastEquationSolved = 125;
}

/*
equation index: 126
type: SIMPLE_ASSIGN
evap.Cells[4].sat_in[3] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,126};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* evap.Cells[4].sat_in[3] variable */) = 0.0;
  threadData->lastEquationSolved = 126;
}

/*
equation index: 127
type: SIMPLE_ASSIGN
evap.Cells[4].sat_in[4] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* evap.Cells[4].sat_in[4] variable */) = 0.0;
  threadData->lastEquationSolved = 127;
}

/*
equation index: 128
type: SIMPLE_ASSIGN
evap.Cells[4].sat_in[5] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,128};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1144]] /* evap.Cells[4].sat_in[5] variable */) = 0.0;
  threadData->lastEquationSolved = 128;
}

/*
equation index: 129
type: SIMPLE_ASSIGN
evap.Cells[4].sat_in[6] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1145]] /* evap.Cells[4].sat_in[6] variable */) = 0.0;
  threadData->lastEquationSolved = 129;
}

/*
equation index: 130
type: SIMPLE_ASSIGN
evap.Cells[4].sat_in[7] = 1e5
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,130};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1146]] /* evap.Cells[4].sat_in[7] variable */) = 1e5;
  threadData->lastEquationSolved = 130;
}

/*
equation index: 131
type: SIMPLE_ASSIGN
evap.Cells[4].sat_in[8] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,131};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* evap.Cells[4].sat_in[8] variable */) = 0.0;
  threadData->lastEquationSolved = 131;
}

/*
equation index: 132
type: SIMPLE_ASSIGN
evap.Cells[4].sat_in[9] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,132};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* evap.Cells[4].sat_in[9] variable */) = 0.0;
  threadData->lastEquationSolved = 132;
}

/*
equation index: 133
type: SIMPLE_ASSIGN
evap.Cells[4].sat_in[10] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1149]] /* evap.Cells[4].sat_in[10] variable */) = 0.0;
  threadData->lastEquationSolved = 133;
}

/*
equation index: 134
type: SIMPLE_ASSIGN
evap.Cells[4].sat_in[11] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,134};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1150]] /* evap.Cells[4].sat_in[11] variable */) = 0.0;
  threadData->lastEquationSolved = 134;
}

/*
equation index: 135
type: SIMPLE_ASSIGN
evap.Cells[4].sat_in[12] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* evap.Cells[4].sat_in[12] variable */) = 0.0;
  threadData->lastEquationSolved = 135;
}

/*
equation index: 136
type: SIMPLE_ASSIGN
evap.Cells[4].sat_in[13] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,136};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* evap.Cells[4].sat_in[13] variable */) = 0.0;
  threadData->lastEquationSolved = 136;
}

/*
equation index: 137
type: SIMPLE_ASSIGN
evap.Cells[4].sat_in[14] = 300.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* evap.Cells[4].sat_in[14] variable */) = 300.0;
  threadData->lastEquationSolved = 137;
}

/*
equation index: 138
type: SIMPLE_ASSIGN
evap.Cells[5].sat_in[1] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* evap.Cells[5].sat_in[1] variable */) = 0.0;
  threadData->lastEquationSolved = 138;
}

/*
equation index: 139
type: SIMPLE_ASSIGN
evap.Cells[5].sat_in[2] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1155]] /* evap.Cells[5].sat_in[2] variable */) = 0.0;
  threadData->lastEquationSolved = 139;
}

/*
equation index: 140
type: SIMPLE_ASSIGN
evap.Cells[5].sat_in[3] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1156]] /* evap.Cells[5].sat_in[3] variable */) = 0.0;
  threadData->lastEquationSolved = 140;
}

/*
equation index: 141
type: SIMPLE_ASSIGN
evap.Cells[5].sat_in[4] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* evap.Cells[5].sat_in[4] variable */) = 0.0;
  threadData->lastEquationSolved = 141;
}

/*
equation index: 142
type: SIMPLE_ASSIGN
evap.Cells[5].sat_in[5] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,142};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1158]] /* evap.Cells[5].sat_in[5] variable */) = 0.0;
  threadData->lastEquationSolved = 142;
}

/*
equation index: 143
type: SIMPLE_ASSIGN
evap.Cells[5].sat_in[6] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1159]] /* evap.Cells[5].sat_in[6] variable */) = 0.0;
  threadData->lastEquationSolved = 143;
}

/*
equation index: 144
type: SIMPLE_ASSIGN
evap.Cells[5].sat_in[7] = 1e5
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1160]] /* evap.Cells[5].sat_in[7] variable */) = 1e5;
  threadData->lastEquationSolved = 144;
}

/*
equation index: 145
type: SIMPLE_ASSIGN
evap.Cells[5].sat_in[8] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1161]] /* evap.Cells[5].sat_in[8] variable */) = 0.0;
  threadData->lastEquationSolved = 145;
}

/*
equation index: 146
type: SIMPLE_ASSIGN
evap.Cells[5].sat_in[9] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1162]] /* evap.Cells[5].sat_in[9] variable */) = 0.0;
  threadData->lastEquationSolved = 146;
}

/*
equation index: 147
type: SIMPLE_ASSIGN
evap.Cells[5].sat_in[10] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,147};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1163]] /* evap.Cells[5].sat_in[10] variable */) = 0.0;
  threadData->lastEquationSolved = 147;
}

/*
equation index: 148
type: SIMPLE_ASSIGN
evap.Cells[5].sat_in[11] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1164]] /* evap.Cells[5].sat_in[11] variable */) = 0.0;
  threadData->lastEquationSolved = 148;
}

/*
equation index: 149
type: SIMPLE_ASSIGN
evap.Cells[5].sat_in[12] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* evap.Cells[5].sat_in[12] variable */) = 0.0;
  threadData->lastEquationSolved = 149;
}

/*
equation index: 150
type: SIMPLE_ASSIGN
evap.Cells[5].sat_in[13] = 0.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1166]] /* evap.Cells[5].sat_in[13] variable */) = 0.0;
  threadData->lastEquationSolved = 150;
}

/*
equation index: 151
type: SIMPLE_ASSIGN
evap.Cells[5].sat_in[14] = 300.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1167]] /* evap.Cells[5].sat_in[14] variable */) = 300.0;
  threadData->lastEquationSolved = 151;
}

/*
equation index: 152
type: SIMPLE_ASSIGN
txv.t_change = 5.0
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* txv.t_change variable */) = 5.0;
  threadData->lastEquationSolved = 152;
}

/*
equation index: 153
type: SIMPLE_ASSIGN
cond.Cells[1].p = $START.cond.Cells[1].p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[5] /* cond.Cells[1].p STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 153;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1371(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1370(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1364(DATA *data, threadData_t *threadData);

extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1365(DATA *data, threadData_t *threadData);


/*
equation index: 158
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setSat_p(cond.Cells[1].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,158};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties tmp0;
  tmp0 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.Tsat variable */) = tmp0._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.dTp variable */) = tmp0._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.ddldp variable */) = tmp0._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.ddvdp variable */) = tmp0._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.dhldp variable */) = tmp0._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.dhvdp variable */) = tmp0._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.dl variable */) = tmp0._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.dv variable */) = tmp0._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.hl variable */) = tmp0._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.hv variable */) = tmp0._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.psat variable */) = tmp0._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.sigma variable */) = tmp0._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.sl variable */) = tmp0._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.sv variable */) = tmp0._sv;
  ;
  threadData->lastEquationSolved = 158;
}

/*
equation index: 159
type: SIMPLE_ASSIGN
cond.Cells[5].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cond.Cells[5].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.Tsat variable */);
  threadData->lastEquationSolved = 159;
}

/*
equation index: 160
type: SIMPLE_ASSIGN
cond.Cells[5].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,160};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cond.Cells[5].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.dTp variable */);
  threadData->lastEquationSolved = 160;
}

/*
equation index: 161
type: SIMPLE_ASSIGN
cond.Cells[5].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[779]] /* cond.Cells[5].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.ddldp variable */);
  threadData->lastEquationSolved = 161;
}

/*
equation index: 162
type: SIMPLE_ASSIGN
cond.Cells[5].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[784]] /* cond.Cells[5].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.ddvdp variable */);
  threadData->lastEquationSolved = 162;
}

/*
equation index: 163
type: SIMPLE_ASSIGN
cond.Cells[5].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cond.Cells[5].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.dhldp variable */);
  threadData->lastEquationSolved = 163;
}

/*
equation index: 164
type: SIMPLE_ASSIGN
cond.Cells[5].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* cond.Cells[5].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.dhvdp variable */);
  threadData->lastEquationSolved = 164;
}

/*
equation index: 165
type: SIMPLE_ASSIGN
cond.Cells[5].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,165};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cond.Cells[5].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.dl variable */);
  threadData->lastEquationSolved = 165;
}

/*
equation index: 166
type: SIMPLE_ASSIGN
cond.Cells[5].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* cond.Cells[5].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.dv variable */);
  threadData->lastEquationSolved = 166;
}

/*
equation index: 167
type: SIMPLE_ASSIGN
cond.Cells[5].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cond.Cells[5].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.hl variable */);
  threadData->lastEquationSolved = 167;
}

/*
equation index: 168
type: SIMPLE_ASSIGN
cond.Cells[5].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cond.Cells[5].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.hv variable */);
  threadData->lastEquationSolved = 168;
}

/*
equation index: 169
type: SIMPLE_ASSIGN
cond.Cells[5].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* cond.Cells[5].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.psat variable */);
  threadData->lastEquationSolved = 169;
}

/*
equation index: 170
type: SIMPLE_ASSIGN
cond.Cells[5].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* cond.Cells[5].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.sigma variable */);
  threadData->lastEquationSolved = 170;
}

/*
equation index: 171
type: SIMPLE_ASSIGN
cond.Cells[5].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* cond.Cells[5].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.sl variable */);
  threadData->lastEquationSolved = 171;
}

/*
equation index: 172
type: SIMPLE_ASSIGN
cond.Cells[5].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[824]] /* cond.Cells[5].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties158.sv variable */);
  threadData->lastEquationSolved = 172;
}

/*
equation index: 173
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setSat_p(cond.Cells[1].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,173};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties tmp1;
  tmp1 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.Tsat variable */) = tmp1._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.dTp variable */) = tmp1._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.ddldp variable */) = tmp1._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.ddvdp variable */) = tmp1._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.dhldp variable */) = tmp1._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.dhvdp variable */) = tmp1._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.dl variable */) = tmp1._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.dv variable */) = tmp1._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.hl variable */) = tmp1._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.hv variable */) = tmp1._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.psat variable */) = tmp1._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.sigma variable */) = tmp1._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.sl variable */) = tmp1._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.sv variable */) = tmp1._sv;
  ;
  threadData->lastEquationSolved = 173;
}

/*
equation index: 174
type: SIMPLE_ASSIGN
cond.Cells[4].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cond.Cells[4].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.Tsat variable */);
  threadData->lastEquationSolved = 174;
}

/*
equation index: 175
type: SIMPLE_ASSIGN
cond.Cells[4].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cond.Cells[4].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.dTp variable */);
  threadData->lastEquationSolved = 175;
}

/*
equation index: 176
type: SIMPLE_ASSIGN
cond.Cells[4].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,176};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* cond.Cells[4].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.ddldp variable */);
  threadData->lastEquationSolved = 176;
}

/*
equation index: 177
type: SIMPLE_ASSIGN
cond.Cells[4].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* cond.Cells[4].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.ddvdp variable */);
  threadData->lastEquationSolved = 177;
}

/*
equation index: 178
type: SIMPLE_ASSIGN
cond.Cells[4].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* cond.Cells[4].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.dhldp variable */);
  threadData->lastEquationSolved = 178;
}

/*
equation index: 179
type: SIMPLE_ASSIGN
cond.Cells[4].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* cond.Cells[4].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.dhvdp variable */);
  threadData->lastEquationSolved = 179;
}

/*
equation index: 180
type: SIMPLE_ASSIGN
cond.Cells[4].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,180};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cond.Cells[4].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.dl variable */);
  threadData->lastEquationSolved = 180;
}

/*
equation index: 181
type: SIMPLE_ASSIGN
cond.Cells[4].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* cond.Cells[4].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.dv variable */);
  threadData->lastEquationSolved = 181;
}

/*
equation index: 182
type: SIMPLE_ASSIGN
cond.Cells[4].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cond.Cells[4].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.hl variable */);
  threadData->lastEquationSolved = 182;
}

/*
equation index: 183
type: SIMPLE_ASSIGN
cond.Cells[4].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cond.Cells[4].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.hv variable */);
  threadData->lastEquationSolved = 183;
}

/*
equation index: 184
type: SIMPLE_ASSIGN
cond.Cells[4].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* cond.Cells[4].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.psat variable */);
  threadData->lastEquationSolved = 184;
}

/*
equation index: 185
type: SIMPLE_ASSIGN
cond.Cells[4].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* cond.Cells[4].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.sigma variable */);
  threadData->lastEquationSolved = 185;
}

/*
equation index: 186
type: SIMPLE_ASSIGN
cond.Cells[4].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* cond.Cells[4].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.sl variable */);
  threadData->lastEquationSolved = 186;
}

/*
equation index: 187
type: SIMPLE_ASSIGN
cond.Cells[4].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[823]] /* cond.Cells[4].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties173.sv variable */);
  threadData->lastEquationSolved = 187;
}

/*
equation index: 188
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setSat_p(cond.Cells[1].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,188};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties tmp2;
  tmp2 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.Tsat variable */) = tmp2._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.dTp variable */) = tmp2._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.ddldp variable */) = tmp2._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.ddvdp variable */) = tmp2._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.dhldp variable */) = tmp2._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.dhvdp variable */) = tmp2._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.dl variable */) = tmp2._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.dv variable */) = tmp2._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.hl variable */) = tmp2._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.hv variable */) = tmp2._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[66]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.psat variable */) = tmp2._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.sigma variable */) = tmp2._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.sl variable */) = tmp2._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.sv variable */) = tmp2._sv;
  ;
  threadData->lastEquationSolved = 188;
}

/*
equation index: 189
type: SIMPLE_ASSIGN
cond.Cells[3].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cond.Cells[3].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.Tsat variable */);
  threadData->lastEquationSolved = 189;
}

/*
equation index: 190
type: SIMPLE_ASSIGN
cond.Cells[3].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cond.Cells[3].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.dTp variable */);
  threadData->lastEquationSolved = 190;
}

/*
equation index: 191
type: SIMPLE_ASSIGN
cond.Cells[3].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* cond.Cells[3].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.ddldp variable */);
  threadData->lastEquationSolved = 191;
}

/*
equation index: 192
type: SIMPLE_ASSIGN
cond.Cells[3].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,192};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* cond.Cells[3].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.ddvdp variable */);
  threadData->lastEquationSolved = 192;
}

/*
equation index: 193
type: SIMPLE_ASSIGN
cond.Cells[3].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,193};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* cond.Cells[3].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.dhldp variable */);
  threadData->lastEquationSolved = 193;
}

/*
equation index: 194
type: SIMPLE_ASSIGN
cond.Cells[3].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,194};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* cond.Cells[3].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.dhvdp variable */);
  threadData->lastEquationSolved = 194;
}

/*
equation index: 195
type: SIMPLE_ASSIGN
cond.Cells[3].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cond.Cells[3].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.dl variable */);
  threadData->lastEquationSolved = 195;
}

/*
equation index: 196
type: SIMPLE_ASSIGN
cond.Cells[3].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* cond.Cells[3].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.dv variable */);
  threadData->lastEquationSolved = 196;
}

/*
equation index: 197
type: SIMPLE_ASSIGN
cond.Cells[3].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,197};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cond.Cells[3].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.hl variable */);
  threadData->lastEquationSolved = 197;
}

/*
equation index: 198
type: SIMPLE_ASSIGN
cond.Cells[3].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,198};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cond.Cells[3].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.hv variable */);
  threadData->lastEquationSolved = 198;
}

/*
equation index: 199
type: SIMPLE_ASSIGN
cond.Cells[3].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* cond.Cells[3].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[66]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.psat variable */);
  threadData->lastEquationSolved = 199;
}

/*
equation index: 200
type: SIMPLE_ASSIGN
cond.Cells[3].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,200};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* cond.Cells[3].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.sigma variable */);
  threadData->lastEquationSolved = 200;
}

/*
equation index: 201
type: SIMPLE_ASSIGN
cond.Cells[3].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* cond.Cells[3].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.sl variable */);
  threadData->lastEquationSolved = 201;
}

/*
equation index: 202
type: SIMPLE_ASSIGN
cond.Cells[3].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[822]] /* cond.Cells[3].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties188.sv variable */);
  threadData->lastEquationSolved = 202;
}

/*
equation index: 203
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setSat_p(cond.Cells[1].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,203};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties tmp3;
  tmp3 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.Tsat variable */) = tmp3._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.dTp variable */) = tmp3._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.ddldp variable */) = tmp3._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[73]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.ddvdp variable */) = tmp3._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[74]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.dhldp variable */) = tmp3._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.dhvdp variable */) = tmp3._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.dl variable */) = tmp3._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.dv variable */) = tmp3._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.hl variable */) = tmp3._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.hv variable */) = tmp3._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.psat variable */) = tmp3._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.sigma variable */) = tmp3._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.sl variable */) = tmp3._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.sv variable */) = tmp3._sv;
  ;
  threadData->lastEquationSolved = 203;
}

/*
equation index: 204
type: SIMPLE_ASSIGN
cond.Cells[2].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cond.Cells[2].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.Tsat variable */);
  threadData->lastEquationSolved = 204;
}

/*
equation index: 205
type: SIMPLE_ASSIGN
cond.Cells[2].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* cond.Cells[2].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.dTp variable */);
  threadData->lastEquationSolved = 205;
}

/*
equation index: 206
type: SIMPLE_ASSIGN
cond.Cells[2].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* cond.Cells[2].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.ddldp variable */);
  threadData->lastEquationSolved = 206;
}

/*
equation index: 207
type: SIMPLE_ASSIGN
cond.Cells[2].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,207};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[781]] /* cond.Cells[2].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[73]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.ddvdp variable */);
  threadData->lastEquationSolved = 207;
}

/*
equation index: 208
type: SIMPLE_ASSIGN
cond.Cells[2].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cond.Cells[2].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[74]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.dhldp variable */);
  threadData->lastEquationSolved = 208;
}

/*
equation index: 209
type: SIMPLE_ASSIGN
cond.Cells[2].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* cond.Cells[2].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.dhvdp variable */);
  threadData->lastEquationSolved = 209;
}

/*
equation index: 210
type: SIMPLE_ASSIGN
cond.Cells[2].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cond.Cells[2].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.dl variable */);
  threadData->lastEquationSolved = 210;
}

/*
equation index: 211
type: SIMPLE_ASSIGN
cond.Cells[2].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* cond.Cells[2].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.dv variable */);
  threadData->lastEquationSolved = 211;
}

/*
equation index: 212
type: SIMPLE_ASSIGN
cond.Cells[2].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cond.Cells[2].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.hl variable */);
  threadData->lastEquationSolved = 212;
}

/*
equation index: 213
type: SIMPLE_ASSIGN
cond.Cells[2].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,213};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cond.Cells[2].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.hv variable */);
  threadData->lastEquationSolved = 213;
}

/*
equation index: 214
type: SIMPLE_ASSIGN
cond.Cells[2].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,214};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* cond.Cells[2].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.psat variable */);
  threadData->lastEquationSolved = 214;
}

/*
equation index: 215
type: SIMPLE_ASSIGN
cond.Cells[2].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,215};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* cond.Cells[2].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.sigma variable */);
  threadData->lastEquationSolved = 215;
}

/*
equation index: 216
type: SIMPLE_ASSIGN
cond.Cells[2].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* cond.Cells[2].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.sl variable */);
  threadData->lastEquationSolved = 216;
}

/*
equation index: 217
type: SIMPLE_ASSIGN
cond.Cells[2].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* cond.Cells[2].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties203.sv variable */);
  threadData->lastEquationSolved = 217;
}

/*
equation index: 218
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setSat_p(cond.Cells[1].p);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,218};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties tmp4;
  tmp4 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setSat__p(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.Tsat variable */) = tmp4._Tsat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.dTp variable */) = tmp4._dTp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.ddldp variable */) = tmp4._ddldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.ddvdp variable */) = tmp4._ddvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.dhldp variable */) = tmp4._dhldp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.dhvdp variable */) = tmp4._dhvdp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.dl variable */) = tmp4._dl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.dv variable */) = tmp4._dv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.hl variable */) = tmp4._hl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.hv variable */) = tmp4._hv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.psat variable */) = tmp4._psat;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.sigma variable */) = tmp4._sigma;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.sl variable */) = tmp4._sl;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.sv variable */) = tmp4._sv;
  ;
  threadData->lastEquationSolved = 218;
}

/*
equation index: 219
type: SIMPLE_ASSIGN
cond.Cells[1].sat.Tsat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.Tsat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cond.Cells[1].sat.Tsat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.Tsat variable */);
  threadData->lastEquationSolved = 219;
}

/*
equation index: 220
type: SIMPLE_ASSIGN
cond.Cells[1].sat.dTp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.dTp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cond.Cells[1].sat.dTp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.dTp variable */);
  threadData->lastEquationSolved = 220;
}

/*
equation index: 221
type: SIMPLE_ASSIGN
cond.Cells[1].sat.ddldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.ddldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cond.Cells[1].sat.ddldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.ddldp variable */);
  threadData->lastEquationSolved = 221;
}

/*
equation index: 222
type: SIMPLE_ASSIGN
cond.Cells[1].sat.ddvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.ddvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* cond.Cells[1].sat.ddvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.ddvdp variable */);
  threadData->lastEquationSolved = 222;
}

/*
equation index: 223
type: SIMPLE_ASSIGN
cond.Cells[1].sat.dhldp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.dhldp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* cond.Cells[1].sat.dhldp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.dhldp variable */);
  threadData->lastEquationSolved = 223;
}

/*
equation index: 224
type: SIMPLE_ASSIGN
cond.Cells[1].sat.dhvdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.dhvdp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[790]] /* cond.Cells[1].sat.dhvdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.dhvdp variable */);
  threadData->lastEquationSolved = 224;
}

/*
equation index: 225
type: SIMPLE_ASSIGN
cond.Cells[1].sat.dl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.dl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* cond.Cells[1].sat.dl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.dl variable */);
  threadData->lastEquationSolved = 225;
}

/*
equation index: 226
type: SIMPLE_ASSIGN
cond.Cells[1].sat.dv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.dv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* cond.Cells[1].sat.dv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.dv variable */);
  threadData->lastEquationSolved = 226;
}

/*
equation index: 227
type: SIMPLE_ASSIGN
cond.Cells[1].h_l = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.hl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cond.Cells[1].h_l variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.hl variable */);
  threadData->lastEquationSolved = 227;
}

/*
equation index: 228
type: SIMPLE_ASSIGN
cond.Cells[1].h_v = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.hv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,228};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cond.Cells[1].h_v variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.hv variable */);
  threadData->lastEquationSolved = 228;
}

/*
equation index: 229
type: SIMPLE_ASSIGN
cond.Cells[1].sat.psat = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.psat
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cond.Cells[1].sat.psat variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.psat variable */);
  threadData->lastEquationSolved = 229;
}

/*
equation index: 230
type: SIMPLE_ASSIGN
cond.Cells[1].sat.sigma = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.sigma
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* cond.Cells[1].sat.sigma variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.sigma variable */);
  threadData->lastEquationSolved = 230;
}

/*
equation index: 231
type: SIMPLE_ASSIGN
cond.Cells[1].sat.sl = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.sl
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* cond.Cells[1].sat.sl variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.sl variable */);
  threadData->lastEquationSolved = 231;
}

/*
equation index: 232
type: SIMPLE_ASSIGN
cond.Cells[1].sat.sv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.sv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* cond.Cells[1].sat.sv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties218.sv variable */);
  threadData->lastEquationSolved = 232;
}

/*
equation index: 233
type: SIMPLE_ASSIGN
cond.Cells[1].h = $START.cond.Cells[1].h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[0] /* cond.Cells[1].h STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 233;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_824(DATA *data, threadData_t *threadData);


/*
equation index: 235
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setState_ph(cond.Cells[1].p, cond.Cells[1].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,235};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState tmp5;
  tmp5 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.T variable */) = tmp5._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.a variable */) = tmp5._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.beta variable */) = tmp5._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.cp variable */) = tmp5._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.cv variable */) = tmp5._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.d variable */) = tmp5._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.ddhp variable */) = tmp5._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.ddph variable */) = tmp5._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.eta variable */) = tmp5._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.h variable */) = tmp5._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.kappa variable */) = tmp5._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.lambda variable */) = tmp5._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.p variable */) = tmp5._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.phase variable */) = tmp5._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.s variable */) = tmp5._s;
  ;
  threadData->lastEquationSolved = 235;
}

/*
equation index: 236
type: SIMPLE_ASSIGN
cond.Cells[1].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* cond.Cells[1].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.T variable */);
  threadData->lastEquationSolved = 236;
}

/*
equation index: 237
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cond.Cells[1].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.a variable */);
  threadData->lastEquationSolved = 237;
}

/*
equation index: 238
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* cond.Cells[1].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.beta variable */);
  threadData->lastEquationSolved = 238;
}

/*
equation index: 239
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* cond.Cells[1].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.cp variable */);
  threadData->lastEquationSolved = 239;
}

/*
equation index: 240
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cond.Cells[1].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.cv variable */);
  threadData->lastEquationSolved = 240;
}

/*
equation index: 241
type: SIMPLE_ASSIGN
cond.Cells[1].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cond.Cells[1].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.d variable */);
  threadData->lastEquationSolved = 241;
}

/*
equation index: 242
type: SIMPLE_ASSIGN
cond.Cells[1].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* cond.Cells[1].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.ddhp variable */);
  threadData->lastEquationSolved = 242;
}

/*
equation index: 243
type: SIMPLE_ASSIGN
cond.Cells[1].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* cond.Cells[1].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.ddph variable */);
  threadData->lastEquationSolved = 243;
}

/*
equation index: 244
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* cond.Cells[1].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.eta variable */);
  threadData->lastEquationSolved = 244;
}

/*
equation index: 245
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* cond.Cells[1].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.h variable */);
  threadData->lastEquationSolved = 245;
}

/*
equation index: 246
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[709]] /* cond.Cells[1].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.kappa variable */);
  threadData->lastEquationSolved = 246;
}

/*
equation index: 247
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cond.Cells[1].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.lambda variable */);
  threadData->lastEquationSolved = 247;
}

/*
equation index: 248
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cond.Cells[1].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.p variable */);
  threadData->lastEquationSolved = 248;
}

/*
equation index: 249
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,249};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[20]] /* cond.Cells[1].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.phase variable */);
  threadData->lastEquationSolved = 249;
}

/*
equation index: 250
type: SIMPLE_ASSIGN
cond.Cells[1].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[1].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState235.s variable */);
  threadData->lastEquationSolved = 250;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_851(DATA *data, threadData_t *threadData);


/*
equation index: 252
type: SIMPLE_ASSIGN
cond.Cells[2].h = $START.cond.Cells[2].h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[1] /* cond.Cells[2].h STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 252;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_867(DATA *data, threadData_t *threadData);


/*
equation index: 254
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setState_ph(cond.Cells[1].p, cond.Cells[2].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,254};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState tmp6;
  tmp6 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.T variable */) = tmp6._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.a variable */) = tmp6._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.beta variable */) = tmp6._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.cp variable */) = tmp6._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.cv variable */) = tmp6._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.d variable */) = tmp6._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.ddhp variable */) = tmp6._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.ddph variable */) = tmp6._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.eta variable */) = tmp6._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.h variable */) = tmp6._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.kappa variable */) = tmp6._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.lambda variable */) = tmp6._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.p variable */) = tmp6._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[1]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.phase variable */) = tmp6._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[195]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.s variable */) = tmp6._s;
  ;
  threadData->lastEquationSolved = 254;
}

/*
equation index: 255
type: SIMPLE_ASSIGN
cond.Cells[2].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[660]] /* cond.Cells[2].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.T variable */);
  threadData->lastEquationSolved = 255;
}

/*
equation index: 256
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,256};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cond.Cells[2].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.a variable */);
  threadData->lastEquationSolved = 256;
}

/*
equation index: 257
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* cond.Cells[2].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.beta variable */);
  threadData->lastEquationSolved = 257;
}

/*
equation index: 258
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,258};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* cond.Cells[2].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.cp variable */);
  threadData->lastEquationSolved = 258;
}

/*
equation index: 259
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* cond.Cells[2].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.cv variable */);
  threadData->lastEquationSolved = 259;
}

/*
equation index: 260
type: SIMPLE_ASSIGN
cond.Cells[2].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,260};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cond.Cells[2].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.d variable */);
  threadData->lastEquationSolved = 260;
}

/*
equation index: 261
type: SIMPLE_ASSIGN
cond.Cells[2].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[670]] /* cond.Cells[2].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.ddhp variable */);
  threadData->lastEquationSolved = 261;
}

/*
equation index: 262
type: SIMPLE_ASSIGN
cond.Cells[2].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* cond.Cells[2].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.ddph variable */);
  threadData->lastEquationSolved = 262;
}

/*
equation index: 263
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,263};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* cond.Cells[2].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.eta variable */);
  threadData->lastEquationSolved = 263;
}

/*
equation index: 264
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,264};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* cond.Cells[2].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.h variable */);
  threadData->lastEquationSolved = 264;
}

/*
equation index: 265
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,265};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cond.Cells[2].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.kappa variable */);
  threadData->lastEquationSolved = 265;
}

/*
equation index: 266
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,266};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cond.Cells[2].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.lambda variable */);
  threadData->lastEquationSolved = 266;
}

/*
equation index: 267
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cond.Cells[2].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.p variable */);
  threadData->lastEquationSolved = 267;
}

/*
equation index: 268
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,268};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[21]] /* cond.Cells[2].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[1]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.phase variable */);
  threadData->lastEquationSolved = 268;
}

/*
equation index: 269
type: SIMPLE_ASSIGN
cond.Cells[2].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[2].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[195]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState254.s variable */);
  threadData->lastEquationSolved = 269;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_884(DATA *data, threadData_t *threadData);


/*
equation index: 271
type: SIMPLE_ASSIGN
cond.Cells[3].h = $START.cond.Cells[3].h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,271};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[2] /* cond.Cells[3].h STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 271;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_900(DATA *data, threadData_t *threadData);


/*
equation index: 273
type: ALGORITHM

  $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273 := RefrigerationTrainer.ClosedLoopM1eCS.cond.Cells.Medium.setState_ph(cond.Cells[1].p, cond.Cells[3].h, 0);
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,273};
  RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState tmp7;
  tmp7 = omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setState__ph(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */), ((modelica_integer) 0));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.T variable */) = tmp7._T;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.a variable */) = tmp7._a;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.beta variable */) = tmp7._beta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.cp variable */) = tmp7._cp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.cv variable */) = tmp7._cv;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.d variable */) = tmp7._d;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.ddhp variable */) = tmp7._ddhp;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.ddph variable */) = tmp7._ddph;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.eta variable */) = tmp7._eta;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.h variable */) = tmp7._h;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[206]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.kappa variable */) = tmp7._kappa;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[207]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.lambda variable */) = tmp7._lambda;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[208]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.p variable */) = tmp7._p;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.phase variable */) = tmp7._phase;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.s variable */) = tmp7._s;
  ;
  threadData->lastEquationSolved = 273;
}

/*
equation index: 274
type: SIMPLE_ASSIGN
cond.Cells[3].T = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.T
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,274};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* cond.Cells[3].T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.T variable */);
  threadData->lastEquationSolved = 274;
}

/*
equation index: 275
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.a = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.a
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* cond.Cells[3].fluidState.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.a variable */);
  threadData->lastEquationSolved = 275;
}

/*
equation index: 276
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.beta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.beta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,276};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* cond.Cells[3].fluidState.beta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.beta variable */);
  threadData->lastEquationSolved = 276;
}

/*
equation index: 277
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.cp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.cp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,277};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cond.Cells[3].fluidState.cp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.cp variable */);
  threadData->lastEquationSolved = 277;
}

/*
equation index: 278
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.cv = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.cv
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cond.Cells[3].fluidState.cv variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.cv variable */);
  threadData->lastEquationSolved = 278;
}

/*
equation index: 279
type: SIMPLE_ASSIGN
cond.Cells[3].rho = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.d
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cond.Cells[3].rho variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.d variable */);
  threadData->lastEquationSolved = 279;
}

/*
equation index: 280
type: SIMPLE_ASSIGN
cond.Cells[3].drdh = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.ddhp
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,280};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* cond.Cells[3].drdh variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.ddhp variable */);
  threadData->lastEquationSolved = 280;
}

/*
equation index: 281
type: SIMPLE_ASSIGN
cond.Cells[3].drdp = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.ddph
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* cond.Cells[3].drdp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.ddph variable */);
  threadData->lastEquationSolved = 281;
}

/*
equation index: 282
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.eta = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.eta
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[701]] /* cond.Cells[3].fluidState.eta variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.eta variable */);
  threadData->lastEquationSolved = 282;
}

/*
equation index: 283
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.h = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[706]] /* cond.Cells[3].fluidState.h variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.h variable */);
  threadData->lastEquationSolved = 283;
}

/*
equation index: 284
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.kappa = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.kappa
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,284};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[711]] /* cond.Cells[3].fluidState.kappa variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[206]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.kappa variable */);
  threadData->lastEquationSolved = 284;
}

/*
equation index: 285
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.lambda = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.lambda
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cond.Cells[3].fluidState.lambda variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[207]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.lambda variable */);
  threadData->lastEquationSolved = 285;
}

/*
equation index: 286
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.p = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.p
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,286};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* cond.Cells[3].fluidState.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[208]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.p variable */);
  threadData->lastEquationSolved = 286;
}

/*
equation index: 287
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.phase = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.phase
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,287};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[22]] /* cond.Cells[3].fluidState.phase DISCRETE */) = (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.phase variable */);
  threadData->lastEquationSolved = 287;
}

/*
equation index: 288
type: SIMPLE_ASSIGN
cond.Cells[3].fluidState.s = $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.s
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,288};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[3].fluidState.s variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* $TMP_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState273.s variable */);
  threadData->lastEquationSolved = 288;
}
extern void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_917(DATA *data, threadData_t *threadData);


/*
equation index: 290
type: SIMPLE_ASSIGN
cond.Cells[4].h = $START.cond.Cells[4].h
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[3] /* cond.Cells[4].h STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 290;
}
OMC_DISABLE_OPT
void RefrigerationTrainer_ClosedLoopM1eCS_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[290])(DATA*, threadData_t*) = {
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_3,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_4,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_5,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_6,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_7,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_8,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_9,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_10,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_11,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_12,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_13,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_14,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_15,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_16,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_17,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_18,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_19,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_20,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_21,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_22,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_23,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_24,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_25,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_26,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_27,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_28,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_29,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_30,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_31,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_32,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_33,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_34,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_35,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_36,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_37,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_38,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_39,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_40,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_41,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_42,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_43,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_44,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_45,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_46,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_47,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_48,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_49,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_50,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_51,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_52,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_53,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_54,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_55,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_56,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_57,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_58,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_59,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_60,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_61,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_62,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_63,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_64,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_65,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_66,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_67,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_68,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_69,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_70,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_71,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_72,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_73,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_74,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_75,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_76,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_77,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_78,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_79,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_80,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_81,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_82,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_83,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_84,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_85,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_86,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_87,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_88,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_89,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_90,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_91,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_92,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_93,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_94,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_95,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_96,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_97,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_98,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_99,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_100,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_101,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_102,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_103,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_104,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_105,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_106,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_107,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_108,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_109,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_110,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_111,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_112,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_113,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_114,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_115,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_116,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_117,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_118,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_119,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_120,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_121,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_122,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_123,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_124,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_125,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_126,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_127,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_128,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_129,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_130,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_131,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_132,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_133,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_134,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_135,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_136,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_137,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_138,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_139,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_140,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_141,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_142,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_143,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_144,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_145,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_146,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_147,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_148,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_149,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_150,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_151,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_152,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_153,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1371,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1370,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1364,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1365,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_158,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_159,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_160,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_161,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_162,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_163,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_164,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_165,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_166,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_167,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_168,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_169,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_170,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_171,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_172,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_173,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_174,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_175,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_176,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_177,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_178,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_179,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_180,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_181,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_182,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_183,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_184,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_185,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_186,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_187,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_188,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_189,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_190,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_191,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_192,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_193,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_194,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_195,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_196,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_197,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_198,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_199,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_200,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_201,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_202,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_203,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_204,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_205,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_206,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_207,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_208,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_209,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_210,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_211,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_212,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_213,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_214,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_215,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_216,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_217,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_218,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_219,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_220,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_221,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_222,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_223,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_224,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_225,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_226,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_227,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_228,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_229,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_230,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_231,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_232,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_233,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_824,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_235,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_236,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_237,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_238,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_239,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_240,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_241,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_242,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_243,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_244,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_245,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_246,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_247,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_248,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_249,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_250,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_851,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_252,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_867,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_254,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_255,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_256,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_257,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_258,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_259,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_260,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_261,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_262,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_263,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_264,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_265,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_266,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_267,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_268,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_269,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_884,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_271,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_900,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_273,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_274,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_275,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_276,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_277,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_278,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_279,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_280,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_281,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_282,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_283,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_284,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_285,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_286,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_287,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_288,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_917,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_290
  };
  
  for (int id = 0; id < 290; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif