/* Jacobians */
static _index_t one_dim[1] = { 1 };
static modelica_real nominal_data[1] = { 1.0 };
static modelica_real start_data[1]   = { 0.0 };
static modelica_real min_data[1]   = { -DBL_MAX };
static modelica_real max_data[1]   = { DBL_MAX };
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = {
  .unit = NULL,
  .displayUnit = NULL,
  .min = {
    .ndims     = 1,
    .dim_size  = one_dim,
    .data      = (void*) min_data,
    .flexible  = FALSE
  },
  .max = {
    .ndims     = 1,
    .dim_size  = one_dim,
    .data      = (void*) max_data,
    .flexible  = FALSE
  },
  .fixed = FALSE,
  .useNominal = FALSE,
  .nominal = {
    .ndims     = 1,
    .dim_size  = one_dim,
    .data      = (void*) nominal_data,
    .flexible  = FALSE
  },
  .start = {
    .ndims     = 1,
    .dim_size  = one_dim,
    .data      = (void*) start_data,
    .flexible  = FALSE
  }
};

#if defined(__cplusplus)
extern "C" {
#endif

/* Jacobian Variables */
#define RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_LSJac1 0
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac1_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianLSJac1(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1eCS_JacLSJac1_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_LSJac2 1
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac2_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianLSJac2(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1eCS_JacLSJac2_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_NLSJac3 2
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac3_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianNLSJac3(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1eCS_JacNLSJac3_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_NLSJac4 3
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac4_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianNLSJac4(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1eCS_JacNLSJac4_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_LSJac6 4
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac6_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianLSJac6(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1eCS_JacLSJac6_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_NLSJac7 5
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac7_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianNLSJac7(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1eCS_JacNLSJac7_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_LSJac8 6
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacLSJac8_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianLSJac8(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1eCS_JacLSJac8_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_NLSJac9 7
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacNLSJac9_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianNLSJac9(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1eCS_JacNLSJac9_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_ADJ 8
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacADJ_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianADJ(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1eCS_JacADJ_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_H 9
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1eCS_JacH_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_F 10
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1eCS_JacF_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_D 11
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1eCS_JacD_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_C 12
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1eCS_JacC_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_B 13
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1eCS_JacB_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1eCS_INDEX_JAC_A 14
int RefrigerationTrainer_ClosedLoopM1eCS_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1eCS_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1eCS_JacA_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);

#if defined(__cplusplus)
}
#endif
