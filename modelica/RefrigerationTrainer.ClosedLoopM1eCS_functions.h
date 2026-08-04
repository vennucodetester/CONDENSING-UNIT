#ifndef RefrigerationTrainer_ClosedLoopM1eCS__H
#define RefrigerationTrainer_ClosedLoopM1eCS__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  modelica_real _Tsat;
  modelica_real _dTp;
  modelica_real _ddldp;
  modelica_real _ddvdp;
  modelica_real _dhldp;
  modelica_real _dhvdp;
  modelica_real _dl;
  modelica_real _dv;
  modelica_real _hl;
  modelica_real _hv;
  modelica_real _psat;
  modelica_real _sigma;
  modelica_real _sl;
  modelica_real _sv;
} RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties;
typedef struct {
  double _Tsat;
  double _dTp;
  double _ddldp;
  double _ddvdp;
  double _dhldp;
  double _dhvdp;
  double _dl;
  double _dv;
  double _hl;
  double _hv;
  double _psat;
  double _sigma;
  double _sl;
  double _sv;
} RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_external;
extern struct record_description RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties__desc;

void RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_construct_p(threadData_t *threadData, void* v_ths );
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_construct(td, ths ) RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_construct_p(td, &ths )
void RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_copy_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_copy(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_copy_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_copy_to_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_copy_to_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_copy_to_external_p(&src, &dst)
void RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_copy_from_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_copy_from_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_copy_from_external_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_Tsat, modelica_real in_dTp, modelica_real in_ddldp, modelica_real in_ddvdp, modelica_real in_dhldp, modelica_real in_dhvdp, modelica_real in_dl, modelica_real in_dv, modelica_real in_hl, modelica_real in_hv, modelica_real in_psat, modelica_real in_sigma, modelica_real in_sl, modelica_real in_sv);
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_wrap_vars(td, dst , in_Tsat, in_dTp, in_ddldp, in_ddvdp, in_dhldp, in_dhvdp, in_dl, in_dv, in_hl, in_hv, in_psat, in_sigma, in_sl, in_sv) RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_wrap_vars_p(td, &dst , in_Tsat, in_dTp, in_ddldp, in_ddvdp, in_dhldp, in_dhvdp, in_dl, in_dv, in_hl, in_hv, in_psat, in_sigma, in_sl, in_sv)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_copy_to_vars_p(void* v_src , modelica_real* in_Tsat, modelica_real* in_dTp, modelica_real* in_ddldp, modelica_real* in_ddvdp, modelica_real* in_dhldp, modelica_real* in_dhvdp, modelica_real* in_dl, modelica_real* in_dv, modelica_real* in_hl, modelica_real* in_hv, modelica_real* in_psat, modelica_real* in_sigma, modelica_real* in_sl, modelica_real* in_sv);
// #define RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_copy_to_vars(src,...) RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_array;
#define alloc_RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_array(dst,ndims,...) generic_array_create(NULL, dst, RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_construct_p, ndims, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties), __VA_ARGS__)
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties))
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties))
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_array_get(src,ndims,...)   (*(RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties*)(generic_array_get(&src, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties), __VA_ARGS__)))
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_set(dst,val,...)           generic_array_set(&dst, &val, RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties), __VA_ARGS__)

typedef struct {
  modelica_real _T;
  modelica_real _a;
  modelica_real _beta;
  modelica_real _cp;
  modelica_real _cv;
  modelica_real _d;
  modelica_real _ddhp;
  modelica_real _ddph;
  modelica_real _eta;
  modelica_real _h;
  modelica_real _kappa;
  modelica_real _lambda;
  modelica_real _p;
  modelica_integer _phase;
  modelica_real _s;
} RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState;
typedef struct {
  double _T;
  double _a;
  double _beta;
  double _cp;
  double _cv;
  double _d;
  double _ddhp;
  double _ddph;
  double _eta;
  double _h;
  double _kappa;
  double _lambda;
  double _p;
  int _phase;
  double _s;
} RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_external;
extern struct record_description RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState__desc;

void RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_construct(td, ths ) RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_construct_p(td, &ths )
void RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_copy(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_copy_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_copy_to_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_copy_to_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_copy_to_external_p(&src, &dst)
void RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_copy_from_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_copy_from_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_copy_from_external_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_T, modelica_real in_a, modelica_real in_beta, modelica_real in_cp, modelica_real in_cv, modelica_real in_d, modelica_real in_ddhp, modelica_real in_ddph, modelica_real in_eta, modelica_real in_h, modelica_real in_kappa, modelica_real in_lambda, modelica_real in_p, modelica_integer in_phase, modelica_real in_s);
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_wrap_vars(td, dst , in_T, in_a, in_beta, in_cp, in_cv, in_d, in_ddhp, in_ddph, in_eta, in_h, in_kappa, in_lambda, in_p, in_phase, in_s) RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_wrap_vars_p(td, &dst , in_T, in_a, in_beta, in_cp, in_cv, in_d, in_ddhp, in_ddph, in_eta, in_h, in_kappa, in_lambda, in_p, in_phase, in_s)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_T, modelica_real* in_a, modelica_real* in_beta, modelica_real* in_cp, modelica_real* in_cv, modelica_real* in_d, modelica_real* in_ddhp, modelica_real* in_ddph, modelica_real* in_eta, modelica_real* in_h, modelica_real* in_kappa, modelica_real* in_lambda, modelica_real* in_p, modelica_integer* in_phase, modelica_real* in_s);
// #define RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_copy_to_vars(src,...) RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_array;
#define alloc_RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_construct_p, ndims, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState), __VA_ARGS__)
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState))
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState))
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_array_get(src,ndims,...)   (*(RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState*)(generic_array_get(&src, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState), __VA_ARGS__)))
#define RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState), __VA_ARGS__)

typedef RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties;
typedef RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_external RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_external;
extern struct record_description RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties__desc;

void RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_construct_p(threadData_t *threadData, void* v_ths );
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_construct(td, ths ) RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_construct_p(td, &ths )
void RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_copy_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_copy(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_copy_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_copy_to_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_copy_to_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_copy_to_external_p(&src, &dst)
void RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_copy_from_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_copy_from_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_copy_from_external_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_Tsat, modelica_real in_dTp, modelica_real in_ddldp, modelica_real in_ddvdp, modelica_real in_dhldp, modelica_real in_dhvdp, modelica_real in_dl, modelica_real in_dv, modelica_real in_hl, modelica_real in_hv, modelica_real in_psat, modelica_real in_sigma, modelica_real in_sl, modelica_real in_sv);
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_wrap_vars(td, dst , in_Tsat, in_dTp, in_ddldp, in_ddvdp, in_dhldp, in_dhvdp, in_dl, in_dv, in_hl, in_hv, in_psat, in_sigma, in_sl, in_sv) RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_wrap_vars_p(td, &dst , in_Tsat, in_dTp, in_ddldp, in_ddvdp, in_dhldp, in_dhvdp, in_dl, in_dv, in_hl, in_hv, in_psat, in_sigma, in_sl, in_sv)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_copy_to_vars_p(void* v_src , modelica_real* in_Tsat, modelica_real* in_dTp, modelica_real* in_ddldp, modelica_real* in_ddvdp, modelica_real* in_dhldp, modelica_real* in_dhvdp, modelica_real* in_dl, modelica_real* in_dv, modelica_real* in_hl, modelica_real* in_hv, modelica_real* in_psat, modelica_real* in_sigma, modelica_real* in_sl, modelica_real* in_sv);
// #define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_copy_to_vars(src,...) RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_array;
#define alloc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_array(dst,ndims,...) generic_array_create(NULL, dst, RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_construct_p, ndims, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties), __VA_ARGS__)
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties))
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties))
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_array_get(src,ndims,...)   (*(RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties*)(generic_array_get(&src, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties), __VA_ARGS__)))
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_set(dst,val,...)           generic_array_set(&dst, &val, RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties), __VA_ARGS__)

typedef RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties;
typedef RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_external RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_external;
extern struct record_description RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties__desc;

void RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_construct_p(threadData_t *threadData, void* v_ths );
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_construct(td, ths ) RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_construct_p(td, &ths )
void RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_copy_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_copy(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_copy_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_copy_to_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_copy_to_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_copy_to_external_p(&src, &dst)
void RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_copy_from_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_copy_from_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_copy_from_external_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_Tsat, modelica_real in_dTp, modelica_real in_ddldp, modelica_real in_ddvdp, modelica_real in_dhldp, modelica_real in_dhvdp, modelica_real in_dl, modelica_real in_dv, modelica_real in_hl, modelica_real in_hv, modelica_real in_psat, modelica_real in_sigma, modelica_real in_sl, modelica_real in_sv);
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_wrap_vars(td, dst , in_Tsat, in_dTp, in_ddldp, in_ddvdp, in_dhldp, in_dhvdp, in_dl, in_dv, in_hl, in_hv, in_psat, in_sigma, in_sl, in_sv) RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_wrap_vars_p(td, &dst , in_Tsat, in_dTp, in_ddldp, in_ddvdp, in_dhldp, in_dhvdp, in_dl, in_dv, in_hl, in_hv, in_psat, in_sigma, in_sl, in_sv)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_copy_to_vars_p(void* v_src , modelica_real* in_Tsat, modelica_real* in_dTp, modelica_real* in_ddldp, modelica_real* in_ddvdp, modelica_real* in_dhldp, modelica_real* in_dhvdp, modelica_real* in_dl, modelica_real* in_dv, modelica_real* in_hl, modelica_real* in_hv, modelica_real* in_psat, modelica_real* in_sigma, modelica_real* in_sl, modelica_real* in_sv);
// #define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_copy_to_vars(src,...) RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_array;
#define alloc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_array(dst,ndims,...) generic_array_create(NULL, dst, RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_construct_p, ndims, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties), __VA_ARGS__)
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties))
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties))
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_array_get(src,ndims,...)   (*(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties*)(generic_array_get(&src, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties), __VA_ARGS__)))
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_set(dst,val,...)           generic_array_set(&dst, &val, RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties), __VA_ARGS__)

typedef RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties;
typedef RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_external RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_external;
extern struct record_description RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties__desc;

void RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_construct_p(threadData_t *threadData, void* v_ths );
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_construct(td, ths ) RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_construct_p(td, &ths )
void RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_copy_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_copy(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_copy_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_copy_to_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_copy_to_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_copy_to_external_p(&src, &dst)
void RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_copy_from_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_copy_from_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_copy_from_external_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_Tsat, modelica_real in_dTp, modelica_real in_ddldp, modelica_real in_ddvdp, modelica_real in_dhldp, modelica_real in_dhvdp, modelica_real in_dl, modelica_real in_dv, modelica_real in_hl, modelica_real in_hv, modelica_real in_psat, modelica_real in_sigma, modelica_real in_sl, modelica_real in_sv);
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_wrap_vars(td, dst , in_Tsat, in_dTp, in_ddldp, in_ddvdp, in_dhldp, in_dhvdp, in_dl, in_dv, in_hl, in_hv, in_psat, in_sigma, in_sl, in_sv) RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_wrap_vars_p(td, &dst , in_Tsat, in_dTp, in_ddldp, in_ddvdp, in_dhldp, in_dhvdp, in_dl, in_dv, in_hl, in_hv, in_psat, in_sigma, in_sl, in_sv)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_copy_to_vars_p(void* v_src , modelica_real* in_Tsat, modelica_real* in_dTp, modelica_real* in_ddldp, modelica_real* in_ddvdp, modelica_real* in_dhldp, modelica_real* in_dhvdp, modelica_real* in_dl, modelica_real* in_dv, modelica_real* in_hl, modelica_real* in_hv, modelica_real* in_psat, modelica_real* in_sigma, modelica_real* in_sl, modelica_real* in_sv);
// #define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_copy_to_vars(src,...) RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_array;
#define alloc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_array(dst,ndims,...) generic_array_create(NULL, dst, RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_construct_p, ndims, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties), __VA_ARGS__)
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties))
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties))
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_array_get(src,ndims,...)   (*(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties*)(generic_array_get(&src, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties), __VA_ARGS__)))
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_set(dst,val,...)           generic_array_set(&dst, &val, RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties), __VA_ARGS__)

typedef RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState;
typedef RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_external RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_external;
extern struct record_description RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState__desc;

void RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_construct(td, ths ) RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_construct_p(td, &ths )
void RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_copy(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_copy_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_copy_to_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_copy_to_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_copy_to_external_p(&src, &dst)
void RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_copy_from_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_copy_from_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_copy_from_external_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_T, modelica_real in_a, modelica_real in_beta, modelica_real in_cp, modelica_real in_cv, modelica_real in_d, modelica_real in_ddhp, modelica_real in_ddph, modelica_real in_eta, modelica_real in_h, modelica_real in_kappa, modelica_real in_lambda, modelica_real in_p, modelica_integer in_phase, modelica_real in_s);
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_wrap_vars(td, dst , in_T, in_a, in_beta, in_cp, in_cv, in_d, in_ddhp, in_ddph, in_eta, in_h, in_kappa, in_lambda, in_p, in_phase, in_s) RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_T, in_a, in_beta, in_cp, in_cv, in_d, in_ddhp, in_ddph, in_eta, in_h, in_kappa, in_lambda, in_p, in_phase, in_s)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_T, modelica_real* in_a, modelica_real* in_beta, modelica_real* in_cp, modelica_real* in_cv, modelica_real* in_d, modelica_real* in_ddhp, modelica_real* in_ddph, modelica_real* in_eta, modelica_real* in_h, modelica_real* in_kappa, modelica_real* in_lambda, modelica_real* in_p, modelica_integer* in_phase, modelica_real* in_s);
// #define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_copy_to_vars(src,...) RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_array;
#define alloc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_construct_p, ndims, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState), __VA_ARGS__)
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState))
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState))
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState), __VA_ARGS__)))
#define RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState), __VA_ARGS__)

typedef RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState;
typedef RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_external RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_external;
extern struct record_description RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState__desc;

void RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_construct(td, ths ) RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_construct_p(td, &ths )
void RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_copy(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_copy_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_copy_to_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_copy_to_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_copy_to_external_p(&src, &dst)
void RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_copy_from_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_copy_from_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_copy_from_external_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_T, modelica_real in_a, modelica_real in_beta, modelica_real in_cp, modelica_real in_cv, modelica_real in_d, modelica_real in_ddhp, modelica_real in_ddph, modelica_real in_eta, modelica_real in_h, modelica_real in_kappa, modelica_real in_lambda, modelica_real in_p, modelica_integer in_phase, modelica_real in_s);
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_wrap_vars(td, dst , in_T, in_a, in_beta, in_cp, in_cv, in_d, in_ddhp, in_ddph, in_eta, in_h, in_kappa, in_lambda, in_p, in_phase, in_s) RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_T, in_a, in_beta, in_cp, in_cv, in_d, in_ddhp, in_ddph, in_eta, in_h, in_kappa, in_lambda, in_p, in_phase, in_s)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_T, modelica_real* in_a, modelica_real* in_beta, modelica_real* in_cp, modelica_real* in_cv, modelica_real* in_d, modelica_real* in_ddhp, modelica_real* in_ddph, modelica_real* in_eta, modelica_real* in_h, modelica_real* in_kappa, modelica_real* in_lambda, modelica_real* in_p, modelica_integer* in_phase, modelica_real* in_s);
// #define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_copy_to_vars(src,...) RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_array;
#define alloc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_construct_p, ndims, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState), __VA_ARGS__)
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState))
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState))
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState), __VA_ARGS__)))
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState), __VA_ARGS__)

typedef RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState;
extern struct record_description RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState__desc;

void RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_construct(td, ths ) RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_construct_p(td, &ths )
void RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_copy(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_copy_p(&src, &dst)


void RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_T, modelica_real in_a, modelica_real in_beta, modelica_real in_cp, modelica_real in_cv, modelica_real in_d, modelica_real in_ddhp, modelica_real in_ddph, modelica_real in_eta, modelica_real in_h, modelica_real in_kappa, modelica_real in_lambda, modelica_real in_p, modelica_integer in_phase, modelica_real in_s);
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_wrap_vars(td, dst , in_T, in_a, in_beta, in_cp, in_cv, in_d, in_ddhp, in_ddph, in_eta, in_h, in_kappa, in_lambda, in_p, in_phase, in_s) RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_T, in_a, in_beta, in_cp, in_cv, in_d, in_ddhp, in_ddph, in_eta, in_h, in_kappa, in_lambda, in_p, in_phase, in_s)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_T, modelica_real* in_a, modelica_real* in_beta, modelica_real* in_cp, modelica_real* in_cv, modelica_real* in_d, modelica_real* in_ddhp, modelica_real* in_ddph, modelica_real* in_eta, modelica_real* in_h, modelica_real* in_kappa, modelica_real* in_lambda, modelica_real* in_p, modelica_integer* in_phase, modelica_real* in_s);
// #define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_copy_to_vars(src,...) RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_array;
#define alloc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_construct_p, ndims, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState))
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState))
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)))
#define RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)

typedef RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState;
typedef RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_external RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_external;
extern struct record_description RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState__desc;

void RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_construct(td, ths ) RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_construct_p(td, &ths )
void RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_copy(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_copy_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_copy_to_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_copy_to_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_copy_to_external_p(&src, &dst)
void RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_copy_from_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_copy_from_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_copy_from_external_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_T, modelica_real in_a, modelica_real in_beta, modelica_real in_cp, modelica_real in_cv, modelica_real in_d, modelica_real in_ddhp, modelica_real in_ddph, modelica_real in_eta, modelica_real in_h, modelica_real in_kappa, modelica_real in_lambda, modelica_real in_p, modelica_integer in_phase, modelica_real in_s);
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_wrap_vars(td, dst , in_T, in_a, in_beta, in_cp, in_cv, in_d, in_ddhp, in_ddph, in_eta, in_h, in_kappa, in_lambda, in_p, in_phase, in_s) RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_T, in_a, in_beta, in_cp, in_cv, in_d, in_ddhp, in_ddph, in_eta, in_h, in_kappa, in_lambda, in_p, in_phase, in_s)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_T, modelica_real* in_a, modelica_real* in_beta, modelica_real* in_cp, modelica_real* in_cv, modelica_real* in_d, modelica_real* in_ddhp, modelica_real* in_ddph, modelica_real* in_eta, modelica_real* in_h, modelica_real* in_kappa, modelica_real* in_lambda, modelica_real* in_p, modelica_integer* in_phase, modelica_real* in_s);
// #define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_copy_to_vars(src,...) RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_array;
#define alloc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_construct_p, ndims, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState), __VA_ARGS__)
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState))
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState))
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState), __VA_ARGS__)))
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState), __VA_ARGS__)

typedef RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState;
extern struct record_description RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState__desc;

void RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_construct(td, ths ) RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_construct_p(td, &ths )
void RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_copy(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_copy_p(&src, &dst)


void RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_T, modelica_real in_a, modelica_real in_beta, modelica_real in_cp, modelica_real in_cv, modelica_real in_d, modelica_real in_ddhp, modelica_real in_ddph, modelica_real in_eta, modelica_real in_h, modelica_real in_kappa, modelica_real in_lambda, modelica_real in_p, modelica_integer in_phase, modelica_real in_s);
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_wrap_vars(td, dst , in_T, in_a, in_beta, in_cp, in_cv, in_d, in_ddhp, in_ddph, in_eta, in_h, in_kappa, in_lambda, in_p, in_phase, in_s) RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_T, in_a, in_beta, in_cp, in_cv, in_d, in_ddhp, in_ddph, in_eta, in_h, in_kappa, in_lambda, in_p, in_phase, in_s)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_T, modelica_real* in_a, modelica_real* in_beta, modelica_real* in_cp, modelica_real* in_cv, modelica_real* in_d, modelica_real* in_ddhp, modelica_real* in_ddph, modelica_real* in_eta, modelica_real* in_h, modelica_real* in_kappa, modelica_real* in_lambda, modelica_real* in_p, modelica_integer* in_phase, modelica_real* in_s);
// #define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_copy_to_vars(src,...) RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_array;
#define alloc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_construct_p, ndims, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState))
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState))
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)))
#define RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)

typedef RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState;
typedef RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_external RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_external;
extern struct record_description RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState__desc;

void RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_construct(td, ths ) RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_construct_p(td, &ths )
void RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_copy(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_copy_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_copy_to_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_copy_to_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_copy_to_external_p(&src, &dst)
void RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_copy_from_external_p(void* v_src, void* v_dst);
#define RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_copy_from_external(src,dst) RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_copy_from_external_p(&src, &dst)

void RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_T, modelica_real in_a, modelica_real in_beta, modelica_real in_cp, modelica_real in_cv, modelica_real in_d, modelica_real in_ddhp, modelica_real in_ddph, modelica_real in_eta, modelica_real in_h, modelica_real in_kappa, modelica_real in_lambda, modelica_real in_p, modelica_integer in_phase, modelica_real in_s);
#define RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_wrap_vars(td, dst , in_T, in_a, in_beta, in_cp, in_cv, in_d, in_ddhp, in_ddph, in_eta, in_h, in_kappa, in_lambda, in_p, in_phase, in_s) RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_T, in_a, in_beta, in_cp, in_cv, in_d, in_ddhp, in_ddph, in_eta, in_h, in_kappa, in_lambda, in_p, in_phase, in_s)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_T, modelica_real* in_a, modelica_real* in_beta, modelica_real* in_cp, modelica_real* in_cv, modelica_real* in_d, modelica_real* in_ddhp, modelica_real* in_ddph, modelica_real* in_eta, modelica_real* in_h, modelica_real* in_kappa, modelica_real* in_lambda, modelica_real* in_p, modelica_integer* in_phase, modelica_real* in_s);
// #define RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_copy_to_vars(src,...) RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_array;
#define alloc_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_construct_p, ndims, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState), __VA_ARGS__)
#define RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState))
#define RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState))
#define RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState), __VA_ARGS__)))
#define RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_copy_p, sizeof(RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState), __VA_ARGS__)

DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties omc_RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties (threadData_t *threadData, modelica_real omc_Tsat, modelica_real omc_dTp, modelica_real omc_ddldp, modelica_real omc_ddvdp, modelica_real omc_dhldp, modelica_real omc_dhvdp, modelica_real omc_dl, modelica_real omc_dv, modelica_real omc_hl, modelica_real omc_hv, modelica_real omc_psat, modelica_real omc_sigma, modelica_real omc_sl, modelica_real omc_sv);

DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties(threadData_t *threadData, modelica_metatype _Tsat, modelica_metatype _dTp, modelica_metatype _ddldp, modelica_metatype _ddvdp, modelica_metatype _dhldp, modelica_metatype _dhvdp, modelica_metatype _dl, modelica_metatype _dv, modelica_metatype _hl, modelica_metatype _hv, modelica_metatype _psat, modelica_metatype _sigma, modelica_metatype _sl, modelica_metatype _sv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties)


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState (threadData_t *threadData, modelica_real omc_T, modelica_real omc_a, modelica_real omc_beta, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_d, modelica_real omc_ddhp, modelica_real omc_ddph, modelica_real omc_eta, modelica_real omc_h, modelica_real omc_kappa, modelica_real omc_lambda, modelica_real omc_p, modelica_integer omc_phase, modelica_real omc_s);

DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState(threadData_t *threadData, modelica_metatype _T, modelica_metatype _a, modelica_metatype _beta, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _d, modelica_metatype _ddhp, modelica_metatype _ddph, modelica_metatype _eta, modelica_metatype _h, modelica_metatype _kappa, modelica_metatype _lambda, modelica_metatype _p, modelica_metatype _phase, modelica_metatype _s);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState)


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties omc_RefrigerationTrainer_ClosedLoopM1eCS_Med_setSat__p(threadData_t *threadData, modelica_real _p);
DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_Med_setSat__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_Med_setSat__p,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_Med_setSat__p,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_Med_setSat__p MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_Med_setSat__p)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void TwoPhaseMedium_setSat_p_C_impl(double (*_p*), RefrigerationTrainer_ClosedLoopM1eCS_Med_SaturationProperties_external* (*_sat*), const char*, const char*, const char*);
 */


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1eCS_Med_setState__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase);
DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_Med_setState__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_Med_setState__ph,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_Med_setState__ph,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_Med_setState__ph MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_Med_setState__ph)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void TwoPhaseMedium_setState_ph_C_impl_wrap(double (*_p*), double (*_h*), int (*_phase*), RefrigerationTrainer_ClosedLoopM1eCS_Med_ThermodynamicState_external* (*_state*), const char*, const char*, const char*);
 */

DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties (threadData_t *threadData, modelica_real omc_Tsat, modelica_real omc_dTp, modelica_real omc_ddldp, modelica_real omc_ddvdp, modelica_real omc_dhldp, modelica_real omc_dhvdp, modelica_real omc_dl, modelica_real omc_dv, modelica_real omc_hl, modelica_real omc_hv, modelica_real omc_psat, modelica_real omc_sigma, modelica_real omc_sl, modelica_real omc_sv);

DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties(threadData_t *threadData, modelica_metatype _Tsat, modelica_metatype _dTp, modelica_metatype _ddldp, modelica_metatype _ddvdp, modelica_metatype _dhldp, modelica_metatype _dhvdp, modelica_metatype _dl, modelica_metatype _dv, modelica_metatype _hl, modelica_metatype _hv, modelica_metatype _psat, modelica_metatype _sigma, modelica_metatype _sl, modelica_metatype _sv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties)


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_T, modelica_real omc_a, modelica_real omc_beta, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_d, modelica_real omc_ddhp, modelica_real omc_ddph, modelica_real omc_eta, modelica_real omc_h, modelica_real omc_kappa, modelica_real omc_lambda, modelica_real omc_p, modelica_integer omc_phase, modelica_real omc_s);

DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _T, modelica_metatype _a, modelica_metatype _beta, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _d, modelica_metatype _ddhp, modelica_metatype _ddph, modelica_metatype _eta, modelica_metatype _h, modelica_metatype _kappa, modelica_metatype _lambda, modelica_metatype _p, modelica_metatype _phase, modelica_metatype _s);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState)


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setSat__p(threadData_t *threadData, modelica_real _p);
DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setSat__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setSat__p,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setSat__p,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setSat__p MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setSat__p)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void TwoPhaseMedium_setSat_p_C_impl(double (*_p*), RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_SaturationProperties_external* (*_sat*), const char*, const char*, const char*);
 */


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _phase);
DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _phase);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__pT,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__pT,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__pT MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__pT)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void TwoPhaseMedium_setState_pT_C_impl_wrap(double (*_p*), double (*_T*), RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_external* (*_state*), const char*, const char*, const char*);
 */


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase);
DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ph,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ph,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ph MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ph)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void TwoPhaseMedium_setState_ph_C_impl_wrap(double (*_p*), double (*_h*), int (*_phase*), RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_external* (*_state*), const char*, const char*, const char*);
 */


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ps(threadData_t *threadData, modelica_real _p, modelica_real _s, modelica_integer _phase);
DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ps(threadData_t *threadData, modelica_metatype _p, modelica_metatype _s, modelica_metatype _phase);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ps,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ps,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ps MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_setState__ps)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void TwoPhaseMedium_setState_ps_C_impl_wrap(double (*_p*), double (*_s*), int (*_phase*), RefrigerationTrainer_ClosedLoopM1eCS_comp_Medium_ThermodynamicState_external* (*_state*), const char*, const char*, const char*);
 */

DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties (threadData_t *threadData, modelica_real omc_Tsat, modelica_real omc_dTp, modelica_real omc_ddldp, modelica_real omc_ddvdp, modelica_real omc_dhldp, modelica_real omc_dhvdp, modelica_real omc_dl, modelica_real omc_dv, modelica_real omc_hl, modelica_real omc_hv, modelica_real omc_psat, modelica_real omc_sigma, modelica_real omc_sl, modelica_real omc_sv);

DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties(threadData_t *threadData, modelica_metatype _Tsat, modelica_metatype _dTp, modelica_metatype _ddldp, modelica_metatype _ddvdp, modelica_metatype _dhldp, modelica_metatype _dhvdp, modelica_metatype _dl, modelica_metatype _dv, modelica_metatype _hl, modelica_metatype _hv, modelica_metatype _psat, modelica_metatype _sigma, modelica_metatype _sl, modelica_metatype _sv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties)


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_T, modelica_real omc_a, modelica_real omc_beta, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_d, modelica_real omc_ddhp, modelica_real omc_ddph, modelica_real omc_eta, modelica_real omc_h, modelica_real omc_kappa, modelica_real omc_lambda, modelica_real omc_p, modelica_integer omc_phase, modelica_real omc_s);

DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _T, modelica_metatype _a, modelica_metatype _beta, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _d, modelica_metatype _ddhp, modelica_metatype _ddph, modelica_metatype _eta, modelica_metatype _h, modelica_metatype _kappa, modelica_metatype _lambda, modelica_metatype _p, modelica_metatype _phase, modelica_metatype _s);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState)


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setSat__p(threadData_t *threadData, modelica_real _p);
DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setSat__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setSat__p,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setSat__p,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setSat__p MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setSat__p)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void TwoPhaseMedium_setSat_p_C_impl(double (*_p*), RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_SaturationProperties_external* (*_sat*), const char*, const char*, const char*);
 */


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setState__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase);
DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setState__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setState__ph,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setState__ph,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setState__ph MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_setState__ph)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void TwoPhaseMedium_setState_ph_C_impl_wrap(double (*_p*), double (*_h*), int (*_phase*), RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_Medium_ThermodynamicState_external* (*_state*), const char*, const char*, const char*);
 */

DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_T, modelica_real omc_a, modelica_real omc_beta, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_d, modelica_real omc_ddhp, modelica_real omc_ddph, modelica_real omc_eta, modelica_real omc_h, modelica_real omc_kappa, modelica_real omc_lambda, modelica_real omc_p, modelica_integer omc_phase, modelica_real omc_s);

DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _T, modelica_metatype _a, modelica_metatype _beta, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _d, modelica_metatype _ddhp, modelica_metatype _ddph, modelica_metatype _eta, modelica_metatype _h, modelica_metatype _kappa, modelica_metatype _lambda, modelica_metatype _p, modelica_metatype _phase, modelica_metatype _s);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_cond_Cells_heatTransfer_Medium_ThermodynamicState)


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties (threadData_t *threadData, modelica_real omc_Tsat, modelica_real omc_dTp, modelica_real omc_ddldp, modelica_real omc_ddvdp, modelica_real omc_dhldp, modelica_real omc_dhvdp, modelica_real omc_dl, modelica_real omc_dv, modelica_real omc_hl, modelica_real omc_hv, modelica_real omc_psat, modelica_real omc_sigma, modelica_real omc_sl, modelica_real omc_sv);

DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties(threadData_t *threadData, modelica_metatype _Tsat, modelica_metatype _dTp, modelica_metatype _ddldp, modelica_metatype _ddvdp, modelica_metatype _dhldp, modelica_metatype _dhvdp, modelica_metatype _dl, modelica_metatype _dv, modelica_metatype _hl, modelica_metatype _hv, modelica_metatype _psat, modelica_metatype _sigma, modelica_metatype _sl, modelica_metatype _sv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties)


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_T, modelica_real omc_a, modelica_real omc_beta, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_d, modelica_real omc_ddhp, modelica_real omc_ddph, modelica_real omc_eta, modelica_real omc_h, modelica_real omc_kappa, modelica_real omc_lambda, modelica_real omc_p, modelica_integer omc_phase, modelica_real omc_s);

DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _T, modelica_metatype _a, modelica_metatype _beta, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _d, modelica_metatype _ddhp, modelica_metatype _ddph, modelica_metatype _eta, modelica_metatype _h, modelica_metatype _kappa, modelica_metatype _lambda, modelica_metatype _p, modelica_metatype _phase, modelica_metatype _s);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState)


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setSat__p(threadData_t *threadData, modelica_real _p);
DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setSat__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setSat__p,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setSat__p,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setSat__p MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setSat__p)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void TwoPhaseMedium_setSat_p_C_impl(double (*_p*), RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_SaturationProperties_external* (*_sat*), const char*, const char*, const char*);
 */


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setState__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase);
DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setState__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setState__ph,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setState__ph,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setState__ph MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_setState__ph)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void TwoPhaseMedium_setState_ph_C_impl_wrap(double (*_p*), double (*_h*), int (*_phase*), RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_Medium_ThermodynamicState_external* (*_state*), const char*, const char*, const char*);
 */

DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_T, modelica_real omc_a, modelica_real omc_beta, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_d, modelica_real omc_ddhp, modelica_real omc_ddph, modelica_real omc_eta, modelica_real omc_h, modelica_real omc_kappa, modelica_real omc_lambda, modelica_real omc_p, modelica_integer omc_phase, modelica_real omc_s);

DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _T, modelica_metatype _a, modelica_metatype _beta, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _d, modelica_metatype _ddhp, modelica_metatype _ddph, modelica_metatype _eta, modelica_metatype _h, modelica_metatype _kappa, modelica_metatype _lambda, modelica_metatype _p, modelica_metatype _phase, modelica_metatype _s);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_evap_Cells_heatTransfer_Medium_ThermodynamicState)


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_T, modelica_real omc_a, modelica_real omc_beta, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_d, modelica_real omc_ddhp, modelica_real omc_ddph, modelica_real omc_eta, modelica_real omc_h, modelica_real omc_kappa, modelica_real omc_lambda, modelica_real omc_p, modelica_integer omc_phase, modelica_real omc_s);

DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _T, modelica_metatype _a, modelica_metatype _beta, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _d, modelica_metatype _ddhp, modelica_metatype _ddph, modelica_metatype _eta, modelica_metatype _h, modelica_metatype _kappa, modelica_metatype _lambda, modelica_metatype _p, modelica_metatype _phase, modelica_metatype _s);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_density(threadData_t *threadData, RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_density,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_density,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_density)


DLLDirection
modelica_real omc_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_density__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_density__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_density__pTX,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_density__pTX,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_density__pTX MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_density__pTX)


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _phase);
DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _phase);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__pT,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__pT,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__pT MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__pT)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void TwoPhaseMedium_setState_pT_C_impl_wrap(double (*_p*), double (*_T*), RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_external* (*_state*), const char*, const char*, const char*);
 */


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X, modelica_integer _phase);
DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X, modelica_metatype _phase);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__pTX,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__pTX,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__pTX)


DLLDirection
RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase);
DLLDirection
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase);
static const MMC_DEFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__ph,2,0) {(void*) boxptr_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__ph,0}};
#define boxvar_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__ph MMC_REFSTRUCTLIT(boxvar_lit_RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_setState__ph)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void TwoPhaseMedium_setState_ph_C_impl_wrap(double (*_p*), double (*_h*), int (*_phase*), RefrigerationTrainer_ClosedLoopM1eCS_txv_Medium_ThermodynamicState_external* (*_state*), const char*, const char*, const char*);
 */
#include "RefrigerationTrainer.ClosedLoopM1eCS_model.h"


#ifdef __cplusplus
}
#endif
#endif
