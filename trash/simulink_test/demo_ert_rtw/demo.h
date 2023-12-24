//
// File: demo.h
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
#ifndef RTW_HEADER_demo_h_
#define RTW_HEADER_demo_h_
#include "rtwtypes.h"
#include "demo_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Class declaration for model demo
class demo_class {
  // public data and function members
 public:
  // Real-time Model Data Structure
  struct RT_MODEL_demo_T {
    const char_T * volatile errorStatus;
  };

  // model initialize function
  void initialize();

  // model step function
  void step_gain2(const real_T *arg_in1, real_T *arg_out1);

  // model terminate function
  void terminate();

  // Constructor
  demo_class();

  // Destructor
  ~demo_class();

  // Real-Time Model get method
  demo_class::RT_MODEL_demo_T * getRTM();

  // private data and function members
 private:
  // Real-Time Model
  RT_MODEL_demo_T demo_M;
};

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'demo'

#endif                                 // RTW_HEADER_demo_h_

//
// File trailer for generated code.
//
// [EOF]
//
