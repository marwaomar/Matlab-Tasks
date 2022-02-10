/*
 * File: temperatureSensor.h
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

#ifndef RTW_HEADER_temperatureSensor_h_
#define RTW_HEADER_temperatureSensor_h_
#include <stddef.h>
#include <string.h>
#ifndef temperatureSensor_COMMON_INCLUDES_
# define temperatureSensor_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_PWM.h"
#include "MW_AnalogIn.h"
#include "MW_arduino_digitalio.h"
#endif                                 /* temperatureSensor_COMMON_INCLUDES_ */

#include "temperatureSensor_types.h"
#include "MW_target_hardware_resources.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_in_k2_T obj; /* '<Root>/Analog Input' */
  codertarget_arduinobase_int_k_T obj_m;/* '<Root>/PWM' */
  codertarget_arduinobase_block_T obj_e;/* '<S2>/Digital Output' */
} DW_temperatureSensor_T;

/* Parameters (default storage) */
struct P_temperatureSensor_T_ {
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T AnalogInput_SampleTime;       /* Expression: 1
                                        * Referenced by: '<Root>/Analog Input'
                                        */
  real_T Constant_Value;               /* Expression: 1024
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Gain1_Gain;                   /* Expression: 100
                                        * Referenced by: '<Root>/Gain1'
                                        */
  uint16_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<Root>/Gain'
                                        */
  uint8_T Gain2_Gain;                  /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<Root>/Gain2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_temperatureSensor_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_temperatureSensor_T temperatureSensor_P;

/* Block states (default storage) */
extern DW_temperatureSensor_T temperatureSensor_DW;

/* Model entry point functions */
extern void temperatureSensor_initialize(void);
extern void temperatureSensor_step(void);
extern void temperatureSensor_terminate(void);

/* Real-time Model object */
extern RT_MODEL_temperatureSensor_T *const temperatureSensor_M;

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
 * '<Root>' : 'temperatureSensor'
 * '<S1>'   : 'temperatureSensor/Compare To Constant'
 * '<S2>'   : 'temperatureSensor/Digital Output'
 */
#endif                                 /* RTW_HEADER_temperatureSensor_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
