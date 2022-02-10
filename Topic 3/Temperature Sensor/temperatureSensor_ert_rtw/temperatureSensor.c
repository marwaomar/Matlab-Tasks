/*
 * File: temperatureSensor.c
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

/* Block states (default storage) */
DW_temperatureSensor_T temperatureSensor_DW;

/* Real-time model */
RT_MODEL_temperatureSensor_T temperatureSensor_M_;
RT_MODEL_temperatureSensor_T *const temperatureSensor_M = &temperatureSensor_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabCod_k(codertarget_arduinobase_in_k2_T *obj);
static void matlabCodegenHandle_matlabCo_k2(codertarget_arduinobase_block_T *obj);
static void temperatureS_SystemCore_release(const
  codertarget_arduinobase_int_k_T *obj);
static void temperatureSe_SystemCore_delete(const
  codertarget_arduinobase_int_k_T *obj);
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_int_k_T *obj);
static codertarget_arduinobase_int_k_T *arduino_PWMOutput_arduino_PWMOu
  (codertarget_arduinobase_int_k_T *obj);
static void matlabCodegenHandle_matlabCod_k(codertarget_arduinobase_in_k2_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCo_k2(codertarget_arduinobase_block_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void temperatureS_SystemCore_release(const
  codertarget_arduinobase_int_k_T *obj)
{
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    MW_PWM_SetDutyCycle(obj->MW_PWM_HANDLE, 0);
  }
}

static void temperatureSe_SystemCore_delete(const
  codertarget_arduinobase_int_k_T *obj)
{
  temperatureS_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_int_k_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    temperatureSe_SystemCore_delete(obj);
  }
}

static codertarget_arduinobase_int_k_T *arduino_PWMOutput_arduino_PWMOu
  (codertarget_arduinobase_int_k_T *obj)
{
  codertarget_arduinobase_int_k_T *b_obj;
  obj->isInitialized = 0L;
  b_obj = obj;
  obj->Hw.AvailablePwmPinNames.f1 = '2';
  obj->Hw.AvailablePwmPinNames.f2 = '3';
  obj->Hw.AvailablePwmPinNames.f3 = '4';
  obj->Hw.AvailablePwmPinNames.f4 = '5';
  obj->Hw.AvailablePwmPinNames.f5 = '6';
  obj->Hw.AvailablePwmPinNames.f6 = '7';
  obj->Hw.AvailablePwmPinNames.f7 = '8';
  obj->Hw.AvailablePwmPinNames.f8 = '9';
  obj->Hw.AvailablePwmPinNames.f9[0] = '1';
  obj->Hw.AvailablePwmPinNames.f9[1] = '0';
  obj->Hw.AvailablePwmPinNames.f10[0] = '1';
  obj->Hw.AvailablePwmPinNames.f10[1] = '1';
  obj->Hw.AvailablePwmPinNames.f11[0] = '1';
  obj->Hw.AvailablePwmPinNames.f11[1] = '2';
  obj->Hw.AvailablePwmPinNames.f12[0] = '1';
  obj->Hw.AvailablePwmPinNames.f12[1] = '3';
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

/* Model step function */
void temperatureSensor_step(void)
{
  uint16_T rtb_AnalogInput_0;
  boolean_T rtb_Compare;

  /* MATLABSystem: '<Root>/Analog Input' */
  if (temperatureSensor_DW.obj.SampleTime !=
      temperatureSensor_P.AnalogInput_SampleTime) {
    temperatureSensor_DW.obj.SampleTime =
      temperatureSensor_P.AnalogInput_SampleTime;
  }

  MW_AnalogIn_Start(temperatureSensor_DW.obj.MW_ANALOGIN_HANDLE);
  MW_AnalogInSingle_ReadResult(temperatureSensor_DW.obj.MW_ANALOGIN_HANDLE,
    &rtb_AnalogInput_0, 3);

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<S1>/Constant'
   *  Gain: '<Root>/Gain'
   *  Gain: '<Root>/Gain1'
   *  MATLABSystem: '<Root>/Analog Input'
   *  Product: '<Root>/Divide'
   */
  rtb_Compare = ((real_T)((uint32_T)temperatureSensor_P.Gain_Gain *
    rtb_AnalogInput_0) * 0.0001220703125 / temperatureSensor_P.Constant_Value *
                 temperatureSensor_P.Gain1_Gain >=
                 temperatureSensor_P.CompareToConstant_const);

  /* MATLABSystem: '<S2>/Digital Output' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion'
   *  Logic: '<Root>/NOT'
   */
  writeDigitalPin(7, (uint8_T)!rtb_Compare);

  /* MATLABSystem: '<Root>/PWM' incorporates:
   *  Gain: '<Root>/Gain2'
   */
  MW_PWM_SetDutyCycle(temperatureSensor_DW.obj_m.MW_PWM_HANDLE, (real_T)
                      (rtb_Compare ? (int16_T)temperatureSensor_P.Gain2_Gain : 0));
}

/* Model initialize function */
void temperatureSensor_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(temperatureSensor_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&temperatureSensor_DW, 0,
                sizeof(DW_temperatureSensor_T));

  {
    codertarget_arduinobase_in_k2_T *obj;
    MW_AnalogIn_TriggerSource_Type trigger_val;
    codertarget_arduinobase_int_k_T *obj_0;

    /* Start for MATLABSystem: '<Root>/Analog Input' */
    temperatureSensor_DW.obj.matlabCodegenIsDeleted = true;
    obj = &temperatureSensor_DW.obj;
    temperatureSensor_DW.obj.isInitialized = 0L;
    obj->Hw.AvailablePwmPinNames.f1 = '2';
    obj->Hw.AvailablePwmPinNames.f2 = '3';
    obj->Hw.AvailablePwmPinNames.f3 = '4';
    obj->Hw.AvailablePwmPinNames.f4 = '5';
    obj->Hw.AvailablePwmPinNames.f5 = '6';
    obj->Hw.AvailablePwmPinNames.f6 = '7';
    obj->Hw.AvailablePwmPinNames.f7 = '8';
    obj->Hw.AvailablePwmPinNames.f8 = '9';
    obj->Hw.AvailablePwmPinNames.f9[0] = '1';
    obj->Hw.AvailablePwmPinNames.f9[1] = '0';
    obj->Hw.AvailablePwmPinNames.f10[0] = '1';
    obj->Hw.AvailablePwmPinNames.f10[1] = '1';
    obj->Hw.AvailablePwmPinNames.f11[0] = '1';
    obj->Hw.AvailablePwmPinNames.f11[1] = '2';
    obj->Hw.AvailablePwmPinNames.f12[0] = '1';
    obj->Hw.AvailablePwmPinNames.f12[1] = '3';
    temperatureSensor_DW.obj.matlabCodegenIsDeleted = false;
    temperatureSensor_DW.obj.SampleTime =
      temperatureSensor_P.AnalogInput_SampleTime;
    obj = &temperatureSensor_DW.obj;
    temperatureSensor_DW.obj.isSetupComplete = false;
    temperatureSensor_DW.obj.isInitialized = 1L;
    obj->MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(0UL);
    trigger_val = MW_ANALOGIN_SOFTWARE_TRIGGER;
    MW_AnalogIn_SetTriggerSource(temperatureSensor_DW.obj.MW_ANALOGIN_HANDLE,
      trigger_val, 0UL);
    temperatureSensor_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<S2>/Digital Output' */
    temperatureSensor_DW.obj_e.matlabCodegenIsDeleted = true;
    temperatureSensor_DW.obj_e.isInitialized = 0L;
    temperatureSensor_DW.obj_e.matlabCodegenIsDeleted = false;
    temperatureSensor_DW.obj_e.isSetupComplete = false;
    temperatureSensor_DW.obj_e.isInitialized = 1L;
    digitalIOSetup(7, true);
    temperatureSensor_DW.obj_e.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/PWM' */
    temperatureSensor_DW.obj_m.matlabCodegenIsDeleted = true;
    arduino_PWMOutput_arduino_PWMOu(&temperatureSensor_DW.obj_m);
    obj_0 = &temperatureSensor_DW.obj_m;
    temperatureSensor_DW.obj_m.isSetupComplete = false;
    temperatureSensor_DW.obj_m.isInitialized = 1L;
    obj_0->MW_PWM_HANDLE = MW_PWM_Open(5UL, 0.0, 0.0);
    MW_PWM_Start(temperatureSensor_DW.obj_m.MW_PWM_HANDLE);
    temperatureSensor_DW.obj_m.isSetupComplete = true;
  }
}

/* Model terminate function */
void temperatureSensor_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Analog Input' */
  matlabCodegenHandle_matlabCod_k(&temperatureSensor_DW.obj);

  /* Terminate for MATLABSystem: '<S2>/Digital Output' */
  matlabCodegenHandle_matlabCo_k2(&temperatureSensor_DW.obj_e);

  /* Terminate for MATLABSystem: '<Root>/PWM' */
  matlabCodegenHandle_matlabCodeg(&temperatureSensor_DW.obj_m);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
