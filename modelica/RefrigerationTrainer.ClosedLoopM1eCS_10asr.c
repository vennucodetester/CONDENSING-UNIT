/* Asserts */
#include "RefrigerationTrainer.ClosedLoopM1eCS_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1912
type: ALGORITHM

  assert(comp.rho_su >= 0.0 and comp.rho_su <= 1e5, "Variable violating min/max constraint: 0.0 <= comp.rho_su <= 1e5, has value: " + String(comp.rho_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1912};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,77,"Variable violating min/max constraint: 0.0 <= comp.rho_su <= 1e5, has value: ");
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  static int tmp5 = 0;
  if(!tmp5)
  {
    tmp0 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* comp.rho_su variable */),0.0);
    tmp1 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* comp.rho_su variable */),1e5);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* comp.rho_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta4 = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        const char* assert_cond = "(comp.rho_su >= 0.0 and comp.rho_su <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",166,3,166,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",166,3,166,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4));
        }
      }
      tmp5 = 1;
    }
  }
  threadData->lastEquationSolved = 1912;
}

/*
equation index: 1913
type: ALGORITHM

  assert(comp.s_su >= -1e7 and comp.s_su <= 1e7, "Variable violating min/max constraint: -1e7 <= comp.s_su <= 1e7, has value: " + String(comp.s_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1913};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  static const MMC_DEFSTRINGLIT(tmp8,76,"Variable violating min/max constraint: -1e7 <= comp.s_su <= 1e7, has value: ");
  modelica_string tmp9;
  modelica_metatype tmpMeta10;
  static int tmp11 = 0;
  if(!tmp11)
  {
    tmp6 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* comp.s_su variable */),-1e7);
    tmp7 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* comp.s_su variable */),1e7);
    if(!(tmp6 && tmp7))
    {
      tmp9 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* comp.s_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta10 = stringAppend(MMC_REFSTRINGLIT(tmp8),tmp9);
      {
        const char* assert_cond = "(comp.s_su >= -1e7 and comp.s_su <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",167,3,167,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta10));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",167,3,167,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta10));
        }
      }
      tmp11 = 1;
    }
  }
  threadData->lastEquationSolved = 1913;
}

/*
equation index: 1914
type: ALGORITHM

  assert(comp.h_su >= 1e5 and comp.h_su <= 8.5e5, "Variable violating min/max constraint: 1e5 <= comp.h_su <= 8.5e5, has value: " + String(comp.h_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1914};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  static const MMC_DEFSTRINGLIT(tmp14,77,"Variable violating min/max constraint: 1e5 <= comp.h_su <= 8.5e5, has value: ");
  modelica_string tmp15;
  modelica_metatype tmpMeta16;
  static int tmp17 = 0;
  if(!tmp17)
  {
    tmp12 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */),1e5);
    tmp13 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */),8.5e5);
    if(!(tmp12 && tmp13))
    {
      tmp15 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta16 = stringAppend(MMC_REFSTRINGLIT(tmp14),tmp15);
      {
        const char* assert_cond = "(comp.h_su >= 1e5 and comp.h_su <= 8.5e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",168,3,168,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta16));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",168,3,168,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta16));
        }
      }
      tmp17 = 1;
    }
  }
  threadData->lastEquationSolved = 1914;
}

/*
equation index: 1915
type: ALGORITHM

  assert(comp.h_ex >= 1e5 and comp.h_ex <= 8.5e5, "Variable violating min/max constraint: 1e5 <= comp.h_ex <= 8.5e5, has value: " + String(comp.h_ex, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1915};
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,77,"Variable violating min/max constraint: 1e5 <= comp.h_ex <= 8.5e5, has value: ");
  modelica_string tmp21;
  modelica_metatype tmpMeta22;
  static int tmp23 = 0;
  if(!tmp23)
  {
    tmp18 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */),1e5);
    tmp19 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */),8.5e5);
    if(!(tmp18 && tmp19))
    {
      tmp21 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta22 = stringAppend(MMC_REFSTRINGLIT(tmp20),tmp21);
      {
        const char* assert_cond = "(comp.h_ex >= 1e5 and comp.h_ex <= 8.5e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",169,3,169,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta22));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",169,3,169,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta22));
        }
      }
      tmp23 = 1;
    }
  }
  threadData->lastEquationSolved = 1915;
}

/*
equation index: 1916
type: ALGORITHM

  assert(comp.h_ex_s >= -1e10 and comp.h_ex_s <= 1e10, "Variable violating min/max constraint: -1e10 <= comp.h_ex_s <= 1e10, has value: " + String(comp.h_ex_s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1916};
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,80,"Variable violating min/max constraint: -1e10 <= comp.h_ex_s <= 1e10, has value: ");
  modelica_string tmp27;
  modelica_metatype tmpMeta28;
  static int tmp29 = 0;
  if(!tmp29)
  {
    tmp24 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* comp.h_ex_s variable */),-1e10);
    tmp25 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* comp.h_ex_s variable */),1e10);
    if(!(tmp24 && tmp25))
    {
      tmp27 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* comp.h_ex_s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta28 = stringAppend(MMC_REFSTRINGLIT(tmp26),tmp27);
      {
        const char* assert_cond = "(comp.h_ex_s >= -1e10 and comp.h_ex_s <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",172,3,172,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta28));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/CompressorEM.mo",172,3,172,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta28));
        }
      }
      tmp29 = 1;
    }
  }
  threadData->lastEquationSolved = 1916;
}

/*
equation index: 1917
type: ALGORITHM

  assert(cond.Wall_int.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= cond.Wall_int.T[1], has value: " + String(cond.Wall_int.T[1], "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1917};
  modelica_boolean tmp30;
  static const MMC_DEFSTRINGLIT(tmp31,73,"Variable violating min constraint: 0.0 <= cond.Wall_int.T[1], has value: ");
  modelica_string tmp32;
  modelica_metatype tmpMeta33;
  static int tmp34 = 0;
  if(!tmp34)
  {
    tmp30 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* cond.Wall_int.T[1] variable */),0.0);
    if(!tmp30)
    {
      tmp32 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* cond.Wall_int.T[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta33 = stringAppend(MMC_REFSTRINGLIT(tmp31),tmp32);
      {
        const char* assert_cond = "(cond.Wall_int.T[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta33));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta33));
        }
      }
      tmp34 = 1;
    }
  }
  threadData->lastEquationSolved = 1917;
}

/*
equation index: 1918
type: ALGORITHM

  assert(cond.Wall_int.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= cond.Wall_int.T[2], has value: " + String(cond.Wall_int.T[2], "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1918};
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,73,"Variable violating min constraint: 0.0 <= cond.Wall_int.T[2], has value: ");
  modelica_string tmp37;
  modelica_metatype tmpMeta38;
  static int tmp39 = 0;
  if(!tmp39)
  {
    tmp35 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* cond.Wall_int.T[2] variable */),0.0);
    if(!tmp35)
    {
      tmp37 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* cond.Wall_int.T[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta38 = stringAppend(MMC_REFSTRINGLIT(tmp36),tmp37);
      {
        const char* assert_cond = "(cond.Wall_int.T[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta38));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta38));
        }
      }
      tmp39 = 1;
    }
  }
  threadData->lastEquationSolved = 1918;
}

/*
equation index: 1919
type: ALGORITHM

  assert(cond.Wall_int.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= cond.Wall_int.T[3], has value: " + String(cond.Wall_int.T[3], "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1919};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,73,"Variable violating min constraint: 0.0 <= cond.Wall_int.T[3], has value: ");
  modelica_string tmp42;
  modelica_metatype tmpMeta43;
  static int tmp44 = 0;
  if(!tmp44)
  {
    tmp40 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* cond.Wall_int.T[3] variable */),0.0);
    if(!tmp40)
    {
      tmp42 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* cond.Wall_int.T[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta43 = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        const char* assert_cond = "(cond.Wall_int.T[3] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta43));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta43));
        }
      }
      tmp44 = 1;
    }
  }
  threadData->lastEquationSolved = 1919;
}

/*
equation index: 1920
type: ALGORITHM

  assert(cond.Wall_int.T[4] >= 0.0, "Variable violating min constraint: 0.0 <= cond.Wall_int.T[4], has value: " + String(cond.Wall_int.T[4], "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1920};
  modelica_boolean tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,73,"Variable violating min constraint: 0.0 <= cond.Wall_int.T[4], has value: ");
  modelica_string tmp47;
  modelica_metatype tmpMeta48;
  static int tmp49 = 0;
  if(!tmp49)
  {
    tmp45 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* cond.Wall_int.T[4] variable */),0.0);
    if(!tmp45)
    {
      tmp47 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* cond.Wall_int.T[4] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta48 = stringAppend(MMC_REFSTRINGLIT(tmp46),tmp47);
      {
        const char* assert_cond = "(cond.Wall_int.T[4] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta48));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta48));
        }
      }
      tmp49 = 1;
    }
  }
  threadData->lastEquationSolved = 1920;
}

/*
equation index: 1921
type: ALGORITHM

  assert(cond.Wall_int.T[5] >= 0.0, "Variable violating min constraint: 0.0 <= cond.Wall_int.T[5], has value: " + String(cond.Wall_int.T[5], "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1921};
  modelica_boolean tmp50;
  static const MMC_DEFSTRINGLIT(tmp51,73,"Variable violating min constraint: 0.0 <= cond.Wall_int.T[5], has value: ");
  modelica_string tmp52;
  modelica_metatype tmpMeta53;
  static int tmp54 = 0;
  if(!tmp54)
  {
    tmp50 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* cond.Wall_int.T[5] variable */),0.0);
    if(!tmp50)
    {
      tmp52 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* cond.Wall_int.T[5] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta53 = stringAppend(MMC_REFSTRINGLIT(tmp51),tmp52);
      {
        const char* assert_cond = "(cond.Wall_int.T[5] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta53));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta53));
        }
      }
      tmp54 = 1;
    }
  }
  threadData->lastEquationSolved = 1921;
}

/*
equation index: 1922
type: ALGORITHM

  assert(cond.M_tot >= 0.0, "Variable violating min constraint: 0.0 <= cond.M_tot, has value: " + String(cond.M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1922};
  modelica_boolean tmp55;
  static const MMC_DEFSTRINGLIT(tmp56,65,"Variable violating min constraint: 0.0 <= cond.M_tot, has value: ");
  modelica_string tmp57;
  modelica_metatype tmpMeta58;
  static int tmp59 = 0;
  if(!tmp59)
  {
    tmp55 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* cond.M_tot variable */),0.0);
    if(!tmp55)
    {
      tmp57 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* cond.M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta58 = stringAppend(MMC_REFSTRINGLIT(tmp56),tmp57);
      {
        const char* assert_cond = "(cond.M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",103,3,103,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta58));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",103,3,103,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta58));
        }
      }
      tmp59 = 1;
    }
  }
  threadData->lastEquationSolved = 1922;
}

/*
equation index: 1923
type: ALGORITHM

  assert(cond.Cells[1].fluidState.a >= 0.0 and cond.Cells[1].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.a <= 1e5, has value: " + String(cond.Cells[1].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1923};
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  static const MMC_DEFSTRINGLIT(tmp62,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.a <= 1e5, has value: ");
  modelica_string tmp63;
  modelica_metatype tmpMeta64;
  static int tmp65 = 0;
  if(!tmp65)
  {
    tmp60 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cond.Cells[1].fluidState.a variable */),0.0);
    tmp61 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cond.Cells[1].fluidState.a variable */),1e5);
    if(!(tmp60 && tmp61))
    {
      tmp63 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cond.Cells[1].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta64 = stringAppend(MMC_REFSTRINGLIT(tmp62),tmp63);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.a >= 0.0 and cond.Cells[1].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta64));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta64));
        }
      }
      tmp65 = 1;
    }
  }
  threadData->lastEquationSolved = 1923;
}

/*
equation index: 1924
type: ALGORITHM

  assert(cond.Cells[1].fluidState.cp >= 0.0 and cond.Cells[1].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.cp <= 1e7, has value: " + String(cond.Cells[1].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1924};
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  static const MMC_DEFSTRINGLIT(tmp68,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp69;
  modelica_metatype tmpMeta70;
  static int tmp71 = 0;
  if(!tmp71)
  {
    tmp66 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* cond.Cells[1].fluidState.cp variable */),0.0);
    tmp67 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* cond.Cells[1].fluidState.cp variable */),1e7);
    if(!(tmp66 && tmp67))
    {
      tmp69 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* cond.Cells[1].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta70 = stringAppend(MMC_REFSTRINGLIT(tmp68),tmp69);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.cp >= 0.0 and cond.Cells[1].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta70));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta70));
        }
      }
      tmp71 = 1;
    }
  }
  threadData->lastEquationSolved = 1924;
}

/*
equation index: 1925
type: ALGORITHM

  assert(cond.Cells[1].fluidState.cv >= 0.0 and cond.Cells[1].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.cv <= 1e7, has value: " + String(cond.Cells[1].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1925};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp75;
  modelica_metatype tmpMeta76;
  static int tmp77 = 0;
  if(!tmp77)
  {
    tmp72 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cond.Cells[1].fluidState.cv variable */),0.0);
    tmp73 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cond.Cells[1].fluidState.cv variable */),1e7);
    if(!(tmp72 && tmp73))
    {
      tmp75 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cond.Cells[1].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta76 = stringAppend(MMC_REFSTRINGLIT(tmp74),tmp75);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.cv >= 0.0 and cond.Cells[1].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta76));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta76));
        }
      }
      tmp77 = 1;
    }
  }
  threadData->lastEquationSolved = 1925;
}

/*
equation index: 1926
type: ALGORITHM

  assert(cond.Cells[1].fluidState.eta >= 0.0 and cond.Cells[1].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.eta <= 1e8, has value: " + String(cond.Cells[1].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1926};
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  static const MMC_DEFSTRINGLIT(tmp80,94,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp81;
  modelica_metatype tmpMeta82;
  static int tmp83 = 0;
  if(!tmp83)
  {
    tmp78 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* cond.Cells[1].fluidState.eta variable */),0.0);
    tmp79 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* cond.Cells[1].fluidState.eta variable */),1e8);
    if(!(tmp78 && tmp79))
    {
      tmp81 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* cond.Cells[1].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta82 = stringAppend(MMC_REFSTRINGLIT(tmp80),tmp81);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.eta >= 0.0 and cond.Cells[1].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta82));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta82));
        }
      }
      tmp83 = 1;
    }
  }
  threadData->lastEquationSolved = 1926;
}

/*
equation index: 1927
type: ALGORITHM

  assert(cond.Cells[1].fluidState.h >= -1e10 and cond.Cells[1].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[1].fluidState.h <= 1e10, has value: " + String(cond.Cells[1].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1927};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  static const MMC_DEFSTRINGLIT(tmp86,95,"Variable violating min/max constraint: -1e10 <= cond.Cells[1].fluidState.h <= 1e10, has value: ");
  modelica_string tmp87;
  modelica_metatype tmpMeta88;
  static int tmp89 = 0;
  if(!tmp89)
  {
    tmp84 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* cond.Cells[1].fluidState.h variable */),-1e10);
    tmp85 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* cond.Cells[1].fluidState.h variable */),1e10);
    if(!(tmp84 && tmp85))
    {
      tmp87 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* cond.Cells[1].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta88 = stringAppend(MMC_REFSTRINGLIT(tmp86),tmp87);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.h >= -1e10 and cond.Cells[1].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta88));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta88));
        }
      }
      tmp89 = 1;
    }
  }
  threadData->lastEquationSolved = 1927;
}

/*
equation index: 1928
type: ALGORITHM

  assert(cond.Cells[1].fluidState.lambda >= 0.0 and cond.Cells[1].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.lambda <= 500.0, has value: " + String(cond.Cells[1].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1928};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  static const MMC_DEFSTRINGLIT(tmp92,99,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp93;
  modelica_metatype tmpMeta94;
  static int tmp95 = 0;
  if(!tmp95)
  {
    tmp90 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cond.Cells[1].fluidState.lambda variable */),0.0);
    tmp91 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cond.Cells[1].fluidState.lambda variable */),500.0);
    if(!(tmp90 && tmp91))
    {
      tmp93 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cond.Cells[1].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta94 = stringAppend(MMC_REFSTRINGLIT(tmp92),tmp93);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.lambda >= 0.0 and cond.Cells[1].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta94));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta94));
        }
      }
      tmp95 = 1;
    }
  }
  threadData->lastEquationSolved = 1928;
}

/*
equation index: 1929
type: ALGORITHM

  assert(cond.Cells[1].fluidState.p >= 0.0 and cond.Cells[1].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.p <= 1e8, has value: " + String(cond.Cells[1].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1929};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  static const MMC_DEFSTRINGLIT(tmp98,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.p <= 1e8, has value: ");
  modelica_string tmp99;
  modelica_metatype tmpMeta100;
  static int tmp101 = 0;
  if(!tmp101)
  {
    tmp96 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cond.Cells[1].fluidState.p variable */),0.0);
    tmp97 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cond.Cells[1].fluidState.p variable */),1e8);
    if(!(tmp96 && tmp97))
    {
      tmp99 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cond.Cells[1].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta100 = stringAppend(MMC_REFSTRINGLIT(tmp98),tmp99);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.p >= 0.0 and cond.Cells[1].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta100));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta100));
        }
      }
      tmp101 = 1;
    }
  }
  threadData->lastEquationSolved = 1929;
}

/*
equation index: 1930
type: ALGORITHM

  assert(cond.Cells[1].fluidState.phase >= 0 and cond.Cells[1].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= cond.Cells[1].fluidState.phase <= 2, has value: " + String(cond.Cells[1].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1930};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  static const MMC_DEFSTRINGLIT(tmp104,92,"Variable violating min/max constraint: 0 <= cond.Cells[1].fluidState.phase <= 2, has value: ");
  modelica_string tmp105;
  modelica_metatype tmpMeta106;
  static int tmp107 = 0;
  if(!tmp107)
  {
    tmp102 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[20]] /* cond.Cells[1].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp103 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[20]] /* cond.Cells[1].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp102 && tmp103))
    {
      tmp105 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[20]] /* cond.Cells[1].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta106 = stringAppend(MMC_REFSTRINGLIT(tmp104),tmp105);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.phase >= 0 and cond.Cells[1].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta106));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta106));
        }
      }
      tmp107 = 1;
    }
  }
  threadData->lastEquationSolved = 1930;
}

/*
equation index: 1931
type: ALGORITHM

  assert(cond.Cells[1].fluidState.s >= -1e7 and cond.Cells[1].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[1].fluidState.s <= 1e7, has value: " + String(cond.Cells[1].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1931};
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  static const MMC_DEFSTRINGLIT(tmp110,93,"Variable violating min/max constraint: -1e7 <= cond.Cells[1].fluidState.s <= 1e7, has value: ");
  modelica_string tmp111;
  modelica_metatype tmpMeta112;
  static int tmp113 = 0;
  if(!tmp113)
  {
    tmp108 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[1].fluidState.s variable */),-1e7);
    tmp109 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[1].fluidState.s variable */),1e7);
    if(!(tmp108 && tmp109))
    {
      tmp111 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cond.Cells[1].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta112 = stringAppend(MMC_REFSTRINGLIT(tmp110),tmp111);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.s >= -1e7 and cond.Cells[1].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta112));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta112));
        }
      }
      tmp113 = 1;
    }
  }
  threadData->lastEquationSolved = 1931;
}

/*
equation index: 1932
type: ALGORITHM

  assert(cond.Cells[1].sat.Tsat >= 1.0 and cond.Cells[1].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[1].sat.Tsat <= 1e4, has value: " + String(cond.Cells[1].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1932};
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  static const MMC_DEFSTRINGLIT(tmp116,88,"Variable violating min/max constraint: 1.0 <= cond.Cells[1].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp117;
  modelica_metatype tmpMeta118;
  static int tmp119 = 0;
  if(!tmp119)
  {
    tmp114 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cond.Cells[1].sat.Tsat variable */),1.0);
    tmp115 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cond.Cells[1].sat.Tsat variable */),1e4);
    if(!(tmp114 && tmp115))
    {
      tmp117 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cond.Cells[1].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta118 = stringAppend(MMC_REFSTRINGLIT(tmp116),tmp117);
      {
        const char* assert_cond = "(cond.Cells[1].sat.Tsat >= 1.0 and cond.Cells[1].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta118));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta118));
        }
      }
      tmp119 = 1;
    }
  }
  threadData->lastEquationSolved = 1932;
}

/*
equation index: 1933
type: ALGORITHM

  assert(cond.Cells[1].sat.dl >= 0.0 and cond.Cells[1].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].sat.dl <= 1e5, has value: " + String(cond.Cells[1].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1933};
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  static const MMC_DEFSTRINGLIT(tmp122,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].sat.dl <= 1e5, has value: ");
  modelica_string tmp123;
  modelica_metatype tmpMeta124;
  static int tmp125 = 0;
  if(!tmp125)
  {
    tmp120 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* cond.Cells[1].sat.dl variable */),0.0);
    tmp121 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* cond.Cells[1].sat.dl variable */),1e5);
    if(!(tmp120 && tmp121))
    {
      tmp123 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* cond.Cells[1].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta124 = stringAppend(MMC_REFSTRINGLIT(tmp122),tmp123);
      {
        const char* assert_cond = "(cond.Cells[1].sat.dl >= 0.0 and cond.Cells[1].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta124));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta124));
        }
      }
      tmp125 = 1;
    }
  }
  threadData->lastEquationSolved = 1933;
}

/*
equation index: 1934
type: ALGORITHM

  assert(cond.Cells[1].sat.dv >= 0.0 and cond.Cells[1].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].sat.dv <= 1e5, has value: " + String(cond.Cells[1].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1934};
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  static const MMC_DEFSTRINGLIT(tmp128,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].sat.dv <= 1e5, has value: ");
  modelica_string tmp129;
  modelica_metatype tmpMeta130;
  static int tmp131 = 0;
  if(!tmp131)
  {
    tmp126 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* cond.Cells[1].sat.dv variable */),0.0);
    tmp127 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* cond.Cells[1].sat.dv variable */),1e5);
    if(!(tmp126 && tmp127))
    {
      tmp129 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* cond.Cells[1].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta130 = stringAppend(MMC_REFSTRINGLIT(tmp128),tmp129);
      {
        const char* assert_cond = "(cond.Cells[1].sat.dv >= 0.0 and cond.Cells[1].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta130));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta130));
        }
      }
      tmp131 = 1;
    }
  }
  threadData->lastEquationSolved = 1934;
}

/*
equation index: 1935
type: ALGORITHM

  assert(cond.Cells[1].sat.psat >= 0.0 and cond.Cells[1].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].sat.psat <= 1e8, has value: " + String(cond.Cells[1].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1935};
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  static const MMC_DEFSTRINGLIT(tmp134,88,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].sat.psat <= 1e8, has value: ");
  modelica_string tmp135;
  modelica_metatype tmpMeta136;
  static int tmp137 = 0;
  if(!tmp137)
  {
    tmp132 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cond.Cells[1].sat.psat variable */),0.0);
    tmp133 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cond.Cells[1].sat.psat variable */),1e8);
    if(!(tmp132 && tmp133))
    {
      tmp135 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cond.Cells[1].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta136 = stringAppend(MMC_REFSTRINGLIT(tmp134),tmp135);
      {
        const char* assert_cond = "(cond.Cells[1].sat.psat >= 0.0 and cond.Cells[1].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta136));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta136));
        }
      }
      tmp137 = 1;
    }
  }
  threadData->lastEquationSolved = 1935;
}

/*
equation index: 1936
type: ALGORITHM

  assert(cond.Cells[1].sat.sl >= -1e7 and cond.Cells[1].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[1].sat.sl <= 1e7, has value: " + String(cond.Cells[1].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1936};
  modelica_boolean tmp138;
  modelica_boolean tmp139;
  static const MMC_DEFSTRINGLIT(tmp140,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[1].sat.sl <= 1e7, has value: ");
  modelica_string tmp141;
  modelica_metatype tmpMeta142;
  static int tmp143 = 0;
  if(!tmp143)
  {
    tmp138 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* cond.Cells[1].sat.sl variable */),-1e7);
    tmp139 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* cond.Cells[1].sat.sl variable */),1e7);
    if(!(tmp138 && tmp139))
    {
      tmp141 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* cond.Cells[1].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta142 = stringAppend(MMC_REFSTRINGLIT(tmp140),tmp141);
      {
        const char* assert_cond = "(cond.Cells[1].sat.sl >= -1e7 and cond.Cells[1].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta142));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta142));
        }
      }
      tmp143 = 1;
    }
  }
  threadData->lastEquationSolved = 1936;
}

/*
equation index: 1937
type: ALGORITHM

  assert(cond.Cells[1].sat.sv >= -1e7 and cond.Cells[1].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[1].sat.sv <= 1e7, has value: " + String(cond.Cells[1].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1937};
  modelica_boolean tmp144;
  modelica_boolean tmp145;
  static const MMC_DEFSTRINGLIT(tmp146,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[1].sat.sv <= 1e7, has value: ");
  modelica_string tmp147;
  modelica_metatype tmpMeta148;
  static int tmp149 = 0;
  if(!tmp149)
  {
    tmp144 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* cond.Cells[1].sat.sv variable */),-1e7);
    tmp145 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* cond.Cells[1].sat.sv variable */),1e7);
    if(!(tmp144 && tmp145))
    {
      tmp147 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* cond.Cells[1].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta148 = stringAppend(MMC_REFSTRINGLIT(tmp146),tmp147);
      {
        const char* assert_cond = "(cond.Cells[1].sat.sv >= -1e7 and cond.Cells[1].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta148));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta148));
        }
      }
      tmp149 = 1;
    }
  }
  threadData->lastEquationSolved = 1937;
}

/*
equation index: 1938
type: ALGORITHM

  assert(cond.Cells[1].p >= 1e4 and cond.Cells[1].p <= 5e6, "Variable violating min/max constraint: 1e4 <= cond.Cells[1].p <= 5e6, has value: " + String(cond.Cells[1].p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1938};
  modelica_boolean tmp150;
  modelica_boolean tmp151;
  static const MMC_DEFSTRINGLIT(tmp152,81,"Variable violating min/max constraint: 1e4 <= cond.Cells[1].p <= 5e6, has value: ");
  modelica_string tmp153;
  modelica_metatype tmpMeta154;
  static int tmp155 = 0;
  if(!tmp155)
  {
    tmp150 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */),1e4);
    tmp151 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */),5e6);
    if(!(tmp150 && tmp151))
    {
      tmp153 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta154 = stringAppend(MMC_REFSTRINGLIT(tmp152),tmp153);
      {
        const char* assert_cond = "(cond.Cells[1].p >= 1e4 and cond.Cells[1].p <= 5e6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",88,3,88,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta154));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",88,3,88,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta154));
        }
      }
      tmp155 = 1;
    }
  }
  threadData->lastEquationSolved = 1938;
}

/*
equation index: 1939
type: ALGORITHM

  assert(cond.Cells[1].h >= 1e5 and cond.Cells[1].h <= 8.5e5, "Variable violating min/max constraint: 1e5 <= cond.Cells[1].h <= 8.5e5, has value: " + String(cond.Cells[1].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1939};
  modelica_boolean tmp156;
  modelica_boolean tmp157;
  static const MMC_DEFSTRINGLIT(tmp158,83,"Variable violating min/max constraint: 1e5 <= cond.Cells[1].h <= 8.5e5, has value: ");
  modelica_string tmp159;
  modelica_metatype tmpMeta160;
  static int tmp161 = 0;
  if(!tmp161)
  {
    tmp156 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */),1e5);
    tmp157 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */),8.5e5);
    if(!(tmp156 && tmp157))
    {
      tmp159 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta160 = stringAppend(MMC_REFSTRINGLIT(tmp158),tmp159);
      {
        const char* assert_cond = "(cond.Cells[1].h >= 1e5 and cond.Cells[1].h <= 8.5e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta160));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta160));
        }
      }
      tmp161 = 1;
    }
  }
  threadData->lastEquationSolved = 1939;
}

/*
equation index: 1940
type: ALGORITHM

  assert(cond.Cells[1].T >= 1.0 and cond.Cells[1].T <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[1].T <= 1e4, has value: " + String(cond.Cells[1].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1940};
  modelica_boolean tmp162;
  modelica_boolean tmp163;
  static const MMC_DEFSTRINGLIT(tmp164,81,"Variable violating min/max constraint: 1.0 <= cond.Cells[1].T <= 1e4, has value: ");
  modelica_string tmp165;
  modelica_metatype tmpMeta166;
  static int tmp167 = 0;
  if(!tmp167)
  {
    tmp162 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* cond.Cells[1].T variable */),1.0);
    tmp163 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* cond.Cells[1].T variable */),1e4);
    if(!(tmp162 && tmp163))
    {
      tmp165 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* cond.Cells[1].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta166 = stringAppend(MMC_REFSTRINGLIT(tmp164),tmp165);
      {
        const char* assert_cond = "(cond.Cells[1].T >= 1.0 and cond.Cells[1].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta166));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta166));
        }
      }
      tmp167 = 1;
    }
  }
  threadData->lastEquationSolved = 1940;
}

/*
equation index: 1941
type: ALGORITHM

  assert(cond.Cells[1].rho >= 0.0 and cond.Cells[1].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].rho <= 1e5, has value: " + String(cond.Cells[1].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1941};
  modelica_boolean tmp168;
  modelica_boolean tmp169;
  static const MMC_DEFSTRINGLIT(tmp170,83,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].rho <= 1e5, has value: ");
  modelica_string tmp171;
  modelica_metatype tmpMeta172;
  static int tmp173 = 0;
  if(!tmp173)
  {
    tmp168 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cond.Cells[1].rho variable */),0.0);
    tmp169 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cond.Cells[1].rho variable */),1e5);
    if(!(tmp168 && tmp169))
    {
      tmp171 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cond.Cells[1].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta172 = stringAppend(MMC_REFSTRINGLIT(tmp170),tmp171);
      {
        const char* assert_cond = "(cond.Cells[1].rho >= 0.0 and cond.Cells[1].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta172));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta172));
        }
      }
      tmp173 = 1;
    }
  }
  threadData->lastEquationSolved = 1941;
}

/*
equation index: 1942
type: ALGORITHM

  assert(cond.Cells[1].hnode_su >= 1e5 and cond.Cells[1].hnode_su <= 8.5e5, "Variable violating min/max constraint: 1e5 <= cond.Cells[1].hnode_su <= 8.5e5, has value: " + String(cond.Cells[1].hnode_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1942};
  modelica_boolean tmp174;
  modelica_boolean tmp175;
  static const MMC_DEFSTRINGLIT(tmp176,90,"Variable violating min/max constraint: 1e5 <= cond.Cells[1].hnode_su <= 8.5e5, has value: ");
  modelica_string tmp177;
  modelica_metatype tmpMeta178;
  static int tmp179 = 0;
  if(!tmp179)
  {
    tmp174 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cond.Cells[1].hnode_su variable */),1e5);
    tmp175 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cond.Cells[1].hnode_su variable */),8.5e5);
    if(!(tmp174 && tmp175))
    {
      tmp177 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cond.Cells[1].hnode_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta178 = stringAppend(MMC_REFSTRINGLIT(tmp176),tmp177);
      {
        const char* assert_cond = "(cond.Cells[1].hnode_su >= 1e5 and cond.Cells[1].hnode_su <= 8.5e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta178));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta178));
        }
      }
      tmp179 = 1;
    }
  }
  threadData->lastEquationSolved = 1942;
}

/*
equation index: 1943
type: ALGORITHM

  assert(cond.Cells[1].h_l >= -1e10 and cond.Cells[1].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[1].h_l <= 1e10, has value: " + String(cond.Cells[1].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1943};
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  static const MMC_DEFSTRINGLIT(tmp182,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[1].h_l <= 1e10, has value: ");
  modelica_string tmp183;
  modelica_metatype tmpMeta184;
  static int tmp185 = 0;
  if(!tmp185)
  {
    tmp180 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cond.Cells[1].h_l variable */),-1e10);
    tmp181 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cond.Cells[1].h_l variable */),1e10);
    if(!(tmp180 && tmp181))
    {
      tmp183 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cond.Cells[1].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta184 = stringAppend(MMC_REFSTRINGLIT(tmp182),tmp183);
      {
        const char* assert_cond = "(cond.Cells[1].h_l >= -1e10 and cond.Cells[1].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta184));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta184));
        }
      }
      tmp185 = 1;
    }
  }
  threadData->lastEquationSolved = 1943;
}

/*
equation index: 1944
type: ALGORITHM

  assert(cond.Cells[1].h_v >= -1e10 and cond.Cells[1].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[1].h_v <= 1e10, has value: " + String(cond.Cells[1].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1944};
  modelica_boolean tmp186;
  modelica_boolean tmp187;
  static const MMC_DEFSTRINGLIT(tmp188,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[1].h_v <= 1e10, has value: ");
  modelica_string tmp189;
  modelica_metatype tmpMeta190;
  static int tmp191 = 0;
  if(!tmp191)
  {
    tmp186 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cond.Cells[1].h_v variable */),-1e10);
    tmp187 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cond.Cells[1].h_v variable */),1e10);
    if(!(tmp186 && tmp187))
    {
      tmp189 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cond.Cells[1].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta190 = stringAppend(MMC_REFSTRINGLIT(tmp188),tmp189);
      {
        const char* assert_cond = "(cond.Cells[1].h_v >= -1e10 and cond.Cells[1].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta190));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta190));
        }
      }
      tmp191 = 1;
    }
  }
  threadData->lastEquationSolved = 1944;
}

/*
equation index: 1945
type: ALGORITHM

  assert(cond.Cells[1].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= cond.Cells[1].M_tot, has value: " + String(cond.Cells[1].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1945};
  modelica_boolean tmp192;
  static const MMC_DEFSTRINGLIT(tmp193,74,"Variable violating min constraint: 0.0 <= cond.Cells[1].M_tot, has value: ");
  modelica_string tmp194;
  modelica_metatype tmpMeta195;
  static int tmp196 = 0;
  if(!tmp196)
  {
    tmp192 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* cond.Cells[1].M_tot variable */),0.0);
    if(!tmp192)
    {
      tmp194 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* cond.Cells[1].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta195 = stringAppend(MMC_REFSTRINGLIT(tmp193),tmp194);
      {
        const char* assert_cond = "(cond.Cells[1].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta195));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta195));
        }
      }
      tmp196 = 1;
    }
  }
  threadData->lastEquationSolved = 1945;
}

/*
equation index: 1946
type: ALGORITHM

  assert(cond.Cells[2].InFlow.m_flow >= -1e5 and cond.Cells[2].InFlow.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= cond.Cells[2].InFlow.m_flow <= 1e5, has value: " + String(cond.Cells[2].InFlow.m_flow, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1946};
  modelica_boolean tmp197;
  modelica_boolean tmp198;
  static const MMC_DEFSTRINGLIT(tmp199,94,"Variable violating min/max constraint: -1e5 <= cond.Cells[2].InFlow.m_flow <= 1e5, has value: ");
  modelica_string tmp200;
  modelica_metatype tmpMeta201;
  static int tmp202 = 0;
  if(!tmp202)
  {
    tmp197 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cond.Cells[2].InFlow.m_flow variable */),-1e5);
    tmp198 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cond.Cells[2].InFlow.m_flow variable */),1e5);
    if(!(tmp197 && tmp198))
    {
      tmp200 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cond.Cells[2].InFlow.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta201 = stringAppend(MMC_REFSTRINGLIT(tmp199),tmp200);
      {
        const char* assert_cond = "(cond.Cells[2].InFlow.m_flow >= -1e5 and cond.Cells[2].InFlow.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta201));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta201));
        }
      }
      tmp202 = 1;
    }
  }
  threadData->lastEquationSolved = 1946;
}

/*
equation index: 1947
type: ALGORITHM

  assert(cond.Cells[2].fluidState.a >= 0.0 and cond.Cells[2].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.a <= 1e5, has value: " + String(cond.Cells[2].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1947};
  modelica_boolean tmp203;
  modelica_boolean tmp204;
  static const MMC_DEFSTRINGLIT(tmp205,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.a <= 1e5, has value: ");
  modelica_string tmp206;
  modelica_metatype tmpMeta207;
  static int tmp208 = 0;
  if(!tmp208)
  {
    tmp203 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cond.Cells[2].fluidState.a variable */),0.0);
    tmp204 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cond.Cells[2].fluidState.a variable */),1e5);
    if(!(tmp203 && tmp204))
    {
      tmp206 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cond.Cells[2].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta207 = stringAppend(MMC_REFSTRINGLIT(tmp205),tmp206);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.a >= 0.0 and cond.Cells[2].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta207));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta207));
        }
      }
      tmp208 = 1;
    }
  }
  threadData->lastEquationSolved = 1947;
}

/*
equation index: 1948
type: ALGORITHM

  assert(cond.Cells[2].fluidState.cp >= 0.0 and cond.Cells[2].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.cp <= 1e7, has value: " + String(cond.Cells[2].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1948};
  modelica_boolean tmp209;
  modelica_boolean tmp210;
  static const MMC_DEFSTRINGLIT(tmp211,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp212;
  modelica_metatype tmpMeta213;
  static int tmp214 = 0;
  if(!tmp214)
  {
    tmp209 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* cond.Cells[2].fluidState.cp variable */),0.0);
    tmp210 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* cond.Cells[2].fluidState.cp variable */),1e7);
    if(!(tmp209 && tmp210))
    {
      tmp212 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* cond.Cells[2].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta213 = stringAppend(MMC_REFSTRINGLIT(tmp211),tmp212);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.cp >= 0.0 and cond.Cells[2].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta213));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta213));
        }
      }
      tmp214 = 1;
    }
  }
  threadData->lastEquationSolved = 1948;
}

/*
equation index: 1949
type: ALGORITHM

  assert(cond.Cells[2].fluidState.cv >= 0.0 and cond.Cells[2].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.cv <= 1e7, has value: " + String(cond.Cells[2].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1949};
  modelica_boolean tmp215;
  modelica_boolean tmp216;
  static const MMC_DEFSTRINGLIT(tmp217,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp218;
  modelica_metatype tmpMeta219;
  static int tmp220 = 0;
  if(!tmp220)
  {
    tmp215 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* cond.Cells[2].fluidState.cv variable */),0.0);
    tmp216 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* cond.Cells[2].fluidState.cv variable */),1e7);
    if(!(tmp215 && tmp216))
    {
      tmp218 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* cond.Cells[2].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta219 = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.cv >= 0.0 and cond.Cells[2].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta219));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta219));
        }
      }
      tmp220 = 1;
    }
  }
  threadData->lastEquationSolved = 1949;
}

/*
equation index: 1950
type: ALGORITHM

  assert(cond.Cells[2].fluidState.eta >= 0.0 and cond.Cells[2].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.eta <= 1e8, has value: " + String(cond.Cells[2].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1950};
  modelica_boolean tmp221;
  modelica_boolean tmp222;
  static const MMC_DEFSTRINGLIT(tmp223,94,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp224;
  modelica_metatype tmpMeta225;
  static int tmp226 = 0;
  if(!tmp226)
  {
    tmp221 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* cond.Cells[2].fluidState.eta variable */),0.0);
    tmp222 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* cond.Cells[2].fluidState.eta variable */),1e8);
    if(!(tmp221 && tmp222))
    {
      tmp224 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* cond.Cells[2].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta225 = stringAppend(MMC_REFSTRINGLIT(tmp223),tmp224);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.eta >= 0.0 and cond.Cells[2].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta225));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta225));
        }
      }
      tmp226 = 1;
    }
  }
  threadData->lastEquationSolved = 1950;
}

/*
equation index: 1951
type: ALGORITHM

  assert(cond.Cells[2].fluidState.h >= -1e10 and cond.Cells[2].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[2].fluidState.h <= 1e10, has value: " + String(cond.Cells[2].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1951};
  modelica_boolean tmp227;
  modelica_boolean tmp228;
  static const MMC_DEFSTRINGLIT(tmp229,95,"Variable violating min/max constraint: -1e10 <= cond.Cells[2].fluidState.h <= 1e10, has value: ");
  modelica_string tmp230;
  modelica_metatype tmpMeta231;
  static int tmp232 = 0;
  if(!tmp232)
  {
    tmp227 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* cond.Cells[2].fluidState.h variable */),-1e10);
    tmp228 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* cond.Cells[2].fluidState.h variable */),1e10);
    if(!(tmp227 && tmp228))
    {
      tmp230 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* cond.Cells[2].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta231 = stringAppend(MMC_REFSTRINGLIT(tmp229),tmp230);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.h >= -1e10 and cond.Cells[2].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta231));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta231));
        }
      }
      tmp232 = 1;
    }
  }
  threadData->lastEquationSolved = 1951;
}

/*
equation index: 1952
type: ALGORITHM

  assert(cond.Cells[2].fluidState.lambda >= 0.0 and cond.Cells[2].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.lambda <= 500.0, has value: " + String(cond.Cells[2].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1952};
  modelica_boolean tmp233;
  modelica_boolean tmp234;
  static const MMC_DEFSTRINGLIT(tmp235,99,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp236;
  modelica_metatype tmpMeta237;
  static int tmp238 = 0;
  if(!tmp238)
  {
    tmp233 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cond.Cells[2].fluidState.lambda variable */),0.0);
    tmp234 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cond.Cells[2].fluidState.lambda variable */),500.0);
    if(!(tmp233 && tmp234))
    {
      tmp236 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cond.Cells[2].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta237 = stringAppend(MMC_REFSTRINGLIT(tmp235),tmp236);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.lambda >= 0.0 and cond.Cells[2].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta237));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta237));
        }
      }
      tmp238 = 1;
    }
  }
  threadData->lastEquationSolved = 1952;
}

/*
equation index: 1953
type: ALGORITHM

  assert(cond.Cells[2].fluidState.p >= 0.0 and cond.Cells[2].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.p <= 1e8, has value: " + String(cond.Cells[2].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1953};
  modelica_boolean tmp239;
  modelica_boolean tmp240;
  static const MMC_DEFSTRINGLIT(tmp241,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.p <= 1e8, has value: ");
  modelica_string tmp242;
  modelica_metatype tmpMeta243;
  static int tmp244 = 0;
  if(!tmp244)
  {
    tmp239 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cond.Cells[2].fluidState.p variable */),0.0);
    tmp240 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cond.Cells[2].fluidState.p variable */),1e8);
    if(!(tmp239 && tmp240))
    {
      tmp242 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cond.Cells[2].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta243 = stringAppend(MMC_REFSTRINGLIT(tmp241),tmp242);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.p >= 0.0 and cond.Cells[2].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta243));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta243));
        }
      }
      tmp244 = 1;
    }
  }
  threadData->lastEquationSolved = 1953;
}

/*
equation index: 1954
type: ALGORITHM

  assert(cond.Cells[2].fluidState.phase >= 0 and cond.Cells[2].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= cond.Cells[2].fluidState.phase <= 2, has value: " + String(cond.Cells[2].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1954};
  modelica_boolean tmp245;
  modelica_boolean tmp246;
  static const MMC_DEFSTRINGLIT(tmp247,92,"Variable violating min/max constraint: 0 <= cond.Cells[2].fluidState.phase <= 2, has value: ");
  modelica_string tmp248;
  modelica_metatype tmpMeta249;
  static int tmp250 = 0;
  if(!tmp250)
  {
    tmp245 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[21]] /* cond.Cells[2].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp246 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[21]] /* cond.Cells[2].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp245 && tmp246))
    {
      tmp248 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[21]] /* cond.Cells[2].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta249 = stringAppend(MMC_REFSTRINGLIT(tmp247),tmp248);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.phase >= 0 and cond.Cells[2].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta249));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta249));
        }
      }
      tmp250 = 1;
    }
  }
  threadData->lastEquationSolved = 1954;
}

/*
equation index: 1955
type: ALGORITHM

  assert(cond.Cells[2].fluidState.s >= -1e7 and cond.Cells[2].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[2].fluidState.s <= 1e7, has value: " + String(cond.Cells[2].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1955};
  modelica_boolean tmp251;
  modelica_boolean tmp252;
  static const MMC_DEFSTRINGLIT(tmp253,93,"Variable violating min/max constraint: -1e7 <= cond.Cells[2].fluidState.s <= 1e7, has value: ");
  modelica_string tmp254;
  modelica_metatype tmpMeta255;
  static int tmp256 = 0;
  if(!tmp256)
  {
    tmp251 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[2].fluidState.s variable */),-1e7);
    tmp252 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[2].fluidState.s variable */),1e7);
    if(!(tmp251 && tmp252))
    {
      tmp254 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cond.Cells[2].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta255 = stringAppend(MMC_REFSTRINGLIT(tmp253),tmp254);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.s >= -1e7 and cond.Cells[2].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta255));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta255));
        }
      }
      tmp256 = 1;
    }
  }
  threadData->lastEquationSolved = 1955;
}

/*
equation index: 1956
type: ALGORITHM

  assert(cond.Cells[2].sat.Tsat >= 1.0 and cond.Cells[2].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[2].sat.Tsat <= 1e4, has value: " + String(cond.Cells[2].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1956};
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  static const MMC_DEFSTRINGLIT(tmp259,88,"Variable violating min/max constraint: 1.0 <= cond.Cells[2].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp260;
  modelica_metatype tmpMeta261;
  static int tmp262 = 0;
  if(!tmp262)
  {
    tmp257 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cond.Cells[2].sat.Tsat variable */),1.0);
    tmp258 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cond.Cells[2].sat.Tsat variable */),1e4);
    if(!(tmp257 && tmp258))
    {
      tmp260 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cond.Cells[2].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta261 = stringAppend(MMC_REFSTRINGLIT(tmp259),tmp260);
      {
        const char* assert_cond = "(cond.Cells[2].sat.Tsat >= 1.0 and cond.Cells[2].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta261));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta261));
        }
      }
      tmp262 = 1;
    }
  }
  threadData->lastEquationSolved = 1956;
}

/*
equation index: 1957
type: ALGORITHM

  assert(cond.Cells[2].sat.dl >= 0.0 and cond.Cells[2].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].sat.dl <= 1e5, has value: " + String(cond.Cells[2].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1957};
  modelica_boolean tmp263;
  modelica_boolean tmp264;
  static const MMC_DEFSTRINGLIT(tmp265,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].sat.dl <= 1e5, has value: ");
  modelica_string tmp266;
  modelica_metatype tmpMeta267;
  static int tmp268 = 0;
  if(!tmp268)
  {
    tmp263 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cond.Cells[2].sat.dl variable */),0.0);
    tmp264 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cond.Cells[2].sat.dl variable */),1e5);
    if(!(tmp263 && tmp264))
    {
      tmp266 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cond.Cells[2].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta267 = stringAppend(MMC_REFSTRINGLIT(tmp265),tmp266);
      {
        const char* assert_cond = "(cond.Cells[2].sat.dl >= 0.0 and cond.Cells[2].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta267));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta267));
        }
      }
      tmp268 = 1;
    }
  }
  threadData->lastEquationSolved = 1957;
}

/*
equation index: 1958
type: ALGORITHM

  assert(cond.Cells[2].sat.dv >= 0.0 and cond.Cells[2].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].sat.dv <= 1e5, has value: " + String(cond.Cells[2].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1958};
  modelica_boolean tmp269;
  modelica_boolean tmp270;
  static const MMC_DEFSTRINGLIT(tmp271,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].sat.dv <= 1e5, has value: ");
  modelica_string tmp272;
  modelica_metatype tmpMeta273;
  static int tmp274 = 0;
  if(!tmp274)
  {
    tmp269 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* cond.Cells[2].sat.dv variable */),0.0);
    tmp270 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* cond.Cells[2].sat.dv variable */),1e5);
    if(!(tmp269 && tmp270))
    {
      tmp272 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* cond.Cells[2].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta273 = stringAppend(MMC_REFSTRINGLIT(tmp271),tmp272);
      {
        const char* assert_cond = "(cond.Cells[2].sat.dv >= 0.0 and cond.Cells[2].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta273));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta273));
        }
      }
      tmp274 = 1;
    }
  }
  threadData->lastEquationSolved = 1958;
}

/*
equation index: 1959
type: ALGORITHM

  assert(cond.Cells[2].sat.psat >= 0.0 and cond.Cells[2].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].sat.psat <= 1e8, has value: " + String(cond.Cells[2].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1959};
  modelica_boolean tmp275;
  modelica_boolean tmp276;
  static const MMC_DEFSTRINGLIT(tmp277,88,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].sat.psat <= 1e8, has value: ");
  modelica_string tmp278;
  modelica_metatype tmpMeta279;
  static int tmp280 = 0;
  if(!tmp280)
  {
    tmp275 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* cond.Cells[2].sat.psat variable */),0.0);
    tmp276 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* cond.Cells[2].sat.psat variable */),1e8);
    if(!(tmp275 && tmp276))
    {
      tmp278 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* cond.Cells[2].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta279 = stringAppend(MMC_REFSTRINGLIT(tmp277),tmp278);
      {
        const char* assert_cond = "(cond.Cells[2].sat.psat >= 0.0 and cond.Cells[2].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta279));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta279));
        }
      }
      tmp280 = 1;
    }
  }
  threadData->lastEquationSolved = 1959;
}

/*
equation index: 1960
type: ALGORITHM

  assert(cond.Cells[2].sat.sl >= -1e7 and cond.Cells[2].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[2].sat.sl <= 1e7, has value: " + String(cond.Cells[2].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1960};
  modelica_boolean tmp281;
  modelica_boolean tmp282;
  static const MMC_DEFSTRINGLIT(tmp283,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[2].sat.sl <= 1e7, has value: ");
  modelica_string tmp284;
  modelica_metatype tmpMeta285;
  static int tmp286 = 0;
  if(!tmp286)
  {
    tmp281 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* cond.Cells[2].sat.sl variable */),-1e7);
    tmp282 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* cond.Cells[2].sat.sl variable */),1e7);
    if(!(tmp281 && tmp282))
    {
      tmp284 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* cond.Cells[2].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta285 = stringAppend(MMC_REFSTRINGLIT(tmp283),tmp284);
      {
        const char* assert_cond = "(cond.Cells[2].sat.sl >= -1e7 and cond.Cells[2].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta285));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta285));
        }
      }
      tmp286 = 1;
    }
  }
  threadData->lastEquationSolved = 1960;
}

/*
equation index: 1961
type: ALGORITHM

  assert(cond.Cells[2].sat.sv >= -1e7 and cond.Cells[2].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[2].sat.sv <= 1e7, has value: " + String(cond.Cells[2].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1961};
  modelica_boolean tmp287;
  modelica_boolean tmp288;
  static const MMC_DEFSTRINGLIT(tmp289,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[2].sat.sv <= 1e7, has value: ");
  modelica_string tmp290;
  modelica_metatype tmpMeta291;
  static int tmp292 = 0;
  if(!tmp292)
  {
    tmp287 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* cond.Cells[2].sat.sv variable */),-1e7);
    tmp288 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* cond.Cells[2].sat.sv variable */),1e7);
    if(!(tmp287 && tmp288))
    {
      tmp290 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* cond.Cells[2].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta291 = stringAppend(MMC_REFSTRINGLIT(tmp289),tmp290);
      {
        const char* assert_cond = "(cond.Cells[2].sat.sv >= -1e7 and cond.Cells[2].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta291));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta291));
        }
      }
      tmp292 = 1;
    }
  }
  threadData->lastEquationSolved = 1961;
}

/*
equation index: 1962
type: ALGORITHM

  assert(cond.Cells[2].h >= 1e5 and cond.Cells[2].h <= 8.5e5, "Variable violating min/max constraint: 1e5 <= cond.Cells[2].h <= 8.5e5, has value: " + String(cond.Cells[2].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1962};
  modelica_boolean tmp293;
  modelica_boolean tmp294;
  static const MMC_DEFSTRINGLIT(tmp295,83,"Variable violating min/max constraint: 1e5 <= cond.Cells[2].h <= 8.5e5, has value: ");
  modelica_string tmp296;
  modelica_metatype tmpMeta297;
  static int tmp298 = 0;
  if(!tmp298)
  {
    tmp293 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */),1e5);
    tmp294 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */),8.5e5);
    if(!(tmp293 && tmp294))
    {
      tmp296 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta297 = stringAppend(MMC_REFSTRINGLIT(tmp295),tmp296);
      {
        const char* assert_cond = "(cond.Cells[2].h >= 1e5 and cond.Cells[2].h <= 8.5e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta297));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta297));
        }
      }
      tmp298 = 1;
    }
  }
  threadData->lastEquationSolved = 1962;
}

/*
equation index: 1963
type: ALGORITHM

  assert(cond.Cells[2].T >= 1.0 and cond.Cells[2].T <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[2].T <= 1e4, has value: " + String(cond.Cells[2].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1963};
  modelica_boolean tmp299;
  modelica_boolean tmp300;
  static const MMC_DEFSTRINGLIT(tmp301,81,"Variable violating min/max constraint: 1.0 <= cond.Cells[2].T <= 1e4, has value: ");
  modelica_string tmp302;
  modelica_metatype tmpMeta303;
  static int tmp304 = 0;
  if(!tmp304)
  {
    tmp299 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[660]] /* cond.Cells[2].T variable */),1.0);
    tmp300 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[660]] /* cond.Cells[2].T variable */),1e4);
    if(!(tmp299 && tmp300))
    {
      tmp302 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[660]] /* cond.Cells[2].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta303 = stringAppend(MMC_REFSTRINGLIT(tmp301),tmp302);
      {
        const char* assert_cond = "(cond.Cells[2].T >= 1.0 and cond.Cells[2].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta303));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta303));
        }
      }
      tmp304 = 1;
    }
  }
  threadData->lastEquationSolved = 1963;
}

/*
equation index: 1964
type: ALGORITHM

  assert(cond.Cells[2].rho >= 0.0 and cond.Cells[2].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].rho <= 1e5, has value: " + String(cond.Cells[2].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1964};
  modelica_boolean tmp305;
  modelica_boolean tmp306;
  static const MMC_DEFSTRINGLIT(tmp307,83,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].rho <= 1e5, has value: ");
  modelica_string tmp308;
  modelica_metatype tmpMeta309;
  static int tmp310 = 0;
  if(!tmp310)
  {
    tmp305 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cond.Cells[2].rho variable */),0.0);
    tmp306 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cond.Cells[2].rho variable */),1e5);
    if(!(tmp305 && tmp306))
    {
      tmp308 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cond.Cells[2].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta309 = stringAppend(MMC_REFSTRINGLIT(tmp307),tmp308);
      {
        const char* assert_cond = "(cond.Cells[2].rho >= 0.0 and cond.Cells[2].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta309));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta309));
        }
      }
      tmp310 = 1;
    }
  }
  threadData->lastEquationSolved = 1964;
}

/*
equation index: 1965
type: ALGORITHM

  assert(cond.Cells[2].h_l >= -1e10 and cond.Cells[2].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[2].h_l <= 1e10, has value: " + String(cond.Cells[2].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1965};
  modelica_boolean tmp311;
  modelica_boolean tmp312;
  static const MMC_DEFSTRINGLIT(tmp313,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[2].h_l <= 1e10, has value: ");
  modelica_string tmp314;
  modelica_metatype tmpMeta315;
  static int tmp316 = 0;
  if(!tmp316)
  {
    tmp311 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cond.Cells[2].h_l variable */),-1e10);
    tmp312 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cond.Cells[2].h_l variable */),1e10);
    if(!(tmp311 && tmp312))
    {
      tmp314 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cond.Cells[2].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta315 = stringAppend(MMC_REFSTRINGLIT(tmp313),tmp314);
      {
        const char* assert_cond = "(cond.Cells[2].h_l >= -1e10 and cond.Cells[2].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta315));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta315));
        }
      }
      tmp316 = 1;
    }
  }
  threadData->lastEquationSolved = 1965;
}

/*
equation index: 1966
type: ALGORITHM

  assert(cond.Cells[2].h_v >= -1e10 and cond.Cells[2].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[2].h_v <= 1e10, has value: " + String(cond.Cells[2].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1966};
  modelica_boolean tmp317;
  modelica_boolean tmp318;
  static const MMC_DEFSTRINGLIT(tmp319,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[2].h_v <= 1e10, has value: ");
  modelica_string tmp320;
  modelica_metatype tmpMeta321;
  static int tmp322 = 0;
  if(!tmp322)
  {
    tmp317 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cond.Cells[2].h_v variable */),-1e10);
    tmp318 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cond.Cells[2].h_v variable */),1e10);
    if(!(tmp317 && tmp318))
    {
      tmp320 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cond.Cells[2].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta321 = stringAppend(MMC_REFSTRINGLIT(tmp319),tmp320);
      {
        const char* assert_cond = "(cond.Cells[2].h_v >= -1e10 and cond.Cells[2].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta321));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta321));
        }
      }
      tmp322 = 1;
    }
  }
  threadData->lastEquationSolved = 1966;
}

/*
equation index: 1967
type: ALGORITHM

  assert(cond.Cells[2].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= cond.Cells[2].M_tot, has value: " + String(cond.Cells[2].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1967};
  modelica_boolean tmp323;
  static const MMC_DEFSTRINGLIT(tmp324,74,"Variable violating min constraint: 0.0 <= cond.Cells[2].M_tot, has value: ");
  modelica_string tmp325;
  modelica_metatype tmpMeta326;
  static int tmp327 = 0;
  if(!tmp327)
  {
    tmp323 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cond.Cells[2].M_tot variable */),0.0);
    if(!tmp323)
    {
      tmp325 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cond.Cells[2].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta326 = stringAppend(MMC_REFSTRINGLIT(tmp324),tmp325);
      {
        const char* assert_cond = "(cond.Cells[2].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta326));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta326));
        }
      }
      tmp327 = 1;
    }
  }
  threadData->lastEquationSolved = 1967;
}

/*
equation index: 1968
type: ALGORITHM

  assert(cond.Cells[3].InFlow.m_flow >= -1e5 and cond.Cells[3].InFlow.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= cond.Cells[3].InFlow.m_flow <= 1e5, has value: " + String(cond.Cells[3].InFlow.m_flow, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1968};
  modelica_boolean tmp328;
  modelica_boolean tmp329;
  static const MMC_DEFSTRINGLIT(tmp330,94,"Variable violating min/max constraint: -1e5 <= cond.Cells[3].InFlow.m_flow <= 1e5, has value: ");
  modelica_string tmp331;
  modelica_metatype tmpMeta332;
  static int tmp333 = 0;
  if(!tmp333)
  {
    tmp328 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cond.Cells[3].InFlow.m_flow variable */),-1e5);
    tmp329 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cond.Cells[3].InFlow.m_flow variable */),1e5);
    if(!(tmp328 && tmp329))
    {
      tmp331 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cond.Cells[3].InFlow.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta332 = stringAppend(MMC_REFSTRINGLIT(tmp330),tmp331);
      {
        const char* assert_cond = "(cond.Cells[3].InFlow.m_flow >= -1e5 and cond.Cells[3].InFlow.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta332));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta332));
        }
      }
      tmp333 = 1;
    }
  }
  threadData->lastEquationSolved = 1968;
}

/*
equation index: 1969
type: ALGORITHM

  assert(cond.Cells[3].fluidState.a >= 0.0 and cond.Cells[3].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.a <= 1e5, has value: " + String(cond.Cells[3].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1969};
  modelica_boolean tmp334;
  modelica_boolean tmp335;
  static const MMC_DEFSTRINGLIT(tmp336,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.a <= 1e5, has value: ");
  modelica_string tmp337;
  modelica_metatype tmpMeta338;
  static int tmp339 = 0;
  if(!tmp339)
  {
    tmp334 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* cond.Cells[3].fluidState.a variable */),0.0);
    tmp335 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* cond.Cells[3].fluidState.a variable */),1e5);
    if(!(tmp334 && tmp335))
    {
      tmp337 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* cond.Cells[3].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta338 = stringAppend(MMC_REFSTRINGLIT(tmp336),tmp337);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.a >= 0.0 and cond.Cells[3].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta338));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta338));
        }
      }
      tmp339 = 1;
    }
  }
  threadData->lastEquationSolved = 1969;
}

/*
equation index: 1970
type: ALGORITHM

  assert(cond.Cells[3].fluidState.cp >= 0.0 and cond.Cells[3].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.cp <= 1e7, has value: " + String(cond.Cells[3].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1970};
  modelica_boolean tmp340;
  modelica_boolean tmp341;
  static const MMC_DEFSTRINGLIT(tmp342,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp343;
  modelica_metatype tmpMeta344;
  static int tmp345 = 0;
  if(!tmp345)
  {
    tmp340 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cond.Cells[3].fluidState.cp variable */),0.0);
    tmp341 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cond.Cells[3].fluidState.cp variable */),1e7);
    if(!(tmp340 && tmp341))
    {
      tmp343 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cond.Cells[3].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta344 = stringAppend(MMC_REFSTRINGLIT(tmp342),tmp343);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.cp >= 0.0 and cond.Cells[3].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta344));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta344));
        }
      }
      tmp345 = 1;
    }
  }
  threadData->lastEquationSolved = 1970;
}

/*
equation index: 1971
type: ALGORITHM

  assert(cond.Cells[3].fluidState.cv >= 0.0 and cond.Cells[3].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.cv <= 1e7, has value: " + String(cond.Cells[3].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1971};
  modelica_boolean tmp346;
  modelica_boolean tmp347;
  static const MMC_DEFSTRINGLIT(tmp348,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp349;
  modelica_metatype tmpMeta350;
  static int tmp351 = 0;
  if(!tmp351)
  {
    tmp346 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cond.Cells[3].fluidState.cv variable */),0.0);
    tmp347 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cond.Cells[3].fluidState.cv variable */),1e7);
    if(!(tmp346 && tmp347))
    {
      tmp349 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cond.Cells[3].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta350 = stringAppend(MMC_REFSTRINGLIT(tmp348),tmp349);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.cv >= 0.0 and cond.Cells[3].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta350));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta350));
        }
      }
      tmp351 = 1;
    }
  }
  threadData->lastEquationSolved = 1971;
}

/*
equation index: 1972
type: ALGORITHM

  assert(cond.Cells[3].fluidState.eta >= 0.0 and cond.Cells[3].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.eta <= 1e8, has value: " + String(cond.Cells[3].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1972};
  modelica_boolean tmp352;
  modelica_boolean tmp353;
  static const MMC_DEFSTRINGLIT(tmp354,94,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp355;
  modelica_metatype tmpMeta356;
  static int tmp357 = 0;
  if(!tmp357)
  {
    tmp352 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[701]] /* cond.Cells[3].fluidState.eta variable */),0.0);
    tmp353 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[701]] /* cond.Cells[3].fluidState.eta variable */),1e8);
    if(!(tmp352 && tmp353))
    {
      tmp355 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[701]] /* cond.Cells[3].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta356 = stringAppend(MMC_REFSTRINGLIT(tmp354),tmp355);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.eta >= 0.0 and cond.Cells[3].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta356));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta356));
        }
      }
      tmp357 = 1;
    }
  }
  threadData->lastEquationSolved = 1972;
}

/*
equation index: 1973
type: ALGORITHM

  assert(cond.Cells[3].fluidState.h >= -1e10 and cond.Cells[3].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[3].fluidState.h <= 1e10, has value: " + String(cond.Cells[3].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1973};
  modelica_boolean tmp358;
  modelica_boolean tmp359;
  static const MMC_DEFSTRINGLIT(tmp360,95,"Variable violating min/max constraint: -1e10 <= cond.Cells[3].fluidState.h <= 1e10, has value: ");
  modelica_string tmp361;
  modelica_metatype tmpMeta362;
  static int tmp363 = 0;
  if(!tmp363)
  {
    tmp358 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[706]] /* cond.Cells[3].fluidState.h variable */),-1e10);
    tmp359 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[706]] /* cond.Cells[3].fluidState.h variable */),1e10);
    if(!(tmp358 && tmp359))
    {
      tmp361 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[706]] /* cond.Cells[3].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta362 = stringAppend(MMC_REFSTRINGLIT(tmp360),tmp361);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.h >= -1e10 and cond.Cells[3].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta362));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta362));
        }
      }
      tmp363 = 1;
    }
  }
  threadData->lastEquationSolved = 1973;
}

/*
equation index: 1974
type: ALGORITHM

  assert(cond.Cells[3].fluidState.lambda >= 0.0 and cond.Cells[3].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.lambda <= 500.0, has value: " + String(cond.Cells[3].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1974};
  modelica_boolean tmp364;
  modelica_boolean tmp365;
  static const MMC_DEFSTRINGLIT(tmp366,99,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp367;
  modelica_metatype tmpMeta368;
  static int tmp369 = 0;
  if(!tmp369)
  {
    tmp364 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cond.Cells[3].fluidState.lambda variable */),0.0);
    tmp365 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cond.Cells[3].fluidState.lambda variable */),500.0);
    if(!(tmp364 && tmp365))
    {
      tmp367 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cond.Cells[3].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta368 = stringAppend(MMC_REFSTRINGLIT(tmp366),tmp367);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.lambda >= 0.0 and cond.Cells[3].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta368));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta368));
        }
      }
      tmp369 = 1;
    }
  }
  threadData->lastEquationSolved = 1974;
}

/*
equation index: 1975
type: ALGORITHM

  assert(cond.Cells[3].fluidState.p >= 0.0 and cond.Cells[3].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.p <= 1e8, has value: " + String(cond.Cells[3].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1975};
  modelica_boolean tmp370;
  modelica_boolean tmp371;
  static const MMC_DEFSTRINGLIT(tmp372,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.p <= 1e8, has value: ");
  modelica_string tmp373;
  modelica_metatype tmpMeta374;
  static int tmp375 = 0;
  if(!tmp375)
  {
    tmp370 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* cond.Cells[3].fluidState.p variable */),0.0);
    tmp371 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* cond.Cells[3].fluidState.p variable */),1e8);
    if(!(tmp370 && tmp371))
    {
      tmp373 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* cond.Cells[3].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta374 = stringAppend(MMC_REFSTRINGLIT(tmp372),tmp373);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.p >= 0.0 and cond.Cells[3].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta374));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta374));
        }
      }
      tmp375 = 1;
    }
  }
  threadData->lastEquationSolved = 1975;
}

/*
equation index: 1976
type: ALGORITHM

  assert(cond.Cells[3].fluidState.phase >= 0 and cond.Cells[3].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= cond.Cells[3].fluidState.phase <= 2, has value: " + String(cond.Cells[3].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1976};
  modelica_boolean tmp376;
  modelica_boolean tmp377;
  static const MMC_DEFSTRINGLIT(tmp378,92,"Variable violating min/max constraint: 0 <= cond.Cells[3].fluidState.phase <= 2, has value: ");
  modelica_string tmp379;
  modelica_metatype tmpMeta380;
  static int tmp381 = 0;
  if(!tmp381)
  {
    tmp376 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[22]] /* cond.Cells[3].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp377 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[22]] /* cond.Cells[3].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp376 && tmp377))
    {
      tmp379 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[22]] /* cond.Cells[3].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta380 = stringAppend(MMC_REFSTRINGLIT(tmp378),tmp379);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.phase >= 0 and cond.Cells[3].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta380));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta380));
        }
      }
      tmp381 = 1;
    }
  }
  threadData->lastEquationSolved = 1976;
}

/*
equation index: 1977
type: ALGORITHM

  assert(cond.Cells[3].fluidState.s >= -1e7 and cond.Cells[3].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[3].fluidState.s <= 1e7, has value: " + String(cond.Cells[3].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1977};
  modelica_boolean tmp382;
  modelica_boolean tmp383;
  static const MMC_DEFSTRINGLIT(tmp384,93,"Variable violating min/max constraint: -1e7 <= cond.Cells[3].fluidState.s <= 1e7, has value: ");
  modelica_string tmp385;
  modelica_metatype tmpMeta386;
  static int tmp387 = 0;
  if(!tmp387)
  {
    tmp382 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[3].fluidState.s variable */),-1e7);
    tmp383 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[3].fluidState.s variable */),1e7);
    if(!(tmp382 && tmp383))
    {
      tmp385 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cond.Cells[3].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta386 = stringAppend(MMC_REFSTRINGLIT(tmp384),tmp385);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.s >= -1e7 and cond.Cells[3].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta386));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta386));
        }
      }
      tmp387 = 1;
    }
  }
  threadData->lastEquationSolved = 1977;
}

/*
equation index: 1978
type: ALGORITHM

  assert(cond.Cells[3].sat.Tsat >= 1.0 and cond.Cells[3].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[3].sat.Tsat <= 1e4, has value: " + String(cond.Cells[3].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1978};
  modelica_boolean tmp388;
  modelica_boolean tmp389;
  static const MMC_DEFSTRINGLIT(tmp390,88,"Variable violating min/max constraint: 1.0 <= cond.Cells[3].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp391;
  modelica_metatype tmpMeta392;
  static int tmp393 = 0;
  if(!tmp393)
  {
    tmp388 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cond.Cells[3].sat.Tsat variable */),1.0);
    tmp389 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cond.Cells[3].sat.Tsat variable */),1e4);
    if(!(tmp388 && tmp389))
    {
      tmp391 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cond.Cells[3].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta392 = stringAppend(MMC_REFSTRINGLIT(tmp390),tmp391);
      {
        const char* assert_cond = "(cond.Cells[3].sat.Tsat >= 1.0 and cond.Cells[3].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta392));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta392));
        }
      }
      tmp393 = 1;
    }
  }
  threadData->lastEquationSolved = 1978;
}

/*
equation index: 1979
type: ALGORITHM

  assert(cond.Cells[3].sat.dl >= 0.0 and cond.Cells[3].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].sat.dl <= 1e5, has value: " + String(cond.Cells[3].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1979};
  modelica_boolean tmp394;
  modelica_boolean tmp395;
  static const MMC_DEFSTRINGLIT(tmp396,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].sat.dl <= 1e5, has value: ");
  modelica_string tmp397;
  modelica_metatype tmpMeta398;
  static int tmp399 = 0;
  if(!tmp399)
  {
    tmp394 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cond.Cells[3].sat.dl variable */),0.0);
    tmp395 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cond.Cells[3].sat.dl variable */),1e5);
    if(!(tmp394 && tmp395))
    {
      tmp397 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cond.Cells[3].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta398 = stringAppend(MMC_REFSTRINGLIT(tmp396),tmp397);
      {
        const char* assert_cond = "(cond.Cells[3].sat.dl >= 0.0 and cond.Cells[3].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta398));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta398));
        }
      }
      tmp399 = 1;
    }
  }
  threadData->lastEquationSolved = 1979;
}

/*
equation index: 1980
type: ALGORITHM

  assert(cond.Cells[3].sat.dv >= 0.0 and cond.Cells[3].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].sat.dv <= 1e5, has value: " + String(cond.Cells[3].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1980};
  modelica_boolean tmp400;
  modelica_boolean tmp401;
  static const MMC_DEFSTRINGLIT(tmp402,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].sat.dv <= 1e5, has value: ");
  modelica_string tmp403;
  modelica_metatype tmpMeta404;
  static int tmp405 = 0;
  if(!tmp405)
  {
    tmp400 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* cond.Cells[3].sat.dv variable */),0.0);
    tmp401 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* cond.Cells[3].sat.dv variable */),1e5);
    if(!(tmp400 && tmp401))
    {
      tmp403 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* cond.Cells[3].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta404 = stringAppend(MMC_REFSTRINGLIT(tmp402),tmp403);
      {
        const char* assert_cond = "(cond.Cells[3].sat.dv >= 0.0 and cond.Cells[3].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta404));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta404));
        }
      }
      tmp405 = 1;
    }
  }
  threadData->lastEquationSolved = 1980;
}

/*
equation index: 1981
type: ALGORITHM

  assert(cond.Cells[3].sat.psat >= 0.0 and cond.Cells[3].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].sat.psat <= 1e8, has value: " + String(cond.Cells[3].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1981};
  modelica_boolean tmp406;
  modelica_boolean tmp407;
  static const MMC_DEFSTRINGLIT(tmp408,88,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].sat.psat <= 1e8, has value: ");
  modelica_string tmp409;
  modelica_metatype tmpMeta410;
  static int tmp411 = 0;
  if(!tmp411)
  {
    tmp406 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* cond.Cells[3].sat.psat variable */),0.0);
    tmp407 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* cond.Cells[3].sat.psat variable */),1e8);
    if(!(tmp406 && tmp407))
    {
      tmp409 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* cond.Cells[3].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta410 = stringAppend(MMC_REFSTRINGLIT(tmp408),tmp409);
      {
        const char* assert_cond = "(cond.Cells[3].sat.psat >= 0.0 and cond.Cells[3].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta410));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta410));
        }
      }
      tmp411 = 1;
    }
  }
  threadData->lastEquationSolved = 1981;
}

/*
equation index: 1982
type: ALGORITHM

  assert(cond.Cells[3].sat.sl >= -1e7 and cond.Cells[3].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[3].sat.sl <= 1e7, has value: " + String(cond.Cells[3].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1982};
  modelica_boolean tmp412;
  modelica_boolean tmp413;
  static const MMC_DEFSTRINGLIT(tmp414,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[3].sat.sl <= 1e7, has value: ");
  modelica_string tmp415;
  modelica_metatype tmpMeta416;
  static int tmp417 = 0;
  if(!tmp417)
  {
    tmp412 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* cond.Cells[3].sat.sl variable */),-1e7);
    tmp413 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* cond.Cells[3].sat.sl variable */),1e7);
    if(!(tmp412 && tmp413))
    {
      tmp415 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* cond.Cells[3].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta416 = stringAppend(MMC_REFSTRINGLIT(tmp414),tmp415);
      {
        const char* assert_cond = "(cond.Cells[3].sat.sl >= -1e7 and cond.Cells[3].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta416));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta416));
        }
      }
      tmp417 = 1;
    }
  }
  threadData->lastEquationSolved = 1982;
}

/*
equation index: 1983
type: ALGORITHM

  assert(cond.Cells[3].sat.sv >= -1e7 and cond.Cells[3].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[3].sat.sv <= 1e7, has value: " + String(cond.Cells[3].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1983};
  modelica_boolean tmp418;
  modelica_boolean tmp419;
  static const MMC_DEFSTRINGLIT(tmp420,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[3].sat.sv <= 1e7, has value: ");
  modelica_string tmp421;
  modelica_metatype tmpMeta422;
  static int tmp423 = 0;
  if(!tmp423)
  {
    tmp418 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[822]] /* cond.Cells[3].sat.sv variable */),-1e7);
    tmp419 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[822]] /* cond.Cells[3].sat.sv variable */),1e7);
    if(!(tmp418 && tmp419))
    {
      tmp421 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[822]] /* cond.Cells[3].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta422 = stringAppend(MMC_REFSTRINGLIT(tmp420),tmp421);
      {
        const char* assert_cond = "(cond.Cells[3].sat.sv >= -1e7 and cond.Cells[3].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta422));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta422));
        }
      }
      tmp423 = 1;
    }
  }
  threadData->lastEquationSolved = 1983;
}

/*
equation index: 1984
type: ALGORITHM

  assert(cond.Cells[3].h >= 1e5 and cond.Cells[3].h <= 8.5e5, "Variable violating min/max constraint: 1e5 <= cond.Cells[3].h <= 8.5e5, has value: " + String(cond.Cells[3].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1984};
  modelica_boolean tmp424;
  modelica_boolean tmp425;
  static const MMC_DEFSTRINGLIT(tmp426,83,"Variable violating min/max constraint: 1e5 <= cond.Cells[3].h <= 8.5e5, has value: ");
  modelica_string tmp427;
  modelica_metatype tmpMeta428;
  static int tmp429 = 0;
  if(!tmp429)
  {
    tmp424 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */),1e5);
    tmp425 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */),8.5e5);
    if(!(tmp424 && tmp425))
    {
      tmp427 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta428 = stringAppend(MMC_REFSTRINGLIT(tmp426),tmp427);
      {
        const char* assert_cond = "(cond.Cells[3].h >= 1e5 and cond.Cells[3].h <= 8.5e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta428));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta428));
        }
      }
      tmp429 = 1;
    }
  }
  threadData->lastEquationSolved = 1984;
}

/*
equation index: 1985
type: ALGORITHM

  assert(cond.Cells[3].T >= 1.0 and cond.Cells[3].T <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[3].T <= 1e4, has value: " + String(cond.Cells[3].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1985};
  modelica_boolean tmp430;
  modelica_boolean tmp431;
  static const MMC_DEFSTRINGLIT(tmp432,81,"Variable violating min/max constraint: 1.0 <= cond.Cells[3].T <= 1e4, has value: ");
  modelica_string tmp433;
  modelica_metatype tmpMeta434;
  static int tmp435 = 0;
  if(!tmp435)
  {
    tmp430 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* cond.Cells[3].T variable */),1.0);
    tmp431 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* cond.Cells[3].T variable */),1e4);
    if(!(tmp430 && tmp431))
    {
      tmp433 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* cond.Cells[3].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta434 = stringAppend(MMC_REFSTRINGLIT(tmp432),tmp433);
      {
        const char* assert_cond = "(cond.Cells[3].T >= 1.0 and cond.Cells[3].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta434));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta434));
        }
      }
      tmp435 = 1;
    }
  }
  threadData->lastEquationSolved = 1985;
}

/*
equation index: 1986
type: ALGORITHM

  assert(cond.Cells[3].rho >= 0.0 and cond.Cells[3].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].rho <= 1e5, has value: " + String(cond.Cells[3].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1986};
  modelica_boolean tmp436;
  modelica_boolean tmp437;
  static const MMC_DEFSTRINGLIT(tmp438,83,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].rho <= 1e5, has value: ");
  modelica_string tmp439;
  modelica_metatype tmpMeta440;
  static int tmp441 = 0;
  if(!tmp441)
  {
    tmp436 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cond.Cells[3].rho variable */),0.0);
    tmp437 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cond.Cells[3].rho variable */),1e5);
    if(!(tmp436 && tmp437))
    {
      tmp439 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cond.Cells[3].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta440 = stringAppend(MMC_REFSTRINGLIT(tmp438),tmp439);
      {
        const char* assert_cond = "(cond.Cells[3].rho >= 0.0 and cond.Cells[3].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta440));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta440));
        }
      }
      tmp441 = 1;
    }
  }
  threadData->lastEquationSolved = 1986;
}

/*
equation index: 1987
type: ALGORITHM

  assert(cond.Cells[3].h_l >= -1e10 and cond.Cells[3].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[3].h_l <= 1e10, has value: " + String(cond.Cells[3].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1987};
  modelica_boolean tmp442;
  modelica_boolean tmp443;
  static const MMC_DEFSTRINGLIT(tmp444,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[3].h_l <= 1e10, has value: ");
  modelica_string tmp445;
  modelica_metatype tmpMeta446;
  static int tmp447 = 0;
  if(!tmp447)
  {
    tmp442 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cond.Cells[3].h_l variable */),-1e10);
    tmp443 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cond.Cells[3].h_l variable */),1e10);
    if(!(tmp442 && tmp443))
    {
      tmp445 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cond.Cells[3].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta446 = stringAppend(MMC_REFSTRINGLIT(tmp444),tmp445);
      {
        const char* assert_cond = "(cond.Cells[3].h_l >= -1e10 and cond.Cells[3].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta446));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta446));
        }
      }
      tmp447 = 1;
    }
  }
  threadData->lastEquationSolved = 1987;
}

/*
equation index: 1988
type: ALGORITHM

  assert(cond.Cells[3].h_v >= -1e10 and cond.Cells[3].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[3].h_v <= 1e10, has value: " + String(cond.Cells[3].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1988};
  modelica_boolean tmp448;
  modelica_boolean tmp449;
  static const MMC_DEFSTRINGLIT(tmp450,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[3].h_v <= 1e10, has value: ");
  modelica_string tmp451;
  modelica_metatype tmpMeta452;
  static int tmp453 = 0;
  if(!tmp453)
  {
    tmp448 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cond.Cells[3].h_v variable */),-1e10);
    tmp449 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cond.Cells[3].h_v variable */),1e10);
    if(!(tmp448 && tmp449))
    {
      tmp451 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cond.Cells[3].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta452 = stringAppend(MMC_REFSTRINGLIT(tmp450),tmp451);
      {
        const char* assert_cond = "(cond.Cells[3].h_v >= -1e10 and cond.Cells[3].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta452));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta452));
        }
      }
      tmp453 = 1;
    }
  }
  threadData->lastEquationSolved = 1988;
}

/*
equation index: 1989
type: ALGORITHM

  assert(cond.Cells[3].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= cond.Cells[3].M_tot, has value: " + String(cond.Cells[3].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1989};
  modelica_boolean tmp454;
  static const MMC_DEFSTRINGLIT(tmp455,74,"Variable violating min constraint: 0.0 <= cond.Cells[3].M_tot, has value: ");
  modelica_string tmp456;
  modelica_metatype tmpMeta457;
  static int tmp458 = 0;
  if(!tmp458)
  {
    tmp454 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cond.Cells[3].M_tot variable */),0.0);
    if(!tmp454)
    {
      tmp456 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cond.Cells[3].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta457 = stringAppend(MMC_REFSTRINGLIT(tmp455),tmp456);
      {
        const char* assert_cond = "(cond.Cells[3].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta457));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta457));
        }
      }
      tmp458 = 1;
    }
  }
  threadData->lastEquationSolved = 1989;
}

/*
equation index: 1990
type: ALGORITHM

  assert(cond.Cells[4].InFlow.m_flow >= -1e5 and cond.Cells[4].InFlow.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= cond.Cells[4].InFlow.m_flow <= 1e5, has value: " + String(cond.Cells[4].InFlow.m_flow, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1990};
  modelica_boolean tmp459;
  modelica_boolean tmp460;
  static const MMC_DEFSTRINGLIT(tmp461,94,"Variable violating min/max constraint: -1e5 <= cond.Cells[4].InFlow.m_flow <= 1e5, has value: ");
  modelica_string tmp462;
  modelica_metatype tmpMeta463;
  static int tmp464 = 0;
  if(!tmp464)
  {
    tmp459 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cond.Cells[4].InFlow.m_flow variable */),-1e5);
    tmp460 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cond.Cells[4].InFlow.m_flow variable */),1e5);
    if(!(tmp459 && tmp460))
    {
      tmp462 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cond.Cells[4].InFlow.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta463 = stringAppend(MMC_REFSTRINGLIT(tmp461),tmp462);
      {
        const char* assert_cond = "(cond.Cells[4].InFlow.m_flow >= -1e5 and cond.Cells[4].InFlow.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta463));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta463));
        }
      }
      tmp464 = 1;
    }
  }
  threadData->lastEquationSolved = 1990;
}

/*
equation index: 1991
type: ALGORITHM

  assert(cond.Cells[4].fluidState.a >= 0.0 and cond.Cells[4].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.a <= 1e5, has value: " + String(cond.Cells[4].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1991};
  modelica_boolean tmp465;
  modelica_boolean tmp466;
  static const MMC_DEFSTRINGLIT(tmp467,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.a <= 1e5, has value: ");
  modelica_string tmp468;
  modelica_metatype tmpMeta469;
  static int tmp470 = 0;
  if(!tmp470)
  {
    tmp465 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* cond.Cells[4].fluidState.a variable */),0.0);
    tmp466 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* cond.Cells[4].fluidState.a variable */),1e5);
    if(!(tmp465 && tmp466))
    {
      tmp468 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* cond.Cells[4].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta469 = stringAppend(MMC_REFSTRINGLIT(tmp467),tmp468);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.a >= 0.0 and cond.Cells[4].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta469));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta469));
        }
      }
      tmp470 = 1;
    }
  }
  threadData->lastEquationSolved = 1991;
}

/*
equation index: 1992
type: ALGORITHM

  assert(cond.Cells[4].fluidState.cp >= 0.0 and cond.Cells[4].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.cp <= 1e7, has value: " + String(cond.Cells[4].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1992};
  modelica_boolean tmp471;
  modelica_boolean tmp472;
  static const MMC_DEFSTRINGLIT(tmp473,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp474;
  modelica_metatype tmpMeta475;
  static int tmp476 = 0;
  if(!tmp476)
  {
    tmp471 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cond.Cells[4].fluidState.cp variable */),0.0);
    tmp472 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cond.Cells[4].fluidState.cp variable */),1e7);
    if(!(tmp471 && tmp472))
    {
      tmp474 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cond.Cells[4].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta475 = stringAppend(MMC_REFSTRINGLIT(tmp473),tmp474);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.cp >= 0.0 and cond.Cells[4].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta475));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta475));
        }
      }
      tmp476 = 1;
    }
  }
  threadData->lastEquationSolved = 1992;
}

/*
equation index: 1993
type: ALGORITHM

  assert(cond.Cells[4].fluidState.cv >= 0.0 and cond.Cells[4].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.cv <= 1e7, has value: " + String(cond.Cells[4].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1993};
  modelica_boolean tmp477;
  modelica_boolean tmp478;
  static const MMC_DEFSTRINGLIT(tmp479,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp480;
  modelica_metatype tmpMeta481;
  static int tmp482 = 0;
  if(!tmp482)
  {
    tmp477 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cond.Cells[4].fluidState.cv variable */),0.0);
    tmp478 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cond.Cells[4].fluidState.cv variable */),1e7);
    if(!(tmp477 && tmp478))
    {
      tmp480 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cond.Cells[4].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta481 = stringAppend(MMC_REFSTRINGLIT(tmp479),tmp480);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.cv >= 0.0 and cond.Cells[4].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta481));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta481));
        }
      }
      tmp482 = 1;
    }
  }
  threadData->lastEquationSolved = 1993;
}

/*
equation index: 1994
type: ALGORITHM

  assert(cond.Cells[4].fluidState.eta >= 0.0 and cond.Cells[4].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.eta <= 1e8, has value: " + String(cond.Cells[4].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1994};
  modelica_boolean tmp483;
  modelica_boolean tmp484;
  static const MMC_DEFSTRINGLIT(tmp485,94,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp486;
  modelica_metatype tmpMeta487;
  static int tmp488 = 0;
  if(!tmp488)
  {
    tmp483 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cond.Cells[4].fluidState.eta variable */),0.0);
    tmp484 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cond.Cells[4].fluidState.eta variable */),1e8);
    if(!(tmp483 && tmp484))
    {
      tmp486 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cond.Cells[4].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta487 = stringAppend(MMC_REFSTRINGLIT(tmp485),tmp486);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.eta >= 0.0 and cond.Cells[4].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta487));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta487));
        }
      }
      tmp488 = 1;
    }
  }
  threadData->lastEquationSolved = 1994;
}

/*
equation index: 1995
type: ALGORITHM

  assert(cond.Cells[4].fluidState.h >= -1e10 and cond.Cells[4].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[4].fluidState.h <= 1e10, has value: " + String(cond.Cells[4].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1995};
  modelica_boolean tmp489;
  modelica_boolean tmp490;
  static const MMC_DEFSTRINGLIT(tmp491,95,"Variable violating min/max constraint: -1e10 <= cond.Cells[4].fluidState.h <= 1e10, has value: ");
  modelica_string tmp492;
  modelica_metatype tmpMeta493;
  static int tmp494 = 0;
  if(!tmp494)
  {
    tmp489 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[707]] /* cond.Cells[4].fluidState.h variable */),-1e10);
    tmp490 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[707]] /* cond.Cells[4].fluidState.h variable */),1e10);
    if(!(tmp489 && tmp490))
    {
      tmp492 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[707]] /* cond.Cells[4].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta493 = stringAppend(MMC_REFSTRINGLIT(tmp491),tmp492);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.h >= -1e10 and cond.Cells[4].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta493));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta493));
        }
      }
      tmp494 = 1;
    }
  }
  threadData->lastEquationSolved = 1995;
}

/*
equation index: 1996
type: ALGORITHM

  assert(cond.Cells[4].fluidState.lambda >= 0.0 and cond.Cells[4].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.lambda <= 500.0, has value: " + String(cond.Cells[4].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1996};
  modelica_boolean tmp495;
  modelica_boolean tmp496;
  static const MMC_DEFSTRINGLIT(tmp497,99,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp498;
  modelica_metatype tmpMeta499;
  static int tmp500 = 0;
  if(!tmp500)
  {
    tmp495 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cond.Cells[4].fluidState.lambda variable */),0.0);
    tmp496 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cond.Cells[4].fluidState.lambda variable */),500.0);
    if(!(tmp495 && tmp496))
    {
      tmp498 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cond.Cells[4].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta499 = stringAppend(MMC_REFSTRINGLIT(tmp497),tmp498);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.lambda >= 0.0 and cond.Cells[4].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta499));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta499));
        }
      }
      tmp500 = 1;
    }
  }
  threadData->lastEquationSolved = 1996;
}

/*
equation index: 1997
type: ALGORITHM

  assert(cond.Cells[4].fluidState.p >= 0.0 and cond.Cells[4].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.p <= 1e8, has value: " + String(cond.Cells[4].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1997};
  modelica_boolean tmp501;
  modelica_boolean tmp502;
  static const MMC_DEFSTRINGLIT(tmp503,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.p <= 1e8, has value: ");
  modelica_string tmp504;
  modelica_metatype tmpMeta505;
  static int tmp506 = 0;
  if(!tmp506)
  {
    tmp501 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* cond.Cells[4].fluidState.p variable */),0.0);
    tmp502 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* cond.Cells[4].fluidState.p variable */),1e8);
    if(!(tmp501 && tmp502))
    {
      tmp504 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* cond.Cells[4].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta505 = stringAppend(MMC_REFSTRINGLIT(tmp503),tmp504);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.p >= 0.0 and cond.Cells[4].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta505));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta505));
        }
      }
      tmp506 = 1;
    }
  }
  threadData->lastEquationSolved = 1997;
}

/*
equation index: 1998
type: ALGORITHM

  assert(cond.Cells[4].fluidState.phase >= 0 and cond.Cells[4].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= cond.Cells[4].fluidState.phase <= 2, has value: " + String(cond.Cells[4].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1998};
  modelica_boolean tmp507;
  modelica_boolean tmp508;
  static const MMC_DEFSTRINGLIT(tmp509,92,"Variable violating min/max constraint: 0 <= cond.Cells[4].fluidState.phase <= 2, has value: ");
  modelica_string tmp510;
  modelica_metatype tmpMeta511;
  static int tmp512 = 0;
  if(!tmp512)
  {
    tmp507 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[23]] /* cond.Cells[4].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp508 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[23]] /* cond.Cells[4].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp507 && tmp508))
    {
      tmp510 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[23]] /* cond.Cells[4].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta511 = stringAppend(MMC_REFSTRINGLIT(tmp509),tmp510);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.phase >= 0 and cond.Cells[4].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta511));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta511));
        }
      }
      tmp512 = 1;
    }
  }
  threadData->lastEquationSolved = 1998;
}

/*
equation index: 1999
type: ALGORITHM

  assert(cond.Cells[4].fluidState.s >= -1e7 and cond.Cells[4].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[4].fluidState.s <= 1e7, has value: " + String(cond.Cells[4].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1999};
  modelica_boolean tmp513;
  modelica_boolean tmp514;
  static const MMC_DEFSTRINGLIT(tmp515,93,"Variable violating min/max constraint: -1e7 <= cond.Cells[4].fluidState.s <= 1e7, has value: ");
  modelica_string tmp516;
  modelica_metatype tmpMeta517;
  static int tmp518 = 0;
  if(!tmp518)
  {
    tmp513 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cond.Cells[4].fluidState.s variable */),-1e7);
    tmp514 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cond.Cells[4].fluidState.s variable */),1e7);
    if(!(tmp513 && tmp514))
    {
      tmp516 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cond.Cells[4].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta517 = stringAppend(MMC_REFSTRINGLIT(tmp515),tmp516);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.s >= -1e7 and cond.Cells[4].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta517));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta517));
        }
      }
      tmp518 = 1;
    }
  }
  threadData->lastEquationSolved = 1999;
}

/*
equation index: 2000
type: ALGORITHM

  assert(cond.Cells[4].sat.Tsat >= 1.0 and cond.Cells[4].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[4].sat.Tsat <= 1e4, has value: " + String(cond.Cells[4].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2000};
  modelica_boolean tmp519;
  modelica_boolean tmp520;
  static const MMC_DEFSTRINGLIT(tmp521,88,"Variable violating min/max constraint: 1.0 <= cond.Cells[4].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp522;
  modelica_metatype tmpMeta523;
  static int tmp524 = 0;
  if(!tmp524)
  {
    tmp519 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cond.Cells[4].sat.Tsat variable */),1.0);
    tmp520 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cond.Cells[4].sat.Tsat variable */),1e4);
    if(!(tmp519 && tmp520))
    {
      tmp522 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cond.Cells[4].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta523 = stringAppend(MMC_REFSTRINGLIT(tmp521),tmp522);
      {
        const char* assert_cond = "(cond.Cells[4].sat.Tsat >= 1.0 and cond.Cells[4].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta523));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta523));
        }
      }
      tmp524 = 1;
    }
  }
  threadData->lastEquationSolved = 2000;
}

/*
equation index: 2001
type: ALGORITHM

  assert(cond.Cells[4].sat.dl >= 0.0 and cond.Cells[4].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].sat.dl <= 1e5, has value: " + String(cond.Cells[4].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2001};
  modelica_boolean tmp525;
  modelica_boolean tmp526;
  static const MMC_DEFSTRINGLIT(tmp527,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].sat.dl <= 1e5, has value: ");
  modelica_string tmp528;
  modelica_metatype tmpMeta529;
  static int tmp530 = 0;
  if(!tmp530)
  {
    tmp525 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cond.Cells[4].sat.dl variable */),0.0);
    tmp526 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cond.Cells[4].sat.dl variable */),1e5);
    if(!(tmp525 && tmp526))
    {
      tmp528 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cond.Cells[4].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta529 = stringAppend(MMC_REFSTRINGLIT(tmp527),tmp528);
      {
        const char* assert_cond = "(cond.Cells[4].sat.dl >= 0.0 and cond.Cells[4].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta529));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta529));
        }
      }
      tmp530 = 1;
    }
  }
  threadData->lastEquationSolved = 2001;
}

/*
equation index: 2002
type: ALGORITHM

  assert(cond.Cells[4].sat.dv >= 0.0 and cond.Cells[4].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].sat.dv <= 1e5, has value: " + String(cond.Cells[4].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2002};
  modelica_boolean tmp531;
  modelica_boolean tmp532;
  static const MMC_DEFSTRINGLIT(tmp533,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].sat.dv <= 1e5, has value: ");
  modelica_string tmp534;
  modelica_metatype tmpMeta535;
  static int tmp536 = 0;
  if(!tmp536)
  {
    tmp531 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* cond.Cells[4].sat.dv variable */),0.0);
    tmp532 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* cond.Cells[4].sat.dv variable */),1e5);
    if(!(tmp531 && tmp532))
    {
      tmp534 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* cond.Cells[4].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta535 = stringAppend(MMC_REFSTRINGLIT(tmp533),tmp534);
      {
        const char* assert_cond = "(cond.Cells[4].sat.dv >= 0.0 and cond.Cells[4].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta535));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta535));
        }
      }
      tmp536 = 1;
    }
  }
  threadData->lastEquationSolved = 2002;
}

/*
equation index: 2003
type: ALGORITHM

  assert(cond.Cells[4].sat.psat >= 0.0 and cond.Cells[4].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].sat.psat <= 1e8, has value: " + String(cond.Cells[4].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2003};
  modelica_boolean tmp537;
  modelica_boolean tmp538;
  static const MMC_DEFSTRINGLIT(tmp539,88,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].sat.psat <= 1e8, has value: ");
  modelica_string tmp540;
  modelica_metatype tmpMeta541;
  static int tmp542 = 0;
  if(!tmp542)
  {
    tmp537 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* cond.Cells[4].sat.psat variable */),0.0);
    tmp538 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* cond.Cells[4].sat.psat variable */),1e8);
    if(!(tmp537 && tmp538))
    {
      tmp540 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* cond.Cells[4].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta541 = stringAppend(MMC_REFSTRINGLIT(tmp539),tmp540);
      {
        const char* assert_cond = "(cond.Cells[4].sat.psat >= 0.0 and cond.Cells[4].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta541));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta541));
        }
      }
      tmp542 = 1;
    }
  }
  threadData->lastEquationSolved = 2003;
}

/*
equation index: 2004
type: ALGORITHM

  assert(cond.Cells[4].sat.sl >= -1e7 and cond.Cells[4].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[4].sat.sl <= 1e7, has value: " + String(cond.Cells[4].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2004};
  modelica_boolean tmp543;
  modelica_boolean tmp544;
  static const MMC_DEFSTRINGLIT(tmp545,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[4].sat.sl <= 1e7, has value: ");
  modelica_string tmp546;
  modelica_metatype tmpMeta547;
  static int tmp548 = 0;
  if(!tmp548)
  {
    tmp543 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* cond.Cells[4].sat.sl variable */),-1e7);
    tmp544 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* cond.Cells[4].sat.sl variable */),1e7);
    if(!(tmp543 && tmp544))
    {
      tmp546 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* cond.Cells[4].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta547 = stringAppend(MMC_REFSTRINGLIT(tmp545),tmp546);
      {
        const char* assert_cond = "(cond.Cells[4].sat.sl >= -1e7 and cond.Cells[4].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta547));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta547));
        }
      }
      tmp548 = 1;
    }
  }
  threadData->lastEquationSolved = 2004;
}

/*
equation index: 2005
type: ALGORITHM

  assert(cond.Cells[4].sat.sv >= -1e7 and cond.Cells[4].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[4].sat.sv <= 1e7, has value: " + String(cond.Cells[4].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2005};
  modelica_boolean tmp549;
  modelica_boolean tmp550;
  static const MMC_DEFSTRINGLIT(tmp551,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[4].sat.sv <= 1e7, has value: ");
  modelica_string tmp552;
  modelica_metatype tmpMeta553;
  static int tmp554 = 0;
  if(!tmp554)
  {
    tmp549 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[823]] /* cond.Cells[4].sat.sv variable */),-1e7);
    tmp550 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[823]] /* cond.Cells[4].sat.sv variable */),1e7);
    if(!(tmp549 && tmp550))
    {
      tmp552 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[823]] /* cond.Cells[4].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta553 = stringAppend(MMC_REFSTRINGLIT(tmp551),tmp552);
      {
        const char* assert_cond = "(cond.Cells[4].sat.sv >= -1e7 and cond.Cells[4].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta553));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta553));
        }
      }
      tmp554 = 1;
    }
  }
  threadData->lastEquationSolved = 2005;
}

/*
equation index: 2006
type: ALGORITHM

  assert(cond.Cells[4].h >= 1e5 and cond.Cells[4].h <= 8.5e5, "Variable violating min/max constraint: 1e5 <= cond.Cells[4].h <= 8.5e5, has value: " + String(cond.Cells[4].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2006};
  modelica_boolean tmp555;
  modelica_boolean tmp556;
  static const MMC_DEFSTRINGLIT(tmp557,83,"Variable violating min/max constraint: 1e5 <= cond.Cells[4].h <= 8.5e5, has value: ");
  modelica_string tmp558;
  modelica_metatype tmpMeta559;
  static int tmp560 = 0;
  if(!tmp560)
  {
    tmp555 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */),1e5);
    tmp556 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */),8.5e5);
    if(!(tmp555 && tmp556))
    {
      tmp558 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta559 = stringAppend(MMC_REFSTRINGLIT(tmp557),tmp558);
      {
        const char* assert_cond = "(cond.Cells[4].h >= 1e5 and cond.Cells[4].h <= 8.5e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta559));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta559));
        }
      }
      tmp560 = 1;
    }
  }
  threadData->lastEquationSolved = 2006;
}

/*
equation index: 2007
type: ALGORITHM

  assert(cond.Cells[4].T >= 1.0 and cond.Cells[4].T <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[4].T <= 1e4, has value: " + String(cond.Cells[4].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2007};
  modelica_boolean tmp561;
  modelica_boolean tmp562;
  static const MMC_DEFSTRINGLIT(tmp563,81,"Variable violating min/max constraint: 1.0 <= cond.Cells[4].T <= 1e4, has value: ");
  modelica_string tmp564;
  modelica_metatype tmpMeta565;
  static int tmp566 = 0;
  if(!tmp566)
  {
    tmp561 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[662]] /* cond.Cells[4].T variable */),1.0);
    tmp562 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[662]] /* cond.Cells[4].T variable */),1e4);
    if(!(tmp561 && tmp562))
    {
      tmp564 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[662]] /* cond.Cells[4].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta565 = stringAppend(MMC_REFSTRINGLIT(tmp563),tmp564);
      {
        const char* assert_cond = "(cond.Cells[4].T >= 1.0 and cond.Cells[4].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta565));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta565));
        }
      }
      tmp566 = 1;
    }
  }
  threadData->lastEquationSolved = 2007;
}

/*
equation index: 2008
type: ALGORITHM

  assert(cond.Cells[4].rho >= 0.0 and cond.Cells[4].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].rho <= 1e5, has value: " + String(cond.Cells[4].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2008};
  modelica_boolean tmp567;
  modelica_boolean tmp568;
  static const MMC_DEFSTRINGLIT(tmp569,83,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].rho <= 1e5, has value: ");
  modelica_string tmp570;
  modelica_metatype tmpMeta571;
  static int tmp572 = 0;
  if(!tmp572)
  {
    tmp567 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cond.Cells[4].rho variable */),0.0);
    tmp568 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cond.Cells[4].rho variable */),1e5);
    if(!(tmp567 && tmp568))
    {
      tmp570 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cond.Cells[4].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta571 = stringAppend(MMC_REFSTRINGLIT(tmp569),tmp570);
      {
        const char* assert_cond = "(cond.Cells[4].rho >= 0.0 and cond.Cells[4].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta571));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta571));
        }
      }
      tmp572 = 1;
    }
  }
  threadData->lastEquationSolved = 2008;
}

/*
equation index: 2009
type: ALGORITHM

  assert(cond.Cells[4].h_l >= -1e10 and cond.Cells[4].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[4].h_l <= 1e10, has value: " + String(cond.Cells[4].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2009};
  modelica_boolean tmp573;
  modelica_boolean tmp574;
  static const MMC_DEFSTRINGLIT(tmp575,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[4].h_l <= 1e10, has value: ");
  modelica_string tmp576;
  modelica_metatype tmpMeta577;
  static int tmp578 = 0;
  if(!tmp578)
  {
    tmp573 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cond.Cells[4].h_l variable */),-1e10);
    tmp574 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cond.Cells[4].h_l variable */),1e10);
    if(!(tmp573 && tmp574))
    {
      tmp576 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cond.Cells[4].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta577 = stringAppend(MMC_REFSTRINGLIT(tmp575),tmp576);
      {
        const char* assert_cond = "(cond.Cells[4].h_l >= -1e10 and cond.Cells[4].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta577));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta577));
        }
      }
      tmp578 = 1;
    }
  }
  threadData->lastEquationSolved = 2009;
}

/*
equation index: 2010
type: ALGORITHM

  assert(cond.Cells[4].h_v >= -1e10 and cond.Cells[4].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[4].h_v <= 1e10, has value: " + String(cond.Cells[4].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2010};
  modelica_boolean tmp579;
  modelica_boolean tmp580;
  static const MMC_DEFSTRINGLIT(tmp581,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[4].h_v <= 1e10, has value: ");
  modelica_string tmp582;
  modelica_metatype tmpMeta583;
  static int tmp584 = 0;
  if(!tmp584)
  {
    tmp579 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cond.Cells[4].h_v variable */),-1e10);
    tmp580 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cond.Cells[4].h_v variable */),1e10);
    if(!(tmp579 && tmp580))
    {
      tmp582 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cond.Cells[4].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta583 = stringAppend(MMC_REFSTRINGLIT(tmp581),tmp582);
      {
        const char* assert_cond = "(cond.Cells[4].h_v >= -1e10 and cond.Cells[4].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta583));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta583));
        }
      }
      tmp584 = 1;
    }
  }
  threadData->lastEquationSolved = 2010;
}

/*
equation index: 2011
type: ALGORITHM

  assert(cond.Cells[4].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= cond.Cells[4].M_tot, has value: " + String(cond.Cells[4].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2011};
  modelica_boolean tmp585;
  static const MMC_DEFSTRINGLIT(tmp586,74,"Variable violating min constraint: 0.0 <= cond.Cells[4].M_tot, has value: ");
  modelica_string tmp587;
  modelica_metatype tmpMeta588;
  static int tmp589 = 0;
  if(!tmp589)
  {
    tmp585 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cond.Cells[4].M_tot variable */),0.0);
    if(!tmp585)
    {
      tmp587 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cond.Cells[4].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta588 = stringAppend(MMC_REFSTRINGLIT(tmp586),tmp587);
      {
        const char* assert_cond = "(cond.Cells[4].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta588));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta588));
        }
      }
      tmp589 = 1;
    }
  }
  threadData->lastEquationSolved = 2011;
}

/*
equation index: 2012
type: ALGORITHM

  assert(cond.Cells[5].InFlow.m_flow >= -1e5 and cond.Cells[5].InFlow.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= cond.Cells[5].InFlow.m_flow <= 1e5, has value: " + String(cond.Cells[5].InFlow.m_flow, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2012};
  modelica_boolean tmp590;
  modelica_boolean tmp591;
  static const MMC_DEFSTRINGLIT(tmp592,94,"Variable violating min/max constraint: -1e5 <= cond.Cells[5].InFlow.m_flow <= 1e5, has value: ");
  modelica_string tmp593;
  modelica_metatype tmpMeta594;
  static int tmp595 = 0;
  if(!tmp595)
  {
    tmp590 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cond.Cells[5].InFlow.m_flow variable */),-1e5);
    tmp591 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cond.Cells[5].InFlow.m_flow variable */),1e5);
    if(!(tmp590 && tmp591))
    {
      tmp593 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cond.Cells[5].InFlow.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta594 = stringAppend(MMC_REFSTRINGLIT(tmp592),tmp593);
      {
        const char* assert_cond = "(cond.Cells[5].InFlow.m_flow >= -1e5 and cond.Cells[5].InFlow.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta594));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta594));
        }
      }
      tmp595 = 1;
    }
  }
  threadData->lastEquationSolved = 2012;
}

/*
equation index: 2013
type: ALGORITHM

  assert(cond.Cells[5].fluidState.a >= 0.0 and cond.Cells[5].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.a <= 1e5, has value: " + String(cond.Cells[5].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2013};
  modelica_boolean tmp596;
  modelica_boolean tmp597;
  static const MMC_DEFSTRINGLIT(tmp598,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.a <= 1e5, has value: ");
  modelica_string tmp599;
  modelica_metatype tmpMeta600;
  static int tmp601 = 0;
  if(!tmp601)
  {
    tmp596 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* cond.Cells[5].fluidState.a variable */),0.0);
    tmp597 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* cond.Cells[5].fluidState.a variable */),1e5);
    if(!(tmp596 && tmp597))
    {
      tmp599 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* cond.Cells[5].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta600 = stringAppend(MMC_REFSTRINGLIT(tmp598),tmp599);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.a >= 0.0 and cond.Cells[5].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta600));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta600));
        }
      }
      tmp601 = 1;
    }
  }
  threadData->lastEquationSolved = 2013;
}

/*
equation index: 2014
type: ALGORITHM

  assert(cond.Cells[5].fluidState.cp >= 0.0 and cond.Cells[5].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.cp <= 1e7, has value: " + String(cond.Cells[5].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2014};
  modelica_boolean tmp602;
  modelica_boolean tmp603;
  static const MMC_DEFSTRINGLIT(tmp604,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp605;
  modelica_metatype tmpMeta606;
  static int tmp607 = 0;
  if(!tmp607)
  {
    tmp602 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cond.Cells[5].fluidState.cp variable */),0.0);
    tmp603 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cond.Cells[5].fluidState.cp variable */),1e7);
    if(!(tmp602 && tmp603))
    {
      tmp605 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cond.Cells[5].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta606 = stringAppend(MMC_REFSTRINGLIT(tmp604),tmp605);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.cp >= 0.0 and cond.Cells[5].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta606));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta606));
        }
      }
      tmp607 = 1;
    }
  }
  threadData->lastEquationSolved = 2014;
}

/*
equation index: 2015
type: ALGORITHM

  assert(cond.Cells[5].fluidState.cv >= 0.0 and cond.Cells[5].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.cv <= 1e7, has value: " + String(cond.Cells[5].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2015};
  modelica_boolean tmp608;
  modelica_boolean tmp609;
  static const MMC_DEFSTRINGLIT(tmp610,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp611;
  modelica_metatype tmpMeta612;
  static int tmp613 = 0;
  if(!tmp613)
  {
    tmp608 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cond.Cells[5].fluidState.cv variable */),0.0);
    tmp609 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cond.Cells[5].fluidState.cv variable */),1e7);
    if(!(tmp608 && tmp609))
    {
      tmp611 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cond.Cells[5].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta612 = stringAppend(MMC_REFSTRINGLIT(tmp610),tmp611);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.cv >= 0.0 and cond.Cells[5].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta612));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta612));
        }
      }
      tmp613 = 1;
    }
  }
  threadData->lastEquationSolved = 2015;
}

/*
equation index: 2016
type: ALGORITHM

  assert(cond.Cells[5].fluidState.eta >= 0.0 and cond.Cells[5].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.eta <= 1e8, has value: " + String(cond.Cells[5].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2016};
  modelica_boolean tmp614;
  modelica_boolean tmp615;
  static const MMC_DEFSTRINGLIT(tmp616,94,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp617;
  modelica_metatype tmpMeta618;
  static int tmp619 = 0;
  if(!tmp619)
  {
    tmp614 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[703]] /* cond.Cells[5].fluidState.eta variable */),0.0);
    tmp615 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[703]] /* cond.Cells[5].fluidState.eta variable */),1e8);
    if(!(tmp614 && tmp615))
    {
      tmp617 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[703]] /* cond.Cells[5].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta618 = stringAppend(MMC_REFSTRINGLIT(tmp616),tmp617);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.eta >= 0.0 and cond.Cells[5].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta618));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta618));
        }
      }
      tmp619 = 1;
    }
  }
  threadData->lastEquationSolved = 2016;
}

/*
equation index: 2017
type: ALGORITHM

  assert(cond.Cells[5].fluidState.h >= -1e10 and cond.Cells[5].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[5].fluidState.h <= 1e10, has value: " + String(cond.Cells[5].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2017};
  modelica_boolean tmp620;
  modelica_boolean tmp621;
  static const MMC_DEFSTRINGLIT(tmp622,95,"Variable violating min/max constraint: -1e10 <= cond.Cells[5].fluidState.h <= 1e10, has value: ");
  modelica_string tmp623;
  modelica_metatype tmpMeta624;
  static int tmp625 = 0;
  if(!tmp625)
  {
    tmp620 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* cond.Cells[5].fluidState.h variable */),-1e10);
    tmp621 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* cond.Cells[5].fluidState.h variable */),1e10);
    if(!(tmp620 && tmp621))
    {
      tmp623 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* cond.Cells[5].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta624 = stringAppend(MMC_REFSTRINGLIT(tmp622),tmp623);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.h >= -1e10 and cond.Cells[5].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta624));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta624));
        }
      }
      tmp625 = 1;
    }
  }
  threadData->lastEquationSolved = 2017;
}

/*
equation index: 2018
type: ALGORITHM

  assert(cond.Cells[5].fluidState.lambda >= 0.0 and cond.Cells[5].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.lambda <= 500.0, has value: " + String(cond.Cells[5].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2018};
  modelica_boolean tmp626;
  modelica_boolean tmp627;
  static const MMC_DEFSTRINGLIT(tmp628,99,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp629;
  modelica_metatype tmpMeta630;
  static int tmp631 = 0;
  if(!tmp631)
  {
    tmp626 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cond.Cells[5].fluidState.lambda variable */),0.0);
    tmp627 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cond.Cells[5].fluidState.lambda variable */),500.0);
    if(!(tmp626 && tmp627))
    {
      tmp629 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cond.Cells[5].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta630 = stringAppend(MMC_REFSTRINGLIT(tmp628),tmp629);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.lambda >= 0.0 and cond.Cells[5].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta630));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta630));
        }
      }
      tmp631 = 1;
    }
  }
  threadData->lastEquationSolved = 2018;
}

/*
equation index: 2019
type: ALGORITHM

  assert(cond.Cells[5].fluidState.p >= 0.0 and cond.Cells[5].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.p <= 1e8, has value: " + String(cond.Cells[5].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2019};
  modelica_boolean tmp632;
  modelica_boolean tmp633;
  static const MMC_DEFSTRINGLIT(tmp634,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.p <= 1e8, has value: ");
  modelica_string tmp635;
  modelica_metatype tmpMeta636;
  static int tmp637 = 0;
  if(!tmp637)
  {
    tmp632 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[5].fluidState.p variable */),0.0);
    tmp633 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[5].fluidState.p variable */),1e8);
    if(!(tmp632 && tmp633))
    {
      tmp635 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cond.Cells[5].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta636 = stringAppend(MMC_REFSTRINGLIT(tmp634),tmp635);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.p >= 0.0 and cond.Cells[5].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta636));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta636));
        }
      }
      tmp637 = 1;
    }
  }
  threadData->lastEquationSolved = 2019;
}

/*
equation index: 2020
type: ALGORITHM

  assert(cond.Cells[5].fluidState.phase >= 0 and cond.Cells[5].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= cond.Cells[5].fluidState.phase <= 2, has value: " + String(cond.Cells[5].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2020};
  modelica_boolean tmp638;
  modelica_boolean tmp639;
  static const MMC_DEFSTRINGLIT(tmp640,92,"Variable violating min/max constraint: 0 <= cond.Cells[5].fluidState.phase <= 2, has value: ");
  modelica_string tmp641;
  modelica_metatype tmpMeta642;
  static int tmp643 = 0;
  if(!tmp643)
  {
    tmp638 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[24]] /* cond.Cells[5].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp639 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[24]] /* cond.Cells[5].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp638 && tmp639))
    {
      tmp641 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[24]] /* cond.Cells[5].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta642 = stringAppend(MMC_REFSTRINGLIT(tmp640),tmp641);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.phase >= 0 and cond.Cells[5].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta642));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta642));
        }
      }
      tmp643 = 1;
    }
  }
  threadData->lastEquationSolved = 2020;
}

/*
equation index: 2021
type: ALGORITHM

  assert(cond.Cells[5].fluidState.s >= -1e7 and cond.Cells[5].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[5].fluidState.s <= 1e7, has value: " + String(cond.Cells[5].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2021};
  modelica_boolean tmp644;
  modelica_boolean tmp645;
  static const MMC_DEFSTRINGLIT(tmp646,93,"Variable violating min/max constraint: -1e7 <= cond.Cells[5].fluidState.s <= 1e7, has value: ");
  modelica_string tmp647;
  modelica_metatype tmpMeta648;
  static int tmp649 = 0;
  if(!tmp649)
  {
    tmp644 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cond.Cells[5].fluidState.s variable */),-1e7);
    tmp645 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cond.Cells[5].fluidState.s variable */),1e7);
    if(!(tmp644 && tmp645))
    {
      tmp647 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cond.Cells[5].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta648 = stringAppend(MMC_REFSTRINGLIT(tmp646),tmp647);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.s >= -1e7 and cond.Cells[5].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta648));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta648));
        }
      }
      tmp649 = 1;
    }
  }
  threadData->lastEquationSolved = 2021;
}

/*
equation index: 2022
type: ALGORITHM

  assert(cond.Cells[5].sat.Tsat >= 1.0 and cond.Cells[5].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[5].sat.Tsat <= 1e4, has value: " + String(cond.Cells[5].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2022};
  modelica_boolean tmp650;
  modelica_boolean tmp651;
  static const MMC_DEFSTRINGLIT(tmp652,88,"Variable violating min/max constraint: 1.0 <= cond.Cells[5].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp653;
  modelica_metatype tmpMeta654;
  static int tmp655 = 0;
  if(!tmp655)
  {
    tmp650 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cond.Cells[5].sat.Tsat variable */),1.0);
    tmp651 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cond.Cells[5].sat.Tsat variable */),1e4);
    if(!(tmp650 && tmp651))
    {
      tmp653 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cond.Cells[5].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta654 = stringAppend(MMC_REFSTRINGLIT(tmp652),tmp653);
      {
        const char* assert_cond = "(cond.Cells[5].sat.Tsat >= 1.0 and cond.Cells[5].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta654));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta654));
        }
      }
      tmp655 = 1;
    }
  }
  threadData->lastEquationSolved = 2022;
}

/*
equation index: 2023
type: ALGORITHM

  assert(cond.Cells[5].sat.dl >= 0.0 and cond.Cells[5].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].sat.dl <= 1e5, has value: " + String(cond.Cells[5].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2023};
  modelica_boolean tmp656;
  modelica_boolean tmp657;
  static const MMC_DEFSTRINGLIT(tmp658,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].sat.dl <= 1e5, has value: ");
  modelica_string tmp659;
  modelica_metatype tmpMeta660;
  static int tmp661 = 0;
  if(!tmp661)
  {
    tmp656 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cond.Cells[5].sat.dl variable */),0.0);
    tmp657 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cond.Cells[5].sat.dl variable */),1e5);
    if(!(tmp656 && tmp657))
    {
      tmp659 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cond.Cells[5].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta660 = stringAppend(MMC_REFSTRINGLIT(tmp658),tmp659);
      {
        const char* assert_cond = "(cond.Cells[5].sat.dl >= 0.0 and cond.Cells[5].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta660));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta660));
        }
      }
      tmp661 = 1;
    }
  }
  threadData->lastEquationSolved = 2023;
}

/*
equation index: 2024
type: ALGORITHM

  assert(cond.Cells[5].sat.dv >= 0.0 and cond.Cells[5].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].sat.dv <= 1e5, has value: " + String(cond.Cells[5].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2024};
  modelica_boolean tmp662;
  modelica_boolean tmp663;
  static const MMC_DEFSTRINGLIT(tmp664,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].sat.dv <= 1e5, has value: ");
  modelica_string tmp665;
  modelica_metatype tmpMeta666;
  static int tmp667 = 0;
  if(!tmp667)
  {
    tmp662 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* cond.Cells[5].sat.dv variable */),0.0);
    tmp663 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* cond.Cells[5].sat.dv variable */),1e5);
    if(!(tmp662 && tmp663))
    {
      tmp665 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* cond.Cells[5].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta666 = stringAppend(MMC_REFSTRINGLIT(tmp664),tmp665);
      {
        const char* assert_cond = "(cond.Cells[5].sat.dv >= 0.0 and cond.Cells[5].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta666));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta666));
        }
      }
      tmp667 = 1;
    }
  }
  threadData->lastEquationSolved = 2024;
}

/*
equation index: 2025
type: ALGORITHM

  assert(cond.Cells[5].sat.psat >= 0.0 and cond.Cells[5].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].sat.psat <= 1e8, has value: " + String(cond.Cells[5].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2025};
  modelica_boolean tmp668;
  modelica_boolean tmp669;
  static const MMC_DEFSTRINGLIT(tmp670,88,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].sat.psat <= 1e8, has value: ");
  modelica_string tmp671;
  modelica_metatype tmpMeta672;
  static int tmp673 = 0;
  if(!tmp673)
  {
    tmp668 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* cond.Cells[5].sat.psat variable */),0.0);
    tmp669 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* cond.Cells[5].sat.psat variable */),1e8);
    if(!(tmp668 && tmp669))
    {
      tmp671 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* cond.Cells[5].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta672 = stringAppend(MMC_REFSTRINGLIT(tmp670),tmp671);
      {
        const char* assert_cond = "(cond.Cells[5].sat.psat >= 0.0 and cond.Cells[5].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta672));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta672));
        }
      }
      tmp673 = 1;
    }
  }
  threadData->lastEquationSolved = 2025;
}

/*
equation index: 2026
type: ALGORITHM

  assert(cond.Cells[5].sat.sl >= -1e7 and cond.Cells[5].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[5].sat.sl <= 1e7, has value: " + String(cond.Cells[5].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2026};
  modelica_boolean tmp674;
  modelica_boolean tmp675;
  static const MMC_DEFSTRINGLIT(tmp676,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[5].sat.sl <= 1e7, has value: ");
  modelica_string tmp677;
  modelica_metatype tmpMeta678;
  static int tmp679 = 0;
  if(!tmp679)
  {
    tmp674 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* cond.Cells[5].sat.sl variable */),-1e7);
    tmp675 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* cond.Cells[5].sat.sl variable */),1e7);
    if(!(tmp674 && tmp675))
    {
      tmp677 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* cond.Cells[5].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta678 = stringAppend(MMC_REFSTRINGLIT(tmp676),tmp677);
      {
        const char* assert_cond = "(cond.Cells[5].sat.sl >= -1e7 and cond.Cells[5].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta678));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta678));
        }
      }
      tmp679 = 1;
    }
  }
  threadData->lastEquationSolved = 2026;
}

/*
equation index: 2027
type: ALGORITHM

  assert(cond.Cells[5].sat.sv >= -1e7 and cond.Cells[5].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[5].sat.sv <= 1e7, has value: " + String(cond.Cells[5].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2027};
  modelica_boolean tmp680;
  modelica_boolean tmp681;
  static const MMC_DEFSTRINGLIT(tmp682,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[5].sat.sv <= 1e7, has value: ");
  modelica_string tmp683;
  modelica_metatype tmpMeta684;
  static int tmp685 = 0;
  if(!tmp685)
  {
    tmp680 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[824]] /* cond.Cells[5].sat.sv variable */),-1e7);
    tmp681 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[824]] /* cond.Cells[5].sat.sv variable */),1e7);
    if(!(tmp680 && tmp681))
    {
      tmp683 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[824]] /* cond.Cells[5].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta684 = stringAppend(MMC_REFSTRINGLIT(tmp682),tmp683);
      {
        const char* assert_cond = "(cond.Cells[5].sat.sv >= -1e7 and cond.Cells[5].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta684));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta684));
        }
      }
      tmp685 = 1;
    }
  }
  threadData->lastEquationSolved = 2027;
}

/*
equation index: 2028
type: ALGORITHM

  assert(cond.Cells[5].h >= 1e5 and cond.Cells[5].h <= 8.5e5, "Variable violating min/max constraint: 1e5 <= cond.Cells[5].h <= 8.5e5, has value: " + String(cond.Cells[5].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2028};
  modelica_boolean tmp686;
  modelica_boolean tmp687;
  static const MMC_DEFSTRINGLIT(tmp688,83,"Variable violating min/max constraint: 1e5 <= cond.Cells[5].h <= 8.5e5, has value: ");
  modelica_string tmp689;
  modelica_metatype tmpMeta690;
  static int tmp691 = 0;
  if(!tmp691)
  {
    tmp686 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */),1e5);
    tmp687 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */),8.5e5);
    if(!(tmp686 && tmp687))
    {
      tmp689 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta690 = stringAppend(MMC_REFSTRINGLIT(tmp688),tmp689);
      {
        const char* assert_cond = "(cond.Cells[5].h >= 1e5 and cond.Cells[5].h <= 8.5e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta690));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta690));
        }
      }
      tmp691 = 1;
    }
  }
  threadData->lastEquationSolved = 2028;
}

/*
equation index: 2029
type: ALGORITHM

  assert(cond.Cells[5].T >= 1.0 and cond.Cells[5].T <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[5].T <= 1e4, has value: " + String(cond.Cells[5].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2029};
  modelica_boolean tmp692;
  modelica_boolean tmp693;
  static const MMC_DEFSTRINGLIT(tmp694,81,"Variable violating min/max constraint: 1.0 <= cond.Cells[5].T <= 1e4, has value: ");
  modelica_string tmp695;
  modelica_metatype tmpMeta696;
  static int tmp697 = 0;
  if(!tmp697)
  {
    tmp692 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* cond.Cells[5].T variable */),1.0);
    tmp693 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* cond.Cells[5].T variable */),1e4);
    if(!(tmp692 && tmp693))
    {
      tmp695 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* cond.Cells[5].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta696 = stringAppend(MMC_REFSTRINGLIT(tmp694),tmp695);
      {
        const char* assert_cond = "(cond.Cells[5].T >= 1.0 and cond.Cells[5].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta696));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta696));
        }
      }
      tmp697 = 1;
    }
  }
  threadData->lastEquationSolved = 2029;
}

/*
equation index: 2030
type: ALGORITHM

  assert(cond.Cells[5].rho >= 0.0 and cond.Cells[5].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].rho <= 1e5, has value: " + String(cond.Cells[5].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2030};
  modelica_boolean tmp698;
  modelica_boolean tmp699;
  static const MMC_DEFSTRINGLIT(tmp700,83,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].rho <= 1e5, has value: ");
  modelica_string tmp701;
  modelica_metatype tmpMeta702;
  static int tmp703 = 0;
  if(!tmp703)
  {
    tmp698 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cond.Cells[5].rho variable */),0.0);
    tmp699 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cond.Cells[5].rho variable */),1e5);
    if(!(tmp698 && tmp699))
    {
      tmp701 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cond.Cells[5].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta702 = stringAppend(MMC_REFSTRINGLIT(tmp700),tmp701);
      {
        const char* assert_cond = "(cond.Cells[5].rho >= 0.0 and cond.Cells[5].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta702));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta702));
        }
      }
      tmp703 = 1;
    }
  }
  threadData->lastEquationSolved = 2030;
}

/*
equation index: 2031
type: ALGORITHM

  assert(cond.Cells[5].h_l >= -1e10 and cond.Cells[5].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[5].h_l <= 1e10, has value: " + String(cond.Cells[5].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2031};
  modelica_boolean tmp704;
  modelica_boolean tmp705;
  static const MMC_DEFSTRINGLIT(tmp706,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[5].h_l <= 1e10, has value: ");
  modelica_string tmp707;
  modelica_metatype tmpMeta708;
  static int tmp709 = 0;
  if(!tmp709)
  {
    tmp704 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cond.Cells[5].h_l variable */),-1e10);
    tmp705 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cond.Cells[5].h_l variable */),1e10);
    if(!(tmp704 && tmp705))
    {
      tmp707 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cond.Cells[5].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta708 = stringAppend(MMC_REFSTRINGLIT(tmp706),tmp707);
      {
        const char* assert_cond = "(cond.Cells[5].h_l >= -1e10 and cond.Cells[5].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta708));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta708));
        }
      }
      tmp709 = 1;
    }
  }
  threadData->lastEquationSolved = 2031;
}

/*
equation index: 2032
type: ALGORITHM

  assert(cond.Cells[5].h_v >= -1e10 and cond.Cells[5].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[5].h_v <= 1e10, has value: " + String(cond.Cells[5].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2032};
  modelica_boolean tmp710;
  modelica_boolean tmp711;
  static const MMC_DEFSTRINGLIT(tmp712,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[5].h_v <= 1e10, has value: ");
  modelica_string tmp713;
  modelica_metatype tmpMeta714;
  static int tmp715 = 0;
  if(!tmp715)
  {
    tmp710 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cond.Cells[5].h_v variable */),-1e10);
    tmp711 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cond.Cells[5].h_v variable */),1e10);
    if(!(tmp710 && tmp711))
    {
      tmp713 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cond.Cells[5].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta714 = stringAppend(MMC_REFSTRINGLIT(tmp712),tmp713);
      {
        const char* assert_cond = "(cond.Cells[5].h_v >= -1e10 and cond.Cells[5].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta714));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta714));
        }
      }
      tmp715 = 1;
    }
  }
  threadData->lastEquationSolved = 2032;
}

/*
equation index: 2033
type: ALGORITHM

  assert(cond.Cells[5].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= cond.Cells[5].M_tot, has value: " + String(cond.Cells[5].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2033};
  modelica_boolean tmp716;
  static const MMC_DEFSTRINGLIT(tmp717,74,"Variable violating min constraint: 0.0 <= cond.Cells[5].M_tot, has value: ");
  modelica_string tmp718;
  modelica_metatype tmpMeta719;
  static int tmp720 = 0;
  if(!tmp720)
  {
    tmp716 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cond.Cells[5].M_tot variable */),0.0);
    if(!tmp716)
    {
      tmp718 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cond.Cells[5].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta719 = stringAppend(MMC_REFSTRINGLIT(tmp717),tmp718);
      {
        const char* assert_cond = "(cond.Cells[5].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta719));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta719));
        }
      }
      tmp720 = 1;
    }
  }
  threadData->lastEquationSolved = 2033;
}

/*
equation index: 2034
type: ALGORITHM

  assert(txv.Mdot >= -1e5 and txv.Mdot <= 1e5, "Variable violating min/max constraint: -1e5 <= txv.Mdot <= 1e5, has value: " + String(txv.Mdot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2034};
  modelica_boolean tmp721;
  modelica_boolean tmp722;
  static const MMC_DEFSTRINGLIT(tmp723,75,"Variable violating min/max constraint: -1e5 <= txv.Mdot <= 1e5, has value: ");
  modelica_string tmp724;
  modelica_metatype tmpMeta725;
  static int tmp726 = 0;
  if(!tmp726)
  {
    tmp721 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* txv.Mdot variable */),-1e5);
    tmp722 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* txv.Mdot variable */),1e5);
    if(!(tmp721 && tmp722))
    {
      tmp724 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* txv.Mdot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta725 = stringAppend(MMC_REFSTRINGLIT(tmp723),tmp724);
      {
        const char* assert_cond = "(txv.Mdot >= -1e5 and txv.Mdot <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",42,3,42,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta725));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",42,3,42,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta725));
        }
      }
      tmp726 = 1;
    }
  }
  threadData->lastEquationSolved = 2034;
}

/*
equation index: 2035
type: ALGORITHM

  assert(txv.rho >= 0.0 and txv.rho <= 1e5, "Variable violating min/max constraint: 0.0 <= txv.rho <= 1e5, has value: " + String(txv.rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2035};
  modelica_boolean tmp727;
  modelica_boolean tmp728;
  static const MMC_DEFSTRINGLIT(tmp729,73,"Variable violating min/max constraint: 0.0 <= txv.rho <= 1e5, has value: ");
  modelica_string tmp730;
  modelica_metatype tmpMeta731;
  static int tmp732 = 0;
  if(!tmp732)
  {
    tmp727 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* txv.rho variable */),0.0);
    tmp728 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* txv.rho variable */),1e5);
    if(!(tmp727 && tmp728))
    {
      tmp730 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* txv.rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta731 = stringAppend(MMC_REFSTRINGLIT(tmp729),tmp730);
      {
        const char* assert_cond = "(txv.rho >= 0.0 and txv.rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",49,3,49,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta731));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",49,3,49,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta731));
        }
      }
      tmp732 = 1;
    }
  }
  threadData->lastEquationSolved = 2035;
}

/*
equation index: 2036
type: ALGORITHM

  assert(evap.Wall_int.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= evap.Wall_int.T[1], has value: " + String(evap.Wall_int.T[1], "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2036};
  modelica_boolean tmp733;
  static const MMC_DEFSTRINGLIT(tmp734,73,"Variable violating min constraint: 0.0 <= evap.Wall_int.T[1], has value: ");
  modelica_string tmp735;
  modelica_metatype tmpMeta736;
  static int tmp737 = 0;
  if(!tmp737)
  {
    tmp733 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* evap.Wall_int.T[1] variable */),0.0);
    if(!tmp733)
    {
      tmp735 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* evap.Wall_int.T[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta736 = stringAppend(MMC_REFSTRINGLIT(tmp734),tmp735);
      {
        const char* assert_cond = "(evap.Wall_int.T[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta736));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta736));
        }
      }
      tmp737 = 1;
    }
  }
  threadData->lastEquationSolved = 2036;
}

/*
equation index: 2037
type: ALGORITHM

  assert(evap.Wall_int.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= evap.Wall_int.T[2], has value: " + String(evap.Wall_int.T[2], "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2037};
  modelica_boolean tmp738;
  static const MMC_DEFSTRINGLIT(tmp739,73,"Variable violating min constraint: 0.0 <= evap.Wall_int.T[2], has value: ");
  modelica_string tmp740;
  modelica_metatype tmpMeta741;
  static int tmp742 = 0;
  if(!tmp742)
  {
    tmp738 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* evap.Wall_int.T[2] variable */),0.0);
    if(!tmp738)
    {
      tmp740 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* evap.Wall_int.T[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta741 = stringAppend(MMC_REFSTRINGLIT(tmp739),tmp740);
      {
        const char* assert_cond = "(evap.Wall_int.T[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta741));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta741));
        }
      }
      tmp742 = 1;
    }
  }
  threadData->lastEquationSolved = 2037;
}

/*
equation index: 2038
type: ALGORITHM

  assert(evap.Wall_int.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= evap.Wall_int.T[3], has value: " + String(evap.Wall_int.T[3], "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2038};
  modelica_boolean tmp743;
  static const MMC_DEFSTRINGLIT(tmp744,73,"Variable violating min constraint: 0.0 <= evap.Wall_int.T[3], has value: ");
  modelica_string tmp745;
  modelica_metatype tmpMeta746;
  static int tmp747 = 0;
  if(!tmp747)
  {
    tmp743 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* evap.Wall_int.T[3] variable */),0.0);
    if(!tmp743)
    {
      tmp745 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* evap.Wall_int.T[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta746 = stringAppend(MMC_REFSTRINGLIT(tmp744),tmp745);
      {
        const char* assert_cond = "(evap.Wall_int.T[3] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta746));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta746));
        }
      }
      tmp747 = 1;
    }
  }
  threadData->lastEquationSolved = 2038;
}

/*
equation index: 2039
type: ALGORITHM

  assert(evap.Wall_int.T[4] >= 0.0, "Variable violating min constraint: 0.0 <= evap.Wall_int.T[4], has value: " + String(evap.Wall_int.T[4], "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2039};
  modelica_boolean tmp748;
  static const MMC_DEFSTRINGLIT(tmp749,73,"Variable violating min constraint: 0.0 <= evap.Wall_int.T[4], has value: ");
  modelica_string tmp750;
  modelica_metatype tmpMeta751;
  static int tmp752 = 0;
  if(!tmp752)
  {
    tmp748 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* evap.Wall_int.T[4] variable */),0.0);
    if(!tmp748)
    {
      tmp750 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* evap.Wall_int.T[4] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta751 = stringAppend(MMC_REFSTRINGLIT(tmp749),tmp750);
      {
        const char* assert_cond = "(evap.Wall_int.T[4] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta751));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta751));
        }
      }
      tmp752 = 1;
    }
  }
  threadData->lastEquationSolved = 2039;
}

/*
equation index: 2040
type: ALGORITHM

  assert(evap.Wall_int.T[5] >= 0.0, "Variable violating min constraint: 0.0 <= evap.Wall_int.T[5], has value: " + String(evap.Wall_int.T[5], "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2040};
  modelica_boolean tmp753;
  static const MMC_DEFSTRINGLIT(tmp754,73,"Variable violating min constraint: 0.0 <= evap.Wall_int.T[5], has value: ");
  modelica_string tmp755;
  modelica_metatype tmpMeta756;
  static int tmp757 = 0;
  if(!tmp757)
  {
    tmp753 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* evap.Wall_int.T[5] variable */),0.0);
    if(!tmp753)
    {
      tmp755 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* evap.Wall_int.T[5] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta756 = stringAppend(MMC_REFSTRINGLIT(tmp754),tmp755);
      {
        const char* assert_cond = "(evap.Wall_int.T[5] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta756));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/HeatTransfer/ThermalPort.mo",4,3,4,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta756));
        }
      }
      tmp757 = 1;
    }
  }
  threadData->lastEquationSolved = 2040;
}

/*
equation index: 2041
type: ALGORITHM

  assert(evap.M_tot >= 0.0, "Variable violating min constraint: 0.0 <= evap.M_tot, has value: " + String(evap.M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2041};
  modelica_boolean tmp758;
  static const MMC_DEFSTRINGLIT(tmp759,65,"Variable violating min constraint: 0.0 <= evap.M_tot, has value: ");
  modelica_string tmp760;
  modelica_metatype tmpMeta761;
  static int tmp762 = 0;
  if(!tmp762)
  {
    tmp758 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* evap.M_tot variable */),0.0);
    if(!tmp758)
    {
      tmp760 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* evap.M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta761 = stringAppend(MMC_REFSTRINGLIT(tmp759),tmp760);
      {
        const char* assert_cond = "(evap.M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",103,3,103,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta761));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",103,3,103,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta761));
        }
      }
      tmp762 = 1;
    }
  }
  threadData->lastEquationSolved = 2041;
}

/*
equation index: 2042
type: ALGORITHM

  assert(evap.Cells[1].fluidState.a >= 0.0 and evap.Cells[1].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.a <= 1e5, has value: " + String(evap.Cells[1].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2042};
  modelica_boolean tmp763;
  modelica_boolean tmp764;
  static const MMC_DEFSTRINGLIT(tmp765,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.a <= 1e5, has value: ");
  modelica_string tmp766;
  modelica_metatype tmpMeta767;
  static int tmp768 = 0;
  if(!tmp768)
  {
    tmp763 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[953]] /* evap.Cells[1].fluidState.a variable */),0.0);
    tmp764 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[953]] /* evap.Cells[1].fluidState.a variable */),1e5);
    if(!(tmp763 && tmp764))
    {
      tmp766 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[953]] /* evap.Cells[1].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta767 = stringAppend(MMC_REFSTRINGLIT(tmp765),tmp766);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.a >= 0.0 and evap.Cells[1].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta767));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta767));
        }
      }
      tmp768 = 1;
    }
  }
  threadData->lastEquationSolved = 2042;
}

/*
equation index: 2043
type: ALGORITHM

  assert(evap.Cells[1].fluidState.cp >= 0.0 and evap.Cells[1].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.cp <= 1e7, has value: " + String(evap.Cells[1].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2043};
  modelica_boolean tmp769;
  modelica_boolean tmp770;
  static const MMC_DEFSTRINGLIT(tmp771,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp772;
  modelica_metatype tmpMeta773;
  static int tmp774 = 0;
  if(!tmp774)
  {
    tmp769 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* evap.Cells[1].fluidState.cp variable */),0.0);
    tmp770 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* evap.Cells[1].fluidState.cp variable */),1e7);
    if(!(tmp769 && tmp770))
    {
      tmp772 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* evap.Cells[1].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta773 = stringAppend(MMC_REFSTRINGLIT(tmp771),tmp772);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.cp >= 0.0 and evap.Cells[1].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta773));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta773));
        }
      }
      tmp774 = 1;
    }
  }
  threadData->lastEquationSolved = 2043;
}

/*
equation index: 2044
type: ALGORITHM

  assert(evap.Cells[1].fluidState.cv >= 0.0 and evap.Cells[1].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.cv <= 1e7, has value: " + String(evap.Cells[1].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2044};
  modelica_boolean tmp775;
  modelica_boolean tmp776;
  static const MMC_DEFSTRINGLIT(tmp777,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp778;
  modelica_metatype tmpMeta779;
  static int tmp780 = 0;
  if(!tmp780)
  {
    tmp775 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* evap.Cells[1].fluidState.cv variable */),0.0);
    tmp776 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* evap.Cells[1].fluidState.cv variable */),1e7);
    if(!(tmp775 && tmp776))
    {
      tmp778 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* evap.Cells[1].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta779 = stringAppend(MMC_REFSTRINGLIT(tmp777),tmp778);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.cv >= 0.0 and evap.Cells[1].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta779));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta779));
        }
      }
      tmp780 = 1;
    }
  }
  threadData->lastEquationSolved = 2044;
}

/*
equation index: 2045
type: ALGORITHM

  assert(evap.Cells[1].fluidState.eta >= 0.0 and evap.Cells[1].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.eta <= 1e8, has value: " + String(evap.Cells[1].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2045};
  modelica_boolean tmp781;
  modelica_boolean tmp782;
  static const MMC_DEFSTRINGLIT(tmp783,94,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp784;
  modelica_metatype tmpMeta785;
  static int tmp786 = 0;
  if(!tmp786)
  {
    tmp781 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[973]] /* evap.Cells[1].fluidState.eta variable */),0.0);
    tmp782 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[973]] /* evap.Cells[1].fluidState.eta variable */),1e8);
    if(!(tmp781 && tmp782))
    {
      tmp784 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[973]] /* evap.Cells[1].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta785 = stringAppend(MMC_REFSTRINGLIT(tmp783),tmp784);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.eta >= 0.0 and evap.Cells[1].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta785));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta785));
        }
      }
      tmp786 = 1;
    }
  }
  threadData->lastEquationSolved = 2045;
}

/*
equation index: 2046
type: ALGORITHM

  assert(evap.Cells[1].fluidState.h >= -1e10 and evap.Cells[1].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[1].fluidState.h <= 1e10, has value: " + String(evap.Cells[1].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2046};
  modelica_boolean tmp787;
  modelica_boolean tmp788;
  static const MMC_DEFSTRINGLIT(tmp789,95,"Variable violating min/max constraint: -1e10 <= evap.Cells[1].fluidState.h <= 1e10, has value: ");
  modelica_string tmp790;
  modelica_metatype tmpMeta791;
  static int tmp792 = 0;
  if(!tmp792)
  {
    tmp787 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[978]] /* evap.Cells[1].fluidState.h variable */),-1e10);
    tmp788 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[978]] /* evap.Cells[1].fluidState.h variable */),1e10);
    if(!(tmp787 && tmp788))
    {
      tmp790 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[978]] /* evap.Cells[1].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta791 = stringAppend(MMC_REFSTRINGLIT(tmp789),tmp790);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.h >= -1e10 and evap.Cells[1].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta791));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta791));
        }
      }
      tmp792 = 1;
    }
  }
  threadData->lastEquationSolved = 2046;
}

/*
equation index: 2047
type: ALGORITHM

  assert(evap.Cells[1].fluidState.lambda >= 0.0 and evap.Cells[1].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.lambda <= 500.0, has value: " + String(evap.Cells[1].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2047};
  modelica_boolean tmp793;
  modelica_boolean tmp794;
  static const MMC_DEFSTRINGLIT(tmp795,99,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp796;
  modelica_metatype tmpMeta797;
  static int tmp798 = 0;
  if(!tmp798)
  {
    tmp793 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* evap.Cells[1].fluidState.lambda variable */),0.0);
    tmp794 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* evap.Cells[1].fluidState.lambda variable */),500.0);
    if(!(tmp793 && tmp794))
    {
      tmp796 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* evap.Cells[1].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta797 = stringAppend(MMC_REFSTRINGLIT(tmp795),tmp796);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.lambda >= 0.0 and evap.Cells[1].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta797));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta797));
        }
      }
      tmp798 = 1;
    }
  }
  threadData->lastEquationSolved = 2047;
}

/*
equation index: 2048
type: ALGORITHM

  assert(evap.Cells[1].fluidState.p >= 0.0 and evap.Cells[1].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.p <= 1e8, has value: " + String(evap.Cells[1].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2048};
  modelica_boolean tmp799;
  modelica_boolean tmp800;
  static const MMC_DEFSTRINGLIT(tmp801,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.p <= 1e8, has value: ");
  modelica_string tmp802;
  modelica_metatype tmpMeta803;
  static int tmp804 = 0;
  if(!tmp804)
  {
    tmp799 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* evap.Cells[1].fluidState.p variable */),0.0);
    tmp800 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* evap.Cells[1].fluidState.p variable */),1e8);
    if(!(tmp799 && tmp800))
    {
      tmp802 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* evap.Cells[1].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta803 = stringAppend(MMC_REFSTRINGLIT(tmp801),tmp802);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.p >= 0.0 and evap.Cells[1].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta803));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta803));
        }
      }
      tmp804 = 1;
    }
  }
  threadData->lastEquationSolved = 2048;
}

/*
equation index: 2049
type: ALGORITHM

  assert(evap.Cells[1].fluidState.phase >= 0 and evap.Cells[1].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= evap.Cells[1].fluidState.phase <= 2, has value: " + String(evap.Cells[1].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2049};
  modelica_boolean tmp805;
  modelica_boolean tmp806;
  static const MMC_DEFSTRINGLIT(tmp807,92,"Variable violating min/max constraint: 0 <= evap.Cells[1].fluidState.phase <= 2, has value: ");
  modelica_string tmp808;
  modelica_metatype tmpMeta809;
  static int tmp810 = 0;
  if(!tmp810)
  {
    tmp805 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[25]] /* evap.Cells[1].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp806 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[25]] /* evap.Cells[1].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp805 && tmp806))
    {
      tmp808 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[25]] /* evap.Cells[1].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta809 = stringAppend(MMC_REFSTRINGLIT(tmp807),tmp808);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.phase >= 0 and evap.Cells[1].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta809));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta809));
        }
      }
      tmp810 = 1;
    }
  }
  threadData->lastEquationSolved = 2049;
}

/*
equation index: 2050
type: ALGORITHM

  assert(evap.Cells[1].fluidState.s >= -1e7 and evap.Cells[1].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[1].fluidState.s <= 1e7, has value: " + String(evap.Cells[1].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2050};
  modelica_boolean tmp811;
  modelica_boolean tmp812;
  static const MMC_DEFSTRINGLIT(tmp813,93,"Variable violating min/max constraint: -1e7 <= evap.Cells[1].fluidState.s <= 1e7, has value: ");
  modelica_string tmp814;
  modelica_metatype tmpMeta815;
  static int tmp816 = 0;
  if(!tmp816)
  {
    tmp811 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[1].fluidState.s variable */),-1e7);
    tmp812 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[1].fluidState.s variable */),1e7);
    if(!(tmp811 && tmp812))
    {
      tmp814 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* evap.Cells[1].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta815 = stringAppend(MMC_REFSTRINGLIT(tmp813),tmp814);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.s >= -1e7 and evap.Cells[1].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta815));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta815));
        }
      }
      tmp816 = 1;
    }
  }
  threadData->lastEquationSolved = 2050;
}

/*
equation index: 2051
type: ALGORITHM

  assert(evap.Cells[1].sat.Tsat >= 1.0 and evap.Cells[1].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[1].sat.Tsat <= 1e4, has value: " + String(evap.Cells[1].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2051};
  modelica_boolean tmp817;
  modelica_boolean tmp818;
  static const MMC_DEFSTRINGLIT(tmp819,88,"Variable violating min/max constraint: 1.0 <= evap.Cells[1].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp820;
  modelica_metatype tmpMeta821;
  static int tmp822 = 0;
  if(!tmp822)
  {
    tmp817 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1038]] /* evap.Cells[1].sat.Tsat variable */),1.0);
    tmp818 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1038]] /* evap.Cells[1].sat.Tsat variable */),1e4);
    if(!(tmp817 && tmp818))
    {
      tmp820 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1038]] /* evap.Cells[1].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta821 = stringAppend(MMC_REFSTRINGLIT(tmp819),tmp820);
      {
        const char* assert_cond = "(evap.Cells[1].sat.Tsat >= 1.0 and evap.Cells[1].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta821));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta821));
        }
      }
      tmp822 = 1;
    }
  }
  threadData->lastEquationSolved = 2051;
}

/*
equation index: 2052
type: ALGORITHM

  assert(evap.Cells[1].sat.dl >= 0.0 and evap.Cells[1].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].sat.dl <= 1e5, has value: " + String(evap.Cells[1].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2052};
  modelica_boolean tmp823;
  modelica_boolean tmp824;
  static const MMC_DEFSTRINGLIT(tmp825,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].sat.dl <= 1e5, has value: ");
  modelica_string tmp826;
  modelica_metatype tmpMeta827;
  static int tmp828 = 0;
  if(!tmp828)
  {
    tmp823 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1068]] /* evap.Cells[1].sat.dl variable */),0.0);
    tmp824 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1068]] /* evap.Cells[1].sat.dl variable */),1e5);
    if(!(tmp823 && tmp824))
    {
      tmp826 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1068]] /* evap.Cells[1].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta827 = stringAppend(MMC_REFSTRINGLIT(tmp825),tmp826);
      {
        const char* assert_cond = "(evap.Cells[1].sat.dl >= 0.0 and evap.Cells[1].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta827));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta827));
        }
      }
      tmp828 = 1;
    }
  }
  threadData->lastEquationSolved = 2052;
}

/*
equation index: 2053
type: ALGORITHM

  assert(evap.Cells[1].sat.dv >= 0.0 and evap.Cells[1].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].sat.dv <= 1e5, has value: " + String(evap.Cells[1].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2053};
  modelica_boolean tmp829;
  modelica_boolean tmp830;
  static const MMC_DEFSTRINGLIT(tmp831,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].sat.dv <= 1e5, has value: ");
  modelica_string tmp832;
  modelica_metatype tmpMeta833;
  static int tmp834 = 0;
  if(!tmp834)
  {
    tmp829 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* evap.Cells[1].sat.dv variable */),0.0);
    tmp830 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* evap.Cells[1].sat.dv variable */),1e5);
    if(!(tmp829 && tmp830))
    {
      tmp832 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* evap.Cells[1].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta833 = stringAppend(MMC_REFSTRINGLIT(tmp831),tmp832);
      {
        const char* assert_cond = "(evap.Cells[1].sat.dv >= 0.0 and evap.Cells[1].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta833));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta833));
        }
      }
      tmp834 = 1;
    }
  }
  threadData->lastEquationSolved = 2053;
}

/*
equation index: 2054
type: ALGORITHM

  assert(evap.Cells[1].sat.psat >= 0.0 and evap.Cells[1].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].sat.psat <= 1e8, has value: " + String(evap.Cells[1].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2054};
  modelica_boolean tmp835;
  modelica_boolean tmp836;
  static const MMC_DEFSTRINGLIT(tmp837,88,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].sat.psat <= 1e8, has value: ");
  modelica_string tmp838;
  modelica_metatype tmpMeta839;
  static int tmp840 = 0;
  if(!tmp840)
  {
    tmp835 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* evap.Cells[1].sat.psat variable */),0.0);
    tmp836 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* evap.Cells[1].sat.psat variable */),1e8);
    if(!(tmp835 && tmp836))
    {
      tmp838 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* evap.Cells[1].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta839 = stringAppend(MMC_REFSTRINGLIT(tmp837),tmp838);
      {
        const char* assert_cond = "(evap.Cells[1].sat.psat >= 0.0 and evap.Cells[1].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta839));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta839));
        }
      }
      tmp840 = 1;
    }
  }
  threadData->lastEquationSolved = 2054;
}

/*
equation index: 2055
type: ALGORITHM

  assert(evap.Cells[1].sat.sl >= -1e7 and evap.Cells[1].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[1].sat.sl <= 1e7, has value: " + String(evap.Cells[1].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2055};
  modelica_boolean tmp841;
  modelica_boolean tmp842;
  static const MMC_DEFSTRINGLIT(tmp843,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[1].sat.sl <= 1e7, has value: ");
  modelica_string tmp844;
  modelica_metatype tmpMeta845;
  static int tmp846 = 0;
  if(!tmp846)
  {
    tmp841 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* evap.Cells[1].sat.sl variable */),-1e7);
    tmp842 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* evap.Cells[1].sat.sl variable */),1e7);
    if(!(tmp841 && tmp842))
    {
      tmp844 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* evap.Cells[1].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta845 = stringAppend(MMC_REFSTRINGLIT(tmp843),tmp844);
      {
        const char* assert_cond = "(evap.Cells[1].sat.sl >= -1e7 and evap.Cells[1].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta845));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta845));
        }
      }
      tmp846 = 1;
    }
  }
  threadData->lastEquationSolved = 2055;
}

/*
equation index: 2056
type: ALGORITHM

  assert(evap.Cells[1].sat.sv >= -1e7 and evap.Cells[1].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[1].sat.sv <= 1e7, has value: " + String(evap.Cells[1].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2056};
  modelica_boolean tmp847;
  modelica_boolean tmp848;
  static const MMC_DEFSTRINGLIT(tmp849,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[1].sat.sv <= 1e7, has value: ");
  modelica_string tmp850;
  modelica_metatype tmpMeta851;
  static int tmp852 = 0;
  if(!tmp852)
  {
    tmp847 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* evap.Cells[1].sat.sv variable */),-1e7);
    tmp848 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* evap.Cells[1].sat.sv variable */),1e7);
    if(!(tmp847 && tmp848))
    {
      tmp850 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* evap.Cells[1].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta851 = stringAppend(MMC_REFSTRINGLIT(tmp849),tmp850);
      {
        const char* assert_cond = "(evap.Cells[1].sat.sv >= -1e7 and evap.Cells[1].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta851));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta851));
        }
      }
      tmp852 = 1;
    }
  }
  threadData->lastEquationSolved = 2056;
}

/*
equation index: 2057
type: ALGORITHM

  assert(evap.Cells[1].h >= 1e5 and evap.Cells[1].h <= 8.5e5, "Variable violating min/max constraint: 1e5 <= evap.Cells[1].h <= 8.5e5, has value: " + String(evap.Cells[1].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2057};
  modelica_boolean tmp853;
  modelica_boolean tmp854;
  static const MMC_DEFSTRINGLIT(tmp855,83,"Variable violating min/max constraint: 1e5 <= evap.Cells[1].h <= 8.5e5, has value: ");
  modelica_string tmp856;
  modelica_metatype tmpMeta857;
  static int tmp858 = 0;
  if(!tmp858)
  {
    tmp853 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */),1e5);
    tmp854 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */),8.5e5);
    if(!(tmp853 && tmp854))
    {
      tmp856 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta857 = stringAppend(MMC_REFSTRINGLIT(tmp855),tmp856);
      {
        const char* assert_cond = "(evap.Cells[1].h >= 1e5 and evap.Cells[1].h <= 8.5e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta857));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta857));
        }
      }
      tmp858 = 1;
    }
  }
  threadData->lastEquationSolved = 2057;
}

/*
equation index: 2058
type: ALGORITHM

  assert(evap.Cells[1].T >= 1.0 and evap.Cells[1].T <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[1].T <= 1e4, has value: " + String(evap.Cells[1].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2058};
  modelica_boolean tmp859;
  modelica_boolean tmp860;
  static const MMC_DEFSTRINGLIT(tmp861,81,"Variable violating min/max constraint: 1.0 <= evap.Cells[1].T <= 1e4, has value: ");
  modelica_string tmp862;
  modelica_metatype tmpMeta863;
  static int tmp864 = 0;
  if(!tmp864)
  {
    tmp859 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[933]] /* evap.Cells[1].T variable */),1.0);
    tmp860 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[933]] /* evap.Cells[1].T variable */),1e4);
    if(!(tmp859 && tmp860))
    {
      tmp862 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[933]] /* evap.Cells[1].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta863 = stringAppend(MMC_REFSTRINGLIT(tmp861),tmp862);
      {
        const char* assert_cond = "(evap.Cells[1].T >= 1.0 and evap.Cells[1].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta863));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta863));
        }
      }
      tmp864 = 1;
    }
  }
  threadData->lastEquationSolved = 2058;
}

/*
equation index: 2059
type: ALGORITHM

  assert(evap.Cells[1].rho >= 0.0 and evap.Cells[1].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].rho <= 1e5, has value: " + String(evap.Cells[1].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2059};
  modelica_boolean tmp865;
  modelica_boolean tmp866;
  static const MMC_DEFSTRINGLIT(tmp867,83,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].rho <= 1e5, has value: ");
  modelica_string tmp868;
  modelica_metatype tmpMeta869;
  static int tmp870 = 0;
  if(!tmp870)
  {
    tmp865 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* evap.Cells[1].rho variable */),0.0);
    tmp866 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* evap.Cells[1].rho variable */),1e5);
    if(!(tmp865 && tmp866))
    {
      tmp868 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* evap.Cells[1].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta869 = stringAppend(MMC_REFSTRINGLIT(tmp867),tmp868);
      {
        const char* assert_cond = "(evap.Cells[1].rho >= 0.0 and evap.Cells[1].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta869));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta869));
        }
      }
      tmp870 = 1;
    }
  }
  threadData->lastEquationSolved = 2059;
}

/*
equation index: 2060
type: ALGORITHM

  assert(evap.Cells[1].h_l >= -1e10 and evap.Cells[1].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[1].h_l <= 1e10, has value: " + String(evap.Cells[1].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2060};
  modelica_boolean tmp871;
  modelica_boolean tmp872;
  static const MMC_DEFSTRINGLIT(tmp873,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[1].h_l <= 1e10, has value: ");
  modelica_string tmp874;
  modelica_metatype tmpMeta875;
  static int tmp876 = 0;
  if(!tmp876)
  {
    tmp871 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1003]] /* evap.Cells[1].h_l variable */),-1e10);
    tmp872 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1003]] /* evap.Cells[1].h_l variable */),1e10);
    if(!(tmp871 && tmp872))
    {
      tmp874 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1003]] /* evap.Cells[1].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta875 = stringAppend(MMC_REFSTRINGLIT(tmp873),tmp874);
      {
        const char* assert_cond = "(evap.Cells[1].h_l >= -1e10 and evap.Cells[1].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta875));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta875));
        }
      }
      tmp876 = 1;
    }
  }
  threadData->lastEquationSolved = 2060;
}

/*
equation index: 2061
type: ALGORITHM

  assert(evap.Cells[1].h_v >= -1e10 and evap.Cells[1].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[1].h_v <= 1e10, has value: " + String(evap.Cells[1].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2061};
  modelica_boolean tmp877;
  modelica_boolean tmp878;
  static const MMC_DEFSTRINGLIT(tmp879,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[1].h_v <= 1e10, has value: ");
  modelica_string tmp880;
  modelica_metatype tmpMeta881;
  static int tmp882 = 0;
  if(!tmp882)
  {
    tmp877 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* evap.Cells[1].h_v variable */),-1e10);
    tmp878 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* evap.Cells[1].h_v variable */),1e10);
    if(!(tmp877 && tmp878))
    {
      tmp880 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* evap.Cells[1].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta881 = stringAppend(MMC_REFSTRINGLIT(tmp879),tmp880);
      {
        const char* assert_cond = "(evap.Cells[1].h_v >= -1e10 and evap.Cells[1].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta881));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta881));
        }
      }
      tmp882 = 1;
    }
  }
  threadData->lastEquationSolved = 2061;
}

/*
equation index: 2062
type: ALGORITHM

  assert(evap.Cells[1].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= evap.Cells[1].M_tot, has value: " + String(evap.Cells[1].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2062};
  modelica_boolean tmp883;
  static const MMC_DEFSTRINGLIT(tmp884,74,"Variable violating min constraint: 0.0 <= evap.Cells[1].M_tot, has value: ");
  modelica_string tmp885;
  modelica_metatype tmpMeta886;
  static int tmp887 = 0;
  if(!tmp887)
  {
    tmp883 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[923]] /* evap.Cells[1].M_tot variable */),0.0);
    if(!tmp883)
    {
      tmp885 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[923]] /* evap.Cells[1].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta886 = stringAppend(MMC_REFSTRINGLIT(tmp884),tmp885);
      {
        const char* assert_cond = "(evap.Cells[1].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta886));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta886));
        }
      }
      tmp887 = 1;
    }
  }
  threadData->lastEquationSolved = 2062;
}

/*
equation index: 2063
type: ALGORITHM

  assert(evap.Cells[2].InFlow.m_flow >= -1e5 and evap.Cells[2].InFlow.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= evap.Cells[2].InFlow.m_flow <= 1e5, has value: " + String(evap.Cells[2].InFlow.m_flow, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2063};
  modelica_boolean tmp888;
  modelica_boolean tmp889;
  static const MMC_DEFSTRINGLIT(tmp890,94,"Variable violating min/max constraint: -1e5 <= evap.Cells[2].InFlow.m_flow <= 1e5, has value: ");
  modelica_string tmp891;
  modelica_metatype tmpMeta892;
  static int tmp893 = 0;
  if(!tmp893)
  {
    tmp888 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* evap.Cells[2].InFlow.m_flow variable */),-1e5);
    tmp889 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* evap.Cells[2].InFlow.m_flow variable */),1e5);
    if(!(tmp888 && tmp889))
    {
      tmp891 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* evap.Cells[2].InFlow.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta892 = stringAppend(MMC_REFSTRINGLIT(tmp890),tmp891);
      {
        const char* assert_cond = "(evap.Cells[2].InFlow.m_flow >= -1e5 and evap.Cells[2].InFlow.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta892));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta892));
        }
      }
      tmp893 = 1;
    }
  }
  threadData->lastEquationSolved = 2063;
}

/*
equation index: 2064
type: ALGORITHM

  assert(evap.Cells[2].fluidState.a >= 0.0 and evap.Cells[2].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.a <= 1e5, has value: " + String(evap.Cells[2].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2064};
  modelica_boolean tmp894;
  modelica_boolean tmp895;
  static const MMC_DEFSTRINGLIT(tmp896,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.a <= 1e5, has value: ");
  modelica_string tmp897;
  modelica_metatype tmpMeta898;
  static int tmp899 = 0;
  if(!tmp899)
  {
    tmp894 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* evap.Cells[2].fluidState.a variable */),0.0);
    tmp895 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* evap.Cells[2].fluidState.a variable */),1e5);
    if(!(tmp894 && tmp895))
    {
      tmp897 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* evap.Cells[2].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta898 = stringAppend(MMC_REFSTRINGLIT(tmp896),tmp897);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.a >= 0.0 and evap.Cells[2].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta898));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta898));
        }
      }
      tmp899 = 1;
    }
  }
  threadData->lastEquationSolved = 2064;
}

/*
equation index: 2065
type: ALGORITHM

  assert(evap.Cells[2].fluidState.cp >= 0.0 and evap.Cells[2].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.cp <= 1e7, has value: " + String(evap.Cells[2].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2065};
  modelica_boolean tmp900;
  modelica_boolean tmp901;
  static const MMC_DEFSTRINGLIT(tmp902,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp903;
  modelica_metatype tmpMeta904;
  static int tmp905 = 0;
  if(!tmp905)
  {
    tmp900 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* evap.Cells[2].fluidState.cp variable */),0.0);
    tmp901 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* evap.Cells[2].fluidState.cp variable */),1e7);
    if(!(tmp900 && tmp901))
    {
      tmp903 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* evap.Cells[2].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta904 = stringAppend(MMC_REFSTRINGLIT(tmp902),tmp903);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.cp >= 0.0 and evap.Cells[2].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta904));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta904));
        }
      }
      tmp905 = 1;
    }
  }
  threadData->lastEquationSolved = 2065;
}

/*
equation index: 2066
type: ALGORITHM

  assert(evap.Cells[2].fluidState.cv >= 0.0 and evap.Cells[2].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.cv <= 1e7, has value: " + String(evap.Cells[2].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2066};
  modelica_boolean tmp906;
  modelica_boolean tmp907;
  static const MMC_DEFSTRINGLIT(tmp908,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp909;
  modelica_metatype tmpMeta910;
  static int tmp911 = 0;
  if(!tmp911)
  {
    tmp906 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* evap.Cells[2].fluidState.cv variable */),0.0);
    tmp907 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* evap.Cells[2].fluidState.cv variable */),1e7);
    if(!(tmp906 && tmp907))
    {
      tmp909 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* evap.Cells[2].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta910 = stringAppend(MMC_REFSTRINGLIT(tmp908),tmp909);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.cv >= 0.0 and evap.Cells[2].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta910));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta910));
        }
      }
      tmp911 = 1;
    }
  }
  threadData->lastEquationSolved = 2066;
}

/*
equation index: 2067
type: ALGORITHM

  assert(evap.Cells[2].fluidState.eta >= 0.0 and evap.Cells[2].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.eta <= 1e8, has value: " + String(evap.Cells[2].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2067};
  modelica_boolean tmp912;
  modelica_boolean tmp913;
  static const MMC_DEFSTRINGLIT(tmp914,94,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp915;
  modelica_metatype tmpMeta916;
  static int tmp917 = 0;
  if(!tmp917)
  {
    tmp912 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* evap.Cells[2].fluidState.eta variable */),0.0);
    tmp913 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* evap.Cells[2].fluidState.eta variable */),1e8);
    if(!(tmp912 && tmp913))
    {
      tmp915 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* evap.Cells[2].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta916 = stringAppend(MMC_REFSTRINGLIT(tmp914),tmp915);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.eta >= 0.0 and evap.Cells[2].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta916));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta916));
        }
      }
      tmp917 = 1;
    }
  }
  threadData->lastEquationSolved = 2067;
}

/*
equation index: 2068
type: ALGORITHM

  assert(evap.Cells[2].fluidState.h >= -1e10 and evap.Cells[2].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[2].fluidState.h <= 1e10, has value: " + String(evap.Cells[2].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2068};
  modelica_boolean tmp918;
  modelica_boolean tmp919;
  static const MMC_DEFSTRINGLIT(tmp920,95,"Variable violating min/max constraint: -1e10 <= evap.Cells[2].fluidState.h <= 1e10, has value: ");
  modelica_string tmp921;
  modelica_metatype tmpMeta922;
  static int tmp923 = 0;
  if(!tmp923)
  {
    tmp918 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[979]] /* evap.Cells[2].fluidState.h variable */),-1e10);
    tmp919 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[979]] /* evap.Cells[2].fluidState.h variable */),1e10);
    if(!(tmp918 && tmp919))
    {
      tmp921 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[979]] /* evap.Cells[2].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta922 = stringAppend(MMC_REFSTRINGLIT(tmp920),tmp921);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.h >= -1e10 and evap.Cells[2].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta922));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta922));
        }
      }
      tmp923 = 1;
    }
  }
  threadData->lastEquationSolved = 2068;
}

/*
equation index: 2069
type: ALGORITHM

  assert(evap.Cells[2].fluidState.lambda >= 0.0 and evap.Cells[2].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.lambda <= 500.0, has value: " + String(evap.Cells[2].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2069};
  modelica_boolean tmp924;
  modelica_boolean tmp925;
  static const MMC_DEFSTRINGLIT(tmp926,99,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp927;
  modelica_metatype tmpMeta928;
  static int tmp929 = 0;
  if(!tmp929)
  {
    tmp924 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* evap.Cells[2].fluidState.lambda variable */),0.0);
    tmp925 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* evap.Cells[2].fluidState.lambda variable */),500.0);
    if(!(tmp924 && tmp925))
    {
      tmp927 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* evap.Cells[2].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta928 = stringAppend(MMC_REFSTRINGLIT(tmp926),tmp927);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.lambda >= 0.0 and evap.Cells[2].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta928));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta928));
        }
      }
      tmp929 = 1;
    }
  }
  threadData->lastEquationSolved = 2069;
}

/*
equation index: 2070
type: ALGORITHM

  assert(evap.Cells[2].fluidState.p >= 0.0 and evap.Cells[2].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.p <= 1e8, has value: " + String(evap.Cells[2].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2070};
  modelica_boolean tmp930;
  modelica_boolean tmp931;
  static const MMC_DEFSTRINGLIT(tmp932,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.p <= 1e8, has value: ");
  modelica_string tmp933;
  modelica_metatype tmpMeta934;
  static int tmp935 = 0;
  if(!tmp935)
  {
    tmp930 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* evap.Cells[2].fluidState.p variable */),0.0);
    tmp931 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* evap.Cells[2].fluidState.p variable */),1e8);
    if(!(tmp930 && tmp931))
    {
      tmp933 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* evap.Cells[2].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta934 = stringAppend(MMC_REFSTRINGLIT(tmp932),tmp933);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.p >= 0.0 and evap.Cells[2].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta934));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta934));
        }
      }
      tmp935 = 1;
    }
  }
  threadData->lastEquationSolved = 2070;
}

/*
equation index: 2071
type: ALGORITHM

  assert(evap.Cells[2].fluidState.phase >= 0 and evap.Cells[2].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= evap.Cells[2].fluidState.phase <= 2, has value: " + String(evap.Cells[2].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2071};
  modelica_boolean tmp936;
  modelica_boolean tmp937;
  static const MMC_DEFSTRINGLIT(tmp938,92,"Variable violating min/max constraint: 0 <= evap.Cells[2].fluidState.phase <= 2, has value: ");
  modelica_string tmp939;
  modelica_metatype tmpMeta940;
  static int tmp941 = 0;
  if(!tmp941)
  {
    tmp936 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* evap.Cells[2].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp937 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* evap.Cells[2].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp936 && tmp937))
    {
      tmp939 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* evap.Cells[2].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta940 = stringAppend(MMC_REFSTRINGLIT(tmp938),tmp939);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.phase >= 0 and evap.Cells[2].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta940));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta940));
        }
      }
      tmp941 = 1;
    }
  }
  threadData->lastEquationSolved = 2071;
}

/*
equation index: 2072
type: ALGORITHM

  assert(evap.Cells[2].fluidState.s >= -1e7 and evap.Cells[2].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[2].fluidState.s <= 1e7, has value: " + String(evap.Cells[2].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2072};
  modelica_boolean tmp942;
  modelica_boolean tmp943;
  static const MMC_DEFSTRINGLIT(tmp944,93,"Variable violating min/max constraint: -1e7 <= evap.Cells[2].fluidState.s <= 1e7, has value: ");
  modelica_string tmp945;
  modelica_metatype tmpMeta946;
  static int tmp947 = 0;
  if(!tmp947)
  {
    tmp942 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[2].fluidState.s variable */),-1e7);
    tmp943 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[2].fluidState.s variable */),1e7);
    if(!(tmp942 && tmp943))
    {
      tmp945 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* evap.Cells[2].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta946 = stringAppend(MMC_REFSTRINGLIT(tmp944),tmp945);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.s >= -1e7 and evap.Cells[2].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta946));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta946));
        }
      }
      tmp947 = 1;
    }
  }
  threadData->lastEquationSolved = 2072;
}

/*
equation index: 2073
type: ALGORITHM

  assert(evap.Cells[2].sat.Tsat >= 1.0 and evap.Cells[2].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[2].sat.Tsat <= 1e4, has value: " + String(evap.Cells[2].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2073};
  modelica_boolean tmp948;
  modelica_boolean tmp949;
  static const MMC_DEFSTRINGLIT(tmp950,88,"Variable violating min/max constraint: 1.0 <= evap.Cells[2].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp951;
  modelica_metatype tmpMeta952;
  static int tmp953 = 0;
  if(!tmp953)
  {
    tmp948 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* evap.Cells[2].sat.Tsat variable */),1.0);
    tmp949 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* evap.Cells[2].sat.Tsat variable */),1e4);
    if(!(tmp948 && tmp949))
    {
      tmp951 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* evap.Cells[2].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta952 = stringAppend(MMC_REFSTRINGLIT(tmp950),tmp951);
      {
        const char* assert_cond = "(evap.Cells[2].sat.Tsat >= 1.0 and evap.Cells[2].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta952));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta952));
        }
      }
      tmp953 = 1;
    }
  }
  threadData->lastEquationSolved = 2073;
}

/*
equation index: 2074
type: ALGORITHM

  assert(evap.Cells[2].sat.dl >= 0.0 and evap.Cells[2].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].sat.dl <= 1e5, has value: " + String(evap.Cells[2].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2074};
  modelica_boolean tmp954;
  modelica_boolean tmp955;
  static const MMC_DEFSTRINGLIT(tmp956,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].sat.dl <= 1e5, has value: ");
  modelica_string tmp957;
  modelica_metatype tmpMeta958;
  static int tmp959 = 0;
  if(!tmp959)
  {
    tmp954 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1069]] /* evap.Cells[2].sat.dl variable */),0.0);
    tmp955 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1069]] /* evap.Cells[2].sat.dl variable */),1e5);
    if(!(tmp954 && tmp955))
    {
      tmp957 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1069]] /* evap.Cells[2].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta958 = stringAppend(MMC_REFSTRINGLIT(tmp956),tmp957);
      {
        const char* assert_cond = "(evap.Cells[2].sat.dl >= 0.0 and evap.Cells[2].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta958));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta958));
        }
      }
      tmp959 = 1;
    }
  }
  threadData->lastEquationSolved = 2074;
}

/*
equation index: 2075
type: ALGORITHM

  assert(evap.Cells[2].sat.dv >= 0.0 and evap.Cells[2].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].sat.dv <= 1e5, has value: " + String(evap.Cells[2].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2075};
  modelica_boolean tmp960;
  modelica_boolean tmp961;
  static const MMC_DEFSTRINGLIT(tmp962,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].sat.dv <= 1e5, has value: ");
  modelica_string tmp963;
  modelica_metatype tmpMeta964;
  static int tmp965 = 0;
  if(!tmp965)
  {
    tmp960 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* evap.Cells[2].sat.dv variable */),0.0);
    tmp961 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* evap.Cells[2].sat.dv variable */),1e5);
    if(!(tmp960 && tmp961))
    {
      tmp963 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* evap.Cells[2].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta964 = stringAppend(MMC_REFSTRINGLIT(tmp962),tmp963);
      {
        const char* assert_cond = "(evap.Cells[2].sat.dv >= 0.0 and evap.Cells[2].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta964));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta964));
        }
      }
      tmp965 = 1;
    }
  }
  threadData->lastEquationSolved = 2075;
}

/*
equation index: 2076
type: ALGORITHM

  assert(evap.Cells[2].sat.psat >= 0.0 and evap.Cells[2].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].sat.psat <= 1e8, has value: " + String(evap.Cells[2].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2076};
  modelica_boolean tmp966;
  modelica_boolean tmp967;
  static const MMC_DEFSTRINGLIT(tmp968,88,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].sat.psat <= 1e8, has value: ");
  modelica_string tmp969;
  modelica_metatype tmpMeta970;
  static int tmp971 = 0;
  if(!tmp971)
  {
    tmp966 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* evap.Cells[2].sat.psat variable */),0.0);
    tmp967 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* evap.Cells[2].sat.psat variable */),1e8);
    if(!(tmp966 && tmp967))
    {
      tmp969 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* evap.Cells[2].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta970 = stringAppend(MMC_REFSTRINGLIT(tmp968),tmp969);
      {
        const char* assert_cond = "(evap.Cells[2].sat.psat >= 0.0 and evap.Cells[2].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta970));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta970));
        }
      }
      tmp971 = 1;
    }
  }
  threadData->lastEquationSolved = 2076;
}

/*
equation index: 2077
type: ALGORITHM

  assert(evap.Cells[2].sat.sl >= -1e7 and evap.Cells[2].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[2].sat.sl <= 1e7, has value: " + String(evap.Cells[2].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2077};
  modelica_boolean tmp972;
  modelica_boolean tmp973;
  static const MMC_DEFSTRINGLIT(tmp974,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[2].sat.sl <= 1e7, has value: ");
  modelica_string tmp975;
  modelica_metatype tmpMeta976;
  static int tmp977 = 0;
  if(!tmp977)
  {
    tmp972 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* evap.Cells[2].sat.sl variable */),-1e7);
    tmp973 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* evap.Cells[2].sat.sl variable */),1e7);
    if(!(tmp972 && tmp973))
    {
      tmp975 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* evap.Cells[2].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta976 = stringAppend(MMC_REFSTRINGLIT(tmp974),tmp975);
      {
        const char* assert_cond = "(evap.Cells[2].sat.sl >= -1e7 and evap.Cells[2].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta976));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta976));
        }
      }
      tmp977 = 1;
    }
  }
  threadData->lastEquationSolved = 2077;
}

/*
equation index: 2078
type: ALGORITHM

  assert(evap.Cells[2].sat.sv >= -1e7 and evap.Cells[2].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[2].sat.sv <= 1e7, has value: " + String(evap.Cells[2].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2078};
  modelica_boolean tmp978;
  modelica_boolean tmp979;
  static const MMC_DEFSTRINGLIT(tmp980,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[2].sat.sv <= 1e7, has value: ");
  modelica_string tmp981;
  modelica_metatype tmpMeta982;
  static int tmp983 = 0;
  if(!tmp983)
  {
    tmp978 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* evap.Cells[2].sat.sv variable */),-1e7);
    tmp979 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* evap.Cells[2].sat.sv variable */),1e7);
    if(!(tmp978 && tmp979))
    {
      tmp981 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* evap.Cells[2].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta982 = stringAppend(MMC_REFSTRINGLIT(tmp980),tmp981);
      {
        const char* assert_cond = "(evap.Cells[2].sat.sv >= -1e7 and evap.Cells[2].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta982));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta982));
        }
      }
      tmp983 = 1;
    }
  }
  threadData->lastEquationSolved = 2078;
}

/*
equation index: 2079
type: ALGORITHM

  assert(evap.Cells[2].h >= 1e5 and evap.Cells[2].h <= 8.5e5, "Variable violating min/max constraint: 1e5 <= evap.Cells[2].h <= 8.5e5, has value: " + String(evap.Cells[2].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2079};
  modelica_boolean tmp984;
  modelica_boolean tmp985;
  static const MMC_DEFSTRINGLIT(tmp986,83,"Variable violating min/max constraint: 1e5 <= evap.Cells[2].h <= 8.5e5, has value: ");
  modelica_string tmp987;
  modelica_metatype tmpMeta988;
  static int tmp989 = 0;
  if(!tmp989)
  {
    tmp984 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */),1e5);
    tmp985 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */),8.5e5);
    if(!(tmp984 && tmp985))
    {
      tmp987 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta988 = stringAppend(MMC_REFSTRINGLIT(tmp986),tmp987);
      {
        const char* assert_cond = "(evap.Cells[2].h >= 1e5 and evap.Cells[2].h <= 8.5e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta988));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta988));
        }
      }
      tmp989 = 1;
    }
  }
  threadData->lastEquationSolved = 2079;
}

/*
equation index: 2080
type: ALGORITHM

  assert(evap.Cells[2].T >= 1.0 and evap.Cells[2].T <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[2].T <= 1e4, has value: " + String(evap.Cells[2].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2080};
  modelica_boolean tmp990;
  modelica_boolean tmp991;
  static const MMC_DEFSTRINGLIT(tmp992,81,"Variable violating min/max constraint: 1.0 <= evap.Cells[2].T <= 1e4, has value: ");
  modelica_string tmp993;
  modelica_metatype tmpMeta994;
  static int tmp995 = 0;
  if(!tmp995)
  {
    tmp990 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* evap.Cells[2].T variable */),1.0);
    tmp991 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* evap.Cells[2].T variable */),1e4);
    if(!(tmp990 && tmp991))
    {
      tmp993 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* evap.Cells[2].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta994 = stringAppend(MMC_REFSTRINGLIT(tmp992),tmp993);
      {
        const char* assert_cond = "(evap.Cells[2].T >= 1.0 and evap.Cells[2].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta994));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta994));
        }
      }
      tmp995 = 1;
    }
  }
  threadData->lastEquationSolved = 2080;
}

/*
equation index: 2081
type: ALGORITHM

  assert(evap.Cells[2].rho >= 0.0 and evap.Cells[2].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].rho <= 1e5, has value: " + String(evap.Cells[2].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2081};
  modelica_boolean tmp996;
  modelica_boolean tmp997;
  static const MMC_DEFSTRINGLIT(tmp998,83,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].rho <= 1e5, has value: ");
  modelica_string tmp999;
  modelica_metatype tmpMeta1000;
  static int tmp1001 = 0;
  if(!tmp1001)
  {
    tmp996 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* evap.Cells[2].rho variable */),0.0);
    tmp997 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* evap.Cells[2].rho variable */),1e5);
    if(!(tmp996 && tmp997))
    {
      tmp999 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* evap.Cells[2].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1000 = stringAppend(MMC_REFSTRINGLIT(tmp998),tmp999);
      {
        const char* assert_cond = "(evap.Cells[2].rho >= 0.0 and evap.Cells[2].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1000));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1000));
        }
      }
      tmp1001 = 1;
    }
  }
  threadData->lastEquationSolved = 2081;
}

/*
equation index: 2082
type: ALGORITHM

  assert(evap.Cells[2].h_l >= -1e10 and evap.Cells[2].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[2].h_l <= 1e10, has value: " + String(evap.Cells[2].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2082};
  modelica_boolean tmp1002;
  modelica_boolean tmp1003;
  static const MMC_DEFSTRINGLIT(tmp1004,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[2].h_l <= 1e10, has value: ");
  modelica_string tmp1005;
  modelica_metatype tmpMeta1006;
  static int tmp1007 = 0;
  if(!tmp1007)
  {
    tmp1002 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* evap.Cells[2].h_l variable */),-1e10);
    tmp1003 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* evap.Cells[2].h_l variable */),1e10);
    if(!(tmp1002 && tmp1003))
    {
      tmp1005 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* evap.Cells[2].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1006 = stringAppend(MMC_REFSTRINGLIT(tmp1004),tmp1005);
      {
        const char* assert_cond = "(evap.Cells[2].h_l >= -1e10 and evap.Cells[2].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1006));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1006));
        }
      }
      tmp1007 = 1;
    }
  }
  threadData->lastEquationSolved = 2082;
}

/*
equation index: 2083
type: ALGORITHM

  assert(evap.Cells[2].h_v >= -1e10 and evap.Cells[2].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[2].h_v <= 1e10, has value: " + String(evap.Cells[2].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2083};
  modelica_boolean tmp1008;
  modelica_boolean tmp1009;
  static const MMC_DEFSTRINGLIT(tmp1010,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[2].h_v <= 1e10, has value: ");
  modelica_string tmp1011;
  modelica_metatype tmpMeta1012;
  static int tmp1013 = 0;
  if(!tmp1013)
  {
    tmp1008 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* evap.Cells[2].h_v variable */),-1e10);
    tmp1009 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* evap.Cells[2].h_v variable */),1e10);
    if(!(tmp1008 && tmp1009))
    {
      tmp1011 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* evap.Cells[2].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1012 = stringAppend(MMC_REFSTRINGLIT(tmp1010),tmp1011);
      {
        const char* assert_cond = "(evap.Cells[2].h_v >= -1e10 and evap.Cells[2].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1012));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1012));
        }
      }
      tmp1013 = 1;
    }
  }
  threadData->lastEquationSolved = 2083;
}

/*
equation index: 2084
type: ALGORITHM

  assert(evap.Cells[2].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= evap.Cells[2].M_tot, has value: " + String(evap.Cells[2].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2084};
  modelica_boolean tmp1014;
  static const MMC_DEFSTRINGLIT(tmp1015,74,"Variable violating min constraint: 0.0 <= evap.Cells[2].M_tot, has value: ");
  modelica_string tmp1016;
  modelica_metatype tmpMeta1017;
  static int tmp1018 = 0;
  if(!tmp1018)
  {
    tmp1014 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[924]] /* evap.Cells[2].M_tot variable */),0.0);
    if(!tmp1014)
    {
      tmp1016 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[924]] /* evap.Cells[2].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1017 = stringAppend(MMC_REFSTRINGLIT(tmp1015),tmp1016);
      {
        const char* assert_cond = "(evap.Cells[2].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1017));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1017));
        }
      }
      tmp1018 = 1;
    }
  }
  threadData->lastEquationSolved = 2084;
}

/*
equation index: 2085
type: ALGORITHM

  assert(evap.Cells[3].InFlow.m_flow >= -1e5 and evap.Cells[3].InFlow.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= evap.Cells[3].InFlow.m_flow <= 1e5, has value: " + String(evap.Cells[3].InFlow.m_flow, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2085};
  modelica_boolean tmp1019;
  modelica_boolean tmp1020;
  static const MMC_DEFSTRINGLIT(tmp1021,94,"Variable violating min/max constraint: -1e5 <= evap.Cells[3].InFlow.m_flow <= 1e5, has value: ");
  modelica_string tmp1022;
  modelica_metatype tmpMeta1023;
  static int tmp1024 = 0;
  if(!tmp1024)
  {
    tmp1019 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* evap.Cells[3].InFlow.m_flow variable */),-1e5);
    tmp1020 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* evap.Cells[3].InFlow.m_flow variable */),1e5);
    if(!(tmp1019 && tmp1020))
    {
      tmp1022 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* evap.Cells[3].InFlow.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1023 = stringAppend(MMC_REFSTRINGLIT(tmp1021),tmp1022);
      {
        const char* assert_cond = "(evap.Cells[3].InFlow.m_flow >= -1e5 and evap.Cells[3].InFlow.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1023));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1023));
        }
      }
      tmp1024 = 1;
    }
  }
  threadData->lastEquationSolved = 2085;
}

/*
equation index: 2086
type: ALGORITHM

  assert(evap.Cells[3].fluidState.a >= 0.0 and evap.Cells[3].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.a <= 1e5, has value: " + String(evap.Cells[3].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2086};
  modelica_boolean tmp1025;
  modelica_boolean tmp1026;
  static const MMC_DEFSTRINGLIT(tmp1027,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.a <= 1e5, has value: ");
  modelica_string tmp1028;
  modelica_metatype tmpMeta1029;
  static int tmp1030 = 0;
  if(!tmp1030)
  {
    tmp1025 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[955]] /* evap.Cells[3].fluidState.a variable */),0.0);
    tmp1026 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[955]] /* evap.Cells[3].fluidState.a variable */),1e5);
    if(!(tmp1025 && tmp1026))
    {
      tmp1028 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[955]] /* evap.Cells[3].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1029 = stringAppend(MMC_REFSTRINGLIT(tmp1027),tmp1028);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.a >= 0.0 and evap.Cells[3].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1029));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1029));
        }
      }
      tmp1030 = 1;
    }
  }
  threadData->lastEquationSolved = 2086;
}

/*
equation index: 2087
type: ALGORITHM

  assert(evap.Cells[3].fluidState.cp >= 0.0 and evap.Cells[3].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.cp <= 1e7, has value: " + String(evap.Cells[3].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2087};
  modelica_boolean tmp1031;
  modelica_boolean tmp1032;
  static const MMC_DEFSTRINGLIT(tmp1033,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp1034;
  modelica_metatype tmpMeta1035;
  static int tmp1036 = 0;
  if(!tmp1036)
  {
    tmp1031 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* evap.Cells[3].fluidState.cp variable */),0.0);
    tmp1032 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* evap.Cells[3].fluidState.cp variable */),1e7);
    if(!(tmp1031 && tmp1032))
    {
      tmp1034 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* evap.Cells[3].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1035 = stringAppend(MMC_REFSTRINGLIT(tmp1033),tmp1034);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.cp >= 0.0 and evap.Cells[3].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1035));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1035));
        }
      }
      tmp1036 = 1;
    }
  }
  threadData->lastEquationSolved = 2087;
}

/*
equation index: 2088
type: ALGORITHM

  assert(evap.Cells[3].fluidState.cv >= 0.0 and evap.Cells[3].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.cv <= 1e7, has value: " + String(evap.Cells[3].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2088};
  modelica_boolean tmp1037;
  modelica_boolean tmp1038;
  static const MMC_DEFSTRINGLIT(tmp1039,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp1040;
  modelica_metatype tmpMeta1041;
  static int tmp1042 = 0;
  if(!tmp1042)
  {
    tmp1037 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* evap.Cells[3].fluidState.cv variable */),0.0);
    tmp1038 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* evap.Cells[3].fluidState.cv variable */),1e7);
    if(!(tmp1037 && tmp1038))
    {
      tmp1040 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* evap.Cells[3].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1041 = stringAppend(MMC_REFSTRINGLIT(tmp1039),tmp1040);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.cv >= 0.0 and evap.Cells[3].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1041));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1041));
        }
      }
      tmp1042 = 1;
    }
  }
  threadData->lastEquationSolved = 2088;
}

/*
equation index: 2089
type: ALGORITHM

  assert(evap.Cells[3].fluidState.eta >= 0.0 and evap.Cells[3].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.eta <= 1e8, has value: " + String(evap.Cells[3].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2089};
  modelica_boolean tmp1043;
  modelica_boolean tmp1044;
  static const MMC_DEFSTRINGLIT(tmp1045,94,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp1046;
  modelica_metatype tmpMeta1047;
  static int tmp1048 = 0;
  if(!tmp1048)
  {
    tmp1043 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[975]] /* evap.Cells[3].fluidState.eta variable */),0.0);
    tmp1044 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[975]] /* evap.Cells[3].fluidState.eta variable */),1e8);
    if(!(tmp1043 && tmp1044))
    {
      tmp1046 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[975]] /* evap.Cells[3].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1047 = stringAppend(MMC_REFSTRINGLIT(tmp1045),tmp1046);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.eta >= 0.0 and evap.Cells[3].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1047));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1047));
        }
      }
      tmp1048 = 1;
    }
  }
  threadData->lastEquationSolved = 2089;
}

/*
equation index: 2090
type: ALGORITHM

  assert(evap.Cells[3].fluidState.h >= -1e10 and evap.Cells[3].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[3].fluidState.h <= 1e10, has value: " + String(evap.Cells[3].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2090};
  modelica_boolean tmp1049;
  modelica_boolean tmp1050;
  static const MMC_DEFSTRINGLIT(tmp1051,95,"Variable violating min/max constraint: -1e10 <= evap.Cells[3].fluidState.h <= 1e10, has value: ");
  modelica_string tmp1052;
  modelica_metatype tmpMeta1053;
  static int tmp1054 = 0;
  if(!tmp1054)
  {
    tmp1049 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[980]] /* evap.Cells[3].fluidState.h variable */),-1e10);
    tmp1050 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[980]] /* evap.Cells[3].fluidState.h variable */),1e10);
    if(!(tmp1049 && tmp1050))
    {
      tmp1052 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[980]] /* evap.Cells[3].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1053 = stringAppend(MMC_REFSTRINGLIT(tmp1051),tmp1052);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.h >= -1e10 and evap.Cells[3].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1053));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1053));
        }
      }
      tmp1054 = 1;
    }
  }
  threadData->lastEquationSolved = 2090;
}

/*
equation index: 2091
type: ALGORITHM

  assert(evap.Cells[3].fluidState.lambda >= 0.0 and evap.Cells[3].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.lambda <= 500.0, has value: " + String(evap.Cells[3].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2091};
  modelica_boolean tmp1055;
  modelica_boolean tmp1056;
  static const MMC_DEFSTRINGLIT(tmp1057,99,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp1058;
  modelica_metatype tmpMeta1059;
  static int tmp1060 = 0;
  if(!tmp1060)
  {
    tmp1055 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* evap.Cells[3].fluidState.lambda variable */),0.0);
    tmp1056 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* evap.Cells[3].fluidState.lambda variable */),500.0);
    if(!(tmp1055 && tmp1056))
    {
      tmp1058 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* evap.Cells[3].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1059 = stringAppend(MMC_REFSTRINGLIT(tmp1057),tmp1058);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.lambda >= 0.0 and evap.Cells[3].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1059));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1059));
        }
      }
      tmp1060 = 1;
    }
  }
  threadData->lastEquationSolved = 2091;
}

/*
equation index: 2092
type: ALGORITHM

  assert(evap.Cells[3].fluidState.p >= 0.0 and evap.Cells[3].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.p <= 1e8, has value: " + String(evap.Cells[3].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2092};
  modelica_boolean tmp1061;
  modelica_boolean tmp1062;
  static const MMC_DEFSTRINGLIT(tmp1063,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.p <= 1e8, has value: ");
  modelica_string tmp1064;
  modelica_metatype tmpMeta1065;
  static int tmp1066 = 0;
  if(!tmp1066)
  {
    tmp1061 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* evap.Cells[3].fluidState.p variable */),0.0);
    tmp1062 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* evap.Cells[3].fluidState.p variable */),1e8);
    if(!(tmp1061 && tmp1062))
    {
      tmp1064 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* evap.Cells[3].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1065 = stringAppend(MMC_REFSTRINGLIT(tmp1063),tmp1064);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.p >= 0.0 and evap.Cells[3].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1065));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1065));
        }
      }
      tmp1066 = 1;
    }
  }
  threadData->lastEquationSolved = 2092;
}

/*
equation index: 2093
type: ALGORITHM

  assert(evap.Cells[3].fluidState.phase >= 0 and evap.Cells[3].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= evap.Cells[3].fluidState.phase <= 2, has value: " + String(evap.Cells[3].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2093};
  modelica_boolean tmp1067;
  modelica_boolean tmp1068;
  static const MMC_DEFSTRINGLIT(tmp1069,92,"Variable violating min/max constraint: 0 <= evap.Cells[3].fluidState.phase <= 2, has value: ");
  modelica_string tmp1070;
  modelica_metatype tmpMeta1071;
  static int tmp1072 = 0;
  if(!tmp1072)
  {
    tmp1067 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[27]] /* evap.Cells[3].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp1068 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[27]] /* evap.Cells[3].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp1067 && tmp1068))
    {
      tmp1070 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[27]] /* evap.Cells[3].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1071 = stringAppend(MMC_REFSTRINGLIT(tmp1069),tmp1070);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.phase >= 0 and evap.Cells[3].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1071));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1071));
        }
      }
      tmp1072 = 1;
    }
  }
  threadData->lastEquationSolved = 2093;
}

/*
equation index: 2094
type: ALGORITHM

  assert(evap.Cells[3].fluidState.s >= -1e7 and evap.Cells[3].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[3].fluidState.s <= 1e7, has value: " + String(evap.Cells[3].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2094};
  modelica_boolean tmp1073;
  modelica_boolean tmp1074;
  static const MMC_DEFSTRINGLIT(tmp1075,93,"Variable violating min/max constraint: -1e7 <= evap.Cells[3].fluidState.s <= 1e7, has value: ");
  modelica_string tmp1076;
  modelica_metatype tmpMeta1077;
  static int tmp1078 = 0;
  if(!tmp1078)
  {
    tmp1073 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* evap.Cells[3].fluidState.s variable */),-1e7);
    tmp1074 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* evap.Cells[3].fluidState.s variable */),1e7);
    if(!(tmp1073 && tmp1074))
    {
      tmp1076 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* evap.Cells[3].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1077 = stringAppend(MMC_REFSTRINGLIT(tmp1075),tmp1076);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.s >= -1e7 and evap.Cells[3].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1077));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1077));
        }
      }
      tmp1078 = 1;
    }
  }
  threadData->lastEquationSolved = 2094;
}

/*
equation index: 2095
type: ALGORITHM

  assert(evap.Cells[3].sat.Tsat >= 1.0 and evap.Cells[3].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[3].sat.Tsat <= 1e4, has value: " + String(evap.Cells[3].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2095};
  modelica_boolean tmp1079;
  modelica_boolean tmp1080;
  static const MMC_DEFSTRINGLIT(tmp1081,88,"Variable violating min/max constraint: 1.0 <= evap.Cells[3].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp1082;
  modelica_metatype tmpMeta1083;
  static int tmp1084 = 0;
  if(!tmp1084)
  {
    tmp1079 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* evap.Cells[3].sat.Tsat variable */),1.0);
    tmp1080 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* evap.Cells[3].sat.Tsat variable */),1e4);
    if(!(tmp1079 && tmp1080))
    {
      tmp1082 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* evap.Cells[3].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1083 = stringAppend(MMC_REFSTRINGLIT(tmp1081),tmp1082);
      {
        const char* assert_cond = "(evap.Cells[3].sat.Tsat >= 1.0 and evap.Cells[3].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1083));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1083));
        }
      }
      tmp1084 = 1;
    }
  }
  threadData->lastEquationSolved = 2095;
}

/*
equation index: 2096
type: ALGORITHM

  assert(evap.Cells[3].sat.dl >= 0.0 and evap.Cells[3].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].sat.dl <= 1e5, has value: " + String(evap.Cells[3].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2096};
  modelica_boolean tmp1085;
  modelica_boolean tmp1086;
  static const MMC_DEFSTRINGLIT(tmp1087,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].sat.dl <= 1e5, has value: ");
  modelica_string tmp1088;
  modelica_metatype tmpMeta1089;
  static int tmp1090 = 0;
  if(!tmp1090)
  {
    tmp1085 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1070]] /* evap.Cells[3].sat.dl variable */),0.0);
    tmp1086 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1070]] /* evap.Cells[3].sat.dl variable */),1e5);
    if(!(tmp1085 && tmp1086))
    {
      tmp1088 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1070]] /* evap.Cells[3].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1089 = stringAppend(MMC_REFSTRINGLIT(tmp1087),tmp1088);
      {
        const char* assert_cond = "(evap.Cells[3].sat.dl >= 0.0 and evap.Cells[3].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1089));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1089));
        }
      }
      tmp1090 = 1;
    }
  }
  threadData->lastEquationSolved = 2096;
}

/*
equation index: 2097
type: ALGORITHM

  assert(evap.Cells[3].sat.dv >= 0.0 and evap.Cells[3].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].sat.dv <= 1e5, has value: " + String(evap.Cells[3].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2097};
  modelica_boolean tmp1091;
  modelica_boolean tmp1092;
  static const MMC_DEFSTRINGLIT(tmp1093,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].sat.dv <= 1e5, has value: ");
  modelica_string tmp1094;
  modelica_metatype tmpMeta1095;
  static int tmp1096 = 0;
  if(!tmp1096)
  {
    tmp1091 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* evap.Cells[3].sat.dv variable */),0.0);
    tmp1092 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* evap.Cells[3].sat.dv variable */),1e5);
    if(!(tmp1091 && tmp1092))
    {
      tmp1094 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* evap.Cells[3].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1095 = stringAppend(MMC_REFSTRINGLIT(tmp1093),tmp1094);
      {
        const char* assert_cond = "(evap.Cells[3].sat.dv >= 0.0 and evap.Cells[3].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1095));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1095));
        }
      }
      tmp1096 = 1;
    }
  }
  threadData->lastEquationSolved = 2097;
}

/*
equation index: 2098
type: ALGORITHM

  assert(evap.Cells[3].sat.psat >= 0.0 and evap.Cells[3].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].sat.psat <= 1e8, has value: " + String(evap.Cells[3].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2098};
  modelica_boolean tmp1097;
  modelica_boolean tmp1098;
  static const MMC_DEFSTRINGLIT(tmp1099,88,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].sat.psat <= 1e8, has value: ");
  modelica_string tmp1100;
  modelica_metatype tmpMeta1101;
  static int tmp1102 = 0;
  if(!tmp1102)
  {
    tmp1097 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* evap.Cells[3].sat.psat variable */),0.0);
    tmp1098 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* evap.Cells[3].sat.psat variable */),1e8);
    if(!(tmp1097 && tmp1098))
    {
      tmp1100 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* evap.Cells[3].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1101 = stringAppend(MMC_REFSTRINGLIT(tmp1099),tmp1100);
      {
        const char* assert_cond = "(evap.Cells[3].sat.psat >= 0.0 and evap.Cells[3].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1101));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1101));
        }
      }
      tmp1102 = 1;
    }
  }
  threadData->lastEquationSolved = 2098;
}

/*
equation index: 2099
type: ALGORITHM

  assert(evap.Cells[3].sat.sl >= -1e7 and evap.Cells[3].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[3].sat.sl <= 1e7, has value: " + String(evap.Cells[3].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2099};
  modelica_boolean tmp1103;
  modelica_boolean tmp1104;
  static const MMC_DEFSTRINGLIT(tmp1105,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[3].sat.sl <= 1e7, has value: ");
  modelica_string tmp1106;
  modelica_metatype tmpMeta1107;
  static int tmp1108 = 0;
  if(!tmp1108)
  {
    tmp1103 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* evap.Cells[3].sat.sl variable */),-1e7);
    tmp1104 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* evap.Cells[3].sat.sl variable */),1e7);
    if(!(tmp1103 && tmp1104))
    {
      tmp1106 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* evap.Cells[3].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1107 = stringAppend(MMC_REFSTRINGLIT(tmp1105),tmp1106);
      {
        const char* assert_cond = "(evap.Cells[3].sat.sl >= -1e7 and evap.Cells[3].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1107));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1107));
        }
      }
      tmp1108 = 1;
    }
  }
  threadData->lastEquationSolved = 2099;
}

/*
equation index: 2100
type: ALGORITHM

  assert(evap.Cells[3].sat.sv >= -1e7 and evap.Cells[3].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[3].sat.sv <= 1e7, has value: " + String(evap.Cells[3].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2100};
  modelica_boolean tmp1109;
  modelica_boolean tmp1110;
  static const MMC_DEFSTRINGLIT(tmp1111,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[3].sat.sv <= 1e7, has value: ");
  modelica_string tmp1112;
  modelica_metatype tmpMeta1113;
  static int tmp1114 = 0;
  if(!tmp1114)
  {
    tmp1109 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* evap.Cells[3].sat.sv variable */),-1e7);
    tmp1110 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* evap.Cells[3].sat.sv variable */),1e7);
    if(!(tmp1109 && tmp1110))
    {
      tmp1112 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* evap.Cells[3].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1113 = stringAppend(MMC_REFSTRINGLIT(tmp1111),tmp1112);
      {
        const char* assert_cond = "(evap.Cells[3].sat.sv >= -1e7 and evap.Cells[3].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1113));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1113));
        }
      }
      tmp1114 = 1;
    }
  }
  threadData->lastEquationSolved = 2100;
}

/*
equation index: 2101
type: ALGORITHM

  assert(evap.Cells[3].h >= 1e5 and evap.Cells[3].h <= 8.5e5, "Variable violating min/max constraint: 1e5 <= evap.Cells[3].h <= 8.5e5, has value: " + String(evap.Cells[3].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2101};
  modelica_boolean tmp1115;
  modelica_boolean tmp1116;
  static const MMC_DEFSTRINGLIT(tmp1117,83,"Variable violating min/max constraint: 1e5 <= evap.Cells[3].h <= 8.5e5, has value: ");
  modelica_string tmp1118;
  modelica_metatype tmpMeta1119;
  static int tmp1120 = 0;
  if(!tmp1120)
  {
    tmp1115 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */),1e5);
    tmp1116 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */),8.5e5);
    if(!(tmp1115 && tmp1116))
    {
      tmp1118 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1119 = stringAppend(MMC_REFSTRINGLIT(tmp1117),tmp1118);
      {
        const char* assert_cond = "(evap.Cells[3].h >= 1e5 and evap.Cells[3].h <= 8.5e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1119));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1119));
        }
      }
      tmp1120 = 1;
    }
  }
  threadData->lastEquationSolved = 2101;
}

/*
equation index: 2102
type: ALGORITHM

  assert(evap.Cells[3].T >= 1.0 and evap.Cells[3].T <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[3].T <= 1e4, has value: " + String(evap.Cells[3].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2102};
  modelica_boolean tmp1121;
  modelica_boolean tmp1122;
  static const MMC_DEFSTRINGLIT(tmp1123,81,"Variable violating min/max constraint: 1.0 <= evap.Cells[3].T <= 1e4, has value: ");
  modelica_string tmp1124;
  modelica_metatype tmpMeta1125;
  static int tmp1126 = 0;
  if(!tmp1126)
  {
    tmp1121 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* evap.Cells[3].T variable */),1.0);
    tmp1122 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* evap.Cells[3].T variable */),1e4);
    if(!(tmp1121 && tmp1122))
    {
      tmp1124 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* evap.Cells[3].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1125 = stringAppend(MMC_REFSTRINGLIT(tmp1123),tmp1124);
      {
        const char* assert_cond = "(evap.Cells[3].T >= 1.0 and evap.Cells[3].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1125));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1125));
        }
      }
      tmp1126 = 1;
    }
  }
  threadData->lastEquationSolved = 2102;
}

/*
equation index: 2103
type: ALGORITHM

  assert(evap.Cells[3].rho >= 0.0 and evap.Cells[3].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].rho <= 1e5, has value: " + String(evap.Cells[3].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2103};
  modelica_boolean tmp1127;
  modelica_boolean tmp1128;
  static const MMC_DEFSTRINGLIT(tmp1129,83,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].rho <= 1e5, has value: ");
  modelica_string tmp1130;
  modelica_metatype tmpMeta1131;
  static int tmp1132 = 0;
  if(!tmp1132)
  {
    tmp1127 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* evap.Cells[3].rho variable */),0.0);
    tmp1128 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* evap.Cells[3].rho variable */),1e5);
    if(!(tmp1127 && tmp1128))
    {
      tmp1130 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* evap.Cells[3].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1131 = stringAppend(MMC_REFSTRINGLIT(tmp1129),tmp1130);
      {
        const char* assert_cond = "(evap.Cells[3].rho >= 0.0 and evap.Cells[3].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1131));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1131));
        }
      }
      tmp1132 = 1;
    }
  }
  threadData->lastEquationSolved = 2103;
}

/*
equation index: 2104
type: ALGORITHM

  assert(evap.Cells[3].h_l >= -1e10 and evap.Cells[3].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[3].h_l <= 1e10, has value: " + String(evap.Cells[3].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2104};
  modelica_boolean tmp1133;
  modelica_boolean tmp1134;
  static const MMC_DEFSTRINGLIT(tmp1135,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[3].h_l <= 1e10, has value: ");
  modelica_string tmp1136;
  modelica_metatype tmpMeta1137;
  static int tmp1138 = 0;
  if(!tmp1138)
  {
    tmp1133 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* evap.Cells[3].h_l variable */),-1e10);
    tmp1134 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* evap.Cells[3].h_l variable */),1e10);
    if(!(tmp1133 && tmp1134))
    {
      tmp1136 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* evap.Cells[3].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1137 = stringAppend(MMC_REFSTRINGLIT(tmp1135),tmp1136);
      {
        const char* assert_cond = "(evap.Cells[3].h_l >= -1e10 and evap.Cells[3].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1137));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1137));
        }
      }
      tmp1138 = 1;
    }
  }
  threadData->lastEquationSolved = 2104;
}

/*
equation index: 2105
type: ALGORITHM

  assert(evap.Cells[3].h_v >= -1e10 and evap.Cells[3].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[3].h_v <= 1e10, has value: " + String(evap.Cells[3].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2105};
  modelica_boolean tmp1139;
  modelica_boolean tmp1140;
  static const MMC_DEFSTRINGLIT(tmp1141,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[3].h_v <= 1e10, has value: ");
  modelica_string tmp1142;
  modelica_metatype tmpMeta1143;
  static int tmp1144 = 0;
  if(!tmp1144)
  {
    tmp1139 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* evap.Cells[3].h_v variable */),-1e10);
    tmp1140 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* evap.Cells[3].h_v variable */),1e10);
    if(!(tmp1139 && tmp1140))
    {
      tmp1142 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* evap.Cells[3].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1143 = stringAppend(MMC_REFSTRINGLIT(tmp1141),tmp1142);
      {
        const char* assert_cond = "(evap.Cells[3].h_v >= -1e10 and evap.Cells[3].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1143));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1143));
        }
      }
      tmp1144 = 1;
    }
  }
  threadData->lastEquationSolved = 2105;
}

/*
equation index: 2106
type: ALGORITHM

  assert(evap.Cells[3].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= evap.Cells[3].M_tot, has value: " + String(evap.Cells[3].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2106};
  modelica_boolean tmp1145;
  static const MMC_DEFSTRINGLIT(tmp1146,74,"Variable violating min constraint: 0.0 <= evap.Cells[3].M_tot, has value: ");
  modelica_string tmp1147;
  modelica_metatype tmpMeta1148;
  static int tmp1149 = 0;
  if(!tmp1149)
  {
    tmp1145 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* evap.Cells[3].M_tot variable */),0.0);
    if(!tmp1145)
    {
      tmp1147 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* evap.Cells[3].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1148 = stringAppend(MMC_REFSTRINGLIT(tmp1146),tmp1147);
      {
        const char* assert_cond = "(evap.Cells[3].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1148));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1148));
        }
      }
      tmp1149 = 1;
    }
  }
  threadData->lastEquationSolved = 2106;
}

/*
equation index: 2107
type: ALGORITHM

  assert(evap.Cells[4].InFlow.m_flow >= -1e5 and evap.Cells[4].InFlow.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= evap.Cells[4].InFlow.m_flow <= 1e5, has value: " + String(evap.Cells[4].InFlow.m_flow, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2107};
  modelica_boolean tmp1150;
  modelica_boolean tmp1151;
  static const MMC_DEFSTRINGLIT(tmp1152,94,"Variable violating min/max constraint: -1e5 <= evap.Cells[4].InFlow.m_flow <= 1e5, has value: ");
  modelica_string tmp1153;
  modelica_metatype tmpMeta1154;
  static int tmp1155 = 0;
  if(!tmp1155)
  {
    tmp1150 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[911]] /* evap.Cells[4].InFlow.m_flow variable */),-1e5);
    tmp1151 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[911]] /* evap.Cells[4].InFlow.m_flow variable */),1e5);
    if(!(tmp1150 && tmp1151))
    {
      tmp1153 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[911]] /* evap.Cells[4].InFlow.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1154 = stringAppend(MMC_REFSTRINGLIT(tmp1152),tmp1153);
      {
        const char* assert_cond = "(evap.Cells[4].InFlow.m_flow >= -1e5 and evap.Cells[4].InFlow.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1154));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1154));
        }
      }
      tmp1155 = 1;
    }
  }
  threadData->lastEquationSolved = 2107;
}

/*
equation index: 2108
type: ALGORITHM

  assert(evap.Cells[4].fluidState.a >= 0.0 and evap.Cells[4].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.a <= 1e5, has value: " + String(evap.Cells[4].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2108};
  modelica_boolean tmp1156;
  modelica_boolean tmp1157;
  static const MMC_DEFSTRINGLIT(tmp1158,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.a <= 1e5, has value: ");
  modelica_string tmp1159;
  modelica_metatype tmpMeta1160;
  static int tmp1161 = 0;
  if(!tmp1161)
  {
    tmp1156 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[956]] /* evap.Cells[4].fluidState.a variable */),0.0);
    tmp1157 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[956]] /* evap.Cells[4].fluidState.a variable */),1e5);
    if(!(tmp1156 && tmp1157))
    {
      tmp1159 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[956]] /* evap.Cells[4].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1160 = stringAppend(MMC_REFSTRINGLIT(tmp1158),tmp1159);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.a >= 0.0 and evap.Cells[4].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1160));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1160));
        }
      }
      tmp1161 = 1;
    }
  }
  threadData->lastEquationSolved = 2108;
}

/*
equation index: 2109
type: ALGORITHM

  assert(evap.Cells[4].fluidState.cp >= 0.0 and evap.Cells[4].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.cp <= 1e7, has value: " + String(evap.Cells[4].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2109};
  modelica_boolean tmp1162;
  modelica_boolean tmp1163;
  static const MMC_DEFSTRINGLIT(tmp1164,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp1165;
  modelica_metatype tmpMeta1166;
  static int tmp1167 = 0;
  if(!tmp1167)
  {
    tmp1162 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* evap.Cells[4].fluidState.cp variable */),0.0);
    tmp1163 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* evap.Cells[4].fluidState.cp variable */),1e7);
    if(!(tmp1162 && tmp1163))
    {
      tmp1165 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* evap.Cells[4].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1166 = stringAppend(MMC_REFSTRINGLIT(tmp1164),tmp1165);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.cp >= 0.0 and evap.Cells[4].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1166));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1166));
        }
      }
      tmp1167 = 1;
    }
  }
  threadData->lastEquationSolved = 2109;
}

/*
equation index: 2110
type: ALGORITHM

  assert(evap.Cells[4].fluidState.cv >= 0.0 and evap.Cells[4].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.cv <= 1e7, has value: " + String(evap.Cells[4].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2110};
  modelica_boolean tmp1168;
  modelica_boolean tmp1169;
  static const MMC_DEFSTRINGLIT(tmp1170,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp1171;
  modelica_metatype tmpMeta1172;
  static int tmp1173 = 0;
  if(!tmp1173)
  {
    tmp1168 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* evap.Cells[4].fluidState.cv variable */),0.0);
    tmp1169 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* evap.Cells[4].fluidState.cv variable */),1e7);
    if(!(tmp1168 && tmp1169))
    {
      tmp1171 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* evap.Cells[4].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1172 = stringAppend(MMC_REFSTRINGLIT(tmp1170),tmp1171);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.cv >= 0.0 and evap.Cells[4].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1172));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1172));
        }
      }
      tmp1173 = 1;
    }
  }
  threadData->lastEquationSolved = 2110;
}

/*
equation index: 2111
type: ALGORITHM

  assert(evap.Cells[4].fluidState.eta >= 0.0 and evap.Cells[4].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.eta <= 1e8, has value: " + String(evap.Cells[4].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2111};
  modelica_boolean tmp1174;
  modelica_boolean tmp1175;
  static const MMC_DEFSTRINGLIT(tmp1176,94,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp1177;
  modelica_metatype tmpMeta1178;
  static int tmp1179 = 0;
  if(!tmp1179)
  {
    tmp1174 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[976]] /* evap.Cells[4].fluidState.eta variable */),0.0);
    tmp1175 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[976]] /* evap.Cells[4].fluidState.eta variable */),1e8);
    if(!(tmp1174 && tmp1175))
    {
      tmp1177 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[976]] /* evap.Cells[4].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1178 = stringAppend(MMC_REFSTRINGLIT(tmp1176),tmp1177);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.eta >= 0.0 and evap.Cells[4].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1178));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1178));
        }
      }
      tmp1179 = 1;
    }
  }
  threadData->lastEquationSolved = 2111;
}

/*
equation index: 2112
type: ALGORITHM

  assert(evap.Cells[4].fluidState.h >= -1e10 and evap.Cells[4].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[4].fluidState.h <= 1e10, has value: " + String(evap.Cells[4].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2112};
  modelica_boolean tmp1180;
  modelica_boolean tmp1181;
  static const MMC_DEFSTRINGLIT(tmp1182,95,"Variable violating min/max constraint: -1e10 <= evap.Cells[4].fluidState.h <= 1e10, has value: ");
  modelica_string tmp1183;
  modelica_metatype tmpMeta1184;
  static int tmp1185 = 0;
  if(!tmp1185)
  {
    tmp1180 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* evap.Cells[4].fluidState.h variable */),-1e10);
    tmp1181 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* evap.Cells[4].fluidState.h variable */),1e10);
    if(!(tmp1180 && tmp1181))
    {
      tmp1183 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* evap.Cells[4].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1184 = stringAppend(MMC_REFSTRINGLIT(tmp1182),tmp1183);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.h >= -1e10 and evap.Cells[4].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1184));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1184));
        }
      }
      tmp1185 = 1;
    }
  }
  threadData->lastEquationSolved = 2112;
}

/*
equation index: 2113
type: ALGORITHM

  assert(evap.Cells[4].fluidState.lambda >= 0.0 and evap.Cells[4].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.lambda <= 500.0, has value: " + String(evap.Cells[4].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2113};
  modelica_boolean tmp1186;
  modelica_boolean tmp1187;
  static const MMC_DEFSTRINGLIT(tmp1188,99,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp1189;
  modelica_metatype tmpMeta1190;
  static int tmp1191 = 0;
  if(!tmp1191)
  {
    tmp1186 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* evap.Cells[4].fluidState.lambda variable */),0.0);
    tmp1187 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* evap.Cells[4].fluidState.lambda variable */),500.0);
    if(!(tmp1186 && tmp1187))
    {
      tmp1189 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* evap.Cells[4].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1190 = stringAppend(MMC_REFSTRINGLIT(tmp1188),tmp1189);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.lambda >= 0.0 and evap.Cells[4].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1190));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1190));
        }
      }
      tmp1191 = 1;
    }
  }
  threadData->lastEquationSolved = 2113;
}

/*
equation index: 2114
type: ALGORITHM

  assert(evap.Cells[4].fluidState.p >= 0.0 and evap.Cells[4].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.p <= 1e8, has value: " + String(evap.Cells[4].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2114};
  modelica_boolean tmp1192;
  modelica_boolean tmp1193;
  static const MMC_DEFSTRINGLIT(tmp1194,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.p <= 1e8, has value: ");
  modelica_string tmp1195;
  modelica_metatype tmpMeta1196;
  static int tmp1197 = 0;
  if(!tmp1197)
  {
    tmp1192 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[4].fluidState.p variable */),0.0);
    tmp1193 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[4].fluidState.p variable */),1e8);
    if(!(tmp1192 && tmp1193))
    {
      tmp1195 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* evap.Cells[4].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1196 = stringAppend(MMC_REFSTRINGLIT(tmp1194),tmp1195);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.p >= 0.0 and evap.Cells[4].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1196));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1196));
        }
      }
      tmp1197 = 1;
    }
  }
  threadData->lastEquationSolved = 2114;
}

/*
equation index: 2115
type: ALGORITHM

  assert(evap.Cells[4].fluidState.phase >= 0 and evap.Cells[4].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= evap.Cells[4].fluidState.phase <= 2, has value: " + String(evap.Cells[4].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2115};
  modelica_boolean tmp1198;
  modelica_boolean tmp1199;
  static const MMC_DEFSTRINGLIT(tmp1200,92,"Variable violating min/max constraint: 0 <= evap.Cells[4].fluidState.phase <= 2, has value: ");
  modelica_string tmp1201;
  modelica_metatype tmpMeta1202;
  static int tmp1203 = 0;
  if(!tmp1203)
  {
    tmp1198 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[28]] /* evap.Cells[4].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp1199 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[28]] /* evap.Cells[4].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp1198 && tmp1199))
    {
      tmp1201 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[28]] /* evap.Cells[4].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1202 = stringAppend(MMC_REFSTRINGLIT(tmp1200),tmp1201);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.phase >= 0 and evap.Cells[4].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1202));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1202));
        }
      }
      tmp1203 = 1;
    }
  }
  threadData->lastEquationSolved = 2115;
}

/*
equation index: 2116
type: ALGORITHM

  assert(evap.Cells[4].fluidState.s >= -1e7 and evap.Cells[4].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[4].fluidState.s <= 1e7, has value: " + String(evap.Cells[4].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2116};
  modelica_boolean tmp1204;
  modelica_boolean tmp1205;
  static const MMC_DEFSTRINGLIT(tmp1206,93,"Variable violating min/max constraint: -1e7 <= evap.Cells[4].fluidState.s <= 1e7, has value: ");
  modelica_string tmp1207;
  modelica_metatype tmpMeta1208;
  static int tmp1209 = 0;
  if(!tmp1209)
  {
    tmp1204 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* evap.Cells[4].fluidState.s variable */),-1e7);
    tmp1205 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* evap.Cells[4].fluidState.s variable */),1e7);
    if(!(tmp1204 && tmp1205))
    {
      tmp1207 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* evap.Cells[4].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1208 = stringAppend(MMC_REFSTRINGLIT(tmp1206),tmp1207);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.s >= -1e7 and evap.Cells[4].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1208));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1208));
        }
      }
      tmp1209 = 1;
    }
  }
  threadData->lastEquationSolved = 2116;
}

/*
equation index: 2117
type: ALGORITHM

  assert(evap.Cells[4].sat.Tsat >= 1.0 and evap.Cells[4].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[4].sat.Tsat <= 1e4, has value: " + String(evap.Cells[4].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2117};
  modelica_boolean tmp1210;
  modelica_boolean tmp1211;
  static const MMC_DEFSTRINGLIT(tmp1212,88,"Variable violating min/max constraint: 1.0 <= evap.Cells[4].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp1213;
  modelica_metatype tmpMeta1214;
  static int tmp1215 = 0;
  if(!tmp1215)
  {
    tmp1210 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* evap.Cells[4].sat.Tsat variable */),1.0);
    tmp1211 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* evap.Cells[4].sat.Tsat variable */),1e4);
    if(!(tmp1210 && tmp1211))
    {
      tmp1213 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* evap.Cells[4].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1214 = stringAppend(MMC_REFSTRINGLIT(tmp1212),tmp1213);
      {
        const char* assert_cond = "(evap.Cells[4].sat.Tsat >= 1.0 and evap.Cells[4].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1214));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1214));
        }
      }
      tmp1215 = 1;
    }
  }
  threadData->lastEquationSolved = 2117;
}

/*
equation index: 2118
type: ALGORITHM

  assert(evap.Cells[4].sat.dl >= 0.0 and evap.Cells[4].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].sat.dl <= 1e5, has value: " + String(evap.Cells[4].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2118};
  modelica_boolean tmp1216;
  modelica_boolean tmp1217;
  static const MMC_DEFSTRINGLIT(tmp1218,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].sat.dl <= 1e5, has value: ");
  modelica_string tmp1219;
  modelica_metatype tmpMeta1220;
  static int tmp1221 = 0;
  if(!tmp1221)
  {
    tmp1216 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* evap.Cells[4].sat.dl variable */),0.0);
    tmp1217 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* evap.Cells[4].sat.dl variable */),1e5);
    if(!(tmp1216 && tmp1217))
    {
      tmp1219 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* evap.Cells[4].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1220 = stringAppend(MMC_REFSTRINGLIT(tmp1218),tmp1219);
      {
        const char* assert_cond = "(evap.Cells[4].sat.dl >= 0.0 and evap.Cells[4].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1220));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1220));
        }
      }
      tmp1221 = 1;
    }
  }
  threadData->lastEquationSolved = 2118;
}

/*
equation index: 2119
type: ALGORITHM

  assert(evap.Cells[4].sat.dv >= 0.0 and evap.Cells[4].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].sat.dv <= 1e5, has value: " + String(evap.Cells[4].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2119};
  modelica_boolean tmp1222;
  modelica_boolean tmp1223;
  static const MMC_DEFSTRINGLIT(tmp1224,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].sat.dv <= 1e5, has value: ");
  modelica_string tmp1225;
  modelica_metatype tmpMeta1226;
  static int tmp1227 = 0;
  if(!tmp1227)
  {
    tmp1222 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* evap.Cells[4].sat.dv variable */),0.0);
    tmp1223 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* evap.Cells[4].sat.dv variable */),1e5);
    if(!(tmp1222 && tmp1223))
    {
      tmp1225 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* evap.Cells[4].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1226 = stringAppend(MMC_REFSTRINGLIT(tmp1224),tmp1225);
      {
        const char* assert_cond = "(evap.Cells[4].sat.dv >= 0.0 and evap.Cells[4].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1226));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1226));
        }
      }
      tmp1227 = 1;
    }
  }
  threadData->lastEquationSolved = 2119;
}

/*
equation index: 2120
type: ALGORITHM

  assert(evap.Cells[4].sat.psat >= 0.0 and evap.Cells[4].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].sat.psat <= 1e8, has value: " + String(evap.Cells[4].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2120};
  modelica_boolean tmp1228;
  modelica_boolean tmp1229;
  static const MMC_DEFSTRINGLIT(tmp1230,88,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].sat.psat <= 1e8, has value: ");
  modelica_string tmp1231;
  modelica_metatype tmpMeta1232;
  static int tmp1233 = 0;
  if(!tmp1233)
  {
    tmp1228 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* evap.Cells[4].sat.psat variable */),0.0);
    tmp1229 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* evap.Cells[4].sat.psat variable */),1e8);
    if(!(tmp1228 && tmp1229))
    {
      tmp1231 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* evap.Cells[4].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1232 = stringAppend(MMC_REFSTRINGLIT(tmp1230),tmp1231);
      {
        const char* assert_cond = "(evap.Cells[4].sat.psat >= 0.0 and evap.Cells[4].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1232));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1232));
        }
      }
      tmp1233 = 1;
    }
  }
  threadData->lastEquationSolved = 2120;
}

/*
equation index: 2121
type: ALGORITHM

  assert(evap.Cells[4].sat.sl >= -1e7 and evap.Cells[4].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[4].sat.sl <= 1e7, has value: " + String(evap.Cells[4].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2121};
  modelica_boolean tmp1234;
  modelica_boolean tmp1235;
  static const MMC_DEFSTRINGLIT(tmp1236,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[4].sat.sl <= 1e7, has value: ");
  modelica_string tmp1237;
  modelica_metatype tmpMeta1238;
  static int tmp1239 = 0;
  if(!tmp1239)
  {
    tmp1234 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* evap.Cells[4].sat.sl variable */),-1e7);
    tmp1235 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* evap.Cells[4].sat.sl variable */),1e7);
    if(!(tmp1234 && tmp1235))
    {
      tmp1237 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* evap.Cells[4].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1238 = stringAppend(MMC_REFSTRINGLIT(tmp1236),tmp1237);
      {
        const char* assert_cond = "(evap.Cells[4].sat.sl >= -1e7 and evap.Cells[4].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1238));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1238));
        }
      }
      tmp1239 = 1;
    }
  }
  threadData->lastEquationSolved = 2121;
}

/*
equation index: 2122
type: ALGORITHM

  assert(evap.Cells[4].sat.sv >= -1e7 and evap.Cells[4].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[4].sat.sv <= 1e7, has value: " + String(evap.Cells[4].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2122};
  modelica_boolean tmp1240;
  modelica_boolean tmp1241;
  static const MMC_DEFSTRINGLIT(tmp1242,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[4].sat.sv <= 1e7, has value: ");
  modelica_string tmp1243;
  modelica_metatype tmpMeta1244;
  static int tmp1245 = 0;
  if(!tmp1245)
  {
    tmp1240 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* evap.Cells[4].sat.sv variable */),-1e7);
    tmp1241 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* evap.Cells[4].sat.sv variable */),1e7);
    if(!(tmp1240 && tmp1241))
    {
      tmp1243 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* evap.Cells[4].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1244 = stringAppend(MMC_REFSTRINGLIT(tmp1242),tmp1243);
      {
        const char* assert_cond = "(evap.Cells[4].sat.sv >= -1e7 and evap.Cells[4].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1244));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1244));
        }
      }
      tmp1245 = 1;
    }
  }
  threadData->lastEquationSolved = 2122;
}

/*
equation index: 2123
type: ALGORITHM

  assert(evap.Cells[4].h >= 1e5 and evap.Cells[4].h <= 8.5e5, "Variable violating min/max constraint: 1e5 <= evap.Cells[4].h <= 8.5e5, has value: " + String(evap.Cells[4].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2123};
  modelica_boolean tmp1246;
  modelica_boolean tmp1247;
  static const MMC_DEFSTRINGLIT(tmp1248,83,"Variable violating min/max constraint: 1e5 <= evap.Cells[4].h <= 8.5e5, has value: ");
  modelica_string tmp1249;
  modelica_metatype tmpMeta1250;
  static int tmp1251 = 0;
  if(!tmp1251)
  {
    tmp1246 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */),1e5);
    tmp1247 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */),8.5e5);
    if(!(tmp1246 && tmp1247))
    {
      tmp1249 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1250 = stringAppend(MMC_REFSTRINGLIT(tmp1248),tmp1249);
      {
        const char* assert_cond = "(evap.Cells[4].h >= 1e5 and evap.Cells[4].h <= 8.5e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1250));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1250));
        }
      }
      tmp1251 = 1;
    }
  }
  threadData->lastEquationSolved = 2123;
}

/*
equation index: 2124
type: ALGORITHM

  assert(evap.Cells[4].T >= 1.0 and evap.Cells[4].T <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[4].T <= 1e4, has value: " + String(evap.Cells[4].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2124};
  modelica_boolean tmp1252;
  modelica_boolean tmp1253;
  static const MMC_DEFSTRINGLIT(tmp1254,81,"Variable violating min/max constraint: 1.0 <= evap.Cells[4].T <= 1e4, has value: ");
  modelica_string tmp1255;
  modelica_metatype tmpMeta1256;
  static int tmp1257 = 0;
  if(!tmp1257)
  {
    tmp1252 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[936]] /* evap.Cells[4].T variable */),1.0);
    tmp1253 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[936]] /* evap.Cells[4].T variable */),1e4);
    if(!(tmp1252 && tmp1253))
    {
      tmp1255 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[936]] /* evap.Cells[4].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1256 = stringAppend(MMC_REFSTRINGLIT(tmp1254),tmp1255);
      {
        const char* assert_cond = "(evap.Cells[4].T >= 1.0 and evap.Cells[4].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1256));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1256));
        }
      }
      tmp1257 = 1;
    }
  }
  threadData->lastEquationSolved = 2124;
}

/*
equation index: 2125
type: ALGORITHM

  assert(evap.Cells[4].rho >= 0.0 and evap.Cells[4].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].rho <= 1e5, has value: " + String(evap.Cells[4].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2125};
  modelica_boolean tmp1258;
  modelica_boolean tmp1259;
  static const MMC_DEFSTRINGLIT(tmp1260,83,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].rho <= 1e5, has value: ");
  modelica_string tmp1261;
  modelica_metatype tmpMeta1262;
  static int tmp1263 = 0;
  if(!tmp1263)
  {
    tmp1258 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* evap.Cells[4].rho variable */),0.0);
    tmp1259 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* evap.Cells[4].rho variable */),1e5);
    if(!(tmp1258 && tmp1259))
    {
      tmp1261 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* evap.Cells[4].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1262 = stringAppend(MMC_REFSTRINGLIT(tmp1260),tmp1261);
      {
        const char* assert_cond = "(evap.Cells[4].rho >= 0.0 and evap.Cells[4].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1262));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1262));
        }
      }
      tmp1263 = 1;
    }
  }
  threadData->lastEquationSolved = 2125;
}

/*
equation index: 2126
type: ALGORITHM

  assert(evap.Cells[4].h_l >= -1e10 and evap.Cells[4].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[4].h_l <= 1e10, has value: " + String(evap.Cells[4].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2126};
  modelica_boolean tmp1264;
  modelica_boolean tmp1265;
  static const MMC_DEFSTRINGLIT(tmp1266,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[4].h_l <= 1e10, has value: ");
  modelica_string tmp1267;
  modelica_metatype tmpMeta1268;
  static int tmp1269 = 0;
  if(!tmp1269)
  {
    tmp1264 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* evap.Cells[4].h_l variable */),-1e10);
    tmp1265 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* evap.Cells[4].h_l variable */),1e10);
    if(!(tmp1264 && tmp1265))
    {
      tmp1267 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* evap.Cells[4].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1268 = stringAppend(MMC_REFSTRINGLIT(tmp1266),tmp1267);
      {
        const char* assert_cond = "(evap.Cells[4].h_l >= -1e10 and evap.Cells[4].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1268));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1268));
        }
      }
      tmp1269 = 1;
    }
  }
  threadData->lastEquationSolved = 2126;
}

/*
equation index: 2127
type: ALGORITHM

  assert(evap.Cells[4].h_v >= -1e10 and evap.Cells[4].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[4].h_v <= 1e10, has value: " + String(evap.Cells[4].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2127};
  modelica_boolean tmp1270;
  modelica_boolean tmp1271;
  static const MMC_DEFSTRINGLIT(tmp1272,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[4].h_v <= 1e10, has value: ");
  modelica_string tmp1273;
  modelica_metatype tmpMeta1274;
  static int tmp1275 = 0;
  if(!tmp1275)
  {
    tmp1270 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* evap.Cells[4].h_v variable */),-1e10);
    tmp1271 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* evap.Cells[4].h_v variable */),1e10);
    if(!(tmp1270 && tmp1271))
    {
      tmp1273 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* evap.Cells[4].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1274 = stringAppend(MMC_REFSTRINGLIT(tmp1272),tmp1273);
      {
        const char* assert_cond = "(evap.Cells[4].h_v >= -1e10 and evap.Cells[4].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1274));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1274));
        }
      }
      tmp1275 = 1;
    }
  }
  threadData->lastEquationSolved = 2127;
}

/*
equation index: 2128
type: ALGORITHM

  assert(evap.Cells[4].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= evap.Cells[4].M_tot, has value: " + String(evap.Cells[4].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2128};
  modelica_boolean tmp1276;
  static const MMC_DEFSTRINGLIT(tmp1277,74,"Variable violating min constraint: 0.0 <= evap.Cells[4].M_tot, has value: ");
  modelica_string tmp1278;
  modelica_metatype tmpMeta1279;
  static int tmp1280 = 0;
  if(!tmp1280)
  {
    tmp1276 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[926]] /* evap.Cells[4].M_tot variable */),0.0);
    if(!tmp1276)
    {
      tmp1278 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[926]] /* evap.Cells[4].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1279 = stringAppend(MMC_REFSTRINGLIT(tmp1277),tmp1278);
      {
        const char* assert_cond = "(evap.Cells[4].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1279));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1279));
        }
      }
      tmp1280 = 1;
    }
  }
  threadData->lastEquationSolved = 2128;
}

/*
equation index: 2129
type: ALGORITHM

  assert(evap.Cells[5].InFlow.m_flow >= -1e5 and evap.Cells[5].InFlow.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= evap.Cells[5].InFlow.m_flow <= 1e5, has value: " + String(evap.Cells[5].InFlow.m_flow, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2129};
  modelica_boolean tmp1281;
  modelica_boolean tmp1282;
  static const MMC_DEFSTRINGLIT(tmp1283,94,"Variable violating min/max constraint: -1e5 <= evap.Cells[5].InFlow.m_flow <= 1e5, has value: ");
  modelica_string tmp1284;
  modelica_metatype tmpMeta1285;
  static int tmp1286 = 0;
  if(!tmp1286)
  {
    tmp1281 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* evap.Cells[5].InFlow.m_flow variable */),-1e5);
    tmp1282 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* evap.Cells[5].InFlow.m_flow variable */),1e5);
    if(!(tmp1281 && tmp1282))
    {
      tmp1284 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* evap.Cells[5].InFlow.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1285 = stringAppend(MMC_REFSTRINGLIT(tmp1283),tmp1284);
      {
        const char* assert_cond = "(evap.Cells[5].InFlow.m_flow >= -1e5 and evap.Cells[5].InFlow.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1285));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1285));
        }
      }
      tmp1286 = 1;
    }
  }
  threadData->lastEquationSolved = 2129;
}

/*
equation index: 2130
type: ALGORITHM

  assert(evap.Cells[5].fluidState.a >= 0.0 and evap.Cells[5].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.a <= 1e5, has value: " + String(evap.Cells[5].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2130};
  modelica_boolean tmp1287;
  modelica_boolean tmp1288;
  static const MMC_DEFSTRINGLIT(tmp1289,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.a <= 1e5, has value: ");
  modelica_string tmp1290;
  modelica_metatype tmpMeta1291;
  static int tmp1292 = 0;
  if(!tmp1292)
  {
    tmp1287 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* evap.Cells[5].fluidState.a variable */),0.0);
    tmp1288 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* evap.Cells[5].fluidState.a variable */),1e5);
    if(!(tmp1287 && tmp1288))
    {
      tmp1290 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* evap.Cells[5].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1291 = stringAppend(MMC_REFSTRINGLIT(tmp1289),tmp1290);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.a >= 0.0 and evap.Cells[5].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1291));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1291));
        }
      }
      tmp1292 = 1;
    }
  }
  threadData->lastEquationSolved = 2130;
}

/*
equation index: 2131
type: ALGORITHM

  assert(evap.Cells[5].fluidState.cp >= 0.0 and evap.Cells[5].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.cp <= 1e7, has value: " + String(evap.Cells[5].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2131};
  modelica_boolean tmp1293;
  modelica_boolean tmp1294;
  static const MMC_DEFSTRINGLIT(tmp1295,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp1296;
  modelica_metatype tmpMeta1297;
  static int tmp1298 = 0;
  if(!tmp1298)
  {
    tmp1293 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* evap.Cells[5].fluidState.cp variable */),0.0);
    tmp1294 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* evap.Cells[5].fluidState.cp variable */),1e7);
    if(!(tmp1293 && tmp1294))
    {
      tmp1296 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* evap.Cells[5].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1297 = stringAppend(MMC_REFSTRINGLIT(tmp1295),tmp1296);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.cp >= 0.0 and evap.Cells[5].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1297));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1297));
        }
      }
      tmp1298 = 1;
    }
  }
  threadData->lastEquationSolved = 2131;
}

/*
equation index: 2132
type: ALGORITHM

  assert(evap.Cells[5].fluidState.cv >= 0.0 and evap.Cells[5].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.cv <= 1e7, has value: " + String(evap.Cells[5].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2132};
  modelica_boolean tmp1299;
  modelica_boolean tmp1300;
  static const MMC_DEFSTRINGLIT(tmp1301,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp1302;
  modelica_metatype tmpMeta1303;
  static int tmp1304 = 0;
  if(!tmp1304)
  {
    tmp1299 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* evap.Cells[5].fluidState.cv variable */),0.0);
    tmp1300 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* evap.Cells[5].fluidState.cv variable */),1e7);
    if(!(tmp1299 && tmp1300))
    {
      tmp1302 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* evap.Cells[5].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1303 = stringAppend(MMC_REFSTRINGLIT(tmp1301),tmp1302);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.cv >= 0.0 and evap.Cells[5].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1303));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1303));
        }
      }
      tmp1304 = 1;
    }
  }
  threadData->lastEquationSolved = 2132;
}

/*
equation index: 2133
type: ALGORITHM

  assert(evap.Cells[5].fluidState.eta >= 0.0 and evap.Cells[5].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.eta <= 1e8, has value: " + String(evap.Cells[5].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2133};
  modelica_boolean tmp1305;
  modelica_boolean tmp1306;
  static const MMC_DEFSTRINGLIT(tmp1307,94,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp1308;
  modelica_metatype tmpMeta1309;
  static int tmp1310 = 0;
  if(!tmp1310)
  {
    tmp1305 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* evap.Cells[5].fluidState.eta variable */),0.0);
    tmp1306 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* evap.Cells[5].fluidState.eta variable */),1e8);
    if(!(tmp1305 && tmp1306))
    {
      tmp1308 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* evap.Cells[5].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1309 = stringAppend(MMC_REFSTRINGLIT(tmp1307),tmp1308);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.eta >= 0.0 and evap.Cells[5].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1309));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1309));
        }
      }
      tmp1310 = 1;
    }
  }
  threadData->lastEquationSolved = 2133;
}

/*
equation index: 2134
type: ALGORITHM

  assert(evap.Cells[5].fluidState.h >= -1e10 and evap.Cells[5].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[5].fluidState.h <= 1e10, has value: " + String(evap.Cells[5].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2134};
  modelica_boolean tmp1311;
  modelica_boolean tmp1312;
  static const MMC_DEFSTRINGLIT(tmp1313,95,"Variable violating min/max constraint: -1e10 <= evap.Cells[5].fluidState.h <= 1e10, has value: ");
  modelica_string tmp1314;
  modelica_metatype tmpMeta1315;
  static int tmp1316 = 0;
  if(!tmp1316)
  {
    tmp1311 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[982]] /* evap.Cells[5].fluidState.h variable */),-1e10);
    tmp1312 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[982]] /* evap.Cells[5].fluidState.h variable */),1e10);
    if(!(tmp1311 && tmp1312))
    {
      tmp1314 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[982]] /* evap.Cells[5].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1315 = stringAppend(MMC_REFSTRINGLIT(tmp1313),tmp1314);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.h >= -1e10 and evap.Cells[5].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1315));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1315));
        }
      }
      tmp1316 = 1;
    }
  }
  threadData->lastEquationSolved = 2134;
}

/*
equation index: 2135
type: ALGORITHM

  assert(evap.Cells[5].fluidState.lambda >= 0.0 and evap.Cells[5].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.lambda <= 500.0, has value: " + String(evap.Cells[5].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2135};
  modelica_boolean tmp1317;
  modelica_boolean tmp1318;
  static const MMC_DEFSTRINGLIT(tmp1319,99,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp1320;
  modelica_metatype tmpMeta1321;
  static int tmp1322 = 0;
  if(!tmp1322)
  {
    tmp1317 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* evap.Cells[5].fluidState.lambda variable */),0.0);
    tmp1318 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* evap.Cells[5].fluidState.lambda variable */),500.0);
    if(!(tmp1317 && tmp1318))
    {
      tmp1320 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* evap.Cells[5].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1321 = stringAppend(MMC_REFSTRINGLIT(tmp1319),tmp1320);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.lambda >= 0.0 and evap.Cells[5].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1321));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1321));
        }
      }
      tmp1322 = 1;
    }
  }
  threadData->lastEquationSolved = 2135;
}

/*
equation index: 2136
type: ALGORITHM

  assert(evap.Cells[5].fluidState.p >= 0.0 and evap.Cells[5].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.p <= 1e8, has value: " + String(evap.Cells[5].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2136};
  modelica_boolean tmp1323;
  modelica_boolean tmp1324;
  static const MMC_DEFSTRINGLIT(tmp1325,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.p <= 1e8, has value: ");
  modelica_string tmp1326;
  modelica_metatype tmpMeta1327;
  static int tmp1328 = 0;
  if(!tmp1328)
  {
    tmp1323 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[5].fluidState.p variable */),0.0);
    tmp1324 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[5].fluidState.p variable */),1e8);
    if(!(tmp1323 && tmp1324))
    {
      tmp1326 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* evap.Cells[5].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1327 = stringAppend(MMC_REFSTRINGLIT(tmp1325),tmp1326);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.p >= 0.0 and evap.Cells[5].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1327));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1327));
        }
      }
      tmp1328 = 1;
    }
  }
  threadData->lastEquationSolved = 2136;
}

/*
equation index: 2137
type: ALGORITHM

  assert(evap.Cells[5].fluidState.phase >= 0 and evap.Cells[5].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= evap.Cells[5].fluidState.phase <= 2, has value: " + String(evap.Cells[5].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2137};
  modelica_boolean tmp1329;
  modelica_boolean tmp1330;
  static const MMC_DEFSTRINGLIT(tmp1331,92,"Variable violating min/max constraint: 0 <= evap.Cells[5].fluidState.phase <= 2, has value: ");
  modelica_string tmp1332;
  modelica_metatype tmpMeta1333;
  static int tmp1334 = 0;
  if(!tmp1334)
  {
    tmp1329 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[29]] /* evap.Cells[5].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp1330 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[29]] /* evap.Cells[5].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp1329 && tmp1330))
    {
      tmp1332 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[29]] /* evap.Cells[5].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1333 = stringAppend(MMC_REFSTRINGLIT(tmp1331),tmp1332);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.phase >= 0 and evap.Cells[5].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1333));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1333));
        }
      }
      tmp1334 = 1;
    }
  }
  threadData->lastEquationSolved = 2137;
}

/*
equation index: 2138
type: ALGORITHM

  assert(evap.Cells[5].fluidState.s >= -1e7 and evap.Cells[5].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[5].fluidState.s <= 1e7, has value: " + String(evap.Cells[5].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2138};
  modelica_boolean tmp1335;
  modelica_boolean tmp1336;
  static const MMC_DEFSTRINGLIT(tmp1337,93,"Variable violating min/max constraint: -1e7 <= evap.Cells[5].fluidState.s <= 1e7, has value: ");
  modelica_string tmp1338;
  modelica_metatype tmpMeta1339;
  static int tmp1340 = 0;
  if(!tmp1340)
  {
    tmp1335 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* evap.Cells[5].fluidState.s variable */),-1e7);
    tmp1336 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* evap.Cells[5].fluidState.s variable */),1e7);
    if(!(tmp1335 && tmp1336))
    {
      tmp1338 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* evap.Cells[5].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1339 = stringAppend(MMC_REFSTRINGLIT(tmp1337),tmp1338);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.s >= -1e7 and evap.Cells[5].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1339));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1339));
        }
      }
      tmp1340 = 1;
    }
  }
  threadData->lastEquationSolved = 2138;
}

/*
equation index: 2139
type: ALGORITHM

  assert(evap.Cells[5].sat.Tsat >= 1.0 and evap.Cells[5].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[5].sat.Tsat <= 1e4, has value: " + String(evap.Cells[5].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2139};
  modelica_boolean tmp1341;
  modelica_boolean tmp1342;
  static const MMC_DEFSTRINGLIT(tmp1343,88,"Variable violating min/max constraint: 1.0 <= evap.Cells[5].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp1344;
  modelica_metatype tmpMeta1345;
  static int tmp1346 = 0;
  if(!tmp1346)
  {
    tmp1341 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* evap.Cells[5].sat.Tsat variable */),1.0);
    tmp1342 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* evap.Cells[5].sat.Tsat variable */),1e4);
    if(!(tmp1341 && tmp1342))
    {
      tmp1344 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* evap.Cells[5].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1345 = stringAppend(MMC_REFSTRINGLIT(tmp1343),tmp1344);
      {
        const char* assert_cond = "(evap.Cells[5].sat.Tsat >= 1.0 and evap.Cells[5].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1345));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1345));
        }
      }
      tmp1346 = 1;
    }
  }
  threadData->lastEquationSolved = 2139;
}

/*
equation index: 2140
type: ALGORITHM

  assert(evap.Cells[5].sat.dl >= 0.0 and evap.Cells[5].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].sat.dl <= 1e5, has value: " + String(evap.Cells[5].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2140};
  modelica_boolean tmp1347;
  modelica_boolean tmp1348;
  static const MMC_DEFSTRINGLIT(tmp1349,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].sat.dl <= 1e5, has value: ");
  modelica_string tmp1350;
  modelica_metatype tmpMeta1351;
  static int tmp1352 = 0;
  if(!tmp1352)
  {
    tmp1347 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* evap.Cells[5].sat.dl variable */),0.0);
    tmp1348 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* evap.Cells[5].sat.dl variable */),1e5);
    if(!(tmp1347 && tmp1348))
    {
      tmp1350 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* evap.Cells[5].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1351 = stringAppend(MMC_REFSTRINGLIT(tmp1349),tmp1350);
      {
        const char* assert_cond = "(evap.Cells[5].sat.dl >= 0.0 and evap.Cells[5].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1351));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1351));
        }
      }
      tmp1352 = 1;
    }
  }
  threadData->lastEquationSolved = 2140;
}

/*
equation index: 2141
type: ALGORITHM

  assert(evap.Cells[5].sat.dv >= 0.0 and evap.Cells[5].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].sat.dv <= 1e5, has value: " + String(evap.Cells[5].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2141};
  modelica_boolean tmp1353;
  modelica_boolean tmp1354;
  static const MMC_DEFSTRINGLIT(tmp1355,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].sat.dv <= 1e5, has value: ");
  modelica_string tmp1356;
  modelica_metatype tmpMeta1357;
  static int tmp1358 = 0;
  if(!tmp1358)
  {
    tmp1353 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* evap.Cells[5].sat.dv variable */),0.0);
    tmp1354 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* evap.Cells[5].sat.dv variable */),1e5);
    if(!(tmp1353 && tmp1354))
    {
      tmp1356 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* evap.Cells[5].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1357 = stringAppend(MMC_REFSTRINGLIT(tmp1355),tmp1356);
      {
        const char* assert_cond = "(evap.Cells[5].sat.dv >= 0.0 and evap.Cells[5].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1357));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1357));
        }
      }
      tmp1358 = 1;
    }
  }
  threadData->lastEquationSolved = 2141;
}

/*
equation index: 2142
type: ALGORITHM

  assert(evap.Cells[5].sat.psat >= 0.0 and evap.Cells[5].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].sat.psat <= 1e8, has value: " + String(evap.Cells[5].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2142};
  modelica_boolean tmp1359;
  modelica_boolean tmp1360;
  static const MMC_DEFSTRINGLIT(tmp1361,88,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].sat.psat <= 1e8, has value: ");
  modelica_string tmp1362;
  modelica_metatype tmpMeta1363;
  static int tmp1364 = 0;
  if(!tmp1364)
  {
    tmp1359 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* evap.Cells[5].sat.psat variable */),0.0);
    tmp1360 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* evap.Cells[5].sat.psat variable */),1e8);
    if(!(tmp1359 && tmp1360))
    {
      tmp1362 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* evap.Cells[5].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1363 = stringAppend(MMC_REFSTRINGLIT(tmp1361),tmp1362);
      {
        const char* assert_cond = "(evap.Cells[5].sat.psat >= 0.0 and evap.Cells[5].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1363));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1363));
        }
      }
      tmp1364 = 1;
    }
  }
  threadData->lastEquationSolved = 2142;
}

/*
equation index: 2143
type: ALGORITHM

  assert(evap.Cells[5].sat.sl >= -1e7 and evap.Cells[5].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[5].sat.sl <= 1e7, has value: " + String(evap.Cells[5].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2143};
  modelica_boolean tmp1365;
  modelica_boolean tmp1366;
  static const MMC_DEFSTRINGLIT(tmp1367,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[5].sat.sl <= 1e7, has value: ");
  modelica_string tmp1368;
  modelica_metatype tmpMeta1369;
  static int tmp1370 = 0;
  if(!tmp1370)
  {
    tmp1365 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* evap.Cells[5].sat.sl variable */),-1e7);
    tmp1366 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* evap.Cells[5].sat.sl variable */),1e7);
    if(!(tmp1365 && tmp1366))
    {
      tmp1368 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* evap.Cells[5].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1369 = stringAppend(MMC_REFSTRINGLIT(tmp1367),tmp1368);
      {
        const char* assert_cond = "(evap.Cells[5].sat.sl >= -1e7 and evap.Cells[5].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1369));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1369));
        }
      }
      tmp1370 = 1;
    }
  }
  threadData->lastEquationSolved = 2143;
}

/*
equation index: 2144
type: ALGORITHM

  assert(evap.Cells[5].sat.sv >= -1e7 and evap.Cells[5].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[5].sat.sv <= 1e7, has value: " + String(evap.Cells[5].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2144};
  modelica_boolean tmp1371;
  modelica_boolean tmp1372;
  static const MMC_DEFSTRINGLIT(tmp1373,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[5].sat.sv <= 1e7, has value: ");
  modelica_string tmp1374;
  modelica_metatype tmpMeta1375;
  static int tmp1376 = 0;
  if(!tmp1376)
  {
    tmp1371 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* evap.Cells[5].sat.sv variable */),-1e7);
    tmp1372 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* evap.Cells[5].sat.sv variable */),1e7);
    if(!(tmp1371 && tmp1372))
    {
      tmp1374 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* evap.Cells[5].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1375 = stringAppend(MMC_REFSTRINGLIT(tmp1373),tmp1374);
      {
        const char* assert_cond = "(evap.Cells[5].sat.sv >= -1e7 and evap.Cells[5].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1375));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1375));
        }
      }
      tmp1376 = 1;
    }
  }
  threadData->lastEquationSolved = 2144;
}

/*
equation index: 2145
type: ALGORITHM

  assert(evap.Cells[5].p >= 1e4 and evap.Cells[5].p <= 5e6, "Variable violating min/max constraint: 1e4 <= evap.Cells[5].p <= 5e6, has value: " + String(evap.Cells[5].p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2145};
  modelica_boolean tmp1377;
  modelica_boolean tmp1378;
  static const MMC_DEFSTRINGLIT(tmp1379,81,"Variable violating min/max constraint: 1e4 <= evap.Cells[5].p <= 5e6, has value: ");
  modelica_string tmp1380;
  modelica_metatype tmpMeta1381;
  static int tmp1382 = 0;
  if(!tmp1382)
  {
    tmp1377 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */),1e4);
    tmp1378 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */),5e6);
    if(!(tmp1377 && tmp1378))
    {
      tmp1380 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1381 = stringAppend(MMC_REFSTRINGLIT(tmp1379),tmp1380);
      {
        const char* assert_cond = "(evap.Cells[5].p >= 1e4 and evap.Cells[5].p <= 5e6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",88,3,88,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1381));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",88,3,88,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1381));
        }
      }
      tmp1382 = 1;
    }
  }
  threadData->lastEquationSolved = 2145;
}

/*
equation index: 2146
type: ALGORITHM

  assert(evap.Cells[5].h >= 1e5 and evap.Cells[5].h <= 8.5e5, "Variable violating min/max constraint: 1e5 <= evap.Cells[5].h <= 8.5e5, has value: " + String(evap.Cells[5].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2146};
  modelica_boolean tmp1383;
  modelica_boolean tmp1384;
  static const MMC_DEFSTRINGLIT(tmp1385,83,"Variable violating min/max constraint: 1e5 <= evap.Cells[5].h <= 8.5e5, has value: ");
  modelica_string tmp1386;
  modelica_metatype tmpMeta1387;
  static int tmp1388 = 0;
  if(!tmp1388)
  {
    tmp1383 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */),1e5);
    tmp1384 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */),8.5e5);
    if(!(tmp1383 && tmp1384))
    {
      tmp1386 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1387 = stringAppend(MMC_REFSTRINGLIT(tmp1385),tmp1386);
      {
        const char* assert_cond = "(evap.Cells[5].h >= 1e5 and evap.Cells[5].h <= 8.5e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1387));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1387));
        }
      }
      tmp1388 = 1;
    }
  }
  threadData->lastEquationSolved = 2146;
}

/*
equation index: 2147
type: ALGORITHM

  assert(evap.Cells[5].T >= 1.0 and evap.Cells[5].T <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[5].T <= 1e4, has value: " + String(evap.Cells[5].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2147};
  modelica_boolean tmp1389;
  modelica_boolean tmp1390;
  static const MMC_DEFSTRINGLIT(tmp1391,81,"Variable violating min/max constraint: 1.0 <= evap.Cells[5].T <= 1e4, has value: ");
  modelica_string tmp1392;
  modelica_metatype tmpMeta1393;
  static int tmp1394 = 0;
  if(!tmp1394)
  {
    tmp1389 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[937]] /* evap.Cells[5].T variable */),1.0);
    tmp1390 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[937]] /* evap.Cells[5].T variable */),1e4);
    if(!(tmp1389 && tmp1390))
    {
      tmp1392 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[937]] /* evap.Cells[5].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1393 = stringAppend(MMC_REFSTRINGLIT(tmp1391),tmp1392);
      {
        const char* assert_cond = "(evap.Cells[5].T >= 1.0 and evap.Cells[5].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1393));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1393));
        }
      }
      tmp1394 = 1;
    }
  }
  threadData->lastEquationSolved = 2147;
}

/*
equation index: 2148
type: ALGORITHM

  assert(evap.Cells[5].rho >= 0.0 and evap.Cells[5].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].rho <= 1e5, has value: " + String(evap.Cells[5].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2148};
  modelica_boolean tmp1395;
  modelica_boolean tmp1396;
  static const MMC_DEFSTRINGLIT(tmp1397,83,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].rho <= 1e5, has value: ");
  modelica_string tmp1398;
  modelica_metatype tmpMeta1399;
  static int tmp1400 = 0;
  if(!tmp1400)
  {
    tmp1395 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* evap.Cells[5].rho variable */),0.0);
    tmp1396 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* evap.Cells[5].rho variable */),1e5);
    if(!(tmp1395 && tmp1396))
    {
      tmp1398 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* evap.Cells[5].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1399 = stringAppend(MMC_REFSTRINGLIT(tmp1397),tmp1398);
      {
        const char* assert_cond = "(evap.Cells[5].rho >= 0.0 and evap.Cells[5].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1399));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1399));
        }
      }
      tmp1400 = 1;
    }
  }
  threadData->lastEquationSolved = 2148;
}

/*
equation index: 2149
type: ALGORITHM

  assert(evap.Cells[5].h_l >= -1e10 and evap.Cells[5].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[5].h_l <= 1e10, has value: " + String(evap.Cells[5].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2149};
  modelica_boolean tmp1401;
  modelica_boolean tmp1402;
  static const MMC_DEFSTRINGLIT(tmp1403,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[5].h_l <= 1e10, has value: ");
  modelica_string tmp1404;
  modelica_metatype tmpMeta1405;
  static int tmp1406 = 0;
  if(!tmp1406)
  {
    tmp1401 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* evap.Cells[5].h_l variable */),-1e10);
    tmp1402 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* evap.Cells[5].h_l variable */),1e10);
    if(!(tmp1401 && tmp1402))
    {
      tmp1404 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* evap.Cells[5].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1405 = stringAppend(MMC_REFSTRINGLIT(tmp1403),tmp1404);
      {
        const char* assert_cond = "(evap.Cells[5].h_l >= -1e10 and evap.Cells[5].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1405));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1405));
        }
      }
      tmp1406 = 1;
    }
  }
  threadData->lastEquationSolved = 2149;
}

/*
equation index: 2150
type: ALGORITHM

  assert(evap.Cells[5].h_v >= -1e10 and evap.Cells[5].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[5].h_v <= 1e10, has value: " + String(evap.Cells[5].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2150};
  modelica_boolean tmp1407;
  modelica_boolean tmp1408;
  static const MMC_DEFSTRINGLIT(tmp1409,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[5].h_v <= 1e10, has value: ");
  modelica_string tmp1410;
  modelica_metatype tmpMeta1411;
  static int tmp1412 = 0;
  if(!tmp1412)
  {
    tmp1407 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* evap.Cells[5].h_v variable */),-1e10);
    tmp1408 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* evap.Cells[5].h_v variable */),1e10);
    if(!(tmp1407 && tmp1408))
    {
      tmp1410 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* evap.Cells[5].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1411 = stringAppend(MMC_REFSTRINGLIT(tmp1409),tmp1410);
      {
        const char* assert_cond = "(evap.Cells[5].h_v >= -1e10 and evap.Cells[5].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1411));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1411));
        }
      }
      tmp1412 = 1;
    }
  }
  threadData->lastEquationSolved = 2150;
}

/*
equation index: 2151
type: ALGORITHM

  assert(evap.Cells[5].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= evap.Cells[5].M_tot, has value: " + String(evap.Cells[5].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2151};
  modelica_boolean tmp1413;
  static const MMC_DEFSTRINGLIT(tmp1414,74,"Variable violating min constraint: 0.0 <= evap.Cells[5].M_tot, has value: ");
  modelica_string tmp1415;
  modelica_metatype tmpMeta1416;
  static int tmp1417 = 0;
  if(!tmp1417)
  {
    tmp1413 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[927]] /* evap.Cells[5].M_tot variable */),0.0);
    if(!tmp1413)
    {
      tmp1415 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[927]] /* evap.Cells[5].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1416 = stringAppend(MMC_REFSTRINGLIT(tmp1414),tmp1415);
      {
        const char* assert_cond = "(evap.Cells[5].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1416));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1416));
        }
      }
      tmp1417 = 1;
    }
  }
  threadData->lastEquationSolved = 2151;
}

/*
equation index: 2152
type: ALGORITHM

  assert(m_dot_circuit_kg_s_2 >= -1e5 and m_dot_circuit_kg_s_2 <= 1e5, "Variable violating min/max constraint: -1e5 <= m_dot_circuit_kg_s_2 <= 1e5, has value: " + String(m_dot_circuit_kg_s_2, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2152};
  modelica_boolean tmp1418;
  modelica_boolean tmp1419;
  static const MMC_DEFSTRINGLIT(tmp1420,87,"Variable violating min/max constraint: -1e5 <= m_dot_circuit_kg_s_2 <= 1e5, has value: ");
  modelica_string tmp1421;
  modelica_metatype tmpMeta1422;
  static int tmp1423 = 0;
  if(!tmp1423)
  {
    tmp1418 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */),-1e5);
    tmp1419 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */),1e5);
    if(!(tmp1418 && tmp1419))
    {
      tmp1421 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* m_dot_circuit_kg_s_2 variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1422 = stringAppend(MMC_REFSTRINGLIT(tmp1420),tmp1421);
      {
        const char* assert_cond = "(m_dot_circuit_kg_s_2 >= -1e5 and m_dot_circuit_kg_s_2 <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/ClosedLoopM1eCS.mo",135,3,135,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1422));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/ClosedLoopM1eCS.mo",135,3,135,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1422));
        }
      }
      tmp1423 = 1;
    }
  }
  threadData->lastEquationSolved = 2152;
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1eCS_checkForAsserts(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[241])(DATA*, threadData_t*) = {
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1912,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1913,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1914,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1915,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1916,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1917,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1918,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1919,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1920,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1921,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1922,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1923,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1924,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1925,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1926,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1927,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1928,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1929,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1930,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1931,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1932,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1933,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1934,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1935,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1936,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1937,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1938,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1939,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1940,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1941,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1942,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1943,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1944,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1945,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1946,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1947,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1948,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1949,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1950,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1951,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1952,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1953,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1954,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1955,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1956,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1957,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1958,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1959,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1960,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1961,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1962,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1963,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1964,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1965,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1966,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1967,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1968,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1969,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1970,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1971,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1972,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1973,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1974,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1975,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1976,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1977,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1978,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1979,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1980,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1981,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1982,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1983,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1984,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1985,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1986,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1987,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1988,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1989,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1990,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1991,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1992,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1993,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1994,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1995,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1996,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1997,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1998,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1999,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2000,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2001,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2002,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2003,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2004,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2005,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2006,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2007,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2008,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2009,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2010,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2011,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2012,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2013,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2014,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2015,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2016,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2017,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2018,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2019,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2020,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2021,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2022,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2023,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2024,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2025,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2026,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2027,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2028,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2029,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2030,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2031,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2032,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2033,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2034,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2035,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2036,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2037,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2038,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2039,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2040,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2041,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2042,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2043,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2044,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2045,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2046,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2047,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2048,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2049,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2050,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2051,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2052,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2053,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2054,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2055,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2056,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2057,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2058,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2059,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2060,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2061,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2062,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2063,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2064,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2065,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2066,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2067,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2068,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2069,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2070,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2071,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2072,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2073,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2074,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2075,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2076,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2077,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2078,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2079,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2080,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2081,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2082,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2083,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2084,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2085,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2086,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2087,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2088,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2089,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2090,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2091,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2092,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2093,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2094,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2095,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2096,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2097,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2098,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2099,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2100,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2101,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2102,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2103,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2104,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2105,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2106,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2107,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2108,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2109,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2110,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2111,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2112,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2113,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2114,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2115,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2116,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2117,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2118,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2119,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2120,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2121,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2122,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2123,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2124,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2125,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2126,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2127,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2128,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2129,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2130,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2131,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2132,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2133,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2134,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2135,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2136,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2137,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2138,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2139,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2140,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2141,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2142,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2143,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2144,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2145,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2146,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2147,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2148,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2149,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2150,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2151,
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_2152
  };
  
  for (int id = 0; id < 241; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
