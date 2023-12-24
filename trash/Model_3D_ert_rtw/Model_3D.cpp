//
// File: Model_3D.cpp
//
// Code generated for Simulink model 'Model_3D'.
//
// Model version                  : 3.18
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Wed Oct 25 10:58:35 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "Model_3D.h"
#include "Model_3D_private.h"

// This function updates continuous states using the ODE8 fixed-step
//  solver algorithm

void Model_3DModelClass::rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  // Solver Matrices
#define Model_3D_NSTAGES               13

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
  real_T* f[Model_3D_NSTAGES];
  int idx,stagesIdx,statesIdx;
  double deltaX;
  int_T nXc = 50;
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
  for (stagesIdx=0;stagesIdx<Model_3D_NSTAGES;stagesIdx++) {
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
      Model_3D_derivatives();
    } else {
      (stagesIdx==Model_3D_NSTAGES-1)? rtsiSetT(si, tnew) : rtsiSetT(si, t + h*
        rt_ODE8_C[stagesIdx]);
      rtsiSetdX(si, f[stagesIdx]);
      this->step();
      Model_3D_derivatives();
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
//    '<S1>/MATLAB Function14'
//    '<S1>/MATLAB Function2'
//    '<S2>/MATLAB Function2'
//
void Model_3DModelClass::Model_3D_MATLABFunction14(real_T rtu_u, real_T rty_out
  [3])
{
  real_T tem[41];
  real_T tmp[3];
  real_T a;
  int32_T i;
  int32_T k;
  for (k = 0; k < 41; k++) {
    a = rtu_u - Model_3D_ConstP.pooled1[k];
    tem[k] = std::exp(a * a * -Model_3D_ConstP.pooled3[k]);
  }

  a = tem[0];
  for (k = 0; k < 40; k++) {
    a += tem[k + 1];
  }

  for (k = 0; k < 3; k++) {
    tmp[k] = 0.0;
    for (i = 0; i < 41; i++) {
      tmp[k] += Model_3D_ConstP.pooled2[3 * i + k] * tem[i];
    }

    rty_out[k] = tmp[k] * rtu_u / a;
  }
}

//
// Output and update for atomic system:
//    '<S1>/MATLAB Function4'
//    '<S1>/MATLAB Function5'
//
void Model_3DModelClass::Model_3D_MATLABFunction4(const real_T rtu_u[3], real_T *
  rty_y)
{
  real_T absxk;
  real_T scale;
  real_T t;
  *rty_y = 0.0;
  scale = 3.3121686421112381E-170;
  absxk = std::abs(rtu_u[0]);
  if (absxk > 3.3121686421112381E-170) {
    t = 3.3121686421112381E-170 / absxk;
    *rty_y = *rty_y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    *rty_y += t * t;
  }

  absxk = std::abs(rtu_u[1]);
  if (absxk > scale) {
    t = scale / absxk;
    *rty_y = *rty_y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    *rty_y += t * t;
  }

  absxk = std::abs(rtu_u[2]);
  if (absxk > scale) {
    t = scale / absxk;
    *rty_y = *rty_y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    *rty_y += t * t;
  }

  *rty_y = scale * std::sqrt(*rty_y);
}

// Model step function
void Model_3DModelClass::step()
{
  static const real_T axis_0[6] = { 0.1, 0.15, 0.2, 0.15, 0.1, 0.2 };

  static const real_T center[6] = { 0.2, -0.4, 0.8, 1.2, 0.4, 0.8 };

  real_T tem[41];
  real_T rtb_OUT[3];
  real_T K;
  real_T a;
  real_T a_tmp;
  real_T axis;
  real_T rtb_input_right;
  real_T rtb_y_n;
  int32_T i;
  int32_T j;
  if (rtmIsMajorTimeStep((&Model_3D_M))) {
    // set solver stop time
    rtsiSetSolverStopTime(&(&Model_3D_M)->solverInfo,(((&Model_3D_M)
      ->Timing.clockTick0+1)*(&Model_3D_M)->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep((&Model_3D_M))) {
    (&Model_3D_M)->Timing.t[0] = rtsiGetT(&(&Model_3D_M)->solverInfo);
  }

  // Sum: '<S1>/Sum' incorporates:
  //   Integrator: '<S1>/x1'
  //   Integrator: '<S1>/x2'

  rtb_OUT[0] = Model_3D_X.x1_CSTATE[0] - Model_3D_X.x2_CSTATE[0];
  rtb_OUT[1] = Model_3D_X.x1_CSTATE[1] - Model_3D_X.x2_CSTATE[1];
  rtb_OUT[2] = Model_3D_X.x1_CSTATE[2] - Model_3D_X.x2_CSTATE[2];

  // MATLAB Function: '<S1>/MATLAB Function4'
  Model_3D_MATLABFunction4(rtb_OUT, &rtb_y_n);

  // Sum: '<Root>/Sum' incorporates:
  //   TransferFcn: '<Root>/reference model'

  Model_3D_B.Sum = rtb_y_n - (10.0 * Model_3D_X.referencemodel_CSTATE[1] +
    Model_3D_X.referencemodel_CSTATE[0]);

  // Step: '<Root>/Step'
  if ((&Model_3D_M)->Timing.t[0] < 0.0) {
    // Step: '<Root>/Step'
    Model_3D_B.Step = 0.0;
  } else {
    // Step: '<Root>/Step'
    Model_3D_B.Step = 0.2;
  }

  // End of Step: '<Root>/Step'

  // Gain: '<Root>/Gain' incorporates:
  //   Product: '<Root>/ '
  //   Product: '<Root>/  '
  //   Product: '<Root>/   '
  //   Product: '<Root>/     '
  //   Sum: '<Root>/Sum1'
  //   TransferFcn: '<Root>/-gamma1//s'
  //   TransferFcn: '<Root>/gamma2//s'

  rtb_y_n = (-1.2 * Model_3D_X.gamma1s_CSTATE * Model_3D_B.Sum * Model_3D_B.Step
             - 0.5 * Model_3D_X.gamma2s_CSTATE * rtb_y_n * rtb_y_n) * -10000.0;

  // Gain: '<S1>/Gain20'
  rtb_input_right = -5.0 * rtb_y_n;

  // MATLAB Function: '<S1>/3D' incorporates:
  //   Integrator: '<S1>/right'

  Model_3D_B.Gain18[0] = 0.0;
  Model_3D_B.Gain18[1] = 0.0;
  Model_3D_B.Gain18[2] = 0.0;
  for (j = 0; j < 2; j++) {
    axis = axis_0[j];
    a_tmp = Model_3D_X.right_CSTATE[0] - center[j];
    a = a_tmp / axis;
    K = a * a;
    rtb_OUT[0] = a_tmp / (axis * axis);
    axis = axis_0[j + 2];
    a_tmp = Model_3D_X.right_CSTATE[1] - center[j + 2];
    a = a_tmp / axis;
    K += a * a;
    rtb_OUT[1] = a_tmp / (axis * axis);
    axis = axis_0[j + 4];
    a_tmp = Model_3D_X.right_CSTATE[2] - center[j + 4];
    a = a_tmp / axis;
    K += a * a;
    K--;
    a = std::exp(-K);
    K = 1.0 / K / K + 1.0 / K;
    Model_3D_B.Gain18[0] += rtb_OUT[0] * a * K * 2.0;
    Model_3D_B.Gain18[1] += rtb_OUT[1] * a * K * 2.0;
    Model_3D_B.Gain18[2] += a_tmp / (axis * axis) * a * K * 2.0;
  }

  // End of MATLAB Function: '<S1>/3D'

  // MATLAB Function: '<S1>/MATLAB Function2' incorporates:
  //   Integrator: '<S1>/Integrator4'

  Model_3D_MATLABFunction14(Model_3D_X.Integrator4_CSTATE, Model_3D_B.Gain18_e);

  // Integrator: '<S1>/Integrator5'
  Model_3D_B.x4[0] = Model_3D_X.Integrator5_CSTATE[0];

  // Gain: '<S1>/Gain18' incorporates:
  //   Gain: '<S1>/Gain17'
  //   Gain: '<S1>/Gain19'
  //   Gain: '<S1>/Gain31'
  //   Integrator: '<S1>/Integrator4'
  //   Integrator: '<S1>/right'
  //   Product: '<S1>/Product1'
  //   Sum: '<S1>/Add2'
  //   Sum: '<S1>/Sum2'

  Model_3D_B.Gain18[0] = (((((1050.0 * Model_3D_B.Gain18_e[0] + -194.421 *
    Model_3D_B.x4[0]) + (-1.0 - Model_3D_X.right_CSTATE[0]) * 1050.0) +
    Model_3D_ConstB.Gain32[0] * Model_3D_X.Integrator4_CSTATE) + rtb_input_right)
    + Model_3D_B.Gain18[0]) * 0.1111111111111111;

  // Integrator: '<S1>/Integrator1'
  Model_3D_B.x1[0] = Model_3D_X.Integrator1_CSTATE[0];

  // Integrator: '<S1>/Integrator'
  Model_3D_B.x2[0] = Model_3D_X.Integrator_CSTATE[0];

  // Gain: '<S9>/Gain12' incorporates:
  //   Gain: '<S1>/Gain'
  //   Gain: '<S9>/Gain13'
  //   Integrator: '<S1>/x2'

  Model_3D_B.Add[0] = 1050.0 * Model_3D_X.x2_CSTATE[0];

  // Gain: '<S9>/Gain11' incorporates:
  //   Gain: '<S1>/Gain1'
  //   Gain: '<S9>/Gain14'

  a = 64.8074 * Model_3D_B.x2[0];

  // Gain: '<S9>/Gain15' incorporates:
  //   Gain: '<S1>/Gain3'
  //   Gain: '<S1>/Gain4'
  //   Integrator: '<S1>/x1'

  axis = 1050.0 * Model_3D_X.x1_CSTATE[0];

  // Gain: '<S9>/Gain9' incorporates:
  //   Gain: '<S1>/Gain5'
  //   Gain: '<S1>/Gain6'

  a_tmp = 64.8074 * Model_3D_B.x1[0];

  // Sum: '<S9>/Add1' incorporates:
  //   Gain: '<S9>/Gain10'
  //   Gain: '<S9>/Gain12'
  //   Gain: '<S9>/Gain13'
  //   Gain: '<S9>/Gain8'
  //   Integrator: '<S1>/right'

  Model_3D_B.Add1[0] = ((((((1050.0 * Model_3D_X.right_CSTATE[0] + axis) + a_tmp)
    + 64.8074 * Model_3D_B.x4[0]) - a) - Model_3D_B.Add[0]) - Model_3D_B.Add[0])
    - a;

  // Integrator: '<S1>/Integrator3'
  Model_3D_B.x3[0] = Model_3D_X.Integrator3_CSTATE[0];

  // Sum: '<S1>/Add' incorporates:
  //   Gain: '<S1>/Gain'
  //   Gain: '<S1>/Gain2'
  //   Gain: '<S1>/Gain7'
  //   Integrator: '<S1>/left'

  Model_3D_B.Add[0] = ((((((1050.0 * Model_3D_X.left_CSTATE[0] + Model_3D_B.Add
    [0]) + a) + 64.8074 * Model_3D_B.x3[0]) - axis) - axis) - a_tmp) - a_tmp;

  // Integrator: '<S1>/Integrator5'
  Model_3D_B.x4[1] = Model_3D_X.Integrator5_CSTATE[1];

  // Gain: '<S1>/Gain18' incorporates:
  //   Gain: '<S1>/Gain17'
  //   Gain: '<S1>/Gain19'
  //   Gain: '<S1>/Gain31'
  //   Integrator: '<S1>/Integrator4'
  //   Integrator: '<S1>/right'
  //   Product: '<S1>/Product1'
  //   Sum: '<S1>/Add2'
  //   Sum: '<S1>/Sum2'

  Model_3D_B.Gain18[1] = (((((1050.0 * Model_3D_B.Gain18_e[1] + -194.421 *
    Model_3D_B.x4[1]) + (0.6 - Model_3D_X.right_CSTATE[1]) * 1050.0) +
    Model_3D_ConstB.Gain32[1] * Model_3D_X.Integrator4_CSTATE) + rtb_input_right)
    + Model_3D_B.Gain18[1]) * 0.1111111111111111;

  // Integrator: '<S1>/Integrator1'
  Model_3D_B.x1[1] = Model_3D_X.Integrator1_CSTATE[1];

  // Integrator: '<S1>/Integrator'
  Model_3D_B.x2[1] = Model_3D_X.Integrator_CSTATE[1];

  // Gain: '<S9>/Gain12' incorporates:
  //   Gain: '<S1>/Gain'
  //   Gain: '<S9>/Gain13'
  //   Integrator: '<S1>/x2'

  Model_3D_B.Add[1] = 1050.0 * Model_3D_X.x2_CSTATE[1];

  // Gain: '<S9>/Gain11' incorporates:
  //   Gain: '<S1>/Gain1'
  //   Gain: '<S9>/Gain14'

  a = 64.8074 * Model_3D_B.x2[1];

  // Gain: '<S9>/Gain15' incorporates:
  //   Gain: '<S1>/Gain3'
  //   Gain: '<S1>/Gain4'
  //   Integrator: '<S1>/x1'

  axis = 1050.0 * Model_3D_X.x1_CSTATE[1];

  // Gain: '<S9>/Gain9' incorporates:
  //   Gain: '<S1>/Gain5'
  //   Gain: '<S1>/Gain6'

  a_tmp = 64.8074 * Model_3D_B.x1[1];

  // Sum: '<S9>/Add1' incorporates:
  //   Gain: '<S9>/Gain10'
  //   Gain: '<S9>/Gain12'
  //   Gain: '<S9>/Gain13'
  //   Gain: '<S9>/Gain8'
  //   Integrator: '<S1>/right'

  Model_3D_B.Add1[1] = ((((((1050.0 * Model_3D_X.right_CSTATE[1] + axis) + a_tmp)
    + 64.8074 * Model_3D_B.x4[1]) - a) - Model_3D_B.Add[1]) - Model_3D_B.Add[1])
    - a;

  // Integrator: '<S1>/Integrator3'
  Model_3D_B.x3[1] = Model_3D_X.Integrator3_CSTATE[1];

  // Sum: '<S1>/Add' incorporates:
  //   Gain: '<S1>/Gain'
  //   Gain: '<S1>/Gain2'
  //   Gain: '<S1>/Gain7'
  //   Integrator: '<S1>/left'

  Model_3D_B.Add[1] = ((((((1050.0 * Model_3D_X.left_CSTATE[1] + Model_3D_B.Add
    [1]) + a) + 64.8074 * Model_3D_B.x3[1]) - axis) - axis) - a_tmp) - a_tmp;

  // Integrator: '<S1>/Integrator5'
  Model_3D_B.x4[2] = Model_3D_X.Integrator5_CSTATE[2];

  // Gain: '<S1>/Gain18' incorporates:
  //   Gain: '<S1>/Gain17'
  //   Gain: '<S1>/Gain19'
  //   Gain: '<S1>/Gain31'
  //   Integrator: '<S1>/Integrator4'
  //   Integrator: '<S1>/right'
  //   Product: '<S1>/Product1'
  //   Sum: '<S1>/Add2'
  //   Sum: '<S1>/Sum2'

  Model_3D_B.Gain18[2] = (((((1050.0 * Model_3D_B.Gain18_e[2] + -194.421 *
    Model_3D_B.x4[2]) + (1.0 - Model_3D_X.right_CSTATE[2]) * 1050.0) +
    Model_3D_ConstB.Gain32[2] * Model_3D_X.Integrator4_CSTATE) + rtb_input_right)
    + Model_3D_B.Gain18[2]) * 0.1111111111111111;

  // Integrator: '<S1>/Integrator1'
  Model_3D_B.x1[2] = Model_3D_X.Integrator1_CSTATE[2];

  // Integrator: '<S1>/Integrator'
  Model_3D_B.x2[2] = Model_3D_X.Integrator_CSTATE[2];

  // Gain: '<S9>/Gain12' incorporates:
  //   Gain: '<S1>/Gain'
  //   Gain: '<S9>/Gain13'
  //   Integrator: '<S1>/x2'

  Model_3D_B.Add[2] = 1050.0 * Model_3D_X.x2_CSTATE[2];

  // Gain: '<S9>/Gain11' incorporates:
  //   Gain: '<S1>/Gain1'
  //   Gain: '<S9>/Gain14'

  a = 64.8074 * Model_3D_B.x2[2];

  // Gain: '<S9>/Gain15' incorporates:
  //   Gain: '<S1>/Gain3'
  //   Gain: '<S1>/Gain4'
  //   Integrator: '<S1>/x1'

  axis = 1050.0 * Model_3D_X.x1_CSTATE[2];

  // Gain: '<S9>/Gain9' incorporates:
  //   Gain: '<S1>/Gain5'
  //   Gain: '<S1>/Gain6'

  a_tmp = 64.8074 * Model_3D_B.x1[2];

  // Sum: '<S9>/Add1' incorporates:
  //   Gain: '<S9>/Gain10'
  //   Gain: '<S9>/Gain12'
  //   Gain: '<S9>/Gain13'
  //   Gain: '<S9>/Gain8'
  //   Integrator: '<S1>/right'

  Model_3D_B.Add1[2] = ((((((1050.0 * Model_3D_X.right_CSTATE[2] + axis) + a_tmp)
    + 64.8074 * Model_3D_B.x4[2]) - a) - Model_3D_B.Add[2]) - Model_3D_B.Add[2])
    - a;

  // Integrator: '<S1>/Integrator3'
  Model_3D_B.x3[2] = Model_3D_X.Integrator3_CSTATE[2];

  // Sum: '<S1>/Add' incorporates:
  //   Gain: '<S1>/Gain'
  //   Gain: '<S1>/Gain2'
  //   Gain: '<S1>/Gain7'
  //   Integrator: '<S1>/left'

  Model_3D_B.Add[2] = ((((((1050.0 * Model_3D_X.left_CSTATE[2] + Model_3D_B.Add
    [2]) + a) + 64.8074 * Model_3D_B.x3[2]) - axis) - axis) - a_tmp) - a_tmp;

  // Gain: '<S1>/Gain22'
  rtb_y_n *= 5.0;

  // MATLAB Function: '<S1>/MATLAB Function14' incorporates:
  //   Integrator: '<S1>/Integrator2'

  Model_3D_MATLABFunction14(Model_3D_X.Integrator2_CSTATE, Model_3D_B.Gain18_e);

  // MATLAB Function: '<S1>/Right_3D' incorporates:
  //   Integrator: '<S1>/left'

  a = (Model_3D_X.left_CSTATE[0] - 0.15) / 0.1;
  K = a * a;
  Model_3D_B.Gain27[0] = (Model_3D_X.left_CSTATE[0] - 0.15) /
    0.010000000000000002;
  a = (Model_3D_X.left_CSTATE[1] - 0.2) / 0.1;
  K += a * a;
  Model_3D_B.Gain27[1] = (Model_3D_X.left_CSTATE[1] - 0.2) /
    0.010000000000000002;
  a = (Model_3D_X.left_CSTATE[2] - 0.4) / 0.1;
  K += a * a;
  Model_3D_B.Gain27[2] = (Model_3D_X.left_CSTATE[2] - 0.4) /
    0.010000000000000002;
  K--;
  a = std::exp(-K);
  K = 1.0 / K / K + 1.0 / K;
  Model_3D_B.Gain27[0] = Model_3D_B.Gain27[0] * a * K * 2.0;

  // Gain: '<S1>/Gain27' incorporates:
  //   Gain: '<S1>/Gain26'
  //   Gain: '<S1>/Gain28'
  //   Gain: '<S1>/Gain29'
  //   Integrator: '<S1>/Integrator2'
  //   Integrator: '<S1>/left'
  //   Product: '<S1>/Product'
  //   Sum: '<S1>/Add4'
  //   Sum: '<S1>/Sum6'

  Model_3D_B.Gain27[0] = (((((1050.0 * Model_3D_B.Gain18_e[0] + -194.421 *
    Model_3D_B.x3[0]) + (-1.0 - Model_3D_X.left_CSTATE[0]) * 1050.0) +
    Model_3D_ConstB.Gain30[0] * Model_3D_X.Integrator2_CSTATE) + rtb_y_n) +
    Model_3D_B.Gain27[0]) * 0.1111111111111111;

  // Sum: '<S1>/Sum4' incorporates:
  //   Integrator: '<S1>/left'
  //   Integrator: '<S1>/right'

  rtb_OUT[0] = Model_3D_X.left_CSTATE[0] - Model_3D_X.right_CSTATE[0];

  // MATLAB Function: '<S1>/Right_3D'
  Model_3D_B.Gain27[1] = Model_3D_B.Gain27[1] * a * K * 2.0;

  // Gain: '<S1>/Gain27' incorporates:
  //   Gain: '<S1>/Gain26'
  //   Gain: '<S1>/Gain28'
  //   Gain: '<S1>/Gain29'
  //   Integrator: '<S1>/Integrator2'
  //   Integrator: '<S1>/left'
  //   Product: '<S1>/Product'
  //   Sum: '<S1>/Add4'
  //   Sum: '<S1>/Sum6'

  Model_3D_B.Gain27[1] = (((((1050.0 * Model_3D_B.Gain18_e[1] + -194.421 *
    Model_3D_B.x3[1]) + (0.0 - Model_3D_X.left_CSTATE[1]) * 1050.0) +
    Model_3D_ConstB.Gain30[1] * Model_3D_X.Integrator2_CSTATE) + rtb_y_n) +
    Model_3D_B.Gain27[1]) * 0.1111111111111111;

  // Sum: '<S1>/Sum4' incorporates:
  //   Integrator: '<S1>/left'
  //   Integrator: '<S1>/right'

  rtb_OUT[1] = Model_3D_X.left_CSTATE[1] - Model_3D_X.right_CSTATE[1];

  // MATLAB Function: '<S1>/Right_3D'
  Model_3D_B.Gain27[2] = Model_3D_B.Gain27[2] * a * K * 2.0;

  // Gain: '<S1>/Gain27' incorporates:
  //   Gain: '<S1>/Gain26'
  //   Gain: '<S1>/Gain28'
  //   Gain: '<S1>/Gain29'
  //   Integrator: '<S1>/Integrator2'
  //   Integrator: '<S1>/left'
  //   Product: '<S1>/Product'
  //   Sum: '<S1>/Add4'
  //   Sum: '<S1>/Sum6'

  Model_3D_B.Gain27[2] = (((((1050.0 * Model_3D_B.Gain18_e[2] + -194.421 *
    Model_3D_B.x3[2]) + (1.0 - Model_3D_X.left_CSTATE[2]) * 1050.0) +
    Model_3D_ConstB.Gain30[2] * Model_3D_X.Integrator2_CSTATE) + rtb_y_n) +
    Model_3D_B.Gain27[2]) * 0.1111111111111111;

  // Sum: '<S1>/Sum4' incorporates:
  //   Integrator: '<S1>/left'
  //   Integrator: '<S1>/right'

  rtb_OUT[2] = Model_3D_X.left_CSTATE[2] - Model_3D_X.right_CSTATE[2];

  // MATLAB Function: '<S1>/MATLAB Function5'
  Model_3D_MATLABFunction4(rtb_OUT, &rtb_y_n);

  // Gain: '<S1>/Gain25' incorporates:
  //   Integrator: '<S1>/Integrator2'

  Model_3D_B.Gain25 = -Model_3D_X.Integrator2_CSTATE;

  // Gain: '<S1>/Gain16' incorporates:
  //   Integrator: '<S1>/Integrator4'

  Model_3D_B.Gain16 = -Model_3D_X.Integrator4_CSTATE;

  // MATLAB Function: '<S2>/MATLAB Function2' incorporates:
  //   Integrator: '<S2>/Integrator4'

  Model_3D_MATLABFunction14(Model_3D_X.Integrator4_CSTATE_k, Model_3D_B.Gain18_e);

  // Gain: '<S2>/Gain16' incorporates:
  //   Integrator: '<S2>/Integrator4'

  Model_3D_B.Gain16_h = -Model_3D_X.Integrator4_CSTATE_k;

  // Integrator: '<S2>/Integrator5'
  Model_3D_B.x3_o[0] = Model_3D_X.Integrator5_CSTATE_l[0];

  // Gain: '<S2>/Gain18' incorporates:
  //   Gain: '<S2>/Gain17'
  //   Gain: '<S2>/Gain19'
  //   Gain: '<S2>/Gain31'
  //   Integrator: '<S2>/Integrator4'
  //   Integrator: '<S2>/right'
  //   Product: '<S2>/Product1'
  //   Sum: '<S2>/Add2'
  //   Sum: '<S2>/Sum2'

  Model_3D_B.Gain18_e[0] = (((1050.0 * Model_3D_B.Gain18_e[0] + -194.421 *
    Model_3D_B.x3_o[0]) + (-1.0 - Model_3D_X.right_CSTATE_g[0]) * 1050.0) +
    Model_3D_ConstB.Gain32_m[0] * Model_3D_X.Integrator4_CSTATE_k) *
    0.1111111111111111;

  // Integrator: '<S2>/Integrator3'
  Model_3D_B.x3_e[0] = Model_3D_X.Integrator3_CSTATE_j[0];

  // Integrator: '<S2>/Integrator5'
  Model_3D_B.x3_o[1] = Model_3D_X.Integrator5_CSTATE_l[1];

  // Gain: '<S2>/Gain18' incorporates:
  //   Gain: '<S2>/Gain17'
  //   Gain: '<S2>/Gain19'
  //   Gain: '<S2>/Gain31'
  //   Integrator: '<S2>/Integrator4'
  //   Integrator: '<S2>/right'
  //   Product: '<S2>/Product1'
  //   Sum: '<S2>/Add2'
  //   Sum: '<S2>/Sum2'

  Model_3D_B.Gain18_e[1] = (((1050.0 * Model_3D_B.Gain18_e[1] + -194.421 *
    Model_3D_B.x3_o[1]) + (0.6 - Model_3D_X.right_CSTATE_g[1]) * 1050.0) +
    Model_3D_ConstB.Gain32_m[1] * Model_3D_X.Integrator4_CSTATE_k) *
    0.1111111111111111;

  // Integrator: '<S2>/Integrator3'
  Model_3D_B.x3_e[1] = Model_3D_X.Integrator3_CSTATE_j[1];

  // Integrator: '<S2>/Integrator5'
  Model_3D_B.x3_o[2] = Model_3D_X.Integrator5_CSTATE_l[2];

  // Gain: '<S2>/Gain18' incorporates:
  //   Gain: '<S2>/Gain17'
  //   Gain: '<S2>/Gain19'
  //   Gain: '<S2>/Gain31'
  //   Integrator: '<S2>/Integrator4'
  //   Integrator: '<S2>/right'
  //   Product: '<S2>/Product1'
  //   Sum: '<S2>/Add2'
  //   Sum: '<S2>/Sum2'

  Model_3D_B.Gain18_e[2] = (((1050.0 * Model_3D_B.Gain18_e[2] + -194.421 *
    Model_3D_B.x3_o[2]) + (1.0 - Model_3D_X.right_CSTATE_g[2]) * 1050.0) +
    Model_3D_ConstB.Gain32_m[2] * Model_3D_X.Integrator4_CSTATE_k) *
    0.1111111111111111;

  // Integrator: '<S2>/Integrator3'
  Model_3D_B.x3_e[2] = Model_3D_X.Integrator3_CSTATE_j[2];

  // MATLAB Function: '<S2>/MATLAB Function' incorporates:
  //   Integrator: '<S2>/Integrator2'

  for (j = 0; j < 41; j++) {
    a = Model_3D_X.Integrator2_CSTATE_n - Model_3D_ConstP.pooled1[j];
    tem[j] = std::exp(a * a * -Model_3D_ConstP.pooled3[j]);
  }

  rtb_y_n = tem[0];
  for (j = 0; j < 40; j++) {
    rtb_y_n += tem[j + 1];
  }

  for (j = 0; j < 3; j++) {
    rtb_OUT[j] = 0.0;
    for (i = 0; i < 41; i++) {
      rtb_OUT[j] += Model_3D_ConstP.pooled2[3 * i + j] * tem[i];
    }

    // Gain: '<S2>/Gain27' incorporates:
    //   Constant: '<S2>/Constant2'
    //   Gain: '<S2>/Gain26'
    //   Gain: '<S2>/Gain28'
    //   Gain: '<S2>/Gain29'
    //   Integrator: '<S2>/Integrator2'
    //   Integrator: '<S2>/left'
    //   Product: '<S2>/Product'
    //   Sum: '<S2>/Add4'
    //   Sum: '<S2>/Sum6'

    Model_3D_B.Gain27_f[j] = ((((Model_3D_ConstP.pooled5[j] -
      Model_3D_X.left_CSTATE_g[j]) * 1050.0 + -194.421 * Model_3D_B.x3_e[j]) +
      rtb_OUT[j] * Model_3D_X.Integrator2_CSTATE_n / rtb_y_n * 1050.0) +
      Model_3D_ConstB.Gain30_f[j] * Model_3D_X.Integrator2_CSTATE_n) *
      0.1111111111111111;
  }

  // End of MATLAB Function: '<S2>/MATLAB Function'

  // Gain: '<S2>/Gain25' incorporates:
  //   Integrator: '<S2>/Integrator2'

  Model_3D_B.Gain25_p = -Model_3D_X.Integrator2_CSTATE_n;

  // Gain: '<S2>/Gain7' incorporates:
  //   Integrator: '<S2>/Integrator7'

  Model_3D_B.Gain7 = -Model_3D_X.Integrator7_CSTATE;

  // TransferFcn: '<Root>/Gm '
  Model_3D_B.Gm = 0.0;

  // TransferFcn: '<Root>/Gm  '
  Model_3D_B.Gm_d = 0.0;

  // TransferFcn: '<Root>/Gm '
  Model_3D_B.Gm += Model_3D_X.Gm_CSTATE[0];

  // TransferFcn: '<Root>/Gm  '
  Model_3D_B.Gm_d += Model_3D_X.Gm_CSTATE_n[0];

  // TransferFcn: '<Root>/Gm '
  Model_3D_B.Gm += 10.0 * Model_3D_X.Gm_CSTATE[1];

  // TransferFcn: '<Root>/Gm  '
  Model_3D_B.Gm_d += 10.0 * Model_3D_X.Gm_CSTATE_n[1];

  // Gain: '<S2>/Gain9' incorporates:
  //   Integrator: '<S2>/Integrator8'

  Model_3D_B.Gain9 = -Model_3D_X.Integrator8_CSTATE;
  if (rtmIsMajorTimeStep((&Model_3D_M))) {
    rt_ertODEUpdateContinuousStates(&(&Model_3D_M)->solverInfo);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++(&Model_3D_M)->Timing.clockTick0;
    (&Model_3D_M)->Timing.t[0] = rtsiGetSolverStopTime(&(&Model_3D_M)
      ->solverInfo);

    {
      // Update absolute timer for sample time: [0.005s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.005, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      (&Model_3D_M)->Timing.clockTick1++;
    }
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void Model_3DModelClass::Model_3D_derivatives()
{
  XDot_Model_3D_T *_rtXdot;
  _rtXdot = ((XDot_Model_3D_T *) (&Model_3D_M)->derivs);

  // Derivatives for Integrator: '<S1>/Integrator4'
  _rtXdot->Integrator4_CSTATE = Model_3D_B.Gain16;

  // Derivatives for Integrator: '<S1>/x1'
  _rtXdot->x1_CSTATE[0] = Model_3D_B.x1[0];

  // Derivatives for Integrator: '<S1>/x2'
  _rtXdot->x2_CSTATE[0] = Model_3D_B.x2[0];

  // Derivatives for Integrator: '<S1>/x1'
  _rtXdot->x1_CSTATE[1] = Model_3D_B.x1[1];

  // Derivatives for Integrator: '<S1>/x2'
  _rtXdot->x2_CSTATE[1] = Model_3D_B.x2[1];

  // Derivatives for Integrator: '<S1>/x1'
  _rtXdot->x1_CSTATE[2] = Model_3D_B.x1[2];

  // Derivatives for Integrator: '<S1>/x2'
  _rtXdot->x2_CSTATE[2] = Model_3D_B.x2[2];

  // Derivatives for TransferFcn: '<Root>/gamma2//s'
  _rtXdot->gamma2s_CSTATE = 0.0;
  _rtXdot->gamma2s_CSTATE += -0.0 * Model_3D_X.gamma2s_CSTATE;
  _rtXdot->gamma2s_CSTATE += Model_3D_B.Gm;

  // Derivatives for TransferFcn: '<Root>/-gamma1//s'
  _rtXdot->gamma1s_CSTATE = 0.0;
  _rtXdot->gamma1s_CSTATE += -0.0 * Model_3D_X.gamma1s_CSTATE;
  _rtXdot->gamma1s_CSTATE += Model_3D_B.Gm_d;

  // Derivatives for TransferFcn: '<Root>/reference model'
  _rtXdot->referencemodel_CSTATE[0] = 0.0;
  _rtXdot->referencemodel_CSTATE[0] += -8.0 * Model_3D_X.referencemodel_CSTATE[0];
  _rtXdot->referencemodel_CSTATE[1] = 0.0;
  _rtXdot->referencemodel_CSTATE[0] += -10.0 * Model_3D_X.referencemodel_CSTATE
    [1];
  _rtXdot->referencemodel_CSTATE[1] += Model_3D_X.referencemodel_CSTATE[0];
  _rtXdot->referencemodel_CSTATE[0] += Model_3D_B.Step;

  // Derivatives for Integrator: '<S1>/Integrator2'
  _rtXdot->Integrator2_CSTATE = Model_3D_B.Gain25;

  // Derivatives for Integrator: '<S2>/Integrator4'
  _rtXdot->Integrator4_CSTATE_k = Model_3D_B.Gain16_h;

  // Derivatives for Integrator: '<S2>/Integrator2'
  _rtXdot->Integrator2_CSTATE_n = Model_3D_B.Gain25_p;

  // Derivatives for Integrator: '<S1>/right'
  _rtXdot->right_CSTATE[0] = Model_3D_B.x4[0];

  // Derivatives for Integrator: '<S1>/Integrator5'
  _rtXdot->Integrator5_CSTATE[0] = Model_3D_B.Gain18[0];

  // Derivatives for Integrator: '<S1>/Integrator1'
  _rtXdot->Integrator1_CSTATE[0] = Model_3D_B.Add[0];

  // Derivatives for Integrator: '<S1>/Integrator'
  _rtXdot->Integrator_CSTATE[0] = Model_3D_B.Add1[0];

  // Derivatives for Integrator: '<S1>/left'
  _rtXdot->left_CSTATE[0] = Model_3D_B.x3[0];

  // Derivatives for Integrator: '<S1>/Integrator3'
  _rtXdot->Integrator3_CSTATE[0] = Model_3D_B.Gain27[0];

  // Derivatives for Integrator: '<S2>/Integrator5'
  _rtXdot->Integrator5_CSTATE_l[0] = Model_3D_B.Gain18_e[0];

  // Derivatives for Integrator: '<S2>/right'
  _rtXdot->right_CSTATE_g[0] = Model_3D_B.x3_o[0];

  // Derivatives for Integrator: '<S2>/Integrator3'
  _rtXdot->Integrator3_CSTATE_j[0] = Model_3D_B.Gain27_f[0];

  // Derivatives for Integrator: '<S2>/left'
  _rtXdot->left_CSTATE_g[0] = Model_3D_B.x3_e[0];

  // Derivatives for Integrator: '<S1>/right'
  _rtXdot->right_CSTATE[1] = Model_3D_B.x4[1];

  // Derivatives for Integrator: '<S1>/Integrator5'
  _rtXdot->Integrator5_CSTATE[1] = Model_3D_B.Gain18[1];

  // Derivatives for Integrator: '<S1>/Integrator1'
  _rtXdot->Integrator1_CSTATE[1] = Model_3D_B.Add[1];

  // Derivatives for Integrator: '<S1>/Integrator'
  _rtXdot->Integrator_CSTATE[1] = Model_3D_B.Add1[1];

  // Derivatives for Integrator: '<S1>/left'
  _rtXdot->left_CSTATE[1] = Model_3D_B.x3[1];

  // Derivatives for Integrator: '<S1>/Integrator3'
  _rtXdot->Integrator3_CSTATE[1] = Model_3D_B.Gain27[1];

  // Derivatives for Integrator: '<S2>/Integrator5'
  _rtXdot->Integrator5_CSTATE_l[1] = Model_3D_B.Gain18_e[1];

  // Derivatives for Integrator: '<S2>/right'
  _rtXdot->right_CSTATE_g[1] = Model_3D_B.x3_o[1];

  // Derivatives for Integrator: '<S2>/Integrator3'
  _rtXdot->Integrator3_CSTATE_j[1] = Model_3D_B.Gain27_f[1];

  // Derivatives for Integrator: '<S2>/left'
  _rtXdot->left_CSTATE_g[1] = Model_3D_B.x3_e[1];

  // Derivatives for Integrator: '<S1>/right'
  _rtXdot->right_CSTATE[2] = Model_3D_B.x4[2];

  // Derivatives for Integrator: '<S1>/Integrator5'
  _rtXdot->Integrator5_CSTATE[2] = Model_3D_B.Gain18[2];

  // Derivatives for Integrator: '<S1>/Integrator1'
  _rtXdot->Integrator1_CSTATE[2] = Model_3D_B.Add[2];

  // Derivatives for Integrator: '<S1>/Integrator'
  _rtXdot->Integrator_CSTATE[2] = Model_3D_B.Add1[2];

  // Derivatives for Integrator: '<S1>/left'
  _rtXdot->left_CSTATE[2] = Model_3D_B.x3[2];

  // Derivatives for Integrator: '<S1>/Integrator3'
  _rtXdot->Integrator3_CSTATE[2] = Model_3D_B.Gain27[2];

  // Derivatives for Integrator: '<S2>/Integrator5'
  _rtXdot->Integrator5_CSTATE_l[2] = Model_3D_B.Gain18_e[2];

  // Derivatives for Integrator: '<S2>/right'
  _rtXdot->right_CSTATE_g[2] = Model_3D_B.x3_o[2];

  // Derivatives for Integrator: '<S2>/Integrator3'
  _rtXdot->Integrator3_CSTATE_j[2] = Model_3D_B.Gain27_f[2];

  // Derivatives for Integrator: '<S2>/left'
  _rtXdot->left_CSTATE_g[2] = Model_3D_B.x3_e[2];

  // Derivatives for Integrator: '<S2>/Integrator7'
  _rtXdot->Integrator7_CSTATE = Model_3D_B.Gain7;

  // Derivatives for TransferFcn: '<Root>/Gm '
  _rtXdot->Gm_CSTATE[0] = 0.0;
  _rtXdot->Gm_CSTATE[0] += -8.0 * Model_3D_X.Gm_CSTATE[0];

  // Derivatives for TransferFcn: '<Root>/Gm  '
  _rtXdot->Gm_CSTATE_n[0] = 0.0;
  _rtXdot->Gm_CSTATE_n[0] += -8.0 * Model_3D_X.Gm_CSTATE_n[0];

  // Derivatives for TransferFcn: '<Root>/Gm '
  _rtXdot->Gm_CSTATE[1] = 0.0;
  _rtXdot->Gm_CSTATE[0] += -10.0 * Model_3D_X.Gm_CSTATE[1];

  // Derivatives for TransferFcn: '<Root>/Gm  '
  _rtXdot->Gm_CSTATE_n[1] = 0.0;
  _rtXdot->Gm_CSTATE_n[0] += -10.0 * Model_3D_X.Gm_CSTATE_n[1];

  // Derivatives for TransferFcn: '<Root>/Gm '
  _rtXdot->Gm_CSTATE[1] += Model_3D_X.Gm_CSTATE[0];
  _rtXdot->Gm_CSTATE[0] += Model_3D_B.Sum;

  // Derivatives for TransferFcn: '<Root>/Gm  '
  _rtXdot->Gm_CSTATE_n[1] += Model_3D_X.Gm_CSTATE_n[0];
  _rtXdot->Gm_CSTATE_n[0] += Model_3D_B.Step;

  // Derivatives for Integrator: '<S2>/Integrator8'
  _rtXdot->Integrator8_CSTATE = Model_3D_B.Gain9;
}

// Model initialize function
void Model_3DModelClass::initialize()
{
  // Registration code
  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&(&Model_3D_M)->solverInfo, &(&Model_3D_M)
                          ->Timing.simTimeStep);
    rtsiSetTPtr(&(&Model_3D_M)->solverInfo, &rtmGetTPtr((&Model_3D_M)));
    rtsiSetStepSizePtr(&(&Model_3D_M)->solverInfo, &(&Model_3D_M)
                       ->Timing.stepSize0);
    rtsiSetdXPtr(&(&Model_3D_M)->solverInfo, &(&Model_3D_M)->derivs);
    rtsiSetContStatesPtr(&(&Model_3D_M)->solverInfo, (real_T **) &(&Model_3D_M
                         )->contStates);
    rtsiSetNumContStatesPtr(&(&Model_3D_M)->solverInfo, &(&Model_3D_M)
      ->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&(&Model_3D_M)->solverInfo, &(&Model_3D_M)
      ->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&(&Model_3D_M)->solverInfo, &(&Model_3D_M)
      ->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&(&Model_3D_M)->solverInfo, &(&Model_3D_M
      )->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&(&Model_3D_M)->solverInfo, (&rtmGetErrorStatus
      ((&Model_3D_M))));
    rtsiSetRTModelPtr(&(&Model_3D_M)->solverInfo, (&Model_3D_M));
  }

  rtsiSetSimTimeStep(&(&Model_3D_M)->solverInfo, MAJOR_TIME_STEP);
  (&Model_3D_M)->intgData.deltaY= (&Model_3D_M)->OdeDeltaY;
  (&Model_3D_M)->intgData.f[0] = (&Model_3D_M)->odeF[0];
  (&Model_3D_M)->intgData.f[1] = (&Model_3D_M)->odeF[1];
  (&Model_3D_M)->intgData.f[2] = (&Model_3D_M)->odeF[2];
  (&Model_3D_M)->intgData.f[3] = (&Model_3D_M)->odeF[3];
  (&Model_3D_M)->intgData.f[4] = (&Model_3D_M)->odeF[4];
  (&Model_3D_M)->intgData.f[5] = (&Model_3D_M)->odeF[5];
  (&Model_3D_M)->intgData.f[6] = (&Model_3D_M)->odeF[6];
  (&Model_3D_M)->intgData.f[7] = (&Model_3D_M)->odeF[7];
  (&Model_3D_M)->intgData.f[8] = (&Model_3D_M)->odeF[8];
  (&Model_3D_M)->intgData.f[9] = (&Model_3D_M)->odeF[9];
  (&Model_3D_M)->intgData.f[10] = (&Model_3D_M)->odeF[10];
  (&Model_3D_M)->intgData.f[11] = (&Model_3D_M)->odeF[11];
  (&Model_3D_M)->intgData.f[12] = (&Model_3D_M)->odeF[12];
  (&Model_3D_M)->intgData.x0 = (&Model_3D_M)->odeX0;
  (&Model_3D_M)->contStates = ((X_Model_3D_T *) &Model_3D_X);
  rtsiSetSolverData(&(&Model_3D_M)->solverInfo, static_cast<void *>
                    (&(&Model_3D_M)->intgData));
  rtsiSetSolverName(&(&Model_3D_M)->solverInfo,"ode8");
  rtmSetTPtr((&Model_3D_M), &(&Model_3D_M)->Timing.tArray[0]);
  (&Model_3D_M)->Timing.stepSize0 = 0.005;

  // InitializeConditions for Integrator: '<S1>/Integrator4'
  Model_3D_X.Integrator4_CSTATE = 1.0;

  // InitializeConditions for Integrator: '<S1>/x1'
  Model_3D_X.x1_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S1>/x2'
  Model_3D_X.x2_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S1>/x1'
  Model_3D_X.x1_CSTATE[1] = 0.2;

  // InitializeConditions for Integrator: '<S1>/x2'
  Model_3D_X.x2_CSTATE[1] = 0.4;

  // InitializeConditions for Integrator: '<S1>/x1'
  Model_3D_X.x1_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S1>/x2'
  Model_3D_X.x2_CSTATE[2] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/gamma2//s'
  Model_3D_X.gamma2s_CSTATE = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/-gamma1//s'
  Model_3D_X.gamma1s_CSTATE = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/reference model'
  Model_3D_X.referencemodel_CSTATE[0] = 0.0;
  Model_3D_X.referencemodel_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S1>/Integrator2'
  Model_3D_X.Integrator2_CSTATE = 1.0;

  // InitializeConditions for Integrator: '<S2>/Integrator4'
  Model_3D_X.Integrator4_CSTATE_k = 1.0;

  // InitializeConditions for Integrator: '<S2>/Integrator2'
  Model_3D_X.Integrator2_CSTATE_n = 1.0;

  // InitializeConditions for Integrator: '<S1>/right'
  Model_3D_X.right_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S1>/Integrator5'
  Model_3D_X.Integrator5_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S1>/Integrator1'
  Model_3D_X.Integrator1_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S1>/Integrator'
  Model_3D_X.Integrator_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S1>/left'
  Model_3D_X.left_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S1>/Integrator3'
  Model_3D_X.Integrator3_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S2>/Integrator5'
  Model_3D_X.Integrator5_CSTATE_l[0] = 0.0;

  // InitializeConditions for Integrator: '<S2>/right'
  Model_3D_X.right_CSTATE_g[0] = 0.0;

  // InitializeConditions for Integrator: '<S2>/Integrator3'
  Model_3D_X.Integrator3_CSTATE_j[0] = 0.0;

  // InitializeConditions for Integrator: '<S2>/left'
  Model_3D_X.left_CSTATE_g[0] = 0.0;

  // InitializeConditions for Integrator: '<S1>/right'
  Model_3D_X.right_CSTATE[1] = 0.6;

  // InitializeConditions for Integrator: '<S1>/Integrator5'
  Model_3D_X.Integrator5_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S1>/Integrator1'
  Model_3D_X.Integrator1_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S1>/Integrator'
  Model_3D_X.Integrator_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S1>/left'
  Model_3D_X.left_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S1>/Integrator3'
  Model_3D_X.Integrator3_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S2>/Integrator5'
  Model_3D_X.Integrator5_CSTATE_l[1] = 0.0;

  // InitializeConditions for Integrator: '<S2>/right'
  Model_3D_X.right_CSTATE_g[1] = 0.6;

  // InitializeConditions for Integrator: '<S2>/Integrator3'
  Model_3D_X.Integrator3_CSTATE_j[1] = 0.0;

  // InitializeConditions for Integrator: '<S2>/left'
  Model_3D_X.left_CSTATE_g[1] = 0.0;

  // InitializeConditions for Integrator: '<S1>/right'
  Model_3D_X.right_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S1>/Integrator5'
  Model_3D_X.Integrator5_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S1>/Integrator1'
  Model_3D_X.Integrator1_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S1>/Integrator'
  Model_3D_X.Integrator_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S1>/left'
  Model_3D_X.left_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S1>/Integrator3'
  Model_3D_X.Integrator3_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S2>/Integrator5'
  Model_3D_X.Integrator5_CSTATE_l[2] = 0.0;

  // InitializeConditions for Integrator: '<S2>/right'
  Model_3D_X.right_CSTATE_g[2] = 0.0;

  // InitializeConditions for Integrator: '<S2>/Integrator3'
  Model_3D_X.Integrator3_CSTATE_j[2] = 0.0;

  // InitializeConditions for Integrator: '<S2>/left'
  Model_3D_X.left_CSTATE_g[2] = 0.0;

  // InitializeConditions for Integrator: '<S2>/Integrator7'
  Model_3D_X.Integrator7_CSTATE = 1.0;

  // InitializeConditions for TransferFcn: '<Root>/Gm '
  Model_3D_X.Gm_CSTATE[0] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/Gm  '
  Model_3D_X.Gm_CSTATE_n[0] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/Gm '
  Model_3D_X.Gm_CSTATE[1] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/Gm  '
  Model_3D_X.Gm_CSTATE_n[1] = 0.0;

  // InitializeConditions for Integrator: '<S2>/Integrator8'
  Model_3D_X.Integrator8_CSTATE = 1.0;
}

// Model terminate function
void Model_3DModelClass::terminate()
{
  // (no terminate code required)
}

// Constructor
Model_3DModelClass::Model_3DModelClass() :
  Model_3D_B(),
  Model_3D_X(),
  Model_3D_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
Model_3DModelClass::~Model_3DModelClass()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL_Model_3D_T * Model_3DModelClass::getRTM()
{
  return (&Model_3D_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
