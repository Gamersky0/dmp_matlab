//
// File: my_model.cpp
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
#include "my_model.h"
#include "my_model_private.h"

// This function updates continuous states using the ODE8 fixed-step
//  solver algorithm

void Model_3DModelClass::rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  // Solver Matrices
#define my_model_NSTAGES               13

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
  real_T* f[my_model_NSTAGES];
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
  for (stagesIdx=0;stagesIdx<my_model_NSTAGES;stagesIdx++) {
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
      my_model_derivatives();
    } else {
      (stagesIdx==my_model_NSTAGES-1)? rtsiSetT(si, tnew) : rtsiSetT(si, t + h*
        rt_ODE8_C[stagesIdx]);
      rtsiSetdX(si, f[stagesIdx]);
      this->step();
      my_model_derivatives();
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
//    '<S1>/MATLAB Function4'
//    '<S1>/MATLAB Function5'
//
void Model_3DModelClass::my_model_MATLABFunction4(const real_T rtu_u[3], real_T *
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

//
// Output and update for atomic system:
//    '<S5>/MATLAB Function14'
//    '<S6>/MATLAB Function2'
//
void Model_3DModelClass::my_model_MATLABFunction14(real_T rtu_u, real_T rty_out
  [3])
{
  real_T tem[41];
  real_T tmp[3];
  real_T a;
  int32_T i;
  int32_T k;
  for (k = 0; k < 41; k++) {
    a = rtu_u - my_model_ConstP.pooled1[k];
    tem[k] = std::exp(a * a * -my_model_ConstP.pooled3[k]);
  }

  a = tem[0];
  for (k = 0; k < 40; k++) {
    a += tem[k + 1];
  }

  for (k = 0; k < 3; k++) {
    tmp[k] = 0.0;
    for (i = 0; i < 41; i++) {
      tmp[k] += my_model_ConstP.pooled2[3 * i + k] * tem[i];
    }

    rty_out[k] = tmp[k] * rtu_u / a;
  }
}

// Model step function
void Model_3DModelClass::step()
{
  static const real_T axis[6] = { 0.1, 0.15, 0.2, 0.15, 0.1, 0.2 };

  static const real_T center[6] = { 0.2, -0.4, 0.8, 1.2, 0.4, 0.8 };

  real_T rtb_OUT[3];
  real_T K;
  real_T phi;
  real_T phi_idx_0;
  real_T phi_idx_1;
  real_T rtb_Gain_n;
  real_T rtb_input_left;
  real_T rtb_y;
  real_T rtb_y_idx_0;
  real_T rtb_y_idx_1;
  real_T rtb_y_n;
  int32_T j;
  if (rtmIsMajorTimeStep((&my_model_M))) {
    // set solver stop time
    rtsiSetSolverStopTime(&(&my_model_M)->solverInfo,(((&my_model_M)
      ->Timing.clockTick0+1)*(&my_model_M)->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep((&my_model_M))) {
    (&my_model_M)->Timing.t[0] = rtsiGetT(&(&my_model_M)->solverInfo);
  }

  // Integrator: '<S4>/x2'
  my_model_B.Gain18[0] = my_model_X.x2_CSTATE[0];

  // Sum: '<S1>/Sum' incorporates:
  //   Integrator: '<S4>/x1'
  //   Integrator: '<S4>/x2'

  rtb_OUT[0] = my_model_X.x1_CSTATE[0] - my_model_X.x2_CSTATE[0];

  // Integrator: '<S4>/x2'
  my_model_B.Gain18[1] = my_model_X.x2_CSTATE[1];

  // Sum: '<S1>/Sum' incorporates:
  //   Integrator: '<S4>/x1'
  //   Integrator: '<S4>/x2'

  rtb_OUT[1] = my_model_X.x1_CSTATE[1] - my_model_X.x2_CSTATE[1];

  // Integrator: '<S4>/x2'
  my_model_B.Gain18[2] = my_model_X.x2_CSTATE[2];

  // Sum: '<S1>/Sum' incorporates:
  //   Integrator: '<S4>/x1'
  //   Integrator: '<S4>/x2'

  rtb_OUT[2] = my_model_X.x1_CSTATE[2] - my_model_X.x2_CSTATE[2];

  // MATLAB Function: '<S1>/MATLAB Function4'
  my_model_MATLABFunction4(rtb_OUT, &rtb_y_n);

  // Sum: '<Root>/Sum' incorporates:
  //   TransferFcn: '<Root>/reference model'

  my_model_B.Sum = rtb_y_n - (10.0 * my_model_X.referencemodel_CSTATE[1] +
    my_model_X.referencemodel_CSTATE[0]);

  // Step: '<Root>/Step'
  if ((&my_model_M)->Timing.t[0] < 0.0) {
    // Step: '<Root>/Step'
    my_model_B.Step = 0.0;
  } else {
    // Step: '<Root>/Step'
    my_model_B.Step = 0.2;
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

  rtb_Gain_n = (-1.2 * my_model_X.gamma1s_CSTATE * my_model_B.Sum *
                my_model_B.Step - 0.5 * my_model_X.gamma2s_CSTATE * rtb_y_n *
                rtb_y_n) * -10000.0;

  // Gain: '<S1>/Gain22'
  rtb_input_left = 5.0 * rtb_Gain_n;

  // MATLAB Function: '<S5>/MATLAB Function14' incorporates:
  //   Integrator: '<S5>/Integrator2'

  my_model_MATLABFunction14(my_model_X.Integrator2_CSTATE, my_model_B.Gain27);

  // Integrator: '<S5>/Integrator3'
  my_model_B.Integrator3[0] = my_model_X.Integrator3_CSTATE[0];

  // MATLAB Function: '<S5>/Right_3D' incorporates:
  //   Integrator: '<S5>/left'

  rtb_y_n = (my_model_X.left_CSTATE[0] - 0.15) / 0.1;
  K = rtb_y_n * rtb_y_n;
  rtb_OUT[0] = (my_model_X.left_CSTATE[0] - 0.15) / 0.010000000000000002;

  // Integrator: '<S5>/Integrator3'
  my_model_B.Integrator3[1] = my_model_X.Integrator3_CSTATE[1];

  // MATLAB Function: '<S5>/Right_3D' incorporates:
  //   Integrator: '<S5>/left'

  rtb_y_n = (my_model_X.left_CSTATE[1] - 0.2) / 0.1;
  K += rtb_y_n * rtb_y_n;
  rtb_OUT[1] = (my_model_X.left_CSTATE[1] - 0.2) / 0.010000000000000002;

  // Integrator: '<S5>/Integrator3'
  my_model_B.Integrator3[2] = my_model_X.Integrator3_CSTATE[2];

  // MATLAB Function: '<S5>/Right_3D' incorporates:
  //   Integrator: '<S5>/left'

  rtb_y_n = (my_model_X.left_CSTATE[2] - 0.4) / 0.1;
  K += rtb_y_n * rtb_y_n;
  rtb_OUT[2] = (my_model_X.left_CSTATE[2] - 0.4) / 0.010000000000000002;
  K--;
  rtb_y_n = std::exp(-K);
  K = 1.0 / K / K + 1.0 / K;

  // Gain: '<S1>/Gain20'
  rtb_Gain_n *= -5.0;

  // Gain: '<S5>/Gain27' incorporates:
  //   Gain: '<S5>/Gain26'
  //   Gain: '<S5>/Gain28'
  //   Gain: '<S5>/Gain29'
  //   Integrator: '<S5>/Integrator2'
  //   Integrator: '<S5>/left'
  //   MATLAB Function: '<S5>/Right_3D'
  //   Product: '<S5>/Product'
  //   Sum: '<S5>/Add4'
  //   Sum: '<S5>/Sum6'

  my_model_B.Gain27[0] = (((((1050.0 * my_model_B.Gain27[0] + -194.421 *
    my_model_B.Integrator3[0]) + (-1.0 - my_model_X.left_CSTATE[0]) * 1050.0) +
    my_model_ConstB.Gain30[0] * my_model_X.Integrator2_CSTATE) + rtb_input_left)
    + rtb_OUT[0] * rtb_y_n * K * 2.0) * 0.1111111111111111;

  // Integrator: '<S4>/Integrator1'
  my_model_B.x1[0] = my_model_X.Integrator1_CSTATE[0];

  // Integrator: '<S6>/Integrator5'
  my_model_B.x4dot[0] = my_model_X.Integrator5_CSTATE[0];

  // Integrator: '<S4>/Integrator'
  my_model_B.x2[0] = my_model_X.Integrator_CSTATE[0];

  // Gain: '<S4>/Gain12' incorporates:
  //   Gain: '<S4>/Gain'
  //   Gain: '<S4>/Gain13'
  //   Integrator: '<S4>/x2'

  my_model_B.Add[0] = 1050.0 * my_model_X.x2_CSTATE[0];

  // Gain: '<S4>/Gain11' incorporates:
  //   Gain: '<S4>/Gain1'
  //   Gain: '<S4>/Gain14'

  rtb_y = 64.8074 * my_model_B.x2[0];

  // Gain: '<S4>/Gain15' incorporates:
  //   Gain: '<S4>/Gain3'
  //   Gain: '<S4>/Gain4'
  //   Integrator: '<S4>/x1'

  phi = 1050.0 * my_model_X.x1_CSTATE[0];

  // Gain: '<S4>/Gain9' incorporates:
  //   Gain: '<S4>/Gain5'
  //   Gain: '<S4>/Gain6'

  phi_idx_0 = 64.8074 * my_model_B.x1[0];

  // Sum: '<S4>/Add1' incorporates:
  //   Gain: '<S4>/Gain10'
  //   Gain: '<S4>/Gain12'
  //   Gain: '<S4>/Gain13'
  //   Gain: '<S4>/Gain8'
  //   Integrator: '<S6>/right'

  my_model_B.Add1[0] = ((((((1050.0 * my_model_X.right_CSTATE[0] + phi) +
    phi_idx_0) + 64.8074 * my_model_B.x4dot[0]) - rtb_y) - my_model_B.Add[0]) -
                        my_model_B.Add[0]) - rtb_y;

  // Sum: '<S4>/Add' incorporates:
  //   Gain: '<S4>/Gain'
  //   Gain: '<S4>/Gain2'
  //   Gain: '<S4>/Gain7'
  //   Integrator: '<S5>/left'

  my_model_B.Add[0] = ((((((1050.0 * my_model_X.left_CSTATE[0] + my_model_B.Add
    [0]) + rtb_y) + 64.8074 * my_model_B.Integrator3[0]) - phi) - phi) -
                       phi_idx_0) - phi_idx_0;

  // MATLAB Function: '<S5>/Right_3D' incorporates:
  //   Integrator: '<S5>/left'
  //   Integrator: '<S6>/right'
  //   Sum: '<S1>/Sum4'

  rtb_OUT[0] = my_model_X.left_CSTATE[0] - my_model_X.right_CSTATE[0];

  // Gain: '<S4>/Gain11'
  rtb_y_idx_0 = 0.0;

  // Gain: '<S5>/Gain27' incorporates:
  //   Gain: '<S5>/Gain26'
  //   Gain: '<S5>/Gain28'
  //   Gain: '<S5>/Gain29'
  //   Integrator: '<S5>/Integrator2'
  //   Integrator: '<S5>/left'
  //   MATLAB Function: '<S5>/Right_3D'
  //   Product: '<S5>/Product'
  //   Sum: '<S5>/Add4'
  //   Sum: '<S5>/Sum6'

  my_model_B.Gain27[1] = (((((1050.0 * my_model_B.Gain27[1] + -194.421 *
    my_model_B.Integrator3[1]) + (0.0 - my_model_X.left_CSTATE[1]) * 1050.0) +
    my_model_ConstB.Gain30[1] * my_model_X.Integrator2_CSTATE) + rtb_input_left)
    + rtb_OUT[1] * rtb_y_n * K * 2.0) * 0.1111111111111111;

  // Integrator: '<S4>/Integrator1'
  my_model_B.x1[1] = my_model_X.Integrator1_CSTATE[1];

  // Integrator: '<S6>/Integrator5'
  my_model_B.x4dot[1] = my_model_X.Integrator5_CSTATE[1];

  // Integrator: '<S4>/Integrator'
  my_model_B.x2[1] = my_model_X.Integrator_CSTATE[1];

  // Gain: '<S4>/Gain12' incorporates:
  //   Gain: '<S4>/Gain'
  //   Gain: '<S4>/Gain13'
  //   Integrator: '<S4>/x2'

  my_model_B.Add[1] = 1050.0 * my_model_X.x2_CSTATE[1];

  // Gain: '<S4>/Gain11' incorporates:
  //   Gain: '<S4>/Gain1'
  //   Gain: '<S4>/Gain14'

  rtb_y = 64.8074 * my_model_B.x2[1];

  // Gain: '<S4>/Gain15' incorporates:
  //   Gain: '<S4>/Gain3'
  //   Gain: '<S4>/Gain4'
  //   Integrator: '<S4>/x1'

  phi = 1050.0 * my_model_X.x1_CSTATE[1];

  // Gain: '<S4>/Gain9' incorporates:
  //   Gain: '<S4>/Gain5'
  //   Gain: '<S4>/Gain6'

  phi_idx_0 = 64.8074 * my_model_B.x1[1];

  // Sum: '<S4>/Add1' incorporates:
  //   Gain: '<S4>/Gain10'
  //   Gain: '<S4>/Gain12'
  //   Gain: '<S4>/Gain13'
  //   Gain: '<S4>/Gain8'
  //   Integrator: '<S6>/right'

  my_model_B.Add1[1] = ((((((1050.0 * my_model_X.right_CSTATE[1] + phi) +
    phi_idx_0) + 64.8074 * my_model_B.x4dot[1]) - rtb_y) - my_model_B.Add[1]) -
                        my_model_B.Add[1]) - rtb_y;

  // Sum: '<S4>/Add' incorporates:
  //   Gain: '<S4>/Gain'
  //   Gain: '<S4>/Gain2'
  //   Gain: '<S4>/Gain7'
  //   Integrator: '<S5>/left'

  my_model_B.Add[1] = ((((((1050.0 * my_model_X.left_CSTATE[1] + my_model_B.Add
    [1]) + rtb_y) + 64.8074 * my_model_B.Integrator3[1]) - phi) - phi) -
                       phi_idx_0) - phi_idx_0;

  // MATLAB Function: '<S5>/Right_3D' incorporates:
  //   Integrator: '<S5>/left'
  //   Integrator: '<S6>/right'
  //   Sum: '<S1>/Sum4'

  rtb_OUT[1] = my_model_X.left_CSTATE[1] - my_model_X.right_CSTATE[1];

  // Gain: '<S4>/Gain11'
  rtb_y_idx_1 = 0.0;

  // Gain: '<S5>/Gain27' incorporates:
  //   Gain: '<S5>/Gain26'
  //   Gain: '<S5>/Gain28'
  //   Gain: '<S5>/Gain29'
  //   Integrator: '<S5>/Integrator2'
  //   Integrator: '<S5>/left'
  //   MATLAB Function: '<S5>/Right_3D'
  //   Product: '<S5>/Product'
  //   Sum: '<S5>/Add4'
  //   Sum: '<S5>/Sum6'

  my_model_B.Gain27[2] = (((((1050.0 * my_model_B.Gain27[2] + -194.421 *
    my_model_B.Integrator3[2]) + (1.0 - my_model_X.left_CSTATE[2]) * 1050.0) +
    my_model_ConstB.Gain30[2] * my_model_X.Integrator2_CSTATE) + rtb_input_left)
    + rtb_OUT[2] * rtb_y_n * K * 2.0) * 0.1111111111111111;

  // Integrator: '<S4>/Integrator1'
  my_model_B.x1[2] = my_model_X.Integrator1_CSTATE[2];

  // Integrator: '<S6>/Integrator5'
  my_model_B.x4dot[2] = my_model_X.Integrator5_CSTATE[2];

  // Integrator: '<S4>/Integrator'
  my_model_B.x2[2] = my_model_X.Integrator_CSTATE[2];

  // Gain: '<S4>/Gain12' incorporates:
  //   Gain: '<S4>/Gain'
  //   Gain: '<S4>/Gain13'
  //   Integrator: '<S4>/x2'

  my_model_B.Add[2] = 1050.0 * my_model_X.x2_CSTATE[2];

  // Gain: '<S4>/Gain11' incorporates:
  //   Gain: '<S4>/Gain1'
  //   Gain: '<S4>/Gain14'

  rtb_y = 64.8074 * my_model_B.x2[2];

  // Gain: '<S4>/Gain15' incorporates:
  //   Gain: '<S4>/Gain3'
  //   Gain: '<S4>/Gain4'
  //   Integrator: '<S4>/x1'

  phi = 1050.0 * my_model_X.x1_CSTATE[2];

  // Gain: '<S4>/Gain9' incorporates:
  //   Gain: '<S4>/Gain5'
  //   Gain: '<S4>/Gain6'

  phi_idx_0 = 64.8074 * my_model_B.x1[2];

  // Sum: '<S4>/Add1' incorporates:
  //   Gain: '<S4>/Gain10'
  //   Gain: '<S4>/Gain12'
  //   Gain: '<S4>/Gain13'
  //   Gain: '<S4>/Gain8'
  //   Integrator: '<S6>/right'

  my_model_B.Add1[2] = ((((((1050.0 * my_model_X.right_CSTATE[2] + phi) +
    phi_idx_0) + 64.8074 * my_model_B.x4dot[2]) - rtb_y) - my_model_B.Add[2]) -
                        my_model_B.Add[2]) - rtb_y;

  // Sum: '<S4>/Add' incorporates:
  //   Gain: '<S4>/Gain'
  //   Gain: '<S4>/Gain2'
  //   Gain: '<S4>/Gain7'
  //   Integrator: '<S5>/left'

  my_model_B.Add[2] = ((((((1050.0 * my_model_X.left_CSTATE[2] + my_model_B.Add
    [2]) + rtb_y) + 64.8074 * my_model_B.Integrator3[2]) - phi) - phi) -
                       phi_idx_0) - phi_idx_0;

  // MATLAB Function: '<S5>/Right_3D' incorporates:
  //   Integrator: '<S5>/left'
  //   Integrator: '<S6>/right'
  //   Sum: '<S1>/Sum4'

  rtb_OUT[2] = my_model_X.left_CSTATE[2] - my_model_X.right_CSTATE[2];

  // Gain: '<S4>/Gain11'
  rtb_input_left = 0.0;

  // MATLAB Function: '<S6>/3D' incorporates:
  //   Integrator: '<S6>/right'

  for (j = 0; j < 2; j++) {
    rtb_y = axis[j];
    phi = my_model_X.right_CSTATE[0] - center[j];
    rtb_y_n = phi / rtb_y;
    K = rtb_y_n * rtb_y_n;
    phi_idx_0 = phi / (rtb_y * rtb_y);
    rtb_y = axis[j + 2];
    phi = my_model_X.right_CSTATE[1] - center[j + 2];
    rtb_y_n = phi / rtb_y;
    K += rtb_y_n * rtb_y_n;
    phi_idx_1 = phi / (rtb_y * rtb_y);
    rtb_y = axis[j + 4];
    phi = my_model_X.right_CSTATE[2] - center[j + 4];
    rtb_y_n = phi / rtb_y;
    K += rtb_y_n * rtb_y_n;
    K--;
    rtb_y_n = std::exp(-K);
    K = 1.0 / K / K + 1.0 / K;
    rtb_y_idx_0 += phi_idx_0 * rtb_y_n * K * 2.0;
    rtb_y_idx_1 += phi_idx_1 * rtb_y_n * K * 2.0;
    rtb_input_left += phi / (rtb_y * rtb_y) * rtb_y_n * K * 2.0;
  }

  // End of MATLAB Function: '<S6>/3D'

  // MATLAB Function: '<S6>/MATLAB Function2' incorporates:
  //   Integrator: '<S6>/Integrator4'

  my_model_MATLABFunction14(my_model_X.Integrator4_CSTATE, my_model_B.Gain18);

  // Gain: '<S6>/Gain18' incorporates:
  //   Gain: '<S6>/Gain17'
  //   Gain: '<S6>/Gain19'
  //   Gain: '<S6>/Gain31'
  //   Integrator: '<S6>/Integrator4'
  //   Integrator: '<S6>/right'
  //   Product: '<S6>/Product1'
  //   Sum: '<S6>/Add2'
  //   Sum: '<S6>/Sum2'

  my_model_B.Gain18[0] = (((((1050.0 * my_model_B.Gain18[0] + -194.421 *
    my_model_B.x4dot[0]) + (-1.0 - my_model_X.right_CSTATE[0]) * 1050.0) +
    my_model_ConstB.Gain32[0] * my_model_X.Integrator4_CSTATE) + rtb_Gain_n) +
    rtb_y_idx_0) * 0.1111111111111111;
  my_model_B.Gain18[1] = (((((1050.0 * my_model_B.Gain18[1] + -194.421 *
    my_model_B.x4dot[1]) + (0.6 - my_model_X.right_CSTATE[1]) * 1050.0) +
    my_model_ConstB.Gain32[1] * my_model_X.Integrator4_CSTATE) + rtb_Gain_n) +
    rtb_y_idx_1) * 0.1111111111111111;
  my_model_B.Gain18[2] = (((((1050.0 * my_model_B.Gain18[2] + -194.421 *
    my_model_B.x4dot[2]) + (1.0 - my_model_X.right_CSTATE[2]) * 1050.0) +
    my_model_ConstB.Gain32[2] * my_model_X.Integrator4_CSTATE) + rtb_Gain_n) +
    rtb_input_left) * 0.1111111111111111;

  // Gain: '<S6>/Gain16' incorporates:
  //   Integrator: '<S6>/Integrator4'

  my_model_B.Gain16 = -my_model_X.Integrator4_CSTATE;

  // MATLAB Function: '<S1>/MATLAB Function5'
  my_model_MATLABFunction4(rtb_OUT, &rtb_y_n);

  // Gain: '<S5>/Gain25' incorporates:
  //   Integrator: '<S5>/Integrator2'

  my_model_B.Gain25 = -my_model_X.Integrator2_CSTATE;

  // TransferFcn: '<Root>/Gm '
  my_model_B.Gm = 0.0;

  // TransferFcn: '<Root>/Gm  '
  my_model_B.Gm_d = 0.0;

  // TransferFcn: '<Root>/Gm '
  my_model_B.Gm += my_model_X.Gm_CSTATE[0];

  // TransferFcn: '<Root>/Gm  '
  my_model_B.Gm_d += my_model_X.Gm_CSTATE_n[0];

  // TransferFcn: '<Root>/Gm '
  my_model_B.Gm += 10.0 * my_model_X.Gm_CSTATE[1];

  // TransferFcn: '<Root>/Gm  '
  my_model_B.Gm_d += 10.0 * my_model_X.Gm_CSTATE_n[1];
  if (rtmIsMajorTimeStep((&my_model_M))) {
    rt_ertODEUpdateContinuousStates(&(&my_model_M)->solverInfo);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++(&my_model_M)->Timing.clockTick0;
    (&my_model_M)->Timing.t[0] = rtsiGetSolverStopTime(&(&my_model_M)
      ->solverInfo);

    {
      // Update absolute timer for sample time: [0.005s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.005, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      (&my_model_M)->Timing.clockTick1++;
    }
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void Model_3DModelClass::my_model_derivatives()
{
  XDot_my_model_T *_rtXdot;
  _rtXdot = ((XDot_my_model_T *) (&my_model_M)->derivs);

  // Derivatives for Integrator: '<S5>/Integrator2'
  _rtXdot->Integrator2_CSTATE = my_model_B.Gain25;

  // Derivatives for Integrator: '<S4>/x1'
  _rtXdot->x1_CSTATE[0] = my_model_B.x1[0];

  // Derivatives for Integrator: '<S4>/x2'
  _rtXdot->x2_CSTATE[0] = my_model_B.x2[0];

  // Derivatives for Integrator: '<S4>/x1'
  _rtXdot->x1_CSTATE[1] = my_model_B.x1[1];

  // Derivatives for Integrator: '<S4>/x2'
  _rtXdot->x2_CSTATE[1] = my_model_B.x2[1];

  // Derivatives for Integrator: '<S4>/x1'
  _rtXdot->x1_CSTATE[2] = my_model_B.x1[2];

  // Derivatives for Integrator: '<S4>/x2'
  _rtXdot->x2_CSTATE[2] = my_model_B.x2[2];

  // Derivatives for TransferFcn: '<Root>/gamma2//s'
  _rtXdot->gamma2s_CSTATE = 0.0;
  _rtXdot->gamma2s_CSTATE += -0.0 * my_model_X.gamma2s_CSTATE;
  _rtXdot->gamma2s_CSTATE += my_model_B.Gm;

  // Derivatives for TransferFcn: '<Root>/-gamma1//s'
  _rtXdot->gamma1s_CSTATE = 0.0;
  _rtXdot->gamma1s_CSTATE += -0.0 * my_model_X.gamma1s_CSTATE;
  _rtXdot->gamma1s_CSTATE += my_model_B.Gm_d;

  // Derivatives for TransferFcn: '<Root>/reference model'
  _rtXdot->referencemodel_CSTATE[0] = 0.0;
  _rtXdot->referencemodel_CSTATE[0] += -8.0 * my_model_X.referencemodel_CSTATE[0];
  _rtXdot->referencemodel_CSTATE[1] = 0.0;
  _rtXdot->referencemodel_CSTATE[0] += -10.0 * my_model_X.referencemodel_CSTATE
    [1];
  _rtXdot->referencemodel_CSTATE[1] += my_model_X.referencemodel_CSTATE[0];
  _rtXdot->referencemodel_CSTATE[0] += my_model_B.Step;

  // Derivatives for Integrator: '<S5>/Integrator3'
  _rtXdot->Integrator3_CSTATE[0] = my_model_B.Gain27[0];

  // Derivatives for Integrator: '<S5>/left'
  _rtXdot->left_CSTATE[0] = my_model_B.Integrator3[0];

  // Derivatives for Integrator: '<S6>/right'
  _rtXdot->right_CSTATE[0] = my_model_B.x4dot[0];

  // Derivatives for Integrator: '<S4>/Integrator1'
  _rtXdot->Integrator1_CSTATE[0] = my_model_B.Add[0];

  // Derivatives for Integrator: '<S6>/Integrator5'
  _rtXdot->Integrator5_CSTATE[0] = my_model_B.Gain18[0];

  // Derivatives for Integrator: '<S4>/Integrator'
  _rtXdot->Integrator_CSTATE[0] = my_model_B.Add1[0];

  // Derivatives for Integrator: '<S5>/Integrator3'
  _rtXdot->Integrator3_CSTATE[1] = my_model_B.Gain27[1];

  // Derivatives for Integrator: '<S5>/left'
  _rtXdot->left_CSTATE[1] = my_model_B.Integrator3[1];

  // Derivatives for Integrator: '<S6>/right'
  _rtXdot->right_CSTATE[1] = my_model_B.x4dot[1];

  // Derivatives for Integrator: '<S4>/Integrator1'
  _rtXdot->Integrator1_CSTATE[1] = my_model_B.Add[1];

  // Derivatives for Integrator: '<S6>/Integrator5'
  _rtXdot->Integrator5_CSTATE[1] = my_model_B.Gain18[1];

  // Derivatives for Integrator: '<S4>/Integrator'
  _rtXdot->Integrator_CSTATE[1] = my_model_B.Add1[1];

  // Derivatives for Integrator: '<S5>/Integrator3'
  _rtXdot->Integrator3_CSTATE[2] = my_model_B.Gain27[2];

  // Derivatives for Integrator: '<S5>/left'
  _rtXdot->left_CSTATE[2] = my_model_B.Integrator3[2];

  // Derivatives for Integrator: '<S6>/right'
  _rtXdot->right_CSTATE[2] = my_model_B.x4dot[2];

  // Derivatives for Integrator: '<S4>/Integrator1'
  _rtXdot->Integrator1_CSTATE[2] = my_model_B.Add[2];

  // Derivatives for Integrator: '<S6>/Integrator5'
  _rtXdot->Integrator5_CSTATE[2] = my_model_B.Gain18[2];

  // Derivatives for Integrator: '<S4>/Integrator'
  _rtXdot->Integrator_CSTATE[2] = my_model_B.Add1[2];

  // Derivatives for Integrator: '<S6>/Integrator4'
  _rtXdot->Integrator4_CSTATE = my_model_B.Gain16;

  // Derivatives for TransferFcn: '<Root>/Gm '
  _rtXdot->Gm_CSTATE[0] = 0.0;
  _rtXdot->Gm_CSTATE[0] += -8.0 * my_model_X.Gm_CSTATE[0];

  // Derivatives for TransferFcn: '<Root>/Gm  '
  _rtXdot->Gm_CSTATE_n[0] = 0.0;
  _rtXdot->Gm_CSTATE_n[0] += -8.0 * my_model_X.Gm_CSTATE_n[0];

  // Derivatives for TransferFcn: '<Root>/Gm '
  _rtXdot->Gm_CSTATE[1] = 0.0;
  _rtXdot->Gm_CSTATE[0] += -10.0 * my_model_X.Gm_CSTATE[1];

  // Derivatives for TransferFcn: '<Root>/Gm  '
  _rtXdot->Gm_CSTATE_n[1] = 0.0;
  _rtXdot->Gm_CSTATE_n[0] += -10.0 * my_model_X.Gm_CSTATE_n[1];

  // Derivatives for TransferFcn: '<Root>/Gm '
  _rtXdot->Gm_CSTATE[1] += my_model_X.Gm_CSTATE[0];
  _rtXdot->Gm_CSTATE[0] += my_model_B.Sum;

  // Derivatives for TransferFcn: '<Root>/Gm  '
  _rtXdot->Gm_CSTATE_n[1] += my_model_X.Gm_CSTATE_n[0];
  _rtXdot->Gm_CSTATE_n[0] += my_model_B.Step;
}

// Model initialize function
void Model_3DModelClass::initialize()
{
  // Registration code
  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&(&my_model_M)->solverInfo, &(&my_model_M)
                          ->Timing.simTimeStep);
    rtsiSetTPtr(&(&my_model_M)->solverInfo, &rtmGetTPtr((&my_model_M)));
    rtsiSetStepSizePtr(&(&my_model_M)->solverInfo, &(&my_model_M)
                       ->Timing.stepSize0);
    rtsiSetdXPtr(&(&my_model_M)->solverInfo, &(&my_model_M)->derivs);
    rtsiSetContStatesPtr(&(&my_model_M)->solverInfo, (real_T **) &(&my_model_M
                         )->contStates);
    rtsiSetNumContStatesPtr(&(&my_model_M)->solverInfo, &(&my_model_M)
      ->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&(&my_model_M)->solverInfo, &(&my_model_M)
      ->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&(&my_model_M)->solverInfo, &(&my_model_M)
      ->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&(&my_model_M)->solverInfo, &(&my_model_M
      )->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&(&my_model_M)->solverInfo, (&rtmGetErrorStatus
      ((&my_model_M))));
    rtsiSetRTModelPtr(&(&my_model_M)->solverInfo, (&my_model_M));
  }

  rtsiSetSimTimeStep(&(&my_model_M)->solverInfo, MAJOR_TIME_STEP);
  (&my_model_M)->intgData.deltaY= (&my_model_M)->OdeDeltaY;
  (&my_model_M)->intgData.f[0] = (&my_model_M)->odeF[0];
  (&my_model_M)->intgData.f[1] = (&my_model_M)->odeF[1];
  (&my_model_M)->intgData.f[2] = (&my_model_M)->odeF[2];
  (&my_model_M)->intgData.f[3] = (&my_model_M)->odeF[3];
  (&my_model_M)->intgData.f[4] = (&my_model_M)->odeF[4];
  (&my_model_M)->intgData.f[5] = (&my_model_M)->odeF[5];
  (&my_model_M)->intgData.f[6] = (&my_model_M)->odeF[6];
  (&my_model_M)->intgData.f[7] = (&my_model_M)->odeF[7];
  (&my_model_M)->intgData.f[8] = (&my_model_M)->odeF[8];
  (&my_model_M)->intgData.f[9] = (&my_model_M)->odeF[9];
  (&my_model_M)->intgData.f[10] = (&my_model_M)->odeF[10];
  (&my_model_M)->intgData.f[11] = (&my_model_M)->odeF[11];
  (&my_model_M)->intgData.f[12] = (&my_model_M)->odeF[12];
  (&my_model_M)->intgData.x0 = (&my_model_M)->odeX0;
  (&my_model_M)->contStates = ((X_my_model_T *) &my_model_X);
  rtsiSetSolverData(&(&my_model_M)->solverInfo, static_cast<void *>
                    (&(&my_model_M)->intgData));
  rtsiSetSolverName(&(&my_model_M)->solverInfo,"ode8");
  rtmSetTPtr((&my_model_M), &(&my_model_M)->Timing.tArray[0]);
  (&my_model_M)->Timing.stepSize0 = 0.005;

  // InitializeConditions for Integrator: '<S5>/Integrator2'
  my_model_X.Integrator2_CSTATE = 1.0;

  // InitializeConditions for Integrator: '<S4>/x1'
  my_model_X.x1_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S4>/x2'
  my_model_X.x2_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S4>/x1'
  my_model_X.x1_CSTATE[1] = 0.2;

  // InitializeConditions for Integrator: '<S4>/x2'
  my_model_X.x2_CSTATE[1] = 0.4;

  // InitializeConditions for Integrator: '<S4>/x1'
  my_model_X.x1_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S4>/x2'
  my_model_X.x2_CSTATE[2] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/gamma2//s'
  my_model_X.gamma2s_CSTATE = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/-gamma1//s'
  my_model_X.gamma1s_CSTATE = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/reference model'
  my_model_X.referencemodel_CSTATE[0] = 0.0;
  my_model_X.referencemodel_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S5>/Integrator3'
  my_model_X.Integrator3_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S5>/left'
  my_model_X.left_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S6>/right'
  my_model_X.right_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S4>/Integrator1'
  my_model_X.Integrator1_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S6>/Integrator5'
  my_model_X.Integrator5_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S4>/Integrator'
  my_model_X.Integrator_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S5>/Integrator3'
  my_model_X.Integrator3_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S5>/left'
  my_model_X.left_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S6>/right'
  my_model_X.right_CSTATE[1] = 0.6;

  // InitializeConditions for Integrator: '<S4>/Integrator1'
  my_model_X.Integrator1_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S6>/Integrator5'
  my_model_X.Integrator5_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S4>/Integrator'
  my_model_X.Integrator_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S5>/Integrator3'
  my_model_X.Integrator3_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S5>/left'
  my_model_X.left_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S6>/right'
  my_model_X.right_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S4>/Integrator1'
  my_model_X.Integrator1_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S6>/Integrator5'
  my_model_X.Integrator5_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S4>/Integrator'
  my_model_X.Integrator_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S6>/Integrator4'
  my_model_X.Integrator4_CSTATE = 1.0;

  // InitializeConditions for TransferFcn: '<Root>/Gm '
  my_model_X.Gm_CSTATE[0] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/Gm  '
  my_model_X.Gm_CSTATE_n[0] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/Gm '
  my_model_X.Gm_CSTATE[1] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/Gm  '
  my_model_X.Gm_CSTATE_n[1] = 0.0;
}

// Model terminate function
void Model_3DModelClass::terminate()
{
  // (no terminate code required)
}

// Constructor
Model_3DModelClass::Model_3DModelClass() :
  my_model_B(),
  my_model_X(),
  my_model_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
Model_3DModelClass::~Model_3DModelClass()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL_my_model_T * Model_3DModelClass::getRTM()
{
  return (&my_model_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
