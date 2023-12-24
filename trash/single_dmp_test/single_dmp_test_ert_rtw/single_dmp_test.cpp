//
// File: single_dmp_test.cpp
//
// Code generated for Simulink model 'single_dmp_test'.
//
// Model version                  : 1.5
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Thu Dec  7 13:55:38 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Not run
//
#include "single_dmp_test.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

// private model entry point functions
extern void single_dmp_test_derivatives(real_T arg_l_position_current[3], const
  real_T arg_l_position_initial[3], const real_T arg_l_position_goal[3]);

// This function updates continuous states using the ODE8 fixed-step
//  solver algorithm

void SignalDmp::rt_ertODEUpdateContinuousStates(RTWSolverInfo *si , real_T
  arg_l_position_current[3], const real_T arg_l_position_initial[3], const
  real_T arg_l_position_goal[3])
{
  // Solver Matrices
#define rtNSTAGES                      13

  static real_T rt_ODE8_B[13] = {
    4.174749114153025E-2, 0.0, 0.0, 0.0,
    0.0, -5.54523286112393E-2, 2.393128072011801E-1, 7.03510669403443E-1,
    -7.597596138144609E-1, 6.605630309222863E-1, 1.581874825101233E-1,
    -2.381095387528628E-1, 2.5E-1
  };

  static real_T rt_ODE8_C[13] = {
    0.0, 5.555555555555556E-2, 8.333333333333333E-2, 1.25E-1,
    3.125E-1, 3.75E-1, 1.475E-1, 4.65E-1,
    5.648654513822596E-1, 6.5E-1, 9.246562776405044E-1, 1.0, 1.0
  };

  static real_T rt_ODE8_A[13][13] = {
    // rt_ODE8_A[0][]
    { 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[1][]
    { 5.555555555555556E-2, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[2][]
    { 2.083333333333333E-2, 6.25E-2, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[3][]
    { 3.125E-2, 0.0, 9.375E-2, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[4][]
    { 3.125E-1, 0.0, -1.171875, 1.171875,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[5][]
    { 3.75E-2, 0.0, 0.0, 1.875E-1,
      1.5E-1, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[6][]
    { 4.791013711111111E-2, 0.0, 0.0, 1.122487127777778E-1,
      -2.550567377777778E-2, 1.284682388888889E-2, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[7][]
    { 1.691798978729228E-2, 0.0, 0.0, 3.878482784860432E-1,
      3.597736985150033E-2, 1.969702142156661E-1, -1.727138523405018E-1, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[8][]
    { 6.90957533591923E-2, 0.0, 0.0, -6.342479767288542E-1,
      -1.611975752246041E-1, 1.386503094588253E-1, 9.409286140357563E-1,
      2.11636326481944E-1,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[9][]
    { 1.835569968390454E-1, 0.0, 0.0, -2.468768084315592,
      -2.912868878163005E-1, -2.647302023311738E-2, 2.8478387641928,
      2.813873314698498E-1,
      1.237448998633147E-1, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[10][]
    { -1.215424817395888, 0.0, 0.0, 1.667260866594577E1,
      9.157418284168179E-1, -6.056605804357471, -1.600357359415618E1,
      1.484930308629766E1,
      -1.337157573528985E1, 5.134182648179638, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[11][]
    { 2.588609164382643E-1, 0.0, 0.0, -4.774485785489205,
      -4.350930137770325E-1, -3.049483332072241, 5.577920039936099,
      6.155831589861039,
      -5.062104586736938, 2.193926173180679, 1.346279986593349E-1, 0.0, 0.0 },

    // rt_ODE8_A[12][]
    { 8.224275996265075E-1, 0.0, 0.0, -1.165867325727766E1,
      -7.576221166909362E-1, 7.139735881595818E-1, 1.207577498689006E1,
      -2.127659113920403,
      1.990166207048956, -2.342864715440405E-1, 1.758985777079423E-1, 0.0, 0.0 },
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE8_IntgData *intgData = static_cast<ODE8_IntgData *>(rtsiGetSolverData(si));
  real_T *deltaY = intgData->deltaY;
  real_T *x0 = intgData->x0;
  real_T* f[rtNSTAGES];
  int idx,stagesIdx,statesIdx;
  double deltaX;
  int_T nXc = 7;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  f[0] = intgData->f[0];
  f[1] = intgData->f[1];
  f[2] = intgData->f[2];
  f[3] = intgData->f[3];
  f[4] = intgData->f[4];
  f[5] = intgData->f[5];
  f[6] = intgData->f[6];
  f[7] = intgData->f[7];
  f[8] = intgData->f[8];
  f[9] = intgData->f[9];
  f[10] = intgData->f[10];
  f[11] = intgData->f[11];
  f[12] = intgData->f[12];

  // Save the state values at time t in y and x0
  (void) std::memset(deltaY, 0,
                     static_cast<uint_T>(nXc)*sizeof(real_T));
  (void) std::memcpy(x0, x,
                     nXc*sizeof(real_T));
  for (stagesIdx=0;stagesIdx<rtNSTAGES;stagesIdx++) {
    (void) std::memcpy(x, x0,
                       static_cast<uint_T>(nXc)*sizeof(real_T));
    for (statesIdx=0;statesIdx<nXc;statesIdx++) {
      deltaX = 0;
      for (idx=0;idx<stagesIdx;idx++) {
        deltaX = deltaX + h*rt_ODE8_A[stagesIdx][idx]*f[idx][statesIdx];
      }

      x[statesIdx] = x0[statesIdx] + deltaX;
    }

    if (stagesIdx==0) {
      rtsiSetdX(si, f[stagesIdx]);
      single_dmp_test_derivatives(arg_l_position_current, arg_l_position_initial,
        arg_l_position_goal);
    } else {
      (stagesIdx==rtNSTAGES-1)? rtsiSetT(si, tnew) : rtsiSetT(si, t + h*
        rt_ODE8_C[stagesIdx]);
      rtsiSetdX(si, f[stagesIdx]);
      this->step(arg_l_position_current, arg_l_position_initial,
                 arg_l_position_goal);
      single_dmp_test_derivatives(arg_l_position_current, arg_l_position_initial,
        arg_l_position_goal);
    }

    for (statesIdx=0;statesIdx<nXc;statesIdx++) {
      deltaY[statesIdx] = deltaY[statesIdx] + h*rt_ODE8_B[stagesIdx]*f[stagesIdx]
        [statesIdx];
    }
  }

  for (statesIdx=0;statesIdx<nXc;statesIdx++) {
    x[statesIdx] = x0[statesIdx] + deltaY[statesIdx];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

// Model step function
void SignalDmp::step(real_T arg_l_position_current[3], const real_T
                     arg_l_position_initial[3], const real_T
                     arg_l_position_goal[3])
{
  real_T tem[41];
  real_T tmp[3];
  real_T a;
  int32_T i;
  int32_T k;
  if (rtmIsMajorTimeStep((&rtM))) {
    // set solver stop time
    rtsiSetSolverStopTime(&(&rtM)->solverInfo,(((&rtM)->Timing.clockTick0+1)*
      (&rtM)->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep((&rtM))) {
    (&rtM)->Timing.t[0] = rtsiGetT(&(&rtM)->solverInfo);
  }

  // Outport: '<Root>/l_position_current' incorporates:
  //   Integrator: '<Root>/left'

  arg_l_position_current[0] = rtX.left_CSTATE[0];

  // Integrator: '<Root>/Integrator3'
  rtDW.l_velocity_current[0] = rtX.Integrator3_CSTATE[0];

  // Outport: '<Root>/l_position_current' incorporates:
  //   Integrator: '<Root>/left'

  arg_l_position_current[1] = rtX.left_CSTATE[1];

  // Integrator: '<Root>/Integrator3'
  rtDW.l_velocity_current[1] = rtX.Integrator3_CSTATE[1];

  // Outport: '<Root>/l_position_current' incorporates:
  //   Integrator: '<Root>/left'

  arg_l_position_current[2] = rtX.left_CSTATE[2];

  // Integrator: '<Root>/Integrator3'
  rtDW.l_velocity_current[2] = rtX.Integrator3_CSTATE[2];

  // MATLAB Function: '<Root>/MATLAB Function' incorporates:
  //   Integrator: '<Root>/Integrator2'

  for (k = 0; k < 41; k++) {
    a = rtX.Integrator2_CSTATE - rtConstP.MATLABFunction_cc_new[k];
    tem[k] = std::exp(a * a * -rtConstP.MATLABFunction_width_new[k]);
  }

  a = tem[0];
  for (k = 0; k < 40; k++) {
    a += tem[k + 1];
  }

  for (k = 0; k < 3; k++) {
    tmp[k] = 0.0;
    for (i = 0; i < 41; i++) {
      tmp[k] += rtConstP.MATLABFunction_weight[3 * i + k] * tem[i];
    }

    // Gain: '<Root>/Gain27' incorporates:
    //   Gain: '<Root>/Gain26'
    //   Gain: '<Root>/Gain28'
    //   Gain: '<Root>/Gain29'
    //   Gain: '<Root>/Gain30'
    //   Inport: '<Root>/l_position_goal'
    //   Inport: '<Root>/l_position_initial'
    //   Integrator: '<Root>/Integrator2'
    //   Integrator: '<Root>/left'
    //   Product: '<Root>/Product'
    //   Sum: '<Root>/Add4'
    //   Sum: '<Root>/Sum6'
    //   Sum: '<Root>/Sum7'

    rtDW.Gain27[k] = ((((arg_l_position_goal[k] - rtX.left_CSTATE[k]) * 1050.0 +
                        -194.421 * rtDW.l_velocity_current[k]) + tmp[k] *
                       rtX.Integrator2_CSTATE / a * 1050.0) +
                      (arg_l_position_goal[k] - arg_l_position_initial[k]) *
                      -1050.0 * rtX.Integrator2_CSTATE) * 0.1111111111111111;
  }

  // End of MATLAB Function: '<Root>/MATLAB Function'

  // Gain: '<Root>/Gain25' incorporates:
  //   Integrator: '<Root>/Integrator2'

  rtDW.Gain25 = -rtX.Integrator2_CSTATE;
  if (rtmIsMajorTimeStep((&rtM))) {
    rt_ertODEUpdateContinuousStates(&(&rtM)->solverInfo, arg_l_position_current,
      arg_l_position_initial, arg_l_position_goal);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++(&rtM)->Timing.clockTick0;
    (&rtM)->Timing.t[0] = rtsiGetSolverStopTime(&(&rtM)->solverInfo);

    {
      // Update absolute timer for sample time: [0.005s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.005, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      (&rtM)->Timing.clockTick1++;
    }
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void SignalDmp::single_dmp_test_derivatives(real_T arg_l_position_current[3],
  const real_T arg_l_position_initial[3], const real_T arg_l_position_goal[3])
{
  SignalDmp::XDot *_rtXdot;
  _rtXdot = ((XDot *) (&rtM)->derivs);

  // Derivatives for Integrator: '<Root>/left'
  _rtXdot->left_CSTATE[0] = rtDW.l_velocity_current[0];

  // Derivatives for Integrator: '<Root>/Integrator3'
  _rtXdot->Integrator3_CSTATE[0] = rtDW.Gain27[0];

  // Derivatives for Integrator: '<Root>/left'
  _rtXdot->left_CSTATE[1] = rtDW.l_velocity_current[1];

  // Derivatives for Integrator: '<Root>/Integrator3'
  _rtXdot->Integrator3_CSTATE[1] = rtDW.Gain27[1];

  // Derivatives for Integrator: '<Root>/left'
  _rtXdot->left_CSTATE[2] = rtDW.l_velocity_current[2];

  // Derivatives for Integrator: '<Root>/Integrator3'
  _rtXdot->Integrator3_CSTATE[2] = rtDW.Gain27[2];

  // Derivatives for Integrator: '<Root>/Integrator2'
  _rtXdot->Integrator2_CSTATE = rtDW.Gain25;
}

// Model initialize function
void SignalDmp::initialize()
{
  // Registration code
  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&(&rtM)->solverInfo, &(&rtM)->Timing.simTimeStep);
    rtsiSetTPtr(&(&rtM)->solverInfo, &rtmGetTPtr((&rtM)));
    rtsiSetStepSizePtr(&(&rtM)->solverInfo, &(&rtM)->Timing.stepSize0);
    rtsiSetdXPtr(&(&rtM)->solverInfo, &(&rtM)->derivs);
    rtsiSetContStatesPtr(&(&rtM)->solverInfo, (real_T **) &(&rtM)->contStates);
    rtsiSetNumContStatesPtr(&(&rtM)->solverInfo, &(&rtM)->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&(&rtM)->solverInfo, &(&rtM)
      ->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&(&rtM)->solverInfo, &(&rtM)
      ->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&(&rtM)->solverInfo, &(&rtM)
      ->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&(&rtM)->solverInfo, (&rtmGetErrorStatus((&rtM))));
    rtsiSetRTModelPtr(&(&rtM)->solverInfo, (&rtM));
  }

  rtsiSetSimTimeStep(&(&rtM)->solverInfo, MAJOR_TIME_STEP);
  (&rtM)->intgData.deltaY= (&rtM)->OdeDeltaY;
  (&rtM)->intgData.f[0] = (&rtM)->odeF[0];
  (&rtM)->intgData.f[1] = (&rtM)->odeF[1];
  (&rtM)->intgData.f[2] = (&rtM)->odeF[2];
  (&rtM)->intgData.f[3] = (&rtM)->odeF[3];
  (&rtM)->intgData.f[4] = (&rtM)->odeF[4];
  (&rtM)->intgData.f[5] = (&rtM)->odeF[5];
  (&rtM)->intgData.f[6] = (&rtM)->odeF[6];
  (&rtM)->intgData.f[7] = (&rtM)->odeF[7];
  (&rtM)->intgData.f[8] = (&rtM)->odeF[8];
  (&rtM)->intgData.f[9] = (&rtM)->odeF[9];
  (&rtM)->intgData.f[10] = (&rtM)->odeF[10];
  (&rtM)->intgData.f[11] = (&rtM)->odeF[11];
  (&rtM)->intgData.f[12] = (&rtM)->odeF[12];
  (&rtM)->intgData.x0 = (&rtM)->odeX0;
  (&rtM)->contStates = ((X *) &rtX);
  rtsiSetSolverData(&(&rtM)->solverInfo, static_cast<void *>(&(&rtM)->intgData));
  rtsiSetSolverName(&(&rtM)->solverInfo,"ode8");
  rtmSetTPtr((&rtM), &(&rtM)->Timing.tArray[0]);
  (&rtM)->Timing.stepSize0 = 0.005;

  // InitializeConditions for Integrator: '<Root>/left'
  rtX.left_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<Root>/Integrator3'
  rtX.Integrator3_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<Root>/left'
  rtX.left_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<Root>/Integrator3'
  rtX.Integrator3_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<Root>/left'
  rtX.left_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<Root>/Integrator3'
  rtX.Integrator3_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<Root>/Integrator2'
  rtX.Integrator2_CSTATE = 1.0;
}

// Constructor
SignalDmp::SignalDmp() :
  rtDW(),
  rtX(),
  rtM()
{
  // Currently there is no constructor body generated.
}

// Destructor
SignalDmp::~SignalDmp()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
SignalDmp::RT_MODEL * SignalDmp::getRTM()
{
  return (&rtM);
}

//
// File trailer for generated code.
//
// [EOF]
//
