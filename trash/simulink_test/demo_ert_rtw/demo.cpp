//
// File: demo.cpp
//
// Code generated for Simulink model 'demo'.
//
// Model version                  : 1.1
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Wed Oct 25 20:17:10 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "demo.h"
#include "demo_private.h"

// Model step function
void demo_class::step_gain2(const real_T *arg_in1, real_T *arg_out1)
{
  // Outport: '<Root>/out1' incorporates:
  //   Gain: '<Root>/Gain'
  //   Inport: '<Root>/in1'

  *arg_out1 = 2.0 * *arg_in1;
}

// Model initialize function
void demo_class::initialize()
{
  // (no initialization code required)
}

// Model terminate function
void demo_class::terminate()
{
  // (no terminate code required)
}

// Constructor
demo_class::demo_class() :
  demo_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
demo_class::~demo_class()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
demo_class::RT_MODEL_demo_T * demo_class::getRTM()
{
  return (&demo_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
