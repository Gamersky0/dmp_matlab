//
// File: ert_main.cpp
//
// Code generated for Simulink model 'test02_cdmp_without_obstacle_1219'.
//
// Model version                  : 1.16
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Tue Dec 19 15:34:09 2023
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
#include "test02_cdmp_without_obstacle_1219.h" // Model's header file
#include "rtwtypes.h"

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
  rtObj.step(arg_m_Xp, arg_m_e, arg_X3, arg_X4);

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
