//
// File: couple_dmp_test_data.cpp
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

// Block parameters (default storage)
SignalDmp::P SignalDmp::rtP = {
  // Variable: D
  //  Referenced by:
  //    '<S2>/Gain19'
  //    '<S2>/Gain28'
  //    '<S3>/Gain28'
  //    '<S4>/Gain19'

  { 64.807, 64.807, 64.807 },

  // Variable: b1
  //  Referenced by:
  //    '<S6>/Gain2'
  //    '<S6>/Gain5'

  64.8074,

  // Variable: b2
  //  Referenced by:
  //    '<S6>/Gain1'
  //    '<S6>/Gain11'
  //    '<S6>/Gain6'
  //    '<S6>/Gain9'

  64.8074,

  // Variable: b3
  //  Referenced by:
  //    '<S6>/Gain10'
  //    '<S6>/Gain14'

  64.8074,

  // Variable: cc
  //  Referenced by:
  //    '<S2>/MATLAB Function2'
  //    '<S3>/MATLAB Function14'
  //    '<S4>/MATLAB Function2'

  { 1.0, 0.92774349, 0.86070798, 0.79851622, 0.74081822, 0.68728928, 0.63762815,
    0.59155536, 0.54881164, 0.50915642, 0.47236655, 0.43823499, 0.40656966,
    0.37719235, 0.34993775, 0.32465247, 0.30119421, 0.27943097, 0.25924026,
    0.24050846, 0.22313016, 0.20700755, 0.19204991, 0.17817305, 0.16529889,
    0.15335497, 0.14227407, 0.13199384, 0.12245643, 0.11360815, 0.10539922,
    0.09778344, 0.09071795, 0.08416299, 0.07808167, 0.07243976, 0.06720551,
    0.06234948, 0.05784432, 0.05366469, 0.04978707 },

  // Variable: cc_new
  //  Referenced by:
  //    '<S2>/MATLAB Function'
  //    '<S2>/MATLAB Function1'

  { 1.0, 0.92774349, 0.86070798, 0.79851622, 0.74081822, 0.68728928, 0.63762815,
    0.59155536, 0.54881164, 0.50915642, 0.47236655, 0.43823499, 0.40656966,
    0.37719235, 0.34993775, 0.32465247, 0.30119421, 0.27943097, 0.25924026,
    0.24050846, 0.22313016, 0.20700755, 0.19204991, 0.17817305, 0.16529889,
    0.15335497, 0.14227407, 0.13199384, 0.12245643, 0.11360815, 0.10539922,
    0.09778344, 0.09071795, 0.08416299, 0.07808167, 0.07243976, 0.06720551,
    0.06234948, 0.05784432, 0.05366469, 0.04978707 },

  // Variable: g1
  //  Referenced by:
  //    '<Root>/Constant'
  //    '<S2>/Constant2'

  { -1.0, 0.0, 1.0 },

  // Variable: g2
  //  Referenced by:
  //    '<Root>/Constant1'
  //    '<S2>/Constant1'

  { -1.0, 0.6, 1.0 },

  // Variable: k1
  //  Referenced by:
  //    '<S6>/Gain3'
  //    '<S6>/Gain7'

  1050.0,

  // Variable: k2
  //  Referenced by:
  //    '<S6>/Gain'
  //    '<S6>/Gain12'
  //    '<S6>/Gain15'
  //    '<S6>/Gain4'

  1050.0,

  // Variable: k3
  //  Referenced by:
  //    '<S6>/Gain13'
  //    '<S6>/Gain8'

  1050.0,

  // Variable: left_0
  //  Referenced by:
  //    '<S2>/Constant4'
  //    '<S2>/left'
  //    '<S3>/Constant4'
  //    '<S3>/left'

  { 0.0, 0.0, 0.0 },

  // Variable: right_0
  //  Referenced by:
  //    '<S2>/Constant5'
  //    '<S2>/right'
  //    '<S4>/Constant5'
  //    '<S4>/right'

  { 0.0, 0.6, 0.0 },

  // Variable: weight
  //  Referenced by:
  //    '<S2>/MATLAB Function'
  //    '<S2>/MATLAB Function1'
  //    '<S2>/MATLAB Function2'
  //    '<S3>/MATLAB Function14'
  //    '<S4>/MATLAB Function2'

  { 0.0266866854, 0.00199886353, 0.0, 0.185908993, 0.0191898792, 0.0,
    0.285018336, 0.0372844837, 0.0, 0.420259935, 0.0646488362, 0.0, 0.548719092,
    0.0993149588, 0.0, 0.694827142, 0.144146588, 0.0, 0.842770495, 0.199150493,
    0.0, 1.00145809, 0.266012621, 0.0, 1.16419525, 0.345460791, 0.0, 1.33404556,
    0.438917363, 0.0, 1.50702469, 0.547052602, 0.0, 1.68320029, 0.670687949, 0.0,
    1.86012248, 0.810593267, 0.0, 2.03662231, 0.967475827, 0.0, 2.20978999,
    1.14133772, 0.0, 2.37738368, 1.33195853, 0.0, 2.53680304, 1.53915556, 0.0,
    2.68526139, 1.76228579, 0.0, 2.81924711, 1.99964698, 0.0, 2.935465,
    2.24909974, 0.0, 3.03059441, 2.50839247, 0.0, 3.10096383, 2.77436149, 0.0,
    3.14270278, 3.04234304, 0.0, 3.15231229, 3.30705133, 0.0, 3.1263415,
    3.56270676, 0.0, 3.06127304, 3.80212433, 0.0, 2.95414017, 4.01615273, 0.0,
    2.80278302, 4.19512387, 0.0, 2.6052096, 4.32772387, 0.0, 2.36016863,
    4.40170579, 0.0, 2.06791763, 4.40077714, 0.0, 1.73057829, 4.31219626, 0.0,
    1.35010411, 4.1125444, 0.0, 0.932038962, 3.79284913, 0.0, 0.481864877,
    3.30984734, 0.0, 0.0139504584, 2.68466014, 0.0, -0.468521208, 1.80723772,
    0.0, -0.932810968, 0.818345067, 0.0, -1.39453253, -0.657489163, 0.0,
    -1.7267386, -1.76935099, 0.0, -2.17127556, -4.73227491, 0.0 },

  // Variable: width
  //  Referenced by:
  //    '<S2>/MATLAB Function2'
  //    '<S3>/MATLAB Function14'
  //    '<S4>/MATLAB Function2'

  { 191.53405062, 222.53081866, 258.54392519, 300.38518553, 348.99779456,
    405.47758835, 471.09774681, 547.33749391, 635.91544276, 738.82833688,
    858.39606128, 997.31393782, 1158.71348371, 1346.23300288, 1564.09960144,
    1817.22447599, 2111.31362293, 2452.99646426, 2849.97528947, 3311.19888223,
    3847.06424586, 4469.65097482, 5192.99355558, 6033.39773515, 7009.80808869,
    8144.2350724, 9462.25118794, 10993.56744344, 12772.70310553, 14839.76384021,
    17241.34578356, 20031.58592206, 23273.3824604, 27039.8126866, 31415.78029626,
    36499.92931022, 42406.86772977, 49269.7510553, 57243.28390674,
    66507.20740907, 66507.20740907 },

  // Variable: width_new
  //  Referenced by:
  //    '<S2>/MATLAB Function'
  //    '<S2>/MATLAB Function1'

  { 191.53405062, 222.53081866, 258.54392519, 300.38518553, 348.99779456,
    405.47758835, 471.09774681, 547.33749391, 635.91544276, 738.82833688,
    858.39606128, 997.31393782, 1158.71348371, 1346.23300288, 1564.09960144,
    1817.22447599, 2111.31362293, 2452.99646426, 2849.97528947, 3311.19888223,
    3847.06424586, 4469.65097482, 5192.99355558, 6033.39773515, 7009.80808869,
    8144.2350724, 9462.25118794, 10993.56744344, 12772.70310553, 14839.76384021,
    17241.34578356, 20031.58592206, 23273.3824604, 27039.8126866, 31415.78029626,
    36499.92931022, 42406.86772977, 49269.7510553, 57243.28390674,
    66507.20740907, 66507.20740907 }
};

//
// File trailer for generated code.
//
// [EOF]
//
