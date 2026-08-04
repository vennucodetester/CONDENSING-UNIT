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
#define RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_NLSJac1 0
int RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac1_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianNLSJac1(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1e_JacNLSJac1_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_NLSJac2 1
int RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac2_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianNLSJac2(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1e_JacNLSJac2_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_NLSJac4 2
int RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac4_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianNLSJac4(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1e_JacNLSJac4_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_NLSJac5 3
int RefrigerationTrainer_ClosedLoopM1e_functionJacNLSJac5_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianNLSJac5(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1e_JacNLSJac5_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_ADJ 4
int RefrigerationTrainer_ClosedLoopM1e_functionJacADJ_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianADJ(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1e_JacADJ_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_H 5
int RefrigerationTrainer_ClosedLoopM1e_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1e_JacH_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_F 6
int RefrigerationTrainer_ClosedLoopM1e_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1e_JacF_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_D 7
int RefrigerationTrainer_ClosedLoopM1e_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1e_JacD_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_C 8
int RefrigerationTrainer_ClosedLoopM1e_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1e_JacC_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_B 9
int RefrigerationTrainer_ClosedLoopM1e_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1e_JacB_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define RefrigerationTrainer_ClosedLoopM1e_INDEX_JAC_A 10
int RefrigerationTrainer_ClosedLoopM1e_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int RefrigerationTrainer_ClosedLoopM1e_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void RefrigerationTrainer_ClosedLoopM1e_JacA_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);

#if defined(__cplusplus)
}
#endif
