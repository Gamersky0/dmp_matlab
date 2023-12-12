//
// File: Model_3D.cpp
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
#include "Model_3D.h"
#include "Model_3D_private.h"

static void rate_scheduler(RT_MODEL_Model_3D_T *const Model_3D_M);

//
//   This function updates active task flag for each subrate.
// The function is called at model base rate, hence the
// generated code self-manages all its subrates.
//
static void rate_scheduler(RT_MODEL_Model_3D_T *const Model_3D_M)
{
  // Compute which subrates run during the next base time step.  Subrates
  //  are an integer multiple of the base rate counter.  Therefore, the subtask
  //  counter is reset when it reaches its limit (zero means run).

  (Model_3D_M->Timing.TaskCounters.TID[1])++;
  if ((Model_3D_M->Timing.TaskCounters.TID[1]) > 9) {// Sample time: [0.1s, 0.0s] 
    Model_3D_M->Timing.TaskCounters.TID[1] = 0;
  }
}

// Model step function
void Model_3DModelClass::step()
{
  rate_scheduler((&Model_3D_M));
}

// Model initialize function
void Model_3DModelClass::initialize()
{
  // (no initialization code required)
}

// Model terminate function
void Model_3DModelClass::terminate()
{
  // (no terminate code required)
}

// Constructor
Model_3DModelClass::Model_3DModelClass() :
  Model_3D_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
Model_3DModelClass::~Model_3DModelClass()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL_Model_3D_T * Model_3DModelClass::getRTM()
{
  return (&Model_3D_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
