#include "omc_simulation_settings.h"
#include "RefrigerationTrainer.ClosedLoopM1e_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "RefrigerationTrainer.ClosedLoopM1e_includes.h"


RefrigerationTrainer_ClosedLoopM1e_Med_SaturationProperties omc_RefrigerationTrainer_ClosedLoopM1e_Med_SaturationProperties(threadData_t *threadData, modelica_real omc_Tsat, modelica_real omc_dTp, modelica_real omc_ddldp, modelica_real omc_ddvdp, modelica_real omc_dhldp, modelica_real omc_dhvdp, modelica_real omc_dl, modelica_real omc_dv, modelica_real omc_hl, modelica_real omc_hv, modelica_real omc_psat, modelica_real omc_sigma, modelica_real omc_sl, modelica_real omc_sv)
{
  RefrigerationTrainer_ClosedLoopM1e_Med_SaturationProperties tmp1;
  tmp1._Tsat = omc_Tsat;
  tmp1._dTp = omc_dTp;
  tmp1._ddldp = omc_ddldp;
  tmp1._ddvdp = omc_ddvdp;
  tmp1._dhldp = omc_dhldp;
  tmp1._dhvdp = omc_dhvdp;
  tmp1._dl = omc_dl;
  tmp1._dv = omc_dv;
  tmp1._hl = omc_hl;
  tmp1._hv = omc_hv;
  tmp1._psat = omc_psat;
  tmp1._sigma = omc_sigma;
  tmp1._sl = omc_sl;
  tmp1._sv = omc_sv;
  return tmp1;
}

modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_Med_SaturationProperties(threadData_t *threadData, modelica_metatype _Tsat, modelica_metatype _dTp, modelica_metatype _ddldp, modelica_metatype _ddvdp, modelica_metatype _dhldp, modelica_metatype _dhvdp, modelica_metatype _dl, modelica_metatype _dv, modelica_metatype _hl, modelica_metatype _hv, modelica_metatype _psat, modelica_metatype _sigma, modelica_metatype _sl, modelica_metatype _sv)
{
  return mmc_mk_box15(3, &RefrigerationTrainer_ClosedLoopM1e_Med_SaturationProperties__desc, _Tsat, _dTp, _ddldp, _ddvdp, _dhldp, _dhvdp, _dl, _dv, _hl, _hv, _psat, _sigma, _sl, _sv);
}

RefrigerationTrainer_ClosedLoopM1e_Med_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1e_Med_ThermodynamicState(threadData_t *threadData, modelica_real omc_T, modelica_real omc_a, modelica_real omc_beta, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_d, modelica_real omc_ddhp, modelica_real omc_ddph, modelica_real omc_eta, modelica_real omc_h, modelica_real omc_kappa, modelica_real omc_lambda, modelica_real omc_p, modelica_integer omc_phase, modelica_real omc_s)
{
  RefrigerationTrainer_ClosedLoopM1e_Med_ThermodynamicState tmp1;
  tmp1._T = omc_T;
  tmp1._a = omc_a;
  tmp1._beta = omc_beta;
  tmp1._cp = omc_cp;
  tmp1._cv = omc_cv;
  tmp1._d = omc_d;
  tmp1._ddhp = omc_ddhp;
  tmp1._ddph = omc_ddph;
  tmp1._eta = omc_eta;
  tmp1._h = omc_h;
  tmp1._kappa = omc_kappa;
  tmp1._lambda = omc_lambda;
  tmp1._p = omc_p;
  tmp1._phase = omc_phase;
  tmp1._s = omc_s;
  return tmp1;
}

modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_Med_ThermodynamicState(threadData_t *threadData, modelica_metatype _T, modelica_metatype _a, modelica_metatype _beta, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _d, modelica_metatype _ddhp, modelica_metatype _ddph, modelica_metatype _eta, modelica_metatype _h, modelica_metatype _kappa, modelica_metatype _lambda, modelica_metatype _p, modelica_metatype _phase, modelica_metatype _s)
{
  return mmc_mk_box16(3, &RefrigerationTrainer_ClosedLoopM1e_Med_ThermodynamicState__desc, _T, _a, _beta, _cp, _cv, _d, _ddhp, _ddph, _eta, _h, _kappa, _lambda, _p, _phase, _s);
}

RefrigerationTrainer_ClosedLoopM1e_Med_SaturationProperties omc_RefrigerationTrainer_ClosedLoopM1e_Med_setSat__p(threadData_t *threadData, modelica_real _p)
{
  double _p_ext;
  RefrigerationTrainer_ClosedLoopM1e_Med_SaturationProperties_external _sat_ext;
  static const MMC_DEFSTRINGLIT(tmp1,10,"TestMedium");
  static const MMC_DEFSTRINGLIT(tmp2,8,"CoolProp");
  static const MMC_DEFSTRINGLIT(tmp3,134,"propane|calc_transport=1|enable_TTSE=0|enable_BICUBIC=0|enable_EXTTP=1|twophase_derivsmoothing_xend=0.0|rho_smoothing_xend=0.0|debug=0");
  RefrigerationTrainer_ClosedLoopM1e_Med_SaturationProperties _sat;
  RefrigerationTrainer_ClosedLoopM1e_Med_SaturationProperties_construct(threadData, _sat); // _sat has no default value.
  _p_ext = (double) _p;
  TwoPhaseMedium_setSat_p_C_impl(_p_ext, &_sat_ext, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp1)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp3)));
  RefrigerationTrainer_ClosedLoopM1e_Med_SaturationProperties_copy_from_external(_sat_ext, _sat);
  return _sat;
}
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_Med_setSat__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  RefrigerationTrainer_ClosedLoopM1e_Med_SaturationProperties _sat;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype out_sat;
  tmp1 = mmc_unbox_real(_p);
  _sat = omc_RefrigerationTrainer_ClosedLoopM1e_Med_setSat__p(threadData, tmp1);
  tmpMeta2 = mmc_mk_rcon(_sat._Tsat);
  tmpMeta3 = mmc_mk_rcon(_sat._dTp);
  tmpMeta4 = mmc_mk_rcon(_sat._ddldp);
  tmpMeta5 = mmc_mk_rcon(_sat._ddvdp);
  tmpMeta6 = mmc_mk_rcon(_sat._dhldp);
  tmpMeta7 = mmc_mk_rcon(_sat._dhvdp);
  tmpMeta8 = mmc_mk_rcon(_sat._dl);
  tmpMeta9 = mmc_mk_rcon(_sat._dv);
  tmpMeta10 = mmc_mk_rcon(_sat._hl);
  tmpMeta11 = mmc_mk_rcon(_sat._hv);
  tmpMeta12 = mmc_mk_rcon(_sat._psat);
  tmpMeta13 = mmc_mk_rcon(_sat._sigma);
  tmpMeta14 = mmc_mk_rcon(_sat._sl);
  tmpMeta15 = mmc_mk_rcon(_sat._sv);
  out_sat = mmc_mk_box15(3, &RefrigerationTrainer_ClosedLoopM1e_Med_SaturationProperties__desc, tmpMeta2, tmpMeta3, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14, tmpMeta15);
  return out_sat;
}

RefrigerationTrainer_ClosedLoopM1e_Med_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1e_Med_setState__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase)
{
  double _p_ext;
  double _h_ext;
  int _phase_ext;
  RefrigerationTrainer_ClosedLoopM1e_Med_ThermodynamicState_external _state_ext;
  static const MMC_DEFSTRINGLIT(tmp1,10,"TestMedium");
  static const MMC_DEFSTRINGLIT(tmp2,8,"CoolProp");
  static const MMC_DEFSTRINGLIT(tmp3,134,"propane|calc_transport=1|enable_TTSE=0|enable_BICUBIC=0|enable_EXTTP=1|twophase_derivsmoothing_xend=0.0|rho_smoothing_xend=0.0|debug=0");
  RefrigerationTrainer_ClosedLoopM1e_Med_ThermodynamicState _state;
  RefrigerationTrainer_ClosedLoopM1e_Med_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  _p_ext = (double) _p;
  _h_ext = (double) _h;
  _phase_ext = (int) _phase;
  TwoPhaseMedium_setState_ph_C_impl_wrap(_p_ext, _h_ext, _phase_ext, &_state_ext, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp1)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp3)));
  RefrigerationTrainer_ClosedLoopM1e_Med_ThermodynamicState_copy_from_external(_state_ext, _state);
  return _state;
}
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_Med_setState__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  RefrigerationTrainer_ClosedLoopM1e_Med_ThermodynamicState _state;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  tmp3 = mmc_unbox_integer(_phase);
  _state = omc_RefrigerationTrainer_ClosedLoopM1e_Med_setState__ph(threadData, tmp1, tmp2, tmp3);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  tmpMeta5 = mmc_mk_rcon(_state._a);
  tmpMeta6 = mmc_mk_rcon(_state._beta);
  tmpMeta7 = mmc_mk_rcon(_state._cp);
  tmpMeta8 = mmc_mk_rcon(_state._cv);
  tmpMeta9 = mmc_mk_rcon(_state._d);
  tmpMeta10 = mmc_mk_rcon(_state._ddhp);
  tmpMeta11 = mmc_mk_rcon(_state._ddph);
  tmpMeta12 = mmc_mk_rcon(_state._eta);
  tmpMeta13 = mmc_mk_rcon(_state._h);
  tmpMeta14 = mmc_mk_rcon(_state._kappa);
  tmpMeta15 = mmc_mk_rcon(_state._lambda);
  tmpMeta16 = mmc_mk_rcon(_state._p);
  tmpMeta17 = mmc_mk_icon(_state._phase);
  tmpMeta18 = mmc_mk_rcon(_state._s);
  out_state = mmc_mk_box16(3, &RefrigerationTrainer_ClosedLoopM1e_Med_ThermodynamicState__desc, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14, tmpMeta15, tmpMeta16, tmpMeta17, tmpMeta18);
  return out_state;
}

RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_T, modelica_real omc_a, modelica_real omc_beta, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_d, modelica_real omc_ddhp, modelica_real omc_ddph, modelica_real omc_eta, modelica_real omc_h, modelica_real omc_kappa, modelica_real omc_lambda, modelica_real omc_p, modelica_integer omc_phase, modelica_real omc_s)
{
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState tmp1;
  tmp1._T = omc_T;
  tmp1._a = omc_a;
  tmp1._beta = omc_beta;
  tmp1._cp = omc_cp;
  tmp1._cv = omc_cv;
  tmp1._d = omc_d;
  tmp1._ddhp = omc_ddhp;
  tmp1._ddph = omc_ddph;
  tmp1._eta = omc_eta;
  tmp1._h = omc_h;
  tmp1._kappa = omc_kappa;
  tmp1._lambda = omc_lambda;
  tmp1._p = omc_p;
  tmp1._phase = omc_phase;
  tmp1._s = omc_s;
  return tmp1;
}

modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _T, modelica_metatype _a, modelica_metatype _beta, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _d, modelica_metatype _ddhp, modelica_metatype _ddph, modelica_metatype _eta, modelica_metatype _h, modelica_metatype _kappa, modelica_metatype _lambda, modelica_metatype _p, modelica_metatype _phase, modelica_metatype _s)
{
  return mmc_mk_box16(3, &RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState__desc, _T, _a, _beta, _cp, _cv, _d, _ddhp, _ddph, _eta, _h, _kappa, _lambda, _p, _phase, _s);
}

RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_setState__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _phase)
{
  double _p_ext;
  double _T_ext;
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState_external _state_ext;
  static const MMC_DEFSTRINGLIT(tmp1,10,"TestMedium");
  static const MMC_DEFSTRINGLIT(tmp2,8,"CoolProp");
  static const MMC_DEFSTRINGLIT(tmp3,134,"propane|calc_transport=1|enable_TTSE=0|enable_BICUBIC=0|enable_EXTTP=1|twophase_derivsmoothing_xend=0.0|rho_smoothing_xend=0.0|debug=0");
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState _state;
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  _p_ext = (double) _p;
  _T_ext = (double) _T;
  TwoPhaseMedium_setState_pT_C_impl_wrap(_p_ext, _T_ext, &_state_ext, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp1)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp3)));
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState_copy_from_external(_state_ext, _state);
  return _state;
}
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_setState__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _phase)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_integer(_phase);
  _state = omc_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_setState__pT(threadData, tmp1, tmp2, tmp3);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  tmpMeta5 = mmc_mk_rcon(_state._a);
  tmpMeta6 = mmc_mk_rcon(_state._beta);
  tmpMeta7 = mmc_mk_rcon(_state._cp);
  tmpMeta8 = mmc_mk_rcon(_state._cv);
  tmpMeta9 = mmc_mk_rcon(_state._d);
  tmpMeta10 = mmc_mk_rcon(_state._ddhp);
  tmpMeta11 = mmc_mk_rcon(_state._ddph);
  tmpMeta12 = mmc_mk_rcon(_state._eta);
  tmpMeta13 = mmc_mk_rcon(_state._h);
  tmpMeta14 = mmc_mk_rcon(_state._kappa);
  tmpMeta15 = mmc_mk_rcon(_state._lambda);
  tmpMeta16 = mmc_mk_rcon(_state._p);
  tmpMeta17 = mmc_mk_icon(_state._phase);
  tmpMeta18 = mmc_mk_rcon(_state._s);
  out_state = mmc_mk_box16(3, &RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState__desc, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14, tmpMeta15, tmpMeta16, tmpMeta17, tmpMeta18);
  return out_state;
}

RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_setState__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase)
{
  double _p_ext;
  double _h_ext;
  int _phase_ext;
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState_external _state_ext;
  static const MMC_DEFSTRINGLIT(tmp1,10,"TestMedium");
  static const MMC_DEFSTRINGLIT(tmp2,8,"CoolProp");
  static const MMC_DEFSTRINGLIT(tmp3,134,"propane|calc_transport=1|enable_TTSE=0|enable_BICUBIC=0|enable_EXTTP=1|twophase_derivsmoothing_xend=0.0|rho_smoothing_xend=0.0|debug=0");
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState _state;
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  _p_ext = (double) _p;
  _h_ext = (double) _h;
  _phase_ext = (int) _phase;
  TwoPhaseMedium_setState_ph_C_impl_wrap(_p_ext, _h_ext, _phase_ext, &_state_ext, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp1)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp3)));
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState_copy_from_external(_state_ext, _state);
  return _state;
}
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_setState__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  tmp3 = mmc_unbox_integer(_phase);
  _state = omc_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_setState__ph(threadData, tmp1, tmp2, tmp3);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  tmpMeta5 = mmc_mk_rcon(_state._a);
  tmpMeta6 = mmc_mk_rcon(_state._beta);
  tmpMeta7 = mmc_mk_rcon(_state._cp);
  tmpMeta8 = mmc_mk_rcon(_state._cv);
  tmpMeta9 = mmc_mk_rcon(_state._d);
  tmpMeta10 = mmc_mk_rcon(_state._ddhp);
  tmpMeta11 = mmc_mk_rcon(_state._ddph);
  tmpMeta12 = mmc_mk_rcon(_state._eta);
  tmpMeta13 = mmc_mk_rcon(_state._h);
  tmpMeta14 = mmc_mk_rcon(_state._kappa);
  tmpMeta15 = mmc_mk_rcon(_state._lambda);
  tmpMeta16 = mmc_mk_rcon(_state._p);
  tmpMeta17 = mmc_mk_icon(_state._phase);
  tmpMeta18 = mmc_mk_rcon(_state._s);
  out_state = mmc_mk_box16(3, &RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState__desc, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14, tmpMeta15, tmpMeta16, tmpMeta17, tmpMeta18);
  return out_state;
}

RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_setState__ps(threadData_t *threadData, modelica_real _p, modelica_real _s, modelica_integer _phase)
{
  double _p_ext;
  double _s_ext;
  int _phase_ext;
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState_external _state_ext;
  static const MMC_DEFSTRINGLIT(tmp1,10,"TestMedium");
  static const MMC_DEFSTRINGLIT(tmp2,8,"CoolProp");
  static const MMC_DEFSTRINGLIT(tmp3,134,"propane|calc_transport=1|enable_TTSE=0|enable_BICUBIC=0|enable_EXTTP=1|twophase_derivsmoothing_xend=0.0|rho_smoothing_xend=0.0|debug=0");
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState _state;
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  _p_ext = (double) _p;
  _s_ext = (double) _s;
  _phase_ext = (int) _phase;
  TwoPhaseMedium_setState_ps_C_impl_wrap(_p_ext, _s_ext, _phase_ext, &_state_ext, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp1)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp3)));
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState_copy_from_external(_state_ext, _state);
  return _state;
}
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_setState__ps(threadData_t *threadData, modelica_metatype _p, modelica_metatype _s, modelica_metatype _phase)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_s);
  tmp3 = mmc_unbox_integer(_phase);
  _state = omc_RefrigerationTrainer_ClosedLoopM1e_comp_Medium_setState__ps(threadData, tmp1, tmp2, tmp3);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  tmpMeta5 = mmc_mk_rcon(_state._a);
  tmpMeta6 = mmc_mk_rcon(_state._beta);
  tmpMeta7 = mmc_mk_rcon(_state._cp);
  tmpMeta8 = mmc_mk_rcon(_state._cv);
  tmpMeta9 = mmc_mk_rcon(_state._d);
  tmpMeta10 = mmc_mk_rcon(_state._ddhp);
  tmpMeta11 = mmc_mk_rcon(_state._ddph);
  tmpMeta12 = mmc_mk_rcon(_state._eta);
  tmpMeta13 = mmc_mk_rcon(_state._h);
  tmpMeta14 = mmc_mk_rcon(_state._kappa);
  tmpMeta15 = mmc_mk_rcon(_state._lambda);
  tmpMeta16 = mmc_mk_rcon(_state._p);
  tmpMeta17 = mmc_mk_icon(_state._phase);
  tmpMeta18 = mmc_mk_rcon(_state._s);
  out_state = mmc_mk_box16(3, &RefrigerationTrainer_ClosedLoopM1e_comp_Medium_ThermodynamicState__desc, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14, tmpMeta15, tmpMeta16, tmpMeta17, tmpMeta18);
  return out_state;
}

RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties(threadData_t *threadData, modelica_real omc_Tsat, modelica_real omc_dTp, modelica_real omc_ddldp, modelica_real omc_ddvdp, modelica_real omc_dhldp, modelica_real omc_dhvdp, modelica_real omc_dl, modelica_real omc_dv, modelica_real omc_hl, modelica_real omc_hv, modelica_real omc_psat, modelica_real omc_sigma, modelica_real omc_sl, modelica_real omc_sv)
{
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties tmp1;
  tmp1._Tsat = omc_Tsat;
  tmp1._dTp = omc_dTp;
  tmp1._ddldp = omc_ddldp;
  tmp1._ddvdp = omc_ddvdp;
  tmp1._dhldp = omc_dhldp;
  tmp1._dhvdp = omc_dhvdp;
  tmp1._dl = omc_dl;
  tmp1._dv = omc_dv;
  tmp1._hl = omc_hl;
  tmp1._hv = omc_hv;
  tmp1._psat = omc_psat;
  tmp1._sigma = omc_sigma;
  tmp1._sl = omc_sl;
  tmp1._sv = omc_sv;
  return tmp1;
}

modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties(threadData_t *threadData, modelica_metatype _Tsat, modelica_metatype _dTp, modelica_metatype _ddldp, modelica_metatype _ddvdp, modelica_metatype _dhldp, modelica_metatype _dhvdp, modelica_metatype _dl, modelica_metatype _dv, modelica_metatype _hl, modelica_metatype _hv, modelica_metatype _psat, modelica_metatype _sigma, modelica_metatype _sl, modelica_metatype _sv)
{
  return mmc_mk_box15(3, &RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties__desc, _Tsat, _dTp, _ddldp, _ddvdp, _dhldp, _dhvdp, _dl, _dv, _hl, _hv, _psat, _sigma, _sl, _sv);
}

RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_T, modelica_real omc_a, modelica_real omc_beta, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_d, modelica_real omc_ddhp, modelica_real omc_ddph, modelica_real omc_eta, modelica_real omc_h, modelica_real omc_kappa, modelica_real omc_lambda, modelica_real omc_p, modelica_integer omc_phase, modelica_real omc_s)
{
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState tmp1;
  tmp1._T = omc_T;
  tmp1._a = omc_a;
  tmp1._beta = omc_beta;
  tmp1._cp = omc_cp;
  tmp1._cv = omc_cv;
  tmp1._d = omc_d;
  tmp1._ddhp = omc_ddhp;
  tmp1._ddph = omc_ddph;
  tmp1._eta = omc_eta;
  tmp1._h = omc_h;
  tmp1._kappa = omc_kappa;
  tmp1._lambda = omc_lambda;
  tmp1._p = omc_p;
  tmp1._phase = omc_phase;
  tmp1._s = omc_s;
  return tmp1;
}

modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _T, modelica_metatype _a, modelica_metatype _beta, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _d, modelica_metatype _ddhp, modelica_metatype _ddph, modelica_metatype _eta, modelica_metatype _h, modelica_metatype _kappa, modelica_metatype _lambda, modelica_metatype _p, modelica_metatype _phase, modelica_metatype _s)
{
  return mmc_mk_box16(3, &RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState__desc, _T, _a, _beta, _cp, _cv, _d, _ddhp, _ddph, _eta, _h, _kappa, _lambda, _p, _phase, _s);
}

RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setSat__p(threadData_t *threadData, modelica_real _p)
{
  double _p_ext;
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties_external _sat_ext;
  static const MMC_DEFSTRINGLIT(tmp1,10,"TestMedium");
  static const MMC_DEFSTRINGLIT(tmp2,8,"CoolProp");
  static const MMC_DEFSTRINGLIT(tmp3,134,"propane|calc_transport=1|enable_TTSE=0|enable_BICUBIC=0|enable_EXTTP=1|twophase_derivsmoothing_xend=0.0|rho_smoothing_xend=0.0|debug=0");
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties _sat;
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties_construct(threadData, _sat); // _sat has no default value.
  _p_ext = (double) _p;
  TwoPhaseMedium_setSat_p_C_impl(_p_ext, &_sat_ext, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp1)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp3)));
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties_copy_from_external(_sat_ext, _sat);
  return _sat;
}
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setSat__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties _sat;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype out_sat;
  tmp1 = mmc_unbox_real(_p);
  _sat = omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setSat__p(threadData, tmp1);
  tmpMeta2 = mmc_mk_rcon(_sat._Tsat);
  tmpMeta3 = mmc_mk_rcon(_sat._dTp);
  tmpMeta4 = mmc_mk_rcon(_sat._ddldp);
  tmpMeta5 = mmc_mk_rcon(_sat._ddvdp);
  tmpMeta6 = mmc_mk_rcon(_sat._dhldp);
  tmpMeta7 = mmc_mk_rcon(_sat._dhvdp);
  tmpMeta8 = mmc_mk_rcon(_sat._dl);
  tmpMeta9 = mmc_mk_rcon(_sat._dv);
  tmpMeta10 = mmc_mk_rcon(_sat._hl);
  tmpMeta11 = mmc_mk_rcon(_sat._hv);
  tmpMeta12 = mmc_mk_rcon(_sat._psat);
  tmpMeta13 = mmc_mk_rcon(_sat._sigma);
  tmpMeta14 = mmc_mk_rcon(_sat._sl);
  tmpMeta15 = mmc_mk_rcon(_sat._sv);
  out_sat = mmc_mk_box15(3, &RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_SaturationProperties__desc, tmpMeta2, tmpMeta3, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14, tmpMeta15);
  return out_sat;
}

RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setState__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase)
{
  double _p_ext;
  double _h_ext;
  int _phase_ext;
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState_external _state_ext;
  static const MMC_DEFSTRINGLIT(tmp1,10,"TestMedium");
  static const MMC_DEFSTRINGLIT(tmp2,8,"CoolProp");
  static const MMC_DEFSTRINGLIT(tmp3,134,"propane|calc_transport=1|enable_TTSE=0|enable_BICUBIC=0|enable_EXTTP=1|twophase_derivsmoothing_xend=0.0|rho_smoothing_xend=0.0|debug=0");
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState _state;
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  _p_ext = (double) _p;
  _h_ext = (double) _h;
  _phase_ext = (int) _phase;
  TwoPhaseMedium_setState_ph_C_impl_wrap(_p_ext, _h_ext, _phase_ext, &_state_ext, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp1)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp3)));
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState_copy_from_external(_state_ext, _state);
  return _state;
}
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setState__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  tmp3 = mmc_unbox_integer(_phase);
  _state = omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_setState__ph(threadData, tmp1, tmp2, tmp3);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  tmpMeta5 = mmc_mk_rcon(_state._a);
  tmpMeta6 = mmc_mk_rcon(_state._beta);
  tmpMeta7 = mmc_mk_rcon(_state._cp);
  tmpMeta8 = mmc_mk_rcon(_state._cv);
  tmpMeta9 = mmc_mk_rcon(_state._d);
  tmpMeta10 = mmc_mk_rcon(_state._ddhp);
  tmpMeta11 = mmc_mk_rcon(_state._ddph);
  tmpMeta12 = mmc_mk_rcon(_state._eta);
  tmpMeta13 = mmc_mk_rcon(_state._h);
  tmpMeta14 = mmc_mk_rcon(_state._kappa);
  tmpMeta15 = mmc_mk_rcon(_state._lambda);
  tmpMeta16 = mmc_mk_rcon(_state._p);
  tmpMeta17 = mmc_mk_icon(_state._phase);
  tmpMeta18 = mmc_mk_rcon(_state._s);
  out_state = mmc_mk_box16(3, &RefrigerationTrainer_ClosedLoopM1e_cond_Cells_Medium_ThermodynamicState__desc, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14, tmpMeta15, tmpMeta16, tmpMeta17, tmpMeta18);
  return out_state;
}

RefrigerationTrainer_ClosedLoopM1e_cond_Cells_heatTransfer_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_T, modelica_real omc_a, modelica_real omc_beta, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_d, modelica_real omc_ddhp, modelica_real omc_ddph, modelica_real omc_eta, modelica_real omc_h, modelica_real omc_kappa, modelica_real omc_lambda, modelica_real omc_p, modelica_integer omc_phase, modelica_real omc_s)
{
  RefrigerationTrainer_ClosedLoopM1e_cond_Cells_heatTransfer_Medium_ThermodynamicState tmp1;
  tmp1._T = omc_T;
  tmp1._a = omc_a;
  tmp1._beta = omc_beta;
  tmp1._cp = omc_cp;
  tmp1._cv = omc_cv;
  tmp1._d = omc_d;
  tmp1._ddhp = omc_ddhp;
  tmp1._ddph = omc_ddph;
  tmp1._eta = omc_eta;
  tmp1._h = omc_h;
  tmp1._kappa = omc_kappa;
  tmp1._lambda = omc_lambda;
  tmp1._p = omc_p;
  tmp1._phase = omc_phase;
  tmp1._s = omc_s;
  return tmp1;
}

modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_cond_Cells_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _T, modelica_metatype _a, modelica_metatype _beta, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _d, modelica_metatype _ddhp, modelica_metatype _ddph, modelica_metatype _eta, modelica_metatype _h, modelica_metatype _kappa, modelica_metatype _lambda, modelica_metatype _p, modelica_metatype _phase, modelica_metatype _s)
{
  return mmc_mk_box16(3, &RefrigerationTrainer_ClosedLoopM1e_cond_Cells_heatTransfer_Medium_ThermodynamicState__desc, _T, _a, _beta, _cp, _cv, _d, _ddhp, _ddph, _eta, _h, _kappa, _lambda, _p, _phase, _s);
}

RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties(threadData_t *threadData, modelica_real omc_Tsat, modelica_real omc_dTp, modelica_real omc_ddldp, modelica_real omc_ddvdp, modelica_real omc_dhldp, modelica_real omc_dhvdp, modelica_real omc_dl, modelica_real omc_dv, modelica_real omc_hl, modelica_real omc_hv, modelica_real omc_psat, modelica_real omc_sigma, modelica_real omc_sl, modelica_real omc_sv)
{
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties tmp1;
  tmp1._Tsat = omc_Tsat;
  tmp1._dTp = omc_dTp;
  tmp1._ddldp = omc_ddldp;
  tmp1._ddvdp = omc_ddvdp;
  tmp1._dhldp = omc_dhldp;
  tmp1._dhvdp = omc_dhvdp;
  tmp1._dl = omc_dl;
  tmp1._dv = omc_dv;
  tmp1._hl = omc_hl;
  tmp1._hv = omc_hv;
  tmp1._psat = omc_psat;
  tmp1._sigma = omc_sigma;
  tmp1._sl = omc_sl;
  tmp1._sv = omc_sv;
  return tmp1;
}

modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties(threadData_t *threadData, modelica_metatype _Tsat, modelica_metatype _dTp, modelica_metatype _ddldp, modelica_metatype _ddvdp, modelica_metatype _dhldp, modelica_metatype _dhvdp, modelica_metatype _dl, modelica_metatype _dv, modelica_metatype _hl, modelica_metatype _hv, modelica_metatype _psat, modelica_metatype _sigma, modelica_metatype _sl, modelica_metatype _sv)
{
  return mmc_mk_box15(3, &RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties__desc, _Tsat, _dTp, _ddldp, _ddvdp, _dhldp, _dhvdp, _dl, _dv, _hl, _hv, _psat, _sigma, _sl, _sv);
}

RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_T, modelica_real omc_a, modelica_real omc_beta, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_d, modelica_real omc_ddhp, modelica_real omc_ddph, modelica_real omc_eta, modelica_real omc_h, modelica_real omc_kappa, modelica_real omc_lambda, modelica_real omc_p, modelica_integer omc_phase, modelica_real omc_s)
{
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState tmp1;
  tmp1._T = omc_T;
  tmp1._a = omc_a;
  tmp1._beta = omc_beta;
  tmp1._cp = omc_cp;
  tmp1._cv = omc_cv;
  tmp1._d = omc_d;
  tmp1._ddhp = omc_ddhp;
  tmp1._ddph = omc_ddph;
  tmp1._eta = omc_eta;
  tmp1._h = omc_h;
  tmp1._kappa = omc_kappa;
  tmp1._lambda = omc_lambda;
  tmp1._p = omc_p;
  tmp1._phase = omc_phase;
  tmp1._s = omc_s;
  return tmp1;
}

modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _T, modelica_metatype _a, modelica_metatype _beta, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _d, modelica_metatype _ddhp, modelica_metatype _ddph, modelica_metatype _eta, modelica_metatype _h, modelica_metatype _kappa, modelica_metatype _lambda, modelica_metatype _p, modelica_metatype _phase, modelica_metatype _s)
{
  return mmc_mk_box16(3, &RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState__desc, _T, _a, _beta, _cp, _cv, _d, _ddhp, _ddph, _eta, _h, _kappa, _lambda, _p, _phase, _s);
}

RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setSat__p(threadData_t *threadData, modelica_real _p)
{
  double _p_ext;
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties_external _sat_ext;
  static const MMC_DEFSTRINGLIT(tmp1,10,"TestMedium");
  static const MMC_DEFSTRINGLIT(tmp2,8,"CoolProp");
  static const MMC_DEFSTRINGLIT(tmp3,134,"propane|calc_transport=1|enable_TTSE=0|enable_BICUBIC=0|enable_EXTTP=1|twophase_derivsmoothing_xend=0.0|rho_smoothing_xend=0.0|debug=0");
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties _sat;
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties_construct(threadData, _sat); // _sat has no default value.
  _p_ext = (double) _p;
  TwoPhaseMedium_setSat_p_C_impl(_p_ext, &_sat_ext, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp1)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp3)));
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties_copy_from_external(_sat_ext, _sat);
  return _sat;
}
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setSat__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties _sat;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype out_sat;
  tmp1 = mmc_unbox_real(_p);
  _sat = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setSat__p(threadData, tmp1);
  tmpMeta2 = mmc_mk_rcon(_sat._Tsat);
  tmpMeta3 = mmc_mk_rcon(_sat._dTp);
  tmpMeta4 = mmc_mk_rcon(_sat._ddldp);
  tmpMeta5 = mmc_mk_rcon(_sat._ddvdp);
  tmpMeta6 = mmc_mk_rcon(_sat._dhldp);
  tmpMeta7 = mmc_mk_rcon(_sat._dhvdp);
  tmpMeta8 = mmc_mk_rcon(_sat._dl);
  tmpMeta9 = mmc_mk_rcon(_sat._dv);
  tmpMeta10 = mmc_mk_rcon(_sat._hl);
  tmpMeta11 = mmc_mk_rcon(_sat._hv);
  tmpMeta12 = mmc_mk_rcon(_sat._psat);
  tmpMeta13 = mmc_mk_rcon(_sat._sigma);
  tmpMeta14 = mmc_mk_rcon(_sat._sl);
  tmpMeta15 = mmc_mk_rcon(_sat._sv);
  out_sat = mmc_mk_box15(3, &RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_SaturationProperties__desc, tmpMeta2, tmpMeta3, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14, tmpMeta15);
  return out_sat;
}

RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setState__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase)
{
  double _p_ext;
  double _h_ext;
  int _phase_ext;
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState_external _state_ext;
  static const MMC_DEFSTRINGLIT(tmp1,10,"TestMedium");
  static const MMC_DEFSTRINGLIT(tmp2,8,"CoolProp");
  static const MMC_DEFSTRINGLIT(tmp3,134,"propane|calc_transport=1|enable_TTSE=0|enable_BICUBIC=0|enable_EXTTP=1|twophase_derivsmoothing_xend=0.0|rho_smoothing_xend=0.0|debug=0");
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState _state;
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  _p_ext = (double) _p;
  _h_ext = (double) _h;
  _phase_ext = (int) _phase;
  TwoPhaseMedium_setState_ph_C_impl_wrap(_p_ext, _h_ext, _phase_ext, &_state_ext, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp1)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp3)));
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState_copy_from_external(_state_ext, _state);
  return _state;
}
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setState__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  tmp3 = mmc_unbox_integer(_phase);
  _state = omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_setState__ph(threadData, tmp1, tmp2, tmp3);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  tmpMeta5 = mmc_mk_rcon(_state._a);
  tmpMeta6 = mmc_mk_rcon(_state._beta);
  tmpMeta7 = mmc_mk_rcon(_state._cp);
  tmpMeta8 = mmc_mk_rcon(_state._cv);
  tmpMeta9 = mmc_mk_rcon(_state._d);
  tmpMeta10 = mmc_mk_rcon(_state._ddhp);
  tmpMeta11 = mmc_mk_rcon(_state._ddph);
  tmpMeta12 = mmc_mk_rcon(_state._eta);
  tmpMeta13 = mmc_mk_rcon(_state._h);
  tmpMeta14 = mmc_mk_rcon(_state._kappa);
  tmpMeta15 = mmc_mk_rcon(_state._lambda);
  tmpMeta16 = mmc_mk_rcon(_state._p);
  tmpMeta17 = mmc_mk_icon(_state._phase);
  tmpMeta18 = mmc_mk_rcon(_state._s);
  out_state = mmc_mk_box16(3, &RefrigerationTrainer_ClosedLoopM1e_evap_Cells_Medium_ThermodynamicState__desc, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14, tmpMeta15, tmpMeta16, tmpMeta17, tmpMeta18);
  return out_state;
}

RefrigerationTrainer_ClosedLoopM1e_evap_Cells_heatTransfer_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_T, modelica_real omc_a, modelica_real omc_beta, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_d, modelica_real omc_ddhp, modelica_real omc_ddph, modelica_real omc_eta, modelica_real omc_h, modelica_real omc_kappa, modelica_real omc_lambda, modelica_real omc_p, modelica_integer omc_phase, modelica_real omc_s)
{
  RefrigerationTrainer_ClosedLoopM1e_evap_Cells_heatTransfer_Medium_ThermodynamicState tmp1;
  tmp1._T = omc_T;
  tmp1._a = omc_a;
  tmp1._beta = omc_beta;
  tmp1._cp = omc_cp;
  tmp1._cv = omc_cv;
  tmp1._d = omc_d;
  tmp1._ddhp = omc_ddhp;
  tmp1._ddph = omc_ddph;
  tmp1._eta = omc_eta;
  tmp1._h = omc_h;
  tmp1._kappa = omc_kappa;
  tmp1._lambda = omc_lambda;
  tmp1._p = omc_p;
  tmp1._phase = omc_phase;
  tmp1._s = omc_s;
  return tmp1;
}

modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_evap_Cells_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _T, modelica_metatype _a, modelica_metatype _beta, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _d, modelica_metatype _ddhp, modelica_metatype _ddph, modelica_metatype _eta, modelica_metatype _h, modelica_metatype _kappa, modelica_metatype _lambda, modelica_metatype _p, modelica_metatype _phase, modelica_metatype _s)
{
  return mmc_mk_box16(3, &RefrigerationTrainer_ClosedLoopM1e_evap_Cells_heatTransfer_Medium_ThermodynamicState__desc, _T, _a, _beta, _cp, _cv, _d, _ddhp, _ddph, _eta, _h, _kappa, _lambda, _p, _phase, _s);
}

RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_T, modelica_real omc_a, modelica_real omc_beta, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_d, modelica_real omc_ddhp, modelica_real omc_ddph, modelica_real omc_eta, modelica_real omc_h, modelica_real omc_kappa, modelica_real omc_lambda, modelica_real omc_p, modelica_integer omc_phase, modelica_real omc_s)
{
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState tmp1;
  tmp1._T = omc_T;
  tmp1._a = omc_a;
  tmp1._beta = omc_beta;
  tmp1._cp = omc_cp;
  tmp1._cv = omc_cv;
  tmp1._d = omc_d;
  tmp1._ddhp = omc_ddhp;
  tmp1._ddph = omc_ddph;
  tmp1._eta = omc_eta;
  tmp1._h = omc_h;
  tmp1._kappa = omc_kappa;
  tmp1._lambda = omc_lambda;
  tmp1._p = omc_p;
  tmp1._phase = omc_phase;
  tmp1._s = omc_s;
  return tmp1;
}

modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _T, modelica_metatype _a, modelica_metatype _beta, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _d, modelica_metatype _ddhp, modelica_metatype _ddph, modelica_metatype _eta, modelica_metatype _h, modelica_metatype _kappa, modelica_metatype _lambda, modelica_metatype _p, modelica_metatype _phase, modelica_metatype _s)
{
  return mmc_mk_box16(3, &RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState__desc, _T, _a, _beta, _cp, _cv, _d, _ddhp, _ddph, _eta, _h, _kappa, _lambda, _p, _phase, _s);
}

DLLDirection
modelica_real omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_density(threadData_t *threadData, RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = _state._d;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_metatype tmpMeta6;
  modelica_real tmp7;
  modelica_metatype tmpMeta8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_real tmp11;
  modelica_metatype tmpMeta12;
  modelica_real tmp13;
  modelica_metatype tmpMeta14;
  modelica_real tmp15;
  modelica_metatype tmpMeta16;
  modelica_real tmp17;
  modelica_metatype tmpMeta18;
  modelica_real tmp19;
  modelica_metatype tmpMeta20;
  modelica_real tmp21;
  modelica_metatype tmpMeta22;
  modelica_real tmp23;
  modelica_metatype tmpMeta24;
  modelica_real tmp25;
  modelica_metatype tmpMeta26;
  modelica_real tmp27;
  modelica_metatype tmpMeta28;
  modelica_integer tmp29;
  modelica_metatype tmpMeta30;
  modelica_real tmp31;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._T = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._a = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 4)));
  tmp7 = mmc_unbox_real(tmpMeta6);
  tmp1._beta = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 5)));
  tmp9 = mmc_unbox_real(tmpMeta8);
  tmp1._cp = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 6)));
  tmp11 = mmc_unbox_real(tmpMeta10);
  tmp1._cv = tmp11;
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 7)));
  tmp13 = mmc_unbox_real(tmpMeta12);
  tmp1._d = tmp13;
  tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 8)));
  tmp15 = mmc_unbox_real(tmpMeta14);
  tmp1._ddhp = tmp15;
  tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 9)));
  tmp17 = mmc_unbox_real(tmpMeta16);
  tmp1._ddph = tmp17;
  tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 10)));
  tmp19 = mmc_unbox_real(tmpMeta18);
  tmp1._eta = tmp19;
  tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 11)));
  tmp21 = mmc_unbox_real(tmpMeta20);
  tmp1._h = tmp21;
  tmpMeta22 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 12)));
  tmp23 = mmc_unbox_real(tmpMeta22);
  tmp1._kappa = tmp23;
  tmpMeta24 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 13)));
  tmp25 = mmc_unbox_real(tmpMeta24);
  tmp1._lambda = tmp25;
  tmpMeta26 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 14)));
  tmp27 = mmc_unbox_real(tmpMeta26);
  tmp1._p = tmp27;
  tmpMeta28 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 15)));
  tmp29 = mmc_unbox_integer(tmpMeta28);
  tmp1._phase = tmp29;
  tmpMeta30 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 16)));
  tmp31 = mmc_unbox_real(tmpMeta30);
  tmp1._s = tmp31;
  _d = omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_density__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_density(threadData, omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_setState__pTX(threadData, _p, _T, _X, ((modelica_integer) 0)));
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_density__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _d = omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_density__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_setState__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _phase)
{
  double _p_ext;
  double _T_ext;
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState_external _state_ext;
  static const MMC_DEFSTRINGLIT(tmp1,10,"TestMedium");
  static const MMC_DEFSTRINGLIT(tmp2,8,"CoolProp");
  static const MMC_DEFSTRINGLIT(tmp3,134,"propane|calc_transport=1|enable_TTSE=0|enable_BICUBIC=0|enable_EXTTP=1|twophase_derivsmoothing_xend=0.0|rho_smoothing_xend=0.0|debug=0");
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState _state;
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  _p_ext = (double) _p;
  _T_ext = (double) _T;
  TwoPhaseMedium_setState_pT_C_impl_wrap(_p_ext, _T_ext, &_state_ext, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp1)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp3)));
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState_copy_from_external(_state_ext, _state);
  return _state;
}
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_setState__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _phase)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_integer(_phase);
  _state = omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_setState__pT(threadData, tmp1, tmp2, tmp3);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  tmpMeta5 = mmc_mk_rcon(_state._a);
  tmpMeta6 = mmc_mk_rcon(_state._beta);
  tmpMeta7 = mmc_mk_rcon(_state._cp);
  tmpMeta8 = mmc_mk_rcon(_state._cv);
  tmpMeta9 = mmc_mk_rcon(_state._d);
  tmpMeta10 = mmc_mk_rcon(_state._ddhp);
  tmpMeta11 = mmc_mk_rcon(_state._ddph);
  tmpMeta12 = mmc_mk_rcon(_state._eta);
  tmpMeta13 = mmc_mk_rcon(_state._h);
  tmpMeta14 = mmc_mk_rcon(_state._kappa);
  tmpMeta15 = mmc_mk_rcon(_state._lambda);
  tmpMeta16 = mmc_mk_rcon(_state._p);
  tmpMeta17 = mmc_mk_icon(_state._phase);
  tmpMeta18 = mmc_mk_rcon(_state._s);
  out_state = mmc_mk_box16(3, &RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState__desc, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14, tmpMeta15, tmpMeta16, tmpMeta17, tmpMeta18);
  return out_state;
}

DLLDirection
RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X, modelica_integer _phase)
{
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState _state;
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp1 = omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_setState__pT(threadData, _p, _T, _phase);
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X, modelica_metatype _phase)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_integer(_phase);
  _state = omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X), tmp3);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  tmpMeta5 = mmc_mk_rcon(_state._a);
  tmpMeta6 = mmc_mk_rcon(_state._beta);
  tmpMeta7 = mmc_mk_rcon(_state._cp);
  tmpMeta8 = mmc_mk_rcon(_state._cv);
  tmpMeta9 = mmc_mk_rcon(_state._d);
  tmpMeta10 = mmc_mk_rcon(_state._ddhp);
  tmpMeta11 = mmc_mk_rcon(_state._ddph);
  tmpMeta12 = mmc_mk_rcon(_state._eta);
  tmpMeta13 = mmc_mk_rcon(_state._h);
  tmpMeta14 = mmc_mk_rcon(_state._kappa);
  tmpMeta15 = mmc_mk_rcon(_state._lambda);
  tmpMeta16 = mmc_mk_rcon(_state._p);
  tmpMeta17 = mmc_mk_icon(_state._phase);
  tmpMeta18 = mmc_mk_rcon(_state._s);
  out_state = mmc_mk_box16(3, &RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState__desc, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14, tmpMeta15, tmpMeta16, tmpMeta17, tmpMeta18);
  return out_state;
}

RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_setState__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase)
{
  double _p_ext;
  double _h_ext;
  int _phase_ext;
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState_external _state_ext;
  static const MMC_DEFSTRINGLIT(tmp1,10,"TestMedium");
  static const MMC_DEFSTRINGLIT(tmp2,8,"CoolProp");
  static const MMC_DEFSTRINGLIT(tmp3,134,"propane|calc_transport=1|enable_TTSE=0|enable_BICUBIC=0|enable_EXTTP=1|twophase_derivsmoothing_xend=0.0|rho_smoothing_xend=0.0|debug=0");
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState _state;
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  _p_ext = (double) _p;
  _h_ext = (double) _h;
  _phase_ext = (int) _phase;
  TwoPhaseMedium_setState_ph_C_impl_wrap(_p_ext, _h_ext, _phase_ext, &_state_ext, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp1)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2)), MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp3)));
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState_copy_from_external(_state_ext, _state);
  return _state;
}
modelica_metatype boxptr_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_setState__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  tmp3 = mmc_unbox_integer(_phase);
  _state = omc_RefrigerationTrainer_ClosedLoopM1e_txv_Medium_setState__ph(threadData, tmp1, tmp2, tmp3);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  tmpMeta5 = mmc_mk_rcon(_state._a);
  tmpMeta6 = mmc_mk_rcon(_state._beta);
  tmpMeta7 = mmc_mk_rcon(_state._cp);
  tmpMeta8 = mmc_mk_rcon(_state._cv);
  tmpMeta9 = mmc_mk_rcon(_state._d);
  tmpMeta10 = mmc_mk_rcon(_state._ddhp);
  tmpMeta11 = mmc_mk_rcon(_state._ddph);
  tmpMeta12 = mmc_mk_rcon(_state._eta);
  tmpMeta13 = mmc_mk_rcon(_state._h);
  tmpMeta14 = mmc_mk_rcon(_state._kappa);
  tmpMeta15 = mmc_mk_rcon(_state._lambda);
  tmpMeta16 = mmc_mk_rcon(_state._p);
  tmpMeta17 = mmc_mk_icon(_state._phase);
  tmpMeta18 = mmc_mk_rcon(_state._s);
  out_state = mmc_mk_box16(3, &RefrigerationTrainer_ClosedLoopM1e_txv_Medium_ThermodynamicState__desc, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14, tmpMeta15, tmpMeta16, tmpMeta17, tmpMeta18);
  return out_state;
}

#ifdef __cplusplus
}
#endif
