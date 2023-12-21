//
// File: my_model.h
//
// Code generated for Simulink model 'my_model'.
//
// Model version                  : 3.19
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Wed Oct 25 16:20:17 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_my_model_h_
#define RTW_HEADER_my_model_h_
#include <cmath>
#include <cstring>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "my_model_types.h"

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

// Block signals (default storage)
typedef struct {
  real_T Sum;                          // '<Root>/Sum'
  real_T Step;                         // '<Root>/Step'
  real_T Integrator3[3];               // '<S5>/Integrator3'
  real_T Gain27[3];                    // '<S5>/Gain27'
  real_T x1[3];                        // '<S4>/Integrator1'
  real_T x4dot[3];                     // '<S6>/Integrator5'
  real_T x2[3];                        // '<S4>/Integrator'
  real_T Add1[3];                      // '<S4>/Add1'
  real_T Add[3];                       // '<S4>/Add'
  real_T Gain18[3];                    // '<S6>/Gain18'
  real_T Gain16;                       // '<S6>/Gain16'
  real_T Gain25;                       // '<S5>/Gain25'
  real_T Gm;                           // '<Root>/Gm '
  real_T Gm_d;                         // '<Root>/Gm  '
} B_my_model_T;

// Continuous states (default storage)
typedef struct {
  real_T Integrator2_CSTATE;           // '<S5>/Integrator2'
  real_T x1_CSTATE[3];                 // '<S4>/x1'
  real_T x2_CSTATE[3];                 // '<S4>/x2'
  real_T gamma2s_CSTATE;               // '<Root>/gamma2//s'
  real_T gamma1s_CSTATE;               // '<Root>/-gamma1//s'
  real_T referencemodel_CSTATE[2];     // '<Root>/reference model'
  real_T Integrator3_CSTATE[3];        // '<S5>/Integrator3'
  real_T left_CSTATE[3];               // '<S5>/left'
  real_T right_CSTATE[3];              // '<S6>/right'
  real_T Integrator1_CSTATE[3];        // '<S4>/Integrator1'
  real_T Integrator5_CSTATE[3];        // '<S6>/Integrator5'
  real_T Integrator_CSTATE[3];         // '<S4>/Integrator'
  real_T Integrator4_CSTATE;           // '<S6>/Integrator4'
  real_T Gm_CSTATE[2];                 // '<Root>/Gm '
  real_T Gm_CSTATE_n[2];               // '<Root>/Gm  '
} X_my_model_T;

// State derivatives (default storage)
typedef struct {
  real_T Integrator2_CSTATE;           // '<S5>/Integrator2'
  real_T x1_CSTATE[3];                 // '<S4>/x1'
  real_T x2_CSTATE[3];                 // '<S4>/x2'
  real_T gamma2s_CSTATE;               // '<Root>/gamma2//s'
  real_T gamma1s_CSTATE;               // '<Root>/-gamma1//s'
  real_T referencemodel_CSTATE[2];     // '<Root>/reference model'
  real_T Integrator3_CSTATE[3];        // '<S5>/Integrator3'
  real_T left_CSTATE[3];               // '<S5>/left'
  real_T right_CSTATE[3];              // '<S6>/right'
  real_T Integrator1_CSTATE[3];        // '<S4>/Integrator1'
  real_T Integrator5_CSTATE[3];        // '<S6>/Integrator5'
  real_T Integrator_CSTATE[3];         // '<S4>/Integrator'
  real_T Integrator4_CSTATE;           // '<S6>/Integrator4'
  real_T Gm_CSTATE[2];                 // '<Root>/Gm '
  real_T Gm_CSTATE_n[2];               // '<Root>/Gm  '
} XDot_my_model_T;

// State disabled
typedef struct {
  boolean_T Integrator2_CSTATE;        // '<S5>/Integrator2'
  boolean_T x1_CSTATE[3];              // '<S4>/x1'
  boolean_T x2_CSTATE[3];              // '<S4>/x2'
  boolean_T gamma2s_CSTATE;            // '<Root>/gamma2//s'
  boolean_T gamma1s_CSTATE;            // '<Root>/-gamma1//s'
  boolean_T referencemodel_CSTATE[2];  // '<Root>/reference model'
  boolean_T Integrator3_CSTATE[3];     // '<S5>/Integrator3'
  boolean_T left_CSTATE[3];            // '<S5>/left'
  boolean_T right_CSTATE[3];           // '<S6>/right'
  boolean_T Integrator1_CSTATE[3];     // '<S4>/Integrator1'
  boolean_T Integrator5_CSTATE[3];     // '<S6>/Integrator5'
  boolean_T Integrator_CSTATE[3];      // '<S4>/Integrator'
  boolean_T Integrator4_CSTATE;        // '<S6>/Integrator4'
  boolean_T Gm_CSTATE[2];              // '<Root>/Gm '
  boolean_T Gm_CSTATE_n[2];            // '<Root>/Gm  '
} XDis_my_model_T;

// Invariant block signals (default storage)
typedef const struct tag_ConstB_my_model_T {
  real_T Sum7[3];                      // '<S5>/Sum7'
  real_T Gain30[3];                    // '<S5>/Gain30'
  real_T Sum3[3];                      // '<S6>/Sum3'
  real_T Gain32[3];                    // '<S6>/Gain32'
} ConstB_my_model_T;

#ifndef ODE8_INTG
#define ODE8_INTG

// ODE8 Integration Data
typedef struct {
  real_T *deltaY;                      // output diff
  real_T *f[13];                       // derivatives
  real_T *x0;                          // Initial State
} ODE8_IntgData;

#endif

// Constant parameters (default storage)
typedef struct {
  // Pooled Parameter (Expression: cc)
  //  Referenced by:
  //    '<S5>/MATLAB Function14'
  //    '<S6>/MATLAB Function2'

  real_T pooled1[41];

  // Pooled Parameter (Expression: weight)
  //  Referenced by:
  //    '<S5>/MATLAB Function14'
  //    '<S6>/MATLAB Function2'

  real_T pooled2[123];

  // Pooled Parameter (Expression: width)
  //  Referenced by:
  //    '<S5>/MATLAB Function14'
  //    '<S6>/MATLAB Function2'

  real_T pooled3[41];
} ConstP_my_model_T;

// Real-time Model Data Structure
struct tag_RTM_my_model_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_my_model_T *contStates;
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

extern const ConstB_my_model_T my_model_ConstB;// constant block i/o

// Constant parameters (default storage)
extern const ConstP_my_model_T my_model_ConstP;

// Class declaration for model my_model
class Model_3DModelClass {
  // public data and function members
 public:
  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  Model_3DModelClass();

  // Destructor
  ~Model_3DModelClass();

  // Real-Time Model get method
  RT_MODEL_my_model_T * getRTM();

  // private data and function members
 private:
  // Block signals
  B_my_model_T my_model_B;
  X_my_model_T my_model_X;             // Block continuous states

  // Real-Time Model
  RT_MODEL_my_model_T my_model_M;

  // private member function(s) for subsystem '<S1>/MATLAB Function4'
  static void my_model_MATLABFunction4(const real_T rtu_u[3], real_T *rty_y);

  // private member function(s) for subsystem '<S5>/MATLAB Function14'
  static void my_model_MATLABFunction14(real_T rtu_u, real_T rty_out[3]);

  // Continuous states update member function
  void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si );

  // Derivatives member function
  void my_model_derivatives();
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/OUT_couple' : Unused code path elimination
//  Block '<S4>/1//m1' : Eliminated nontunable gain of 1
//  Block '<S4>/1//m2' : Eliminated nontunable gain of 1


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
//  '<Root>' : 'my_model'
//  '<S1>'   : 'my_model/3D PATH'
//  '<S2>'   : 'my_model/3D PATH/MATLAB Function4'
//  '<S3>'   : 'my_model/3D PATH/MATLAB Function5'
//  '<S4>'   : 'my_model/3D PATH/Subsystem2'
//  '<S5>'   : 'my_model/3D PATH/X3_DMP'
//  '<S6>'   : 'my_model/3D PATH/X4_DMP'
//  '<S7>'   : 'my_model/3D PATH/X3_DMP/MATLAB Function14'
//  '<S8>'   : 'my_model/3D PATH/X3_DMP/Right_3D'
//  '<S9>'   : 'my_model/3D PATH/X4_DMP/3D'
//  '<S10>'  : 'my_model/3D PATH/X4_DMP/MATLAB Function2'

#endif                                 // RTW_HEADER_my_model_h_

//
// File trailer for generated code.
//
// [EOF]
//
