/*
 * File: lamp_stateFlow.c
 *
 * Code generated for Simulink model 'lamp_stateFlow'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Mar 10 14:30:55 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "lamp_stateFlow.h"
#include "lamp_stateFlow_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define lamp_stateFl_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define lamp_stateFlow_IN_green_state  ((uint8_T)1U)
#define lamp_stateFlow_IN_red_state    ((uint8_T)2U)
#define lamp_stateFlow_IN_yellow_state ((uint8_T)3U)

/* Block states (default storage) */
DW_lamp_stateFlow_T lamp_stateFlow_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_lamp_stateFlow_T lamp_stateFlow_Y;

/* Real-time model */
RT_MODEL_lamp_stateFlow_T lamp_stateFlow_M_;
RT_MODEL_lamp_stateFlow_T *const lamp_stateFlow_M = &lamp_stateFlow_M_;

/* Model step function */
void lamp_stateFlow_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (lamp_stateFlow_DW.temporalCounter_i1 < 7U) {
    lamp_stateFlow_DW.temporalCounter_i1++;
  }

  if (lamp_stateFlow_DW.is_active_c3_lamp_stateFlow == 0U) {
    lamp_stateFlow_DW.is_active_c3_lamp_stateFlow = 1U;

    /* Outport: '<Root>/Out2' */
    lamp_stateFlow_Y.Out2 = 1U;

    /* Outport: '<Root>/Out3' */
    lamp_stateFlow_Y.Out3 = 1U;
    lamp_stateFlow_DW.is_c3_lamp_stateFlow = lamp_stateFlow_IN_red_state;
    lamp_stateFlow_DW.temporalCounter_i1 = 0U;

    /* Outport: '<Root>/Out1' */
    lamp_stateFlow_Y.Out1 = 0U;
  } else {
    switch (lamp_stateFlow_DW.is_c3_lamp_stateFlow) {
     case lamp_stateFlow_IN_green_state:
      if (lamp_stateFlow_DW.temporalCounter_i1 >= 3U) {
        /* Outport: '<Root>/Out2' */
        lamp_stateFlow_Y.Out2 = 1U;
        lamp_stateFlow_DW.is_c3_lamp_stateFlow = lamp_stateFlow_IN_red_state;
        lamp_stateFlow_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Out1' */
        lamp_stateFlow_Y.Out1 = 0U;
      } else {
        /* Outport: '<Root>/Out1' */
        lamp_stateFlow_Y.Out1 = 1U;

        /* Outport: '<Root>/Out2' */
        lamp_stateFlow_Y.Out2 = 0U;

        /* Outport: '<Root>/Out3' */
        lamp_stateFlow_Y.Out3 = 1U;
      }
      break;

     case lamp_stateFlow_IN_red_state:
      /* Outport: '<Root>/Out1' */
      lamp_stateFlow_Y.Out1 = 1U;
      lamp_stateFlow_DW.is_c3_lamp_stateFlow = lamp_stateFlow_IN_yellow_state;
      lamp_stateFlow_DW.temporalCounter_i1 = 0U;
      break;

     default:
      if (lamp_stateFlow_DW.temporalCounter_i1 >= 3U) {
        /* Outport: '<Root>/Out3' */
        lamp_stateFlow_Y.Out3 = 1U;
        lamp_stateFlow_DW.is_c3_lamp_stateFlow = lamp_stateFlow_IN_green_state;
        lamp_stateFlow_DW.temporalCounter_i1 = 0U;
      } else {
        /* Outport: '<Root>/Out1' */
        lamp_stateFlow_Y.Out1 = 1U;

        /* Outport: '<Root>/Out2' */
        lamp_stateFlow_Y.Out2 = 1U;

        /* Outport: '<Root>/Out3' */
        lamp_stateFlow_Y.Out3 = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void lamp_stateFlow_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(lamp_stateFlow_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&lamp_stateFlow_DW, 0,
                sizeof(DW_lamp_stateFlow_T));

  /* external outputs */
  (void) memset((void *)&lamp_stateFlow_Y, 0,
                sizeof(ExtY_lamp_stateFlow_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  lamp_stateFlow_DW.temporalCounter_i1 = 0U;
  lamp_stateFlow_DW.is_active_c3_lamp_stateFlow = 0U;
  lamp_stateFlow_DW.is_c3_lamp_stateFlow = lamp_stateFl_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Outport: '<Root>/Out1' incorporates:
   *  Chart: '<Root>/Chart'
   */
  lamp_stateFlow_Y.Out1 = 0U;

  /* SystemInitialize for Outport: '<Root>/Out2' incorporates:
   *  Chart: '<Root>/Chart'
   */
  lamp_stateFlow_Y.Out2 = 0U;

  /* SystemInitialize for Outport: '<Root>/Out3' incorporates:
   *  Chart: '<Root>/Chart'
   */
  lamp_stateFlow_Y.Out3 = 0U;
}

/* Model terminate function */
void lamp_stateFlow_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
