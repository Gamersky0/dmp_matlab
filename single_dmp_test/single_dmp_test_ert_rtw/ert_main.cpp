//
// File: ert_main.cpp
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
#include <stddef.h>
#include <stdio.h>                // This ert_main.c example uses printf/fflush
#include "single_dmp_test.h"           // Model's header file
#include "rtwtypes.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <cmath>
#include <string>

static SignalDmp rtObj;                // Instance of model class

// '<Root>/l_position_initial'
static real_T arg_l_position_initial[3] = { 0.0, 0.0, 0.0 };

// '<Root>/l_position_goal'
static real_T arg_l_position_goal[3] = { 5.0, -10.0, 10.0 };

// '<Root>/l_position_current'
static real_T arg_l_position_current[3];

static real64_T minimum_error = 0.01;

std::string message_from_simulation;
std::string response_to_simulation;

bool reach_goal(static real_T* arg_l_position_current, static real_T* arg_l_position_goal) {
    real_T abs_error = std::abs(arg_l_position_current[0] - arg_l_position_goal[0]) +
                       std::abs(arg_l_position_current[1] - arg_l_position_goal[1]) +
                       std::abs(arg_l_position_current[2] - arg_l_position_goal[2]);
    return abs_error < minimum_error;
}

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
  // arg_l_position_current为传出参数，arg_l_position_initial和arg_l_position_goal为传入参数
  rtObj.step(arg_l_position_current, arg_l_position_initial, arg_l_position_goal);

  // 传出position
  std::cout << "position: " << arg_l_position_current[0] << "  " << arg_l_position_current[1] << "  " << arg_l_position_current[2] << std::endl;
  std::cout.flush();
  // std::this_thread::sleep_for(std::chrono::milliseconds(100));

  // 传入observation ，阻塞
  std::getline(std::cin, message_from_simulation);

  // 分析observation
  if (message_from_simulation == "exit") {
      return;
  }
  

  // Reach the goal_position and exit
  if (reach_goal(arg_l_position_current, arg_l_position_goal)){
      return;
  }

  // Get model outputs here

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

  // Initialize model
  rtObj.initialize();

  // Initialize parameters

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
