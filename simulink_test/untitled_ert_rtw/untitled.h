//
// File: untitled.h
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
#ifndef RTW_HEADER_untitled_h_
#define RTW_HEADER_untitled_h_
#include "rtwtypes.h"
#include "untitled_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Class declaration for model untitled
class untitledModelClass {
  // public data and function members
 public:
  // External inputs (root inport signals with default storage)
  typedef struct {
    real_T Input;                      // '<Root>/Input'
  } ExtU_untitled_T;

  // External outputs (root outports fed by signals with default storage)
  typedef struct {
    real_T Output;                     // '<Root>/Output'
  } ExtY_untitled_T;

  // Real-time Model Data Structure
  struct RT_MODEL_untitled_T {
    const char_T * volatile errorStatus;
  };

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  untitledModelClass();

  // Destructor
  ~untitledModelClass();

  // Root-level structure-based inputs set method

  // Root inports set method
  void setExternalInputs(const ExtU_untitled_T* pExtU_untitled_T)
  {
    untitled_U = *pExtU_untitled_T;
  }

  // Root-level structure-based outputs get method

  // Root outports get method
  const untitledModelClass::ExtY_untitled_T & getExternalOutputs() const
  {
    return untitled_Y;
  }

  // Real-Time Model get method
  untitledModelClass::RT_MODEL_untitled_T * getRTM();

  // private data and function members
 private:
  // External inputs
  ExtU_untitled_T untitled_U;

  // External outputs
  ExtY_untitled_T untitled_Y;

  // Real-Time Model
  RT_MODEL_untitled_T untitled_M;
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
//  '<Root>' : 'untitled'

#endif                                 // RTW_HEADER_untitled_h_

//
// File trailer for generated code.
//
// [EOF]
//
