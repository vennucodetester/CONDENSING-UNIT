/* Asserts */
#include "RefrigerationTrainer.ClosedLoopM1e_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1813
type: ALGORITHM

  assert(comp.vaporIn.T >= 1.0 and comp.vaporIn.T <= 1e4, "Variable violating min/max constraint: 1.0 <= comp.vaporIn.T <= 1e4, has value: " + String(comp.vaporIn.T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1813};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,80,"Variable violating min/max constraint: 1.0 <= comp.vaporIn.T <= 1e4, has value: ");
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  static int tmp5 = 0;
  if(!tmp5)
  {
    tmp0 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[688]] /* comp.vaporIn.T variable */),1.0);
    tmp1 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[688]] /* comp.vaporIn.T variable */),1e4);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[688]] /* comp.vaporIn.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta4 = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        const char* assert_cond = "(comp.vaporIn.T >= 1.0 and comp.vaporIn.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",38,5,38,32,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",38,5,38,32,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4));
        }
      }
      tmp5 = 1;
    }
  }
  threadData->lastEquationSolved = 1813;
}

/*
equation index: 1814
type: ALGORITHM

  assert(comp.vaporIn.a >= 0.0 and comp.vaporIn.a <= 1e5, "Variable violating min/max constraint: 0.0 <= comp.vaporIn.a <= 1e5, has value: " + String(comp.vaporIn.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1814};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  static const MMC_DEFSTRINGLIT(tmp8,80,"Variable violating min/max constraint: 0.0 <= comp.vaporIn.a <= 1e5, has value: ");
  modelica_string tmp9;
  modelica_metatype tmpMeta10;
  static int tmp11 = 0;
  if(!tmp11)
  {
    tmp6 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* comp.vaporIn.a variable */),0.0);
    tmp7 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* comp.vaporIn.a variable */),1e5);
    if(!(tmp6 && tmp7))
    {
      tmp9 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* comp.vaporIn.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta10 = stringAppend(MMC_REFSTRINGLIT(tmp8),tmp9);
      {
        const char* assert_cond = "(comp.vaporIn.a >= 0.0 and comp.vaporIn.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta10));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta10));
        }
      }
      tmp11 = 1;
    }
  }
  threadData->lastEquationSolved = 1814;
}

/*
equation index: 1815
type: ALGORITHM

  assert(comp.vaporIn.cp >= 0.0 and comp.vaporIn.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= comp.vaporIn.cp <= 1e7, has value: " + String(comp.vaporIn.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1815};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  static const MMC_DEFSTRINGLIT(tmp14,81,"Variable violating min/max constraint: 0.0 <= comp.vaporIn.cp <= 1e7, has value: ");
  modelica_string tmp15;
  modelica_metatype tmpMeta16;
  static int tmp17 = 0;
  if(!tmp17)
  {
    tmp12 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* comp.vaporIn.cp variable */),0.0);
    tmp13 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* comp.vaporIn.cp variable */),1e7);
    if(!(tmp12 && tmp13))
    {
      tmp15 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* comp.vaporIn.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta16 = stringAppend(MMC_REFSTRINGLIT(tmp14),tmp15);
      {
        const char* assert_cond = "(comp.vaporIn.cp >= 0.0 and comp.vaporIn.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta16));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta16));
        }
      }
      tmp17 = 1;
    }
  }
  threadData->lastEquationSolved = 1815;
}

/*
equation index: 1816
type: ALGORITHM

  assert(comp.vaporIn.cv >= 0.0 and comp.vaporIn.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= comp.vaporIn.cv <= 1e7, has value: " + String(comp.vaporIn.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1816};
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,81,"Variable violating min/max constraint: 0.0 <= comp.vaporIn.cv <= 1e7, has value: ");
  modelica_string tmp21;
  modelica_metatype tmpMeta22;
  static int tmp23 = 0;
  if(!tmp23)
  {
    tmp18 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* comp.vaporIn.cv variable */),0.0);
    tmp19 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* comp.vaporIn.cv variable */),1e7);
    if(!(tmp18 && tmp19))
    {
      tmp21 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* comp.vaporIn.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta22 = stringAppend(MMC_REFSTRINGLIT(tmp20),tmp21);
      {
        const char* assert_cond = "(comp.vaporIn.cv >= 0.0 and comp.vaporIn.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta22));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta22));
        }
      }
      tmp23 = 1;
    }
  }
  threadData->lastEquationSolved = 1816;
}

/*
equation index: 1817
type: ALGORITHM

  assert(comp.vaporIn.eta >= 0.0 and comp.vaporIn.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= comp.vaporIn.eta <= 1e8, has value: " + String(comp.vaporIn.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1817};
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,82,"Variable violating min/max constraint: 0.0 <= comp.vaporIn.eta <= 1e8, has value: ");
  modelica_string tmp27;
  modelica_metatype tmpMeta28;
  static int tmp29 = 0;
  if(!tmp29)
  {
    tmp24 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* comp.vaporIn.eta variable */),0.0);
    tmp25 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* comp.vaporIn.eta variable */),1e8);
    if(!(tmp24 && tmp25))
    {
      tmp27 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* comp.vaporIn.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta28 = stringAppend(MMC_REFSTRINGLIT(tmp26),tmp27);
      {
        const char* assert_cond = "(comp.vaporIn.eta >= 0.0 and comp.vaporIn.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta28));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta28));
        }
      }
      tmp29 = 1;
    }
  }
  threadData->lastEquationSolved = 1817;
}

/*
equation index: 1818
type: ALGORITHM

  assert(comp.vaporIn.h >= -1e10 and comp.vaporIn.h <= 1e10, "Variable violating min/max constraint: -1e10 <= comp.vaporIn.h <= 1e10, has value: " + String(comp.vaporIn.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1818};
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,83,"Variable violating min/max constraint: -1e10 <= comp.vaporIn.h <= 1e10, has value: ");
  modelica_string tmp33;
  modelica_metatype tmpMeta34;
  static int tmp35 = 0;
  if(!tmp35)
  {
    tmp30 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* comp.vaporIn.h variable */),-1e10);
    tmp31 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* comp.vaporIn.h variable */),1e10);
    if(!(tmp30 && tmp31))
    {
      tmp33 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* comp.vaporIn.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta34 = stringAppend(MMC_REFSTRINGLIT(tmp32),tmp33);
      {
        const char* assert_cond = "(comp.vaporIn.h >= -1e10 and comp.vaporIn.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta34));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta34));
        }
      }
      tmp35 = 1;
    }
  }
  threadData->lastEquationSolved = 1818;
}

/*
equation index: 1819
type: ALGORITHM

  assert(comp.vaporIn.lambda >= 0.0 and comp.vaporIn.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= comp.vaporIn.lambda <= 500.0, has value: " + String(comp.vaporIn.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1819};
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  static const MMC_DEFSTRINGLIT(tmp38,87,"Variable violating min/max constraint: 0.0 <= comp.vaporIn.lambda <= 500.0, has value: ");
  modelica_string tmp39;
  modelica_metatype tmpMeta40;
  static int tmp41 = 0;
  if(!tmp41)
  {
    tmp36 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* comp.vaporIn.lambda variable */),0.0);
    tmp37 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* comp.vaporIn.lambda variable */),500.0);
    if(!(tmp36 && tmp37))
    {
      tmp39 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* comp.vaporIn.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta40 = stringAppend(MMC_REFSTRINGLIT(tmp38),tmp39);
      {
        const char* assert_cond = "(comp.vaporIn.lambda >= 0.0 and comp.vaporIn.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta40));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta40));
        }
      }
      tmp41 = 1;
    }
  }
  threadData->lastEquationSolved = 1819;
}

/*
equation index: 1820
type: ALGORITHM

  assert(comp.vaporIn.p >= 0.0 and comp.vaporIn.p <= 1e8, "Variable violating min/max constraint: 0.0 <= comp.vaporIn.p <= 1e8, has value: " + String(comp.vaporIn.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1820};
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  static const MMC_DEFSTRINGLIT(tmp44,80,"Variable violating min/max constraint: 0.0 <= comp.vaporIn.p <= 1e8, has value: ");
  modelica_string tmp45;
  modelica_metatype tmpMeta46;
  static int tmp47 = 0;
  if(!tmp47)
  {
    tmp42 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* comp.vaporIn.p variable */),0.0);
    tmp43 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* comp.vaporIn.p variable */),1e8);
    if(!(tmp42 && tmp43))
    {
      tmp45 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* comp.vaporIn.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta46 = stringAppend(MMC_REFSTRINGLIT(tmp44),tmp45);
      {
        const char* assert_cond = "(comp.vaporIn.p >= 0.0 and comp.vaporIn.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta46));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta46));
        }
      }
      tmp47 = 1;
    }
  }
  threadData->lastEquationSolved = 1820;
}

/*
equation index: 1821
type: ALGORITHM

  assert(comp.vaporIn.phase >= 0 and comp.vaporIn.phase <= 2, "Variable violating min/max constraint: 0 <= comp.vaporIn.phase <= 2, has value: " + String(comp.vaporIn.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1821};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  static const MMC_DEFSTRINGLIT(tmp50,80,"Variable violating min/max constraint: 0 <= comp.vaporIn.phase <= 2, has value: ");
  modelica_string tmp51;
  modelica_metatype tmpMeta52;
  static int tmp53 = 0;
  if(!tmp53)
  {
    tmp48 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* comp.vaporIn.phase DISCRETE */),((modelica_integer) 0));
    tmp49 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* comp.vaporIn.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp48 && tmp49))
    {
      tmp51 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* comp.vaporIn.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta52 = stringAppend(MMC_REFSTRINGLIT(tmp50),tmp51);
      {
        const char* assert_cond = "(comp.vaporIn.phase >= 0 and comp.vaporIn.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta52));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta52));
        }
      }
      tmp53 = 1;
    }
  }
  threadData->lastEquationSolved = 1821;
}

/*
equation index: 1822
type: ALGORITHM

  assert(comp.vaporOut.T >= 1.0 and comp.vaporOut.T <= 1e4, "Variable violating min/max constraint: 1.0 <= comp.vaporOut.T <= 1e4, has value: " + String(comp.vaporOut.T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1822};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  static const MMC_DEFSTRINGLIT(tmp56,81,"Variable violating min/max constraint: 1.0 <= comp.vaporOut.T <= 1e4, has value: ");
  modelica_string tmp57;
  modelica_metatype tmpMeta58;
  static int tmp59 = 0;
  if(!tmp59)
  {
    tmp54 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* comp.vaporOut.T variable */),1.0);
    tmp55 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* comp.vaporOut.T variable */),1e4);
    if(!(tmp54 && tmp55))
    {
      tmp57 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* comp.vaporOut.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta58 = stringAppend(MMC_REFSTRINGLIT(tmp56),tmp57);
      {
        const char* assert_cond = "(comp.vaporOut.T >= 1.0 and comp.vaporOut.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",38,5,38,32,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta58));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",38,5,38,32,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta58));
        }
      }
      tmp59 = 1;
    }
  }
  threadData->lastEquationSolved = 1822;
}

/*
equation index: 1823
type: ALGORITHM

  assert(comp.vaporOut.a >= 0.0 and comp.vaporOut.a <= 1e5, "Variable violating min/max constraint: 0.0 <= comp.vaporOut.a <= 1e5, has value: " + String(comp.vaporOut.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1823};
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  static const MMC_DEFSTRINGLIT(tmp62,81,"Variable violating min/max constraint: 0.0 <= comp.vaporOut.a <= 1e5, has value: ");
  modelica_string tmp63;
  modelica_metatype tmpMeta64;
  static int tmp65 = 0;
  if(!tmp65)
  {
    tmp60 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[701]] /* comp.vaporOut.a variable */),0.0);
    tmp61 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[701]] /* comp.vaporOut.a variable */),1e5);
    if(!(tmp60 && tmp61))
    {
      tmp63 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[701]] /* comp.vaporOut.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta64 = stringAppend(MMC_REFSTRINGLIT(tmp62),tmp63);
      {
        const char* assert_cond = "(comp.vaporOut.a >= 0.0 and comp.vaporOut.a <= 1e5)";
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
  threadData->lastEquationSolved = 1823;
}

/*
equation index: 1824
type: ALGORITHM

  assert(comp.vaporOut.cp >= 0.0 and comp.vaporOut.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= comp.vaporOut.cp <= 1e7, has value: " + String(comp.vaporOut.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1824};
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  static const MMC_DEFSTRINGLIT(tmp68,82,"Variable violating min/max constraint: 0.0 <= comp.vaporOut.cp <= 1e7, has value: ");
  modelica_string tmp69;
  modelica_metatype tmpMeta70;
  static int tmp71 = 0;
  if(!tmp71)
  {
    tmp66 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[703]] /* comp.vaporOut.cp variable */),0.0);
    tmp67 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[703]] /* comp.vaporOut.cp variable */),1e7);
    if(!(tmp66 && tmp67))
    {
      tmp69 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[703]] /* comp.vaporOut.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta70 = stringAppend(MMC_REFSTRINGLIT(tmp68),tmp69);
      {
        const char* assert_cond = "(comp.vaporOut.cp >= 0.0 and comp.vaporOut.cp <= 1e7)";
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
  threadData->lastEquationSolved = 1824;
}

/*
equation index: 1825
type: ALGORITHM

  assert(comp.vaporOut.cv >= 0.0 and comp.vaporOut.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= comp.vaporOut.cv <= 1e7, has value: " + String(comp.vaporOut.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1825};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,82,"Variable violating min/max constraint: 0.0 <= comp.vaporOut.cv <= 1e7, has value: ");
  modelica_string tmp75;
  modelica_metatype tmpMeta76;
  static int tmp77 = 0;
  if(!tmp77)
  {
    tmp72 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* comp.vaporOut.cv variable */),0.0);
    tmp73 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* comp.vaporOut.cv variable */),1e7);
    if(!(tmp72 && tmp73))
    {
      tmp75 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* comp.vaporOut.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta76 = stringAppend(MMC_REFSTRINGLIT(tmp74),tmp75);
      {
        const char* assert_cond = "(comp.vaporOut.cv >= 0.0 and comp.vaporOut.cv <= 1e7)";
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
  threadData->lastEquationSolved = 1825;
}

/*
equation index: 1826
type: ALGORITHM

  assert(comp.vaporOut.d >= 0.0 and comp.vaporOut.d <= 1e5, "Variable violating min/max constraint: 0.0 <= comp.vaporOut.d <= 1e5, has value: " + String(comp.vaporOut.d, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1826};
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  static const MMC_DEFSTRINGLIT(tmp80,81,"Variable violating min/max constraint: 0.0 <= comp.vaporOut.d <= 1e5, has value: ");
  modelica_string tmp81;
  modelica_metatype tmpMeta82;
  static int tmp83 = 0;
  if(!tmp83)
  {
    tmp78 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* comp.vaporOut.d variable */),0.0);
    tmp79 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* comp.vaporOut.d variable */),1e5);
    if(!(tmp78 && tmp79))
    {
      tmp81 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* comp.vaporOut.d variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta82 = stringAppend(MMC_REFSTRINGLIT(tmp80),tmp81);
      {
        const char* assert_cond = "(comp.vaporOut.d >= 0.0 and comp.vaporOut.d <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",44,5,44,24,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta82));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",44,5,44,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta82));
        }
      }
      tmp83 = 1;
    }
  }
  threadData->lastEquationSolved = 1826;
}

/*
equation index: 1827
type: ALGORITHM

  assert(comp.vaporOut.eta >= 0.0 and comp.vaporOut.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= comp.vaporOut.eta <= 1e8, has value: " + String(comp.vaporOut.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1827};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  static const MMC_DEFSTRINGLIT(tmp86,83,"Variable violating min/max constraint: 0.0 <= comp.vaporOut.eta <= 1e8, has value: ");
  modelica_string tmp87;
  modelica_metatype tmpMeta88;
  static int tmp89 = 0;
  if(!tmp89)
  {
    tmp84 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* comp.vaporOut.eta variable */),0.0);
    tmp85 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* comp.vaporOut.eta variable */),1e8);
    if(!(tmp84 && tmp85))
    {
      tmp87 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* comp.vaporOut.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta88 = stringAppend(MMC_REFSTRINGLIT(tmp86),tmp87);
      {
        const char* assert_cond = "(comp.vaporOut.eta >= 0.0 and comp.vaporOut.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta88));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta88));
        }
      }
      tmp89 = 1;
    }
  }
  threadData->lastEquationSolved = 1827;
}

/*
equation index: 1828
type: ALGORITHM

  assert(comp.vaporOut.lambda >= 0.0 and comp.vaporOut.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= comp.vaporOut.lambda <= 500.0, has value: " + String(comp.vaporOut.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1828};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  static const MMC_DEFSTRINGLIT(tmp92,88,"Variable violating min/max constraint: 0.0 <= comp.vaporOut.lambda <= 500.0, has value: ");
  modelica_string tmp93;
  modelica_metatype tmpMeta94;
  static int tmp95 = 0;
  if(!tmp95)
  {
    tmp90 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* comp.vaporOut.lambda variable */),0.0);
    tmp91 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* comp.vaporOut.lambda variable */),500.0);
    if(!(tmp90 && tmp91))
    {
      tmp93 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* comp.vaporOut.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta94 = stringAppend(MMC_REFSTRINGLIT(tmp92),tmp93);
      {
        const char* assert_cond = "(comp.vaporOut.lambda >= 0.0 and comp.vaporOut.lambda <= 500.0)";
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
  threadData->lastEquationSolved = 1828;
}

/*
equation index: 1829
type: ALGORITHM

  assert(comp.vaporOut.p >= 0.0 and comp.vaporOut.p <= 1e8, "Variable violating min/max constraint: 0.0 <= comp.vaporOut.p <= 1e8, has value: " + String(comp.vaporOut.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1829};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  static const MMC_DEFSTRINGLIT(tmp98,81,"Variable violating min/max constraint: 0.0 <= comp.vaporOut.p <= 1e8, has value: ");
  modelica_string tmp99;
  modelica_metatype tmpMeta100;
  static int tmp101 = 0;
  if(!tmp101)
  {
    tmp96 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[711]] /* comp.vaporOut.p variable */),0.0);
    tmp97 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[711]] /* comp.vaporOut.p variable */),1e8);
    if(!(tmp96 && tmp97))
    {
      tmp99 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[711]] /* comp.vaporOut.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta100 = stringAppend(MMC_REFSTRINGLIT(tmp98),tmp99);
      {
        const char* assert_cond = "(comp.vaporOut.p >= 0.0 and comp.vaporOut.p <= 1e8)";
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
  threadData->lastEquationSolved = 1829;
}

/*
equation index: 1830
type: ALGORITHM

  assert(comp.vaporOut.phase >= 0 and comp.vaporOut.phase <= 2, "Variable violating min/max constraint: 0 <= comp.vaporOut.phase <= 2, has value: " + String(comp.vaporOut.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1830};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  static const MMC_DEFSTRINGLIT(tmp104,81,"Variable violating min/max constraint: 0 <= comp.vaporOut.phase <= 2, has value: ");
  modelica_string tmp105;
  modelica_metatype tmpMeta106;
  static int tmp107 = 0;
  if(!tmp107)
  {
    tmp102 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[27]] /* comp.vaporOut.phase DISCRETE */),((modelica_integer) 0));
    tmp103 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[27]] /* comp.vaporOut.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp102 && tmp103))
    {
      tmp105 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[27]] /* comp.vaporOut.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta106 = stringAppend(MMC_REFSTRINGLIT(tmp104),tmp105);
      {
        const char* assert_cond = "(comp.vaporOut.phase >= 0 and comp.vaporOut.phase <= 2)";
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
  threadData->lastEquationSolved = 1830;
}

/*
equation index: 1831
type: ALGORITHM

  assert(comp.vaporOut.s >= -1e7 and comp.vaporOut.s <= 1e7, "Variable violating min/max constraint: -1e7 <= comp.vaporOut.s <= 1e7, has value: " + String(comp.vaporOut.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1831};
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  static const MMC_DEFSTRINGLIT(tmp110,82,"Variable violating min/max constraint: -1e7 <= comp.vaporOut.s <= 1e7, has value: ");
  modelica_string tmp111;
  modelica_metatype tmpMeta112;
  static int tmp113 = 0;
  if(!tmp113)
  {
    tmp108 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* comp.vaporOut.s variable */),-1e7);
    tmp109 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* comp.vaporOut.s variable */),1e7);
    if(!(tmp108 && tmp109))
    {
      tmp111 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* comp.vaporOut.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta112 = stringAppend(MMC_REFSTRINGLIT(tmp110),tmp111);
      {
        const char* assert_cond = "(comp.vaporOut.s >= -1e7 and comp.vaporOut.s <= 1e7)";
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
  threadData->lastEquationSolved = 1831;
}

/*
equation index: 1832
type: ALGORITHM

  assert(comp.rho_su >= 0.0 and comp.rho_su <= 1e5, "Variable violating min/max constraint: 0.0 <= comp.rho_su <= 1e5, has value: " + String(comp.rho_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1832};
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  static const MMC_DEFSTRINGLIT(tmp116,77,"Variable violating min/max constraint: 0.0 <= comp.rho_su <= 1e5, has value: ");
  modelica_string tmp117;
  modelica_metatype tmpMeta118;
  static int tmp119 = 0;
  if(!tmp119)
  {
    tmp114 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* comp.rho_su variable */),0.0);
    tmp115 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* comp.rho_su variable */),1e5);
    if(!(tmp114 && tmp115))
    {
      tmp117 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* comp.rho_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta118 = stringAppend(MMC_REFSTRINGLIT(tmp116),tmp117);
      {
        const char* assert_cond = "(comp.rho_su >= 0.0 and comp.rho_su <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/ExpansionAndCompressionMachines/Compressor.mo",59,3,59,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta118));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/ExpansionAndCompressionMachines/Compressor.mo",59,3,59,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta118));
        }
      }
      tmp119 = 1;
    }
  }
  threadData->lastEquationSolved = 1832;
}

/*
equation index: 1833
type: ALGORITHM

  assert(comp.s_su >= -1e7 and comp.s_su <= 1e7, "Variable violating min/max constraint: -1e7 <= comp.s_su <= 1e7, has value: " + String(comp.s_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1833};
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  static const MMC_DEFSTRINGLIT(tmp122,76,"Variable violating min/max constraint: -1e7 <= comp.s_su <= 1e7, has value: ");
  modelica_string tmp123;
  modelica_metatype tmpMeta124;
  static int tmp125 = 0;
  if(!tmp125)
  {
    tmp120 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* comp.s_su variable */),-1e7);
    tmp121 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* comp.s_su variable */),1e7);
    if(!(tmp120 && tmp121))
    {
      tmp123 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* comp.s_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta124 = stringAppend(MMC_REFSTRINGLIT(tmp122),tmp123);
      {
        const char* assert_cond = "(comp.s_su >= -1e7 and comp.s_su <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/ExpansionAndCompressionMachines/Compressor.mo",60,3,60,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta124));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/ExpansionAndCompressionMachines/Compressor.mo",60,3,60,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta124));
        }
      }
      tmp125 = 1;
    }
  }
  threadData->lastEquationSolved = 1833;
}

/*
equation index: 1834
type: ALGORITHM

  assert(comp.h_su >= -1e10 and comp.h_su <= 1e10, "Variable violating min/max constraint: -1e10 <= comp.h_su <= 1e10, has value: " + String(comp.h_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1834};
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  static const MMC_DEFSTRINGLIT(tmp128,78,"Variable violating min/max constraint: -1e10 <= comp.h_su <= 1e10, has value: ");
  modelica_string tmp129;
  modelica_metatype tmpMeta130;
  static int tmp131 = 0;
  if(!tmp131)
  {
    tmp126 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */),-1e10);
    tmp127 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */),1e10);
    if(!(tmp126 && tmp127))
    {
      tmp129 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* comp.h_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta130 = stringAppend(MMC_REFSTRINGLIT(tmp128),tmp129);
      {
        const char* assert_cond = "(comp.h_su >= -1e10 and comp.h_su <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/ExpansionAndCompressionMachines/Compressor.mo",61,3,61,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta130));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/ExpansionAndCompressionMachines/Compressor.mo",61,3,61,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta130));
        }
      }
      tmp131 = 1;
    }
  }
  threadData->lastEquationSolved = 1834;
}

/*
equation index: 1835
type: ALGORITHM

  assert(comp.h_ex >= -1e10 and comp.h_ex <= 1e10, "Variable violating min/max constraint: -1e10 <= comp.h_ex <= 1e10, has value: " + String(comp.h_ex, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1835};
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  static const MMC_DEFSTRINGLIT(tmp134,78,"Variable violating min/max constraint: -1e10 <= comp.h_ex <= 1e10, has value: ");
  modelica_string tmp135;
  modelica_metatype tmpMeta136;
  static int tmp137 = 0;
  if(!tmp137)
  {
    tmp132 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* comp.h_ex variable */),-1e10);
    tmp133 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* comp.h_ex variable */),1e10);
    if(!(tmp132 && tmp133))
    {
      tmp135 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* comp.h_ex variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta136 = stringAppend(MMC_REFSTRINGLIT(tmp134),tmp135);
      {
        const char* assert_cond = "(comp.h_ex >= -1e10 and comp.h_ex <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/ExpansionAndCompressionMachines/Compressor.mo",62,3,62,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta136));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/ExpansionAndCompressionMachines/Compressor.mo",62,3,62,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta136));
        }
      }
      tmp137 = 1;
    }
  }
  threadData->lastEquationSolved = 1835;
}

/*
equation index: 1836
type: ALGORITHM

  assert(comp.h_ex_s >= -1e10 and comp.h_ex_s <= 1e10, "Variable violating min/max constraint: -1e10 <= comp.h_ex_s <= 1e10, has value: " + String(comp.h_ex_s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1836};
  modelica_boolean tmp138;
  modelica_boolean tmp139;
  static const MMC_DEFSTRINGLIT(tmp140,80,"Variable violating min/max constraint: -1e10 <= comp.h_ex_s <= 1e10, has value: ");
  modelica_string tmp141;
  modelica_metatype tmpMeta142;
  static int tmp143 = 0;
  if(!tmp143)
  {
    tmp138 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* comp.h_ex_s variable */),-1e10);
    tmp139 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* comp.h_ex_s variable */),1e10);
    if(!(tmp138 && tmp139))
    {
      tmp141 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* comp.h_ex_s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta142 = stringAppend(MMC_REFSTRINGLIT(tmp140),tmp141);
      {
        const char* assert_cond = "(comp.h_ex_s >= -1e10 and comp.h_ex_s <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/ExpansionAndCompressionMachines/Compressor.mo",65,3,65,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta142));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/ExpansionAndCompressionMachines/Compressor.mo",65,3,65,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta142));
        }
      }
      tmp143 = 1;
    }
  }
  threadData->lastEquationSolved = 1836;
}

/*
equation index: 1837
type: ALGORITHM

  assert(cond.M_tot >= 0.0, "Variable violating min constraint: 0.0 <= cond.M_tot, has value: " + String(cond.M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1837};
  modelica_boolean tmp144;
  static const MMC_DEFSTRINGLIT(tmp145,65,"Variable violating min constraint: 0.0 <= cond.M_tot, has value: ");
  modelica_string tmp146;
  modelica_metatype tmpMeta147;
  static int tmp148 = 0;
  if(!tmp148)
  {
    tmp144 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[982]] /* cond.M_tot variable */),0.0);
    if(!tmp144)
    {
      tmp146 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[982]] /* cond.M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta147 = stringAppend(MMC_REFSTRINGLIT(tmp145),tmp146);
      {
        const char* assert_cond = "(cond.M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",103,3,103,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta147));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",103,3,103,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta147));
        }
      }
      tmp148 = 1;
    }
  }
  threadData->lastEquationSolved = 1837;
}

/*
equation index: 1838
type: ALGORITHM

  assert(cond.Cells[1].fluidState.a >= 0.0 and cond.Cells[1].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.a <= 1e5, has value: " + String(cond.Cells[1].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1838};
  modelica_boolean tmp149;
  modelica_boolean tmp150;
  static const MMC_DEFSTRINGLIT(tmp151,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.a <= 1e5, has value: ");
  modelica_string tmp152;
  modelica_metatype tmpMeta153;
  static int tmp154 = 0;
  if(!tmp154)
  {
    tmp149 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cond.Cells[1].fluidState.a variable */),0.0);
    tmp150 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cond.Cells[1].fluidState.a variable */),1e5);
    if(!(tmp149 && tmp150))
    {
      tmp152 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cond.Cells[1].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta153 = stringAppend(MMC_REFSTRINGLIT(tmp151),tmp152);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.a >= 0.0 and cond.Cells[1].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta153));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta153));
        }
      }
      tmp154 = 1;
    }
  }
  threadData->lastEquationSolved = 1838;
}

/*
equation index: 1839
type: ALGORITHM

  assert(cond.Cells[1].fluidState.cp >= 0.0 and cond.Cells[1].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.cp <= 1e7, has value: " + String(cond.Cells[1].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1839};
  modelica_boolean tmp155;
  modelica_boolean tmp156;
  static const MMC_DEFSTRINGLIT(tmp157,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp158;
  modelica_metatype tmpMeta159;
  static int tmp160 = 0;
  if(!tmp160)
  {
    tmp155 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cond.Cells[1].fluidState.cp variable */),0.0);
    tmp156 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cond.Cells[1].fluidState.cp variable */),1e7);
    if(!(tmp155 && tmp156))
    {
      tmp158 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cond.Cells[1].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta159 = stringAppend(MMC_REFSTRINGLIT(tmp157),tmp158);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.cp >= 0.0 and cond.Cells[1].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta159));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta159));
        }
      }
      tmp160 = 1;
    }
  }
  threadData->lastEquationSolved = 1839;
}

/*
equation index: 1840
type: ALGORITHM

  assert(cond.Cells[1].fluidState.cv >= 0.0 and cond.Cells[1].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.cv <= 1e7, has value: " + String(cond.Cells[1].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1840};
  modelica_boolean tmp161;
  modelica_boolean tmp162;
  static const MMC_DEFSTRINGLIT(tmp163,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp164;
  modelica_metatype tmpMeta165;
  static int tmp166 = 0;
  if(!tmp166)
  {
    tmp161 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cond.Cells[1].fluidState.cv variable */),0.0);
    tmp162 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cond.Cells[1].fluidState.cv variable */),1e7);
    if(!(tmp161 && tmp162))
    {
      tmp164 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cond.Cells[1].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta165 = stringAppend(MMC_REFSTRINGLIT(tmp163),tmp164);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.cv >= 0.0 and cond.Cells[1].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta165));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta165));
        }
      }
      tmp166 = 1;
    }
  }
  threadData->lastEquationSolved = 1840;
}

/*
equation index: 1841
type: ALGORITHM

  assert(cond.Cells[1].fluidState.eta >= 0.0 and cond.Cells[1].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.eta <= 1e8, has value: " + String(cond.Cells[1].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1841};
  modelica_boolean tmp167;
  modelica_boolean tmp168;
  static const MMC_DEFSTRINGLIT(tmp169,94,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp170;
  modelica_metatype tmpMeta171;
  static int tmp172 = 0;
  if(!tmp172)
  {
    tmp167 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* cond.Cells[1].fluidState.eta variable */),0.0);
    tmp168 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* cond.Cells[1].fluidState.eta variable */),1e8);
    if(!(tmp167 && tmp168))
    {
      tmp170 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* cond.Cells[1].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta171 = stringAppend(MMC_REFSTRINGLIT(tmp169),tmp170);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.eta >= 0.0 and cond.Cells[1].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta171));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta171));
        }
      }
      tmp172 = 1;
    }
  }
  threadData->lastEquationSolved = 1841;
}

/*
equation index: 1842
type: ALGORITHM

  assert(cond.Cells[1].fluidState.h >= -1e10 and cond.Cells[1].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[1].fluidState.h <= 1e10, has value: " + String(cond.Cells[1].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1842};
  modelica_boolean tmp173;
  modelica_boolean tmp174;
  static const MMC_DEFSTRINGLIT(tmp175,95,"Variable violating min/max constraint: -1e10 <= cond.Cells[1].fluidState.h <= 1e10, has value: ");
  modelica_string tmp176;
  modelica_metatype tmpMeta177;
  static int tmp178 = 0;
  if(!tmp178)
  {
    tmp173 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* cond.Cells[1].fluidState.h variable */),-1e10);
    tmp174 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* cond.Cells[1].fluidState.h variable */),1e10);
    if(!(tmp173 && tmp174))
    {
      tmp176 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* cond.Cells[1].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta177 = stringAppend(MMC_REFSTRINGLIT(tmp175),tmp176);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.h >= -1e10 and cond.Cells[1].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta177));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta177));
        }
      }
      tmp178 = 1;
    }
  }
  threadData->lastEquationSolved = 1842;
}

/*
equation index: 1843
type: ALGORITHM

  assert(cond.Cells[1].fluidState.lambda >= 0.0 and cond.Cells[1].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.lambda <= 500.0, has value: " + String(cond.Cells[1].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1843};
  modelica_boolean tmp179;
  modelica_boolean tmp180;
  static const MMC_DEFSTRINGLIT(tmp181,99,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp182;
  modelica_metatype tmpMeta183;
  static int tmp184 = 0;
  if(!tmp184)
  {
    tmp179 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* cond.Cells[1].fluidState.lambda variable */),0.0);
    tmp180 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* cond.Cells[1].fluidState.lambda variable */),500.0);
    if(!(tmp179 && tmp180))
    {
      tmp182 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* cond.Cells[1].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta183 = stringAppend(MMC_REFSTRINGLIT(tmp181),tmp182);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.lambda >= 0.0 and cond.Cells[1].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta183));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta183));
        }
      }
      tmp184 = 1;
    }
  }
  threadData->lastEquationSolved = 1843;
}

/*
equation index: 1844
type: ALGORITHM

  assert(cond.Cells[1].fluidState.p >= 0.0 and cond.Cells[1].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.p <= 1e8, has value: " + String(cond.Cells[1].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1844};
  modelica_boolean tmp185;
  modelica_boolean tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].fluidState.p <= 1e8, has value: ");
  modelica_string tmp188;
  modelica_metatype tmpMeta189;
  static int tmp190 = 0;
  if(!tmp190)
  {
    tmp185 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cond.Cells[1].fluidState.p variable */),0.0);
    tmp186 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cond.Cells[1].fluidState.p variable */),1e8);
    if(!(tmp185 && tmp186))
    {
      tmp188 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cond.Cells[1].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta189 = stringAppend(MMC_REFSTRINGLIT(tmp187),tmp188);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.p >= 0.0 and cond.Cells[1].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta189));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta189));
        }
      }
      tmp190 = 1;
    }
  }
  threadData->lastEquationSolved = 1844;
}

/*
equation index: 1845
type: ALGORITHM

  assert(cond.Cells[1].fluidState.phase >= 0 and cond.Cells[1].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= cond.Cells[1].fluidState.phase <= 2, has value: " + String(cond.Cells[1].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1845};
  modelica_boolean tmp191;
  modelica_boolean tmp192;
  static const MMC_DEFSTRINGLIT(tmp193,92,"Variable violating min/max constraint: 0 <= cond.Cells[1].fluidState.phase <= 2, has value: ");
  modelica_string tmp194;
  modelica_metatype tmpMeta195;
  static int tmp196 = 0;
  if(!tmp196)
  {
    tmp191 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[28]] /* cond.Cells[1].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp192 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[28]] /* cond.Cells[1].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp191 && tmp192))
    {
      tmp194 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[28]] /* cond.Cells[1].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta195 = stringAppend(MMC_REFSTRINGLIT(tmp193),tmp194);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.phase >= 0 and cond.Cells[1].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta195));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta195));
        }
      }
      tmp196 = 1;
    }
  }
  threadData->lastEquationSolved = 1845;
}

/*
equation index: 1846
type: ALGORITHM

  assert(cond.Cells[1].fluidState.s >= -1e7 and cond.Cells[1].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[1].fluidState.s <= 1e7, has value: " + String(cond.Cells[1].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1846};
  modelica_boolean tmp197;
  modelica_boolean tmp198;
  static const MMC_DEFSTRINGLIT(tmp199,93,"Variable violating min/max constraint: -1e7 <= cond.Cells[1].fluidState.s <= 1e7, has value: ");
  modelica_string tmp200;
  modelica_metatype tmpMeta201;
  static int tmp202 = 0;
  if(!tmp202)
  {
    tmp197 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* cond.Cells[1].fluidState.s variable */),-1e7);
    tmp198 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* cond.Cells[1].fluidState.s variable */),1e7);
    if(!(tmp197 && tmp198))
    {
      tmp200 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* cond.Cells[1].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta201 = stringAppend(MMC_REFSTRINGLIT(tmp199),tmp200);
      {
        const char* assert_cond = "(cond.Cells[1].fluidState.s >= -1e7 and cond.Cells[1].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta201));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta201));
        }
      }
      tmp202 = 1;
    }
  }
  threadData->lastEquationSolved = 1846;
}

/*
equation index: 1847
type: ALGORITHM

  assert(cond.Cells[1].sat.Tsat >= 1.0 and cond.Cells[1].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[1].sat.Tsat <= 1e4, has value: " + String(cond.Cells[1].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1847};
  modelica_boolean tmp203;
  modelica_boolean tmp204;
  static const MMC_DEFSTRINGLIT(tmp205,88,"Variable violating min/max constraint: 1.0 <= cond.Cells[1].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp206;
  modelica_metatype tmpMeta207;
  static int tmp208 = 0;
  if(!tmp208)
  {
    tmp203 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* cond.Cells[1].sat.Tsat variable */),1.0);
    tmp204 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* cond.Cells[1].sat.Tsat variable */),1e4);
    if(!(tmp203 && tmp204))
    {
      tmp206 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* cond.Cells[1].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta207 = stringAppend(MMC_REFSTRINGLIT(tmp205),tmp206);
      {
        const char* assert_cond = "(cond.Cells[1].sat.Tsat >= 1.0 and cond.Cells[1].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta207));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta207));
        }
      }
      tmp208 = 1;
    }
  }
  threadData->lastEquationSolved = 1847;
}

/*
equation index: 1848
type: ALGORITHM

  assert(cond.Cells[1].sat.dl >= 0.0 and cond.Cells[1].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].sat.dl <= 1e5, has value: " + String(cond.Cells[1].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1848};
  modelica_boolean tmp209;
  modelica_boolean tmp210;
  static const MMC_DEFSTRINGLIT(tmp211,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].sat.dl <= 1e5, has value: ");
  modelica_string tmp212;
  modelica_metatype tmpMeta213;
  static int tmp214 = 0;
  if(!tmp214)
  {
    tmp209 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[877]] /* cond.Cells[1].sat.dl variable */),0.0);
    tmp210 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[877]] /* cond.Cells[1].sat.dl variable */),1e5);
    if(!(tmp209 && tmp210))
    {
      tmp212 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[877]] /* cond.Cells[1].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta213 = stringAppend(MMC_REFSTRINGLIT(tmp211),tmp212);
      {
        const char* assert_cond = "(cond.Cells[1].sat.dl >= 0.0 and cond.Cells[1].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta213));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta213));
        }
      }
      tmp214 = 1;
    }
  }
  threadData->lastEquationSolved = 1848;
}

/*
equation index: 1849
type: ALGORITHM

  assert(cond.Cells[1].sat.dv >= 0.0 and cond.Cells[1].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].sat.dv <= 1e5, has value: " + String(cond.Cells[1].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1849};
  modelica_boolean tmp215;
  modelica_boolean tmp216;
  static const MMC_DEFSTRINGLIT(tmp217,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].sat.dv <= 1e5, has value: ");
  modelica_string tmp218;
  modelica_metatype tmpMeta219;
  static int tmp220 = 0;
  if(!tmp220)
  {
    tmp215 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[882]] /* cond.Cells[1].sat.dv variable */),0.0);
    tmp216 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[882]] /* cond.Cells[1].sat.dv variable */),1e5);
    if(!(tmp215 && tmp216))
    {
      tmp218 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[882]] /* cond.Cells[1].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta219 = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      {
        const char* assert_cond = "(cond.Cells[1].sat.dv >= 0.0 and cond.Cells[1].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta219));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta219));
        }
      }
      tmp220 = 1;
    }
  }
  threadData->lastEquationSolved = 1849;
}

/*
equation index: 1850
type: ALGORITHM

  assert(cond.Cells[1].sat.psat >= 0.0 and cond.Cells[1].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].sat.psat <= 1e8, has value: " + String(cond.Cells[1].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1850};
  modelica_boolean tmp221;
  modelica_boolean tmp222;
  static const MMC_DEFSTRINGLIT(tmp223,88,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].sat.psat <= 1e8, has value: ");
  modelica_string tmp224;
  modelica_metatype tmpMeta225;
  static int tmp226 = 0;
  if(!tmp226)
  {
    tmp221 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* cond.Cells[1].sat.psat variable */),0.0);
    tmp222 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* cond.Cells[1].sat.psat variable */),1e8);
    if(!(tmp221 && tmp222))
    {
      tmp224 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* cond.Cells[1].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta225 = stringAppend(MMC_REFSTRINGLIT(tmp223),tmp224);
      {
        const char* assert_cond = "(cond.Cells[1].sat.psat >= 0.0 and cond.Cells[1].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta225));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta225));
        }
      }
      tmp226 = 1;
    }
  }
  threadData->lastEquationSolved = 1850;
}

/*
equation index: 1851
type: ALGORITHM

  assert(cond.Cells[1].sat.sl >= -1e7 and cond.Cells[1].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[1].sat.sl <= 1e7, has value: " + String(cond.Cells[1].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1851};
  modelica_boolean tmp227;
  modelica_boolean tmp228;
  static const MMC_DEFSTRINGLIT(tmp229,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[1].sat.sl <= 1e7, has value: ");
  modelica_string tmp230;
  modelica_metatype tmpMeta231;
  static int tmp232 = 0;
  if(!tmp232)
  {
    tmp227 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* cond.Cells[1].sat.sl variable */),-1e7);
    tmp228 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* cond.Cells[1].sat.sl variable */),1e7);
    if(!(tmp227 && tmp228))
    {
      tmp230 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* cond.Cells[1].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta231 = stringAppend(MMC_REFSTRINGLIT(tmp229),tmp230);
      {
        const char* assert_cond = "(cond.Cells[1].sat.sl >= -1e7 and cond.Cells[1].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta231));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta231));
        }
      }
      tmp232 = 1;
    }
  }
  threadData->lastEquationSolved = 1851;
}

/*
equation index: 1852
type: ALGORITHM

  assert(cond.Cells[1].sat.sv >= -1e7 and cond.Cells[1].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[1].sat.sv <= 1e7, has value: " + String(cond.Cells[1].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1852};
  modelica_boolean tmp233;
  modelica_boolean tmp234;
  static const MMC_DEFSTRINGLIT(tmp235,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[1].sat.sv <= 1e7, has value: ");
  modelica_string tmp236;
  modelica_metatype tmpMeta237;
  static int tmp238 = 0;
  if(!tmp238)
  {
    tmp233 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* cond.Cells[1].sat.sv variable */),-1e7);
    tmp234 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* cond.Cells[1].sat.sv variable */),1e7);
    if(!(tmp233 && tmp234))
    {
      tmp236 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* cond.Cells[1].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta237 = stringAppend(MMC_REFSTRINGLIT(tmp235),tmp236);
      {
        const char* assert_cond = "(cond.Cells[1].sat.sv >= -1e7 and cond.Cells[1].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta237));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta237));
        }
      }
      tmp238 = 1;
    }
  }
  threadData->lastEquationSolved = 1852;
}

/*
equation index: 1853
type: ALGORITHM

  assert(cond.Cells[1].p >= 0.0 and cond.Cells[1].p <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].p <= 1e8, has value: " + String(cond.Cells[1].p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1853};
  modelica_boolean tmp239;
  modelica_boolean tmp240;
  static const MMC_DEFSTRINGLIT(tmp241,81,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].p <= 1e8, has value: ");
  modelica_string tmp242;
  modelica_metatype tmpMeta243;
  static int tmp244 = 0;
  if(!tmp244)
  {
    tmp239 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */),0.0);
    tmp240 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */),1e8);
    if(!(tmp239 && tmp240))
    {
      tmp242 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* cond.Cells[1].p STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta243 = stringAppend(MMC_REFSTRINGLIT(tmp241),tmp242);
      {
        const char* assert_cond = "(cond.Cells[1].p >= 0.0 and cond.Cells[1].p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",88,3,88,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta243));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",88,3,88,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta243));
        }
      }
      tmp244 = 1;
    }
  }
  threadData->lastEquationSolved = 1853;
}

/*
equation index: 1854
type: ALGORITHM

  assert(cond.Cells[1].h >= -1e10 and cond.Cells[1].h <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[1].h <= 1e10, has value: " + String(cond.Cells[1].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1854};
  modelica_boolean tmp245;
  modelica_boolean tmp246;
  static const MMC_DEFSTRINGLIT(tmp247,84,"Variable violating min/max constraint: -1e10 <= cond.Cells[1].h <= 1e10, has value: ");
  modelica_string tmp248;
  modelica_metatype tmpMeta249;
  static int tmp250 = 0;
  if(!tmp250)
  {
    tmp245 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */),-1e10);
    tmp246 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */),1e10);
    if(!(tmp245 && tmp246))
    {
      tmp248 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* cond.Cells[1].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta249 = stringAppend(MMC_REFSTRINGLIT(tmp247),tmp248);
      {
        const char* assert_cond = "(cond.Cells[1].h >= -1e10 and cond.Cells[1].h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta249));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta249));
        }
      }
      tmp250 = 1;
    }
  }
  threadData->lastEquationSolved = 1854;
}

/*
equation index: 1855
type: ALGORITHM

  assert(cond.Cells[1].T >= 1.0 and cond.Cells[1].T <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[1].T <= 1e4, has value: " + String(cond.Cells[1].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1855};
  modelica_boolean tmp251;
  modelica_boolean tmp252;
  static const MMC_DEFSTRINGLIT(tmp253,81,"Variable violating min/max constraint: 1.0 <= cond.Cells[1].T <= 1e4, has value: ");
  modelica_string tmp254;
  modelica_metatype tmpMeta255;
  static int tmp256 = 0;
  if(!tmp256)
  {
    tmp251 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cond.Cells[1].T variable */),1.0);
    tmp252 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cond.Cells[1].T variable */),1e4);
    if(!(tmp251 && tmp252))
    {
      tmp254 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cond.Cells[1].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta255 = stringAppend(MMC_REFSTRINGLIT(tmp253),tmp254);
      {
        const char* assert_cond = "(cond.Cells[1].T >= 1.0 and cond.Cells[1].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta255));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta255));
        }
      }
      tmp256 = 1;
    }
  }
  threadData->lastEquationSolved = 1855;
}

/*
equation index: 1856
type: ALGORITHM

  assert(cond.Cells[1].rho >= 0.0 and cond.Cells[1].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[1].rho <= 1e5, has value: " + String(cond.Cells[1].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1856};
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  static const MMC_DEFSTRINGLIT(tmp259,83,"Variable violating min/max constraint: 0.0 <= cond.Cells[1].rho <= 1e5, has value: ");
  modelica_string tmp260;
  modelica_metatype tmpMeta261;
  static int tmp262 = 0;
  if(!tmp262)
  {
    tmp257 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* cond.Cells[1].rho variable */),0.0);
    tmp258 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* cond.Cells[1].rho variable */),1e5);
    if(!(tmp257 && tmp258))
    {
      tmp260 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* cond.Cells[1].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta261 = stringAppend(MMC_REFSTRINGLIT(tmp259),tmp260);
      {
        const char* assert_cond = "(cond.Cells[1].rho >= 0.0 and cond.Cells[1].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta261));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta261));
        }
      }
      tmp262 = 1;
    }
  }
  threadData->lastEquationSolved = 1856;
}

/*
equation index: 1857
type: ALGORITHM

  assert(cond.Cells[1].hnode_su >= -1e10 and cond.Cells[1].hnode_su <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[1].hnode_su <= 1e10, has value: " + String(cond.Cells[1].hnode_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1857};
  modelica_boolean tmp263;
  modelica_boolean tmp264;
  static const MMC_DEFSTRINGLIT(tmp265,91,"Variable violating min/max constraint: -1e10 <= cond.Cells[1].hnode_su <= 1e10, has value: ");
  modelica_string tmp266;
  modelica_metatype tmpMeta267;
  static int tmp268 = 0;
  if(!tmp268)
  {
    tmp263 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */),-1e10);
    tmp264 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */),1e10);
    if(!(tmp263 && tmp264))
    {
      tmp266 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* cond.Cells[1].hnode_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta267 = stringAppend(MMC_REFSTRINGLIT(tmp265),tmp266);
      {
        const char* assert_cond = "(cond.Cells[1].hnode_su >= -1e10 and cond.Cells[1].hnode_su <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta267));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta267));
        }
      }
      tmp268 = 1;
    }
  }
  threadData->lastEquationSolved = 1857;
}

/*
equation index: 1858
type: ALGORITHM

  assert(cond.Cells[1].h_l >= -1e10 and cond.Cells[1].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[1].h_l <= 1e10, has value: " + String(cond.Cells[1].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1858};
  modelica_boolean tmp269;
  modelica_boolean tmp270;
  static const MMC_DEFSTRINGLIT(tmp271,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[1].h_l <= 1e10, has value: ");
  modelica_string tmp272;
  modelica_metatype tmpMeta273;
  static int tmp274 = 0;
  if(!tmp274)
  {
    tmp269 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* cond.Cells[1].h_l variable */),-1e10);
    tmp270 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* cond.Cells[1].h_l variable */),1e10);
    if(!(tmp269 && tmp270))
    {
      tmp272 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* cond.Cells[1].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta273 = stringAppend(MMC_REFSTRINGLIT(tmp271),tmp272);
      {
        const char* assert_cond = "(cond.Cells[1].h_l >= -1e10 and cond.Cells[1].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta273));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta273));
        }
      }
      tmp274 = 1;
    }
  }
  threadData->lastEquationSolved = 1858;
}

/*
equation index: 1859
type: ALGORITHM

  assert(cond.Cells[1].h_v >= -1e10 and cond.Cells[1].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[1].h_v <= 1e10, has value: " + String(cond.Cells[1].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1859};
  modelica_boolean tmp275;
  modelica_boolean tmp276;
  static const MMC_DEFSTRINGLIT(tmp277,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[1].h_v <= 1e10, has value: ");
  modelica_string tmp278;
  modelica_metatype tmpMeta279;
  static int tmp280 = 0;
  if(!tmp280)
  {
    tmp275 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* cond.Cells[1].h_v variable */),-1e10);
    tmp276 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* cond.Cells[1].h_v variable */),1e10);
    if(!(tmp275 && tmp276))
    {
      tmp278 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* cond.Cells[1].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta279 = stringAppend(MMC_REFSTRINGLIT(tmp277),tmp278);
      {
        const char* assert_cond = "(cond.Cells[1].h_v >= -1e10 and cond.Cells[1].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta279));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta279));
        }
      }
      tmp280 = 1;
    }
  }
  threadData->lastEquationSolved = 1859;
}

/*
equation index: 1860
type: ALGORITHM

  assert(cond.Cells[1].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= cond.Cells[1].M_tot, has value: " + String(cond.Cells[1].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1860};
  modelica_boolean tmp281;
  static const MMC_DEFSTRINGLIT(tmp282,74,"Variable violating min constraint: 0.0 <= cond.Cells[1].M_tot, has value: ");
  modelica_string tmp283;
  modelica_metatype tmpMeta284;
  static int tmp285 = 0;
  if(!tmp285)
  {
    tmp281 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cond.Cells[1].M_tot variable */),0.0);
    if(!tmp281)
    {
      tmp283 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cond.Cells[1].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta284 = stringAppend(MMC_REFSTRINGLIT(tmp282),tmp283);
      {
        const char* assert_cond = "(cond.Cells[1].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta284));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta284));
        }
      }
      tmp285 = 1;
    }
  }
  threadData->lastEquationSolved = 1860;
}

/*
equation index: 1861
type: ALGORITHM

  assert(cond.Cells[2].InFlow.m_flow >= -1e5 and cond.Cells[2].InFlow.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= cond.Cells[2].InFlow.m_flow <= 1e5, has value: " + String(cond.Cells[2].InFlow.m_flow, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1861};
  modelica_boolean tmp286;
  modelica_boolean tmp287;
  static const MMC_DEFSTRINGLIT(tmp288,94,"Variable violating min/max constraint: -1e5 <= cond.Cells[2].InFlow.m_flow <= 1e5, has value: ");
  modelica_string tmp289;
  modelica_metatype tmpMeta290;
  static int tmp291 = 0;
  if(!tmp291)
  {
    tmp286 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cond.Cells[2].InFlow.m_flow variable */),-1e5);
    tmp287 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cond.Cells[2].InFlow.m_flow variable */),1e5);
    if(!(tmp286 && tmp287))
    {
      tmp289 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cond.Cells[2].InFlow.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta290 = stringAppend(MMC_REFSTRINGLIT(tmp288),tmp289);
      {
        const char* assert_cond = "(cond.Cells[2].InFlow.m_flow >= -1e5 and cond.Cells[2].InFlow.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta290));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta290));
        }
      }
      tmp291 = 1;
    }
  }
  threadData->lastEquationSolved = 1861;
}

/*
equation index: 1862
type: ALGORITHM

  assert(cond.Cells[2].fluidState.a >= 0.0 and cond.Cells[2].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.a <= 1e5, has value: " + String(cond.Cells[2].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1862};
  modelica_boolean tmp292;
  modelica_boolean tmp293;
  static const MMC_DEFSTRINGLIT(tmp294,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.a <= 1e5, has value: ");
  modelica_string tmp295;
  modelica_metatype tmpMeta296;
  static int tmp297 = 0;
  if(!tmp297)
  {
    tmp292 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cond.Cells[2].fluidState.a variable */),0.0);
    tmp293 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cond.Cells[2].fluidState.a variable */),1e5);
    if(!(tmp292 && tmp293))
    {
      tmp295 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cond.Cells[2].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta296 = stringAppend(MMC_REFSTRINGLIT(tmp294),tmp295);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.a >= 0.0 and cond.Cells[2].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta296));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta296));
        }
      }
      tmp297 = 1;
    }
  }
  threadData->lastEquationSolved = 1862;
}

/*
equation index: 1863
type: ALGORITHM

  assert(cond.Cells[2].fluidState.cp >= 0.0 and cond.Cells[2].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.cp <= 1e7, has value: " + String(cond.Cells[2].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1863};
  modelica_boolean tmp298;
  modelica_boolean tmp299;
  static const MMC_DEFSTRINGLIT(tmp300,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp301;
  modelica_metatype tmpMeta302;
  static int tmp303 = 0;
  if(!tmp303)
  {
    tmp298 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cond.Cells[2].fluidState.cp variable */),0.0);
    tmp299 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cond.Cells[2].fluidState.cp variable */),1e7);
    if(!(tmp298 && tmp299))
    {
      tmp301 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cond.Cells[2].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta302 = stringAppend(MMC_REFSTRINGLIT(tmp300),tmp301);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.cp >= 0.0 and cond.Cells[2].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta302));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta302));
        }
      }
      tmp303 = 1;
    }
  }
  threadData->lastEquationSolved = 1863;
}

/*
equation index: 1864
type: ALGORITHM

  assert(cond.Cells[2].fluidState.cv >= 0.0 and cond.Cells[2].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.cv <= 1e7, has value: " + String(cond.Cells[2].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1864};
  modelica_boolean tmp304;
  modelica_boolean tmp305;
  static const MMC_DEFSTRINGLIT(tmp306,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp307;
  modelica_metatype tmpMeta308;
  static int tmp309 = 0;
  if(!tmp309)
  {
    tmp304 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cond.Cells[2].fluidState.cv variable */),0.0);
    tmp305 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cond.Cells[2].fluidState.cv variable */),1e7);
    if(!(tmp304 && tmp305))
    {
      tmp307 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cond.Cells[2].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta308 = stringAppend(MMC_REFSTRINGLIT(tmp306),tmp307);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.cv >= 0.0 and cond.Cells[2].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta308));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta308));
        }
      }
      tmp309 = 1;
    }
  }
  threadData->lastEquationSolved = 1864;
}

/*
equation index: 1865
type: ALGORITHM

  assert(cond.Cells[2].fluidState.eta >= 0.0 and cond.Cells[2].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.eta <= 1e8, has value: " + String(cond.Cells[2].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1865};
  modelica_boolean tmp310;
  modelica_boolean tmp311;
  static const MMC_DEFSTRINGLIT(tmp312,94,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp313;
  modelica_metatype tmpMeta314;
  static int tmp315 = 0;
  if(!tmp315)
  {
    tmp310 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* cond.Cells[2].fluidState.eta variable */),0.0);
    tmp311 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* cond.Cells[2].fluidState.eta variable */),1e8);
    if(!(tmp310 && tmp311))
    {
      tmp313 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* cond.Cells[2].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta314 = stringAppend(MMC_REFSTRINGLIT(tmp312),tmp313);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.eta >= 0.0 and cond.Cells[2].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta314));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta314));
        }
      }
      tmp315 = 1;
    }
  }
  threadData->lastEquationSolved = 1865;
}

/*
equation index: 1866
type: ALGORITHM

  assert(cond.Cells[2].fluidState.h >= -1e10 and cond.Cells[2].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[2].fluidState.h <= 1e10, has value: " + String(cond.Cells[2].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1866};
  modelica_boolean tmp316;
  modelica_boolean tmp317;
  static const MMC_DEFSTRINGLIT(tmp318,95,"Variable violating min/max constraint: -1e10 <= cond.Cells[2].fluidState.h <= 1e10, has value: ");
  modelica_string tmp319;
  modelica_metatype tmpMeta320;
  static int tmp321 = 0;
  if(!tmp321)
  {
    tmp316 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* cond.Cells[2].fluidState.h variable */),-1e10);
    tmp317 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* cond.Cells[2].fluidState.h variable */),1e10);
    if(!(tmp316 && tmp317))
    {
      tmp319 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* cond.Cells[2].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta320 = stringAppend(MMC_REFSTRINGLIT(tmp318),tmp319);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.h >= -1e10 and cond.Cells[2].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta320));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta320));
        }
      }
      tmp321 = 1;
    }
  }
  threadData->lastEquationSolved = 1866;
}

/*
equation index: 1867
type: ALGORITHM

  assert(cond.Cells[2].fluidState.lambda >= 0.0 and cond.Cells[2].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.lambda <= 500.0, has value: " + String(cond.Cells[2].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1867};
  modelica_boolean tmp322;
  modelica_boolean tmp323;
  static const MMC_DEFSTRINGLIT(tmp324,99,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp325;
  modelica_metatype tmpMeta326;
  static int tmp327 = 0;
  if(!tmp327)
  {
    tmp322 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* cond.Cells[2].fluidState.lambda variable */),0.0);
    tmp323 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* cond.Cells[2].fluidState.lambda variable */),500.0);
    if(!(tmp322 && tmp323))
    {
      tmp325 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* cond.Cells[2].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta326 = stringAppend(MMC_REFSTRINGLIT(tmp324),tmp325);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.lambda >= 0.0 and cond.Cells[2].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta326));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta326));
        }
      }
      tmp327 = 1;
    }
  }
  threadData->lastEquationSolved = 1867;
}

/*
equation index: 1868
type: ALGORITHM

  assert(cond.Cells[2].fluidState.p >= 0.0 and cond.Cells[2].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.p <= 1e8, has value: " + String(cond.Cells[2].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1868};
  modelica_boolean tmp328;
  modelica_boolean tmp329;
  static const MMC_DEFSTRINGLIT(tmp330,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].fluidState.p <= 1e8, has value: ");
  modelica_string tmp331;
  modelica_metatype tmpMeta332;
  static int tmp333 = 0;
  if(!tmp333)
  {
    tmp328 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cond.Cells[2].fluidState.p variable */),0.0);
    tmp329 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cond.Cells[2].fluidState.p variable */),1e8);
    if(!(tmp328 && tmp329))
    {
      tmp331 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cond.Cells[2].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta332 = stringAppend(MMC_REFSTRINGLIT(tmp330),tmp331);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.p >= 0.0 and cond.Cells[2].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta332));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta332));
        }
      }
      tmp333 = 1;
    }
  }
  threadData->lastEquationSolved = 1868;
}

/*
equation index: 1869
type: ALGORITHM

  assert(cond.Cells[2].fluidState.phase >= 0 and cond.Cells[2].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= cond.Cells[2].fluidState.phase <= 2, has value: " + String(cond.Cells[2].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1869};
  modelica_boolean tmp334;
  modelica_boolean tmp335;
  static const MMC_DEFSTRINGLIT(tmp336,92,"Variable violating min/max constraint: 0 <= cond.Cells[2].fluidState.phase <= 2, has value: ");
  modelica_string tmp337;
  modelica_metatype tmpMeta338;
  static int tmp339 = 0;
  if(!tmp339)
  {
    tmp334 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[29]] /* cond.Cells[2].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp335 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[29]] /* cond.Cells[2].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp334 && tmp335))
    {
      tmp337 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[29]] /* cond.Cells[2].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta338 = stringAppend(MMC_REFSTRINGLIT(tmp336),tmp337);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.phase >= 0 and cond.Cells[2].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta338));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta338));
        }
      }
      tmp339 = 1;
    }
  }
  threadData->lastEquationSolved = 1869;
}

/*
equation index: 1870
type: ALGORITHM

  assert(cond.Cells[2].fluidState.s >= -1e7 and cond.Cells[2].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[2].fluidState.s <= 1e7, has value: " + String(cond.Cells[2].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1870};
  modelica_boolean tmp340;
  modelica_boolean tmp341;
  static const MMC_DEFSTRINGLIT(tmp342,93,"Variable violating min/max constraint: -1e7 <= cond.Cells[2].fluidState.s <= 1e7, has value: ");
  modelica_string tmp343;
  modelica_metatype tmpMeta344;
  static int tmp345 = 0;
  if(!tmp345)
  {
    tmp340 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* cond.Cells[2].fluidState.s variable */),-1e7);
    tmp341 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* cond.Cells[2].fluidState.s variable */),1e7);
    if(!(tmp340 && tmp341))
    {
      tmp343 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* cond.Cells[2].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta344 = stringAppend(MMC_REFSTRINGLIT(tmp342),tmp343);
      {
        const char* assert_cond = "(cond.Cells[2].fluidState.s >= -1e7 and cond.Cells[2].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta344));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta344));
        }
      }
      tmp345 = 1;
    }
  }
  threadData->lastEquationSolved = 1870;
}

/*
equation index: 1871
type: ALGORITHM

  assert(cond.Cells[2].sat.Tsat >= 1.0 and cond.Cells[2].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[2].sat.Tsat <= 1e4, has value: " + String(cond.Cells[2].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1871};
  modelica_boolean tmp346;
  modelica_boolean tmp347;
  static const MMC_DEFSTRINGLIT(tmp348,88,"Variable violating min/max constraint: 1.0 <= cond.Cells[2].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp349;
  modelica_metatype tmpMeta350;
  static int tmp351 = 0;
  if(!tmp351)
  {
    tmp346 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[848]] /* cond.Cells[2].sat.Tsat variable */),1.0);
    tmp347 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[848]] /* cond.Cells[2].sat.Tsat variable */),1e4);
    if(!(tmp346 && tmp347))
    {
      tmp349 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[848]] /* cond.Cells[2].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta350 = stringAppend(MMC_REFSTRINGLIT(tmp348),tmp349);
      {
        const char* assert_cond = "(cond.Cells[2].sat.Tsat >= 1.0 and cond.Cells[2].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta350));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta350));
        }
      }
      tmp351 = 1;
    }
  }
  threadData->lastEquationSolved = 1871;
}

/*
equation index: 1872
type: ALGORITHM

  assert(cond.Cells[2].sat.dl >= 0.0 and cond.Cells[2].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].sat.dl <= 1e5, has value: " + String(cond.Cells[2].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1872};
  modelica_boolean tmp352;
  modelica_boolean tmp353;
  static const MMC_DEFSTRINGLIT(tmp354,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].sat.dl <= 1e5, has value: ");
  modelica_string tmp355;
  modelica_metatype tmpMeta356;
  static int tmp357 = 0;
  if(!tmp357)
  {
    tmp352 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[878]] /* cond.Cells[2].sat.dl variable */),0.0);
    tmp353 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[878]] /* cond.Cells[2].sat.dl variable */),1e5);
    if(!(tmp352 && tmp353))
    {
      tmp355 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[878]] /* cond.Cells[2].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta356 = stringAppend(MMC_REFSTRINGLIT(tmp354),tmp355);
      {
        const char* assert_cond = "(cond.Cells[2].sat.dl >= 0.0 and cond.Cells[2].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta356));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta356));
        }
      }
      tmp357 = 1;
    }
  }
  threadData->lastEquationSolved = 1872;
}

/*
equation index: 1873
type: ALGORITHM

  assert(cond.Cells[2].sat.dv >= 0.0 and cond.Cells[2].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].sat.dv <= 1e5, has value: " + String(cond.Cells[2].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1873};
  modelica_boolean tmp358;
  modelica_boolean tmp359;
  static const MMC_DEFSTRINGLIT(tmp360,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].sat.dv <= 1e5, has value: ");
  modelica_string tmp361;
  modelica_metatype tmpMeta362;
  static int tmp363 = 0;
  if(!tmp363)
  {
    tmp358 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* cond.Cells[2].sat.dv variable */),0.0);
    tmp359 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* cond.Cells[2].sat.dv variable */),1e5);
    if(!(tmp358 && tmp359))
    {
      tmp361 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* cond.Cells[2].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta362 = stringAppend(MMC_REFSTRINGLIT(tmp360),tmp361);
      {
        const char* assert_cond = "(cond.Cells[2].sat.dv >= 0.0 and cond.Cells[2].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta362));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta362));
        }
      }
      tmp363 = 1;
    }
  }
  threadData->lastEquationSolved = 1873;
}

/*
equation index: 1874
type: ALGORITHM

  assert(cond.Cells[2].sat.psat >= 0.0 and cond.Cells[2].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].sat.psat <= 1e8, has value: " + String(cond.Cells[2].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1874};
  modelica_boolean tmp364;
  modelica_boolean tmp365;
  static const MMC_DEFSTRINGLIT(tmp366,88,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].sat.psat <= 1e8, has value: ");
  modelica_string tmp367;
  modelica_metatype tmpMeta368;
  static int tmp369 = 0;
  if(!tmp369)
  {
    tmp364 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[888]] /* cond.Cells[2].sat.psat variable */),0.0);
    tmp365 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[888]] /* cond.Cells[2].sat.psat variable */),1e8);
    if(!(tmp364 && tmp365))
    {
      tmp367 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[888]] /* cond.Cells[2].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta368 = stringAppend(MMC_REFSTRINGLIT(tmp366),tmp367);
      {
        const char* assert_cond = "(cond.Cells[2].sat.psat >= 0.0 and cond.Cells[2].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta368));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta368));
        }
      }
      tmp369 = 1;
    }
  }
  threadData->lastEquationSolved = 1874;
}

/*
equation index: 1875
type: ALGORITHM

  assert(cond.Cells[2].sat.sl >= -1e7 and cond.Cells[2].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[2].sat.sl <= 1e7, has value: " + String(cond.Cells[2].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1875};
  modelica_boolean tmp370;
  modelica_boolean tmp371;
  static const MMC_DEFSTRINGLIT(tmp372,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[2].sat.sl <= 1e7, has value: ");
  modelica_string tmp373;
  modelica_metatype tmpMeta374;
  static int tmp375 = 0;
  if(!tmp375)
  {
    tmp370 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* cond.Cells[2].sat.sl variable */),-1e7);
    tmp371 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* cond.Cells[2].sat.sl variable */),1e7);
    if(!(tmp370 && tmp371))
    {
      tmp373 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* cond.Cells[2].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta374 = stringAppend(MMC_REFSTRINGLIT(tmp372),tmp373);
      {
        const char* assert_cond = "(cond.Cells[2].sat.sl >= -1e7 and cond.Cells[2].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta374));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta374));
        }
      }
      tmp375 = 1;
    }
  }
  threadData->lastEquationSolved = 1875;
}

/*
equation index: 1876
type: ALGORITHM

  assert(cond.Cells[2].sat.sv >= -1e7 and cond.Cells[2].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[2].sat.sv <= 1e7, has value: " + String(cond.Cells[2].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1876};
  modelica_boolean tmp376;
  modelica_boolean tmp377;
  static const MMC_DEFSTRINGLIT(tmp378,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[2].sat.sv <= 1e7, has value: ");
  modelica_string tmp379;
  modelica_metatype tmpMeta380;
  static int tmp381 = 0;
  if(!tmp381)
  {
    tmp376 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* cond.Cells[2].sat.sv variable */),-1e7);
    tmp377 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* cond.Cells[2].sat.sv variable */),1e7);
    if(!(tmp376 && tmp377))
    {
      tmp379 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* cond.Cells[2].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta380 = stringAppend(MMC_REFSTRINGLIT(tmp378),tmp379);
      {
        const char* assert_cond = "(cond.Cells[2].sat.sv >= -1e7 and cond.Cells[2].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta380));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta380));
        }
      }
      tmp381 = 1;
    }
  }
  threadData->lastEquationSolved = 1876;
}

/*
equation index: 1877
type: ALGORITHM

  assert(cond.Cells[2].h >= -1e10 and cond.Cells[2].h <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[2].h <= 1e10, has value: " + String(cond.Cells[2].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1877};
  modelica_boolean tmp382;
  modelica_boolean tmp383;
  static const MMC_DEFSTRINGLIT(tmp384,84,"Variable violating min/max constraint: -1e10 <= cond.Cells[2].h <= 1e10, has value: ");
  modelica_string tmp385;
  modelica_metatype tmpMeta386;
  static int tmp387 = 0;
  if(!tmp387)
  {
    tmp382 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */),-1e10);
    tmp383 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */),1e10);
    if(!(tmp382 && tmp383))
    {
      tmp385 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* cond.Cells[2].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta386 = stringAppend(MMC_REFSTRINGLIT(tmp384),tmp385);
      {
        const char* assert_cond = "(cond.Cells[2].h >= -1e10 and cond.Cells[2].h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta386));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta386));
        }
      }
      tmp387 = 1;
    }
  }
  threadData->lastEquationSolved = 1877;
}

/*
equation index: 1878
type: ALGORITHM

  assert(cond.Cells[2].T >= 1.0 and cond.Cells[2].T <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[2].T <= 1e4, has value: " + String(cond.Cells[2].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1878};
  modelica_boolean tmp388;
  modelica_boolean tmp389;
  static const MMC_DEFSTRINGLIT(tmp390,81,"Variable violating min/max constraint: 1.0 <= cond.Cells[2].T <= 1e4, has value: ");
  modelica_string tmp391;
  modelica_metatype tmpMeta392;
  static int tmp393 = 0;
  if(!tmp393)
  {
    tmp388 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cond.Cells[2].T variable */),1.0);
    tmp389 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cond.Cells[2].T variable */),1e4);
    if(!(tmp388 && tmp389))
    {
      tmp391 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cond.Cells[2].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta392 = stringAppend(MMC_REFSTRINGLIT(tmp390),tmp391);
      {
        const char* assert_cond = "(cond.Cells[2].T >= 1.0 and cond.Cells[2].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta392));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta392));
        }
      }
      tmp393 = 1;
    }
  }
  threadData->lastEquationSolved = 1878;
}

/*
equation index: 1879
type: ALGORITHM

  assert(cond.Cells[2].rho >= 0.0 and cond.Cells[2].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[2].rho <= 1e5, has value: " + String(cond.Cells[2].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1879};
  modelica_boolean tmp394;
  modelica_boolean tmp395;
  static const MMC_DEFSTRINGLIT(tmp396,83,"Variable violating min/max constraint: 0.0 <= cond.Cells[2].rho <= 1e5, has value: ");
  modelica_string tmp397;
  modelica_metatype tmpMeta398;
  static int tmp399 = 0;
  if(!tmp399)
  {
    tmp394 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* cond.Cells[2].rho variable */),0.0);
    tmp395 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* cond.Cells[2].rho variable */),1e5);
    if(!(tmp394 && tmp395))
    {
      tmp397 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* cond.Cells[2].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta398 = stringAppend(MMC_REFSTRINGLIT(tmp396),tmp397);
      {
        const char* assert_cond = "(cond.Cells[2].rho >= 0.0 and cond.Cells[2].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta398));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta398));
        }
      }
      tmp399 = 1;
    }
  }
  threadData->lastEquationSolved = 1879;
}

/*
equation index: 1880
type: ALGORITHM

  assert(cond.Cells[2].hnode_su >= -1e10 and cond.Cells[2].hnode_su <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[2].hnode_su <= 1e10, has value: " + String(cond.Cells[2].hnode_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1880};
  modelica_boolean tmp400;
  modelica_boolean tmp401;
  static const MMC_DEFSTRINGLIT(tmp402,91,"Variable violating min/max constraint: -1e10 <= cond.Cells[2].hnode_su <= 1e10, has value: ");
  modelica_string tmp403;
  modelica_metatype tmpMeta404;
  static int tmp405 = 0;
  if(!tmp405)
  {
    tmp400 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */),-1e10);
    tmp401 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */),1e10);
    if(!(tmp400 && tmp401))
    {
      tmp403 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* cond.Cells[2].hnode_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta404 = stringAppend(MMC_REFSTRINGLIT(tmp402),tmp403);
      {
        const char* assert_cond = "(cond.Cells[2].hnode_su >= -1e10 and cond.Cells[2].hnode_su <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta404));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta404));
        }
      }
      tmp405 = 1;
    }
  }
  threadData->lastEquationSolved = 1880;
}

/*
equation index: 1881
type: ALGORITHM

  assert(cond.Cells[2].h_l >= -1e10 and cond.Cells[2].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[2].h_l <= 1e10, has value: " + String(cond.Cells[2].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1881};
  modelica_boolean tmp406;
  modelica_boolean tmp407;
  static const MMC_DEFSTRINGLIT(tmp408,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[2].h_l <= 1e10, has value: ");
  modelica_string tmp409;
  modelica_metatype tmpMeta410;
  static int tmp411 = 0;
  if(!tmp411)
  {
    tmp406 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* cond.Cells[2].h_l variable */),-1e10);
    tmp407 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* cond.Cells[2].h_l variable */),1e10);
    if(!(tmp406 && tmp407))
    {
      tmp409 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* cond.Cells[2].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta410 = stringAppend(MMC_REFSTRINGLIT(tmp408),tmp409);
      {
        const char* assert_cond = "(cond.Cells[2].h_l >= -1e10 and cond.Cells[2].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta410));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta410));
        }
      }
      tmp411 = 1;
    }
  }
  threadData->lastEquationSolved = 1881;
}

/*
equation index: 1882
type: ALGORITHM

  assert(cond.Cells[2].h_v >= -1e10 and cond.Cells[2].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[2].h_v <= 1e10, has value: " + String(cond.Cells[2].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1882};
  modelica_boolean tmp412;
  modelica_boolean tmp413;
  static const MMC_DEFSTRINGLIT(tmp414,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[2].h_v <= 1e10, has value: ");
  modelica_string tmp415;
  modelica_metatype tmpMeta416;
  static int tmp417 = 0;
  if(!tmp417)
  {
    tmp412 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* cond.Cells[2].h_v variable */),-1e10);
    tmp413 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* cond.Cells[2].h_v variable */),1e10);
    if(!(tmp412 && tmp413))
    {
      tmp415 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* cond.Cells[2].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta416 = stringAppend(MMC_REFSTRINGLIT(tmp414),tmp415);
      {
        const char* assert_cond = "(cond.Cells[2].h_v >= -1e10 and cond.Cells[2].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta416));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta416));
        }
      }
      tmp417 = 1;
    }
  }
  threadData->lastEquationSolved = 1882;
}

/*
equation index: 1883
type: ALGORITHM

  assert(cond.Cells[2].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= cond.Cells[2].M_tot, has value: " + String(cond.Cells[2].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1883};
  modelica_boolean tmp418;
  static const MMC_DEFSTRINGLIT(tmp419,74,"Variable violating min constraint: 0.0 <= cond.Cells[2].M_tot, has value: ");
  modelica_string tmp420;
  modelica_metatype tmpMeta421;
  static int tmp422 = 0;
  if(!tmp422)
  {
    tmp418 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cond.Cells[2].M_tot variable */),0.0);
    if(!tmp418)
    {
      tmp420 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cond.Cells[2].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta421 = stringAppend(MMC_REFSTRINGLIT(tmp419),tmp420);
      {
        const char* assert_cond = "(cond.Cells[2].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta421));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta421));
        }
      }
      tmp422 = 1;
    }
  }
  threadData->lastEquationSolved = 1883;
}

/*
equation index: 1884
type: ALGORITHM

  assert(cond.Cells[3].InFlow.m_flow >= -1e5 and cond.Cells[3].InFlow.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= cond.Cells[3].InFlow.m_flow <= 1e5, has value: " + String(cond.Cells[3].InFlow.m_flow, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1884};
  modelica_boolean tmp423;
  modelica_boolean tmp424;
  static const MMC_DEFSTRINGLIT(tmp425,94,"Variable violating min/max constraint: -1e5 <= cond.Cells[3].InFlow.m_flow <= 1e5, has value: ");
  modelica_string tmp426;
  modelica_metatype tmpMeta427;
  static int tmp428 = 0;
  if(!tmp428)
  {
    tmp423 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cond.Cells[3].InFlow.m_flow variable */),-1e5);
    tmp424 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cond.Cells[3].InFlow.m_flow variable */),1e5);
    if(!(tmp423 && tmp424))
    {
      tmp426 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cond.Cells[3].InFlow.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta427 = stringAppend(MMC_REFSTRINGLIT(tmp425),tmp426);
      {
        const char* assert_cond = "(cond.Cells[3].InFlow.m_flow >= -1e5 and cond.Cells[3].InFlow.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta427));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta427));
        }
      }
      tmp428 = 1;
    }
  }
  threadData->lastEquationSolved = 1884;
}

/*
equation index: 1885
type: ALGORITHM

  assert(cond.Cells[3].fluidState.a >= 0.0 and cond.Cells[3].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.a <= 1e5, has value: " + String(cond.Cells[3].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1885};
  modelica_boolean tmp429;
  modelica_boolean tmp430;
  static const MMC_DEFSTRINGLIT(tmp431,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.a <= 1e5, has value: ");
  modelica_string tmp432;
  modelica_metatype tmpMeta433;
  static int tmp434 = 0;
  if(!tmp434)
  {
    tmp429 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cond.Cells[3].fluidState.a variable */),0.0);
    tmp430 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cond.Cells[3].fluidState.a variable */),1e5);
    if(!(tmp429 && tmp430))
    {
      tmp432 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cond.Cells[3].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta433 = stringAppend(MMC_REFSTRINGLIT(tmp431),tmp432);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.a >= 0.0 and cond.Cells[3].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta433));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta433));
        }
      }
      tmp434 = 1;
    }
  }
  threadData->lastEquationSolved = 1885;
}

/*
equation index: 1886
type: ALGORITHM

  assert(cond.Cells[3].fluidState.cp >= 0.0 and cond.Cells[3].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.cp <= 1e7, has value: " + String(cond.Cells[3].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1886};
  modelica_boolean tmp435;
  modelica_boolean tmp436;
  static const MMC_DEFSTRINGLIT(tmp437,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp438;
  modelica_metatype tmpMeta439;
  static int tmp440 = 0;
  if(!tmp440)
  {
    tmp435 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cond.Cells[3].fluidState.cp variable */),0.0);
    tmp436 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cond.Cells[3].fluidState.cp variable */),1e7);
    if(!(tmp435 && tmp436))
    {
      tmp438 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cond.Cells[3].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta439 = stringAppend(MMC_REFSTRINGLIT(tmp437),tmp438);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.cp >= 0.0 and cond.Cells[3].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta439));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta439));
        }
      }
      tmp440 = 1;
    }
  }
  threadData->lastEquationSolved = 1886;
}

/*
equation index: 1887
type: ALGORITHM

  assert(cond.Cells[3].fluidState.cv >= 0.0 and cond.Cells[3].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.cv <= 1e7, has value: " + String(cond.Cells[3].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1887};
  modelica_boolean tmp441;
  modelica_boolean tmp442;
  static const MMC_DEFSTRINGLIT(tmp443,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp444;
  modelica_metatype tmpMeta445;
  static int tmp446 = 0;
  if(!tmp446)
  {
    tmp441 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cond.Cells[3].fluidState.cv variable */),0.0);
    tmp442 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cond.Cells[3].fluidState.cv variable */),1e7);
    if(!(tmp441 && tmp442))
    {
      tmp444 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cond.Cells[3].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta445 = stringAppend(MMC_REFSTRINGLIT(tmp443),tmp444);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.cv >= 0.0 and cond.Cells[3].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta445));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta445));
        }
      }
      tmp446 = 1;
    }
  }
  threadData->lastEquationSolved = 1887;
}

/*
equation index: 1888
type: ALGORITHM

  assert(cond.Cells[3].fluidState.eta >= 0.0 and cond.Cells[3].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.eta <= 1e8, has value: " + String(cond.Cells[3].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1888};
  modelica_boolean tmp447;
  modelica_boolean tmp448;
  static const MMC_DEFSTRINGLIT(tmp449,94,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp450;
  modelica_metatype tmpMeta451;
  static int tmp452 = 0;
  if(!tmp452)
  {
    tmp447 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[779]] /* cond.Cells[3].fluidState.eta variable */),0.0);
    tmp448 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[779]] /* cond.Cells[3].fluidState.eta variable */),1e8);
    if(!(tmp447 && tmp448))
    {
      tmp450 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[779]] /* cond.Cells[3].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta451 = stringAppend(MMC_REFSTRINGLIT(tmp449),tmp450);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.eta >= 0.0 and cond.Cells[3].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta451));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta451));
        }
      }
      tmp452 = 1;
    }
  }
  threadData->lastEquationSolved = 1888;
}

/*
equation index: 1889
type: ALGORITHM

  assert(cond.Cells[3].fluidState.h >= -1e10 and cond.Cells[3].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[3].fluidState.h <= 1e10, has value: " + String(cond.Cells[3].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1889};
  modelica_boolean tmp453;
  modelica_boolean tmp454;
  static const MMC_DEFSTRINGLIT(tmp455,95,"Variable violating min/max constraint: -1e10 <= cond.Cells[3].fluidState.h <= 1e10, has value: ");
  modelica_string tmp456;
  modelica_metatype tmpMeta457;
  static int tmp458 = 0;
  if(!tmp458)
  {
    tmp453 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[784]] /* cond.Cells[3].fluidState.h variable */),-1e10);
    tmp454 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[784]] /* cond.Cells[3].fluidState.h variable */),1e10);
    if(!(tmp453 && tmp454))
    {
      tmp456 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[784]] /* cond.Cells[3].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta457 = stringAppend(MMC_REFSTRINGLIT(tmp455),tmp456);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.h >= -1e10 and cond.Cells[3].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta457));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta457));
        }
      }
      tmp458 = 1;
    }
  }
  threadData->lastEquationSolved = 1889;
}

/*
equation index: 1890
type: ALGORITHM

  assert(cond.Cells[3].fluidState.lambda >= 0.0 and cond.Cells[3].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.lambda <= 500.0, has value: " + String(cond.Cells[3].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1890};
  modelica_boolean tmp459;
  modelica_boolean tmp460;
  static const MMC_DEFSTRINGLIT(tmp461,99,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp462;
  modelica_metatype tmpMeta463;
  static int tmp464 = 0;
  if(!tmp464)
  {
    tmp459 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* cond.Cells[3].fluidState.lambda variable */),0.0);
    tmp460 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* cond.Cells[3].fluidState.lambda variable */),500.0);
    if(!(tmp459 && tmp460))
    {
      tmp462 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* cond.Cells[3].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta463 = stringAppend(MMC_REFSTRINGLIT(tmp461),tmp462);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.lambda >= 0.0 and cond.Cells[3].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta463));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta463));
        }
      }
      tmp464 = 1;
    }
  }
  threadData->lastEquationSolved = 1890;
}

/*
equation index: 1891
type: ALGORITHM

  assert(cond.Cells[3].fluidState.p >= 0.0 and cond.Cells[3].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.p <= 1e8, has value: " + String(cond.Cells[3].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1891};
  modelica_boolean tmp465;
  modelica_boolean tmp466;
  static const MMC_DEFSTRINGLIT(tmp467,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].fluidState.p <= 1e8, has value: ");
  modelica_string tmp468;
  modelica_metatype tmpMeta469;
  static int tmp470 = 0;
  if(!tmp470)
  {
    tmp465 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cond.Cells[3].fluidState.p variable */),0.0);
    tmp466 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cond.Cells[3].fluidState.p variable */),1e8);
    if(!(tmp465 && tmp466))
    {
      tmp468 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cond.Cells[3].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta469 = stringAppend(MMC_REFSTRINGLIT(tmp467),tmp468);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.p >= 0.0 and cond.Cells[3].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta469));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta469));
        }
      }
      tmp470 = 1;
    }
  }
  threadData->lastEquationSolved = 1891;
}

/*
equation index: 1892
type: ALGORITHM

  assert(cond.Cells[3].fluidState.phase >= 0 and cond.Cells[3].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= cond.Cells[3].fluidState.phase <= 2, has value: " + String(cond.Cells[3].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1892};
  modelica_boolean tmp471;
  modelica_boolean tmp472;
  static const MMC_DEFSTRINGLIT(tmp473,92,"Variable violating min/max constraint: 0 <= cond.Cells[3].fluidState.phase <= 2, has value: ");
  modelica_string tmp474;
  modelica_metatype tmpMeta475;
  static int tmp476 = 0;
  if(!tmp476)
  {
    tmp471 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[30]] /* cond.Cells[3].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp472 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[30]] /* cond.Cells[3].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp471 && tmp472))
    {
      tmp474 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[30]] /* cond.Cells[3].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta475 = stringAppend(MMC_REFSTRINGLIT(tmp473),tmp474);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.phase >= 0 and cond.Cells[3].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta475));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta475));
        }
      }
      tmp476 = 1;
    }
  }
  threadData->lastEquationSolved = 1892;
}

/*
equation index: 1893
type: ALGORITHM

  assert(cond.Cells[3].fluidState.s >= -1e7 and cond.Cells[3].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[3].fluidState.s <= 1e7, has value: " + String(cond.Cells[3].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1893};
  modelica_boolean tmp477;
  modelica_boolean tmp478;
  static const MMC_DEFSTRINGLIT(tmp479,93,"Variable violating min/max constraint: -1e7 <= cond.Cells[3].fluidState.s <= 1e7, has value: ");
  modelica_string tmp480;
  modelica_metatype tmpMeta481;
  static int tmp482 = 0;
  if(!tmp482)
  {
    tmp477 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* cond.Cells[3].fluidState.s variable */),-1e7);
    tmp478 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* cond.Cells[3].fluidState.s variable */),1e7);
    if(!(tmp477 && tmp478))
    {
      tmp480 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* cond.Cells[3].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta481 = stringAppend(MMC_REFSTRINGLIT(tmp479),tmp480);
      {
        const char* assert_cond = "(cond.Cells[3].fluidState.s >= -1e7 and cond.Cells[3].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta481));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta481));
        }
      }
      tmp482 = 1;
    }
  }
  threadData->lastEquationSolved = 1893;
}

/*
equation index: 1894
type: ALGORITHM

  assert(cond.Cells[3].sat.Tsat >= 1.0 and cond.Cells[3].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[3].sat.Tsat <= 1e4, has value: " + String(cond.Cells[3].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1894};
  modelica_boolean tmp483;
  modelica_boolean tmp484;
  static const MMC_DEFSTRINGLIT(tmp485,88,"Variable violating min/max constraint: 1.0 <= cond.Cells[3].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp486;
  modelica_metatype tmpMeta487;
  static int tmp488 = 0;
  if(!tmp488)
  {
    tmp483 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[849]] /* cond.Cells[3].sat.Tsat variable */),1.0);
    tmp484 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[849]] /* cond.Cells[3].sat.Tsat variable */),1e4);
    if(!(tmp483 && tmp484))
    {
      tmp486 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[849]] /* cond.Cells[3].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta487 = stringAppend(MMC_REFSTRINGLIT(tmp485),tmp486);
      {
        const char* assert_cond = "(cond.Cells[3].sat.Tsat >= 1.0 and cond.Cells[3].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta487));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta487));
        }
      }
      tmp488 = 1;
    }
  }
  threadData->lastEquationSolved = 1894;
}

/*
equation index: 1895
type: ALGORITHM

  assert(cond.Cells[3].sat.dl >= 0.0 and cond.Cells[3].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].sat.dl <= 1e5, has value: " + String(cond.Cells[3].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1895};
  modelica_boolean tmp489;
  modelica_boolean tmp490;
  static const MMC_DEFSTRINGLIT(tmp491,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].sat.dl <= 1e5, has value: ");
  modelica_string tmp492;
  modelica_metatype tmpMeta493;
  static int tmp494 = 0;
  if(!tmp494)
  {
    tmp489 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[879]] /* cond.Cells[3].sat.dl variable */),0.0);
    tmp490 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[879]] /* cond.Cells[3].sat.dl variable */),1e5);
    if(!(tmp489 && tmp490))
    {
      tmp492 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[879]] /* cond.Cells[3].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta493 = stringAppend(MMC_REFSTRINGLIT(tmp491),tmp492);
      {
        const char* assert_cond = "(cond.Cells[3].sat.dl >= 0.0 and cond.Cells[3].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta493));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta493));
        }
      }
      tmp494 = 1;
    }
  }
  threadData->lastEquationSolved = 1895;
}

/*
equation index: 1896
type: ALGORITHM

  assert(cond.Cells[3].sat.dv >= 0.0 and cond.Cells[3].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].sat.dv <= 1e5, has value: " + String(cond.Cells[3].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1896};
  modelica_boolean tmp495;
  modelica_boolean tmp496;
  static const MMC_DEFSTRINGLIT(tmp497,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].sat.dv <= 1e5, has value: ");
  modelica_string tmp498;
  modelica_metatype tmpMeta499;
  static int tmp500 = 0;
  if(!tmp500)
  {
    tmp495 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[884]] /* cond.Cells[3].sat.dv variable */),0.0);
    tmp496 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[884]] /* cond.Cells[3].sat.dv variable */),1e5);
    if(!(tmp495 && tmp496))
    {
      tmp498 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[884]] /* cond.Cells[3].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta499 = stringAppend(MMC_REFSTRINGLIT(tmp497),tmp498);
      {
        const char* assert_cond = "(cond.Cells[3].sat.dv >= 0.0 and cond.Cells[3].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta499));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta499));
        }
      }
      tmp500 = 1;
    }
  }
  threadData->lastEquationSolved = 1896;
}

/*
equation index: 1897
type: ALGORITHM

  assert(cond.Cells[3].sat.psat >= 0.0 and cond.Cells[3].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].sat.psat <= 1e8, has value: " + String(cond.Cells[3].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1897};
  modelica_boolean tmp501;
  modelica_boolean tmp502;
  static const MMC_DEFSTRINGLIT(tmp503,88,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].sat.psat <= 1e8, has value: ");
  modelica_string tmp504;
  modelica_metatype tmpMeta505;
  static int tmp506 = 0;
  if(!tmp506)
  {
    tmp501 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* cond.Cells[3].sat.psat variable */),0.0);
    tmp502 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* cond.Cells[3].sat.psat variable */),1e8);
    if(!(tmp501 && tmp502))
    {
      tmp504 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* cond.Cells[3].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta505 = stringAppend(MMC_REFSTRINGLIT(tmp503),tmp504);
      {
        const char* assert_cond = "(cond.Cells[3].sat.psat >= 0.0 and cond.Cells[3].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta505));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta505));
        }
      }
      tmp506 = 1;
    }
  }
  threadData->lastEquationSolved = 1897;
}

/*
equation index: 1898
type: ALGORITHM

  assert(cond.Cells[3].sat.sl >= -1e7 and cond.Cells[3].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[3].sat.sl <= 1e7, has value: " + String(cond.Cells[3].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1898};
  modelica_boolean tmp507;
  modelica_boolean tmp508;
  static const MMC_DEFSTRINGLIT(tmp509,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[3].sat.sl <= 1e7, has value: ");
  modelica_string tmp510;
  modelica_metatype tmpMeta511;
  static int tmp512 = 0;
  if(!tmp512)
  {
    tmp507 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* cond.Cells[3].sat.sl variable */),-1e7);
    tmp508 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* cond.Cells[3].sat.sl variable */),1e7);
    if(!(tmp507 && tmp508))
    {
      tmp510 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* cond.Cells[3].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta511 = stringAppend(MMC_REFSTRINGLIT(tmp509),tmp510);
      {
        const char* assert_cond = "(cond.Cells[3].sat.sl >= -1e7 and cond.Cells[3].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta511));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta511));
        }
      }
      tmp512 = 1;
    }
  }
  threadData->lastEquationSolved = 1898;
}

/*
equation index: 1899
type: ALGORITHM

  assert(cond.Cells[3].sat.sv >= -1e7 and cond.Cells[3].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[3].sat.sv <= 1e7, has value: " + String(cond.Cells[3].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1899};
  modelica_boolean tmp513;
  modelica_boolean tmp514;
  static const MMC_DEFSTRINGLIT(tmp515,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[3].sat.sv <= 1e7, has value: ");
  modelica_string tmp516;
  modelica_metatype tmpMeta517;
  static int tmp518 = 0;
  if(!tmp518)
  {
    tmp513 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* cond.Cells[3].sat.sv variable */),-1e7);
    tmp514 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* cond.Cells[3].sat.sv variable */),1e7);
    if(!(tmp513 && tmp514))
    {
      tmp516 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* cond.Cells[3].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta517 = stringAppend(MMC_REFSTRINGLIT(tmp515),tmp516);
      {
        const char* assert_cond = "(cond.Cells[3].sat.sv >= -1e7 and cond.Cells[3].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta517));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta517));
        }
      }
      tmp518 = 1;
    }
  }
  threadData->lastEquationSolved = 1899;
}

/*
equation index: 1900
type: ALGORITHM

  assert(cond.Cells[3].h >= -1e10 and cond.Cells[3].h <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[3].h <= 1e10, has value: " + String(cond.Cells[3].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1900};
  modelica_boolean tmp519;
  modelica_boolean tmp520;
  static const MMC_DEFSTRINGLIT(tmp521,84,"Variable violating min/max constraint: -1e10 <= cond.Cells[3].h <= 1e10, has value: ");
  modelica_string tmp522;
  modelica_metatype tmpMeta523;
  static int tmp524 = 0;
  if(!tmp524)
  {
    tmp519 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */),-1e10);
    tmp520 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */),1e10);
    if(!(tmp519 && tmp520))
    {
      tmp522 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* cond.Cells[3].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta523 = stringAppend(MMC_REFSTRINGLIT(tmp521),tmp522);
      {
        const char* assert_cond = "(cond.Cells[3].h >= -1e10 and cond.Cells[3].h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta523));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta523));
        }
      }
      tmp524 = 1;
    }
  }
  threadData->lastEquationSolved = 1900;
}

/*
equation index: 1901
type: ALGORITHM

  assert(cond.Cells[3].T >= 1.0 and cond.Cells[3].T <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[3].T <= 1e4, has value: " + String(cond.Cells[3].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1901};
  modelica_boolean tmp525;
  modelica_boolean tmp526;
  static const MMC_DEFSTRINGLIT(tmp527,81,"Variable violating min/max constraint: 1.0 <= cond.Cells[3].T <= 1e4, has value: ");
  modelica_string tmp528;
  modelica_metatype tmpMeta529;
  static int tmp530 = 0;
  if(!tmp530)
  {
    tmp525 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[739]] /* cond.Cells[3].T variable */),1.0);
    tmp526 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[739]] /* cond.Cells[3].T variable */),1e4);
    if(!(tmp525 && tmp526))
    {
      tmp528 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[739]] /* cond.Cells[3].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta529 = stringAppend(MMC_REFSTRINGLIT(tmp527),tmp528);
      {
        const char* assert_cond = "(cond.Cells[3].T >= 1.0 and cond.Cells[3].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta529));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta529));
        }
      }
      tmp530 = 1;
    }
  }
  threadData->lastEquationSolved = 1901;
}

/*
equation index: 1902
type: ALGORITHM

  assert(cond.Cells[3].rho >= 0.0 and cond.Cells[3].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[3].rho <= 1e5, has value: " + String(cond.Cells[3].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1902};
  modelica_boolean tmp531;
  modelica_boolean tmp532;
  static const MMC_DEFSTRINGLIT(tmp533,83,"Variable violating min/max constraint: 0.0 <= cond.Cells[3].rho <= 1e5, has value: ");
  modelica_string tmp534;
  modelica_metatype tmpMeta535;
  static int tmp536 = 0;
  if(!tmp536)
  {
    tmp531 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[844]] /* cond.Cells[3].rho variable */),0.0);
    tmp532 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[844]] /* cond.Cells[3].rho variable */),1e5);
    if(!(tmp531 && tmp532))
    {
      tmp534 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[844]] /* cond.Cells[3].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta535 = stringAppend(MMC_REFSTRINGLIT(tmp533),tmp534);
      {
        const char* assert_cond = "(cond.Cells[3].rho >= 0.0 and cond.Cells[3].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta535));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta535));
        }
      }
      tmp536 = 1;
    }
  }
  threadData->lastEquationSolved = 1902;
}

/*
equation index: 1903
type: ALGORITHM

  assert(cond.Cells[3].hnode_su >= -1e10 and cond.Cells[3].hnode_su <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[3].hnode_su <= 1e10, has value: " + String(cond.Cells[3].hnode_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1903};
  modelica_boolean tmp537;
  modelica_boolean tmp538;
  static const MMC_DEFSTRINGLIT(tmp539,91,"Variable violating min/max constraint: -1e10 <= cond.Cells[3].hnode_su <= 1e10, has value: ");
  modelica_string tmp540;
  modelica_metatype tmpMeta541;
  static int tmp542 = 0;
  if(!tmp542)
  {
    tmp537 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */),-1e10);
    tmp538 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */),1e10);
    if(!(tmp537 && tmp538))
    {
      tmp540 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* cond.Cells[3].hnode_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta541 = stringAppend(MMC_REFSTRINGLIT(tmp539),tmp540);
      {
        const char* assert_cond = "(cond.Cells[3].hnode_su >= -1e10 and cond.Cells[3].hnode_su <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta541));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta541));
        }
      }
      tmp542 = 1;
    }
  }
  threadData->lastEquationSolved = 1903;
}

/*
equation index: 1904
type: ALGORITHM

  assert(cond.Cells[3].h_l >= -1e10 and cond.Cells[3].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[3].h_l <= 1e10, has value: " + String(cond.Cells[3].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1904};
  modelica_boolean tmp543;
  modelica_boolean tmp544;
  static const MMC_DEFSTRINGLIT(tmp545,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[3].h_l <= 1e10, has value: ");
  modelica_string tmp546;
  modelica_metatype tmpMeta547;
  static int tmp548 = 0;
  if(!tmp548)
  {
    tmp543 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* cond.Cells[3].h_l variable */),-1e10);
    tmp544 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* cond.Cells[3].h_l variable */),1e10);
    if(!(tmp543 && tmp544))
    {
      tmp546 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* cond.Cells[3].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta547 = stringAppend(MMC_REFSTRINGLIT(tmp545),tmp546);
      {
        const char* assert_cond = "(cond.Cells[3].h_l >= -1e10 and cond.Cells[3].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta547));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta547));
        }
      }
      tmp548 = 1;
    }
  }
  threadData->lastEquationSolved = 1904;
}

/*
equation index: 1905
type: ALGORITHM

  assert(cond.Cells[3].h_v >= -1e10 and cond.Cells[3].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[3].h_v <= 1e10, has value: " + String(cond.Cells[3].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1905};
  modelica_boolean tmp549;
  modelica_boolean tmp550;
  static const MMC_DEFSTRINGLIT(tmp551,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[3].h_v <= 1e10, has value: ");
  modelica_string tmp552;
  modelica_metatype tmpMeta553;
  static int tmp554 = 0;
  if(!tmp554)
  {
    tmp549 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* cond.Cells[3].h_v variable */),-1e10);
    tmp550 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* cond.Cells[3].h_v variable */),1e10);
    if(!(tmp549 && tmp550))
    {
      tmp552 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* cond.Cells[3].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta553 = stringAppend(MMC_REFSTRINGLIT(tmp551),tmp552);
      {
        const char* assert_cond = "(cond.Cells[3].h_v >= -1e10 and cond.Cells[3].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta553));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta553));
        }
      }
      tmp554 = 1;
    }
  }
  threadData->lastEquationSolved = 1905;
}

/*
equation index: 1906
type: ALGORITHM

  assert(cond.Cells[3].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= cond.Cells[3].M_tot, has value: " + String(cond.Cells[3].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1906};
  modelica_boolean tmp555;
  static const MMC_DEFSTRINGLIT(tmp556,74,"Variable violating min constraint: 0.0 <= cond.Cells[3].M_tot, has value: ");
  modelica_string tmp557;
  modelica_metatype tmpMeta558;
  static int tmp559 = 0;
  if(!tmp559)
  {
    tmp555 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cond.Cells[3].M_tot variable */),0.0);
    if(!tmp555)
    {
      tmp557 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cond.Cells[3].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta558 = stringAppend(MMC_REFSTRINGLIT(tmp556),tmp557);
      {
        const char* assert_cond = "(cond.Cells[3].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta558));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta558));
        }
      }
      tmp559 = 1;
    }
  }
  threadData->lastEquationSolved = 1906;
}

/*
equation index: 1907
type: ALGORITHM

  assert(cond.Cells[4].InFlow.m_flow >= -1e5 and cond.Cells[4].InFlow.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= cond.Cells[4].InFlow.m_flow <= 1e5, has value: " + String(cond.Cells[4].InFlow.m_flow, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1907};
  modelica_boolean tmp560;
  modelica_boolean tmp561;
  static const MMC_DEFSTRINGLIT(tmp562,94,"Variable violating min/max constraint: -1e5 <= cond.Cells[4].InFlow.m_flow <= 1e5, has value: ");
  modelica_string tmp563;
  modelica_metatype tmpMeta564;
  static int tmp565 = 0;
  if(!tmp565)
  {
    tmp560 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cond.Cells[4].InFlow.m_flow variable */),-1e5);
    tmp561 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cond.Cells[4].InFlow.m_flow variable */),1e5);
    if(!(tmp560 && tmp561))
    {
      tmp563 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cond.Cells[4].InFlow.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta564 = stringAppend(MMC_REFSTRINGLIT(tmp562),tmp563);
      {
        const char* assert_cond = "(cond.Cells[4].InFlow.m_flow >= -1e5 and cond.Cells[4].InFlow.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta564));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta564));
        }
      }
      tmp565 = 1;
    }
  }
  threadData->lastEquationSolved = 1907;
}

/*
equation index: 1908
type: ALGORITHM

  assert(cond.Cells[4].fluidState.a >= 0.0 and cond.Cells[4].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.a <= 1e5, has value: " + String(cond.Cells[4].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1908};
  modelica_boolean tmp566;
  modelica_boolean tmp567;
  static const MMC_DEFSTRINGLIT(tmp568,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.a <= 1e5, has value: ");
  modelica_string tmp569;
  modelica_metatype tmpMeta570;
  static int tmp571 = 0;
  if(!tmp571)
  {
    tmp566 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cond.Cells[4].fluidState.a variable */),0.0);
    tmp567 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cond.Cells[4].fluidState.a variable */),1e5);
    if(!(tmp566 && tmp567))
    {
      tmp569 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cond.Cells[4].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta570 = stringAppend(MMC_REFSTRINGLIT(tmp568),tmp569);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.a >= 0.0 and cond.Cells[4].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta570));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta570));
        }
      }
      tmp571 = 1;
    }
  }
  threadData->lastEquationSolved = 1908;
}

/*
equation index: 1909
type: ALGORITHM

  assert(cond.Cells[4].fluidState.cp >= 0.0 and cond.Cells[4].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.cp <= 1e7, has value: " + String(cond.Cells[4].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1909};
  modelica_boolean tmp572;
  modelica_boolean tmp573;
  static const MMC_DEFSTRINGLIT(tmp574,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp575;
  modelica_metatype tmpMeta576;
  static int tmp577 = 0;
  if(!tmp577)
  {
    tmp572 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cond.Cells[4].fluidState.cp variable */),0.0);
    tmp573 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cond.Cells[4].fluidState.cp variable */),1e7);
    if(!(tmp572 && tmp573))
    {
      tmp575 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cond.Cells[4].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta576 = stringAppend(MMC_REFSTRINGLIT(tmp574),tmp575);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.cp >= 0.0 and cond.Cells[4].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta576));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta576));
        }
      }
      tmp577 = 1;
    }
  }
  threadData->lastEquationSolved = 1909;
}

/*
equation index: 1910
type: ALGORITHM

  assert(cond.Cells[4].fluidState.cv >= 0.0 and cond.Cells[4].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.cv <= 1e7, has value: " + String(cond.Cells[4].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1910};
  modelica_boolean tmp578;
  modelica_boolean tmp579;
  static const MMC_DEFSTRINGLIT(tmp580,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp581;
  modelica_metatype tmpMeta582;
  static int tmp583 = 0;
  if(!tmp583)
  {
    tmp578 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cond.Cells[4].fluidState.cv variable */),0.0);
    tmp579 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cond.Cells[4].fluidState.cv variable */),1e7);
    if(!(tmp578 && tmp579))
    {
      tmp581 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cond.Cells[4].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta582 = stringAppend(MMC_REFSTRINGLIT(tmp580),tmp581);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.cv >= 0.0 and cond.Cells[4].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta582));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta582));
        }
      }
      tmp583 = 1;
    }
  }
  threadData->lastEquationSolved = 1910;
}

/*
equation index: 1911
type: ALGORITHM

  assert(cond.Cells[4].fluidState.eta >= 0.0 and cond.Cells[4].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.eta <= 1e8, has value: " + String(cond.Cells[4].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1911};
  modelica_boolean tmp584;
  modelica_boolean tmp585;
  static const MMC_DEFSTRINGLIT(tmp586,94,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp587;
  modelica_metatype tmpMeta588;
  static int tmp589 = 0;
  if(!tmp589)
  {
    tmp584 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* cond.Cells[4].fluidState.eta variable */),0.0);
    tmp585 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* cond.Cells[4].fluidState.eta variable */),1e8);
    if(!(tmp584 && tmp585))
    {
      tmp587 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* cond.Cells[4].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta588 = stringAppend(MMC_REFSTRINGLIT(tmp586),tmp587);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.eta >= 0.0 and cond.Cells[4].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta588));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta588));
        }
      }
      tmp589 = 1;
    }
  }
  threadData->lastEquationSolved = 1911;
}

/*
equation index: 1912
type: ALGORITHM

  assert(cond.Cells[4].fluidState.h >= -1e10 and cond.Cells[4].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[4].fluidState.h <= 1e10, has value: " + String(cond.Cells[4].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1912};
  modelica_boolean tmp590;
  modelica_boolean tmp591;
  static const MMC_DEFSTRINGLIT(tmp592,95,"Variable violating min/max constraint: -1e10 <= cond.Cells[4].fluidState.h <= 1e10, has value: ");
  modelica_string tmp593;
  modelica_metatype tmpMeta594;
  static int tmp595 = 0;
  if(!tmp595)
  {
    tmp590 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* cond.Cells[4].fluidState.h variable */),-1e10);
    tmp591 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* cond.Cells[4].fluidState.h variable */),1e10);
    if(!(tmp590 && tmp591))
    {
      tmp593 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* cond.Cells[4].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta594 = stringAppend(MMC_REFSTRINGLIT(tmp592),tmp593);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.h >= -1e10 and cond.Cells[4].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta594));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta594));
        }
      }
      tmp595 = 1;
    }
  }
  threadData->lastEquationSolved = 1912;
}

/*
equation index: 1913
type: ALGORITHM

  assert(cond.Cells[4].fluidState.lambda >= 0.0 and cond.Cells[4].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.lambda <= 500.0, has value: " + String(cond.Cells[4].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1913};
  modelica_boolean tmp596;
  modelica_boolean tmp597;
  static const MMC_DEFSTRINGLIT(tmp598,99,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp599;
  modelica_metatype tmpMeta600;
  static int tmp601 = 0;
  if(!tmp601)
  {
    tmp596 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* cond.Cells[4].fluidState.lambda variable */),0.0);
    tmp597 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* cond.Cells[4].fluidState.lambda variable */),500.0);
    if(!(tmp596 && tmp597))
    {
      tmp599 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* cond.Cells[4].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta600 = stringAppend(MMC_REFSTRINGLIT(tmp598),tmp599);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.lambda >= 0.0 and cond.Cells[4].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta600));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta600));
        }
      }
      tmp601 = 1;
    }
  }
  threadData->lastEquationSolved = 1913;
}

/*
equation index: 1914
type: ALGORITHM

  assert(cond.Cells[4].fluidState.p >= 0.0 and cond.Cells[4].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.p <= 1e8, has value: " + String(cond.Cells[4].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1914};
  modelica_boolean tmp602;
  modelica_boolean tmp603;
  static const MMC_DEFSTRINGLIT(tmp604,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].fluidState.p <= 1e8, has value: ");
  modelica_string tmp605;
  modelica_metatype tmpMeta606;
  static int tmp607 = 0;
  if(!tmp607)
  {
    tmp602 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* cond.Cells[4].fluidState.p variable */),0.0);
    tmp603 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* cond.Cells[4].fluidState.p variable */),1e8);
    if(!(tmp602 && tmp603))
    {
      tmp605 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* cond.Cells[4].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta606 = stringAppend(MMC_REFSTRINGLIT(tmp604),tmp605);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.p >= 0.0 and cond.Cells[4].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta606));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta606));
        }
      }
      tmp607 = 1;
    }
  }
  threadData->lastEquationSolved = 1914;
}

/*
equation index: 1915
type: ALGORITHM

  assert(cond.Cells[4].fluidState.phase >= 0 and cond.Cells[4].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= cond.Cells[4].fluidState.phase <= 2, has value: " + String(cond.Cells[4].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1915};
  modelica_boolean tmp608;
  modelica_boolean tmp609;
  static const MMC_DEFSTRINGLIT(tmp610,92,"Variable violating min/max constraint: 0 <= cond.Cells[4].fluidState.phase <= 2, has value: ");
  modelica_string tmp611;
  modelica_metatype tmpMeta612;
  static int tmp613 = 0;
  if(!tmp613)
  {
    tmp608 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[31]] /* cond.Cells[4].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp609 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[31]] /* cond.Cells[4].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp608 && tmp609))
    {
      tmp611 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[31]] /* cond.Cells[4].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta612 = stringAppend(MMC_REFSTRINGLIT(tmp610),tmp611);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.phase >= 0 and cond.Cells[4].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta612));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta612));
        }
      }
      tmp613 = 1;
    }
  }
  threadData->lastEquationSolved = 1915;
}

/*
equation index: 1916
type: ALGORITHM

  assert(cond.Cells[4].fluidState.s >= -1e7 and cond.Cells[4].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[4].fluidState.s <= 1e7, has value: " + String(cond.Cells[4].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1916};
  modelica_boolean tmp614;
  modelica_boolean tmp615;
  static const MMC_DEFSTRINGLIT(tmp616,93,"Variable violating min/max constraint: -1e7 <= cond.Cells[4].fluidState.s <= 1e7, has value: ");
  modelica_string tmp617;
  modelica_metatype tmpMeta618;
  static int tmp619 = 0;
  if(!tmp619)
  {
    tmp614 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cond.Cells[4].fluidState.s variable */),-1e7);
    tmp615 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cond.Cells[4].fluidState.s variable */),1e7);
    if(!(tmp614 && tmp615))
    {
      tmp617 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cond.Cells[4].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta618 = stringAppend(MMC_REFSTRINGLIT(tmp616),tmp617);
      {
        const char* assert_cond = "(cond.Cells[4].fluidState.s >= -1e7 and cond.Cells[4].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta618));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta618));
        }
      }
      tmp619 = 1;
    }
  }
  threadData->lastEquationSolved = 1916;
}

/*
equation index: 1917
type: ALGORITHM

  assert(cond.Cells[4].sat.Tsat >= 1.0 and cond.Cells[4].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[4].sat.Tsat <= 1e4, has value: " + String(cond.Cells[4].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1917};
  modelica_boolean tmp620;
  modelica_boolean tmp621;
  static const MMC_DEFSTRINGLIT(tmp622,88,"Variable violating min/max constraint: 1.0 <= cond.Cells[4].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp623;
  modelica_metatype tmpMeta624;
  static int tmp625 = 0;
  if(!tmp625)
  {
    tmp620 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* cond.Cells[4].sat.Tsat variable */),1.0);
    tmp621 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* cond.Cells[4].sat.Tsat variable */),1e4);
    if(!(tmp620 && tmp621))
    {
      tmp623 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* cond.Cells[4].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta624 = stringAppend(MMC_REFSTRINGLIT(tmp622),tmp623);
      {
        const char* assert_cond = "(cond.Cells[4].sat.Tsat >= 1.0 and cond.Cells[4].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta624));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta624));
        }
      }
      tmp625 = 1;
    }
  }
  threadData->lastEquationSolved = 1917;
}

/*
equation index: 1918
type: ALGORITHM

  assert(cond.Cells[4].sat.dl >= 0.0 and cond.Cells[4].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].sat.dl <= 1e5, has value: " + String(cond.Cells[4].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1918};
  modelica_boolean tmp626;
  modelica_boolean tmp627;
  static const MMC_DEFSTRINGLIT(tmp628,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].sat.dl <= 1e5, has value: ");
  modelica_string tmp629;
  modelica_metatype tmpMeta630;
  static int tmp631 = 0;
  if(!tmp631)
  {
    tmp626 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[880]] /* cond.Cells[4].sat.dl variable */),0.0);
    tmp627 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[880]] /* cond.Cells[4].sat.dl variable */),1e5);
    if(!(tmp626 && tmp627))
    {
      tmp629 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[880]] /* cond.Cells[4].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta630 = stringAppend(MMC_REFSTRINGLIT(tmp628),tmp629);
      {
        const char* assert_cond = "(cond.Cells[4].sat.dl >= 0.0 and cond.Cells[4].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta630));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta630));
        }
      }
      tmp631 = 1;
    }
  }
  threadData->lastEquationSolved = 1918;
}

/*
equation index: 1919
type: ALGORITHM

  assert(cond.Cells[4].sat.dv >= 0.0 and cond.Cells[4].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].sat.dv <= 1e5, has value: " + String(cond.Cells[4].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1919};
  modelica_boolean tmp632;
  modelica_boolean tmp633;
  static const MMC_DEFSTRINGLIT(tmp634,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].sat.dv <= 1e5, has value: ");
  modelica_string tmp635;
  modelica_metatype tmpMeta636;
  static int tmp637 = 0;
  if(!tmp637)
  {
    tmp632 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[885]] /* cond.Cells[4].sat.dv variable */),0.0);
    tmp633 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[885]] /* cond.Cells[4].sat.dv variable */),1e5);
    if(!(tmp632 && tmp633))
    {
      tmp635 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[885]] /* cond.Cells[4].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta636 = stringAppend(MMC_REFSTRINGLIT(tmp634),tmp635);
      {
        const char* assert_cond = "(cond.Cells[4].sat.dv >= 0.0 and cond.Cells[4].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta636));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta636));
        }
      }
      tmp637 = 1;
    }
  }
  threadData->lastEquationSolved = 1919;
}

/*
equation index: 1920
type: ALGORITHM

  assert(cond.Cells[4].sat.psat >= 0.0 and cond.Cells[4].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].sat.psat <= 1e8, has value: " + String(cond.Cells[4].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1920};
  modelica_boolean tmp638;
  modelica_boolean tmp639;
  static const MMC_DEFSTRINGLIT(tmp640,88,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].sat.psat <= 1e8, has value: ");
  modelica_string tmp641;
  modelica_metatype tmpMeta642;
  static int tmp643 = 0;
  if(!tmp643)
  {
    tmp638 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[890]] /* cond.Cells[4].sat.psat variable */),0.0);
    tmp639 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[890]] /* cond.Cells[4].sat.psat variable */),1e8);
    if(!(tmp638 && tmp639))
    {
      tmp641 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[890]] /* cond.Cells[4].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta642 = stringAppend(MMC_REFSTRINGLIT(tmp640),tmp641);
      {
        const char* assert_cond = "(cond.Cells[4].sat.psat >= 0.0 and cond.Cells[4].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta642));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta642));
        }
      }
      tmp643 = 1;
    }
  }
  threadData->lastEquationSolved = 1920;
}

/*
equation index: 1921
type: ALGORITHM

  assert(cond.Cells[4].sat.sl >= -1e7 and cond.Cells[4].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[4].sat.sl <= 1e7, has value: " + String(cond.Cells[4].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1921};
  modelica_boolean tmp644;
  modelica_boolean tmp645;
  static const MMC_DEFSTRINGLIT(tmp646,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[4].sat.sl <= 1e7, has value: ");
  modelica_string tmp647;
  modelica_metatype tmpMeta648;
  static int tmp649 = 0;
  if(!tmp649)
  {
    tmp644 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* cond.Cells[4].sat.sl variable */),-1e7);
    tmp645 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* cond.Cells[4].sat.sl variable */),1e7);
    if(!(tmp644 && tmp645))
    {
      tmp647 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* cond.Cells[4].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta648 = stringAppend(MMC_REFSTRINGLIT(tmp646),tmp647);
      {
        const char* assert_cond = "(cond.Cells[4].sat.sl >= -1e7 and cond.Cells[4].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta648));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta648));
        }
      }
      tmp649 = 1;
    }
  }
  threadData->lastEquationSolved = 1921;
}

/*
equation index: 1922
type: ALGORITHM

  assert(cond.Cells[4].sat.sv >= -1e7 and cond.Cells[4].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[4].sat.sv <= 1e7, has value: " + String(cond.Cells[4].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1922};
  modelica_boolean tmp650;
  modelica_boolean tmp651;
  static const MMC_DEFSTRINGLIT(tmp652,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[4].sat.sv <= 1e7, has value: ");
  modelica_string tmp653;
  modelica_metatype tmpMeta654;
  static int tmp655 = 0;
  if(!tmp655)
  {
    tmp650 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* cond.Cells[4].sat.sv variable */),-1e7);
    tmp651 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* cond.Cells[4].sat.sv variable */),1e7);
    if(!(tmp650 && tmp651))
    {
      tmp653 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* cond.Cells[4].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta654 = stringAppend(MMC_REFSTRINGLIT(tmp652),tmp653);
      {
        const char* assert_cond = "(cond.Cells[4].sat.sv >= -1e7 and cond.Cells[4].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta654));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta654));
        }
      }
      tmp655 = 1;
    }
  }
  threadData->lastEquationSolved = 1922;
}

/*
equation index: 1923
type: ALGORITHM

  assert(cond.Cells[4].h >= -1e10 and cond.Cells[4].h <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[4].h <= 1e10, has value: " + String(cond.Cells[4].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1923};
  modelica_boolean tmp656;
  modelica_boolean tmp657;
  static const MMC_DEFSTRINGLIT(tmp658,84,"Variable violating min/max constraint: -1e10 <= cond.Cells[4].h <= 1e10, has value: ");
  modelica_string tmp659;
  modelica_metatype tmpMeta660;
  static int tmp661 = 0;
  if(!tmp661)
  {
    tmp656 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */),-1e10);
    tmp657 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */),1e10);
    if(!(tmp656 && tmp657))
    {
      tmp659 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* cond.Cells[4].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta660 = stringAppend(MMC_REFSTRINGLIT(tmp658),tmp659);
      {
        const char* assert_cond = "(cond.Cells[4].h >= -1e10 and cond.Cells[4].h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta660));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta660));
        }
      }
      tmp661 = 1;
    }
  }
  threadData->lastEquationSolved = 1923;
}

/*
equation index: 1924
type: ALGORITHM

  assert(cond.Cells[4].T >= 1.0 and cond.Cells[4].T <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[4].T <= 1e4, has value: " + String(cond.Cells[4].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1924};
  modelica_boolean tmp662;
  modelica_boolean tmp663;
  static const MMC_DEFSTRINGLIT(tmp664,81,"Variable violating min/max constraint: 1.0 <= cond.Cells[4].T <= 1e4, has value: ");
  modelica_string tmp665;
  modelica_metatype tmpMeta666;
  static int tmp667 = 0;
  if(!tmp667)
  {
    tmp662 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cond.Cells[4].T variable */),1.0);
    tmp663 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cond.Cells[4].T variable */),1e4);
    if(!(tmp662 && tmp663))
    {
      tmp665 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cond.Cells[4].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta666 = stringAppend(MMC_REFSTRINGLIT(tmp664),tmp665);
      {
        const char* assert_cond = "(cond.Cells[4].T >= 1.0 and cond.Cells[4].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta666));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta666));
        }
      }
      tmp667 = 1;
    }
  }
  threadData->lastEquationSolved = 1924;
}

/*
equation index: 1925
type: ALGORITHM

  assert(cond.Cells[4].rho >= 0.0 and cond.Cells[4].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[4].rho <= 1e5, has value: " + String(cond.Cells[4].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1925};
  modelica_boolean tmp668;
  modelica_boolean tmp669;
  static const MMC_DEFSTRINGLIT(tmp670,83,"Variable violating min/max constraint: 0.0 <= cond.Cells[4].rho <= 1e5, has value: ");
  modelica_string tmp671;
  modelica_metatype tmpMeta672;
  static int tmp673 = 0;
  if(!tmp673)
  {
    tmp668 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* cond.Cells[4].rho variable */),0.0);
    tmp669 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* cond.Cells[4].rho variable */),1e5);
    if(!(tmp668 && tmp669))
    {
      tmp671 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* cond.Cells[4].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta672 = stringAppend(MMC_REFSTRINGLIT(tmp670),tmp671);
      {
        const char* assert_cond = "(cond.Cells[4].rho >= 0.0 and cond.Cells[4].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta672));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta672));
        }
      }
      tmp673 = 1;
    }
  }
  threadData->lastEquationSolved = 1925;
}

/*
equation index: 1926
type: ALGORITHM

  assert(cond.Cells[4].hnode_su >= -1e10 and cond.Cells[4].hnode_su <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[4].hnode_su <= 1e10, has value: " + String(cond.Cells[4].hnode_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1926};
  modelica_boolean tmp674;
  modelica_boolean tmp675;
  static const MMC_DEFSTRINGLIT(tmp676,91,"Variable violating min/max constraint: -1e10 <= cond.Cells[4].hnode_su <= 1e10, has value: ");
  modelica_string tmp677;
  modelica_metatype tmpMeta678;
  static int tmp679 = 0;
  if(!tmp679)
  {
    tmp674 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */),-1e10);
    tmp675 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */),1e10);
    if(!(tmp674 && tmp675))
    {
      tmp677 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* cond.Cells[4].hnode_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta678 = stringAppend(MMC_REFSTRINGLIT(tmp676),tmp677);
      {
        const char* assert_cond = "(cond.Cells[4].hnode_su >= -1e10 and cond.Cells[4].hnode_su <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta678));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta678));
        }
      }
      tmp679 = 1;
    }
  }
  threadData->lastEquationSolved = 1926;
}

/*
equation index: 1927
type: ALGORITHM

  assert(cond.Cells[4].h_l >= -1e10 and cond.Cells[4].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[4].h_l <= 1e10, has value: " + String(cond.Cells[4].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1927};
  modelica_boolean tmp680;
  modelica_boolean tmp681;
  static const MMC_DEFSTRINGLIT(tmp682,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[4].h_l <= 1e10, has value: ");
  modelica_string tmp683;
  modelica_metatype tmpMeta684;
  static int tmp685 = 0;
  if(!tmp685)
  {
    tmp680 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* cond.Cells[4].h_l variable */),-1e10);
    tmp681 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* cond.Cells[4].h_l variable */),1e10);
    if(!(tmp680 && tmp681))
    {
      tmp683 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* cond.Cells[4].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta684 = stringAppend(MMC_REFSTRINGLIT(tmp682),tmp683);
      {
        const char* assert_cond = "(cond.Cells[4].h_l >= -1e10 and cond.Cells[4].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta684));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta684));
        }
      }
      tmp685 = 1;
    }
  }
  threadData->lastEquationSolved = 1927;
}

/*
equation index: 1928
type: ALGORITHM

  assert(cond.Cells[4].h_v >= -1e10 and cond.Cells[4].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[4].h_v <= 1e10, has value: " + String(cond.Cells[4].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1928};
  modelica_boolean tmp686;
  modelica_boolean tmp687;
  static const MMC_DEFSTRINGLIT(tmp688,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[4].h_v <= 1e10, has value: ");
  modelica_string tmp689;
  modelica_metatype tmpMeta690;
  static int tmp691 = 0;
  if(!tmp691)
  {
    tmp686 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* cond.Cells[4].h_v variable */),-1e10);
    tmp687 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* cond.Cells[4].h_v variable */),1e10);
    if(!(tmp686 && tmp687))
    {
      tmp689 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* cond.Cells[4].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta690 = stringAppend(MMC_REFSTRINGLIT(tmp688),tmp689);
      {
        const char* assert_cond = "(cond.Cells[4].h_v >= -1e10 and cond.Cells[4].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta690));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta690));
        }
      }
      tmp691 = 1;
    }
  }
  threadData->lastEquationSolved = 1928;
}

/*
equation index: 1929
type: ALGORITHM

  assert(cond.Cells[4].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= cond.Cells[4].M_tot, has value: " + String(cond.Cells[4].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1929};
  modelica_boolean tmp692;
  static const MMC_DEFSTRINGLIT(tmp693,74,"Variable violating min constraint: 0.0 <= cond.Cells[4].M_tot, has value: ");
  modelica_string tmp694;
  modelica_metatype tmpMeta695;
  static int tmp696 = 0;
  if(!tmp696)
  {
    tmp692 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cond.Cells[4].M_tot variable */),0.0);
    if(!tmp692)
    {
      tmp694 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cond.Cells[4].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta695 = stringAppend(MMC_REFSTRINGLIT(tmp693),tmp694);
      {
        const char* assert_cond = "(cond.Cells[4].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta695));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta695));
        }
      }
      tmp696 = 1;
    }
  }
  threadData->lastEquationSolved = 1929;
}

/*
equation index: 1930
type: ALGORITHM

  assert(cond.Cells[5].InFlow.m_flow >= -1e5 and cond.Cells[5].InFlow.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= cond.Cells[5].InFlow.m_flow <= 1e5, has value: " + String(cond.Cells[5].InFlow.m_flow, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1930};
  modelica_boolean tmp697;
  modelica_boolean tmp698;
  static const MMC_DEFSTRINGLIT(tmp699,94,"Variable violating min/max constraint: -1e5 <= cond.Cells[5].InFlow.m_flow <= 1e5, has value: ");
  modelica_string tmp700;
  modelica_metatype tmpMeta701;
  static int tmp702 = 0;
  if(!tmp702)
  {
    tmp697 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cond.Cells[5].InFlow.m_flow variable */),-1e5);
    tmp698 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cond.Cells[5].InFlow.m_flow variable */),1e5);
    if(!(tmp697 && tmp698))
    {
      tmp700 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cond.Cells[5].InFlow.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta701 = stringAppend(MMC_REFSTRINGLIT(tmp699),tmp700);
      {
        const char* assert_cond = "(cond.Cells[5].InFlow.m_flow >= -1e5 and cond.Cells[5].InFlow.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta701));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta701));
        }
      }
      tmp702 = 1;
    }
  }
  threadData->lastEquationSolved = 1930;
}

/*
equation index: 1931
type: ALGORITHM

  assert(cond.Cells[5].fluidState.a >= 0.0 and cond.Cells[5].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.a <= 1e5, has value: " + String(cond.Cells[5].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1931};
  modelica_boolean tmp703;
  modelica_boolean tmp704;
  static const MMC_DEFSTRINGLIT(tmp705,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.a <= 1e5, has value: ");
  modelica_string tmp706;
  modelica_metatype tmpMeta707;
  static int tmp708 = 0;
  if(!tmp708)
  {
    tmp703 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cond.Cells[5].fluidState.a variable */),0.0);
    tmp704 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cond.Cells[5].fluidState.a variable */),1e5);
    if(!(tmp703 && tmp704))
    {
      tmp706 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cond.Cells[5].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta707 = stringAppend(MMC_REFSTRINGLIT(tmp705),tmp706);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.a >= 0.0 and cond.Cells[5].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta707));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta707));
        }
      }
      tmp708 = 1;
    }
  }
  threadData->lastEquationSolved = 1931;
}

/*
equation index: 1932
type: ALGORITHM

  assert(cond.Cells[5].fluidState.cp >= 0.0 and cond.Cells[5].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.cp <= 1e7, has value: " + String(cond.Cells[5].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1932};
  modelica_boolean tmp709;
  modelica_boolean tmp710;
  static const MMC_DEFSTRINGLIT(tmp711,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp712;
  modelica_metatype tmpMeta713;
  static int tmp714 = 0;
  if(!tmp714)
  {
    tmp709 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* cond.Cells[5].fluidState.cp variable */),0.0);
    tmp710 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* cond.Cells[5].fluidState.cp variable */),1e7);
    if(!(tmp709 && tmp710))
    {
      tmp712 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* cond.Cells[5].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta713 = stringAppend(MMC_REFSTRINGLIT(tmp711),tmp712);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.cp >= 0.0 and cond.Cells[5].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta713));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta713));
        }
      }
      tmp714 = 1;
    }
  }
  threadData->lastEquationSolved = 1932;
}

/*
equation index: 1933
type: ALGORITHM

  assert(cond.Cells[5].fluidState.cv >= 0.0 and cond.Cells[5].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.cv <= 1e7, has value: " + String(cond.Cells[5].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1933};
  modelica_boolean tmp715;
  modelica_boolean tmp716;
  static const MMC_DEFSTRINGLIT(tmp717,93,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp718;
  modelica_metatype tmpMeta719;
  static int tmp720 = 0;
  if(!tmp720)
  {
    tmp715 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* cond.Cells[5].fluidState.cv variable */),0.0);
    tmp716 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* cond.Cells[5].fluidState.cv variable */),1e7);
    if(!(tmp715 && tmp716))
    {
      tmp718 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* cond.Cells[5].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta719 = stringAppend(MMC_REFSTRINGLIT(tmp717),tmp718);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.cv >= 0.0 and cond.Cells[5].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta719));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta719));
        }
      }
      tmp720 = 1;
    }
  }
  threadData->lastEquationSolved = 1933;
}

/*
equation index: 1934
type: ALGORITHM

  assert(cond.Cells[5].fluidState.eta >= 0.0 and cond.Cells[5].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.eta <= 1e8, has value: " + String(cond.Cells[5].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1934};
  modelica_boolean tmp721;
  modelica_boolean tmp722;
  static const MMC_DEFSTRINGLIT(tmp723,94,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp724;
  modelica_metatype tmpMeta725;
  static int tmp726 = 0;
  if(!tmp726)
  {
    tmp721 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[781]] /* cond.Cells[5].fluidState.eta variable */),0.0);
    tmp722 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[781]] /* cond.Cells[5].fluidState.eta variable */),1e8);
    if(!(tmp721 && tmp722))
    {
      tmp724 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[781]] /* cond.Cells[5].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta725 = stringAppend(MMC_REFSTRINGLIT(tmp723),tmp724);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.eta >= 0.0 and cond.Cells[5].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta725));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta725));
        }
      }
      tmp726 = 1;
    }
  }
  threadData->lastEquationSolved = 1934;
}

/*
equation index: 1935
type: ALGORITHM

  assert(cond.Cells[5].fluidState.h >= -1e10 and cond.Cells[5].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[5].fluidState.h <= 1e10, has value: " + String(cond.Cells[5].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1935};
  modelica_boolean tmp727;
  modelica_boolean tmp728;
  static const MMC_DEFSTRINGLIT(tmp729,95,"Variable violating min/max constraint: -1e10 <= cond.Cells[5].fluidState.h <= 1e10, has value: ");
  modelica_string tmp730;
  modelica_metatype tmpMeta731;
  static int tmp732 = 0;
  if(!tmp732)
  {
    tmp727 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cond.Cells[5].fluidState.h variable */),-1e10);
    tmp728 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cond.Cells[5].fluidState.h variable */),1e10);
    if(!(tmp727 && tmp728))
    {
      tmp730 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cond.Cells[5].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta731 = stringAppend(MMC_REFSTRINGLIT(tmp729),tmp730);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.h >= -1e10 and cond.Cells[5].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta731));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta731));
        }
      }
      tmp732 = 1;
    }
  }
  threadData->lastEquationSolved = 1935;
}

/*
equation index: 1936
type: ALGORITHM

  assert(cond.Cells[5].fluidState.lambda >= 0.0 and cond.Cells[5].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.lambda <= 500.0, has value: " + String(cond.Cells[5].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1936};
  modelica_boolean tmp733;
  modelica_boolean tmp734;
  static const MMC_DEFSTRINGLIT(tmp735,99,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp736;
  modelica_metatype tmpMeta737;
  static int tmp738 = 0;
  if(!tmp738)
  {
    tmp733 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cond.Cells[5].fluidState.lambda variable */),0.0);
    tmp734 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cond.Cells[5].fluidState.lambda variable */),500.0);
    if(!(tmp733 && tmp734))
    {
      tmp736 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cond.Cells[5].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta737 = stringAppend(MMC_REFSTRINGLIT(tmp735),tmp736);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.lambda >= 0.0 and cond.Cells[5].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta737));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta737));
        }
      }
      tmp738 = 1;
    }
  }
  threadData->lastEquationSolved = 1936;
}

/*
equation index: 1937
type: ALGORITHM

  assert(cond.Cells[5].fluidState.p >= 0.0 and cond.Cells[5].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.p <= 1e8, has value: " + String(cond.Cells[5].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1937};
  modelica_boolean tmp739;
  modelica_boolean tmp740;
  static const MMC_DEFSTRINGLIT(tmp741,92,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].fluidState.p <= 1e8, has value: ");
  modelica_string tmp742;
  modelica_metatype tmpMeta743;
  static int tmp744 = 0;
  if(!tmp744)
  {
    tmp739 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* cond.Cells[5].fluidState.p variable */),0.0);
    tmp740 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* cond.Cells[5].fluidState.p variable */),1e8);
    if(!(tmp739 && tmp740))
    {
      tmp742 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* cond.Cells[5].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta743 = stringAppend(MMC_REFSTRINGLIT(tmp741),tmp742);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.p >= 0.0 and cond.Cells[5].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta743));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta743));
        }
      }
      tmp744 = 1;
    }
  }
  threadData->lastEquationSolved = 1937;
}

/*
equation index: 1938
type: ALGORITHM

  assert(cond.Cells[5].fluidState.phase >= 0 and cond.Cells[5].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= cond.Cells[5].fluidState.phase <= 2, has value: " + String(cond.Cells[5].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1938};
  modelica_boolean tmp745;
  modelica_boolean tmp746;
  static const MMC_DEFSTRINGLIT(tmp747,92,"Variable violating min/max constraint: 0 <= cond.Cells[5].fluidState.phase <= 2, has value: ");
  modelica_string tmp748;
  modelica_metatype tmpMeta749;
  static int tmp750 = 0;
  if(!tmp750)
  {
    tmp745 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[32]] /* cond.Cells[5].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp746 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[32]] /* cond.Cells[5].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp745 && tmp746))
    {
      tmp748 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[32]] /* cond.Cells[5].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta749 = stringAppend(MMC_REFSTRINGLIT(tmp747),tmp748);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.phase >= 0 and cond.Cells[5].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta749));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta749));
        }
      }
      tmp750 = 1;
    }
  }
  threadData->lastEquationSolved = 1938;
}

/*
equation index: 1939
type: ALGORITHM

  assert(cond.Cells[5].fluidState.s >= -1e7 and cond.Cells[5].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[5].fluidState.s <= 1e7, has value: " + String(cond.Cells[5].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1939};
  modelica_boolean tmp751;
  modelica_boolean tmp752;
  static const MMC_DEFSTRINGLIT(tmp753,93,"Variable violating min/max constraint: -1e7 <= cond.Cells[5].fluidState.s <= 1e7, has value: ");
  modelica_string tmp754;
  modelica_metatype tmpMeta755;
  static int tmp756 = 0;
  if(!tmp756)
  {
    tmp751 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* cond.Cells[5].fluidState.s variable */),-1e7);
    tmp752 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* cond.Cells[5].fluidState.s variable */),1e7);
    if(!(tmp751 && tmp752))
    {
      tmp754 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* cond.Cells[5].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta755 = stringAppend(MMC_REFSTRINGLIT(tmp753),tmp754);
      {
        const char* assert_cond = "(cond.Cells[5].fluidState.s >= -1e7 and cond.Cells[5].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta755));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta755));
        }
      }
      tmp756 = 1;
    }
  }
  threadData->lastEquationSolved = 1939;
}

/*
equation index: 1940
type: ALGORITHM

  assert(cond.Cells[5].sat.Tsat >= 1.0 and cond.Cells[5].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[5].sat.Tsat <= 1e4, has value: " + String(cond.Cells[5].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1940};
  modelica_boolean tmp757;
  modelica_boolean tmp758;
  static const MMC_DEFSTRINGLIT(tmp759,88,"Variable violating min/max constraint: 1.0 <= cond.Cells[5].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp760;
  modelica_metatype tmpMeta761;
  static int tmp762 = 0;
  if(!tmp762)
  {
    tmp757 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* cond.Cells[5].sat.Tsat variable */),1.0);
    tmp758 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* cond.Cells[5].sat.Tsat variable */),1e4);
    if(!(tmp757 && tmp758))
    {
      tmp760 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* cond.Cells[5].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta761 = stringAppend(MMC_REFSTRINGLIT(tmp759),tmp760);
      {
        const char* assert_cond = "(cond.Cells[5].sat.Tsat >= 1.0 and cond.Cells[5].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta761));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta761));
        }
      }
      tmp762 = 1;
    }
  }
  threadData->lastEquationSolved = 1940;
}

/*
equation index: 1941
type: ALGORITHM

  assert(cond.Cells[5].sat.dl >= 0.0 and cond.Cells[5].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].sat.dl <= 1e5, has value: " + String(cond.Cells[5].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1941};
  modelica_boolean tmp763;
  modelica_boolean tmp764;
  static const MMC_DEFSTRINGLIT(tmp765,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].sat.dl <= 1e5, has value: ");
  modelica_string tmp766;
  modelica_metatype tmpMeta767;
  static int tmp768 = 0;
  if(!tmp768)
  {
    tmp763 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* cond.Cells[5].sat.dl variable */),0.0);
    tmp764 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* cond.Cells[5].sat.dl variable */),1e5);
    if(!(tmp763 && tmp764))
    {
      tmp766 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* cond.Cells[5].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta767 = stringAppend(MMC_REFSTRINGLIT(tmp765),tmp766);
      {
        const char* assert_cond = "(cond.Cells[5].sat.dl >= 0.0 and cond.Cells[5].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta767));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta767));
        }
      }
      tmp768 = 1;
    }
  }
  threadData->lastEquationSolved = 1941;
}

/*
equation index: 1942
type: ALGORITHM

  assert(cond.Cells[5].sat.dv >= 0.0 and cond.Cells[5].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].sat.dv <= 1e5, has value: " + String(cond.Cells[5].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1942};
  modelica_boolean tmp769;
  modelica_boolean tmp770;
  static const MMC_DEFSTRINGLIT(tmp771,86,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].sat.dv <= 1e5, has value: ");
  modelica_string tmp772;
  modelica_metatype tmpMeta773;
  static int tmp774 = 0;
  if(!tmp774)
  {
    tmp769 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[886]] /* cond.Cells[5].sat.dv variable */),0.0);
    tmp770 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[886]] /* cond.Cells[5].sat.dv variable */),1e5);
    if(!(tmp769 && tmp770))
    {
      tmp772 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[886]] /* cond.Cells[5].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta773 = stringAppend(MMC_REFSTRINGLIT(tmp771),tmp772);
      {
        const char* assert_cond = "(cond.Cells[5].sat.dv >= 0.0 and cond.Cells[5].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta773));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta773));
        }
      }
      tmp774 = 1;
    }
  }
  threadData->lastEquationSolved = 1942;
}

/*
equation index: 1943
type: ALGORITHM

  assert(cond.Cells[5].sat.psat >= 0.0 and cond.Cells[5].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].sat.psat <= 1e8, has value: " + String(cond.Cells[5].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1943};
  modelica_boolean tmp775;
  modelica_boolean tmp776;
  static const MMC_DEFSTRINGLIT(tmp777,88,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].sat.psat <= 1e8, has value: ");
  modelica_string tmp778;
  modelica_metatype tmpMeta779;
  static int tmp780 = 0;
  if(!tmp780)
  {
    tmp775 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* cond.Cells[5].sat.psat variable */),0.0);
    tmp776 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* cond.Cells[5].sat.psat variable */),1e8);
    if(!(tmp775 && tmp776))
    {
      tmp778 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* cond.Cells[5].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta779 = stringAppend(MMC_REFSTRINGLIT(tmp777),tmp778);
      {
        const char* assert_cond = "(cond.Cells[5].sat.psat >= 0.0 and cond.Cells[5].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta779));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta779));
        }
      }
      tmp780 = 1;
    }
  }
  threadData->lastEquationSolved = 1943;
}

/*
equation index: 1944
type: ALGORITHM

  assert(cond.Cells[5].sat.sl >= -1e7 and cond.Cells[5].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[5].sat.sl <= 1e7, has value: " + String(cond.Cells[5].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1944};
  modelica_boolean tmp781;
  modelica_boolean tmp782;
  static const MMC_DEFSTRINGLIT(tmp783,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[5].sat.sl <= 1e7, has value: ");
  modelica_string tmp784;
  modelica_metatype tmpMeta785;
  static int tmp786 = 0;
  if(!tmp786)
  {
    tmp781 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* cond.Cells[5].sat.sl variable */),-1e7);
    tmp782 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* cond.Cells[5].sat.sl variable */),1e7);
    if(!(tmp781 && tmp782))
    {
      tmp784 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* cond.Cells[5].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta785 = stringAppend(MMC_REFSTRINGLIT(tmp783),tmp784);
      {
        const char* assert_cond = "(cond.Cells[5].sat.sl >= -1e7 and cond.Cells[5].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta785));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta785));
        }
      }
      tmp786 = 1;
    }
  }
  threadData->lastEquationSolved = 1944;
}

/*
equation index: 1945
type: ALGORITHM

  assert(cond.Cells[5].sat.sv >= -1e7 and cond.Cells[5].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= cond.Cells[5].sat.sv <= 1e7, has value: " + String(cond.Cells[5].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1945};
  modelica_boolean tmp787;
  modelica_boolean tmp788;
  static const MMC_DEFSTRINGLIT(tmp789,87,"Variable violating min/max constraint: -1e7 <= cond.Cells[5].sat.sv <= 1e7, has value: ");
  modelica_string tmp790;
  modelica_metatype tmpMeta791;
  static int tmp792 = 0;
  if(!tmp792)
  {
    tmp787 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[906]] /* cond.Cells[5].sat.sv variable */),-1e7);
    tmp788 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[906]] /* cond.Cells[5].sat.sv variable */),1e7);
    if(!(tmp787 && tmp788))
    {
      tmp790 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[906]] /* cond.Cells[5].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta791 = stringAppend(MMC_REFSTRINGLIT(tmp789),tmp790);
      {
        const char* assert_cond = "(cond.Cells[5].sat.sv >= -1e7 and cond.Cells[5].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta791));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta791));
        }
      }
      tmp792 = 1;
    }
  }
  threadData->lastEquationSolved = 1945;
}

/*
equation index: 1946
type: ALGORITHM

  assert(cond.Cells[5].h >= -1e10 and cond.Cells[5].h <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[5].h <= 1e10, has value: " + String(cond.Cells[5].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1946};
  modelica_boolean tmp793;
  modelica_boolean tmp794;
  static const MMC_DEFSTRINGLIT(tmp795,84,"Variable violating min/max constraint: -1e10 <= cond.Cells[5].h <= 1e10, has value: ");
  modelica_string tmp796;
  modelica_metatype tmpMeta797;
  static int tmp798 = 0;
  if(!tmp798)
  {
    tmp793 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */),-1e10);
    tmp794 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */),1e10);
    if(!(tmp793 && tmp794))
    {
      tmp796 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* cond.Cells[5].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta797 = stringAppend(MMC_REFSTRINGLIT(tmp795),tmp796);
      {
        const char* assert_cond = "(cond.Cells[5].h >= -1e10 and cond.Cells[5].h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta797));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta797));
        }
      }
      tmp798 = 1;
    }
  }
  threadData->lastEquationSolved = 1946;
}

/*
equation index: 1947
type: ALGORITHM

  assert(cond.Cells[5].T >= 1.0 and cond.Cells[5].T <= 1e4, "Variable violating min/max constraint: 1.0 <= cond.Cells[5].T <= 1e4, has value: " + String(cond.Cells[5].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1947};
  modelica_boolean tmp799;
  modelica_boolean tmp800;
  static const MMC_DEFSTRINGLIT(tmp801,81,"Variable violating min/max constraint: 1.0 <= cond.Cells[5].T <= 1e4, has value: ");
  modelica_string tmp802;
  modelica_metatype tmpMeta803;
  static int tmp804 = 0;
  if(!tmp804)
  {
    tmp799 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cond.Cells[5].T variable */),1.0);
    tmp800 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cond.Cells[5].T variable */),1e4);
    if(!(tmp799 && tmp800))
    {
      tmp802 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cond.Cells[5].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta803 = stringAppend(MMC_REFSTRINGLIT(tmp801),tmp802);
      {
        const char* assert_cond = "(cond.Cells[5].T >= 1.0 and cond.Cells[5].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta803));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta803));
        }
      }
      tmp804 = 1;
    }
  }
  threadData->lastEquationSolved = 1947;
}

/*
equation index: 1948
type: ALGORITHM

  assert(cond.Cells[5].rho >= 0.0 and cond.Cells[5].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= cond.Cells[5].rho <= 1e5, has value: " + String(cond.Cells[5].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1948};
  modelica_boolean tmp805;
  modelica_boolean tmp806;
  static const MMC_DEFSTRINGLIT(tmp807,83,"Variable violating min/max constraint: 0.0 <= cond.Cells[5].rho <= 1e5, has value: ");
  modelica_string tmp808;
  modelica_metatype tmpMeta809;
  static int tmp810 = 0;
  if(!tmp810)
  {
    tmp805 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* cond.Cells[5].rho variable */),0.0);
    tmp806 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* cond.Cells[5].rho variable */),1e5);
    if(!(tmp805 && tmp806))
    {
      tmp808 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* cond.Cells[5].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta809 = stringAppend(MMC_REFSTRINGLIT(tmp807),tmp808);
      {
        const char* assert_cond = "(cond.Cells[5].rho >= 0.0 and cond.Cells[5].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta809));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta809));
        }
      }
      tmp810 = 1;
    }
  }
  threadData->lastEquationSolved = 1948;
}

/*
equation index: 1949
type: ALGORITHM

  assert(cond.Cells[5].hnode_su >= -1e10 and cond.Cells[5].hnode_su <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[5].hnode_su <= 1e10, has value: " + String(cond.Cells[5].hnode_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1949};
  modelica_boolean tmp811;
  modelica_boolean tmp812;
  static const MMC_DEFSTRINGLIT(tmp813,91,"Variable violating min/max constraint: -1e10 <= cond.Cells[5].hnode_su <= 1e10, has value: ");
  modelica_string tmp814;
  modelica_metatype tmpMeta815;
  static int tmp816 = 0;
  if(!tmp816)
  {
    tmp811 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */),-1e10);
    tmp812 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */),1e10);
    if(!(tmp811 && tmp812))
    {
      tmp814 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* cond.Cells[5].hnode_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta815 = stringAppend(MMC_REFSTRINGLIT(tmp813),tmp814);
      {
        const char* assert_cond = "(cond.Cells[5].hnode_su >= -1e10 and cond.Cells[5].hnode_su <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta815));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta815));
        }
      }
      tmp816 = 1;
    }
  }
  threadData->lastEquationSolved = 1949;
}

/*
equation index: 1950
type: ALGORITHM

  assert(cond.Cells[5].h_l >= -1e10 and cond.Cells[5].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[5].h_l <= 1e10, has value: " + String(cond.Cells[5].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1950};
  modelica_boolean tmp817;
  modelica_boolean tmp818;
  static const MMC_DEFSTRINGLIT(tmp819,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[5].h_l <= 1e10, has value: ");
  modelica_string tmp820;
  modelica_metatype tmpMeta821;
  static int tmp822 = 0;
  if(!tmp822)
  {
    tmp817 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* cond.Cells[5].h_l variable */),-1e10);
    tmp818 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* cond.Cells[5].h_l variable */),1e10);
    if(!(tmp817 && tmp818))
    {
      tmp820 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* cond.Cells[5].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta821 = stringAppend(MMC_REFSTRINGLIT(tmp819),tmp820);
      {
        const char* assert_cond = "(cond.Cells[5].h_l >= -1e10 and cond.Cells[5].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta821));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta821));
        }
      }
      tmp822 = 1;
    }
  }
  threadData->lastEquationSolved = 1950;
}

/*
equation index: 1951
type: ALGORITHM

  assert(cond.Cells[5].h_v >= -1e10 and cond.Cells[5].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= cond.Cells[5].h_v <= 1e10, has value: " + String(cond.Cells[5].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1951};
  modelica_boolean tmp823;
  modelica_boolean tmp824;
  static const MMC_DEFSTRINGLIT(tmp825,86,"Variable violating min/max constraint: -1e10 <= cond.Cells[5].h_v <= 1e10, has value: ");
  modelica_string tmp826;
  modelica_metatype tmpMeta827;
  static int tmp828 = 0;
  if(!tmp828)
  {
    tmp823 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* cond.Cells[5].h_v variable */),-1e10);
    tmp824 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* cond.Cells[5].h_v variable */),1e10);
    if(!(tmp823 && tmp824))
    {
      tmp826 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* cond.Cells[5].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta827 = stringAppend(MMC_REFSTRINGLIT(tmp825),tmp826);
      {
        const char* assert_cond = "(cond.Cells[5].h_v >= -1e10 and cond.Cells[5].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta827));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta827));
        }
      }
      tmp828 = 1;
    }
  }
  threadData->lastEquationSolved = 1951;
}

/*
equation index: 1952
type: ALGORITHM

  assert(cond.Cells[5].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= cond.Cells[5].M_tot, has value: " + String(cond.Cells[5].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1952};
  modelica_boolean tmp829;
  static const MMC_DEFSTRINGLIT(tmp830,74,"Variable violating min constraint: 0.0 <= cond.Cells[5].M_tot, has value: ");
  modelica_string tmp831;
  modelica_metatype tmpMeta832;
  static int tmp833 = 0;
  if(!tmp833)
  {
    tmp829 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cond.Cells[5].M_tot variable */),0.0);
    if(!tmp829)
    {
      tmp831 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cond.Cells[5].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta832 = stringAppend(MMC_REFSTRINGLIT(tmp830),tmp831);
      {
        const char* assert_cond = "(cond.Cells[5].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta832));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta832));
        }
      }
      tmp833 = 1;
    }
  }
  threadData->lastEquationSolved = 1952;
}

/*
equation index: 1953
type: ALGORITHM

  assert(txv.Mdot >= -1e5 and txv.Mdot <= 1e5, "Variable violating min/max constraint: -1e5 <= txv.Mdot <= 1e5, has value: " + String(txv.Mdot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1953};
  modelica_boolean tmp834;
  modelica_boolean tmp835;
  static const MMC_DEFSTRINGLIT(tmp836,75,"Variable violating min/max constraint: -1e5 <= txv.Mdot <= 1e5, has value: ");
  modelica_string tmp837;
  modelica_metatype tmpMeta838;
  static int tmp839 = 0;
  if(!tmp839)
  {
    tmp834 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* txv.Mdot variable */),-1e5);
    tmp835 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* txv.Mdot variable */),1e5);
    if(!(tmp834 && tmp835))
    {
      tmp837 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* txv.Mdot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta838 = stringAppend(MMC_REFSTRINGLIT(tmp836),tmp837);
      {
        const char* assert_cond = "(txv.Mdot >= -1e5 and txv.Mdot <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",42,3,42,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta838));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",42,3,42,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta838));
        }
      }
      tmp839 = 1;
    }
  }
  threadData->lastEquationSolved = 1953;
}

/*
equation index: 1954
type: ALGORITHM

  assert(txv.fluidState.T >= 1.0 and txv.fluidState.T <= 1e4, "Variable violating min/max constraint: 1.0 <= txv.fluidState.T <= 1e4, has value: " + String(txv.fluidState.T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1954};
  modelica_boolean tmp840;
  modelica_boolean tmp841;
  static const MMC_DEFSTRINGLIT(tmp842,82,"Variable violating min/max constraint: 1.0 <= txv.fluidState.T <= 1e4, has value: ");
  modelica_string tmp843;
  modelica_metatype tmpMeta844;
  static int tmp845 = 0;
  if(!tmp845)
  {
    tmp840 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* txv.fluidState.T variable */),1.0);
    tmp841 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* txv.fluidState.T variable */),1e4);
    if(!(tmp840 && tmp841))
    {
      tmp843 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* txv.fluidState.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta844 = stringAppend(MMC_REFSTRINGLIT(tmp842),tmp843);
      {
        const char* assert_cond = "(txv.fluidState.T >= 1.0 and txv.fluidState.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",38,5,38,32,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta844));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",38,5,38,32,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta844));
        }
      }
      tmp845 = 1;
    }
  }
  threadData->lastEquationSolved = 1954;
}

/*
equation index: 1955
type: ALGORITHM

  assert(txv.fluidState.a >= 0.0 and txv.fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= txv.fluidState.a <= 1e5, has value: " + String(txv.fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1955};
  modelica_boolean tmp846;
  modelica_boolean tmp847;
  static const MMC_DEFSTRINGLIT(tmp848,82,"Variable violating min/max constraint: 0.0 <= txv.fluidState.a <= 1e5, has value: ");
  modelica_string tmp849;
  modelica_metatype tmpMeta850;
  static int tmp851 = 0;
  if(!tmp851)
  {
    tmp846 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* txv.fluidState.a variable */),0.0);
    tmp847 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* txv.fluidState.a variable */),1e5);
    if(!(tmp846 && tmp847))
    {
      tmp849 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* txv.fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta850 = stringAppend(MMC_REFSTRINGLIT(tmp848),tmp849);
      {
        const char* assert_cond = "(txv.fluidState.a >= 0.0 and txv.fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta850));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta850));
        }
      }
      tmp851 = 1;
    }
  }
  threadData->lastEquationSolved = 1955;
}

/*
equation index: 1956
type: ALGORITHM

  assert(txv.fluidState.cp >= 0.0 and txv.fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= txv.fluidState.cp <= 1e7, has value: " + String(txv.fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1956};
  modelica_boolean tmp852;
  modelica_boolean tmp853;
  static const MMC_DEFSTRINGLIT(tmp854,83,"Variable violating min/max constraint: 0.0 <= txv.fluidState.cp <= 1e7, has value: ");
  modelica_string tmp855;
  modelica_metatype tmpMeta856;
  static int tmp857 = 0;
  if(!tmp857)
  {
    tmp852 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* txv.fluidState.cp variable */),0.0);
    tmp853 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* txv.fluidState.cp variable */),1e7);
    if(!(tmp852 && tmp853))
    {
      tmp855 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* txv.fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta856 = stringAppend(MMC_REFSTRINGLIT(tmp854),tmp855);
      {
        const char* assert_cond = "(txv.fluidState.cp >= 0.0 and txv.fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta856));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta856));
        }
      }
      tmp857 = 1;
    }
  }
  threadData->lastEquationSolved = 1956;
}

/*
equation index: 1957
type: ALGORITHM

  assert(txv.fluidState.cv >= 0.0 and txv.fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= txv.fluidState.cv <= 1e7, has value: " + String(txv.fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1957};
  modelica_boolean tmp858;
  modelica_boolean tmp859;
  static const MMC_DEFSTRINGLIT(tmp860,83,"Variable violating min/max constraint: 0.0 <= txv.fluidState.cv <= 1e7, has value: ");
  modelica_string tmp861;
  modelica_metatype tmpMeta862;
  static int tmp863 = 0;
  if(!tmp863)
  {
    tmp858 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* txv.fluidState.cv variable */),0.0);
    tmp859 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* txv.fluidState.cv variable */),1e7);
    if(!(tmp858 && tmp859))
    {
      tmp861 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* txv.fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta862 = stringAppend(MMC_REFSTRINGLIT(tmp860),tmp861);
      {
        const char* assert_cond = "(txv.fluidState.cv >= 0.0 and txv.fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta862));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta862));
        }
      }
      tmp863 = 1;
    }
  }
  threadData->lastEquationSolved = 1957;
}

/*
equation index: 1958
type: ALGORITHM

  assert(txv.fluidState.eta >= 0.0 and txv.fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= txv.fluidState.eta <= 1e8, has value: " + String(txv.fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1958};
  modelica_boolean tmp864;
  modelica_boolean tmp865;
  static const MMC_DEFSTRINGLIT(tmp866,84,"Variable violating min/max constraint: 0.0 <= txv.fluidState.eta <= 1e8, has value: ");
  modelica_string tmp867;
  modelica_metatype tmpMeta868;
  static int tmp869 = 0;
  if(!tmp869)
  {
    tmp864 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1277]] /* txv.fluidState.eta variable */),0.0);
    tmp865 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1277]] /* txv.fluidState.eta variable */),1e8);
    if(!(tmp864 && tmp865))
    {
      tmp867 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1277]] /* txv.fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta868 = stringAppend(MMC_REFSTRINGLIT(tmp866),tmp867);
      {
        const char* assert_cond = "(txv.fluidState.eta >= 0.0 and txv.fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta868));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta868));
        }
      }
      tmp869 = 1;
    }
  }
  threadData->lastEquationSolved = 1958;
}

/*
equation index: 1959
type: ALGORITHM

  assert(txv.fluidState.h >= -1e10 and txv.fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= txv.fluidState.h <= 1e10, has value: " + String(txv.fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1959};
  modelica_boolean tmp870;
  modelica_boolean tmp871;
  static const MMC_DEFSTRINGLIT(tmp872,85,"Variable violating min/max constraint: -1e10 <= txv.fluidState.h <= 1e10, has value: ");
  modelica_string tmp873;
  modelica_metatype tmpMeta874;
  static int tmp875 = 0;
  if(!tmp875)
  {
    tmp870 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* txv.fluidState.h variable */),-1e10);
    tmp871 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* txv.fluidState.h variable */),1e10);
    if(!(tmp870 && tmp871))
    {
      tmp873 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* txv.fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta874 = stringAppend(MMC_REFSTRINGLIT(tmp872),tmp873);
      {
        const char* assert_cond = "(txv.fluidState.h >= -1e10 and txv.fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta874));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta874));
        }
      }
      tmp875 = 1;
    }
  }
  threadData->lastEquationSolved = 1959;
}

/*
equation index: 1960
type: ALGORITHM

  assert(txv.fluidState.lambda >= 0.0 and txv.fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= txv.fluidState.lambda <= 500.0, has value: " + String(txv.fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1960};
  modelica_boolean tmp876;
  modelica_boolean tmp877;
  static const MMC_DEFSTRINGLIT(tmp878,89,"Variable violating min/max constraint: 0.0 <= txv.fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp879;
  modelica_metatype tmpMeta880;
  static int tmp881 = 0;
  if(!tmp881)
  {
    tmp876 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* txv.fluidState.lambda variable */),0.0);
    tmp877 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* txv.fluidState.lambda variable */),500.0);
    if(!(tmp876 && tmp877))
    {
      tmp879 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* txv.fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta880 = stringAppend(MMC_REFSTRINGLIT(tmp878),tmp879);
      {
        const char* assert_cond = "(txv.fluidState.lambda >= 0.0 and txv.fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta880));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta880));
        }
      }
      tmp881 = 1;
    }
  }
  threadData->lastEquationSolved = 1960;
}

/*
equation index: 1961
type: ALGORITHM

  assert(txv.fluidState.p >= 0.0 and txv.fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= txv.fluidState.p <= 1e8, has value: " + String(txv.fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1961};
  modelica_boolean tmp882;
  modelica_boolean tmp883;
  static const MMC_DEFSTRINGLIT(tmp884,82,"Variable violating min/max constraint: 0.0 <= txv.fluidState.p <= 1e8, has value: ");
  modelica_string tmp885;
  modelica_metatype tmpMeta886;
  static int tmp887 = 0;
  if(!tmp887)
  {
    tmp882 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* txv.fluidState.p variable */),0.0);
    tmp883 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* txv.fluidState.p variable */),1e8);
    if(!(tmp882 && tmp883))
    {
      tmp885 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* txv.fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta886 = stringAppend(MMC_REFSTRINGLIT(tmp884),tmp885);
      {
        const char* assert_cond = "(txv.fluidState.p >= 0.0 and txv.fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta886));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta886));
        }
      }
      tmp887 = 1;
    }
  }
  threadData->lastEquationSolved = 1961;
}

/*
equation index: 1962
type: ALGORITHM

  assert(txv.fluidState.phase >= 0 and txv.fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= txv.fluidState.phase <= 2, has value: " + String(txv.fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1962};
  modelica_boolean tmp888;
  modelica_boolean tmp889;
  static const MMC_DEFSTRINGLIT(tmp890,82,"Variable violating min/max constraint: 0 <= txv.fluidState.phase <= 2, has value: ");
  modelica_string tmp891;
  modelica_metatype tmpMeta892;
  static int tmp893 = 0;
  if(!tmp893)
  {
    tmp888 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[38]] /* txv.fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp889 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[38]] /* txv.fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp888 && tmp889))
    {
      tmp891 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[38]] /* txv.fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta892 = stringAppend(MMC_REFSTRINGLIT(tmp890),tmp891);
      {
        const char* assert_cond = "(txv.fluidState.phase >= 0 and txv.fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta892));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta892));
        }
      }
      tmp893 = 1;
    }
  }
  threadData->lastEquationSolved = 1962;
}

/*
equation index: 1963
type: ALGORITHM

  assert(txv.fluidState.s >= -1e7 and txv.fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= txv.fluidState.s <= 1e7, has value: " + String(txv.fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1963};
  modelica_boolean tmp894;
  modelica_boolean tmp895;
  static const MMC_DEFSTRINGLIT(tmp896,83,"Variable violating min/max constraint: -1e7 <= txv.fluidState.s <= 1e7, has value: ");
  modelica_string tmp897;
  modelica_metatype tmpMeta898;
  static int tmp899 = 0;
  if(!tmp899)
  {
    tmp894 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1282]] /* txv.fluidState.s variable */),-1e7);
    tmp895 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1282]] /* txv.fluidState.s variable */),1e7);
    if(!(tmp894 && tmp895))
    {
      tmp897 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1282]] /* txv.fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta898 = stringAppend(MMC_REFSTRINGLIT(tmp896),tmp897);
      {
        const char* assert_cond = "(txv.fluidState.s >= -1e7 and txv.fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta898));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta898));
        }
      }
      tmp899 = 1;
    }
  }
  threadData->lastEquationSolved = 1963;
}

/*
equation index: 1964
type: ALGORITHM

  assert(txv.rho >= 0.0 and txv.rho <= 1e5, "Variable violating min/max constraint: 0.0 <= txv.rho <= 1e5, has value: " + String(txv.rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1964};
  modelica_boolean tmp900;
  modelica_boolean tmp901;
  static const MMC_DEFSTRINGLIT(tmp902,73,"Variable violating min/max constraint: 0.0 <= txv.rho <= 1e5, has value: ");
  modelica_string tmp903;
  modelica_metatype tmpMeta904;
  static int tmp905 = 0;
  if(!tmp905)
  {
    tmp900 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1283]] /* txv.rho variable */),0.0);
    tmp901 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1283]] /* txv.rho variable */),1e5);
    if(!(tmp900 && tmp901))
    {
      tmp903 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1283]] /* txv.rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta904 = stringAppend(MMC_REFSTRINGLIT(tmp902),tmp903);
      {
        const char* assert_cond = "(txv.rho >= 0.0 and txv.rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",51,3,51,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta904));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/Units/PdropAndValves/Valve.mo",51,3,51,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta904));
        }
      }
      tmp905 = 1;
    }
  }
  threadData->lastEquationSolved = 1964;
}

/*
equation index: 1965
type: ALGORITHM

  assert(evap.M_tot >= 0.0, "Variable violating min constraint: 0.0 <= evap.M_tot, has value: " + String(evap.M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1965};
  modelica_boolean tmp906;
  static const MMC_DEFSTRINGLIT(tmp907,65,"Variable violating min constraint: 0.0 <= evap.M_tot, has value: ");
  modelica_string tmp908;
  modelica_metatype tmpMeta909;
  static int tmp910 = 0;
  if(!tmp910)
  {
    tmp906 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* evap.M_tot variable */),0.0);
    if(!tmp906)
    {
      tmp908 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* evap.M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta909 = stringAppend(MMC_REFSTRINGLIT(tmp907),tmp908);
      {
        const char* assert_cond = "(evap.M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",103,3,103,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta909));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/Flow1DimCS.mo",103,3,103,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta909));
        }
      }
      tmp910 = 1;
    }
  }
  threadData->lastEquationSolved = 1965;
}

/*
equation index: 1966
type: ALGORITHM

  assert(evap.Cells[1].fluidState.a >= 0.0 and evap.Cells[1].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.a <= 1e5, has value: " + String(evap.Cells[1].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1966};
  modelica_boolean tmp911;
  modelica_boolean tmp912;
  static const MMC_DEFSTRINGLIT(tmp913,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.a <= 1e5, has value: ");
  modelica_string tmp914;
  modelica_metatype tmpMeta915;
  static int tmp916 = 0;
  if(!tmp916)
  {
    tmp911 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* evap.Cells[1].fluidState.a variable */),0.0);
    tmp912 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* evap.Cells[1].fluidState.a variable */),1e5);
    if(!(tmp911 && tmp912))
    {
      tmp914 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* evap.Cells[1].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta915 = stringAppend(MMC_REFSTRINGLIT(tmp913),tmp914);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.a >= 0.0 and evap.Cells[1].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta915));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta915));
        }
      }
      tmp916 = 1;
    }
  }
  threadData->lastEquationSolved = 1966;
}

/*
equation index: 1967
type: ALGORITHM

  assert(evap.Cells[1].fluidState.cp >= 0.0 and evap.Cells[1].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.cp <= 1e7, has value: " + String(evap.Cells[1].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1967};
  modelica_boolean tmp917;
  modelica_boolean tmp918;
  static const MMC_DEFSTRINGLIT(tmp919,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp920;
  modelica_metatype tmpMeta921;
  static int tmp922 = 0;
  if(!tmp922)
  {
    tmp917 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* evap.Cells[1].fluidState.cp variable */),0.0);
    tmp918 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* evap.Cells[1].fluidState.cp variable */),1e7);
    if(!(tmp917 && tmp918))
    {
      tmp920 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* evap.Cells[1].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta921 = stringAppend(MMC_REFSTRINGLIT(tmp919),tmp920);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.cp >= 0.0 and evap.Cells[1].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta921));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta921));
        }
      }
      tmp922 = 1;
    }
  }
  threadData->lastEquationSolved = 1967;
}

/*
equation index: 1968
type: ALGORITHM

  assert(evap.Cells[1].fluidState.cv >= 0.0 and evap.Cells[1].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.cv <= 1e7, has value: " + String(evap.Cells[1].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1968};
  modelica_boolean tmp923;
  modelica_boolean tmp924;
  static const MMC_DEFSTRINGLIT(tmp925,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp926;
  modelica_metatype tmpMeta927;
  static int tmp928 = 0;
  if(!tmp928)
  {
    tmp923 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1045]] /* evap.Cells[1].fluidState.cv variable */),0.0);
    tmp924 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1045]] /* evap.Cells[1].fluidState.cv variable */),1e7);
    if(!(tmp923 && tmp924))
    {
      tmp926 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1045]] /* evap.Cells[1].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta927 = stringAppend(MMC_REFSTRINGLIT(tmp925),tmp926);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.cv >= 0.0 and evap.Cells[1].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta927));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta927));
        }
      }
      tmp928 = 1;
    }
  }
  threadData->lastEquationSolved = 1968;
}

/*
equation index: 1969
type: ALGORITHM

  assert(evap.Cells[1].fluidState.eta >= 0.0 and evap.Cells[1].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.eta <= 1e8, has value: " + String(evap.Cells[1].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1969};
  modelica_boolean tmp929;
  modelica_boolean tmp930;
  static const MMC_DEFSTRINGLIT(tmp931,94,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp932;
  modelica_metatype tmpMeta933;
  static int tmp934 = 0;
  if(!tmp934)
  {
    tmp929 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* evap.Cells[1].fluidState.eta variable */),0.0);
    tmp930 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* evap.Cells[1].fluidState.eta variable */),1e8);
    if(!(tmp929 && tmp930))
    {
      tmp932 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* evap.Cells[1].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta933 = stringAppend(MMC_REFSTRINGLIT(tmp931),tmp932);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.eta >= 0.0 and evap.Cells[1].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta933));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta933));
        }
      }
      tmp934 = 1;
    }
  }
  threadData->lastEquationSolved = 1969;
}

/*
equation index: 1970
type: ALGORITHM

  assert(evap.Cells[1].fluidState.h >= -1e10 and evap.Cells[1].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[1].fluidState.h <= 1e10, has value: " + String(evap.Cells[1].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1970};
  modelica_boolean tmp935;
  modelica_boolean tmp936;
  static const MMC_DEFSTRINGLIT(tmp937,95,"Variable violating min/max constraint: -1e10 <= evap.Cells[1].fluidState.h <= 1e10, has value: ");
  modelica_string tmp938;
  modelica_metatype tmpMeta939;
  static int tmp940 = 0;
  if(!tmp940)
  {
    tmp935 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* evap.Cells[1].fluidState.h variable */),-1e10);
    tmp936 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* evap.Cells[1].fluidState.h variable */),1e10);
    if(!(tmp935 && tmp936))
    {
      tmp938 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* evap.Cells[1].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta939 = stringAppend(MMC_REFSTRINGLIT(tmp937),tmp938);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.h >= -1e10 and evap.Cells[1].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta939));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta939));
        }
      }
      tmp940 = 1;
    }
  }
  threadData->lastEquationSolved = 1970;
}

/*
equation index: 1971
type: ALGORITHM

  assert(evap.Cells[1].fluidState.lambda >= 0.0 and evap.Cells[1].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.lambda <= 500.0, has value: " + String(evap.Cells[1].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1971};
  modelica_boolean tmp941;
  modelica_boolean tmp942;
  static const MMC_DEFSTRINGLIT(tmp943,99,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp944;
  modelica_metatype tmpMeta945;
  static int tmp946 = 0;
  if(!tmp946)
  {
    tmp941 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* evap.Cells[1].fluidState.lambda variable */),0.0);
    tmp942 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* evap.Cells[1].fluidState.lambda variable */),500.0);
    if(!(tmp941 && tmp942))
    {
      tmp944 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* evap.Cells[1].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta945 = stringAppend(MMC_REFSTRINGLIT(tmp943),tmp944);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.lambda >= 0.0 and evap.Cells[1].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta945));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta945));
        }
      }
      tmp946 = 1;
    }
  }
  threadData->lastEquationSolved = 1971;
}

/*
equation index: 1972
type: ALGORITHM

  assert(evap.Cells[1].fluidState.p >= 0.0 and evap.Cells[1].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.p <= 1e8, has value: " + String(evap.Cells[1].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1972};
  modelica_boolean tmp947;
  modelica_boolean tmp948;
  static const MMC_DEFSTRINGLIT(tmp949,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].fluidState.p <= 1e8, has value: ");
  modelica_string tmp950;
  modelica_metatype tmpMeta951;
  static int tmp952 = 0;
  if(!tmp952)
  {
    tmp947 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1070]] /* evap.Cells[1].fluidState.p variable */),0.0);
    tmp948 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1070]] /* evap.Cells[1].fluidState.p variable */),1e8);
    if(!(tmp947 && tmp948))
    {
      tmp950 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1070]] /* evap.Cells[1].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta951 = stringAppend(MMC_REFSTRINGLIT(tmp949),tmp950);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.p >= 0.0 and evap.Cells[1].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta951));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta951));
        }
      }
      tmp952 = 1;
    }
  }
  threadData->lastEquationSolved = 1972;
}

/*
equation index: 1973
type: ALGORITHM

  assert(evap.Cells[1].fluidState.phase >= 0 and evap.Cells[1].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= evap.Cells[1].fluidState.phase <= 2, has value: " + String(evap.Cells[1].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1973};
  modelica_boolean tmp953;
  modelica_boolean tmp954;
  static const MMC_DEFSTRINGLIT(tmp955,92,"Variable violating min/max constraint: 0 <= evap.Cells[1].fluidState.phase <= 2, has value: ");
  modelica_string tmp956;
  modelica_metatype tmpMeta957;
  static int tmp958 = 0;
  if(!tmp958)
  {
    tmp953 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[33]] /* evap.Cells[1].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp954 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[33]] /* evap.Cells[1].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp953 && tmp954))
    {
      tmp956 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[33]] /* evap.Cells[1].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta957 = stringAppend(MMC_REFSTRINGLIT(tmp955),tmp956);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.phase >= 0 and evap.Cells[1].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta957));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta957));
        }
      }
      tmp958 = 1;
    }
  }
  threadData->lastEquationSolved = 1973;
}

/*
equation index: 1974
type: ALGORITHM

  assert(evap.Cells[1].fluidState.s >= -1e7 and evap.Cells[1].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[1].fluidState.s <= 1e7, has value: " + String(evap.Cells[1].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1974};
  modelica_boolean tmp959;
  modelica_boolean tmp960;
  static const MMC_DEFSTRINGLIT(tmp961,93,"Variable violating min/max constraint: -1e7 <= evap.Cells[1].fluidState.s <= 1e7, has value: ");
  modelica_string tmp962;
  modelica_metatype tmpMeta963;
  static int tmp964 = 0;
  if(!tmp964)
  {
    tmp959 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* evap.Cells[1].fluidState.s variable */),-1e7);
    tmp960 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* evap.Cells[1].fluidState.s variable */),1e7);
    if(!(tmp959 && tmp960))
    {
      tmp962 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* evap.Cells[1].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta963 = stringAppend(MMC_REFSTRINGLIT(tmp961),tmp962);
      {
        const char* assert_cond = "(evap.Cells[1].fluidState.s >= -1e7 and evap.Cells[1].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta963));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta963));
        }
      }
      tmp964 = 1;
    }
  }
  threadData->lastEquationSolved = 1974;
}

/*
equation index: 1975
type: ALGORITHM

  assert(evap.Cells[1].sat.Tsat >= 1.0 and evap.Cells[1].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[1].sat.Tsat <= 1e4, has value: " + String(evap.Cells[1].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1975};
  modelica_boolean tmp965;
  modelica_boolean tmp966;
  static const MMC_DEFSTRINGLIT(tmp967,88,"Variable violating min/max constraint: 1.0 <= evap.Cells[1].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp968;
  modelica_metatype tmpMeta969;
  static int tmp970 = 0;
  if(!tmp970)
  {
    tmp965 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* evap.Cells[1].sat.Tsat variable */),1.0);
    tmp966 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* evap.Cells[1].sat.Tsat variable */),1e4);
    if(!(tmp965 && tmp966))
    {
      tmp968 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* evap.Cells[1].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta969 = stringAppend(MMC_REFSTRINGLIT(tmp967),tmp968);
      {
        const char* assert_cond = "(evap.Cells[1].sat.Tsat >= 1.0 and evap.Cells[1].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta969));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta969));
        }
      }
      tmp970 = 1;
    }
  }
  threadData->lastEquationSolved = 1975;
}

/*
equation index: 1976
type: ALGORITHM

  assert(evap.Cells[1].sat.dl >= 0.0 and evap.Cells[1].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].sat.dl <= 1e5, has value: " + String(evap.Cells[1].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1976};
  modelica_boolean tmp971;
  modelica_boolean tmp972;
  static const MMC_DEFSTRINGLIT(tmp973,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].sat.dl <= 1e5, has value: ");
  modelica_string tmp974;
  modelica_metatype tmpMeta975;
  static int tmp976 = 0;
  if(!tmp976)
  {
    tmp971 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* evap.Cells[1].sat.dl variable */),0.0);
    tmp972 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* evap.Cells[1].sat.dl variable */),1e5);
    if(!(tmp971 && tmp972))
    {
      tmp974 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* evap.Cells[1].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta975 = stringAppend(MMC_REFSTRINGLIT(tmp973),tmp974);
      {
        const char* assert_cond = "(evap.Cells[1].sat.dl >= 0.0 and evap.Cells[1].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta975));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta975));
        }
      }
      tmp976 = 1;
    }
  }
  threadData->lastEquationSolved = 1976;
}

/*
equation index: 1977
type: ALGORITHM

  assert(evap.Cells[1].sat.dv >= 0.0 and evap.Cells[1].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].sat.dv <= 1e5, has value: " + String(evap.Cells[1].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1977};
  modelica_boolean tmp977;
  modelica_boolean tmp978;
  static const MMC_DEFSTRINGLIT(tmp979,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].sat.dv <= 1e5, has value: ");
  modelica_string tmp980;
  modelica_metatype tmpMeta981;
  static int tmp982 = 0;
  if(!tmp982)
  {
    tmp977 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1156]] /* evap.Cells[1].sat.dv variable */),0.0);
    tmp978 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1156]] /* evap.Cells[1].sat.dv variable */),1e5);
    if(!(tmp977 && tmp978))
    {
      tmp980 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1156]] /* evap.Cells[1].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta981 = stringAppend(MMC_REFSTRINGLIT(tmp979),tmp980);
      {
        const char* assert_cond = "(evap.Cells[1].sat.dv >= 0.0 and evap.Cells[1].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta981));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta981));
        }
      }
      tmp982 = 1;
    }
  }
  threadData->lastEquationSolved = 1977;
}

/*
equation index: 1978
type: ALGORITHM

  assert(evap.Cells[1].sat.psat >= 0.0 and evap.Cells[1].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].sat.psat <= 1e8, has value: " + String(evap.Cells[1].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1978};
  modelica_boolean tmp983;
  modelica_boolean tmp984;
  static const MMC_DEFSTRINGLIT(tmp985,88,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].sat.psat <= 1e8, has value: ");
  modelica_string tmp986;
  modelica_metatype tmpMeta987;
  static int tmp988 = 0;
  if(!tmp988)
  {
    tmp983 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1161]] /* evap.Cells[1].sat.psat variable */),0.0);
    tmp984 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1161]] /* evap.Cells[1].sat.psat variable */),1e8);
    if(!(tmp983 && tmp984))
    {
      tmp986 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1161]] /* evap.Cells[1].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta987 = stringAppend(MMC_REFSTRINGLIT(tmp985),tmp986);
      {
        const char* assert_cond = "(evap.Cells[1].sat.psat >= 0.0 and evap.Cells[1].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta987));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta987));
        }
      }
      tmp988 = 1;
    }
  }
  threadData->lastEquationSolved = 1978;
}

/*
equation index: 1979
type: ALGORITHM

  assert(evap.Cells[1].sat.sl >= -1e7 and evap.Cells[1].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[1].sat.sl <= 1e7, has value: " + String(evap.Cells[1].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1979};
  modelica_boolean tmp989;
  modelica_boolean tmp990;
  static const MMC_DEFSTRINGLIT(tmp991,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[1].sat.sl <= 1e7, has value: ");
  modelica_string tmp992;
  modelica_metatype tmpMeta993;
  static int tmp994 = 0;
  if(!tmp994)
  {
    tmp989 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* evap.Cells[1].sat.sl variable */),-1e7);
    tmp990 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* evap.Cells[1].sat.sl variable */),1e7);
    if(!(tmp989 && tmp990))
    {
      tmp992 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* evap.Cells[1].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta993 = stringAppend(MMC_REFSTRINGLIT(tmp991),tmp992);
      {
        const char* assert_cond = "(evap.Cells[1].sat.sl >= -1e7 and evap.Cells[1].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta993));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta993));
        }
      }
      tmp994 = 1;
    }
  }
  threadData->lastEquationSolved = 1979;
}

/*
equation index: 1980
type: ALGORITHM

  assert(evap.Cells[1].sat.sv >= -1e7 and evap.Cells[1].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[1].sat.sv <= 1e7, has value: " + String(evap.Cells[1].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1980};
  modelica_boolean tmp995;
  modelica_boolean tmp996;
  static const MMC_DEFSTRINGLIT(tmp997,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[1].sat.sv <= 1e7, has value: ");
  modelica_string tmp998;
  modelica_metatype tmpMeta999;
  static int tmp1000 = 0;
  if(!tmp1000)
  {
    tmp995 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* evap.Cells[1].sat.sv variable */),-1e7);
    tmp996 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* evap.Cells[1].sat.sv variable */),1e7);
    if(!(tmp995 && tmp996))
    {
      tmp998 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* evap.Cells[1].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta999 = stringAppend(MMC_REFSTRINGLIT(tmp997),tmp998);
      {
        const char* assert_cond = "(evap.Cells[1].sat.sv >= -1e7 and evap.Cells[1].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta999));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta999));
        }
      }
      tmp1000 = 1;
    }
  }
  threadData->lastEquationSolved = 1980;
}

/*
equation index: 1981
type: ALGORITHM

  assert(evap.Cells[1].h >= -1e10 and evap.Cells[1].h <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[1].h <= 1e10, has value: " + String(evap.Cells[1].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1981};
  modelica_boolean tmp1001;
  modelica_boolean tmp1002;
  static const MMC_DEFSTRINGLIT(tmp1003,84,"Variable violating min/max constraint: -1e10 <= evap.Cells[1].h <= 1e10, has value: ");
  modelica_string tmp1004;
  modelica_metatype tmpMeta1005;
  static int tmp1006 = 0;
  if(!tmp1006)
  {
    tmp1001 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */),-1e10);
    tmp1002 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */),1e10);
    if(!(tmp1001 && tmp1002))
    {
      tmp1004 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* evap.Cells[1].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1005 = stringAppend(MMC_REFSTRINGLIT(tmp1003),tmp1004);
      {
        const char* assert_cond = "(evap.Cells[1].h >= -1e10 and evap.Cells[1].h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1005));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1005));
        }
      }
      tmp1006 = 1;
    }
  }
  threadData->lastEquationSolved = 1981;
}

/*
equation index: 1982
type: ALGORITHM

  assert(evap.Cells[1].T >= 1.0 and evap.Cells[1].T <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[1].T <= 1e4, has value: " + String(evap.Cells[1].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1982};
  modelica_boolean tmp1007;
  modelica_boolean tmp1008;
  static const MMC_DEFSTRINGLIT(tmp1009,81,"Variable violating min/max constraint: 1.0 <= evap.Cells[1].T <= 1e4, has value: ");
  modelica_string tmp1010;
  modelica_metatype tmpMeta1011;
  static int tmp1012 = 0;
  if(!tmp1012)
  {
    tmp1007 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* evap.Cells[1].T variable */),1.0);
    tmp1008 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* evap.Cells[1].T variable */),1e4);
    if(!(tmp1007 && tmp1008))
    {
      tmp1010 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* evap.Cells[1].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1011 = stringAppend(MMC_REFSTRINGLIT(tmp1009),tmp1010);
      {
        const char* assert_cond = "(evap.Cells[1].T >= 1.0 and evap.Cells[1].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1011));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1011));
        }
      }
      tmp1012 = 1;
    }
  }
  threadData->lastEquationSolved = 1982;
}

/*
equation index: 1983
type: ALGORITHM

  assert(evap.Cells[1].rho >= 0.0 and evap.Cells[1].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[1].rho <= 1e5, has value: " + String(evap.Cells[1].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1983};
  modelica_boolean tmp1013;
  modelica_boolean tmp1014;
  static const MMC_DEFSTRINGLIT(tmp1015,83,"Variable violating min/max constraint: 0.0 <= evap.Cells[1].rho <= 1e5, has value: ");
  modelica_string tmp1016;
  modelica_metatype tmpMeta1017;
  static int tmp1018 = 0;
  if(!tmp1018)
  {
    tmp1013 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* evap.Cells[1].rho variable */),0.0);
    tmp1014 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* evap.Cells[1].rho variable */),1e5);
    if(!(tmp1013 && tmp1014))
    {
      tmp1016 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* evap.Cells[1].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1017 = stringAppend(MMC_REFSTRINGLIT(tmp1015),tmp1016);
      {
        const char* assert_cond = "(evap.Cells[1].rho >= 0.0 and evap.Cells[1].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1017));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1017));
        }
      }
      tmp1018 = 1;
    }
  }
  threadData->lastEquationSolved = 1983;
}

/*
equation index: 1984
type: ALGORITHM

  assert(evap.Cells[1].hnode_su >= -1e10 and evap.Cells[1].hnode_su <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[1].hnode_su <= 1e10, has value: " + String(evap.Cells[1].hnode_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1984};
  modelica_boolean tmp1019;
  modelica_boolean tmp1020;
  static const MMC_DEFSTRINGLIT(tmp1021,91,"Variable violating min/max constraint: -1e10 <= evap.Cells[1].hnode_su <= 1e10, has value: ");
  modelica_string tmp1022;
  modelica_metatype tmpMeta1023;
  static int tmp1024 = 0;
  if(!tmp1024)
  {
    tmp1019 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].hnode_su variable */),-1e10);
    tmp1020 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].hnode_su variable */),1e10);
    if(!(tmp1019 && tmp1020))
    {
      tmp1022 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* evap.Cells[1].hnode_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1023 = stringAppend(MMC_REFSTRINGLIT(tmp1021),tmp1022);
      {
        const char* assert_cond = "(evap.Cells[1].hnode_su >= -1e10 and evap.Cells[1].hnode_su <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1023));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1023));
        }
      }
      tmp1024 = 1;
    }
  }
  threadData->lastEquationSolved = 1984;
}

/*
equation index: 1985
type: ALGORITHM

  assert(evap.Cells[1].h_l >= -1e10 and evap.Cells[1].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[1].h_l <= 1e10, has value: " + String(evap.Cells[1].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1985};
  modelica_boolean tmp1025;
  modelica_boolean tmp1026;
  static const MMC_DEFSTRINGLIT(tmp1027,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[1].h_l <= 1e10, has value: ");
  modelica_string tmp1028;
  modelica_metatype tmpMeta1029;
  static int tmp1030 = 0;
  if(!tmp1030)
  {
    tmp1025 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* evap.Cells[1].h_l variable */),-1e10);
    tmp1026 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* evap.Cells[1].h_l variable */),1e10);
    if(!(tmp1025 && tmp1026))
    {
      tmp1028 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* evap.Cells[1].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1029 = stringAppend(MMC_REFSTRINGLIT(tmp1027),tmp1028);
      {
        const char* assert_cond = "(evap.Cells[1].h_l >= -1e10 and evap.Cells[1].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1029));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1029));
        }
      }
      tmp1030 = 1;
    }
  }
  threadData->lastEquationSolved = 1985;
}

/*
equation index: 1986
type: ALGORITHM

  assert(evap.Cells[1].h_v >= -1e10 and evap.Cells[1].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[1].h_v <= 1e10, has value: " + String(evap.Cells[1].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1986};
  modelica_boolean tmp1031;
  modelica_boolean tmp1032;
  static const MMC_DEFSTRINGLIT(tmp1033,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[1].h_v <= 1e10, has value: ");
  modelica_string tmp1034;
  modelica_metatype tmpMeta1035;
  static int tmp1036 = 0;
  if(!tmp1036)
  {
    tmp1031 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* evap.Cells[1].h_v variable */),-1e10);
    tmp1032 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* evap.Cells[1].h_v variable */),1e10);
    if(!(tmp1031 && tmp1032))
    {
      tmp1034 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* evap.Cells[1].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1035 = stringAppend(MMC_REFSTRINGLIT(tmp1033),tmp1034);
      {
        const char* assert_cond = "(evap.Cells[1].h_v >= -1e10 and evap.Cells[1].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1035));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1035));
        }
      }
      tmp1036 = 1;
    }
  }
  threadData->lastEquationSolved = 1986;
}

/*
equation index: 1987
type: ALGORITHM

  assert(evap.Cells[1].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= evap.Cells[1].M_tot, has value: " + String(evap.Cells[1].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1987};
  modelica_boolean tmp1037;
  static const MMC_DEFSTRINGLIT(tmp1038,74,"Variable violating min constraint: 0.0 <= evap.Cells[1].M_tot, has value: ");
  modelica_string tmp1039;
  modelica_metatype tmpMeta1040;
  static int tmp1041 = 0;
  if(!tmp1041)
  {
    tmp1037 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* evap.Cells[1].M_tot variable */),0.0);
    if(!tmp1037)
    {
      tmp1039 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* evap.Cells[1].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1040 = stringAppend(MMC_REFSTRINGLIT(tmp1038),tmp1039);
      {
        const char* assert_cond = "(evap.Cells[1].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1040));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1040));
        }
      }
      tmp1041 = 1;
    }
  }
  threadData->lastEquationSolved = 1987;
}

/*
equation index: 1988
type: ALGORITHM

  assert(evap.Cells[2].InFlow.m_flow >= -1e5 and evap.Cells[2].InFlow.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= evap.Cells[2].InFlow.m_flow <= 1e5, has value: " + String(evap.Cells[2].InFlow.m_flow, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1988};
  modelica_boolean tmp1042;
  modelica_boolean tmp1043;
  static const MMC_DEFSTRINGLIT(tmp1044,94,"Variable violating min/max constraint: -1e5 <= evap.Cells[2].InFlow.m_flow <= 1e5, has value: ");
  modelica_string tmp1045;
  modelica_metatype tmpMeta1046;
  static int tmp1047 = 0;
  if(!tmp1047)
  {
    tmp1042 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* evap.Cells[2].InFlow.m_flow variable */),-1e5);
    tmp1043 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* evap.Cells[2].InFlow.m_flow variable */),1e5);
    if(!(tmp1042 && tmp1043))
    {
      tmp1045 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* evap.Cells[2].InFlow.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1046 = stringAppend(MMC_REFSTRINGLIT(tmp1044),tmp1045);
      {
        const char* assert_cond = "(evap.Cells[2].InFlow.m_flow >= -1e5 and evap.Cells[2].InFlow.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1046));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1046));
        }
      }
      tmp1047 = 1;
    }
  }
  threadData->lastEquationSolved = 1988;
}

/*
equation index: 1989
type: ALGORITHM

  assert(evap.Cells[2].fluidState.a >= 0.0 and evap.Cells[2].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.a <= 1e5, has value: " + String(evap.Cells[2].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1989};
  modelica_boolean tmp1048;
  modelica_boolean tmp1049;
  static const MMC_DEFSTRINGLIT(tmp1050,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.a <= 1e5, has value: ");
  modelica_string tmp1051;
  modelica_metatype tmpMeta1052;
  static int tmp1053 = 0;
  if(!tmp1053)
  {
    tmp1048 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* evap.Cells[2].fluidState.a variable */),0.0);
    tmp1049 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* evap.Cells[2].fluidState.a variable */),1e5);
    if(!(tmp1048 && tmp1049))
    {
      tmp1051 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* evap.Cells[2].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1052 = stringAppend(MMC_REFSTRINGLIT(tmp1050),tmp1051);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.a >= 0.0 and evap.Cells[2].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1052));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1052));
        }
      }
      tmp1053 = 1;
    }
  }
  threadData->lastEquationSolved = 1989;
}

/*
equation index: 1990
type: ALGORITHM

  assert(evap.Cells[2].fluidState.cp >= 0.0 and evap.Cells[2].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.cp <= 1e7, has value: " + String(evap.Cells[2].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1990};
  modelica_boolean tmp1054;
  modelica_boolean tmp1055;
  static const MMC_DEFSTRINGLIT(tmp1056,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp1057;
  modelica_metatype tmpMeta1058;
  static int tmp1059 = 0;
  if(!tmp1059)
  {
    tmp1054 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* evap.Cells[2].fluidState.cp variable */),0.0);
    tmp1055 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* evap.Cells[2].fluidState.cp variable */),1e7);
    if(!(tmp1054 && tmp1055))
    {
      tmp1057 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* evap.Cells[2].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1058 = stringAppend(MMC_REFSTRINGLIT(tmp1056),tmp1057);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.cp >= 0.0 and evap.Cells[2].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1058));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1058));
        }
      }
      tmp1059 = 1;
    }
  }
  threadData->lastEquationSolved = 1990;
}

/*
equation index: 1991
type: ALGORITHM

  assert(evap.Cells[2].fluidState.cv >= 0.0 and evap.Cells[2].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.cv <= 1e7, has value: " + String(evap.Cells[2].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1991};
  modelica_boolean tmp1060;
  modelica_boolean tmp1061;
  static const MMC_DEFSTRINGLIT(tmp1062,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp1063;
  modelica_metatype tmpMeta1064;
  static int tmp1065 = 0;
  if(!tmp1065)
  {
    tmp1060 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1046]] /* evap.Cells[2].fluidState.cv variable */),0.0);
    tmp1061 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1046]] /* evap.Cells[2].fluidState.cv variable */),1e7);
    if(!(tmp1060 && tmp1061))
    {
      tmp1063 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1046]] /* evap.Cells[2].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1064 = stringAppend(MMC_REFSTRINGLIT(tmp1062),tmp1063);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.cv >= 0.0 and evap.Cells[2].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1064));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1064));
        }
      }
      tmp1065 = 1;
    }
  }
  threadData->lastEquationSolved = 1991;
}

/*
equation index: 1992
type: ALGORITHM

  assert(evap.Cells[2].fluidState.eta >= 0.0 and evap.Cells[2].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.eta <= 1e8, has value: " + String(evap.Cells[2].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1992};
  modelica_boolean tmp1066;
  modelica_boolean tmp1067;
  static const MMC_DEFSTRINGLIT(tmp1068,94,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp1069;
  modelica_metatype tmpMeta1070;
  static int tmp1071 = 0;
  if(!tmp1071)
  {
    tmp1066 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* evap.Cells[2].fluidState.eta variable */),0.0);
    tmp1067 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* evap.Cells[2].fluidState.eta variable */),1e8);
    if(!(tmp1066 && tmp1067))
    {
      tmp1069 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* evap.Cells[2].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1070 = stringAppend(MMC_REFSTRINGLIT(tmp1068),tmp1069);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.eta >= 0.0 and evap.Cells[2].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1070));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1070));
        }
      }
      tmp1071 = 1;
    }
  }
  threadData->lastEquationSolved = 1992;
}

/*
equation index: 1993
type: ALGORITHM

  assert(evap.Cells[2].fluidState.h >= -1e10 and evap.Cells[2].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[2].fluidState.h <= 1e10, has value: " + String(evap.Cells[2].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1993};
  modelica_boolean tmp1072;
  modelica_boolean tmp1073;
  static const MMC_DEFSTRINGLIT(tmp1074,95,"Variable violating min/max constraint: -1e10 <= evap.Cells[2].fluidState.h <= 1e10, has value: ");
  modelica_string tmp1075;
  modelica_metatype tmpMeta1076;
  static int tmp1077 = 0;
  if(!tmp1077)
  {
    tmp1072 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* evap.Cells[2].fluidState.h variable */),-1e10);
    tmp1073 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* evap.Cells[2].fluidState.h variable */),1e10);
    if(!(tmp1072 && tmp1073))
    {
      tmp1075 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* evap.Cells[2].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1076 = stringAppend(MMC_REFSTRINGLIT(tmp1074),tmp1075);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.h >= -1e10 and evap.Cells[2].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1076));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1076));
        }
      }
      tmp1077 = 1;
    }
  }
  threadData->lastEquationSolved = 1993;
}

/*
equation index: 1994
type: ALGORITHM

  assert(evap.Cells[2].fluidState.lambda >= 0.0 and evap.Cells[2].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.lambda <= 500.0, has value: " + String(evap.Cells[2].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1994};
  modelica_boolean tmp1078;
  modelica_boolean tmp1079;
  static const MMC_DEFSTRINGLIT(tmp1080,99,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp1081;
  modelica_metatype tmpMeta1082;
  static int tmp1083 = 0;
  if(!tmp1083)
  {
    tmp1078 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1066]] /* evap.Cells[2].fluidState.lambda variable */),0.0);
    tmp1079 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1066]] /* evap.Cells[2].fluidState.lambda variable */),500.0);
    if(!(tmp1078 && tmp1079))
    {
      tmp1081 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1066]] /* evap.Cells[2].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1082 = stringAppend(MMC_REFSTRINGLIT(tmp1080),tmp1081);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.lambda >= 0.0 and evap.Cells[2].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1082));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1082));
        }
      }
      tmp1083 = 1;
    }
  }
  threadData->lastEquationSolved = 1994;
}

/*
equation index: 1995
type: ALGORITHM

  assert(evap.Cells[2].fluidState.p >= 0.0 and evap.Cells[2].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.p <= 1e8, has value: " + String(evap.Cells[2].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1995};
  modelica_boolean tmp1084;
  modelica_boolean tmp1085;
  static const MMC_DEFSTRINGLIT(tmp1086,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].fluidState.p <= 1e8, has value: ");
  modelica_string tmp1087;
  modelica_metatype tmpMeta1088;
  static int tmp1089 = 0;
  if(!tmp1089)
  {
    tmp1084 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* evap.Cells[2].fluidState.p variable */),0.0);
    tmp1085 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* evap.Cells[2].fluidState.p variable */),1e8);
    if(!(tmp1084 && tmp1085))
    {
      tmp1087 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* evap.Cells[2].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1088 = stringAppend(MMC_REFSTRINGLIT(tmp1086),tmp1087);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.p >= 0.0 and evap.Cells[2].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1088));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1088));
        }
      }
      tmp1089 = 1;
    }
  }
  threadData->lastEquationSolved = 1995;
}

/*
equation index: 1996
type: ALGORITHM

  assert(evap.Cells[2].fluidState.phase >= 0 and evap.Cells[2].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= evap.Cells[2].fluidState.phase <= 2, has value: " + String(evap.Cells[2].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1996};
  modelica_boolean tmp1090;
  modelica_boolean tmp1091;
  static const MMC_DEFSTRINGLIT(tmp1092,92,"Variable violating min/max constraint: 0 <= evap.Cells[2].fluidState.phase <= 2, has value: ");
  modelica_string tmp1093;
  modelica_metatype tmpMeta1094;
  static int tmp1095 = 0;
  if(!tmp1095)
  {
    tmp1090 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[34]] /* evap.Cells[2].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp1091 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[34]] /* evap.Cells[2].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp1090 && tmp1091))
    {
      tmp1093 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[34]] /* evap.Cells[2].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1094 = stringAppend(MMC_REFSTRINGLIT(tmp1092),tmp1093);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.phase >= 0 and evap.Cells[2].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1094));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1094));
        }
      }
      tmp1095 = 1;
    }
  }
  threadData->lastEquationSolved = 1996;
}

/*
equation index: 1997
type: ALGORITHM

  assert(evap.Cells[2].fluidState.s >= -1e7 and evap.Cells[2].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[2].fluidState.s <= 1e7, has value: " + String(evap.Cells[2].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1997};
  modelica_boolean tmp1096;
  modelica_boolean tmp1097;
  static const MMC_DEFSTRINGLIT(tmp1098,93,"Variable violating min/max constraint: -1e7 <= evap.Cells[2].fluidState.s <= 1e7, has value: ");
  modelica_string tmp1099;
  modelica_metatype tmpMeta1100;
  static int tmp1101 = 0;
  if(!tmp1101)
  {
    tmp1096 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* evap.Cells[2].fluidState.s variable */),-1e7);
    tmp1097 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* evap.Cells[2].fluidState.s variable */),1e7);
    if(!(tmp1096 && tmp1097))
    {
      tmp1099 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* evap.Cells[2].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1100 = stringAppend(MMC_REFSTRINGLIT(tmp1098),tmp1099);
      {
        const char* assert_cond = "(evap.Cells[2].fluidState.s >= -1e7 and evap.Cells[2].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1100));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1100));
        }
      }
      tmp1101 = 1;
    }
  }
  threadData->lastEquationSolved = 1997;
}

/*
equation index: 1998
type: ALGORITHM

  assert(evap.Cells[2].sat.Tsat >= 1.0 and evap.Cells[2].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[2].sat.Tsat <= 1e4, has value: " + String(evap.Cells[2].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1998};
  modelica_boolean tmp1102;
  modelica_boolean tmp1103;
  static const MMC_DEFSTRINGLIT(tmp1104,88,"Variable violating min/max constraint: 1.0 <= evap.Cells[2].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp1105;
  modelica_metatype tmpMeta1106;
  static int tmp1107 = 0;
  if(!tmp1107)
  {
    tmp1102 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* evap.Cells[2].sat.Tsat variable */),1.0);
    tmp1103 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* evap.Cells[2].sat.Tsat variable */),1e4);
    if(!(tmp1102 && tmp1103))
    {
      tmp1105 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* evap.Cells[2].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1106 = stringAppend(MMC_REFSTRINGLIT(tmp1104),tmp1105);
      {
        const char* assert_cond = "(evap.Cells[2].sat.Tsat >= 1.0 and evap.Cells[2].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1106));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1106));
        }
      }
      tmp1107 = 1;
    }
  }
  threadData->lastEquationSolved = 1998;
}

/*
equation index: 1999
type: ALGORITHM

  assert(evap.Cells[2].sat.dl >= 0.0 and evap.Cells[2].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].sat.dl <= 1e5, has value: " + String(evap.Cells[2].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_1999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1999};
  modelica_boolean tmp1108;
  modelica_boolean tmp1109;
  static const MMC_DEFSTRINGLIT(tmp1110,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].sat.dl <= 1e5, has value: ");
  modelica_string tmp1111;
  modelica_metatype tmpMeta1112;
  static int tmp1113 = 0;
  if(!tmp1113)
  {
    tmp1108 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* evap.Cells[2].sat.dl variable */),0.0);
    tmp1109 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* evap.Cells[2].sat.dl variable */),1e5);
    if(!(tmp1108 && tmp1109))
    {
      tmp1111 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* evap.Cells[2].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1112 = stringAppend(MMC_REFSTRINGLIT(tmp1110),tmp1111);
      {
        const char* assert_cond = "(evap.Cells[2].sat.dl >= 0.0 and evap.Cells[2].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1112));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1112));
        }
      }
      tmp1113 = 1;
    }
  }
  threadData->lastEquationSolved = 1999;
}

/*
equation index: 2000
type: ALGORITHM

  assert(evap.Cells[2].sat.dv >= 0.0 and evap.Cells[2].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].sat.dv <= 1e5, has value: " + String(evap.Cells[2].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2000};
  modelica_boolean tmp1114;
  modelica_boolean tmp1115;
  static const MMC_DEFSTRINGLIT(tmp1116,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].sat.dv <= 1e5, has value: ");
  modelica_string tmp1117;
  modelica_metatype tmpMeta1118;
  static int tmp1119 = 0;
  if(!tmp1119)
  {
    tmp1114 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* evap.Cells[2].sat.dv variable */),0.0);
    tmp1115 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* evap.Cells[2].sat.dv variable */),1e5);
    if(!(tmp1114 && tmp1115))
    {
      tmp1117 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* evap.Cells[2].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1118 = stringAppend(MMC_REFSTRINGLIT(tmp1116),tmp1117);
      {
        const char* assert_cond = "(evap.Cells[2].sat.dv >= 0.0 and evap.Cells[2].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1118));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1118));
        }
      }
      tmp1119 = 1;
    }
  }
  threadData->lastEquationSolved = 2000;
}

/*
equation index: 2001
type: ALGORITHM

  assert(evap.Cells[2].sat.psat >= 0.0 and evap.Cells[2].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].sat.psat <= 1e8, has value: " + String(evap.Cells[2].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2001};
  modelica_boolean tmp1120;
  modelica_boolean tmp1121;
  static const MMC_DEFSTRINGLIT(tmp1122,88,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].sat.psat <= 1e8, has value: ");
  modelica_string tmp1123;
  modelica_metatype tmpMeta1124;
  static int tmp1125 = 0;
  if(!tmp1125)
  {
    tmp1120 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1162]] /* evap.Cells[2].sat.psat variable */),0.0);
    tmp1121 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1162]] /* evap.Cells[2].sat.psat variable */),1e8);
    if(!(tmp1120 && tmp1121))
    {
      tmp1123 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1162]] /* evap.Cells[2].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1124 = stringAppend(MMC_REFSTRINGLIT(tmp1122),tmp1123);
      {
        const char* assert_cond = "(evap.Cells[2].sat.psat >= 0.0 and evap.Cells[2].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1124));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1124));
        }
      }
      tmp1125 = 1;
    }
  }
  threadData->lastEquationSolved = 2001;
}

/*
equation index: 2002
type: ALGORITHM

  assert(evap.Cells[2].sat.sl >= -1e7 and evap.Cells[2].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[2].sat.sl <= 1e7, has value: " + String(evap.Cells[2].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2002};
  modelica_boolean tmp1126;
  modelica_boolean tmp1127;
  static const MMC_DEFSTRINGLIT(tmp1128,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[2].sat.sl <= 1e7, has value: ");
  modelica_string tmp1129;
  modelica_metatype tmpMeta1130;
  static int tmp1131 = 0;
  if(!tmp1131)
  {
    tmp1126 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* evap.Cells[2].sat.sl variable */),-1e7);
    tmp1127 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* evap.Cells[2].sat.sl variable */),1e7);
    if(!(tmp1126 && tmp1127))
    {
      tmp1129 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* evap.Cells[2].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1130 = stringAppend(MMC_REFSTRINGLIT(tmp1128),tmp1129);
      {
        const char* assert_cond = "(evap.Cells[2].sat.sl >= -1e7 and evap.Cells[2].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1130));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1130));
        }
      }
      tmp1131 = 1;
    }
  }
  threadData->lastEquationSolved = 2002;
}

/*
equation index: 2003
type: ALGORITHM

  assert(evap.Cells[2].sat.sv >= -1e7 and evap.Cells[2].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[2].sat.sv <= 1e7, has value: " + String(evap.Cells[2].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2003};
  modelica_boolean tmp1132;
  modelica_boolean tmp1133;
  static const MMC_DEFSTRINGLIT(tmp1134,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[2].sat.sv <= 1e7, has value: ");
  modelica_string tmp1135;
  modelica_metatype tmpMeta1136;
  static int tmp1137 = 0;
  if(!tmp1137)
  {
    tmp1132 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* evap.Cells[2].sat.sv variable */),-1e7);
    tmp1133 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* evap.Cells[2].sat.sv variable */),1e7);
    if(!(tmp1132 && tmp1133))
    {
      tmp1135 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* evap.Cells[2].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1136 = stringAppend(MMC_REFSTRINGLIT(tmp1134),tmp1135);
      {
        const char* assert_cond = "(evap.Cells[2].sat.sv >= -1e7 and evap.Cells[2].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1136));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1136));
        }
      }
      tmp1137 = 1;
    }
  }
  threadData->lastEquationSolved = 2003;
}

/*
equation index: 2004
type: ALGORITHM

  assert(evap.Cells[2].h >= -1e10 and evap.Cells[2].h <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[2].h <= 1e10, has value: " + String(evap.Cells[2].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2004};
  modelica_boolean tmp1138;
  modelica_boolean tmp1139;
  static const MMC_DEFSTRINGLIT(tmp1140,84,"Variable violating min/max constraint: -1e10 <= evap.Cells[2].h <= 1e10, has value: ");
  modelica_string tmp1141;
  modelica_metatype tmpMeta1142;
  static int tmp1143 = 0;
  if(!tmp1143)
  {
    tmp1138 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */),-1e10);
    tmp1139 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */),1e10);
    if(!(tmp1138 && tmp1139))
    {
      tmp1141 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* evap.Cells[2].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1142 = stringAppend(MMC_REFSTRINGLIT(tmp1140),tmp1141);
      {
        const char* assert_cond = "(evap.Cells[2].h >= -1e10 and evap.Cells[2].h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1142));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1142));
        }
      }
      tmp1143 = 1;
    }
  }
  threadData->lastEquationSolved = 2004;
}

/*
equation index: 2005
type: ALGORITHM

  assert(evap.Cells[2].T >= 1.0 and evap.Cells[2].T <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[2].T <= 1e4, has value: " + String(evap.Cells[2].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2005};
  modelica_boolean tmp1144;
  modelica_boolean tmp1145;
  static const MMC_DEFSTRINGLIT(tmp1146,81,"Variable violating min/max constraint: 1.0 <= evap.Cells[2].T <= 1e4, has value: ");
  modelica_string tmp1147;
  modelica_metatype tmpMeta1148;
  static int tmp1149 = 0;
  if(!tmp1149)
  {
    tmp1144 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* evap.Cells[2].T variable */),1.0);
    tmp1145 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* evap.Cells[2].T variable */),1e4);
    if(!(tmp1144 && tmp1145))
    {
      tmp1147 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* evap.Cells[2].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1148 = stringAppend(MMC_REFSTRINGLIT(tmp1146),tmp1147);
      {
        const char* assert_cond = "(evap.Cells[2].T >= 1.0 and evap.Cells[2].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1148));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1148));
        }
      }
      tmp1149 = 1;
    }
  }
  threadData->lastEquationSolved = 2005;
}

/*
equation index: 2006
type: ALGORITHM

  assert(evap.Cells[2].rho >= 0.0 and evap.Cells[2].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[2].rho <= 1e5, has value: " + String(evap.Cells[2].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2006};
  modelica_boolean tmp1150;
  modelica_boolean tmp1151;
  static const MMC_DEFSTRINGLIT(tmp1152,83,"Variable violating min/max constraint: 0.0 <= evap.Cells[2].rho <= 1e5, has value: ");
  modelica_string tmp1153;
  modelica_metatype tmpMeta1154;
  static int tmp1155 = 0;
  if(!tmp1155)
  {
    tmp1150 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* evap.Cells[2].rho variable */),0.0);
    tmp1151 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* evap.Cells[2].rho variable */),1e5);
    if(!(tmp1150 && tmp1151))
    {
      tmp1153 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* evap.Cells[2].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1154 = stringAppend(MMC_REFSTRINGLIT(tmp1152),tmp1153);
      {
        const char* assert_cond = "(evap.Cells[2].rho >= 0.0 and evap.Cells[2].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1154));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1154));
        }
      }
      tmp1155 = 1;
    }
  }
  threadData->lastEquationSolved = 2006;
}

/*
equation index: 2007
type: ALGORITHM

  assert(evap.Cells[2].hnode_su >= -1e10 and evap.Cells[2].hnode_su <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[2].hnode_su <= 1e10, has value: " + String(evap.Cells[2].hnode_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2007};
  modelica_boolean tmp1156;
  modelica_boolean tmp1157;
  static const MMC_DEFSTRINGLIT(tmp1158,91,"Variable violating min/max constraint: -1e10 <= evap.Cells[2].hnode_su <= 1e10, has value: ");
  modelica_string tmp1159;
  modelica_metatype tmpMeta1160;
  static int tmp1161 = 0;
  if(!tmp1161)
  {
    tmp1156 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */),-1e10);
    tmp1157 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */),1e10);
    if(!(tmp1156 && tmp1157))
    {
      tmp1159 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* evap.Cells[2].hnode_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1160 = stringAppend(MMC_REFSTRINGLIT(tmp1158),tmp1159);
      {
        const char* assert_cond = "(evap.Cells[2].hnode_su >= -1e10 and evap.Cells[2].hnode_su <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1160));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1160));
        }
      }
      tmp1161 = 1;
    }
  }
  threadData->lastEquationSolved = 2007;
}

/*
equation index: 2008
type: ALGORITHM

  assert(evap.Cells[2].h_l >= -1e10 and evap.Cells[2].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[2].h_l <= 1e10, has value: " + String(evap.Cells[2].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2008};
  modelica_boolean tmp1162;
  modelica_boolean tmp1163;
  static const MMC_DEFSTRINGLIT(tmp1164,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[2].h_l <= 1e10, has value: ");
  modelica_string tmp1165;
  modelica_metatype tmpMeta1166;
  static int tmp1167 = 0;
  if(!tmp1167)
  {
    tmp1162 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* evap.Cells[2].h_l variable */),-1e10);
    tmp1163 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* evap.Cells[2].h_l variable */),1e10);
    if(!(tmp1162 && tmp1163))
    {
      tmp1165 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* evap.Cells[2].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1166 = stringAppend(MMC_REFSTRINGLIT(tmp1164),tmp1165);
      {
        const char* assert_cond = "(evap.Cells[2].h_l >= -1e10 and evap.Cells[2].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1166));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1166));
        }
      }
      tmp1167 = 1;
    }
  }
  threadData->lastEquationSolved = 2008;
}

/*
equation index: 2009
type: ALGORITHM

  assert(evap.Cells[2].h_v >= -1e10 and evap.Cells[2].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[2].h_v <= 1e10, has value: " + String(evap.Cells[2].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2009};
  modelica_boolean tmp1168;
  modelica_boolean tmp1169;
  static const MMC_DEFSTRINGLIT(tmp1170,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[2].h_v <= 1e10, has value: ");
  modelica_string tmp1171;
  modelica_metatype tmpMeta1172;
  static int tmp1173 = 0;
  if(!tmp1173)
  {
    tmp1168 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1086]] /* evap.Cells[2].h_v variable */),-1e10);
    tmp1169 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1086]] /* evap.Cells[2].h_v variable */),1e10);
    if(!(tmp1168 && tmp1169))
    {
      tmp1171 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1086]] /* evap.Cells[2].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1172 = stringAppend(MMC_REFSTRINGLIT(tmp1170),tmp1171);
      {
        const char* assert_cond = "(evap.Cells[2].h_v >= -1e10 and evap.Cells[2].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1172));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1172));
        }
      }
      tmp1173 = 1;
    }
  }
  threadData->lastEquationSolved = 2009;
}

/*
equation index: 2010
type: ALGORITHM

  assert(evap.Cells[2].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= evap.Cells[2].M_tot, has value: " + String(evap.Cells[2].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2010};
  modelica_boolean tmp1174;
  static const MMC_DEFSTRINGLIT(tmp1175,74,"Variable violating min constraint: 0.0 <= evap.Cells[2].M_tot, has value: ");
  modelica_string tmp1176;
  modelica_metatype tmpMeta1177;
  static int tmp1178 = 0;
  if(!tmp1178)
  {
    tmp1174 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* evap.Cells[2].M_tot variable */),0.0);
    if(!tmp1174)
    {
      tmp1176 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* evap.Cells[2].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1177 = stringAppend(MMC_REFSTRINGLIT(tmp1175),tmp1176);
      {
        const char* assert_cond = "(evap.Cells[2].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1177));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1177));
        }
      }
      tmp1178 = 1;
    }
  }
  threadData->lastEquationSolved = 2010;
}

/*
equation index: 2011
type: ALGORITHM

  assert(evap.Cells[3].InFlow.m_flow >= -1e5 and evap.Cells[3].InFlow.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= evap.Cells[3].InFlow.m_flow <= 1e5, has value: " + String(evap.Cells[3].InFlow.m_flow, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2011};
  modelica_boolean tmp1179;
  modelica_boolean tmp1180;
  static const MMC_DEFSTRINGLIT(tmp1181,94,"Variable violating min/max constraint: -1e5 <= evap.Cells[3].InFlow.m_flow <= 1e5, has value: ");
  modelica_string tmp1182;
  modelica_metatype tmpMeta1183;
  static int tmp1184 = 0;
  if(!tmp1184)
  {
    tmp1179 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* evap.Cells[3].InFlow.m_flow variable */),-1e5);
    tmp1180 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* evap.Cells[3].InFlow.m_flow variable */),1e5);
    if(!(tmp1179 && tmp1180))
    {
      tmp1182 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* evap.Cells[3].InFlow.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1183 = stringAppend(MMC_REFSTRINGLIT(tmp1181),tmp1182);
      {
        const char* assert_cond = "(evap.Cells[3].InFlow.m_flow >= -1e5 and evap.Cells[3].InFlow.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1183));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1183));
        }
      }
      tmp1184 = 1;
    }
  }
  threadData->lastEquationSolved = 2011;
}

/*
equation index: 2012
type: ALGORITHM

  assert(evap.Cells[3].fluidState.a >= 0.0 and evap.Cells[3].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.a <= 1e5, has value: " + String(evap.Cells[3].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2012};
  modelica_boolean tmp1185;
  modelica_boolean tmp1186;
  static const MMC_DEFSTRINGLIT(tmp1187,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.a <= 1e5, has value: ");
  modelica_string tmp1188;
  modelica_metatype tmpMeta1189;
  static int tmp1190 = 0;
  if(!tmp1190)
  {
    tmp1185 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* evap.Cells[3].fluidState.a variable */),0.0);
    tmp1186 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* evap.Cells[3].fluidState.a variable */),1e5);
    if(!(tmp1185 && tmp1186))
    {
      tmp1188 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* evap.Cells[3].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1189 = stringAppend(MMC_REFSTRINGLIT(tmp1187),tmp1188);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.a >= 0.0 and evap.Cells[3].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1189));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1189));
        }
      }
      tmp1190 = 1;
    }
  }
  threadData->lastEquationSolved = 2012;
}

/*
equation index: 2013
type: ALGORITHM

  assert(evap.Cells[3].fluidState.cp >= 0.0 and evap.Cells[3].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.cp <= 1e7, has value: " + String(evap.Cells[3].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2013};
  modelica_boolean tmp1191;
  modelica_boolean tmp1192;
  static const MMC_DEFSTRINGLIT(tmp1193,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp1194;
  modelica_metatype tmpMeta1195;
  static int tmp1196 = 0;
  if(!tmp1196)
  {
    tmp1191 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* evap.Cells[3].fluidState.cp variable */),0.0);
    tmp1192 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* evap.Cells[3].fluidState.cp variable */),1e7);
    if(!(tmp1191 && tmp1192))
    {
      tmp1194 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* evap.Cells[3].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1195 = stringAppend(MMC_REFSTRINGLIT(tmp1193),tmp1194);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.cp >= 0.0 and evap.Cells[3].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1195));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1195));
        }
      }
      tmp1196 = 1;
    }
  }
  threadData->lastEquationSolved = 2013;
}

/*
equation index: 2014
type: ALGORITHM

  assert(evap.Cells[3].fluidState.cv >= 0.0 and evap.Cells[3].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.cv <= 1e7, has value: " + String(evap.Cells[3].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2014};
  modelica_boolean tmp1197;
  modelica_boolean tmp1198;
  static const MMC_DEFSTRINGLIT(tmp1199,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp1200;
  modelica_metatype tmpMeta1201;
  static int tmp1202 = 0;
  if(!tmp1202)
  {
    tmp1197 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* evap.Cells[3].fluidState.cv variable */),0.0);
    tmp1198 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* evap.Cells[3].fluidState.cv variable */),1e7);
    if(!(tmp1197 && tmp1198))
    {
      tmp1200 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* evap.Cells[3].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1201 = stringAppend(MMC_REFSTRINGLIT(tmp1199),tmp1200);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.cv >= 0.0 and evap.Cells[3].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1201));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1201));
        }
      }
      tmp1202 = 1;
    }
  }
  threadData->lastEquationSolved = 2014;
}

/*
equation index: 2015
type: ALGORITHM

  assert(evap.Cells[3].fluidState.eta >= 0.0 and evap.Cells[3].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.eta <= 1e8, has value: " + String(evap.Cells[3].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2015};
  modelica_boolean tmp1203;
  modelica_boolean tmp1204;
  static const MMC_DEFSTRINGLIT(tmp1205,94,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp1206;
  modelica_metatype tmpMeta1207;
  static int tmp1208 = 0;
  if(!tmp1208)
  {
    tmp1203 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* evap.Cells[3].fluidState.eta variable */),0.0);
    tmp1204 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* evap.Cells[3].fluidState.eta variable */),1e8);
    if(!(tmp1203 && tmp1204))
    {
      tmp1206 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* evap.Cells[3].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1207 = stringAppend(MMC_REFSTRINGLIT(tmp1205),tmp1206);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.eta >= 0.0 and evap.Cells[3].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1207));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1207));
        }
      }
      tmp1208 = 1;
    }
  }
  threadData->lastEquationSolved = 2015;
}

/*
equation index: 2016
type: ALGORITHM

  assert(evap.Cells[3].fluidState.h >= -1e10 and evap.Cells[3].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[3].fluidState.h <= 1e10, has value: " + String(evap.Cells[3].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2016};
  modelica_boolean tmp1209;
  modelica_boolean tmp1210;
  static const MMC_DEFSTRINGLIT(tmp1211,95,"Variable violating min/max constraint: -1e10 <= evap.Cells[3].fluidState.h <= 1e10, has value: ");
  modelica_string tmp1212;
  modelica_metatype tmpMeta1213;
  static int tmp1214 = 0;
  if(!tmp1214)
  {
    tmp1209 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* evap.Cells[3].fluidState.h variable */),-1e10);
    tmp1210 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* evap.Cells[3].fluidState.h variable */),1e10);
    if(!(tmp1209 && tmp1210))
    {
      tmp1212 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* evap.Cells[3].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1213 = stringAppend(MMC_REFSTRINGLIT(tmp1211),tmp1212);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.h >= -1e10 and evap.Cells[3].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1213));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1213));
        }
      }
      tmp1214 = 1;
    }
  }
  threadData->lastEquationSolved = 2016;
}

/*
equation index: 2017
type: ALGORITHM

  assert(evap.Cells[3].fluidState.lambda >= 0.0 and evap.Cells[3].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.lambda <= 500.0, has value: " + String(evap.Cells[3].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2017};
  modelica_boolean tmp1215;
  modelica_boolean tmp1216;
  static const MMC_DEFSTRINGLIT(tmp1217,99,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp1218;
  modelica_metatype tmpMeta1219;
  static int tmp1220 = 0;
  if(!tmp1220)
  {
    tmp1215 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1067]] /* evap.Cells[3].fluidState.lambda variable */),0.0);
    tmp1216 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1067]] /* evap.Cells[3].fluidState.lambda variable */),500.0);
    if(!(tmp1215 && tmp1216))
    {
      tmp1218 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1067]] /* evap.Cells[3].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1219 = stringAppend(MMC_REFSTRINGLIT(tmp1217),tmp1218);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.lambda >= 0.0 and evap.Cells[3].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1219));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1219));
        }
      }
      tmp1220 = 1;
    }
  }
  threadData->lastEquationSolved = 2017;
}

/*
equation index: 2018
type: ALGORITHM

  assert(evap.Cells[3].fluidState.p >= 0.0 and evap.Cells[3].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.p <= 1e8, has value: " + String(evap.Cells[3].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2018};
  modelica_boolean tmp1221;
  modelica_boolean tmp1222;
  static const MMC_DEFSTRINGLIT(tmp1223,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].fluidState.p <= 1e8, has value: ");
  modelica_string tmp1224;
  modelica_metatype tmpMeta1225;
  static int tmp1226 = 0;
  if(!tmp1226)
  {
    tmp1221 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* evap.Cells[3].fluidState.p variable */),0.0);
    tmp1222 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* evap.Cells[3].fluidState.p variable */),1e8);
    if(!(tmp1221 && tmp1222))
    {
      tmp1224 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* evap.Cells[3].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1225 = stringAppend(MMC_REFSTRINGLIT(tmp1223),tmp1224);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.p >= 0.0 and evap.Cells[3].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1225));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1225));
        }
      }
      tmp1226 = 1;
    }
  }
  threadData->lastEquationSolved = 2018;
}

/*
equation index: 2019
type: ALGORITHM

  assert(evap.Cells[3].fluidState.phase >= 0 and evap.Cells[3].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= evap.Cells[3].fluidState.phase <= 2, has value: " + String(evap.Cells[3].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2019};
  modelica_boolean tmp1227;
  modelica_boolean tmp1228;
  static const MMC_DEFSTRINGLIT(tmp1229,92,"Variable violating min/max constraint: 0 <= evap.Cells[3].fluidState.phase <= 2, has value: ");
  modelica_string tmp1230;
  modelica_metatype tmpMeta1231;
  static int tmp1232 = 0;
  if(!tmp1232)
  {
    tmp1227 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[35]] /* evap.Cells[3].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp1228 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[35]] /* evap.Cells[3].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp1227 && tmp1228))
    {
      tmp1230 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[35]] /* evap.Cells[3].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1231 = stringAppend(MMC_REFSTRINGLIT(tmp1229),tmp1230);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.phase >= 0 and evap.Cells[3].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1231));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1231));
        }
      }
      tmp1232 = 1;
    }
  }
  threadData->lastEquationSolved = 2019;
}

/*
equation index: 2020
type: ALGORITHM

  assert(evap.Cells[3].fluidState.s >= -1e7 and evap.Cells[3].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[3].fluidState.s <= 1e7, has value: " + String(evap.Cells[3].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2020};
  modelica_boolean tmp1233;
  modelica_boolean tmp1234;
  static const MMC_DEFSTRINGLIT(tmp1235,93,"Variable violating min/max constraint: -1e7 <= evap.Cells[3].fluidState.s <= 1e7, has value: ");
  modelica_string tmp1236;
  modelica_metatype tmpMeta1237;
  static int tmp1238 = 0;
  if(!tmp1238)
  {
    tmp1233 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* evap.Cells[3].fluidState.s variable */),-1e7);
    tmp1234 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* evap.Cells[3].fluidState.s variable */),1e7);
    if(!(tmp1233 && tmp1234))
    {
      tmp1236 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* evap.Cells[3].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1237 = stringAppend(MMC_REFSTRINGLIT(tmp1235),tmp1236);
      {
        const char* assert_cond = "(evap.Cells[3].fluidState.s >= -1e7 and evap.Cells[3].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1237));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1237));
        }
      }
      tmp1238 = 1;
    }
  }
  threadData->lastEquationSolved = 2020;
}

/*
equation index: 2021
type: ALGORITHM

  assert(evap.Cells[3].sat.Tsat >= 1.0 and evap.Cells[3].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[3].sat.Tsat <= 1e4, has value: " + String(evap.Cells[3].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2021};
  modelica_boolean tmp1239;
  modelica_boolean tmp1240;
  static const MMC_DEFSTRINGLIT(tmp1241,88,"Variable violating min/max constraint: 1.0 <= evap.Cells[3].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp1242;
  modelica_metatype tmpMeta1243;
  static int tmp1244 = 0;
  if(!tmp1244)
  {
    tmp1239 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* evap.Cells[3].sat.Tsat variable */),1.0);
    tmp1240 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* evap.Cells[3].sat.Tsat variable */),1e4);
    if(!(tmp1239 && tmp1240))
    {
      tmp1242 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* evap.Cells[3].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1243 = stringAppend(MMC_REFSTRINGLIT(tmp1241),tmp1242);
      {
        const char* assert_cond = "(evap.Cells[3].sat.Tsat >= 1.0 and evap.Cells[3].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1243));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1243));
        }
      }
      tmp1244 = 1;
    }
  }
  threadData->lastEquationSolved = 2021;
}

/*
equation index: 2022
type: ALGORITHM

  assert(evap.Cells[3].sat.dl >= 0.0 and evap.Cells[3].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].sat.dl <= 1e5, has value: " + String(evap.Cells[3].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2022};
  modelica_boolean tmp1245;
  modelica_boolean tmp1246;
  static const MMC_DEFSTRINGLIT(tmp1247,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].sat.dl <= 1e5, has value: ");
  modelica_string tmp1248;
  modelica_metatype tmpMeta1249;
  static int tmp1250 = 0;
  if(!tmp1250)
  {
    tmp1245 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* evap.Cells[3].sat.dl variable */),0.0);
    tmp1246 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* evap.Cells[3].sat.dl variable */),1e5);
    if(!(tmp1245 && tmp1246))
    {
      tmp1248 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* evap.Cells[3].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1249 = stringAppend(MMC_REFSTRINGLIT(tmp1247),tmp1248);
      {
        const char* assert_cond = "(evap.Cells[3].sat.dl >= 0.0 and evap.Cells[3].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1249));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1249));
        }
      }
      tmp1250 = 1;
    }
  }
  threadData->lastEquationSolved = 2022;
}

/*
equation index: 2023
type: ALGORITHM

  assert(evap.Cells[3].sat.dv >= 0.0 and evap.Cells[3].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].sat.dv <= 1e5, has value: " + String(evap.Cells[3].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2023};
  modelica_boolean tmp1251;
  modelica_boolean tmp1252;
  static const MMC_DEFSTRINGLIT(tmp1253,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].sat.dv <= 1e5, has value: ");
  modelica_string tmp1254;
  modelica_metatype tmpMeta1255;
  static int tmp1256 = 0;
  if(!tmp1256)
  {
    tmp1251 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1158]] /* evap.Cells[3].sat.dv variable */),0.0);
    tmp1252 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1158]] /* evap.Cells[3].sat.dv variable */),1e5);
    if(!(tmp1251 && tmp1252))
    {
      tmp1254 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1158]] /* evap.Cells[3].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1255 = stringAppend(MMC_REFSTRINGLIT(tmp1253),tmp1254);
      {
        const char* assert_cond = "(evap.Cells[3].sat.dv >= 0.0 and evap.Cells[3].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1255));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1255));
        }
      }
      tmp1256 = 1;
    }
  }
  threadData->lastEquationSolved = 2023;
}

/*
equation index: 2024
type: ALGORITHM

  assert(evap.Cells[3].sat.psat >= 0.0 and evap.Cells[3].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].sat.psat <= 1e8, has value: " + String(evap.Cells[3].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2024};
  modelica_boolean tmp1257;
  modelica_boolean tmp1258;
  static const MMC_DEFSTRINGLIT(tmp1259,88,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].sat.psat <= 1e8, has value: ");
  modelica_string tmp1260;
  modelica_metatype tmpMeta1261;
  static int tmp1262 = 0;
  if(!tmp1262)
  {
    tmp1257 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1163]] /* evap.Cells[3].sat.psat variable */),0.0);
    tmp1258 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1163]] /* evap.Cells[3].sat.psat variable */),1e8);
    if(!(tmp1257 && tmp1258))
    {
      tmp1260 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1163]] /* evap.Cells[3].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1261 = stringAppend(MMC_REFSTRINGLIT(tmp1259),tmp1260);
      {
        const char* assert_cond = "(evap.Cells[3].sat.psat >= 0.0 and evap.Cells[3].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1261));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1261));
        }
      }
      tmp1262 = 1;
    }
  }
  threadData->lastEquationSolved = 2024;
}

/*
equation index: 2025
type: ALGORITHM

  assert(evap.Cells[3].sat.sl >= -1e7 and evap.Cells[3].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[3].sat.sl <= 1e7, has value: " + String(evap.Cells[3].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2025};
  modelica_boolean tmp1263;
  modelica_boolean tmp1264;
  static const MMC_DEFSTRINGLIT(tmp1265,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[3].sat.sl <= 1e7, has value: ");
  modelica_string tmp1266;
  modelica_metatype tmpMeta1267;
  static int tmp1268 = 0;
  if(!tmp1268)
  {
    tmp1263 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* evap.Cells[3].sat.sl variable */),-1e7);
    tmp1264 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* evap.Cells[3].sat.sl variable */),1e7);
    if(!(tmp1263 && tmp1264))
    {
      tmp1266 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* evap.Cells[3].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1267 = stringAppend(MMC_REFSTRINGLIT(tmp1265),tmp1266);
      {
        const char* assert_cond = "(evap.Cells[3].sat.sl >= -1e7 and evap.Cells[3].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1267));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1267));
        }
      }
      tmp1268 = 1;
    }
  }
  threadData->lastEquationSolved = 2025;
}

/*
equation index: 2026
type: ALGORITHM

  assert(evap.Cells[3].sat.sv >= -1e7 and evap.Cells[3].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[3].sat.sv <= 1e7, has value: " + String(evap.Cells[3].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2026};
  modelica_boolean tmp1269;
  modelica_boolean tmp1270;
  static const MMC_DEFSTRINGLIT(tmp1271,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[3].sat.sv <= 1e7, has value: ");
  modelica_string tmp1272;
  modelica_metatype tmpMeta1273;
  static int tmp1274 = 0;
  if(!tmp1274)
  {
    tmp1269 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* evap.Cells[3].sat.sv variable */),-1e7);
    tmp1270 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* evap.Cells[3].sat.sv variable */),1e7);
    if(!(tmp1269 && tmp1270))
    {
      tmp1272 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* evap.Cells[3].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1273 = stringAppend(MMC_REFSTRINGLIT(tmp1271),tmp1272);
      {
        const char* assert_cond = "(evap.Cells[3].sat.sv >= -1e7 and evap.Cells[3].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1273));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1273));
        }
      }
      tmp1274 = 1;
    }
  }
  threadData->lastEquationSolved = 2026;
}

/*
equation index: 2027
type: ALGORITHM

  assert(evap.Cells[3].h >= -1e10 and evap.Cells[3].h <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[3].h <= 1e10, has value: " + String(evap.Cells[3].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2027};
  modelica_boolean tmp1275;
  modelica_boolean tmp1276;
  static const MMC_DEFSTRINGLIT(tmp1277,84,"Variable violating min/max constraint: -1e10 <= evap.Cells[3].h <= 1e10, has value: ");
  modelica_string tmp1278;
  modelica_metatype tmpMeta1279;
  static int tmp1280 = 0;
  if(!tmp1280)
  {
    tmp1275 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */),-1e10);
    tmp1276 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */),1e10);
    if(!(tmp1275 && tmp1276))
    {
      tmp1278 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* evap.Cells[3].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1279 = stringAppend(MMC_REFSTRINGLIT(tmp1277),tmp1278);
      {
        const char* assert_cond = "(evap.Cells[3].h >= -1e10 and evap.Cells[3].h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1279));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1279));
        }
      }
      tmp1280 = 1;
    }
  }
  threadData->lastEquationSolved = 2027;
}

/*
equation index: 2028
type: ALGORITHM

  assert(evap.Cells[3].T >= 1.0 and evap.Cells[3].T <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[3].T <= 1e4, has value: " + String(evap.Cells[3].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2028};
  modelica_boolean tmp1281;
  modelica_boolean tmp1282;
  static const MMC_DEFSTRINGLIT(tmp1283,81,"Variable violating min/max constraint: 1.0 <= evap.Cells[3].T <= 1e4, has value: ");
  modelica_string tmp1284;
  modelica_metatype tmpMeta1285;
  static int tmp1286 = 0;
  if(!tmp1286)
  {
    tmp1281 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* evap.Cells[3].T variable */),1.0);
    tmp1282 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* evap.Cells[3].T variable */),1e4);
    if(!(tmp1281 && tmp1282))
    {
      tmp1284 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* evap.Cells[3].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1285 = stringAppend(MMC_REFSTRINGLIT(tmp1283),tmp1284);
      {
        const char* assert_cond = "(evap.Cells[3].T >= 1.0 and evap.Cells[3].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1285));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1285));
        }
      }
      tmp1286 = 1;
    }
  }
  threadData->lastEquationSolved = 2028;
}

/*
equation index: 2029
type: ALGORITHM

  assert(evap.Cells[3].rho >= 0.0 and evap.Cells[3].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[3].rho <= 1e5, has value: " + String(evap.Cells[3].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2029};
  modelica_boolean tmp1287;
  modelica_boolean tmp1288;
  static const MMC_DEFSTRINGLIT(tmp1289,83,"Variable violating min/max constraint: 0.0 <= evap.Cells[3].rho <= 1e5, has value: ");
  modelica_string tmp1290;
  modelica_metatype tmpMeta1291;
  static int tmp1292 = 0;
  if(!tmp1292)
  {
    tmp1287 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1118]] /* evap.Cells[3].rho variable */),0.0);
    tmp1288 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1118]] /* evap.Cells[3].rho variable */),1e5);
    if(!(tmp1287 && tmp1288))
    {
      tmp1290 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1118]] /* evap.Cells[3].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1291 = stringAppend(MMC_REFSTRINGLIT(tmp1289),tmp1290);
      {
        const char* assert_cond = "(evap.Cells[3].rho >= 0.0 and evap.Cells[3].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1291));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1291));
        }
      }
      tmp1292 = 1;
    }
  }
  threadData->lastEquationSolved = 2029;
}

/*
equation index: 2030
type: ALGORITHM

  assert(evap.Cells[3].hnode_su >= -1e10 and evap.Cells[3].hnode_su <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[3].hnode_su <= 1e10, has value: " + String(evap.Cells[3].hnode_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2030};
  modelica_boolean tmp1293;
  modelica_boolean tmp1294;
  static const MMC_DEFSTRINGLIT(tmp1295,91,"Variable violating min/max constraint: -1e10 <= evap.Cells[3].hnode_su <= 1e10, has value: ");
  modelica_string tmp1296;
  modelica_metatype tmpMeta1297;
  static int tmp1298 = 0;
  if(!tmp1298)
  {
    tmp1293 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */),-1e10);
    tmp1294 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */),1e10);
    if(!(tmp1293 && tmp1294))
    {
      tmp1296 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* evap.Cells[3].hnode_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1297 = stringAppend(MMC_REFSTRINGLIT(tmp1295),tmp1296);
      {
        const char* assert_cond = "(evap.Cells[3].hnode_su >= -1e10 and evap.Cells[3].hnode_su <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1297));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1297));
        }
      }
      tmp1298 = 1;
    }
  }
  threadData->lastEquationSolved = 2030;
}

/*
equation index: 2031
type: ALGORITHM

  assert(evap.Cells[3].h_l >= -1e10 and evap.Cells[3].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[3].h_l <= 1e10, has value: " + String(evap.Cells[3].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2031};
  modelica_boolean tmp1299;
  modelica_boolean tmp1300;
  static const MMC_DEFSTRINGLIT(tmp1301,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[3].h_l <= 1e10, has value: ");
  modelica_string tmp1302;
  modelica_metatype tmpMeta1303;
  static int tmp1304 = 0;
  if(!tmp1304)
  {
    tmp1299 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* evap.Cells[3].h_l variable */),-1e10);
    tmp1300 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* evap.Cells[3].h_l variable */),1e10);
    if(!(tmp1299 && tmp1300))
    {
      tmp1302 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* evap.Cells[3].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1303 = stringAppend(MMC_REFSTRINGLIT(tmp1301),tmp1302);
      {
        const char* assert_cond = "(evap.Cells[3].h_l >= -1e10 and evap.Cells[3].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1303));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1303));
        }
      }
      tmp1304 = 1;
    }
  }
  threadData->lastEquationSolved = 2031;
}

/*
equation index: 2032
type: ALGORITHM

  assert(evap.Cells[3].h_v >= -1e10 and evap.Cells[3].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[3].h_v <= 1e10, has value: " + String(evap.Cells[3].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2032};
  modelica_boolean tmp1305;
  modelica_boolean tmp1306;
  static const MMC_DEFSTRINGLIT(tmp1307,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[3].h_v <= 1e10, has value: ");
  modelica_string tmp1308;
  modelica_metatype tmpMeta1309;
  static int tmp1310 = 0;
  if(!tmp1310)
  {
    tmp1305 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* evap.Cells[3].h_v variable */),-1e10);
    tmp1306 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* evap.Cells[3].h_v variable */),1e10);
    if(!(tmp1305 && tmp1306))
    {
      tmp1308 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* evap.Cells[3].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1309 = stringAppend(MMC_REFSTRINGLIT(tmp1307),tmp1308);
      {
        const char* assert_cond = "(evap.Cells[3].h_v >= -1e10 and evap.Cells[3].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1309));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1309));
        }
      }
      tmp1310 = 1;
    }
  }
  threadData->lastEquationSolved = 2032;
}

/*
equation index: 2033
type: ALGORITHM

  assert(evap.Cells[3].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= evap.Cells[3].M_tot, has value: " + String(evap.Cells[3].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2033};
  modelica_boolean tmp1311;
  static const MMC_DEFSTRINGLIT(tmp1312,74,"Variable violating min constraint: 0.0 <= evap.Cells[3].M_tot, has value: ");
  modelica_string tmp1313;
  modelica_metatype tmpMeta1314;
  static int tmp1315 = 0;
  if(!tmp1315)
  {
    tmp1311 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* evap.Cells[3].M_tot variable */),0.0);
    if(!tmp1311)
    {
      tmp1313 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* evap.Cells[3].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1314 = stringAppend(MMC_REFSTRINGLIT(tmp1312),tmp1313);
      {
        const char* assert_cond = "(evap.Cells[3].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1314));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1314));
        }
      }
      tmp1315 = 1;
    }
  }
  threadData->lastEquationSolved = 2033;
}

/*
equation index: 2034
type: ALGORITHM

  assert(evap.Cells[4].InFlow.m_flow >= -1e5 and evap.Cells[4].InFlow.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= evap.Cells[4].InFlow.m_flow <= 1e5, has value: " + String(evap.Cells[4].InFlow.m_flow, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2034};
  modelica_boolean tmp1316;
  modelica_boolean tmp1317;
  static const MMC_DEFSTRINGLIT(tmp1318,94,"Variable violating min/max constraint: -1e5 <= evap.Cells[4].InFlow.m_flow <= 1e5, has value: ");
  modelica_string tmp1319;
  modelica_metatype tmpMeta1320;
  static int tmp1321 = 0;
  if(!tmp1321)
  {
    tmp1316 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* evap.Cells[4].InFlow.m_flow variable */),-1e5);
    tmp1317 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* evap.Cells[4].InFlow.m_flow variable */),1e5);
    if(!(tmp1316 && tmp1317))
    {
      tmp1319 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* evap.Cells[4].InFlow.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1320 = stringAppend(MMC_REFSTRINGLIT(tmp1318),tmp1319);
      {
        const char* assert_cond = "(evap.Cells[4].InFlow.m_flow >= -1e5 and evap.Cells[4].InFlow.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1320));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1320));
        }
      }
      tmp1321 = 1;
    }
  }
  threadData->lastEquationSolved = 2034;
}

/*
equation index: 2035
type: ALGORITHM

  assert(evap.Cells[4].fluidState.a >= 0.0 and evap.Cells[4].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.a <= 1e5, has value: " + String(evap.Cells[4].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2035};
  modelica_boolean tmp1322;
  modelica_boolean tmp1323;
  static const MMC_DEFSTRINGLIT(tmp1324,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.a <= 1e5, has value: ");
  modelica_string tmp1325;
  modelica_metatype tmpMeta1326;
  static int tmp1327 = 0;
  if(!tmp1327)
  {
    tmp1322 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* evap.Cells[4].fluidState.a variable */),0.0);
    tmp1323 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* evap.Cells[4].fluidState.a variable */),1e5);
    if(!(tmp1322 && tmp1323))
    {
      tmp1325 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* evap.Cells[4].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1326 = stringAppend(MMC_REFSTRINGLIT(tmp1324),tmp1325);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.a >= 0.0 and evap.Cells[4].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1326));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1326));
        }
      }
      tmp1327 = 1;
    }
  }
  threadData->lastEquationSolved = 2035;
}

/*
equation index: 2036
type: ALGORITHM

  assert(evap.Cells[4].fluidState.cp >= 0.0 and evap.Cells[4].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.cp <= 1e7, has value: " + String(evap.Cells[4].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2036};
  modelica_boolean tmp1328;
  modelica_boolean tmp1329;
  static const MMC_DEFSTRINGLIT(tmp1330,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp1331;
  modelica_metatype tmpMeta1332;
  static int tmp1333 = 0;
  if(!tmp1333)
  {
    tmp1328 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1043]] /* evap.Cells[4].fluidState.cp variable */),0.0);
    tmp1329 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1043]] /* evap.Cells[4].fluidState.cp variable */),1e7);
    if(!(tmp1328 && tmp1329))
    {
      tmp1331 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1043]] /* evap.Cells[4].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1332 = stringAppend(MMC_REFSTRINGLIT(tmp1330),tmp1331);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.cp >= 0.0 and evap.Cells[4].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1332));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1332));
        }
      }
      tmp1333 = 1;
    }
  }
  threadData->lastEquationSolved = 2036;
}

/*
equation index: 2037
type: ALGORITHM

  assert(evap.Cells[4].fluidState.cv >= 0.0 and evap.Cells[4].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.cv <= 1e7, has value: " + String(evap.Cells[4].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2037};
  modelica_boolean tmp1334;
  modelica_boolean tmp1335;
  static const MMC_DEFSTRINGLIT(tmp1336,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp1337;
  modelica_metatype tmpMeta1338;
  static int tmp1339 = 0;
  if(!tmp1339)
  {
    tmp1334 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* evap.Cells[4].fluidState.cv variable */),0.0);
    tmp1335 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* evap.Cells[4].fluidState.cv variable */),1e7);
    if(!(tmp1334 && tmp1335))
    {
      tmp1337 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* evap.Cells[4].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1338 = stringAppend(MMC_REFSTRINGLIT(tmp1336),tmp1337);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.cv >= 0.0 and evap.Cells[4].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1338));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1338));
        }
      }
      tmp1339 = 1;
    }
  }
  threadData->lastEquationSolved = 2037;
}

/*
equation index: 2038
type: ALGORITHM

  assert(evap.Cells[4].fluidState.eta >= 0.0 and evap.Cells[4].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.eta <= 1e8, has value: " + String(evap.Cells[4].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2038};
  modelica_boolean tmp1340;
  modelica_boolean tmp1341;
  static const MMC_DEFSTRINGLIT(tmp1342,94,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp1343;
  modelica_metatype tmpMeta1344;
  static int tmp1345 = 0;
  if(!tmp1345)
  {
    tmp1340 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1053]] /* evap.Cells[4].fluidState.eta variable */),0.0);
    tmp1341 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1053]] /* evap.Cells[4].fluidState.eta variable */),1e8);
    if(!(tmp1340 && tmp1341))
    {
      tmp1343 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1053]] /* evap.Cells[4].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1344 = stringAppend(MMC_REFSTRINGLIT(tmp1342),tmp1343);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.eta >= 0.0 and evap.Cells[4].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1344));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1344));
        }
      }
      tmp1345 = 1;
    }
  }
  threadData->lastEquationSolved = 2038;
}

/*
equation index: 2039
type: ALGORITHM

  assert(evap.Cells[4].fluidState.h >= -1e10 and evap.Cells[4].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[4].fluidState.h <= 1e10, has value: " + String(evap.Cells[4].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2039};
  modelica_boolean tmp1346;
  modelica_boolean tmp1347;
  static const MMC_DEFSTRINGLIT(tmp1348,95,"Variable violating min/max constraint: -1e10 <= evap.Cells[4].fluidState.h <= 1e10, has value: ");
  modelica_string tmp1349;
  modelica_metatype tmpMeta1350;
  static int tmp1351 = 0;
  if(!tmp1351)
  {
    tmp1346 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* evap.Cells[4].fluidState.h variable */),-1e10);
    tmp1347 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* evap.Cells[4].fluidState.h variable */),1e10);
    if(!(tmp1346 && tmp1347))
    {
      tmp1349 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* evap.Cells[4].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1350 = stringAppend(MMC_REFSTRINGLIT(tmp1348),tmp1349);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.h >= -1e10 and evap.Cells[4].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1350));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1350));
        }
      }
      tmp1351 = 1;
    }
  }
  threadData->lastEquationSolved = 2039;
}

/*
equation index: 2040
type: ALGORITHM

  assert(evap.Cells[4].fluidState.lambda >= 0.0 and evap.Cells[4].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.lambda <= 500.0, has value: " + String(evap.Cells[4].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2040};
  modelica_boolean tmp1352;
  modelica_boolean tmp1353;
  static const MMC_DEFSTRINGLIT(tmp1354,99,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp1355;
  modelica_metatype tmpMeta1356;
  static int tmp1357 = 0;
  if(!tmp1357)
  {
    tmp1352 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1068]] /* evap.Cells[4].fluidState.lambda variable */),0.0);
    tmp1353 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1068]] /* evap.Cells[4].fluidState.lambda variable */),500.0);
    if(!(tmp1352 && tmp1353))
    {
      tmp1355 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1068]] /* evap.Cells[4].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1356 = stringAppend(MMC_REFSTRINGLIT(tmp1354),tmp1355);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.lambda >= 0.0 and evap.Cells[4].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1356));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1356));
        }
      }
      tmp1357 = 1;
    }
  }
  threadData->lastEquationSolved = 2040;
}

/*
equation index: 2041
type: ALGORITHM

  assert(evap.Cells[4].fluidState.p >= 0.0 and evap.Cells[4].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.p <= 1e8, has value: " + String(evap.Cells[4].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2041};
  modelica_boolean tmp1358;
  modelica_boolean tmp1359;
  static const MMC_DEFSTRINGLIT(tmp1360,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].fluidState.p <= 1e8, has value: ");
  modelica_string tmp1361;
  modelica_metatype tmpMeta1362;
  static int tmp1363 = 0;
  if(!tmp1363)
  {
    tmp1358 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* evap.Cells[4].fluidState.p variable */),0.0);
    tmp1359 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* evap.Cells[4].fluidState.p variable */),1e8);
    if(!(tmp1358 && tmp1359))
    {
      tmp1361 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* evap.Cells[4].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1362 = stringAppend(MMC_REFSTRINGLIT(tmp1360),tmp1361);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.p >= 0.0 and evap.Cells[4].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1362));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1362));
        }
      }
      tmp1363 = 1;
    }
  }
  threadData->lastEquationSolved = 2041;
}

/*
equation index: 2042
type: ALGORITHM

  assert(evap.Cells[4].fluidState.phase >= 0 and evap.Cells[4].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= evap.Cells[4].fluidState.phase <= 2, has value: " + String(evap.Cells[4].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2042};
  modelica_boolean tmp1364;
  modelica_boolean tmp1365;
  static const MMC_DEFSTRINGLIT(tmp1366,92,"Variable violating min/max constraint: 0 <= evap.Cells[4].fluidState.phase <= 2, has value: ");
  modelica_string tmp1367;
  modelica_metatype tmpMeta1368;
  static int tmp1369 = 0;
  if(!tmp1369)
  {
    tmp1364 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[36]] /* evap.Cells[4].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp1365 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[36]] /* evap.Cells[4].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp1364 && tmp1365))
    {
      tmp1367 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[36]] /* evap.Cells[4].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1368 = stringAppend(MMC_REFSTRINGLIT(tmp1366),tmp1367);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.phase >= 0 and evap.Cells[4].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1368));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1368));
        }
      }
      tmp1369 = 1;
    }
  }
  threadData->lastEquationSolved = 2042;
}

/*
equation index: 2043
type: ALGORITHM

  assert(evap.Cells[4].fluidState.s >= -1e7 and evap.Cells[4].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[4].fluidState.s <= 1e7, has value: " + String(evap.Cells[4].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2043};
  modelica_boolean tmp1370;
  modelica_boolean tmp1371;
  static const MMC_DEFSTRINGLIT(tmp1372,93,"Variable violating min/max constraint: -1e7 <= evap.Cells[4].fluidState.s <= 1e7, has value: ");
  modelica_string tmp1373;
  modelica_metatype tmpMeta1374;
  static int tmp1375 = 0;
  if(!tmp1375)
  {
    tmp1370 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* evap.Cells[4].fluidState.s variable */),-1e7);
    tmp1371 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* evap.Cells[4].fluidState.s variable */),1e7);
    if(!(tmp1370 && tmp1371))
    {
      tmp1373 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* evap.Cells[4].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1374 = stringAppend(MMC_REFSTRINGLIT(tmp1372),tmp1373);
      {
        const char* assert_cond = "(evap.Cells[4].fluidState.s >= -1e7 and evap.Cells[4].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1374));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1374));
        }
      }
      tmp1375 = 1;
    }
  }
  threadData->lastEquationSolved = 2043;
}

/*
equation index: 2044
type: ALGORITHM

  assert(evap.Cells[4].sat.Tsat >= 1.0 and evap.Cells[4].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[4].sat.Tsat <= 1e4, has value: " + String(evap.Cells[4].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2044};
  modelica_boolean tmp1376;
  modelica_boolean tmp1377;
  static const MMC_DEFSTRINGLIT(tmp1378,88,"Variable violating min/max constraint: 1.0 <= evap.Cells[4].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp1379;
  modelica_metatype tmpMeta1380;
  static int tmp1381 = 0;
  if(!tmp1381)
  {
    tmp1376 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* evap.Cells[4].sat.Tsat variable */),1.0);
    tmp1377 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* evap.Cells[4].sat.Tsat variable */),1e4);
    if(!(tmp1376 && tmp1377))
    {
      tmp1379 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* evap.Cells[4].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1380 = stringAppend(MMC_REFSTRINGLIT(tmp1378),tmp1379);
      {
        const char* assert_cond = "(evap.Cells[4].sat.Tsat >= 1.0 and evap.Cells[4].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1380));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1380));
        }
      }
      tmp1381 = 1;
    }
  }
  threadData->lastEquationSolved = 2044;
}

/*
equation index: 2045
type: ALGORITHM

  assert(evap.Cells[4].sat.dl >= 0.0 and evap.Cells[4].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].sat.dl <= 1e5, has value: " + String(evap.Cells[4].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2045};
  modelica_boolean tmp1382;
  modelica_boolean tmp1383;
  static const MMC_DEFSTRINGLIT(tmp1384,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].sat.dl <= 1e5, has value: ");
  modelica_string tmp1385;
  modelica_metatype tmpMeta1386;
  static int tmp1387 = 0;
  if(!tmp1387)
  {
    tmp1382 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* evap.Cells[4].sat.dl variable */),0.0);
    tmp1383 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* evap.Cells[4].sat.dl variable */),1e5);
    if(!(tmp1382 && tmp1383))
    {
      tmp1385 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* evap.Cells[4].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1386 = stringAppend(MMC_REFSTRINGLIT(tmp1384),tmp1385);
      {
        const char* assert_cond = "(evap.Cells[4].sat.dl >= 0.0 and evap.Cells[4].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1386));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1386));
        }
      }
      tmp1387 = 1;
    }
  }
  threadData->lastEquationSolved = 2045;
}

/*
equation index: 2046
type: ALGORITHM

  assert(evap.Cells[4].sat.dv >= 0.0 and evap.Cells[4].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].sat.dv <= 1e5, has value: " + String(evap.Cells[4].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2046};
  modelica_boolean tmp1388;
  modelica_boolean tmp1389;
  static const MMC_DEFSTRINGLIT(tmp1390,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].sat.dv <= 1e5, has value: ");
  modelica_string tmp1391;
  modelica_metatype tmpMeta1392;
  static int tmp1393 = 0;
  if(!tmp1393)
  {
    tmp1388 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1159]] /* evap.Cells[4].sat.dv variable */),0.0);
    tmp1389 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1159]] /* evap.Cells[4].sat.dv variable */),1e5);
    if(!(tmp1388 && tmp1389))
    {
      tmp1391 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1159]] /* evap.Cells[4].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1392 = stringAppend(MMC_REFSTRINGLIT(tmp1390),tmp1391);
      {
        const char* assert_cond = "(evap.Cells[4].sat.dv >= 0.0 and evap.Cells[4].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1392));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1392));
        }
      }
      tmp1393 = 1;
    }
  }
  threadData->lastEquationSolved = 2046;
}

/*
equation index: 2047
type: ALGORITHM

  assert(evap.Cells[4].sat.psat >= 0.0 and evap.Cells[4].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].sat.psat <= 1e8, has value: " + String(evap.Cells[4].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2047};
  modelica_boolean tmp1394;
  modelica_boolean tmp1395;
  static const MMC_DEFSTRINGLIT(tmp1396,88,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].sat.psat <= 1e8, has value: ");
  modelica_string tmp1397;
  modelica_metatype tmpMeta1398;
  static int tmp1399 = 0;
  if(!tmp1399)
  {
    tmp1394 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1164]] /* evap.Cells[4].sat.psat variable */),0.0);
    tmp1395 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1164]] /* evap.Cells[4].sat.psat variable */),1e8);
    if(!(tmp1394 && tmp1395))
    {
      tmp1397 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1164]] /* evap.Cells[4].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1398 = stringAppend(MMC_REFSTRINGLIT(tmp1396),tmp1397);
      {
        const char* assert_cond = "(evap.Cells[4].sat.psat >= 0.0 and evap.Cells[4].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1398));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1398));
        }
      }
      tmp1399 = 1;
    }
  }
  threadData->lastEquationSolved = 2047;
}

/*
equation index: 2048
type: ALGORITHM

  assert(evap.Cells[4].sat.sl >= -1e7 and evap.Cells[4].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[4].sat.sl <= 1e7, has value: " + String(evap.Cells[4].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2048};
  modelica_boolean tmp1400;
  modelica_boolean tmp1401;
  static const MMC_DEFSTRINGLIT(tmp1402,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[4].sat.sl <= 1e7, has value: ");
  modelica_string tmp1403;
  modelica_metatype tmpMeta1404;
  static int tmp1405 = 0;
  if(!tmp1405)
  {
    tmp1400 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* evap.Cells[4].sat.sl variable */),-1e7);
    tmp1401 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* evap.Cells[4].sat.sl variable */),1e7);
    if(!(tmp1400 && tmp1401))
    {
      tmp1403 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* evap.Cells[4].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1404 = stringAppend(MMC_REFSTRINGLIT(tmp1402),tmp1403);
      {
        const char* assert_cond = "(evap.Cells[4].sat.sl >= -1e7 and evap.Cells[4].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1404));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1404));
        }
      }
      tmp1405 = 1;
    }
  }
  threadData->lastEquationSolved = 2048;
}

/*
equation index: 2049
type: ALGORITHM

  assert(evap.Cells[4].sat.sv >= -1e7 and evap.Cells[4].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[4].sat.sv <= 1e7, has value: " + String(evap.Cells[4].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2049};
  modelica_boolean tmp1406;
  modelica_boolean tmp1407;
  static const MMC_DEFSTRINGLIT(tmp1408,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[4].sat.sv <= 1e7, has value: ");
  modelica_string tmp1409;
  modelica_metatype tmpMeta1410;
  static int tmp1411 = 0;
  if(!tmp1411)
  {
    tmp1406 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* evap.Cells[4].sat.sv variable */),-1e7);
    tmp1407 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* evap.Cells[4].sat.sv variable */),1e7);
    if(!(tmp1406 && tmp1407))
    {
      tmp1409 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* evap.Cells[4].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1410 = stringAppend(MMC_REFSTRINGLIT(tmp1408),tmp1409);
      {
        const char* assert_cond = "(evap.Cells[4].sat.sv >= -1e7 and evap.Cells[4].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1410));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1410));
        }
      }
      tmp1411 = 1;
    }
  }
  threadData->lastEquationSolved = 2049;
}

/*
equation index: 2050
type: ALGORITHM

  assert(evap.Cells[4].h >= -1e10 and evap.Cells[4].h <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[4].h <= 1e10, has value: " + String(evap.Cells[4].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2050};
  modelica_boolean tmp1412;
  modelica_boolean tmp1413;
  static const MMC_DEFSTRINGLIT(tmp1414,84,"Variable violating min/max constraint: -1e10 <= evap.Cells[4].h <= 1e10, has value: ");
  modelica_string tmp1415;
  modelica_metatype tmpMeta1416;
  static int tmp1417 = 0;
  if(!tmp1417)
  {
    tmp1412 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */),-1e10);
    tmp1413 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */),1e10);
    if(!(tmp1412 && tmp1413))
    {
      tmp1415 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* evap.Cells[4].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1416 = stringAppend(MMC_REFSTRINGLIT(tmp1414),tmp1415);
      {
        const char* assert_cond = "(evap.Cells[4].h >= -1e10 and evap.Cells[4].h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1416));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1416));
        }
      }
      tmp1417 = 1;
    }
  }
  threadData->lastEquationSolved = 2050;
}

/*
equation index: 2051
type: ALGORITHM

  assert(evap.Cells[4].T >= 1.0 and evap.Cells[4].T <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[4].T <= 1e4, has value: " + String(evap.Cells[4].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2051};
  modelica_boolean tmp1418;
  modelica_boolean tmp1419;
  static const MMC_DEFSTRINGLIT(tmp1420,81,"Variable violating min/max constraint: 1.0 <= evap.Cells[4].T <= 1e4, has value: ");
  modelica_string tmp1421;
  modelica_metatype tmpMeta1422;
  static int tmp1423 = 0;
  if(!tmp1423)
  {
    tmp1418 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* evap.Cells[4].T variable */),1.0);
    tmp1419 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* evap.Cells[4].T variable */),1e4);
    if(!(tmp1418 && tmp1419))
    {
      tmp1421 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* evap.Cells[4].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1422 = stringAppend(MMC_REFSTRINGLIT(tmp1420),tmp1421);
      {
        const char* assert_cond = "(evap.Cells[4].T >= 1.0 and evap.Cells[4].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1422));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1422));
        }
      }
      tmp1423 = 1;
    }
  }
  threadData->lastEquationSolved = 2051;
}

/*
equation index: 2052
type: ALGORITHM

  assert(evap.Cells[4].rho >= 0.0 and evap.Cells[4].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[4].rho <= 1e5, has value: " + String(evap.Cells[4].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2052};
  modelica_boolean tmp1424;
  modelica_boolean tmp1425;
  static const MMC_DEFSTRINGLIT(tmp1426,83,"Variable violating min/max constraint: 0.0 <= evap.Cells[4].rho <= 1e5, has value: ");
  modelica_string tmp1427;
  modelica_metatype tmpMeta1428;
  static int tmp1429 = 0;
  if(!tmp1429)
  {
    tmp1424 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* evap.Cells[4].rho variable */),0.0);
    tmp1425 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* evap.Cells[4].rho variable */),1e5);
    if(!(tmp1424 && tmp1425))
    {
      tmp1427 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* evap.Cells[4].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1428 = stringAppend(MMC_REFSTRINGLIT(tmp1426),tmp1427);
      {
        const char* assert_cond = "(evap.Cells[4].rho >= 0.0 and evap.Cells[4].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1428));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1428));
        }
      }
      tmp1429 = 1;
    }
  }
  threadData->lastEquationSolved = 2052;
}

/*
equation index: 2053
type: ALGORITHM

  assert(evap.Cells[4].hnode_su >= -1e10 and evap.Cells[4].hnode_su <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[4].hnode_su <= 1e10, has value: " + String(evap.Cells[4].hnode_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2053};
  modelica_boolean tmp1430;
  modelica_boolean tmp1431;
  static const MMC_DEFSTRINGLIT(tmp1432,91,"Variable violating min/max constraint: -1e10 <= evap.Cells[4].hnode_su <= 1e10, has value: ");
  modelica_string tmp1433;
  modelica_metatype tmpMeta1434;
  static int tmp1435 = 0;
  if(!tmp1435)
  {
    tmp1430 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */),-1e10);
    tmp1431 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */),1e10);
    if(!(tmp1430 && tmp1431))
    {
      tmp1433 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* evap.Cells[4].hnode_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1434 = stringAppend(MMC_REFSTRINGLIT(tmp1432),tmp1433);
      {
        const char* assert_cond = "(evap.Cells[4].hnode_su >= -1e10 and evap.Cells[4].hnode_su <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1434));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1434));
        }
      }
      tmp1435 = 1;
    }
  }
  threadData->lastEquationSolved = 2053;
}

/*
equation index: 2054
type: ALGORITHM

  assert(evap.Cells[4].h_l >= -1e10 and evap.Cells[4].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[4].h_l <= 1e10, has value: " + String(evap.Cells[4].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2054};
  modelica_boolean tmp1436;
  modelica_boolean tmp1437;
  static const MMC_DEFSTRINGLIT(tmp1438,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[4].h_l <= 1e10, has value: ");
  modelica_string tmp1439;
  modelica_metatype tmpMeta1440;
  static int tmp1441 = 0;
  if(!tmp1441)
  {
    tmp1436 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* evap.Cells[4].h_l variable */),-1e10);
    tmp1437 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* evap.Cells[4].h_l variable */),1e10);
    if(!(tmp1436 && tmp1437))
    {
      tmp1439 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* evap.Cells[4].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1440 = stringAppend(MMC_REFSTRINGLIT(tmp1438),tmp1439);
      {
        const char* assert_cond = "(evap.Cells[4].h_l >= -1e10 and evap.Cells[4].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1440));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1440));
        }
      }
      tmp1441 = 1;
    }
  }
  threadData->lastEquationSolved = 2054;
}

/*
equation index: 2055
type: ALGORITHM

  assert(evap.Cells[4].h_v >= -1e10 and evap.Cells[4].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[4].h_v <= 1e10, has value: " + String(evap.Cells[4].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2055};
  modelica_boolean tmp1442;
  modelica_boolean tmp1443;
  static const MMC_DEFSTRINGLIT(tmp1444,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[4].h_v <= 1e10, has value: ");
  modelica_string tmp1445;
  modelica_metatype tmpMeta1446;
  static int tmp1447 = 0;
  if(!tmp1447)
  {
    tmp1442 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* evap.Cells[4].h_v variable */),-1e10);
    tmp1443 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* evap.Cells[4].h_v variable */),1e10);
    if(!(tmp1442 && tmp1443))
    {
      tmp1445 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* evap.Cells[4].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1446 = stringAppend(MMC_REFSTRINGLIT(tmp1444),tmp1445);
      {
        const char* assert_cond = "(evap.Cells[4].h_v >= -1e10 and evap.Cells[4].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1446));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1446));
        }
      }
      tmp1447 = 1;
    }
  }
  threadData->lastEquationSolved = 2055;
}

/*
equation index: 2056
type: ALGORITHM

  assert(evap.Cells[4].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= evap.Cells[4].M_tot, has value: " + String(evap.Cells[4].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2056};
  modelica_boolean tmp1448;
  static const MMC_DEFSTRINGLIT(tmp1449,74,"Variable violating min constraint: 0.0 <= evap.Cells[4].M_tot, has value: ");
  modelica_string tmp1450;
  modelica_metatype tmpMeta1451;
  static int tmp1452 = 0;
  if(!tmp1452)
  {
    tmp1448 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1003]] /* evap.Cells[4].M_tot variable */),0.0);
    if(!tmp1448)
    {
      tmp1450 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1003]] /* evap.Cells[4].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1451 = stringAppend(MMC_REFSTRINGLIT(tmp1449),tmp1450);
      {
        const char* assert_cond = "(evap.Cells[4].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1451));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1451));
        }
      }
      tmp1452 = 1;
    }
  }
  threadData->lastEquationSolved = 2056;
}

/*
equation index: 2057
type: ALGORITHM

  assert(evap.Cells[5].InFlow.m_flow >= -1e5 and evap.Cells[5].InFlow.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= evap.Cells[5].InFlow.m_flow <= 1e5, has value: " + String(evap.Cells[5].InFlow.m_flow, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2057};
  modelica_boolean tmp1453;
  modelica_boolean tmp1454;
  static const MMC_DEFSTRINGLIT(tmp1455,94,"Variable violating min/max constraint: -1e5 <= evap.Cells[5].InFlow.m_flow <= 1e5, has value: ");
  modelica_string tmp1456;
  modelica_metatype tmpMeta1457;
  static int tmp1458 = 0;
  if(!tmp1458)
  {
    tmp1453 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* evap.Cells[5].InFlow.m_flow variable */),-1e5);
    tmp1454 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* evap.Cells[5].InFlow.m_flow variable */),1e5);
    if(!(tmp1453 && tmp1454))
    {
      tmp1456 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* evap.Cells[5].InFlow.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1457 = stringAppend(MMC_REFSTRINGLIT(tmp1455),tmp1456);
      {
        const char* assert_cond = "(evap.Cells[5].InFlow.m_flow >= -1e5 and evap.Cells[5].InFlow.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1457));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Interfaces/Fluid/Flange.mo",5,3,6,66,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1457));
        }
      }
      tmp1458 = 1;
    }
  }
  threadData->lastEquationSolved = 2057;
}

/*
equation index: 2058
type: ALGORITHM

  assert(evap.Cells[5].fluidState.a >= 0.0 and evap.Cells[5].fluidState.a <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.a <= 1e5, has value: " + String(evap.Cells[5].fluidState.a, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2058};
  modelica_boolean tmp1459;
  modelica_boolean tmp1460;
  static const MMC_DEFSTRINGLIT(tmp1461,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.a <= 1e5, has value: ");
  modelica_string tmp1462;
  modelica_metatype tmpMeta1463;
  static int tmp1464 = 0;
  if(!tmp1464)
  {
    tmp1459 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* evap.Cells[5].fluidState.a variable */),0.0);
    tmp1460 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* evap.Cells[5].fluidState.a variable */),1e5);
    if(!(tmp1459 && tmp1460))
    {
      tmp1462 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* evap.Cells[5].fluidState.a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1463 = stringAppend(MMC_REFSTRINGLIT(tmp1461),tmp1462);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.a >= 0.0 and evap.Cells[5].fluidState.a <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1463));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",39,5,39,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1463));
        }
      }
      tmp1464 = 1;
    }
  }
  threadData->lastEquationSolved = 2058;
}

/*
equation index: 2059
type: ALGORITHM

  assert(evap.Cells[5].fluidState.cp >= 0.0 and evap.Cells[5].fluidState.cp <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.cp <= 1e7, has value: " + String(evap.Cells[5].fluidState.cp, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2059};
  modelica_boolean tmp1465;
  modelica_boolean tmp1466;
  static const MMC_DEFSTRINGLIT(tmp1467,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.cp <= 1e7, has value: ");
  modelica_string tmp1468;
  modelica_metatype tmpMeta1469;
  static int tmp1470 = 0;
  if(!tmp1470)
  {
    tmp1465 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* evap.Cells[5].fluidState.cp variable */),0.0);
    tmp1466 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* evap.Cells[5].fluidState.cp variable */),1e7);
    if(!(tmp1465 && tmp1466))
    {
      tmp1468 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* evap.Cells[5].fluidState.cp variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1469 = stringAppend(MMC_REFSTRINGLIT(tmp1467),tmp1468);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.cp >= 0.0 and evap.Cells[5].fluidState.cp <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1469));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",42,5,42,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1469));
        }
      }
      tmp1470 = 1;
    }
  }
  threadData->lastEquationSolved = 2059;
}

/*
equation index: 2060
type: ALGORITHM

  assert(evap.Cells[5].fluidState.cv >= 0.0 and evap.Cells[5].fluidState.cv <= 1e7, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.cv <= 1e7, has value: " + String(evap.Cells[5].fluidState.cv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2060};
  modelica_boolean tmp1471;
  modelica_boolean tmp1472;
  static const MMC_DEFSTRINGLIT(tmp1473,93,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.cv <= 1e7, has value: ");
  modelica_string tmp1474;
  modelica_metatype tmpMeta1475;
  static int tmp1476 = 0;
  if(!tmp1476)
  {
    tmp1471 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* evap.Cells[5].fluidState.cv variable */),0.0);
    tmp1472 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* evap.Cells[5].fluidState.cv variable */),1e7);
    if(!(tmp1471 && tmp1472))
    {
      tmp1474 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* evap.Cells[5].fluidState.cv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1475 = stringAppend(MMC_REFSTRINGLIT(tmp1473),tmp1474);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.cv >= 0.0 and evap.Cells[5].fluidState.cv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1475));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",43,5,43,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1475));
        }
      }
      tmp1476 = 1;
    }
  }
  threadData->lastEquationSolved = 2060;
}

/*
equation index: 2061
type: ALGORITHM

  assert(evap.Cells[5].fluidState.eta >= 0.0 and evap.Cells[5].fluidState.eta <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.eta <= 1e8, has value: " + String(evap.Cells[5].fluidState.eta, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2061};
  modelica_boolean tmp1477;
  modelica_boolean tmp1478;
  static const MMC_DEFSTRINGLIT(tmp1479,94,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.eta <= 1e8, has value: ");
  modelica_string tmp1480;
  modelica_metatype tmpMeta1481;
  static int tmp1482 = 0;
  if(!tmp1482)
  {
    tmp1477 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1054]] /* evap.Cells[5].fluidState.eta variable */),0.0);
    tmp1478 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1054]] /* evap.Cells[5].fluidState.eta variable */),1e8);
    if(!(tmp1477 && tmp1478))
    {
      tmp1480 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1054]] /* evap.Cells[5].fluidState.eta variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1481 = stringAppend(MMC_REFSTRINGLIT(tmp1479),tmp1480);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.eta >= 0.0 and evap.Cells[5].fluidState.eta <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1481));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",49,5,49,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1481));
        }
      }
      tmp1482 = 1;
    }
  }
  threadData->lastEquationSolved = 2061;
}

/*
equation index: 2062
type: ALGORITHM

  assert(evap.Cells[5].fluidState.h >= -1e10 and evap.Cells[5].fluidState.h <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[5].fluidState.h <= 1e10, has value: " + String(evap.Cells[5].fluidState.h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2062};
  modelica_boolean tmp1483;
  modelica_boolean tmp1484;
  static const MMC_DEFSTRINGLIT(tmp1485,95,"Variable violating min/max constraint: -1e10 <= evap.Cells[5].fluidState.h <= 1e10, has value: ");
  modelica_string tmp1486;
  modelica_metatype tmpMeta1487;
  static int tmp1488 = 0;
  if(!tmp1488)
  {
    tmp1483 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* evap.Cells[5].fluidState.h variable */),-1e10);
    tmp1484 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* evap.Cells[5].fluidState.h variable */),1e10);
    if(!(tmp1483 && tmp1484))
    {
      tmp1486 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* evap.Cells[5].fluidState.h variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1487 = stringAppend(MMC_REFSTRINGLIT(tmp1485),tmp1486);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.h >= -1e10 and evap.Cells[5].fluidState.h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1487));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",50,5,50,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1487));
        }
      }
      tmp1488 = 1;
    }
  }
  threadData->lastEquationSolved = 2062;
}

/*
equation index: 2063
type: ALGORITHM

  assert(evap.Cells[5].fluidState.lambda >= 0.0 and evap.Cells[5].fluidState.lambda <= 500.0, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.lambda <= 500.0, has value: " + String(evap.Cells[5].fluidState.lambda, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2063};
  modelica_boolean tmp1489;
  modelica_boolean tmp1490;
  static const MMC_DEFSTRINGLIT(tmp1491,99,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.lambda <= 500.0, has value: ");
  modelica_string tmp1492;
  modelica_metatype tmpMeta1493;
  static int tmp1494 = 0;
  if(!tmp1494)
  {
    tmp1489 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1069]] /* evap.Cells[5].fluidState.lambda variable */),0.0);
    tmp1490 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1069]] /* evap.Cells[5].fluidState.lambda variable */),500.0);
    if(!(tmp1489 && tmp1490))
    {
      tmp1492 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1069]] /* evap.Cells[5].fluidState.lambda variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1493 = stringAppend(MMC_REFSTRINGLIT(tmp1491),tmp1492);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.lambda >= 0.0 and evap.Cells[5].fluidState.lambda <= 500.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1493));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",52,5,52,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1493));
        }
      }
      tmp1494 = 1;
    }
  }
  threadData->lastEquationSolved = 2063;
}

/*
equation index: 2064
type: ALGORITHM

  assert(evap.Cells[5].fluidState.p >= 0.0 and evap.Cells[5].fluidState.p <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.p <= 1e8, has value: " + String(evap.Cells[5].fluidState.p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2064};
  modelica_boolean tmp1495;
  modelica_boolean tmp1496;
  static const MMC_DEFSTRINGLIT(tmp1497,92,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].fluidState.p <= 1e8, has value: ");
  modelica_string tmp1498;
  modelica_metatype tmpMeta1499;
  static int tmp1500 = 0;
  if(!tmp1500)
  {
    tmp1495 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* evap.Cells[5].fluidState.p variable */),0.0);
    tmp1496 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* evap.Cells[5].fluidState.p variable */),1e8);
    if(!(tmp1495 && tmp1496))
    {
      tmp1498 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* evap.Cells[5].fluidState.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1499 = stringAppend(MMC_REFSTRINGLIT(tmp1497),tmp1498);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.p >= 0.0 and evap.Cells[5].fluidState.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1499));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",53,5,53,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1499));
        }
      }
      tmp1500 = 1;
    }
  }
  threadData->lastEquationSolved = 2064;
}

/*
equation index: 2065
type: ALGORITHM

  assert(evap.Cells[5].fluidState.phase >= 0 and evap.Cells[5].fluidState.phase <= 2, "Variable violating min/max constraint: 0 <= evap.Cells[5].fluidState.phase <= 2, has value: " + String(evap.Cells[5].fluidState.phase, "d"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2065};
  modelica_boolean tmp1501;
  modelica_boolean tmp1502;
  static const MMC_DEFSTRINGLIT(tmp1503,92,"Variable violating min/max constraint: 0 <= evap.Cells[5].fluidState.phase <= 2, has value: ");
  modelica_string tmp1504;
  modelica_metatype tmpMeta1505;
  static int tmp1506 = 0;
  if(!tmp1506)
  {
    tmp1501 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[37]] /* evap.Cells[5].fluidState.phase DISCRETE */),((modelica_integer) 0));
    tmp1502 = LessEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[37]] /* evap.Cells[5].fluidState.phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp1501 && tmp1502))
    {
      tmp1504 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[37]] /* evap.Cells[5].fluidState.phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1505 = stringAppend(MMC_REFSTRINGLIT(tmp1503),tmp1504);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.phase >= 0 and evap.Cells[5].fluidState.phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1505));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",54,5,55,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1505));
        }
      }
      tmp1506 = 1;
    }
  }
  threadData->lastEquationSolved = 2065;
}

/*
equation index: 2066
type: ALGORITHM

  assert(evap.Cells[5].fluidState.s >= -1e7 and evap.Cells[5].fluidState.s <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[5].fluidState.s <= 1e7, has value: " + String(evap.Cells[5].fluidState.s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2066};
  modelica_boolean tmp1507;
  modelica_boolean tmp1508;
  static const MMC_DEFSTRINGLIT(tmp1509,93,"Variable violating min/max constraint: -1e7 <= evap.Cells[5].fluidState.s <= 1e7, has value: ");
  modelica_string tmp1510;
  modelica_metatype tmpMeta1511;
  static int tmp1512 = 0;
  if(!tmp1512)
  {
    tmp1507 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* evap.Cells[5].fluidState.s variable */),-1e7);
    tmp1508 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* evap.Cells[5].fluidState.s variable */),1e7);
    if(!(tmp1507 && tmp1508))
    {
      tmp1510 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* evap.Cells[5].fluidState.s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1511 = stringAppend(MMC_REFSTRINGLIT(tmp1509),tmp1510);
      {
        const char* assert_cond = "(evap.Cells[5].fluidState.s >= -1e7 and evap.Cells[5].fluidState.s <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1511));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",56,5,56,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1511));
        }
      }
      tmp1512 = 1;
    }
  }
  threadData->lastEquationSolved = 2066;
}

/*
equation index: 2067
type: ALGORITHM

  assert(evap.Cells[5].sat.Tsat >= 1.0 and evap.Cells[5].sat.Tsat <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[5].sat.Tsat <= 1e4, has value: " + String(evap.Cells[5].sat.Tsat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2067};
  modelica_boolean tmp1513;
  modelica_boolean tmp1514;
  static const MMC_DEFSTRINGLIT(tmp1515,88,"Variable violating min/max constraint: 1.0 <= evap.Cells[5].sat.Tsat <= 1e4, has value: ");
  modelica_string tmp1516;
  modelica_metatype tmpMeta1517;
  static int tmp1518 = 0;
  if(!tmp1518)
  {
    tmp1513 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* evap.Cells[5].sat.Tsat variable */),1.0);
    tmp1514 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* evap.Cells[5].sat.Tsat variable */),1e4);
    if(!(tmp1513 && tmp1514))
    {
      tmp1516 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* evap.Cells[5].sat.Tsat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1517 = stringAppend(MMC_REFSTRINGLIT(tmp1515),tmp1516);
      {
        const char* assert_cond = "(evap.Cells[5].sat.Tsat >= 1.0 and evap.Cells[5].sat.Tsat <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1517));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",61,5,61,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1517));
        }
      }
      tmp1518 = 1;
    }
  }
  threadData->lastEquationSolved = 2067;
}

/*
equation index: 2068
type: ALGORITHM

  assert(evap.Cells[5].sat.dl >= 0.0 and evap.Cells[5].sat.dl <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].sat.dl <= 1e5, has value: " + String(evap.Cells[5].sat.dl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2068};
  modelica_boolean tmp1519;
  modelica_boolean tmp1520;
  static const MMC_DEFSTRINGLIT(tmp1521,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].sat.dl <= 1e5, has value: ");
  modelica_string tmp1522;
  modelica_metatype tmpMeta1523;
  static int tmp1524 = 0;
  if(!tmp1524)
  {
    tmp1519 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1155]] /* evap.Cells[5].sat.dl variable */),0.0);
    tmp1520 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1155]] /* evap.Cells[5].sat.dl variable */),1e5);
    if(!(tmp1519 && tmp1520))
    {
      tmp1522 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1155]] /* evap.Cells[5].sat.dl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1523 = stringAppend(MMC_REFSTRINGLIT(tmp1521),tmp1522);
      {
        const char* assert_cond = "(evap.Cells[5].sat.dl >= 0.0 and evap.Cells[5].sat.dl <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1523));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",67,5,67,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1523));
        }
      }
      tmp1524 = 1;
    }
  }
  threadData->lastEquationSolved = 2068;
}

/*
equation index: 2069
type: ALGORITHM

  assert(evap.Cells[5].sat.dv >= 0.0 and evap.Cells[5].sat.dv <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].sat.dv <= 1e5, has value: " + String(evap.Cells[5].sat.dv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2069};
  modelica_boolean tmp1525;
  modelica_boolean tmp1526;
  static const MMC_DEFSTRINGLIT(tmp1527,86,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].sat.dv <= 1e5, has value: ");
  modelica_string tmp1528;
  modelica_metatype tmpMeta1529;
  static int tmp1530 = 0;
  if(!tmp1530)
  {
    tmp1525 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1160]] /* evap.Cells[5].sat.dv variable */),0.0);
    tmp1526 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1160]] /* evap.Cells[5].sat.dv variable */),1e5);
    if(!(tmp1525 && tmp1526))
    {
      tmp1528 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1160]] /* evap.Cells[5].sat.dv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1529 = stringAppend(MMC_REFSTRINGLIT(tmp1527),tmp1528);
      {
        const char* assert_cond = "(evap.Cells[5].sat.dv >= 0.0 and evap.Cells[5].sat.dv <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1529));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",68,5,68,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1529));
        }
      }
      tmp1530 = 1;
    }
  }
  threadData->lastEquationSolved = 2069;
}

/*
equation index: 2070
type: ALGORITHM

  assert(evap.Cells[5].sat.psat >= 0.0 and evap.Cells[5].sat.psat <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].sat.psat <= 1e8, has value: " + String(evap.Cells[5].sat.psat, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2070};
  modelica_boolean tmp1531;
  modelica_boolean tmp1532;
  static const MMC_DEFSTRINGLIT(tmp1533,88,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].sat.psat <= 1e8, has value: ");
  modelica_string tmp1534;
  modelica_metatype tmpMeta1535;
  static int tmp1536 = 0;
  if(!tmp1536)
  {
    tmp1531 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* evap.Cells[5].sat.psat variable */),0.0);
    tmp1532 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* evap.Cells[5].sat.psat variable */),1e8);
    if(!(tmp1531 && tmp1532))
    {
      tmp1534 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* evap.Cells[5].sat.psat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1535 = stringAppend(MMC_REFSTRINGLIT(tmp1533),tmp1534);
      {
        const char* assert_cond = "(evap.Cells[5].sat.psat >= 0.0 and evap.Cells[5].sat.psat <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1535));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",71,5,71,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1535));
        }
      }
      tmp1536 = 1;
    }
  }
  threadData->lastEquationSolved = 2070;
}

/*
equation index: 2071
type: ALGORITHM

  assert(evap.Cells[5].sat.sl >= -1e7 and evap.Cells[5].sat.sl <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[5].sat.sl <= 1e7, has value: " + String(evap.Cells[5].sat.sl, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2071};
  modelica_boolean tmp1537;
  modelica_boolean tmp1538;
  static const MMC_DEFSTRINGLIT(tmp1539,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[5].sat.sl <= 1e7, has value: ");
  modelica_string tmp1540;
  modelica_metatype tmpMeta1541;
  static int tmp1542 = 0;
  if(!tmp1542)
  {
    tmp1537 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* evap.Cells[5].sat.sl variable */),-1e7);
    tmp1538 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* evap.Cells[5].sat.sl variable */),1e7);
    if(!(tmp1537 && tmp1538))
    {
      tmp1540 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* evap.Cells[5].sat.sl variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1541 = stringAppend(MMC_REFSTRINGLIT(tmp1539),tmp1540);
      {
        const char* assert_cond = "(evap.Cells[5].sat.sl >= -1e7 and evap.Cells[5].sat.sl <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1541));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",73,5,73,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1541));
        }
      }
      tmp1542 = 1;
    }
  }
  threadData->lastEquationSolved = 2071;
}

/*
equation index: 2072
type: ALGORITHM

  assert(evap.Cells[5].sat.sv >= -1e7 and evap.Cells[5].sat.sv <= 1e7, "Variable violating min/max constraint: -1e7 <= evap.Cells[5].sat.sv <= 1e7, has value: " + String(evap.Cells[5].sat.sv, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2072};
  modelica_boolean tmp1543;
  modelica_boolean tmp1544;
  static const MMC_DEFSTRINGLIT(tmp1545,87,"Variable violating min/max constraint: -1e7 <= evap.Cells[5].sat.sv <= 1e7, has value: ");
  modelica_string tmp1546;
  modelica_metatype tmpMeta1547;
  static int tmp1548 = 0;
  if(!tmp1548)
  {
    tmp1543 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* evap.Cells[5].sat.sv variable */),-1e7);
    tmp1544 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* evap.Cells[5].sat.sv variable */),1e7);
    if(!(tmp1543 && tmp1544))
    {
      tmp1546 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* evap.Cells[5].sat.sv variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1547 = stringAppend(MMC_REFSTRINGLIT(tmp1545),tmp1546);
      {
        const char* assert_cond = "(evap.Cells[5].sat.sv >= -1e7 and evap.Cells[5].sat.sv <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1547));
        } else {
          FILE_INFO info = {"C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Media/BaseClasses/ExternalTwoPhaseMedium.mo",74,5,74,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1547));
        }
      }
      tmp1548 = 1;
    }
  }
  threadData->lastEquationSolved = 2072;
}

/*
equation index: 2073
type: ALGORITHM

  assert(evap.Cells[5].p >= 0.0 and evap.Cells[5].p <= 1e8, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].p <= 1e8, has value: " + String(evap.Cells[5].p, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2073};
  modelica_boolean tmp1549;
  modelica_boolean tmp1550;
  static const MMC_DEFSTRINGLIT(tmp1551,81,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].p <= 1e8, has value: ");
  modelica_string tmp1552;
  modelica_metatype tmpMeta1553;
  static int tmp1554 = 0;
  if(!tmp1554)
  {
    tmp1549 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */),0.0);
    tmp1550 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */),1e8);
    if(!(tmp1549 && tmp1550))
    {
      tmp1552 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* evap.Cells[5].p STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1553 = stringAppend(MMC_REFSTRINGLIT(tmp1551),tmp1552);
      {
        const char* assert_cond = "(evap.Cells[5].p >= 0.0 and evap.Cells[5].p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",88,3,88,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1553));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",88,3,88,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1553));
        }
      }
      tmp1554 = 1;
    }
  }
  threadData->lastEquationSolved = 2073;
}

/*
equation index: 2074
type: ALGORITHM

  assert(evap.Cells[5].h >= -1e10 and evap.Cells[5].h <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[5].h <= 1e10, has value: " + String(evap.Cells[5].h, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2074};
  modelica_boolean tmp1555;
  modelica_boolean tmp1556;
  static const MMC_DEFSTRINGLIT(tmp1557,84,"Variable violating min/max constraint: -1e10 <= evap.Cells[5].h <= 1e10, has value: ");
  modelica_string tmp1558;
  modelica_metatype tmpMeta1559;
  static int tmp1560 = 0;
  if(!tmp1560)
  {
    tmp1555 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */),-1e10);
    tmp1556 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */),1e10);
    if(!(tmp1555 && tmp1556))
    {
      tmp1558 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* evap.Cells[5].h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1559 = stringAppend(MMC_REFSTRINGLIT(tmp1557),tmp1558);
      {
        const char* assert_cond = "(evap.Cells[5].h >= -1e10 and evap.Cells[5].h <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1559));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",91,3,92,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1559));
        }
      }
      tmp1560 = 1;
    }
  }
  threadData->lastEquationSolved = 2074;
}

/*
equation index: 2075
type: ALGORITHM

  assert(evap.Cells[5].T >= 1.0 and evap.Cells[5].T <= 1e4, "Variable violating min/max constraint: 1.0 <= evap.Cells[5].T <= 1e4, has value: " + String(evap.Cells[5].T, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2075};
  modelica_boolean tmp1561;
  modelica_boolean tmp1562;
  static const MMC_DEFSTRINGLIT(tmp1563,81,"Variable violating min/max constraint: 1.0 <= evap.Cells[5].T <= 1e4, has value: ");
  modelica_string tmp1564;
  modelica_metatype tmpMeta1565;
  static int tmp1566 = 0;
  if(!tmp1566)
  {
    tmp1561 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* evap.Cells[5].T variable */),1.0);
    tmp1562 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* evap.Cells[5].T variable */),1e4);
    if(!(tmp1561 && tmp1562))
    {
      tmp1564 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* evap.Cells[5].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1565 = stringAppend(MMC_REFSTRINGLIT(tmp1563),tmp1564);
      {
        const char* assert_cond = "(evap.Cells[5].T >= 1.0 and evap.Cells[5].T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1565));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",93,3,93,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1565));
        }
      }
      tmp1566 = 1;
    }
  }
  threadData->lastEquationSolved = 2075;
}

/*
equation index: 2076
type: ALGORITHM

  assert(evap.Cells[5].rho >= 0.0 and evap.Cells[5].rho <= 1e5, "Variable violating min/max constraint: 0.0 <= evap.Cells[5].rho <= 1e5, has value: " + String(evap.Cells[5].rho, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2076};
  modelica_boolean tmp1567;
  modelica_boolean tmp1568;
  static const MMC_DEFSTRINGLIT(tmp1569,83,"Variable violating min/max constraint: 0.0 <= evap.Cells[5].rho <= 1e5, has value: ");
  modelica_string tmp1570;
  modelica_metatype tmpMeta1571;
  static int tmp1572 = 0;
  if(!tmp1572)
  {
    tmp1567 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* evap.Cells[5].rho variable */),0.0);
    tmp1568 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* evap.Cells[5].rho variable */),1e5);
    if(!(tmp1567 && tmp1568))
    {
      tmp1570 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* evap.Cells[5].rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1571 = stringAppend(MMC_REFSTRINGLIT(tmp1569),tmp1570);
      {
        const char* assert_cond = "(evap.Cells[5].rho >= 0.0 and evap.Cells[5].rho <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1571));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",94,3,94,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1571));
        }
      }
      tmp1572 = 1;
    }
  }
  threadData->lastEquationSolved = 2076;
}

/*
equation index: 2077
type: ALGORITHM

  assert(evap.Cells[5].hnode_su >= -1e10 and evap.Cells[5].hnode_su <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[5].hnode_su <= 1e10, has value: " + String(evap.Cells[5].hnode_su, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2077};
  modelica_boolean tmp1573;
  modelica_boolean tmp1574;
  static const MMC_DEFSTRINGLIT(tmp1575,91,"Variable violating min/max constraint: -1e10 <= evap.Cells[5].hnode_su <= 1e10, has value: ");
  modelica_string tmp1576;
  modelica_metatype tmpMeta1577;
  static int tmp1578 = 0;
  if(!tmp1578)
  {
    tmp1573 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */),-1e10);
    tmp1574 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */),1e10);
    if(!(tmp1573 && tmp1574))
    {
      tmp1576 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* evap.Cells[5].hnode_su variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1577 = stringAppend(MMC_REFSTRINGLIT(tmp1575),tmp1576);
      {
        const char* assert_cond = "(evap.Cells[5].hnode_su >= -1e10 and evap.Cells[5].hnode_su <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1577));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",99,3,100,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1577));
        }
      }
      tmp1578 = 1;
    }
  }
  threadData->lastEquationSolved = 2077;
}

/*
equation index: 2078
type: ALGORITHM

  assert(evap.Cells[5].hnode_ex >= -1e10 and evap.Cells[5].hnode_ex <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[5].hnode_ex <= 1e10, has value: " + String(evap.Cells[5].hnode_ex, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2078};
  modelica_boolean tmp1579;
  modelica_boolean tmp1580;
  static const MMC_DEFSTRINGLIT(tmp1581,91,"Variable violating min/max constraint: -1e10 <= evap.Cells[5].hnode_ex <= 1e10, has value: ");
  modelica_string tmp1582;
  modelica_metatype tmpMeta1583;
  static int tmp1584 = 0;
  if(!tmp1584)
  {
    tmp1579 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* evap.Cells[5].hnode_ex variable */),-1e10);
    tmp1580 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* evap.Cells[5].hnode_ex variable */),1e10);
    if(!(tmp1579 && tmp1580))
    {
      tmp1582 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* evap.Cells[5].hnode_ex variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1583 = stringAppend(MMC_REFSTRINGLIT(tmp1581),tmp1582);
      {
        const char* assert_cond = "(evap.Cells[5].hnode_ex >= -1e10 and evap.Cells[5].hnode_ex <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",101,3,102,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1583));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",101,3,102,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1583));
        }
      }
      tmp1584 = 1;
    }
  }
  threadData->lastEquationSolved = 2078;
}

/*
equation index: 2079
type: ALGORITHM

  assert(evap.Cells[5].h_l >= -1e10 and evap.Cells[5].h_l <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[5].h_l <= 1e10, has value: " + String(evap.Cells[5].h_l, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2079};
  modelica_boolean tmp1585;
  modelica_boolean tmp1586;
  static const MMC_DEFSTRINGLIT(tmp1587,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[5].h_l <= 1e10, has value: ");
  modelica_string tmp1588;
  modelica_metatype tmpMeta1589;
  static int tmp1590 = 0;
  if(!tmp1590)
  {
    tmp1585 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* evap.Cells[5].h_l variable */),-1e10);
    tmp1586 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* evap.Cells[5].h_l variable */),1e10);
    if(!(tmp1585 && tmp1586))
    {
      tmp1588 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* evap.Cells[5].h_l variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1589 = stringAppend(MMC_REFSTRINGLIT(tmp1587),tmp1588);
      {
        const char* assert_cond = "(evap.Cells[5].h_l >= -1e10 and evap.Cells[5].h_l <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1589));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",108,3,108,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1589));
        }
      }
      tmp1590 = 1;
    }
  }
  threadData->lastEquationSolved = 2079;
}

/*
equation index: 2080
type: ALGORITHM

  assert(evap.Cells[5].h_v >= -1e10 and evap.Cells[5].h_v <= 1e10, "Variable violating min/max constraint: -1e10 <= evap.Cells[5].h_v <= 1e10, has value: " + String(evap.Cells[5].h_v, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2080};
  modelica_boolean tmp1591;
  modelica_boolean tmp1592;
  static const MMC_DEFSTRINGLIT(tmp1593,86,"Variable violating min/max constraint: -1e10 <= evap.Cells[5].h_v <= 1e10, has value: ");
  modelica_string tmp1594;
  modelica_metatype tmpMeta1595;
  static int tmp1596 = 0;
  if(!tmp1596)
  {
    tmp1591 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* evap.Cells[5].h_v variable */),-1e10);
    tmp1592 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* evap.Cells[5].h_v variable */),1e10);
    if(!(tmp1591 && tmp1592))
    {
      tmp1594 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* evap.Cells[5].h_v variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1595 = stringAppend(MMC_REFSTRINGLIT(tmp1593),tmp1594);
      {
        const char* assert_cond = "(evap.Cells[5].h_v >= -1e10 and evap.Cells[5].h_v <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1595));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",109,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1595));
        }
      }
      tmp1596 = 1;
    }
  }
  threadData->lastEquationSolved = 2080;
}

/*
equation index: 2081
type: ALGORITHM

  assert(evap.Cells[5].M_tot >= 0.0, "Variable violating min constraint: 0.0 <= evap.Cells[5].M_tot, has value: " + String(evap.Cells[5].M_tot, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2081};
  modelica_boolean tmp1597;
  static const MMC_DEFSTRINGLIT(tmp1598,74,"Variable violating min constraint: 0.0 <= evap.Cells[5].M_tot, has value: ");
  modelica_string tmp1599;
  modelica_metatype tmpMeta1600;
  static int tmp1601 = 0;
  if(!tmp1601)
  {
    tmp1597 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* evap.Cells[5].M_tot variable */),0.0);
    if(!tmp1597)
    {
      tmp1599 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* evap.Cells[5].M_tot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1600 = stringAppend(MMC_REFSTRINGLIT(tmp1598),tmp1599);
      {
        const char* assert_cond = "(evap.Cells[5].M_tot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1600));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/vendor/ThermoCycle-library/ThermoCycle/Components/FluidFlow/Pipes/Cell1Dim.mo",111,3,111,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1600));
        }
      }
      tmp1601 = 1;
    }
  }
  threadData->lastEquationSolved = 2081;
}

/*
equation index: 2082
type: ALGORITHM

  assert(m_dot_kg_s >= -1e5 and m_dot_kg_s <= 1e5, "Variable violating min/max constraint: -1e5 <= m_dot_kg_s <= 1e5, has value: " + String(m_dot_kg_s, "g"));
*/
void RefrigerationTrainer_ClosedLoopM1e_eqFunction_2082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2082};
  modelica_boolean tmp1602;
  modelica_boolean tmp1603;
  static const MMC_DEFSTRINGLIT(tmp1604,77,"Variable violating min/max constraint: -1e5 <= m_dot_kg_s <= 1e5, has value: ");
  modelica_string tmp1605;
  modelica_metatype tmpMeta1606;
  static int tmp1607 = 0;
  if(!tmp1607)
  {
    tmp1602 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* m_dot_kg_s variable */),-1e5);
    tmp1603 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* m_dot_kg_s variable */),1e5);
    if(!(tmp1602 && tmp1603))
    {
      tmp1605 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* m_dot_kg_s variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1606 = stringAppend(MMC_REFSTRINGLIT(tmp1604),tmp1605);
      {
        const char* assert_cond = "(m_dot_kg_s >= -1e5 and m_dot_kg_s <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/ClosedLoopM1e.mo",89,3,89,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1606));
        } else {
          FILE_INFO info = {"C:/Users/silam/OneDrive/Documents/CONDENSING UNIT/modelica/RefrigerationTrainer/ClosedLoopM1e.mo",89,3,89,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1606));
        }
      }
      tmp1607 = 1;
    }
  }
  threadData->lastEquationSolved = 2082;
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int RefrigerationTrainer_ClosedLoopM1e_checkForAsserts(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[270])(DATA*, threadData_t*) = {
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1813,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1814,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1815,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1816,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1817,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1818,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1819,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1820,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1821,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1822,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1823,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1824,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1825,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1826,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1827,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1828,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1829,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1830,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1831,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1832,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1833,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1834,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1835,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1836,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1837,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1838,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1839,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1840,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1841,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1842,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1843,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1844,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1845,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1846,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1847,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1848,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1849,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1850,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1851,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1852,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1853,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1854,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1855,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1856,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1857,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1858,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1859,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1860,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1861,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1862,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1863,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1864,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1865,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1866,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1867,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1868,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1869,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1870,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1871,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1872,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1873,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1874,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1875,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1876,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1877,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1878,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1879,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1880,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1881,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1882,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1883,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1884,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1885,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1886,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1887,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1888,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1889,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1890,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1891,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1892,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1893,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1894,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1895,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1896,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1897,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1898,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1899,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1900,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1901,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1902,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1903,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1904,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1905,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1906,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1907,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1908,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1909,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1910,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1911,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1912,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1913,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1914,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1915,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1916,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1917,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1918,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1919,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1920,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1921,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1922,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1923,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1924,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1925,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1926,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1927,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1928,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1929,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1930,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1931,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1932,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1933,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1934,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1935,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1936,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1937,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1938,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1939,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1940,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1941,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1942,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1943,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1944,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1945,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1946,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1947,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1948,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1949,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1950,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1951,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1952,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1953,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1954,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1955,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1956,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1957,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1958,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1959,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1960,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1961,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1962,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1963,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1964,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1965,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1966,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1967,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1968,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1969,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1970,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1971,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1972,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1973,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1974,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1975,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1976,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1977,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1978,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1979,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1980,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1981,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1982,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1983,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1984,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1985,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1986,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1987,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1988,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1989,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1990,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1991,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1992,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1993,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1994,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1995,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1996,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1997,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1998,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_1999,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2000,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2001,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2002,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2003,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2004,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2005,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2006,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2007,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2008,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2009,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2010,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2011,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2012,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2013,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2014,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2015,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2016,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2017,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2018,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2019,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2020,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2021,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2022,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2023,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2024,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2025,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2026,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2027,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2028,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2029,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2030,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2031,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2032,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2033,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2034,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2035,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2036,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2037,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2038,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2039,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2040,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2041,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2042,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2043,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2044,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2045,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2046,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2047,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2048,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2049,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2050,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2051,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2052,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2053,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2054,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2055,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2056,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2057,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2058,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2059,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2060,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2061,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2062,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2063,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2064,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2065,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2066,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2067,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2068,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2069,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2070,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2071,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2072,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2073,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2074,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2075,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2076,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2077,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2078,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2079,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2080,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2081,
    RefrigerationTrainer_ClosedLoopM1e_eqFunction_2082
  };
  
  for (int id = 0; id < 270; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
