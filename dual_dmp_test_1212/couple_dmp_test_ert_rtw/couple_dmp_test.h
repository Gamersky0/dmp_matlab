//
// File: couple_dmp_test.h
//
// Code generated for Simulink model 'couple_dmp_test'.
//
// Model version                  : 1.17
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Sun Dec 24 16:14:04 2023
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
    real_T m_X1[3];                    // '<S6>/x1'
    real_T m_X2[3];                    // '<S6>/x2'
    real_T m_X3[3];                    // '<S3>/left'
    real_T m_X2dot[3];                 // '<S6>/Integrator'
    real_T m_X3dot[3];                 // '<S3>/Integrator3'
    real_T m_X1dot[3];                 // '<S6>/Integrator1'
    real_T Add[3];                     // '<S6>/Add'
    real_T m_X4[3];                    // '<S4>/right'
    real_T m_X4dot[3];                 // '<S4>/Integrator5'
    real_T Add1[3];                    // '<S6>/Add1'
    real_T Gain32[3];                  // '<S4>/Gain32'
    real_T Gain18[3];                  // '<S4>/Gain18'
    real_T Gain30[3];                  // '<S3>/Gain30'
    real_T Gain27[3];                  // '<S3>/Gain27'
    real_T x3[3];                      // '<S2>/Integrator5'
    real_T Gain32_f[3];                // '<S2>/Gain32'
    real_T Gain18_f[3];                // '<S2>/Gain18'
    real_T x3_a[3];                    // '<S2>/Integrator3'
    real_T Gain30_k[3];                // '<S2>/Gain30'
    real_T Gain27_l[3];                // '<S2>/Gain27'
    real_T m_obs_weight_r[3];          // '<S4>/3D'
    real_T m_obs_weight_l[3];          // '<S3>/Right_3D'
    real_T m_Ft;                       // '<Root>/  '
    real_T m_FtXp;                     // '<Root>/   '
    real_T m_Xm;                       // '<Root>/reference model'
    real_T m_e;                        // '<Root>/Sum'
    real_T m_Kt;                       // '<Root>/ '
    real_T Step;                       // '<Root>/Step'
    real_T m_Ktr;                      // '<Root>/     '
    real_T m_G_right;                  // '<S1>/Gain20'
    real_T m_G_left;                   // '<S1>/Gain22'
    real_T Gain25;                     // '<S3>/Gain25'
    real_T Gain16;                     // '<S4>/Gain16'
    real_T Gain16_g;                   // '<S2>/Gain16'
    real_T Gain25_j;                   // '<S2>/Gain25'
    real_T Gain7;                      // '<S2>/Gain7'
    real_T Gm;                         // '<Root>/Gm '
    real_T Gm_p;                       // '<Root>/Gm  '
    real_T Gain9;                      // '<S2>/Gain9'
    real_T m_Xp;                       // '<S1>/MATLAB Function4'
  } DW;

  // Continuous states (default storage)
  typedef struct {
    real_T x1_CSTATE[3];               // '<S6>/x1'
    real_T x2_CSTATE[3];               // '<S6>/x2'
    real_T left_CSTATE[3];             // '<S3>/left'
    real_T Integrator_CSTATE[3];       // '<S6>/Integrator'
    real_T Integrator3_CSTATE[3];      // '<S3>/Integrator3'
    real_T Integrator1_CSTATE[3];      // '<S6>/Integrator1'
    real_T right_CSTATE[3];            // '<S4>/right'
    real_T Integrator5_CSTATE[3];      // '<S4>/Integrator5'
    real_T gamma2s_CSTATE;             // '<Root>/gamma2//s'
    real_T referencemodel_CSTATE[2];   // '<Root>/reference model'
    real_T gamma1s_CSTATE;             // '<Root>/-gamma1//s'
    real_T Integrator4_CSTATE;         // '<S4>/Integrator4'
    real_T Integrator2_CSTATE;         // '<S3>/Integrator2'
    real_T Integrator5_CSTATE_e[3];    // '<S2>/Integrator5'
    real_T Integrator4_CSTATE_p;       // '<S2>/Integrator4'
    real_T right_CSTATE_c[3];          // '<S2>/right'
    real_T Integrator3_CSTATE_e[3];    // '<S2>/Integrator3'
    real_T left_CSTATE_b[3];           // '<S2>/left'
    real_T Integrator2_CSTATE_n;       // '<S2>/Integrator2'
    real_T Integrator7_CSTATE;         // '<S2>/Integrator7'
    real_T Gm_CSTATE[2];               // '<Root>/Gm '
    real_T Gm_CSTATE_e[2];             // '<Root>/Gm  '
    real_T Integrator8_CSTATE;         // '<S2>/Integrator8'
  } X;

  // State derivatives (default storage)
  typedef struct {
    real_T x1_CSTATE[3];               // '<S6>/x1'
    real_T x2_CSTATE[3];               // '<S6>/x2'
    real_T left_CSTATE[3];             // '<S3>/left'
    real_T Integrator_CSTATE[3];       // '<S6>/Integrator'
    real_T Integrator3_CSTATE[3];      // '<S3>/Integrator3'
    real_T Integrator1_CSTATE[3];      // '<S6>/Integrator1'
    real_T right_CSTATE[3];            // '<S4>/right'
    real_T Integrator5_CSTATE[3];      // '<S4>/Integrator5'
    real_T gamma2s_CSTATE;             // '<Root>/gamma2//s'
    real_T referencemodel_CSTATE[2];   // '<Root>/reference model'
    real_T gamma1s_CSTATE;             // '<Root>/-gamma1//s'
    real_T Integrator4_CSTATE;         // '<S4>/Integrator4'
    real_T Integrator2_CSTATE;         // '<S3>/Integrator2'
    real_T Integrator5_CSTATE_e[3];    // '<S2>/Integrator5'
    real_T Integrator4_CSTATE_p;       // '<S2>/Integrator4'
    real_T right_CSTATE_c[3];          // '<S2>/right'
    real_T Integrator3_CSTATE_e[3];    // '<S2>/Integrator3'
    real_T left_CSTATE_b[3];           // '<S2>/left'
    real_T Integrator2_CSTATE_n;       // '<S2>/Integrator2'
    real_T Integrator7_CSTATE;         // '<S2>/Integrator7'
    real_T Gm_CSTATE[2];               // '<Root>/Gm '
    real_T Gm_CSTATE_e[2];             // '<Root>/Gm  '
    real_T Integrator8_CSTATE;         // '<S2>/Integrator8'
  } XDot;

  // State disabled
  typedef struct {
    boolean_T x1_CSTATE[3];            // '<S6>/x1'
    boolean_T x2_CSTATE[3];            // '<S6>/x2'
    boolean_T left_CSTATE[3];          // '<S3>/left'
    boolean_T Integrator_CSTATE[3];    // '<S6>/Integrator'
    boolean_T Integrator3_CSTATE[3];   // '<S3>/Integrator3'
    boolean_T Integrator1_CSTATE[3];   // '<S6>/Integrator1'
    boolean_T right_CSTATE[3];         // '<S4>/right'
    boolean_T Integrator5_CSTATE[3];   // '<S4>/Integrator5'
    boolean_T gamma2s_CSTATE;          // '<Root>/gamma2//s'
    boolean_T referencemodel_CSTATE[2];// '<Root>/reference model'
    boolean_T gamma1s_CSTATE;          // '<Root>/-gamma1//s'
    boolean_T Integrator4_CSTATE;      // '<S4>/Integrator4'
    boolean_T Integrator2_CSTATE;      // '<S3>/Integrator2'
    boolean_T Integrator5_CSTATE_e[3]; // '<S2>/Integrator5'
    boolean_T Integrator4_CSTATE_p;    // '<S2>/Integrator4'
    boolean_T right_CSTATE_c[3];       // '<S2>/right'
    boolean_T Integrator3_CSTATE_e[3]; // '<S2>/Integrator3'
    boolean_T left_CSTATE_b[3];        // '<S2>/left'
    boolean_T Integrator2_CSTATE_n;    // '<S2>/Integrator2'
    boolean_T Integrator7_CSTATE;      // '<S2>/Integrator7'
    boolean_T Gm_CSTATE[2];            // '<Root>/Gm '
    boolean_T Gm_CSTATE_e[2];          // '<Root>/Gm  '
    boolean_T Integrator8_CSTATE;      // '<S2>/Integrator8'
  } XDis;

  // Parameters (default storage)
  struct P {
    real_T D[3];                       // Variable: D
                                          //  Referenced by:
                                          //    '<S2>/Gain19'
                                          //    '<S2>/Gain28'
                                          //    '<S3>/Gain28'
                                          //    '<S4>/Gain19'

    real_T b1;                         // Variable: b1
                                          //  Referenced by:
                                          //    '<S6>/Gain2'
                                          //    '<S6>/Gain5'

    real_T b2;                         // Variable: b2
                                          //  Referenced by:
                                          //    '<S6>/Gain1'
                                          //    '<S6>/Gain11'
                                          //    '<S6>/Gain6'
                                          //    '<S6>/Gain9'

    real_T b3;                         // Variable: b3
                                          //  Referenced by:
                                          //    '<S6>/Gain10'
                                          //    '<S6>/Gain14'

    real_T cc[41];                     // Variable: cc
                                          //  Referenced by:
                                          //    '<S2>/MATLAB Function2'
                                          //    '<S3>/MATLAB Function14'
                                          //    '<S4>/MATLAB Function2'

    real_T cc_new[41];                 // Variable: cc_new
                                          //  Referenced by:
                                          //    '<S2>/MATLAB Function'
                                          //    '<S2>/MATLAB Function1'

    real_T g1[3];                      // Variable: g1
                                          //  Referenced by:
                                          //    '<Root>/Constant'
                                          //    '<S2>/Constant2'

    real_T g2[3];                      // Variable: g2
                                          //  Referenced by:
                                          //    '<Root>/Constant1'
                                          //    '<S2>/Constant1'

    real_T k1;                         // Variable: k1
                                          //  Referenced by:
                                          //    '<S6>/Gain3'
                                          //    '<S6>/Gain7'

    real_T k2;                         // Variable: k2
                                          //  Referenced by:
                                          //    '<S6>/Gain'
                                          //    '<S6>/Gain12'
                                          //    '<S6>/Gain15'
                                          //    '<S6>/Gain4'

    real_T k3;                         // Variable: k3
                                          //  Referenced by:
                                          //    '<S6>/Gain13'
                                          //    '<S6>/Gain8'

    real_T left_0[3];                  // Variable: left_0
                                          //  Referenced by:
                                          //    '<S2>/Constant4'
                                          //    '<S2>/left'
                                          //    '<S3>/Constant4'
                                          //    '<S3>/left'

    real_T right_0[3];                 // Variable: right_0
                                          //  Referenced by:
                                          //    '<S2>/Constant5'
                                          //    '<S2>/right'
                                          //    '<S4>/Constant5'
                                          //    '<S4>/right'

    real_T weight[123];                // Variable: weight
                                          //  Referenced by:
                                          //    '<S2>/MATLAB Function'
                                          //    '<S2>/MATLAB Function1'
                                          //    '<S2>/MATLAB Function2'
                                          //    '<S3>/MATLAB Function14'
                                          //    '<S4>/MATLAB Function2'

    real_T width[41];                  // Variable: width
                                          //  Referenced by:
                                          //    '<S2>/MATLAB Function2'
                                          //    '<S3>/MATLAB Function14'
                                          //    '<S4>/MATLAB Function2'

    real_T width_new[41];              // Variable: width_new
                                          //  Referenced by:
                                          //    '<S2>/MATLAB Function'
                                          //    '<S2>/MATLAB Function1'

  };

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

  // model initialize function
  void initialize();

  // model step function
  void step(real_T *arg_m_Xp, real_T *arg_m_e, real_T arg_X3[3], real_T arg_X4[3], real_T read_Xp, real_T count, bool use_pybullet);

  // Constructor
  SignalDmp();

  // Destructor
  ~SignalDmp();

  // Real-Time Model get method
  SignalDmp::RT_MODEL * getRTM();

  // private data and function members
 private:
  // Tunable parameters
  static P rtP;

  // Block signals and states
  DW rtDW;
  X rtX;                               // Block continuous states

  // Real-Time Model
  RT_MODEL rtM;

  // private member function(s) for subsystem '<S3>/MATLAB Function14'
  static void MATLABFunction14(real_T rtu_u, real_T rty_out[3], P *rtP);

  // Continuous states update member function
  void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si , real_T *arg_m_Xp,
    real_T *arg_m_e, real_T arg_X3[3], real_T arg_X4[3]);

  // Derivatives member function
  void couple_dmp_test_derivatives(real_T *arg_m_Xp, real_T *arg_m_e, real_T
    arg_X3[3], real_T arg_X4[3]);
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S3>/Scope3' : Unused code path elimination
//  Block '<S4>/Scope4' : Unused code path elimination
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
//  Block '<S6>/1//m1' : Eliminated nontunable gain of 1
//  Block '<S6>/1//m2' : Eliminated nontunable gain of 1


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
//  '<S2>'   : 'couple_dmp_test/true_demo'
//  '<S3>'   : 'couple_dmp_test/3D PATH/DMP_left'
//  '<S4>'   : 'couple_dmp_test/3D PATH/DMP_right'
//  '<S5>'   : 'couple_dmp_test/3D PATH/MATLAB Function4'
//  '<S6>'   : 'couple_dmp_test/3D PATH/linear_system'
//  '<S7>'   : 'couple_dmp_test/3D PATH/DMP_left/MATLAB Function14'
//  '<S8>'   : 'couple_dmp_test/3D PATH/DMP_left/Right_3D'
//  '<S9>'   : 'couple_dmp_test/3D PATH/DMP_right/3D'
//  '<S10>'  : 'couple_dmp_test/3D PATH/DMP_right/MATLAB Function2'
//  '<S11>'  : 'couple_dmp_test/true_demo/MATLAB Function'
//  '<S12>'  : 'couple_dmp_test/true_demo/MATLAB Function1'
//  '<S13>'  : 'couple_dmp_test/true_demo/MATLAB Function2'

#endif                                 // RTW_HEADER_couple_dmp_test_h_

//
// File trailer for generated code.
//
// [EOF]
//
