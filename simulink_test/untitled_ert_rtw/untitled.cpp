//
// File: untitled.cpp
//
// Code generated for Simulink model 'untitled'.
//
// Model version                  : 1.0
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Wed Oct 25 19:48:40 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "untitled.h"
#include "untitled_private.h"

// Model step function
void untitledModelClass::step()
{
  // Outport: '<Root>/Output' incorporates:
  //   Gain: '<Root>/Gain'
  //   Inport: '<Root>/Input'

  untitled_Y.Output = 2.0 * untitled_U.Input;
}

// Model initialize function
void untitledModelClass::initialize()
{
  // (no initialization code required)
}

// Model terminate function
void untitledModelClass::terminate()
{
  // (no terminate code required)
}

// Constructor
untitledModelClass::untitledModelClass() :
  untitled_U(),
  untitled_Y(),
  untitled_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
untitledModelClass::~untitledModelClass()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
untitledModelClass::RT_MODEL_untitled_T * untitledModelClass::getRTM()
{
  return (&untitled_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
