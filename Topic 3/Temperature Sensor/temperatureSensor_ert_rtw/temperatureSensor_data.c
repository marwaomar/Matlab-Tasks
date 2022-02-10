/*
 * File: temperatureSensor_data.c
 *
 * Code generated for Simulink model 'temperatureSensor'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Feb 10 13:20:45 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "temperatureSensor.h"
#include "temperatureSensor_private.h"

/* Block parameters (default storage) */
P_temperatureSensor_T temperatureSensor_P = {
  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S1>/Constant'
   */
  30.0,

  /* Expression: 1
   * Referenced by: '<Root>/Analog Input'
   */
  1.0,

  /* Expression: 1024
   * Referenced by: '<Root>/Constant'
   */
  1024.0,

  /* Expression: 100
   * Referenced by: '<Root>/Gain1'
   */
  100.0,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<Root>/Gain'
   */
  40960U,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<Root>/Gain2'
   */
  150U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
