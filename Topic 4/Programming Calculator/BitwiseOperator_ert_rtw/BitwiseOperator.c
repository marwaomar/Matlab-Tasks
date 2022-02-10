/*
 * File: BitwiseOperator.c
 *
 * Code generated for Simulink model 'BitwiseOperator'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Feb 10 14:45:09 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BitwiseOperator.h"
#include "BitwiseOperator_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_BitwiseOperator_T BitwiseOperator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_BitwiseOperator_T BitwiseOperator_Y;

/* Real-time model */
RT_MODEL_BitwiseOperator_T BitwiseOperator_M_;
RT_MODEL_BitwiseOperator_T *const BitwiseOperator_M = &BitwiseOperator_M_;

/* Model step function */
void BitwiseOperator_step(void)
{
  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator'
   */
  BitwiseOperator_Y.Out4 = (BitwiseOperator_U.In1 && BitwiseOperator_U.In2);

  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise OR'
   */
  BitwiseOperator_Y.Out1 = (BitwiseOperator_U.In1 || BitwiseOperator_U.In2);

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise XOR'
   */
  BitwiseOperator_Y.Out2 = BitwiseOperator_U.In1 ^ BitwiseOperator_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOR'
   *  S-Function (sfix_bitop): '<Root>/Bitwise XOR1'
   */
  BitwiseOperator_Y.Out3 = (BitwiseOperator_U.In1 == BitwiseOperator_U.In2);

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In1'
   *  Logic: '<Root>/NOT'
   */
  BitwiseOperator_Y.Out5 = !BitwiseOperator_U.In1;

  /* Outport: '<Root>/Out6' incorporates:
   *  Inport: '<Root>/In2'
   *  Logic: '<Root>/NOT1'
   */
  BitwiseOperator_Y.Out6 = !BitwiseOperator_U.In2;
}

/* Model initialize function */
void BitwiseOperator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(BitwiseOperator_M, (NULL));

  /* external inputs */
  (void)memset(&BitwiseOperator_U, 0, sizeof(ExtU_BitwiseOperator_T));

  /* external outputs */
  (void) memset((void *)&BitwiseOperator_Y, 0,
                sizeof(ExtY_BitwiseOperator_T));
}

/* Model terminate function */
void BitwiseOperator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
