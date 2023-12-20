//
// File: couple_dmp_test.cpp
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
#include "couple_dmp_test.h"
#include <iostream>

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

// Exported block parameters
real_T g1[3] = { -1.0, 0.0, 1.0 } ;    // Variable: g1
                                          //  Referenced by: '<Root>/Constant'


real_T g2[3] = { -1.0, 0.6, 1.0 } ;    // Variable: g2
                                          //  Referenced by: '<Root>/Constant1'


// private model entry point functions
extern void couple_dmp_test_derivatives(real_T *arg_m_Xp, real_T *arg_m_e,
  real_T arg_X3[3], real_T arg_X4[3]);

// This function updates continuous states using the ODE8 fixed-step
//  solver algorithm

void SignalDmp::rt_ertODEUpdateContinuousStates(RTWSolverInfo *si , real_T
  *arg_m_Xp, real_T *arg_m_e, real_T arg_X3[3], real_T arg_X4[3])
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
  int_T nXc = 34;
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
      couple_dmp_test_derivatives(arg_m_Xp, arg_m_e, arg_X3, arg_X4);
    } else {
      (stagesIdx==rtNSTAGES-1)? rtsiSetT(si, tnew) : rtsiSetT(si, t + h*
        rt_ODE8_C[stagesIdx]);
      rtsiSetdX(si, f[stagesIdx]);
      this->step(arg_m_Xp, arg_m_e, arg_X3, arg_X4);
      couple_dmp_test_derivatives(arg_m_Xp, arg_m_e, arg_X3, arg_X4);
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

//
// Output and update for atomic system:
//    '<S2>/MATLAB Function14'
//    '<S3>/MATLAB Function2'
//
void SignalDmp::MATLABFunction14(real_T rtu_u, real_T rty_out[3])
{
  real_T tem[41];
  real_T tmp[3];
  real_T a;
  int32_T i;
  int32_T k;
  for (k = 0; k < 41; k++) {
    a = rtu_u - rtConstP.pooled1[k];
    tem[k] = std::exp(a * a * -rtConstP.pooled3[k]);
  }

  a = tem[0];
  for (k = 0; k < 40; k++) {
    a += tem[k + 1];
  }

  for (k = 0; k < 3; k++) {
    tmp[k] = 0.0;
    for (i = 0; i < 41; i++) {
      tmp[k] += rtConstP.pooled2[3 * i + k] * tem[i];
    }

    rty_out[k] = tmp[k] * rtu_u / a;
  }
}

// Model step function
void SignalDmp::step(real_T *arg_m_Xp, real_T *arg_m_e, real_T arg_X3[3], real_T
                     arg_X4[3])
{
  static const real_T axis[6] = { 0.1, 0.15, 0.2, 0.15, 0.1, 0.2 };

  static const real_T center[6] = { 0.2, -0.4, 0.8, 1.2, 0.4, 0.8 };

  real_T rtb_OUT[3];
  real_T Add_tmp;
  real_T Add_tmp_0;
  real_T absxk;
  real_T rtb_Add2;
  real_T rtb_OUT_m;
  real_T scale;
  real_T t;
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

  if (rtmIsMajorTimeStep((&rtM))) {
    // Gain: '<S2>/Gain30' incorporates:
    //   Constant: '<Root>/Constant'
    //   Sum: '<S2>/Sum7'

    rtDW.Gain30[0] = -1050.0 * g1[0];
    rtDW.Gain30[1] = -1050.0 * g1[1];
    rtDW.Gain30[2] = -1050.0 * g1[2];
  }

  // MATLAB Function: '<S1>/MATLAB Function4'
  rtDW.m_Xp = 0.0;
  scale = 3.3121686421112381E-170;

  // Integrator: '<S5>/x1'
  rtDW.m_X1[0] = rtX.x1_CSTATE[0];

  // Integrator: '<S5>/x2'
  rtDW.m_X2[0] = rtX.x2_CSTATE[0];

  // Sum: '<S1>/Sum'
  rtb_OUT_m = rtDW.m_X1[0] - rtDW.m_X2[0];

  // MATLAB Function: '<S1>/MATLAB Function4'
  absxk = std::abs(rtb_OUT_m);
  if (absxk > 3.3121686421112381E-170) {
    t = 3.3121686421112381E-170 / absxk;
    rtDW.m_Xp = rtDW.m_Xp * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    rtDW.m_Xp += t * t;
  }

  // Sum: '<S1>/Sum'
  rtb_OUT[0] = rtb_OUT_m;

  // Integrator: '<S5>/x1'
  rtDW.m_X1[1] = rtX.x1_CSTATE[1];

  // Integrator: '<S5>/x2'
  rtDW.m_X2[1] = rtX.x2_CSTATE[1];

  // Sum: '<S1>/Sum'
  rtb_OUT_m = rtDW.m_X1[1] - rtDW.m_X2[1];

  // MATLAB Function: '<S1>/MATLAB Function4'
  absxk = std::abs(rtb_OUT_m);
  if (absxk > scale) {
    t = scale / absxk;
    rtDW.m_Xp = rtDW.m_Xp * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    rtDW.m_Xp += t * t;
  }

  // Sum: '<S1>/Sum'
  rtb_OUT[1] = rtb_OUT_m;

  // Integrator: '<S5>/x1'
  rtDW.m_X1[2] = rtX.x1_CSTATE[2];

  // Integrator: '<S5>/x2'
  rtDW.m_X2[2] = rtX.x2_CSTATE[2];

  // Sum: '<S1>/Sum'
  rtb_OUT_m = rtDW.m_X1[2] - rtDW.m_X2[2];

  // MATLAB Function: '<S1>/MATLAB Function4'
  absxk = std::abs(rtb_OUT_m);
  if (absxk > scale) {
    t = scale / absxk;
    rtDW.m_Xp = rtDW.m_Xp * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    rtDW.m_Xp += t * t;
  }

  // Sum: '<S1>/Sum'
  rtb_OUT[2] = rtb_OUT_m;

  // MATLAB Function: '<S1>/MATLAB Function4'
  rtDW.m_Xp = scale * std::sqrt(rtDW.m_Xp);

  // Product: '<Root>/  ' incorporates:
  //   TransferFcn: '<Root>/gamma2//s'

  rtDW.m_Ft = 0.5 * rtX.gamma2s_CSTATE * rtDW.m_Xp;

  // Product: '<Root>/   '
  rtDW.m_FtXp = rtDW.m_Ft * rtDW.m_Xp;

  // TransferFcn: '<Root>/reference model'
  rtDW.m_Xm = 0.0;
  rtDW.m_Xm += rtX.referencemodel_CSTATE[0];
  rtDW.m_Xm += 10.0 * rtX.referencemodel_CSTATE[1];

  // Sum: '<Root>/Sum'
  rtDW.m_e = rtDW.m_Xp - rtDW.m_Xm;

  // Product: '<Root>/ ' incorporates:
  //   TransferFcn: '<Root>/-gamma1//s'

  rtDW.m_Kt = -1.2 * rtX.gamma1s_CSTATE * rtDW.m_e;

  // Step: '<Root>/Step'
  if ((&rtM)->Timing.t[0] < 0.0) {
    // Step: '<Root>/Step'
    rtDW.Step = 0.0;
  } else {
    // Step: '<Root>/Step'
    rtDW.Step = 0.2;
  }

  // End of Step: '<Root>/Step'

  // Product: '<Root>/     '
  rtDW.m_Ktr = rtDW.Step * rtDW.m_Kt;

  // Gain: '<Root>/Gain' incorporates:
  //   Sum: '<Root>/Sum1'

  t = (rtDW.m_Ktr - rtDW.m_FtXp) * -10000.0;

  // Gain: '<S1>/Gain22'
  rtDW.m_G_left = 5.0 * t;

  // MATLAB Function: '<S2>/MATLAB Function14' incorporates:
  //   Integrator: '<S2>/Integrator2'

  MATLABFunction14(rtX.Integrator2_CSTATE, rtb_OUT);

  // Integrator: '<S2>/Integrator3'
  rtDW.m_X3dot[0] = rtX.Integrator3_CSTATE[0];

  // Integrator: '<S2>/left'
  rtDW.m_X3[0] = rtX.left_CSTATE[0];

  // Gain: '<S2>/Gain27' incorporates:
  //   Constant: '<Root>/Constant'
  //   Gain: '<S2>/Gain26'
  //   Gain: '<S2>/Gain28'
  //   Gain: '<S2>/Gain29'
  //   Integrator: '<S2>/Integrator2'
  //   Product: '<S2>/Product'
  //   Sum: '<S2>/Add4'
  //   Sum: '<S2>/Sum6'

  rtDW.Gain27[0] = ((((1050.0 * rtb_OUT[0] + -194.421 * rtDW.m_X3dot[0]) + (g1[0]
    - rtDW.m_X3[0]) * 1050.0) + rtDW.Gain30[0] * rtX.Integrator2_CSTATE) +
                    rtDW.m_G_left) * 0.1111111111111111;

  // Outport: '<Root>/X3'
  arg_X3[0] = rtDW.m_X3[0];

  // MATLAB Function: '<S2>/Right_3D'
  rtDW.m_obs_weight_l[0] = 0.0;
  absxk = (rtDW.m_X3[0] - 0.15) / 0.1;
  scale = absxk * absxk;
  rtDW.m_obs_weight_l[0] = (rtDW.m_X3[0] - 0.15) / 0.010000000000000002;

  // Integrator: '<S2>/Integrator3'
  rtDW.m_X3dot[1] = rtX.Integrator3_CSTATE[1];

  // Integrator: '<S2>/left'
  rtDW.m_X3[1] = rtX.left_CSTATE[1];

  // Gain: '<S2>/Gain27' incorporates:
  //   Constant: '<Root>/Constant'
  //   Gain: '<S2>/Gain26'
  //   Gain: '<S2>/Gain28'
  //   Gain: '<S2>/Gain29'
  //   Integrator: '<S2>/Integrator2'
  //   Product: '<S2>/Product'
  //   Sum: '<S2>/Add4'
  //   Sum: '<S2>/Sum6'

  rtDW.Gain27[1] = ((((1050.0 * rtb_OUT[1] + -194.421 * rtDW.m_X3dot[1]) + (g1[1]
    - rtDW.m_X3[1]) * 1050.0) + rtDW.Gain30[1] * rtX.Integrator2_CSTATE) +
                    rtDW.m_G_left) * 0.1111111111111111;

  // Outport: '<Root>/X3'
  arg_X3[1] = rtDW.m_X3[1];

  // MATLAB Function: '<S2>/Right_3D'
  rtDW.m_obs_weight_l[1] = 0.0;
  absxk = (rtDW.m_X3[1] - 0.2) / 0.1;
  scale += absxk * absxk;
  rtDW.m_obs_weight_l[1] = (rtDW.m_X3[1] - 0.2) / 0.010000000000000002;

  // Integrator: '<S2>/Integrator3'
  rtDW.m_X3dot[2] = rtX.Integrator3_CSTATE[2];

  // Integrator: '<S2>/left'
  rtDW.m_X3[2] = rtX.left_CSTATE[2];

  // Gain: '<S2>/Gain27' incorporates:
  //   Constant: '<Root>/Constant'
  //   Gain: '<S2>/Gain26'
  //   Gain: '<S2>/Gain28'
  //   Gain: '<S2>/Gain29'
  //   Integrator: '<S2>/Integrator2'
  //   Product: '<S2>/Product'
  //   Sum: '<S2>/Add4'
  //   Sum: '<S2>/Sum6'

  rtDW.Gain27[2] = ((((1050.0 * rtb_OUT[2] + -194.421 * rtDW.m_X3dot[2]) + (g1[2]
    - rtDW.m_X3[2]) * 1050.0) + rtDW.Gain30[2] * rtX.Integrator2_CSTATE) +
                    rtDW.m_G_left) * 0.1111111111111111;

  // Outport: '<Root>/X3'
  arg_X3[2] = rtDW.m_X3[2];

  // MATLAB Function: '<S2>/Right_3D'
  rtDW.m_obs_weight_l[2] = 0.0;
  absxk = (rtDW.m_X3[2] - 0.4) / 0.1;
  scale += absxk * absxk;
  rtDW.m_obs_weight_l[2] = (rtDW.m_X3[2] - 0.4) / 0.010000000000000002;
  scale--;
  absxk = std::exp(-scale);
  scale = 1.0 / scale / scale + 1.0 / scale;
  rtDW.m_obs_weight_l[0] = rtDW.m_obs_weight_l[0] * absxk * scale * 2.0;

  // Integrator: '<S5>/Integrator'
  rtDW.m_X2dot[0] = rtX.Integrator_CSTATE[0];

  // Integrator: '<S5>/Integrator1'
  rtDW.m_X1dot[0] = rtX.Integrator1_CSTATE[0];

  // Gain: '<S5>/Gain4' incorporates:
  //   Gain: '<S5>/Gain15'

  rtb_OUT_m = rtP.k2 * rtDW.m_X1[0];

  // Gain: '<S5>/Gain6' incorporates:
  //   Gain: '<S5>/Gain9'

  rtb_Add2 = rtP.b2 * rtDW.m_X1dot[0];

  // Gain: '<S5>/Gain1' incorporates:
  //   Gain: '<S5>/Gain11'

  Add_tmp = rtP.b2 * rtDW.m_X2dot[0];

  // Gain: '<S5>/Gain' incorporates:
  //   Gain: '<S5>/Gain12'

  Add_tmp_0 = rtP.k2 * rtDW.m_X2[0];

  // Sum: '<S5>/Add' incorporates:
  //   Gain: '<S5>/Gain2'
  //   Gain: '<S5>/Gain3'
  //   Gain: '<S5>/Gain5'
  //   Gain: '<S5>/Gain7'

  rtDW.Add[0] = ((((((rtP.k1 * rtDW.m_X3[0] + Add_tmp_0) + Add_tmp) + rtP.b1 *
                    rtDW.m_X3dot[0]) - rtP.k1 * rtDW.m_X1[0]) - rtb_OUT_m) -
                 rtP.b1 * rtDW.m_X1dot[0]) - rtb_Add2;

  // Integrator: '<S3>/right'
  rtDW.m_X4[0] = rtX.right_CSTATE[0];

  // Integrator: '<S3>/Integrator5'
  rtDW.m_X4dot[0] = rtX.Integrator5_CSTATE[0];

  // Sum: '<S5>/Add1' incorporates:
  //   Gain: '<S5>/Gain10'
  //   Gain: '<S5>/Gain13'
  //   Gain: '<S5>/Gain14'
  //   Gain: '<S5>/Gain8'

  rtDW.Add1[0] = ((((((rtP.k3 * rtDW.m_X4[0] + rtb_OUT_m) + rtb_Add2) + rtP.b3 *
                     rtDW.m_X4dot[0]) - Add_tmp) - Add_tmp_0) - rtP.k3 *
                  rtDW.m_X2[0]) - rtP.b3 * rtDW.m_X2dot[0];

  // Gain: '<S5>/Gain6'
  rtb_OUT[0] = rtb_Add2;

  // MATLAB Function: '<S2>/Right_3D'
  rtDW.m_obs_weight_l[1] = rtDW.m_obs_weight_l[1] * absxk * scale * 2.0;

  // Integrator: '<S5>/Integrator'
  rtDW.m_X2dot[1] = rtX.Integrator_CSTATE[1];

  // Integrator: '<S5>/Integrator1'
  rtDW.m_X1dot[1] = rtX.Integrator1_CSTATE[1];

  // Gain: '<S5>/Gain4' incorporates:
  //   Gain: '<S5>/Gain15'

  rtb_OUT_m = rtP.k2 * rtDW.m_X1[1];

  // Gain: '<S5>/Gain6' incorporates:
  //   Gain: '<S5>/Gain9'

  rtb_Add2 = rtP.b2 * rtDW.m_X1dot[1];

  // Gain: '<S5>/Gain1' incorporates:
  //   Gain: '<S5>/Gain11'

  Add_tmp = rtP.b2 * rtDW.m_X2dot[1];

  // Gain: '<S5>/Gain' incorporates:
  //   Gain: '<S5>/Gain12'

  Add_tmp_0 = rtP.k2 * rtDW.m_X2[1];

  // Sum: '<S5>/Add' incorporates:
  //   Gain: '<S5>/Gain2'
  //   Gain: '<S5>/Gain3'
  //   Gain: '<S5>/Gain5'
  //   Gain: '<S5>/Gain7'

  rtDW.Add[1] = ((((((rtP.k1 * rtDW.m_X3[1] + Add_tmp_0) + Add_tmp) + rtP.b1 *
                    rtDW.m_X3dot[1]) - rtP.k1 * rtDW.m_X1[1]) - rtb_OUT_m) -
                 rtP.b1 * rtDW.m_X1dot[1]) - rtb_Add2;

  // Integrator: '<S3>/right'
  rtDW.m_X4[1] = rtX.right_CSTATE[1];

  // Integrator: '<S3>/Integrator5'
  rtDW.m_X4dot[1] = rtX.Integrator5_CSTATE[1];

  // Sum: '<S5>/Add1' incorporates:
  //   Gain: '<S5>/Gain10'
  //   Gain: '<S5>/Gain13'
  //   Gain: '<S5>/Gain14'
  //   Gain: '<S5>/Gain8'

  rtDW.Add1[1] = ((((((rtP.k3 * rtDW.m_X4[1] + rtb_OUT_m) + rtb_Add2) + rtP.b3 *
                     rtDW.m_X4dot[1]) - Add_tmp) - Add_tmp_0) - rtP.k3 *
                  rtDW.m_X2[1]) - rtP.b3 * rtDW.m_X2dot[1];

  // Gain: '<S5>/Gain6'
  rtb_OUT[1] = rtb_Add2;

  // MATLAB Function: '<S2>/Right_3D'
  rtDW.m_obs_weight_l[2] = rtDW.m_obs_weight_l[2] * absxk * scale * 2.0;

  // Integrator: '<S5>/Integrator'
  rtDW.m_X2dot[2] = rtX.Integrator_CSTATE[2];

  // Integrator: '<S5>/Integrator1'
  rtDW.m_X1dot[2] = rtX.Integrator1_CSTATE[2];

  // Gain: '<S5>/Gain4' incorporates:
  //   Gain: '<S5>/Gain15'

  rtb_OUT_m = rtP.k2 * rtDW.m_X1[2];

  // Gain: '<S5>/Gain6' incorporates:
  //   Gain: '<S5>/Gain9'

  rtb_Add2 = rtP.b2 * rtDW.m_X1dot[2];

  // Gain: '<S5>/Gain1' incorporates:
  //   Gain: '<S5>/Gain11'

  Add_tmp = rtP.b2 * rtDW.m_X2dot[2];

  // Gain: '<S5>/Gain' incorporates:
  //   Gain: '<S5>/Gain12'

  Add_tmp_0 = rtP.k2 * rtDW.m_X2[2];

  // Sum: '<S5>/Add' incorporates:
  //   Gain: '<S5>/Gain2'
  //   Gain: '<S5>/Gain3'
  //   Gain: '<S5>/Gain5'
  //   Gain: '<S5>/Gain7'

  rtDW.Add[2] = ((((((rtP.k1 * rtDW.m_X3[2] + Add_tmp_0) + Add_tmp) + rtP.b1 *
                    rtDW.m_X3dot[2]) - rtP.k1 * rtDW.m_X1[2]) - rtb_OUT_m) -
                 rtP.b1 * rtDW.m_X1dot[2]) - rtb_Add2;

  // Integrator: '<S3>/right'
  rtDW.m_X4[2] = rtX.right_CSTATE[2];

  // Integrator: '<S3>/Integrator5'
  rtDW.m_X4dot[2] = rtX.Integrator5_CSTATE[2];

  // Sum: '<S5>/Add1' incorporates:
  //   Gain: '<S5>/Gain10'
  //   Gain: '<S5>/Gain13'
  //   Gain: '<S5>/Gain14'
  //   Gain: '<S5>/Gain8'

  rtDW.Add1[2] = ((((((rtP.k3 * rtDW.m_X4[2] + rtb_OUT_m) + rtb_Add2) + rtP.b3 *
                     rtDW.m_X4dot[2]) - Add_tmp) - Add_tmp_0) - rtP.k3 *
                  rtDW.m_X2[2]) - rtP.b3 * rtDW.m_X2dot[2];

  // Gain: '<S5>/Gain6'
  rtb_OUT[2] = rtb_Add2;

  // Gain: '<S1>/Gain20'
  rtDW.m_G_right = -5.0 * t;

  // MATLAB Function: '<S3>/MATLAB Function2' incorporates:
  //   Integrator: '<S3>/Integrator4'

  MATLABFunction14(rtX.Integrator4_CSTATE, rtb_OUT);

  // Sum: '<S3>/Add2' incorporates:
  //   Gain: '<S3>/Gain17'

  rtb_OUT[0] *= 1050.0;
  rtb_OUT[1] *= 1050.0;
  rtb_OUT[2] *= 1050.0;
  if (rtmIsMajorTimeStep((&rtM))) {
    // Gain: '<S3>/Gain32' incorporates:
    //   Constant: '<Root>/Constant1'
    //   Sum: '<S3>/Sum3'

    rtDW.Gain32[0] = -1050.0 * g2[0];
    rtDW.Gain32[1] = (g2[1] - 0.6) * -1050.0;
    rtDW.Gain32[2] = -1050.0 * g2[2];
  }

  // Gain: '<S3>/Gain18' incorporates:
  //   Constant: '<Root>/Constant1'
  //   Gain: '<S3>/Gain19'
  //   Gain: '<S3>/Gain31'
  //   Integrator: '<S3>/Integrator4'
  //   Product: '<S3>/Product1'
  //   Sum: '<S3>/Add2'
  //   Sum: '<S3>/Sum2'

  rtDW.Gain18[0] = ((((-194.421 * rtDW.m_X4dot[0] + rtb_OUT[0]) + (g2[0] -
    rtDW.m_X4[0]) * 1050.0) + rtDW.Gain32[0] * rtX.Integrator4_CSTATE) +
                    rtDW.m_G_right) * 0.1111111111111111;

  // Outport: '<Root>/X4'
  arg_X4[0] = rtDW.m_X4[0];

  // MATLAB Function: '<S3>/3D'
  rtDW.m_obs_weight_r[0] = 0.0;

  // Gain: '<S3>/Gain18' incorporates:
  //   Constant: '<Root>/Constant1'
  //   Gain: '<S3>/Gain19'
  //   Gain: '<S3>/Gain31'
  //   Integrator: '<S3>/Integrator4'
  //   Product: '<S3>/Product1'
  //   Sum: '<S3>/Add2'
  //   Sum: '<S3>/Sum2'

  rtDW.Gain18[1] = ((((-194.421 * rtDW.m_X4dot[1] + rtb_OUT[1]) + (g2[1] -
    rtDW.m_X4[1]) * 1050.0) + rtDW.Gain32[1] * rtX.Integrator4_CSTATE) +
                    rtDW.m_G_right) * 0.1111111111111111;

  // Outport: '<Root>/X4'
  arg_X4[1] = rtDW.m_X4[1];

  // MATLAB Function: '<S3>/3D'
  rtDW.m_obs_weight_r[1] = 0.0;

  // Gain: '<S3>/Gain18' incorporates:
  //   Constant: '<Root>/Constant1'
  //   Gain: '<S3>/Gain19'
  //   Gain: '<S3>/Gain31'
  //   Integrator: '<S3>/Integrator4'
  //   Product: '<S3>/Product1'
  //   Sum: '<S3>/Add2'
  //   Sum: '<S3>/Sum2'

  rtDW.Gain18[2] = ((((-194.421 * rtDW.m_X4dot[2] + rtb_OUT[2]) + (g2[2] -
    rtDW.m_X4[2]) * 1050.0) + rtDW.Gain32[2] * rtX.Integrator4_CSTATE) +
                    rtDW.m_G_right) * 0.1111111111111111;

  // Outport: '<Root>/X4'
  arg_X4[2] = rtDW.m_X4[2];

  // MATLAB Function: '<S3>/3D'
  rtDW.m_obs_weight_r[2] = 0.0;
  for (k = 0; k < 2; k++) {
    rtb_OUT_m = axis[k];
    t = rtDW.m_X4[0] - center[k];
    absxk = t / rtb_OUT_m;
    scale = absxk * absxk;
    rtb_OUT[0] = t / (rtb_OUT_m * rtb_OUT_m);
    rtb_OUT_m = axis[k + 2];
    t = rtDW.m_X4[1] - center[k + 2];
    absxk = t / rtb_OUT_m;
    scale += absxk * absxk;
    rtb_OUT[1] = t / (rtb_OUT_m * rtb_OUT_m);
    rtb_OUT_m = axis[k + 4];
    t = rtDW.m_X4[2] - center[k + 4];
    absxk = t / rtb_OUT_m;
    scale += absxk * absxk;
    scale--;
    absxk = std::exp(-scale);
    scale = 1.0 / scale / scale + 1.0 / scale;
    rtDW.m_obs_weight_r[0] += rtb_OUT[0] * absxk * scale * 2.0;
    rtDW.m_obs_weight_r[1] += rtb_OUT[1] * absxk * scale * 2.0;
    rtDW.m_obs_weight_r[2] += t / (rtb_OUT_m * rtb_OUT_m) * absxk * scale * 2.0;
  }

  // Gain: '<S3>/Gain16' incorporates:
  //   Integrator: '<S3>/Integrator4'

  rtDW.Gain16 = -rtX.Integrator4_CSTATE;

  // Outport: '<Root>/m_e'
  *arg_m_e = rtDW.m_e;

  // Outport: '<Root>/m_Xp'
  *arg_m_Xp = rtDW.m_Xp;

  // Gain: '<S2>/Gain25' incorporates:
  //   Integrator: '<S2>/Integrator2'

  rtDW.Gain25 = -rtX.Integrator2_CSTATE;

  // TransferFcn: '<Root>/Gm '
  rtDW.Gm = 0.0;
  rtDW.Gm += rtX.Gm_CSTATE[0];
  rtDW.Gm += 10.0 * rtX.Gm_CSTATE[1];

  // TransferFcn: '<Root>/Gm  '
  rtDW.Gm_p = 0.0;
  rtDW.Gm_p += rtX.Gm_CSTATE_e[0];
  rtDW.Gm_p += 10.0 * rtX.Gm_CSTATE_e[1];
  if (rtmIsMajorTimeStep((&rtM))) {
    rt_ertODEUpdateContinuousStates(&(&rtM)->solverInfo, arg_m_Xp, arg_m_e,
      arg_X3, arg_X4);

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
void SignalDmp::couple_dmp_test_derivatives(real_T *arg_m_Xp, real_T *arg_m_e,
  real_T arg_X3[3], real_T arg_X4[3])
{
  SignalDmp::XDot *_rtXdot;
  _rtXdot = ((XDot *) (&rtM)->derivs);

  // Derivatives for Integrator: '<S2>/Integrator2'
  _rtXdot->Integrator2_CSTATE = rtDW.Gain25;

  // Derivatives for Integrator: '<S5>/x1'
  _rtXdot->x1_CSTATE[0] = rtDW.m_X1dot[0];

  // Derivatives for Integrator: '<S5>/x2'
  _rtXdot->x2_CSTATE[0] = rtDW.m_X2dot[0];

  // Derivatives for Integrator: '<S5>/x1'
  _rtXdot->x1_CSTATE[1] = rtDW.m_X1dot[1];

  // Derivatives for Integrator: '<S5>/x2'
  _rtXdot->x2_CSTATE[1] = rtDW.m_X2dot[1];

  // Derivatives for Integrator: '<S5>/x1'
  _rtXdot->x1_CSTATE[2] = rtDW.m_X1dot[2];

  // Derivatives for Integrator: '<S5>/x2'
  _rtXdot->x2_CSTATE[2] = rtDW.m_X2dot[2];

  // Derivatives for TransferFcn: '<Root>/gamma2//s'
  _rtXdot->gamma2s_CSTATE = 0.0;
  _rtXdot->gamma2s_CSTATE += -0.0 * rtX.gamma2s_CSTATE;
  _rtXdot->gamma2s_CSTATE += rtDW.Gm;

  // Derivatives for TransferFcn: '<Root>/reference model'
  _rtXdot->referencemodel_CSTATE[0] = 0.0;
  _rtXdot->referencemodel_CSTATE[0] += -8.0 * rtX.referencemodel_CSTATE[0];
  _rtXdot->referencemodel_CSTATE[1] = 0.0;
  _rtXdot->referencemodel_CSTATE[0] += -10.0 * rtX.referencemodel_CSTATE[1];
  _rtXdot->referencemodel_CSTATE[1] += rtX.referencemodel_CSTATE[0];
  _rtXdot->referencemodel_CSTATE[0] += rtDW.Step;

  // Derivatives for TransferFcn: '<Root>/-gamma1//s'
  _rtXdot->gamma1s_CSTATE = 0.0;
  _rtXdot->gamma1s_CSTATE += -0.0 * rtX.gamma1s_CSTATE;
  _rtXdot->gamma1s_CSTATE += rtDW.Gm_p;

  // Derivatives for Integrator: '<S2>/Integrator3'
  _rtXdot->Integrator3_CSTATE[0] = rtDW.Gain27[0];

  // Derivatives for Integrator: '<S2>/left'
  _rtXdot->left_CSTATE[0] = rtDW.m_X3dot[0];

  // Derivatives for Integrator: '<S5>/Integrator'
  _rtXdot->Integrator_CSTATE[0] = rtDW.Add1[0];

  // Derivatives for Integrator: '<S5>/Integrator1'
  _rtXdot->Integrator1_CSTATE[0] = rtDW.Add[0];

  // Derivatives for Integrator: '<S3>/right'
  _rtXdot->right_CSTATE[0] = rtDW.m_X4dot[0];

  // Derivatives for Integrator: '<S3>/Integrator5'
  _rtXdot->Integrator5_CSTATE[0] = rtDW.Gain18[0];

  // Derivatives for Integrator: '<S2>/Integrator3'
  _rtXdot->Integrator3_CSTATE[1] = rtDW.Gain27[1];

  // Derivatives for Integrator: '<S2>/left'
  _rtXdot->left_CSTATE[1] = rtDW.m_X3dot[1];

  // Derivatives for Integrator: '<S5>/Integrator'
  _rtXdot->Integrator_CSTATE[1] = rtDW.Add1[1];

  // Derivatives for Integrator: '<S5>/Integrator1'
  _rtXdot->Integrator1_CSTATE[1] = rtDW.Add[1];

  // Derivatives for Integrator: '<S3>/right'
  _rtXdot->right_CSTATE[1] = rtDW.m_X4dot[1];

  // Derivatives for Integrator: '<S3>/Integrator5'
  _rtXdot->Integrator5_CSTATE[1] = rtDW.Gain18[1];

  // Derivatives for Integrator: '<S2>/Integrator3'
  _rtXdot->Integrator3_CSTATE[2] = rtDW.Gain27[2];

  // Derivatives for Integrator: '<S2>/left'
  _rtXdot->left_CSTATE[2] = rtDW.m_X3dot[2];

  // Derivatives for Integrator: '<S5>/Integrator'
  _rtXdot->Integrator_CSTATE[2] = rtDW.Add1[2];

  // Derivatives for Integrator: '<S5>/Integrator1'
  _rtXdot->Integrator1_CSTATE[2] = rtDW.Add[2];

  // Derivatives for Integrator: '<S3>/right'
  _rtXdot->right_CSTATE[2] = rtDW.m_X4dot[2];

  // Derivatives for Integrator: '<S3>/Integrator5'
  _rtXdot->Integrator5_CSTATE[2] = rtDW.Gain18[2];

  // Derivatives for Integrator: '<S3>/Integrator4'
  _rtXdot->Integrator4_CSTATE = rtDW.Gain16;

  // Derivatives for TransferFcn: '<Root>/Gm '
  _rtXdot->Gm_CSTATE[0] = 0.0;
  _rtXdot->Gm_CSTATE[0] += -8.0 * rtX.Gm_CSTATE[0];
  _rtXdot->Gm_CSTATE[1] = 0.0;
  _rtXdot->Gm_CSTATE[0] += -10.0 * rtX.Gm_CSTATE[1];
  _rtXdot->Gm_CSTATE[1] += rtX.Gm_CSTATE[0];
  _rtXdot->Gm_CSTATE[0] += rtDW.m_e;

  // Derivatives for TransferFcn: '<Root>/Gm  '
  _rtXdot->Gm_CSTATE_e[0] = 0.0;
  _rtXdot->Gm_CSTATE_e[0] += -8.0 * rtX.Gm_CSTATE_e[0];
  _rtXdot->Gm_CSTATE_e[1] = 0.0;
  _rtXdot->Gm_CSTATE_e[0] += -10.0 * rtX.Gm_CSTATE_e[1];
  _rtXdot->Gm_CSTATE_e[1] += rtX.Gm_CSTATE_e[0];
  _rtXdot->Gm_CSTATE_e[0] += rtDW.Step;
}

void initialize_parameters_uc(real_T ini_g1[3], real_T ini_g2[3]) {
    g1[0] = ini_g1[0];
    g1[1] = ini_g1[1];
    g1[2] = ini_g1[2];
    g2[0] = ini_g2[0];
    g2[1] = ini_g2[1];
    g2[2] = ini_g2[2];
}

void print_parameters() {
    using namespace std;
    cout << "Print parameters for debug in dmp" << endl;
    cout << "  g1: " << g1[0] << " " << g1[1] << " " << g1[2] << endl;
    cout << "  g2: " << g2[0] << " " << g2[1] << " " << g2[2] << endl;
}

// Model initialize function
void SignalDmp::initialize(real_T ini_g1[3], real_T ini_g2[3])
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

  initialize_parameters_uc(ini_g1, ini_g2);
  print_parameters();

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

  // InitializeConditions for Integrator: '<S2>/Integrator2'
  rtX.Integrator2_CSTATE = 1.0;

  // InitializeConditions for Integrator: '<S5>/x1'
  rtX.x1_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S5>/x2'
  rtX.x2_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S5>/x1'
  rtX.x1_CSTATE[1] = 0.2;

  // InitializeConditions for Integrator: '<S5>/x2'
  rtX.x2_CSTATE[1] = 0.4;

  // InitializeConditions for Integrator: '<S5>/x1'
  rtX.x1_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S5>/x2'
  rtX.x2_CSTATE[2] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/gamma2//s'
  rtX.gamma2s_CSTATE = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/reference model'
  rtX.referencemodel_CSTATE[0] = 0.0;
  rtX.referencemodel_CSTATE[1] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/-gamma1//s'
  rtX.gamma1s_CSTATE = 0.0;

  // InitializeConditions for Integrator: '<S2>/Integrator3'
  rtX.Integrator3_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S2>/left'
  rtX.left_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S5>/Integrator'
  rtX.Integrator_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S5>/Integrator1'
  rtX.Integrator1_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S3>/right'
  rtX.right_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S3>/Integrator5'
  rtX.Integrator5_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S2>/Integrator3'
  rtX.Integrator3_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S2>/left'
  rtX.left_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S5>/Integrator'
  rtX.Integrator_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S5>/Integrator1'
  rtX.Integrator1_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S3>/right'
  rtX.right_CSTATE[1] = 0.6;

  // InitializeConditions for Integrator: '<S3>/Integrator5'
  rtX.Integrator5_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S2>/Integrator3'
  rtX.Integrator3_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S2>/left'
  rtX.left_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S5>/Integrator'
  rtX.Integrator_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S5>/Integrator1'
  rtX.Integrator1_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S3>/right'
  rtX.right_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S3>/Integrator5'
  rtX.Integrator5_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S3>/Integrator4'
  rtX.Integrator4_CSTATE = 1.0;

  // InitializeConditions for TransferFcn: '<Root>/Gm '
  rtX.Gm_CSTATE[0] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/Gm  '
  rtX.Gm_CSTATE_e[0] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/Gm '
  rtX.Gm_CSTATE[1] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/Gm  '
  rtX.Gm_CSTATE_e[1] = 0.0;
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
