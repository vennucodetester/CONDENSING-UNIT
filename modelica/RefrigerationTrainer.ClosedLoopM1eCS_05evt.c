/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "RefrigerationTrainer.ClosedLoopM1eCS_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void RefrigerationTrainer_ClosedLoopM1eCS_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *RefrigerationTrainer_ClosedLoopM1eCS_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"txv_opening_cmd >= 0.999 or txv_opening_cmd <= 0.051",
  "time > 0.0 and (comp.h_ex < 1e5 or comp.h_ex > comp.h_valid_max)",
  "time > 0.0 and (comp.h_su < 1e5 or comp.h_su > comp.h_valid_max)"};
  static const int occurEqs0[] = {1,1363};
  static const int occurEqs1[] = {1,798};
  static const int occurEqs2[] = {1,799};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
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

int RefrigerationTrainer_ClosedLoopM1eCS_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  static void (*const eqFunctions[185])(DATA*, threadData_t*) = {
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
    RefrigerationTrainer_ClosedLoopM1eCS_eqFunction_1378
  };
  
  for (int id = 0; id < 185; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

int RefrigerationTrainer_ClosedLoopM1eCS_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  const int *equationIndexes = NULL;

  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  start_index = current_index;
  tmp1 = 1.0;
  tmp2 = 0.999;
  tmp0 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* txv_opening_cmd STATE(1) */), 0.999, tmp1, tmp2, data->simulationInfo->storedRelations[0]);
  tmp4 = 1.0;
  tmp5 = 0.051;
  tmp3 = LessEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* txv_opening_cmd STATE(1) */), 0.051, tmp4, tmp5, data->simulationInfo->storedRelations[1]);
  gout[start_index] = ((tmp0 || tmp3)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp7 = 1.0;
  tmp8 = 0.0;
  tmp6 = GreaterZC(data->localData[0]->timeValue, 0.0, tmp7, tmp8, data->simulationInfo->storedRelations[2]);
  tmp10 = 1e6;
  tmp11 = 1e5;
  tmp9 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */), 1e5, tmp10, tmp11, data->simulationInfo->storedRelations[3]);
  tmp13 = 1e6;
  tmp14 = 1e6;
  tmp12 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* comp.h_valid_max PARAM */), tmp13, tmp14, data->simulationInfo->storedRelations[4]);
  gout[start_index] = ((tmp6 && (tmp9 || tmp12))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp16 = 1.0;
  tmp17 = 0.0;
  tmp15 = GreaterZC(data->localData[0]->timeValue, 0.0, tmp16, tmp17, data->simulationInfo->storedRelations[2]);
  tmp19 = 1e6;
  tmp20 = 1e5;
  tmp18 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */), 1e5, tmp19, tmp20, data->simulationInfo->storedRelations[5]);
  tmp22 = 1e6;
  tmp23 = 1e6;
  tmp21 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* comp.h_valid_max PARAM */), tmp22, tmp23, data->simulationInfo->storedRelations[6]);
  gout[start_index] = ((tmp15 && (tmp18 || tmp21))) ? 1 : -1;
  current_index++;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  return 0;
}

const char *RefrigerationTrainer_ClosedLoopM1eCS_relationDescription(int i)
{
  const char *res[] = {"txv_opening_cmd >= 0.999",
  "txv_opening_cmd <= 0.051",
  "time > 0.0",
  "comp.h_ex < 1e5",
  "comp.h_ex > comp.h_valid_max",
  "comp.h_su < 1e5",
  "comp.h_su > comp.h_valid_max"};
  return res[i];
}

int RefrigerationTrainer_ClosedLoopM1eCS_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  const int *equationIndexes = NULL;

  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_boolean tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
  if(evalforZeroCross) {
    start_index = current_index;
    tmp25 = 1.0;
    tmp26 = 0.999;
    tmp24 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* txv_opening_cmd STATE(1) */), 0.999, tmp25, tmp26, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[start_index] = tmp24;
    current_index++;

    start_index = current_index;
    tmp28 = 1.0;
    tmp29 = 0.051;
    tmp27 = LessEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* txv_opening_cmd STATE(1) */), 0.051, tmp28, tmp29, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[start_index] = tmp27;
    current_index++;

    start_index = current_index;
    tmp31 = 1.0;
    tmp32 = 0.0;
    tmp30 = GreaterZC(data->localData[0]->timeValue, 0.0, tmp31, tmp32, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[start_index] = tmp30;
    current_index++;

    start_index = current_index;
    tmp34 = 1e6;
    tmp35 = 1e5;
    tmp33 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */), 1e5, tmp34, tmp35, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[start_index] = tmp33;
    current_index++;

    start_index = current_index;
    tmp37 = 1e6;
    tmp38 = 1e6;
    tmp36 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* comp.h_valid_max PARAM */), tmp37, tmp38, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[start_index] = tmp36;
    current_index++;

    start_index = current_index;
    tmp40 = 1e6;
    tmp41 = 1e5;
    tmp39 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */), 1e5, tmp40, tmp41, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[start_index] = tmp39;
    current_index++;

    start_index = current_index;
    tmp43 = 1e6;
    tmp44 = 1e6;
    tmp42 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* comp.h_valid_max PARAM */), tmp43, tmp44, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[start_index] = tmp42;
    current_index++;
  } else {
    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* txv_opening_cmd STATE(1) */) >= 0.999);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* txv_opening_cmd STATE(1) */) <= 0.051);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */) < 1e5);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* comp.h_ex variable */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* comp.h_valid_max PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */) < 1e5);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* comp.h_su variable */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* comp.h_valid_max PARAM */));
    current_index++;
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
