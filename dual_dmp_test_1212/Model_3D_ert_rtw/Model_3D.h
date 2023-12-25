//
// File: Model_3D.h
//
// Code generated for Simulink model 'Model_3D'.
//
// Model version                  : 3.19
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Sun Dec 24 15:41:37 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_Model_3D_h_
#define RTW_HEADER_Model_3D_h_
#include <cmath>
#include <cstring>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "Model_3D_types.h"

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
  real_T x4[3];                        // '<S1>/Integrator5'
  real_T Gain18[3];                    // '<S1>/Gain18'
  real_T x1[3];                        // '<S1>/Integrator1'
  real_T x2[3];                        // '<S1>/Integrator'
  real_T Add1[3];                      // '<S9>/Add1'
  real_T x3[3];                        // '<S1>/Integrator3'
  real_T Add[3];                       // '<S1>/Add'
  real_T Gain27[3];                    // '<S1>/Gain27'
  real_T Gain25;                       // '<S1>/Gain25'
  real_T Gain16;                       // '<S1>/Gain16'
  real_T x3_o[3];                      // '<S2>/Integrator5'
  real_T Gain18_e[3];                  // '<S2>/Gain18'
  real_T Gain16_h;                     // '<S2>/Gain16'
  real_T x3_e[3];                      // '<S2>/Integrator3'
  real_T Gain27_f[3];                  // '<S2>/Gain27'
  real_T Gain25_p;                     // '<S2>/Gain25'
  real_T Gain7;                        // '<S2>/Gain7'
  real_T Gm;                           // '<Root>/Gm '
  real_T Gm_d;                         // '<Root>/Gm  '
  real_T Gain9;                        // '<S2>/Gain9'
} B_Model_3D_T;

// Continuous states (default storage)
typedef struct {
  real_T Integrator4_CSTATE;           // '<S1>/Integrator4'
  real_T x1_CSTATE[3];                 // '<S1>/x1'
  real_T x2_CSTATE[3];                 // '<S1>/x2'
  real_T gamma2s_CSTATE;               // '<Root>/gamma2//s'
  real_T gamma1s_CSTATE;               // '<Root>/-gamma1//s'
  real_T referencemodel_CSTATE[2];     // '<Root>/reference model'
  real_T right_CSTATE[3];              // '<S1>/right'
  real_T Integrator5_CSTATE[3];        // '<S1>/Integrator5'
  real_T Integrator1_CSTATE[3];        // '<S1>/Integrator1'
  real_T Integrator_CSTATE[3];         // '<S1>/Integrator'
  real_T left_CSTATE[3];               // '<S1>/left'
  real_T Integrator3_CSTATE[3];        // '<S1>/Integrator3'
  real_T Integrator2_CSTATE;           // '<S1>/Integrator2'
  real_T Integrator4_CSTATE_k;         // '<S2>/Integrator4'
  real_T Integrator5_CSTATE_l[3];      // '<S2>/Integrator5'
  real_T right_CSTATE_g[3];            // '<S2>/right'
  real_T Integrator2_CSTATE_n;         // '<S2>/Integrator2'
  real_T Integrator3_CSTATE_j[3];      // '<S2>/Integrator3'
  real_T left_CSTATE_g[3];             // '<S2>/left'
  real_T Integrator7_CSTATE;           // '<S2>/Integrator7'
  real_T Gm_CSTATE[2];                 // '<Root>/Gm '
  real_T Gm_CSTATE_n[2];               // '<Root>/Gm  '
  real_T Integrator8_CSTATE;           // '<S2>/Integrator8'
} X_Model_3D_T;

// State derivatives (default storage)
typedef struct {
  real_T Integrator4_CSTATE;           // '<S1>/Integrator4'
  real_T x1_CSTATE[3];                 // '<S1>/x1'
  real_T x2_CSTATE[3];                 // '<S1>/x2'
  real_T gamma2s_CSTATE;               // '<Root>/gamma2//s'
  real_T gamma1s_CSTATE;               // '<Root>/-gamma1//s'
  real_T referencemodel_CSTATE[2];     // '<Root>/reference model'
  real_T right_CSTATE[3];              // '<S1>/right'
  real_T Integrator5_CSTATE[3];        // '<S1>/Integrator5'
  real_T Integrator1_CSTATE[3];        // '<S1>/Integrator1'
  real_T Integrator_CSTATE[3];         // '<S1>/Integrator'
  real_T left_CSTATE[3];               // '<S1>/left'
  real_T Integrator3_CSTATE[3];        // '<S1>/Integrator3'
  real_T Integrator2_CSTATE;           // '<S1>/Integrator2'
  real_T Integrator4_CSTATE_k;         // '<S2>/Integrator4'
  real_T Integrator5_CSTATE_l[3];      // '<S2>/Integrator5'
  real_T right_CSTATE_g[3];            // '<S2>/right'
  real_T Integrator2_CSTATE_n;         // '<S2>/Integrator2'
  real_T Integrator3_CSTATE_j[3];      // '<S2>/Integrator3'
  real_T left_CSTATE_g[3];             // '<S2>/left'
  real_T Integrator7_CSTATE;           // '<S2>/Integrator7'
  real_T Gm_CSTATE[2];                 // '<Root>/Gm '
  real_T Gm_CSTATE_n[2];               // '<Root>/Gm  '
  real_T Integrator8_CSTATE;           // '<S2>/Integrator8'
} XDot_Model_3D_T;

// State disabled
typedef struct {
  boolean_T Integrator4_CSTATE;        // '<S1>/Integrator4'
  boolean_T x1_CSTATE[3];              // '<S1>/x1'
  boolean_T x2_CSTATE[3];              // '<S1>/x2'
  boolean_T gamma2s_CSTATE;            // '<Root>/gamma2//s'
  boolean_T gamma1s_CSTATE;            // '<Root>/-gamma1//s'
  boolean_T referencemodel_CSTATE[2];  // '<Root>/reference model'
  boolean_T right_CSTATE[3];           // '<S1>/right'
  boolean_T Integrator5_CSTATE[3];     // '<S1>/Integrator5'
  boolean_T Integrator1_CSTATE[3];     // '<S1>/Integrator1'
  boolean_T Integrator_CSTATE[3];      // '<S1>/Integrator'
  boolean_T left_CSTATE[3];            // '<S1>/left'
  boolean_T Integrator3_CSTATE[3];     // '<S1>/Integrator3'
  boolean_T Integrator2_CSTATE;        // '<S1>/Integrator2'
  boolean_T Integrator4_CSTATE_k;      // '<S2>/Integrator4'
  boolean_T Integrator5_CSTATE_l[3];   // '<S2>/Integrator5'
  boolean_T right_CSTATE_g[3];         // '<S2>/right'
  boolean_T Integrator2_CSTATE_n;      // '<S2>/Integrator2'
  boolean_T Integrator3_CSTATE_j[3];   // '<S2>/Integrator3'
  boolean_T left_CSTATE_g[3];          // '<S2>/left'
  boolean_T Integrator7_CSTATE;        // '<S2>/Integrator7'
  boolean_T Gm_CSTATE[2];              // '<Root>/Gm '
  boolean_T Gm_CSTATE_n[2];            // '<Root>/Gm  '
  boolean_T Integrator8_CSTATE;        // '<S2>/Integrator8'
} XDis_Model_3D_T;

// Invariant block signals (default storage)
typedef const struct tag_ConstB_Model_3D_T {
  real_T Sum7[3];                      // '<S1>/Sum7'
  real_T Gain30[3];                    // '<S1>/Gain30'
  real_T Sum3[3];                      // '<S1>/Sum3'
  real_T Gain32[3];                    // '<S1>/Gain32'
  real_T Sum3_a[3];                    // '<S2>/Sum3'
  real_T Gain32_m[3];                  // '<S2>/Gain32'
  real_T Sum7_i[3];                    // '<S2>/Sum7'
  real_T Gain30_f[3];                  // '<S2>/Gain30'
} ConstB_Model_3D_T;

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
  // Pooled Parameter (Mixed Expressions)
  //  Referenced by:
  //    '<S1>/MATLAB Function14'
  //    '<S1>/MATLAB Function2'
  //    '<S2>/MATLAB Function'
  //    '<S2>/MATLAB Function1'
  //    '<S2>/MATLAB Function2'

  real_T pooled1[41];

  // Pooled Parameter (Expression: weight)
  //  Referenced by:
  //    '<S1>/MATLAB Function14'
  //    '<S1>/MATLAB Function2'
  //    '<S2>/MATLAB Function'
  //    '<S2>/MATLAB Function1'
  //    '<S2>/MATLAB Function2'

  real_T pooled2[123];

  // Pooled Parameter (Mixed Expressions)
  //  Referenced by:
  //    '<S1>/MATLAB Function14'
  //    '<S1>/MATLAB Function2'
  //    '<S2>/MATLAB Function'
  //    '<S2>/MATLAB Function1'
  //    '<S2>/MATLAB Function2'

  real_T pooled3[41];

  // Pooled Parameter (Expression: g1)
  //  Referenced by:
  //    '<S1>/Constant2'
  //    '<S2>/Constant2'

  real_T pooled5[3];
} ConstP_Model_3D_T;

// Parameters (default storage)
struct P_Model_3D_T_ {
  real_T b1;                           // Variable: b1
                                          //  Referenced by:
                                          //    '<S1>/Gain2'
                                          //    '<S1>/Gain5'

  real_T b2;                           // Variable: b2
                                          //  Referenced by:
                                          //    '<S1>/Gain1'
                                          //    '<S1>/Gain6'
                                          //    '<S9>/Gain11'
                                          //    '<S9>/Gain9'

  real_T b3;                           // Variable: b3
                                          //  Referenced by:
                                          //    '<S9>/Gain10'
                                          //    '<S9>/Gain14'

  real_T k1;                           // Variable: k1
                                          //  Referenced by:
                                          //    '<S1>/Gain3'
                                          //    '<S1>/Gain7'

  real_T k2;                           // Variable: k2
                                          //  Referenced by:
                                          //    '<S1>/Gain'
                                          //    '<S1>/Gain4'
                                          //    '<S9>/Gain12'
                                          //    '<S9>/Gain15'

  real_T k3;                           // Variable: k3
                                          //  Referenced by:
                                          //    '<S9>/Gain13'
                                          //    '<S9>/Gain8'

};

// Real-time Model Data Structure
struct tag_RTM_Model_3D_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_Model_3D_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T OdeDeltaY[50];
  real_T odeF[13][50];
  real_T odeX0[50];
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

extern const ConstB_Model_3D_T Model_3D_ConstB;// constant block i/o

// Constant parameters (default storage)
extern const ConstP_Model_3D_T Model_3D_ConstP;

// Class declaration for model Model_3D
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
  RT_MODEL_Model_3D_T * getRTM();

  // private data and function members
 private:
  // Tunable parameters
  static P_Model_3D_T Model_3D_P;

  // Block signals
  B_Model_3D_T Model_3D_B;
  X_Model_3D_T Model_3D_X;             // Block continuous states

  // Real-Time Model
  RT_MODEL_Model_3D_T Model_3D_M;

  // private member function(s) for subsystem '<S1>/MATLAB Function14'
  static void Model_3D_MATLABFunction14(real_T rtu_u, real_T rty_out[3]);

  // private member function(s) for subsystem '<S1>/MATLAB Function4'
  static void Model_3D_MATLABFunction4(const real_T rtu_u[3], real_T *rty_y);

  // Continuous states update member function
  void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si );

  // Derivatives member function
  void Model_3D_derivatives();
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S1>/Scope3' : Unused code path elimination
//  Block '<S1>/Scope4' : Unused code path elimination
//  Block '<S1>/couping' : Unused code path elimination
//  Block '<S1>/input' : Unused code path elimination
//  Block '<Root>/OUT_couple' : Unused code path elimination
//  Block '<Root>/Scope1' : Unused code path elimination
//  Block '<S2>/Constant7' : Unused code path elimination
//  Block '<S2>/Constant8' : Unused code path elimination
//  Block '<S2>/Constant9' : Unused code path elimination
//  Block '<S2>/Gain10' : Unused code path elimination
//  Block '<S2>/Gain8' : Unused code path elimination
//  Block '<S2>/Product3' : Unused code path elimination
//  Block '<S2>/Scope10' : Unused code path elimination
//  Block '<S2>/Scope2' : Unused code path elimination
//  Block '<S2>/Scope3' : Unused code path elimination
//  Block '<S2>/Scope4' : Unused code path elimination
//  Block '<S2>/Scope5' : Unused code path elimination
//  Block '<S2>/Scope6' : Unused code path elimination
//  Block '<S2>/Scope7' : Unused code path elimination
//  Block '<S2>/Scope8' : Unused code path elimination
//  Block '<S2>/Scope9' : Unused code path elimination
//  Block '<S2>/Step' : Unused code path elimination
//  Block '<S2>/Sum5' : Unused code path elimination
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
//  '<Root>' : 'Model_3D'
//  '<S1>'   : 'Model_3D/3D PATH'
//  '<S2>'   : 'Model_3D/true_demo'
//  '<S3>'   : 'Model_3D/3D PATH/3D'
//  '<S4>'   : 'Model_3D/3D PATH/MATLAB Function14'
//  '<S5>'   : 'Model_3D/3D PATH/MATLAB Function2'
//  '<S6>'   : 'Model_3D/3D PATH/MATLAB Function4'
//  '<S7>'   : 'Model_3D/3D PATH/MATLAB Function5'
//  '<S8>'   : 'Model_3D/3D PATH/Right_3D'
//  '<S9>'   : 'Model_3D/3D PATH/Subsystem'
//  '<S10>'  : 'Model_3D/true_demo/MATLAB Function'
//  '<S11>'  : 'Model_3D/true_demo/MATLAB Function1'
//  '<S12>'  : 'Model_3D/true_demo/MATLAB Function2'

#endif                                 // RTW_HEADER_Model_3D_h_

//
// File trailer for generated code.
//
// [EOF]
//
