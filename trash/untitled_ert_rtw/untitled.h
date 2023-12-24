//
// File: untitled.h
//
// Code generated for Simulink model 'untitled'.
//
// Model version                  : 1.0
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Wed Oct 25 16:18:49 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Not run
//
#ifndef RTW_HEADER_untitled_h_
#define RTW_HEADER_untitled_h_
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

// Class declaration for model untitled
class untitledModelClass {
  // public data and function members
 public:
  // Block signals and states (default storage) for system '<Root>'
  typedef struct {
    real_T x3[3];                      // '<Root>/Integrator3'
    real_T Gain27[3];                  // '<Root>/Gain27'
    real_T Gain25;                     // '<Root>/Gain25'
  } DW;

  // Continuous states (default storage)
  typedef struct {
    real_T Integrator2_CSTATE;         // '<Root>/Integrator2'
    real_T Integrator3_CSTATE[3];      // '<Root>/Integrator3'
    real_T left_CSTATE[3];             // '<Root>/left'
  } X;

  // State derivatives (default storage)
  typedef struct {
    real_T Integrator2_CSTATE;         // '<Root>/Integrator2'
    real_T Integrator3_CSTATE[3];      // '<Root>/Integrator3'
    real_T left_CSTATE[3];             // '<Root>/left'
  } XDot;

  // State disabled
  typedef struct {
    boolean_T Integrator2_CSTATE;      // '<Root>/Integrator2'
    boolean_T Integrator3_CSTATE[3];   // '<Root>/Integrator3'
    boolean_T left_CSTATE[3];          // '<Root>/left'
  } XDis;

  // Invariant block signals (default storage)
  typedef const struct tag_ConstB {
    real_T Gain30[3];                  // '<Root>/Gain30'
  } ConstB;

  // Constant parameters (default storage)
  typedef struct {
    // Expression: cc_new
    //  Referenced by: '<Root>/MATLAB Function'

    real_T MATLABFunction_cc_new[41];

    // Expression: weight
    //  Referenced by: '<Root>/MATLAB Function'

    real_T MATLABFunction_weight[123];

    // Expression: width_new
    //  Referenced by: '<Root>/MATLAB Function'

    real_T MATLABFunction_width_new[41];

    // Expression: g1
    //  Referenced by: '<Root>/Constant2'

    real_T Constant2_Value[3];
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
    real_T OdeDeltaY[7];
    real_T odeF[13][7];
    real_T odeX0[7];
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
  untitledModelClass();

  // Destructor
  ~untitledModelClass();

  // Real-Time Model get method
  untitledModelClass::RT_MODEL * getRTM();

  // private data and function members
 private:
  // Block signals and states
  DW rtDW;
  X rtX;                               // Block continuous states

  // Real-Time Model
  RT_MODEL rtM;

  // Continuous states update member function
  void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si );

  // Derivatives member function
  void untitled_derivatives();
};

extern const untitledModelClass::ConstB rtConstB;// constant block i/o

// Constant parameters (default storage)
extern const untitledModelClass::ConstP rtConstP;

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
//  '<Root>' : 'untitled'
//  '<S1>'   : 'untitled/MATLAB Function'

#endif                                 // RTW_HEADER_untitled_h_

//
// File trailer for generated code.
//
// [EOF]
//
