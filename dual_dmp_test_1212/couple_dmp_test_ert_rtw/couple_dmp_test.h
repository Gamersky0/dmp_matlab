//
// File: couple_dmp_test.h
//
// Code generated for Simulink model 'couple_dmp_test'.
//
// Model version                  : 1.15
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Tue Dec 19 15:22:18 2023
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

//
//  Exported Global Parameters
//
//  Note: Exported global parameters are tunable parameters with an exported
//  global storage class designation.  Code generation will declare the memory for
//  these parameters and exports their symbols.
//

extern real_T g1[3];                   // Variable: g1
                                          //  Referenced by: '<Root>/Constant'

extern real_T g2[3];                   // Variable: g2
                                          //  Referenced by: '<Root>/Constant1'


// Class declaration for model couple_dmp_test
class SignalDmp {
  // public data and function members
 public:
  // Block signals and states (default storage) for system '<Root>'
  typedef struct {
    real_T Gain30[3];                  // '<S2>/Gain30'
    real_T m_X1[3];                    // '<S5>/x1'
    real_T m_X2[3];                    // '<S5>/x2'
    real_T m_X3dot[3];                 // '<S2>/Integrator3'
    real_T m_X3[3];                    // '<S2>/left'
    real_T Gain27[3];                  // '<S2>/Gain27'
    real_T m_X2dot[3];                 // '<S5>/Integrator'
    real_T m_X1dot[3];                 // '<S5>/Integrator1'
    real_T Add[3];                     // '<S5>/Add'
    real_T m_X4[3];                    // '<S3>/right'
    real_T m_X4dot[3];                 // '<S3>/Integrator5'
    real_T Add1[3];                    // '<S5>/Add1'
    real_T Gain32[3];                  // '<S3>/Gain32'
    real_T Gain18[3];                  // '<S3>/Gain18'
    real_T m_obs_weight_r[3];          // '<S3>/3D'
    real_T m_obs_weight_l[3];          // '<S2>/Right_3D'
    real_T m_Ft;                       // '<Root>/  '
    real_T m_FtXp;                     // '<Root>/   '
    real_T m_Xm;                       // '<Root>/reference model'
    real_T m_e;                        // '<Root>/Sum'
    real_T m_Kt;                       // '<Root>/ '
    real_T Step;                       // '<Root>/Step'
    real_T m_Ktr;                      // '<Root>/     '
    real_T m_G_left;                   // '<S1>/Gain22'
    real_T m_G_right;                  // '<S1>/Gain20'
    real_T Gain16;                     // '<S3>/Gain16'
    real_T Gain25;                     // '<S2>/Gain25'
    real_T Gm;                         // '<Root>/Gm '
    real_T Gm_p;                       // '<Root>/Gm  '
    real_T m_Xp;                       // '<S1>/MATLAB Function4'
  } DW;

  // Continuous states (default storage)
  typedef struct {
    real_T Integrator2_CSTATE;         // '<S2>/Integrator2'
    real_T x1_CSTATE[3];               // '<S5>/x1'
    real_T x2_CSTATE[3];               // '<S5>/x2'
    real_T gamma2s_CSTATE;             // '<Root>/gamma2//s'
    real_T referencemodel_CSTATE[2];   // '<Root>/reference model'
    real_T gamma1s_CSTATE;             // '<Root>/-gamma1//s'
    real_T Integrator3_CSTATE[3];      // '<S2>/Integrator3'
    real_T left_CSTATE[3];             // '<S2>/left'
    real_T Integrator_CSTATE[3];       // '<S5>/Integrator'
    real_T Integrator1_CSTATE[3];      // '<S5>/Integrator1'
    real_T right_CSTATE[3];            // '<S3>/right'
    real_T Integrator5_CSTATE[3];      // '<S3>/Integrator5'
    real_T Integrator4_CSTATE;         // '<S3>/Integrator4'
    real_T Gm_CSTATE[2];               // '<Root>/Gm '
    real_T Gm_CSTATE_e[2];             // '<Root>/Gm  '
  } X;

  // State derivatives (default storage)
  typedef struct {
    real_T Integrator2_CSTATE;         // '<S2>/Integrator2'
    real_T x1_CSTATE[3];               // '<S5>/x1'
    real_T x2_CSTATE[3];               // '<S5>/x2'
    real_T gamma2s_CSTATE;             // '<Root>/gamma2//s'
    real_T referencemodel_CSTATE[2];   // '<Root>/reference model'
    real_T gamma1s_CSTATE;             // '<Root>/-gamma1//s'
    real_T Integrator3_CSTATE[3];      // '<S2>/Integrator3'
    real_T left_CSTATE[3];             // '<S2>/left'
    real_T Integrator_CSTATE[3];       // '<S5>/Integrator'
    real_T Integrator1_CSTATE[3];      // '<S5>/Integrator1'
    real_T right_CSTATE[3];            // '<S3>/right'
    real_T Integrator5_CSTATE[3];      // '<S3>/Integrator5'
    real_T Integrator4_CSTATE;         // '<S3>/Integrator4'
    real_T Gm_CSTATE[2];               // '<Root>/Gm '
    real_T Gm_CSTATE_e[2];             // '<Root>/Gm  '
  } XDot;

  // State disabled
  typedef struct {
    boolean_T Integrator2_CSTATE;      // '<S2>/Integrator2'
    boolean_T x1_CSTATE[3];            // '<S5>/x1'
    boolean_T x2_CSTATE[3];            // '<S5>/x2'
    boolean_T gamma2s_CSTATE;          // '<Root>/gamma2//s'
    boolean_T referencemodel_CSTATE[2];// '<Root>/reference model'
    boolean_T gamma1s_CSTATE;          // '<Root>/-gamma1//s'
    boolean_T Integrator3_CSTATE[3];   // '<S2>/Integrator3'
    boolean_T left_CSTATE[3];          // '<S2>/left'
    boolean_T Integrator_CSTATE[3];    // '<S5>/Integrator'
    boolean_T Integrator1_CSTATE[3];   // '<S5>/Integrator1'
    boolean_T right_CSTATE[3];         // '<S3>/right'
    boolean_T Integrator5_CSTATE[3];   // '<S3>/Integrator5'
    boolean_T Integrator4_CSTATE;      // '<S3>/Integrator4'
    boolean_T Gm_CSTATE[2];            // '<Root>/Gm '
    boolean_T Gm_CSTATE_e[2];          // '<Root>/Gm  '
  } XDis;

  // Constant parameters (default storage)
  typedef struct {
    // Pooled Parameter (Expression: cc)
    //  Referenced by:
    //    '<S2>/MATLAB Function14'
    //    '<S3>/MATLAB Function2'

    real_T pooled1[41];

    // Pooled Parameter (Expression: weight)
    //  Referenced by:
    //    '<S2>/MATLAB Function14'
    //    '<S3>/MATLAB Function2'

    real_T pooled2[123];

    // Pooled Parameter (Expression: width)
    //  Referenced by:
    //    '<S2>/MATLAB Function14'
    //    '<S3>/MATLAB Function2'

    real_T pooled3[41];
  } ConstP;

  // Parameters (default storage)
  struct P {
    real_T b1;                         // Variable: b1
                                          //  Referenced by:
                                          //    '<S5>/Gain2'
                                          //    '<S5>/Gain5'

    real_T b2;                         // Variable: b2
                                          //  Referenced by:
                                          //    '<S5>/Gain1'
                                          //    '<S5>/Gain11'
                                          //    '<S5>/Gain6'
                                          //    '<S5>/Gain9'

    real_T b3;                         // Variable: b3
                                          //  Referenced by:
                                          //    '<S5>/Gain10'
                                          //    '<S5>/Gain14'

    real_T k1;                         // Variable: k1
                                          //  Referenced by:
                                          //    '<S5>/Gain3'
                                          //    '<S5>/Gain7'

    real_T k2;                         // Variable: k2
                                          //  Referenced by:
                                          //    '<S5>/Gain'
                                          //    '<S5>/Gain12'
                                          //    '<S5>/Gain15'
                                          //    '<S5>/Gain4'

    real_T k3;                         // Variable: k3
                                          //  Referenced by:
                                          //    '<S5>/Gain13'
                                          //    '<S5>/Gain8'

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
  void initialize(real_T ini_g1[3], real_T ini_g2[3]);

  // model step function
  void step(real_T *arg_m_Xp, real_T *arg_m_e, real_T arg_X3[3], real_T arg_X4[3]);

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

  // private member function(s) for subsystem '<S2>/MATLAB Function14'
  static void MATLABFunction14(real_T rtu_u, real_T rty_out[3]);

  // Continuous states update member function
  void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si , real_T *arg_m_Xp,
    real_T *arg_m_e, real_T arg_X3[3], real_T arg_X4[3]);

  // Derivatives member function
  void couple_dmp_test_derivatives(real_T *arg_m_Xp, real_T *arg_m_e, real_T
    arg_X3[3], real_T arg_X4[3]);
};

// Constant parameters (default storage)
extern const SignalDmp::ConstP rtConstP;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S2>/Scope3' : Unused code path elimination
//  Block '<S3>/Scope4' : Unused code path elimination
//  Block '<S5>/1//m1' : Eliminated nontunable gain of 1
//  Block '<S5>/1//m2' : Eliminated nontunable gain of 1


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
//  '<S2>'   : 'couple_dmp_test/3D PATH/DMP_left'
//  '<S3>'   : 'couple_dmp_test/3D PATH/DMP_right'
//  '<S4>'   : 'couple_dmp_test/3D PATH/MATLAB Function4'
//  '<S5>'   : 'couple_dmp_test/3D PATH/linear_system'
//  '<S6>'   : 'couple_dmp_test/3D PATH/DMP_left/MATLAB Function14'
//  '<S7>'   : 'couple_dmp_test/3D PATH/DMP_left/Right_3D'
//  '<S8>'   : 'couple_dmp_test/3D PATH/DMP_right/3D'
//  '<S9>'   : 'couple_dmp_test/3D PATH/DMP_right/MATLAB Function2'

#endif                                 // RTW_HEADER_couple_dmp_test_h_

//
// File trailer for generated code.
//
// [EOF]
//
