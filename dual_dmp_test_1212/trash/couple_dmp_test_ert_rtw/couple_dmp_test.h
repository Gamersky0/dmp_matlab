//
// File: couple_dmp_test.h
//
// Code generated for Simulink model 'couple_dmp_test'.
//
// Model version                  : 1.7
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Tue Dec 12 20:09:28 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Not run
//
#ifndef RTW_HEADER_couple_dmp_test_h_
#define RTW_HEADER_couple_dmp_test_h_
#include <cmath>
#include <cstring>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

// Model Code Variants

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef ODE8_INTG
#define ODE8_INTG

// ODE8 Integration Data
typedef struct {
  real_T *deltaY;                      // output diff
  real_T *f[13];                       // derivatives
  real_T *x0;                          // Initial State
} ODE8_IntgData;

#endif

// Class declaration for model couple_dmp_test
class SignalDmp {
  // public data and function members
 public:
  // Block signals and states (default storage) for system '<Root>'
  typedef struct {
    real_T x4[3];                      // '<S1>/Integrator5'
    real_T Gain18[3];                  // '<S1>/Gain18'
    real_T x1[3];                      // '<S1>/Integrator1'
    real_T x2[3];                      // '<S1>/Integrator'
    real_T Add1[3];                    // '<S8>/Add1'
    real_T x3[3];                      // '<S1>/Integrator3'
    real_T Add[3];                     // '<S1>/Add'
    real_T Gain27[3];                  // '<S1>/Gain27'
    real_T Sum;                        // '<Root>/Sum'
    real_T Step;                       // '<Root>/Step'
    real_T Gain25;                     // '<S1>/Gain25'
    real_T Gain16;                     // '<S1>/Gain16'
    real_T Gm;                         // '<Root>/Gm '
    real_T Gm_p;                       // '<Root>/Gm  '
  } DW;

  // Continuous states (default storage)
  typedef struct {
    real_T Integrator4_CSTATE;         // '<S1>/Integrator4'
    real_T x1_CSTATE[3];               // '<S1>/x1'
    real_T x2_CSTATE[3];               // '<S1>/x2'
    real_T gamma2s_CSTATE;             // '<Root>/gamma2//s'
    real_T gamma1s_CSTATE;             // '<Root>/-gamma1//s'
    real_T referencemodel_CSTATE[2];   // '<Root>/reference model'
    real_T right_CSTATE[3];            // '<S1>/right'
    real_T Integrator5_CSTATE[3];      // '<S1>/Integrator5'
    real_T Integrator1_CSTATE[3];      // '<S1>/Integrator1'
    real_T Integrator_CSTATE[3];       // '<S1>/Integrator'
    real_T left_CSTATE[3];             // '<S1>/left'
    real_T Integrator3_CSTATE[3];      // '<S1>/Integrator3'
    real_T Integrator2_CSTATE;         // '<S1>/Integrator2'
    real_T Gm_CSTATE[2];               // '<Root>/Gm '
    real_T Gm_CSTATE_e[2];             // '<Root>/Gm  '
  } X;

  // State derivatives (default storage)
  typedef struct {
    real_T Integrator4_CSTATE;         // '<S1>/Integrator4'
    real_T x1_CSTATE[3];               // '<S1>/x1'
    real_T x2_CSTATE[3];               // '<S1>/x2'
    real_T gamma2s_CSTATE;             // '<Root>/gamma2//s'
    real_T gamma1s_CSTATE;             // '<Root>/-gamma1//s'
    real_T referencemodel_CSTATE[2];   // '<Root>/reference model'
    real_T right_CSTATE[3];            // '<S1>/right'
    real_T Integrator5_CSTATE[3];      // '<S1>/Integrator5'
    real_T Integrator1_CSTATE[3];      // '<S1>/Integrator1'
    real_T Integrator_CSTATE[3];       // '<S1>/Integrator'
    real_T left_CSTATE[3];             // '<S1>/left'
    real_T Integrator3_CSTATE[3];      // '<S1>/Integrator3'
    real_T Integrator2_CSTATE;         // '<S1>/Integrator2'
    real_T Gm_CSTATE[2];               // '<Root>/Gm '
    real_T Gm_CSTATE_e[2];             // '<Root>/Gm  '
  } XDot;

  // State disabled
  typedef struct {
    boolean_T Integrator4_CSTATE;      // '<S1>/Integrator4'
    boolean_T x1_CSTATE[3];            // '<S1>/x1'
    boolean_T x2_CSTATE[3];            // '<S1>/x2'
    boolean_T gamma2s_CSTATE;          // '<Root>/gamma2//s'
    boolean_T gamma1s_CSTATE;          // '<Root>/-gamma1//s'
    boolean_T referencemodel_CSTATE[2];// '<Root>/reference model'
    boolean_T right_CSTATE[3];         // '<S1>/right'
    boolean_T Integrator5_CSTATE[3];   // '<S1>/Integrator5'
    boolean_T Integrator1_CSTATE[3];   // '<S1>/Integrator1'
    boolean_T Integrator_CSTATE[3];    // '<S1>/Integrator'
    boolean_T left_CSTATE[3];          // '<S1>/left'
    boolean_T Integrator3_CSTATE[3];   // '<S1>/Integrator3'
    boolean_T Integrator2_CSTATE;      // '<S1>/Integrator2'
    boolean_T Gm_CSTATE[2];            // '<Root>/Gm '
    boolean_T Gm_CSTATE_e[2];          // '<Root>/Gm  '
  } XDis;

  // Constant parameters (default storage)
  typedef struct {
    // Pooled Parameter (Expression: cc)
    //  Referenced by:
    //    '<S1>/MATLAB Function14'
    //    '<S1>/MATLAB Function2'

    real_T pooled1[41];

    // Pooled Parameter (Expression: weight)
    //  Referenced by:
    //    '<S1>/MATLAB Function14'
    //    '<S1>/MATLAB Function2'

    real_T pooled2[123];

    // Pooled Parameter (Expression: width)
    //  Referenced by:
    //    '<S1>/MATLAB Function14'
    //    '<S1>/MATLAB Function2'

    real_T pooled3[41];
  } ConstP;

  // Real-time Model Data Structure
  struct RT_MODEL {
    const char_T *errorStatus;
    RTWSolverInfo solverInfo;
    X *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T CTOutputIncnstWithState;
    real_T OdeDeltaY[34];
    real_T odeF[13][34];
    real_T odeX0[34];
    ODE8_IntgData intgData;

    //
    //  Sizes:
    //  The following substructure contains sizes information
    //  for many of the model attributes such as inputs, outputs,
    //  dwork, sample times, etc.

    struct {
      int_T numContStates;
      int_T numPeriodicContStates;
      int_T numSampTimes;
    } Sizes;

    //
    //  Timing:
    //  The following substructure contains information regarding
    //  the timing information for the model.

    struct {
      uint32_T clockTick0;
      time_T stepSize0;
      uint32_T clockTick1;
      SimTimeStep simTimeStep;
      boolean_T stopRequestedFlag;
      time_T *t;
      time_T tArray[2];
    } Timing;
  };

  // model initialize function
  void initialize();

  // model step function
  void step();

  // Constructor
  SignalDmp();

  // Destructor
  ~SignalDmp();

  // Real-Time Model get method
  SignalDmp::RT_MODEL * getRTM();

  // private data and function members
 private:
  // Block signals and states
  DW rtDW;
  X rtX;                               // Block continuous states

  // Real-Time Model
  RT_MODEL rtM;

  // private member function(s) for subsystem '<S1>/MATLAB Function14'
  static void MATLABFunction14(real_T rtu_u, real_T rty_out[3]);

  // private member function(s) for subsystem '<S1>/MATLAB Function4'
  static void MATLABFunction4(const real_T rtu_u[3], real_T *rty_y);

  // Continuous states update member function
  void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si );

  // Derivatives member function
  void couple_dmp_test_derivatives();
};

// Constant parameters (default storage)
extern const SignalDmp::ConstP rtConstP;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S1>/Scope3' : Unused code path elimination
//  Block '<S1>/Scope4' : Unused code path elimination
//  Block '<S1>/couping' : Unused code path elimination
//  Block '<S1>/input' : Unused code path elimination
//  Block '<Root>/OUT_couple' : Unused code path elimination
//  Block '<Root>/Scope1' : Unused code path elimination
//  Block '<Root>/ym, y' : Unused code path elimination
//  Block '<S1>/1//m1' : Eliminated nontunable gain of 1
//  Block '<S1>/1//m2' : Eliminated nontunable gain of 1


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'couple_dmp_test'
//  '<S1>'   : 'couple_dmp_test/3D PATH'
//  '<S2>'   : 'couple_dmp_test/3D PATH/3D'
//  '<S3>'   : 'couple_dmp_test/3D PATH/MATLAB Function14'
//  '<S4>'   : 'couple_dmp_test/3D PATH/MATLAB Function2'
//  '<S5>'   : 'couple_dmp_test/3D PATH/MATLAB Function4'
//  '<S6>'   : 'couple_dmp_test/3D PATH/MATLAB Function5'
//  '<S7>'   : 'couple_dmp_test/3D PATH/Right_3D'
//  '<S8>'   : 'couple_dmp_test/3D PATH/Subsystem'

#endif                                 // RTW_HEADER_couple_dmp_test_h_

//
// File trailer for generated code.
//
// [EOF]
//
