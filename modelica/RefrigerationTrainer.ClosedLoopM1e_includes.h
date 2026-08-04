#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.


    #ifndef SETSTATE_PH_DEFINED
    #define SETSTATE_PH_DEFINED
    #include "externalmedialib.h"
    #include "ModelicaUtilities.h"
    
    void TwoPhaseMedium_setState_ph_C_impl_wrap(double p, double h, int phase, void *state, const char *mediumName, const char *libraryName, const char *substanceName)
    {
      TwoPhaseMedium_setState_ph_C_impl_err(p, h, phase, state, mediumName, libraryName, substanceName, ModelicaError,ModelicaWarning);
    }
    #endif /* SETSTATE_PH_DEFINED */
    

    #ifndef SETSTATE_PT_DEFINED
    #define SETSTATE_PT_DEFINED
    #include "externalmedialib.h"
    #include "ModelicaUtilities.h"
    
    void TwoPhaseMedium_setState_pT_C_impl_wrap(double p, double T, void *state, const char *mediumName, const char *libraryName, const char *substanceName)
    {
      TwoPhaseMedium_setState_pT_C_impl_err(p, T, state, mediumName, libraryName, substanceName, ModelicaError, ModelicaWarning);
    }
    #endif /* SETSTATE_PT_DEFINED */
    
#include "externalmedialib.h"

    #ifndef SETSTATE_PS_DEFINED
    #define SETSTATE_PS_DEFINED
    #include "externalmedialib.h"
    #include "ModelicaUtilities.h"
    
    void TwoPhaseMedium_setState_ps_C_impl_wrap(double p, double s, int phase, void *state, const char *mediumName, const char *libraryName, const char *substanceName)
    {
      TwoPhaseMedium_setState_ps_C_impl_err(p, s, phase, state, mediumName, libraryName, substanceName, &ModelicaError, &ModelicaWarning);
    }
    #endif /* SETSTATE_PS_DEFINED */
    
#ifdef __cplusplus
}
#endif
