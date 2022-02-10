/*
 * File: temperatureSensor_types.h
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

#ifndef RTW_HEADER_temperatureSensor_types_h_
#define RTW_HEADER_temperatureSensor_types_h_
#include "rtwtypes.h"

/* Custom Type definition for MATLABSystem: '<Root>/Analog Input' */
#include "MW_SVD.h"
#ifndef typedef_codertarget_arduinobase_block_T
#define typedef_codertarget_arduinobase_block_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} codertarget_arduinobase_block_T;

#endif                                 /*typedef_codertarget_arduinobase_block_T*/

#ifndef typedef_cell_temperatureSensor_T
#define typedef_cell_temperatureSensor_T

typedef struct {
  char_T f1;
  char_T f2;
  char_T f3;
  char_T f4;
  char_T f5;
  char_T f6;
  char_T f7;
  char_T f8;
  char_T f9[2];
  char_T f10[2];
  char_T f11[2];
  char_T f12[2];
} cell_temperatureSensor_T;

#endif                                 /*typedef_cell_temperatureSensor_T*/

#ifndef typedef_codertarget_arduinobase_inter_T
#define typedef_codertarget_arduinobase_inter_T

typedef struct {
  cell_temperatureSensor_T AvailablePwmPinNames;
} codertarget_arduinobase_inter_T;

#endif                                 /*typedef_codertarget_arduinobase_inter_T*/

#ifndef typedef_codertarget_arduinobase_int_k_T
#define typedef_codertarget_arduinobase_int_k_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  codertarget_arduinobase_inter_T Hw;
  MW_Handle_Type MW_PWM_HANDLE;
} codertarget_arduinobase_int_k_T;

#endif                                 /*typedef_codertarget_arduinobase_int_k_T*/

#ifndef typedef_codertarget_arduinobase_in_k2_T
#define typedef_codertarget_arduinobase_in_k2_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  codertarget_arduinobase_inter_T Hw;
  MW_Handle_Type MW_ANALOGIN_HANDLE;
  real_T SampleTime;
} codertarget_arduinobase_in_k2_T;

#endif                                 /*typedef_codertarget_arduinobase_in_k2_T*/

/* Parameters (default storage) */
typedef struct P_temperatureSensor_T_ P_temperatureSensor_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_temperatureSensor_T RT_MODEL_temperatureSensor_T;

#endif                                 /* RTW_HEADER_temperatureSensor_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
