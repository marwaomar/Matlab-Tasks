/*
 * File: calc.c
 *
 * Code generated for Simulink model 'calc'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Feb 10 17:26:33 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "calc.h"
#include "calc_private.h"

/* Block signals (default storage) */
B_calc_T calc_B;

/* External inputs (root inport signals with default storage) */
ExtU_calc_T calc_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_calc_T calc_Y;

/* Real-time model */
RT_MODEL_calc_T calc_M_;
RT_MODEL_calc_T *const calc_M = &calc_M_;

/* Model step function */
void calc_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Add'
   */
  calc_Y.Out1 = calc_U.In1 + calc_U.In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Subtract'
   */
  calc_Y.Out2 = calc_U.In1 - calc_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Product'
   */
  calc_Y.Out3 = calc_U.In1 * calc_U.In2;

  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/In2'
   *  Inport: '<S1>/In1'
   */
  if (calc_U.In2 > 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    calc_B.In1 = calc_U.In2;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/Out5' incorporates:
     *  Constant: '<S2>/Constant'
     */
    calc_Y.Out5 = 1U;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  }

  /* End of If: '<Root>/If' */

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Product: '<Root>/Divide'
   */
  calc_Y.Out4 = calc_U.In1 / calc_B.In1;
}

/* Model initialize function */
void calc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(calc_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &calc_B), 0,
                sizeof(B_calc_T));

  /* external inputs */
  (void)memset(&calc_U, 0, sizeof(ExtU_calc_T));

  /* external outputs */
  (void) memset((void *)&calc_Y, 0,
                sizeof(ExtY_calc_T));
}

/* Model terminate function */
void calc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
