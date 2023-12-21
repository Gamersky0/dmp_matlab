//
// File: ert_main.cpp
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
#include <stddef.h>
#include <stdio.h>                // This ert_main.c example uses printf/fflush
#include "couple_dmp_test.h"           // Model's header file
#include "rtwtypes.h"
#include <iostream>
#include <string>

static SignalDmp rtObj;                // Instance of model class

// '<Root>/m_Xp'
static real_T local_arg_m_Xp;
static real_T * arg_m_Xp = &local_arg_m_Xp;

// '<Root>/m_e'
static real_T local_arg_m_e;
static real_T * arg_m_e = &local_arg_m_e;

// '<Root>/X3'
static real_T arg_X3[3];

// '<Root>/X4'
static real_T arg_X4[3];

static real_T read_Xp = 0.0;

static bool use_pybullet = true;

int count = 0;

//
// Associating rt_OneStep with a real-time clock or interrupt service routine
// is what makes the generated code "real-time".  The function rt_OneStep is
// always associated with the base rate of the model.  Subrates are managed
// by the base rate from inside the generated code.  Enabling/disabling
// interrupts and floating point context switches are target specific.  This
// example code indicates where these should take place relative to executing
// the generated code step function.  Overrun behavior should be tailored to
// your application needs.  This example simply sets an error status in the
// real-time model and returns from rt_OneStep.
//
void rt_OneStep(void);
void rt_OneStep(void)
{
  static boolean_T OverrunFlag = false;

  // Disable interrupts here

  // Check for overrun
  if (OverrunFlag) {
    rtmSetErrorStatus(rtObj.getRTM(), "Overrun");
    return;
  }

  OverrunFlag = true;

  // Save FPU context here (if necessary)
  // Re-enable timer or interrupt here
  // Set model inputs here

  // Step the model for base rate
  rtObj.step(arg_m_Xp, arg_m_e, arg_X3, arg_X4, read_Xp, count, use_pybullet);

  // Get model outputs here
  count += 1;
  std::cout << "count: " << count;
  std::cout << ", local_arg_m_Xp: " << local_arg_m_Xp;
  std::cout << ", local_arg_m_e: " << local_arg_m_e;
  std::cout << ", arg_X3[0]: " << arg_X3[0];
  std::cout << ", arg_X3[1]: " << arg_X3[1];
  std::cout << ", arg_X3[2]: " << arg_X3[2];
  std::cout << ", arg_X4[0]: " << arg_X4[0];
  std::cout << ", arg_X4[1]: " << arg_X4[1];
  std::cout << ", arg_X4[2]: " << arg_X4[2];
  std::cout << std::endl;

  std::string input;
  std::string numStr;
  std::getline(std::cin, input);
  // 判断开头是否为"Xp"
  if (input.substr(0, 2) == "Xp") {
      // 找到第一个数字的位置
      size_t startPos = input.find_first_of("0123456789");
      if (startPos != std::string::npos) {
          // 提取数字部分
          numStr = input.substr(startPos);
          read_Xp = std::stod(numStr);
      }
  }

  // Indicate task complete
  OverrunFlag = false;

  // Disable interrupts here
  // Restore FPU context here (if necessary)
  // Enable interrupts here
}

//
// The example "main" function illustrates what is required by your
// application code to initialize, execute, and terminate the generated code.
// Attaching rt_OneStep to a real-time clock is target specific.  This example
// illustrates how you do this relative to initializing the model.
//
int_T main(int_T argc, const char *argv[])
{
  // Unused arguments
  (void)(argc);
  (void)(argv);

  // Initialize parameters for uc
  real_T ini_g1[3] = { -1.0, 0.0, 1.0 };    // Variable: g1 for goal left
  real_T ini_g2[3] = { -1.0, 0.6, 1.0 };    // Variable: g2 for goal right

  // Initialize model
  rtObj.initialize(ini_g1, ini_g2);

  // Simulating the model step behavior (in non real-time) to
  //   simulate model behavior at stop time.

  while ((rtmGetErrorStatus(rtObj.getRTM()) == (NULL)) && !rtmGetStopRequested
         (rtObj.getRTM())) {
    rt_OneStep();
  }

  // Disable rt_OneStep() here
  return 0;
}

//
// File trailer for generated code.
//
// [EOF]
//
