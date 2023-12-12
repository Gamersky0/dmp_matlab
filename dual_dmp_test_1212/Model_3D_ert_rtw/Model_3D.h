//
// File: Model_3D.h
//
// Code generated for Simulink model 'Model_3D'.
//
// Model version                  : 3.20
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Tue Dec 12 16:43:45 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_Model_3D_h_
#define RTW_HEADER_Model_3D_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "Model_3D_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Real-time Model Data Structure
struct tag_RTM_Model_3D_T {
  const char_T * volatile errorStatus;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    struct {
      uint8_T TID[2];
    } TaskCounters;
  } Timing;
};

// Class declaration for model Model_3D
class Model_3DModelClass {
  // public data and function members
 public:
  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  Model_3DModelClass();

  // Destructor
  ~Model_3DModelClass();

  // Real-Time Model get method
  RT_MODEL_Model_3D_T * getRTM();

  // private data and function members
 private:
  // Real-Time Model
  RT_MODEL_Model_3D_T Model_3D_M;
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Scope1' : Unused code path elimination
//  Block '<Root>/Step' : Unused code path elimination


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
//  '<Root>' : 'Model_3D'

#endif                                 // RTW_HEADER_Model_3D_h_

//
// File trailer for generated code.
//
// [EOF]
//
