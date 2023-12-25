//
// File: couple_dmp_test.cpp
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
#include "couple_dmp_test.h"
#include "iostream"
#include <cmath>
#include <vector>



static double arg_uc_Xp;
static int arg_uc_count;
static bool arg_uc_use_pybullet;


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
      this->step(arg_m_Xp, arg_m_e, arg_X3, arg_X4, arg_uc_Xp, arg_uc_count, arg_uc_use_pybullet);
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
//    '<S3>/MATLAB Function14'
//    '<S4>/MATLAB Function2'
//    '<S2>/MATLAB Function2'
//
void SignalDmp::MATLABFunction14(real_T rtu_u, real_T rty_out[3], P *rtP)
{
  real_T tem[41];
  real_T tmp[3];
  real_T a;
  int32_T i;
  int32_T k;
  for (k = 0; k < 41; k++) {
    a = rtu_u - rtP->cc[k];
    tem[k] = std::exp(a * a * -rtP->width[k]);
  }

  a = tem[0];
  for (k = 0; k < 40; k++) {
    a += tem[k + 1];
  }

  for (k = 0; k < 3; k++) {
    tmp[k] = 0.0;
    for (i = 0; i < 41; i++) {
      tmp[k] += rtP->weight[3 * i + k] * tem[i];
    }

    rty_out[k] = tmp[k] * rtu_u / a;
  }
}

// OBS WEIGHT UC
void fcn_l(double num[3], double result[3]) {
    int n_dim = 3;
    int n_obt = 1;
    double phi[3] = { 0.0 };
    double phi_tal[3] = { 0.0 };

    double x_c_1 = 0.15;
    double y_c_1 = 0.2;
    double z_c_1 = 0.4;
    double a_1 = 0.1;
    double b_1 = 0.1;
    double c_1 = 0.1;

    double x_c_2 = -0.4;
    double y_c_2 = 1.1;
    double z_c_2 = 0.8;
    double a_2 = 0.15;
    double b_2 = 0.15;
    double c_2 = 0.2;

    double center[2][3] = {
        {x_c_1, y_c_1, z_c_1},
        {x_c_2, y_c_2, z_c_2}
    };

    double axis[2][3] = {
        {a_1, b_1, c_1},
        {a_2, b_2, c_2}
    };

    for (int j = 0; j < n_obt; j++) {
        double K = 0.0;
        for (int i = 0; i < n_dim; i++) {
            K += pow((num[i] - center[j][i]) / axis[j][i], 2);
        }
        K -= 1;
        for (int i = 0; i < n_dim; i++) {
            phi[i] = (num[i] - center[j][i]) / pow(axis[j][i], 2);
        }
        double temp = exp(-K) * (1.0 / K + 1.0 / (K * K)) * 2;
        for (int i = 0; i < n_dim; i++) {
            phi[i] *= temp;
            phi_tal[i] += phi[i];
        }
    }

    for (int i = 0; i < n_dim; i++) {
        result[i] = phi_tal[i];
    }
}

// Model step function
void SignalDmp::step(real_T *arg_m_Xp, real_T *arg_m_e, real_T arg_X3[3], real_T
                     arg_X4[3], real_T read_Xp, real_T count, bool use_pybullet)
{
  static const real_T axis[6] = { 0.1, 0.15, 0.2, 0.15, 0.1, 0.2 };

  static const real_T center[6] = { 0.2, -0.4, 0.8, 1.2, 0.4, 0.8 };

  real_T a[41];
  real_T tem[41];
  real_T rtb_Sum[3];
  real_T Add_tmp_idx_0;
  real_T Add_tmp_idx_0_0;
  real_T Add_tmp_idx_1;
  real_T Add_tmp_idx_1_0;
  real_T Add_tmp_idx_1_1;
  real_T Add_tmp_idx_2;
  real_T Add_tmp_idx_2_0;
  real_T Add_tmp_idx_2_1;
  real_T absxk;
  real_T rtb_s_nf;
  real_T scale;
  real_T t;
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

  // Integrator: '<S6>/x1'
  rtDW.m_X1[0] = rtX.x1_CSTATE[0];

  // Integrator: '<S6>/x2'
  rtDW.m_X2[0] = rtX.x2_CSTATE[0];

  // Integrator: '<S3>/left'
  rtDW.m_X3[0] = rtX.left_CSTATE[0];

  // Integrator: '<S6>/Integrator'
  rtDW.m_X2dot[0] = rtX.Integrator_CSTATE[0];

  // Integrator: '<S3>/Integrator3'
  rtDW.m_X3dot[0] = rtX.Integrator3_CSTATE[0];

  // Integrator: '<S6>/Integrator1'
  rtDW.m_X1dot[0] = rtX.Integrator1_CSTATE[0];

  // Integrator: '<S6>/x1'
  rtDW.m_X1[1] = rtX.x1_CSTATE[1];

  // Integrator: '<S6>/x2'
  rtDW.m_X2[1] = rtX.x2_CSTATE[1];

  // Integrator: '<S3>/left'
  rtDW.m_X3[1] = rtX.left_CSTATE[1];

  // Integrator: '<S6>/Integrator'
  rtDW.m_X2dot[1] = rtX.Integrator_CSTATE[1];

  // Integrator: '<S3>/Integrator3'
  rtDW.m_X3dot[1] = rtX.Integrator3_CSTATE[1];

  // Integrator: '<S6>/Integrator1'
  rtDW.m_X1dot[1] = rtX.Integrator1_CSTATE[1];

  // Integrator: '<S6>/x1'
  rtDW.m_X1[2] = rtX.x1_CSTATE[2];

  // Integrator: '<S6>/x2'
  rtDW.m_X2[2] = rtX.x2_CSTATE[2];

  // Integrator: '<S3>/left'
  rtDW.m_X3[2] = rtX.left_CSTATE[2];

  // Integrator: '<S6>/Integrator'
  rtDW.m_X2dot[2] = rtX.Integrator_CSTATE[2];

  // Integrator: '<S3>/Integrator3'
  rtDW.m_X3dot[2] = rtX.Integrator3_CSTATE[2];

  // Integrator: '<S6>/Integrator1'
  rtDW.m_X1dot[2] = rtX.Integrator1_CSTATE[2];

  // Gain: '<S6>/Gain4' incorporates:
  //   Gain: '<S6>/Gain15'

  t = rtP.k2 * rtDW.m_X1[0];
  Add_tmp_idx_1 = rtP.k2 * rtDW.m_X1[1];
  Add_tmp_idx_2 = rtP.k2 * rtDW.m_X1[2];

  // Gain: '<S6>/Gain6' incorporates:
  //   Gain: '<S6>/Gain9'

  scale = rtP.b2 * rtDW.m_X1dot[0];
  absxk = rtP.b2 * rtDW.m_X1dot[1];
  rtb_s_nf = rtP.b2 * rtDW.m_X1dot[2];

  // Gain: '<S6>/Gain1' incorporates:
  //   Gain: '<S6>/Gain11'

  Add_tmp_idx_0 = rtP.b2 * rtDW.m_X2dot[0];
  Add_tmp_idx_1_0 = rtP.b2 * rtDW.m_X2dot[1];
  Add_tmp_idx_2_0 = rtP.b2 * rtDW.m_X2dot[2];

  // Gain: '<S6>/Gain' incorporates:
  //   Gain: '<S6>/Gain12'

  Add_tmp_idx_0_0 = rtP.k2 * rtDW.m_X2[0];
  Add_tmp_idx_1_1 = rtP.k2 * rtDW.m_X2[1];
  Add_tmp_idx_2_1 = rtP.k2 * rtDW.m_X2[2];

  // Sum: '<S6>/Add' incorporates:
  //   Gain: '<S6>/Gain'
  //   Gain: '<S6>/Gain1'
  //   Gain: '<S6>/Gain2'
  //   Gain: '<S6>/Gain3'
  //   Gain: '<S6>/Gain4'
  //   Gain: '<S6>/Gain5'
  //   Gain: '<S6>/Gain6'
  //   Gain: '<S6>/Gain7'

  rtDW.Add[0] = ((((((rtP.k1 * rtDW.m_X3[0] + Add_tmp_idx_0_0) + Add_tmp_idx_0)
                    + rtP.b1 * rtDW.m_X3dot[0]) - rtP.k1 * rtDW.m_X1[0]) - t) -
                 rtP.b1 * rtDW.m_X1dot[0]) - scale;
  rtDW.Add[1] = ((((((rtP.k1 * rtDW.m_X3[1] + Add_tmp_idx_1_1) + Add_tmp_idx_1_0)
                    + rtP.b1 * rtDW.m_X3dot[1]) - rtP.k1 * rtDW.m_X1[1]) -
                  Add_tmp_idx_1) - rtP.b1 * rtDW.m_X1dot[1]) - absxk;
  rtDW.Add[2] = ((((((rtP.k1 * rtDW.m_X3[2] + Add_tmp_idx_2_1) + Add_tmp_idx_2_0)
                    + rtP.b1 * rtDW.m_X3dot[2]) - rtP.k1 * rtDW.m_X1[2]) -
                  Add_tmp_idx_2) - rtP.b1 * rtDW.m_X1dot[2]) - rtb_s_nf;

  // Integrator: '<S4>/right'
  rtDW.m_X4[0] = rtX.right_CSTATE[0];

  // Integrator: '<S4>/Integrator5'
  rtDW.m_X4dot[0] = rtX.Integrator5_CSTATE[0];

  // Integrator: '<S4>/right'
  rtDW.m_X4[1] = rtX.right_CSTATE[1];

  // Integrator: '<S4>/Integrator5'
  rtDW.m_X4dot[1] = rtX.Integrator5_CSTATE[1];

  // Integrator: '<S4>/right'
  rtDW.m_X4[2] = rtX.right_CSTATE[2];

  // Integrator: '<S4>/Integrator5'
  rtDW.m_X4dot[2] = rtX.Integrator5_CSTATE[2];

  // Sum: '<S6>/Add1' incorporates:
  //   Gain: '<S6>/Gain10'
  //   Gain: '<S6>/Gain11'
  //   Gain: '<S6>/Gain12'
  //   Gain: '<S6>/Gain13'
  //   Gain: '<S6>/Gain14'
  //   Gain: '<S6>/Gain15'
  //   Gain: '<S6>/Gain8'
  //   Gain: '<S6>/Gain9'

  rtDW.Add1[0] = ((((((rtP.k3 * rtDW.m_X4[0] + t) + scale) + rtP.b3 *
                     rtDW.m_X4dot[0]) - Add_tmp_idx_0) - Add_tmp_idx_0_0) -
                  rtP.k3 * rtDW.m_X2[0]) - rtP.b3 * rtDW.m_X2dot[0];
  rtDW.Add1[1] = ((((((rtP.k3 * rtDW.m_X4[1] + Add_tmp_idx_1) + absxk) + rtP.b3 *
                     rtDW.m_X4dot[1]) - Add_tmp_idx_1_0) - Add_tmp_idx_1_1) -
                  rtP.k3 * rtDW.m_X2[1]) - rtP.b3 * rtDW.m_X2dot[1];
  rtDW.Add1[2] = ((((((rtP.k3 * rtDW.m_X4[2] + Add_tmp_idx_2) + rtb_s_nf) +
                     rtP.b3 * rtDW.m_X4dot[2]) - Add_tmp_idx_2_0) -
                   Add_tmp_idx_2_1) - rtP.k3 * rtDW.m_X2[2]) - rtP.b3 *
    rtDW.m_X2dot[2];

  // MATLAB Function: '<S1>/MATLAB Function4' incorporates:
  //   Sum: '<S1>/Sum'

  rtDW.m_Xp = 0.0;
  scale = 3.3121686421112381E-170;
  absxk = std::abs(rtDW.m_X1[0] - rtDW.m_X2[0]);
  if (absxk > 3.3121686421112381E-170) {
    t = 3.3121686421112381E-170 / absxk;
    rtDW.m_Xp = rtDW.m_Xp * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    rtDW.m_Xp += t * t;
  }

  absxk = std::abs(rtDW.m_X1[1] - rtDW.m_X2[1]);
  if (absxk > scale) {
    t = scale / absxk;
    rtDW.m_Xp = rtDW.m_Xp * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    rtDW.m_Xp += t * t;
  }

  absxk = std::abs(rtDW.m_X1[2] - rtDW.m_X2[2]);
  if (absxk > scale) {
    t = scale / absxk;
    rtDW.m_Xp = rtDW.m_Xp * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    rtDW.m_Xp += t * t;
  }

  rtDW.m_Xp = scale * std::sqrt(rtDW.m_Xp);

  // End of MATLAB Function: '<S1>/MATLAB Function4'

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
  // rtDW.m_e = rtDW.m_Xp - rtDW.m_Xm;

  // Modified
  if (use_pybullet && count > 100 && read_Xp != 0.0) {
      std::cout << "Feedback" << std::endl;
      rtDW.m_e = read_Xp - rtDW.m_Xm;
  }
  else
  {
      std::cout << "Linear System" << std::endl;
      rtDW.m_e = rtDW.m_Xp - rtDW.m_Xm;
  }
  arg_uc_Xp = read_Xp;
  arg_uc_count = count;

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

  rtb_s_nf = (rtDW.m_Ktr - rtDW.m_FtXp) * -10000.0;

  // Gain: '<S1>/Gain20'
  rtDW.m_G_right = -5.0 * rtb_s_nf;

  // MATLAB Function: '<S4>/3D'
  rtDW.m_obs_weight_r[0] = 0.0;
  rtDW.m_obs_weight_r[1] = 0.0;
  rtDW.m_obs_weight_r[2] = 0.0;
  for (k = 0; k < 2; k++) {
    t = axis[k];
    Add_tmp_idx_1 = rtDW.m_X4[0] - center[k];
    absxk = Add_tmp_idx_1 / t;
    scale = absxk * absxk;
    rtb_Sum[0] = Add_tmp_idx_1 / (t * t);
    t = axis[k + 2];
    Add_tmp_idx_1 = rtDW.m_X4[1] - center[k + 2];
    absxk = Add_tmp_idx_1 / t;
    scale += absxk * absxk;
    rtb_Sum[1] = Add_tmp_idx_1 / (t * t);
    t = axis[k + 4];
    Add_tmp_idx_1 = rtDW.m_X4[2] - center[k + 4];
    absxk = Add_tmp_idx_1 / t;
    scale += absxk * absxk;
    rtb_Sum[2] = Add_tmp_idx_1 / (t * t);
    scale--;
    absxk = std::exp(-scale);
    scale = 1.0 / scale / scale + 1.0 / scale;
    t = rtb_Sum[0] * absxk * scale * 2.0;
    rtDW.m_obs_weight_r[0] += t;
    rtb_Sum[0] = t;
    t = rtb_Sum[1] * absxk * scale * 2.0;
    rtDW.m_obs_weight_r[1] += t;
    rtb_Sum[1] = t;
    t = rtb_Sum[2] * absxk * scale * 2.0;
    rtDW.m_obs_weight_r[2] += t;
    rtb_Sum[2] = t;
  }

  // End of MATLAB Function: '<S4>/3D'

  // MATLAB Function: '<S4>/MATLAB Function2' incorporates:
  //   Integrator: '<S4>/Integrator4'

  MATLABFunction14(rtX.Integrator4_CSTATE, rtb_Sum, &rtP);
  if (rtmIsMajorTimeStep((&rtM))) {
    // Gain: '<S4>/Gain32' incorporates:
    //   Constant: '<Root>/Constant1'
    //   Constant: '<S4>/Constant5'
    //   Sum: '<S4>/Sum3'

    rtDW.Gain32[0] = (rtP.g2[0] - rtP.right_0[0]) * -1050.0;
    rtDW.Gain32[1] = (rtP.g2[1] - rtP.right_0[1]) * -1050.0;
    rtDW.Gain32[2] = (rtP.g2[2] - rtP.right_0[2]) * -1050.0;
  }

  // Gain: '<S4>/Gain19' incorporates:
  //   Gain: '<S2>/Gain19'
  //   Gain: '<S2>/Gain28'
  //   Gain: '<S3>/Gain28'

  t = -rtP.D[0] * 3.0;
  Add_tmp_idx_1 = -rtP.D[1] * 3.0;
  Add_tmp_idx_2 = -rtP.D[2] * 3.0;

  // Gain: '<S4>/Gain18' incorporates:
  //   Constant: '<Root>/Constant1'
  //   Gain: '<S4>/Gain17'
  //   Gain: '<S4>/Gain19'
  //   Gain: '<S4>/Gain31'
  //   Integrator: '<S4>/Integrator4'
  //   Product: '<S4>/Product1'
  //   Sum: '<S4>/Add2'
  //   Sum: '<S4>/Sum2'

  rtDW.Gain18[0] = (((((1050.0 * rtb_Sum[0] + t * rtDW.m_X4dot[0]) + (rtP.g2[0]
    - rtDW.m_X4[0]) * 1050.0) + rtDW.Gain32[0] * rtX.Integrator4_CSTATE) +
                     rtDW.m_G_right) + rtDW.m_obs_weight_r[0]) *
    0.1111111111111111;
  rtDW.Gain18[1] = (((((1050.0 * rtb_Sum[1] + Add_tmp_idx_1 * rtDW.m_X4dot[1]) +
                       (rtP.g2[1] - rtDW.m_X4[1]) * 1050.0) + rtDW.Gain32[1] *
                      rtX.Integrator4_CSTATE) + rtDW.m_G_right) +
                    rtDW.m_obs_weight_r[1]) * 0.1111111111111111;
  rtDW.Gain18[2] = (((((1050.0 * rtb_Sum[2] + Add_tmp_idx_2 * rtDW.m_X4dot[2]) +
                       (rtP.g2[2] - rtDW.m_X4[2]) * 1050.0) + rtDW.Gain32[2] *
                      rtX.Integrator4_CSTATE) + rtDW.m_G_right) +
                    rtDW.m_obs_weight_r[2]) * 0.1111111111111111;

  // Outport: '<Root>/X4'
  arg_X4[0] = rtDW.m_X4[0];
  arg_X4[1] = rtDW.m_X4[1];
  arg_X4[2] = rtDW.m_X4[2];

  // Gain: '<S1>/Gain22'
  rtDW.m_G_left = 5.0 * rtb_s_nf;

  // MATLAB Function: '<S3>/MATLAB Function14' incorporates:
  //   Integrator: '<S3>/Integrator2'

  MATLABFunction14(rtX.Integrator2_CSTATE, rtb_Sum, &rtP);
  if (rtmIsMajorTimeStep((&rtM))) {
    // Gain: '<S3>/Gain30' incorporates:
    //   Constant: '<Root>/Constant'
    //   Constant: '<S3>/Constant4'
    //   Sum: '<S3>/Sum7'

    rtDW.Gain30[0] = (rtP.g1[0] - rtP.left_0[0]) * -1050.0;
    rtDW.Gain30[1] = (rtP.g1[1] - rtP.left_0[1]) * -1050.0;
    rtDW.Gain30[2] = (rtP.g1[2] - rtP.left_0[2]) * -1050.0;
  }

  // MATLAB Function: '<S3>/Right_3D'
  rtDW.m_obs_weight_l[0] = 0.0;
  absxk = (rtDW.m_X3[0] - 0.15) / 0.1;
  scale = absxk * absxk;
  rtDW.m_obs_weight_l[0] = (rtDW.m_X3[0] - 0.15) / 0.010000000000000002;
  rtDW.m_obs_weight_l[1] = 0.0;
  absxk = (rtDW.m_X3[1] - 0.2) / 0.1;
  scale += absxk * absxk;
  rtDW.m_obs_weight_l[1] = (rtDW.m_X3[1] - 0.2) / 0.010000000000000002;
  rtDW.m_obs_weight_l[2] = 0.0;
  absxk = (rtDW.m_X3[2] - 0.4) / 0.1;
  scale += absxk * absxk;
  rtDW.m_obs_weight_l[2] = (rtDW.m_X3[2] - 0.4) / 0.010000000000000002;
  scale--;
  absxk = std::exp(-scale);
  scale = 1.0 / scale / scale + 1.0 / scale;
  rtDW.m_obs_weight_l[0] = rtDW.m_obs_weight_l[0] * absxk * scale * 2.0;
  rtDW.m_obs_weight_l[1] = rtDW.m_obs_weight_l[1] * absxk * scale * 2.0;
  rtDW.m_obs_weight_l[2] = rtDW.m_obs_weight_l[2] * absxk * scale * 2.0;

  // Gain: '<S3>/Gain27' incorporates:
  //   Constant: '<Root>/Constant'
  //   Gain: '<S3>/Gain26'
  //   Gain: '<S3>/Gain28'
  //   Gain: '<S3>/Gain29'
  //   Integrator: '<S3>/Integrator2'
  //   Product: '<S3>/Product'
  //   Sum: '<S3>/Add4'
  //   Sum: '<S3>/Sum6'

  // OBS weight test
  std::cout << "OBS origin: " << rtDW.m_obs_weight_l[0] << " " << rtDW.m_obs_weight_l[1] << " " << rtDW.m_obs_weight_l[2] << std::endl;
  // rtDW.m_X3 rtDW.m_X4
  double obs_weight_l[3];
  fcn_l(rtDW.m_X3, obs_weight_l);
  std::cout << "OBS after : " << obs_weight_l[0] << " " << obs_weight_l[1] << " " << obs_weight_l[2] << std::endl;

  rtDW.Gain27[0] = (((((1050.0 * rtb_Sum[0] + t * rtDW.m_X3dot[0]) + (rtP.g1[0]
    - rtDW.m_X3[0]) * 1050.0) + rtDW.Gain30[0] * rtX.Integrator2_CSTATE) +
                     rtDW.m_G_left) + rtDW.m_obs_weight_l[0]) *
    0.1111111111111111;
  rtDW.Gain27[1] = (((((1050.0 * rtb_Sum[1] + Add_tmp_idx_1 * rtDW.m_X3dot[1]) +
                       (rtP.g1[1] - rtDW.m_X3[1]) * 1050.0) + rtDW.Gain30[1] *
                      rtX.Integrator2_CSTATE) + rtDW.m_G_left) +
                    rtDW.m_obs_weight_l[1]) * 0.1111111111111111;
  rtDW.Gain27[2] = (((((1050.0 * rtb_Sum[2] + Add_tmp_idx_2 * rtDW.m_X3dot[2]) +
                       (rtP.g1[2] - rtDW.m_X3[2]) * 1050.0) + rtDW.Gain30[2] *
                      rtX.Integrator2_CSTATE) + rtDW.m_G_left) +
                    rtDW.m_obs_weight_l[2]) * 0.1111111111111111;

  // Gain: '<S3>/Gain25' incorporates:
  //   Integrator: '<S3>/Integrator2'

  rtDW.Gain25 = -rtX.Integrator2_CSTATE;

  // Gain: '<S4>/Gain16' incorporates:
  //   Integrator: '<S4>/Integrator4'

  rtDW.Gain16 = -rtX.Integrator4_CSTATE;

  // Outport: '<Root>/m_e'
  *arg_m_e = rtDW.m_e;

  // Outport: '<Root>/m_Xp'
  *arg_m_Xp = rtDW.m_Xp;

  // Outport: '<Root>/X3'
  arg_X3[0] = rtDW.m_X3[0];

  // Integrator: '<S2>/Integrator5'
  rtDW.x3[0] = rtX.Integrator5_CSTATE_e[0];

  // Outport: '<Root>/X3'
  arg_X3[1] = rtDW.m_X3[1];

  // Integrator: '<S2>/Integrator5'
  rtDW.x3[1] = rtX.Integrator5_CSTATE_e[1];

  // Outport: '<Root>/X3'
  arg_X3[2] = rtDW.m_X3[2];

  // Integrator: '<S2>/Integrator5'
  rtDW.x3[2] = rtX.Integrator5_CSTATE_e[2];

  // MATLAB Function: '<S2>/MATLAB Function2' incorporates:
  //   Integrator: '<S2>/Integrator4'

  MATLABFunction14(rtX.Integrator4_CSTATE_p, rtb_Sum, &rtP);
  if (rtmIsMajorTimeStep((&rtM))) {
    // Gain: '<S2>/Gain32' incorporates:
    //   Constant: '<S2>/Constant1'
    //   Constant: '<S2>/Constant5'
    //   Sum: '<S2>/Sum3'

    rtDW.Gain32_f[0] = (rtP.g2[0] - rtP.right_0[0]) * -1050.0;
    rtDW.Gain32_f[1] = (rtP.g2[1] - rtP.right_0[1]) * -1050.0;
    rtDW.Gain32_f[2] = (rtP.g2[2] - rtP.right_0[2]) * -1050.0;
  }

  // Gain: '<S2>/Gain18' incorporates:
  //   Constant: '<S2>/Constant1'
  //   Gain: '<S2>/Gain17'
  //   Gain: '<S2>/Gain19'
  //   Gain: '<S2>/Gain31'
  //   Integrator: '<S2>/Integrator4'
  //   Integrator: '<S2>/right'
  //   Product: '<S2>/Product1'
  //   Sum: '<S2>/Add2'
  //   Sum: '<S2>/Sum2'

  rtDW.Gain18_f[0] = (((1050.0 * rtb_Sum[0] + t * rtDW.x3[0]) + (rtP.g2[0] -
    rtX.right_CSTATE_c[0]) * 1050.0) + rtDW.Gain32_f[0] *
                      rtX.Integrator4_CSTATE_p) * 0.1111111111111111;
  rtDW.Gain18_f[1] = (((1050.0 * rtb_Sum[1] + Add_tmp_idx_1 * rtDW.x3[1]) +
                       (rtP.g2[1] - rtX.right_CSTATE_c[1]) * 1050.0) +
                      rtDW.Gain32_f[1] * rtX.Integrator4_CSTATE_p) *
    0.1111111111111111;
  rtDW.Gain18_f[2] = (((1050.0 * rtb_Sum[2] + Add_tmp_idx_2 * rtDW.x3[2]) +
                       (rtP.g2[2] - rtX.right_CSTATE_c[2]) * 1050.0) +
                      rtDW.Gain32_f[2] * rtX.Integrator4_CSTATE_p) *
    0.1111111111111111;

  // Gain: '<S2>/Gain16' incorporates:
  //   Integrator: '<S2>/Integrator4'

  rtDW.Gain16_g = -rtX.Integrator4_CSTATE_p;

  // Integrator: '<S2>/Integrator3'
  rtDW.x3_a[0] = rtX.Integrator3_CSTATE_e[0];
  rtDW.x3_a[1] = rtX.Integrator3_CSTATE_e[1];
  rtDW.x3_a[2] = rtX.Integrator3_CSTATE_e[2];

  // MATLAB Function: '<S2>/MATLAB Function' incorporates:
  //   Integrator: '<S2>/Integrator2'

  for (k = 0; k < 41; k++) {
    a[k] = rtX.Integrator2_CSTATE_n - rtP.cc_new[k];
  }

  for (k = 0; k < 41; k++) {
    scale = a[k];
    tem[k] = scale * scale;
  }

  for (k = 0; k < 41; k++) {
    tem[k] *= -rtP.width_new[k];
  }

  for (k = 0; k < 41; k++) {
    tem[k] = std::exp(tem[k]);
  }

  rtb_s_nf = tem[0];
  for (k = 0; k < 40; k++) {
    rtb_s_nf += tem[k + 1];
  }

  if (rtmIsMajorTimeStep((&rtM))) {
    // Gain: '<S2>/Gain30' incorporates:
    //   Constant: '<S2>/Constant2'
    //   Constant: '<S2>/Constant4'
    //   Sum: '<S2>/Sum7'

    rtDW.Gain30_k[0] = (rtP.g1[0] - rtP.left_0[0]) * -1050.0;
    rtDW.Gain30_k[1] = (rtP.g1[1] - rtP.left_0[1]) * -1050.0;
    rtDW.Gain30_k[2] = (rtP.g1[2] - rtP.left_0[2]) * -1050.0;
  }

  // MATLAB Function: '<S2>/MATLAB Function'
  for (k = 0; k < 3; k++) {
    rtb_Sum[k] = 0.0;
    for (i = 0; i < 41; i++) {
      rtb_Sum[k] += rtP.weight[3 * i + k] * tem[i];
    }
  }

  // Gain: '<S2>/Gain27' incorporates:
  //   Constant: '<S2>/Constant2'
  //   Gain: '<S2>/Gain26'
  //   Gain: '<S2>/Gain28'
  //   Gain: '<S2>/Gain29'
  //   Integrator: '<S2>/Integrator2'
  //   Integrator: '<S2>/left'
  //   MATLAB Function: '<S2>/MATLAB Function'
  //   Product: '<S2>/Product'
  //   Sum: '<S2>/Add4'
  //   Sum: '<S2>/Sum6'

  rtDW.Gain27_l[0] = ((((rtP.g1[0] - rtX.left_CSTATE_b[0]) * 1050.0 + t *
                        rtDW.x3_a[0]) + rtb_Sum[0] * rtX.Integrator2_CSTATE_n /
                       rtb_s_nf * 1050.0) + rtDW.Gain30_k[0] *
                      rtX.Integrator2_CSTATE_n) * 0.1111111111111111;
  rtDW.Gain27_l[1] = ((((rtP.g1[1] - rtX.left_CSTATE_b[1]) * 1050.0 +
                        Add_tmp_idx_1 * rtDW.x3_a[1]) + rtb_Sum[1] *
                       rtX.Integrator2_CSTATE_n / rtb_s_nf * 1050.0) +
                      rtDW.Gain30_k[1] * rtX.Integrator2_CSTATE_n) *
    0.1111111111111111;
  rtDW.Gain27_l[2] = ((((rtP.g1[2] - rtX.left_CSTATE_b[2]) * 1050.0 +
                        Add_tmp_idx_2 * rtDW.x3_a[2]) + rtb_Sum[2] *
                       rtX.Integrator2_CSTATE_n / rtb_s_nf * 1050.0) +
                      rtDW.Gain30_k[2] * rtX.Integrator2_CSTATE_n) *
    0.1111111111111111;

  // Gain: '<S2>/Gain25' incorporates:
  //   Integrator: '<S2>/Integrator2'

  rtDW.Gain25_j = -rtX.Integrator2_CSTATE_n;

  // Gain: '<S2>/Gain7' incorporates:
  //   Integrator: '<S2>/Integrator7'

  rtDW.Gain7 = -rtX.Integrator7_CSTATE;

  // TransferFcn: '<Root>/Gm '
  rtDW.Gm = 0.0;
  rtDW.Gm += rtX.Gm_CSTATE[0];
  rtDW.Gm += 10.0 * rtX.Gm_CSTATE[1];

  // TransferFcn: '<Root>/Gm  '
  rtDW.Gm_p = 0.0;
  rtDW.Gm_p += rtX.Gm_CSTATE_e[0];
  rtDW.Gm_p += 10.0 * rtX.Gm_CSTATE_e[1];

  // Gain: '<S2>/Gain9' incorporates:
  //   Integrator: '<S2>/Integrator8'

  rtDW.Gain9 = -rtX.Integrator8_CSTATE;
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

  // Derivatives for Integrator: '<S6>/x1'
  _rtXdot->x1_CSTATE[0] = rtDW.m_X1dot[0];

  // Derivatives for Integrator: '<S6>/x2'
  _rtXdot->x2_CSTATE[0] = rtDW.m_X2dot[0];

  // Derivatives for Integrator: '<S3>/left'
  _rtXdot->left_CSTATE[0] = rtDW.m_X3dot[0];

  // Derivatives for Integrator: '<S6>/Integrator'
  _rtXdot->Integrator_CSTATE[0] = rtDW.Add1[0];

  // Derivatives for Integrator: '<S3>/Integrator3'
  _rtXdot->Integrator3_CSTATE[0] = rtDW.Gain27[0];

  // Derivatives for Integrator: '<S6>/Integrator1'
  _rtXdot->Integrator1_CSTATE[0] = rtDW.Add[0];

  // Derivatives for Integrator: '<S4>/right'
  _rtXdot->right_CSTATE[0] = rtDW.m_X4dot[0];

  // Derivatives for Integrator: '<S4>/Integrator5'
  _rtXdot->Integrator5_CSTATE[0] = rtDW.Gain18[0];

  // Derivatives for Integrator: '<S6>/x1'
  _rtXdot->x1_CSTATE[1] = rtDW.m_X1dot[1];

  // Derivatives for Integrator: '<S6>/x2'
  _rtXdot->x2_CSTATE[1] = rtDW.m_X2dot[1];

  // Derivatives for Integrator: '<S3>/left'
  _rtXdot->left_CSTATE[1] = rtDW.m_X3dot[1];

  // Derivatives for Integrator: '<S6>/Integrator'
  _rtXdot->Integrator_CSTATE[1] = rtDW.Add1[1];

  // Derivatives for Integrator: '<S3>/Integrator3'
  _rtXdot->Integrator3_CSTATE[1] = rtDW.Gain27[1];

  // Derivatives for Integrator: '<S6>/Integrator1'
  _rtXdot->Integrator1_CSTATE[1] = rtDW.Add[1];

  // Derivatives for Integrator: '<S4>/right'
  _rtXdot->right_CSTATE[1] = rtDW.m_X4dot[1];

  // Derivatives for Integrator: '<S4>/Integrator5'
  _rtXdot->Integrator5_CSTATE[1] = rtDW.Gain18[1];

  // Derivatives for Integrator: '<S6>/x1'
  _rtXdot->x1_CSTATE[2] = rtDW.m_X1dot[2];

  // Derivatives for Integrator: '<S6>/x2'
  _rtXdot->x2_CSTATE[2] = rtDW.m_X2dot[2];

  // Derivatives for Integrator: '<S3>/left'
  _rtXdot->left_CSTATE[2] = rtDW.m_X3dot[2];

  // Derivatives for Integrator: '<S6>/Integrator'
  _rtXdot->Integrator_CSTATE[2] = rtDW.Add1[2];

  // Derivatives for Integrator: '<S3>/Integrator3'
  _rtXdot->Integrator3_CSTATE[2] = rtDW.Gain27[2];

  // Derivatives for Integrator: '<S6>/Integrator1'
  _rtXdot->Integrator1_CSTATE[2] = rtDW.Add[2];

  // Derivatives for Integrator: '<S4>/right'
  _rtXdot->right_CSTATE[2] = rtDW.m_X4dot[2];

  // Derivatives for Integrator: '<S4>/Integrator5'
  _rtXdot->Integrator5_CSTATE[2] = rtDW.Gain18[2];

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

  // Derivatives for Integrator: '<S4>/Integrator4'
  _rtXdot->Integrator4_CSTATE = rtDW.Gain16;

  // Derivatives for Integrator: '<S3>/Integrator2'
  _rtXdot->Integrator2_CSTATE = rtDW.Gain25;

  // Derivatives for Integrator: '<S2>/Integrator4'
  _rtXdot->Integrator4_CSTATE_p = rtDW.Gain16_g;

  // Derivatives for Integrator: '<S2>/Integrator5'
  _rtXdot->Integrator5_CSTATE_e[0] = rtDW.Gain18_f[0];

  // Derivatives for Integrator: '<S2>/right'
  _rtXdot->right_CSTATE_c[0] = rtDW.x3[0];

  // Derivatives for Integrator: '<S2>/Integrator3'
  _rtXdot->Integrator3_CSTATE_e[0] = rtDW.Gain27_l[0];

  // Derivatives for Integrator: '<S2>/left'
  _rtXdot->left_CSTATE_b[0] = rtDW.x3_a[0];

  // Derivatives for Integrator: '<S2>/Integrator5'
  _rtXdot->Integrator5_CSTATE_e[1] = rtDW.Gain18_f[1];

  // Derivatives for Integrator: '<S2>/right'
  _rtXdot->right_CSTATE_c[1] = rtDW.x3[1];

  // Derivatives for Integrator: '<S2>/Integrator3'
  _rtXdot->Integrator3_CSTATE_e[1] = rtDW.Gain27_l[1];

  // Derivatives for Integrator: '<S2>/left'
  _rtXdot->left_CSTATE_b[1] = rtDW.x3_a[1];

  // Derivatives for Integrator: '<S2>/Integrator5'
  _rtXdot->Integrator5_CSTATE_e[2] = rtDW.Gain18_f[2];

  // Derivatives for Integrator: '<S2>/right'
  _rtXdot->right_CSTATE_c[2] = rtDW.x3[2];

  // Derivatives for Integrator: '<S2>/Integrator3'
  _rtXdot->Integrator3_CSTATE_e[2] = rtDW.Gain27_l[2];

  // Derivatives for Integrator: '<S2>/left'
  _rtXdot->left_CSTATE_b[2] = rtDW.x3_a[2];

  // Derivatives for Integrator: '<S2>/Integrator2'
  _rtXdot->Integrator2_CSTATE_n = rtDW.Gain25_j;

  // Derivatives for Integrator: '<S2>/Integrator7'
  _rtXdot->Integrator7_CSTATE = rtDW.Gain7;

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

  // Derivatives for Integrator: '<S2>/Integrator8'
  _rtXdot->Integrator8_CSTATE = rtDW.Gain9;
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

  // InitializeConditions for Integrator: '<S6>/x1'
  rtX.x1_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S6>/x2'
  rtX.x2_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S6>/x1'
  rtX.x1_CSTATE[1] = 0.2;

  // InitializeConditions for Integrator: '<S6>/x2'
  rtX.x2_CSTATE[1] = 0.4;

  // InitializeConditions for Integrator: '<S6>/x1'
  rtX.x1_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S6>/x2'
  rtX.x2_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S3>/left'
  rtX.left_CSTATE[0] = rtP.left_0[0];
  rtX.left_CSTATE[1] = rtP.left_0[1];
  rtX.left_CSTATE[2] = rtP.left_0[2];

  // InitializeConditions for Integrator: '<S6>/Integrator'
  rtX.Integrator_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S3>/Integrator3'
  rtX.Integrator3_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S6>/Integrator1'
  rtX.Integrator1_CSTATE[0] = 0.0;

  // InitializeConditions for Integrator: '<S6>/Integrator'
  rtX.Integrator_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S3>/Integrator3'
  rtX.Integrator3_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S6>/Integrator1'
  rtX.Integrator1_CSTATE[1] = 0.0;

  // InitializeConditions for Integrator: '<S6>/Integrator'
  rtX.Integrator_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S3>/Integrator3'
  rtX.Integrator3_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S6>/Integrator1'
  rtX.Integrator1_CSTATE[2] = 0.0;

  // InitializeConditions for Integrator: '<S4>/right'
  rtX.right_CSTATE[0] = rtP.right_0[0];
  rtX.right_CSTATE[1] = rtP.right_0[1];
  rtX.right_CSTATE[2] = rtP.right_0[2];

  // InitializeConditions for Integrator: '<S4>/Integrator5'
  rtX.Integrator5_CSTATE[0] = 0.0;
  rtX.Integrator5_CSTATE[1] = 0.0;
  rtX.Integrator5_CSTATE[2] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/gamma2//s'
  rtX.gamma2s_CSTATE = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/reference model'
  rtX.referencemodel_CSTATE[0] = 0.0;
  rtX.referencemodel_CSTATE[1] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/-gamma1//s'
  rtX.gamma1s_CSTATE = 0.0;

  // InitializeConditions for Integrator: '<S4>/Integrator4'
  rtX.Integrator4_CSTATE = 1.0;

  // InitializeConditions for Integrator: '<S3>/Integrator2'
  rtX.Integrator2_CSTATE = 1.0;

  // InitializeConditions for Integrator: '<S2>/Integrator5'
  rtX.Integrator5_CSTATE_e[0] = 0.0;
  rtX.Integrator5_CSTATE_e[1] = 0.0;
  rtX.Integrator5_CSTATE_e[2] = 0.0;

  // InitializeConditions for Integrator: '<S2>/Integrator4'
  rtX.Integrator4_CSTATE_p = 1.0;

  // InitializeConditions for Integrator: '<S2>/right'
  rtX.right_CSTATE_c[0] = rtP.right_0[0];
  rtX.right_CSTATE_c[1] = rtP.right_0[1];
  rtX.right_CSTATE_c[2] = rtP.right_0[2];

  // InitializeConditions for Integrator: '<S2>/Integrator3'
  rtX.Integrator3_CSTATE_e[0] = 0.0;
  rtX.Integrator3_CSTATE_e[1] = 0.0;
  rtX.Integrator3_CSTATE_e[2] = 0.0;

  // InitializeConditions for Integrator: '<S2>/left'
  rtX.left_CSTATE_b[0] = rtP.left_0[0];
  rtX.left_CSTATE_b[1] = rtP.left_0[1];
  rtX.left_CSTATE_b[2] = rtP.left_0[2];

  // InitializeConditions for Integrator: '<S2>/Integrator2'
  rtX.Integrator2_CSTATE_n = 1.0;

  // InitializeConditions for Integrator: '<S2>/Integrator7'
  rtX.Integrator7_CSTATE = 1.0;

  // InitializeConditions for TransferFcn: '<Root>/Gm '
  rtX.Gm_CSTATE[0] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/Gm  '
  rtX.Gm_CSTATE_e[0] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/Gm '
  rtX.Gm_CSTATE[1] = 0.0;

  // InitializeConditions for TransferFcn: '<Root>/Gm  '
  rtX.Gm_CSTATE_e[1] = 0.0;

  // InitializeConditions for Integrator: '<S2>/Integrator8'
  rtX.Integrator8_CSTATE = 1.0;
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
