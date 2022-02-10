/*
 * File: BitwiseOperator.h
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

#ifndef RTW_HEADER_BitwiseOperator_h_
#define RTW_HEADER_BitwiseOperator_h_
#include <string.h>
#include <stddef.h>
#ifndef BitwiseOperator_COMMON_INCLUDES_
# define BitwiseOperator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* BitwiseOperator_COMMON_INCLUDES_ */

#include "BitwiseOperator_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T In1;                       /* '<Root>/In1' */
  boolean_T In2;                       /* '<Root>/In2' */
} ExtU_BitwiseOperator_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T Out4;                      /* '<Root>/Out4' */
  boolean_T Out1;                      /* '<Root>/Out1' */
  boolean_T Out2;                      /* '<Root>/Out2' */
  boolean_T Out3;                      /* '<Root>/Out3' */
  boolean_T Out5;                      /* '<Root>/Out5' */
  boolean_T Out6;                      /* '<Root>/Out6' */
} ExtY_BitwiseOperator_T;

/* Real-time Model Data Structure */
struct tag_RTM_BitwiseOperator_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_BitwiseOperator_T BitwiseOperator_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_BitwiseOperator_T BitwiseOperator_Y;

/* Model entry point functions */
extern void BitwiseOperator_initialize(void);
extern void BitwiseOperator_step(void);
extern void BitwiseOperator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_BitwiseOperator_T *const BitwiseOperator_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'BitwiseOperator'
 */
#endif                                 /* RTW_HEADER_BitwiseOperator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
