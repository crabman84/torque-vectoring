/*
 * launchCtrl.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "launchCtrl".
 *
 * Model version              : 1.2
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C source code generated on : Tue Sep  8 10:04:50 2020
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "launchCtrl.h"
#include "launchCtrl_private.h"

/* Block signals (default storage) */
B_launchCtrl_T launchCtrl_B;

/* Block states (default storage) */
DW_launchCtrl_T launchCtrl_DW;

/* External inputs (root inport signals with default storage) */
ExtU_launchCtrl_T launchCtrl_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_launchCtrl_T launchCtrl_Y;

/* Real-time model */
RT_MODEL_launchCtrl_T launchCtrl_M_;
RT_MODEL_launchCtrl_T *const launchCtrl_M = &launchCtrl_M_;
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

/*
 * System initialize for action system:
 *    '<S2>/If Action Subsystem'
 *    '<S2>/If Action Subsystem1'
 *    '<S3>/If Action Subsystem'
 *    '<S3>/If Action Subsystem1'
 *    '<S4>/If Action Subsystem'
 *    '<S4>/If Action Subsystem1'
 *    '<S5>/If Action Subsystem'
 *    '<S5>/If Action Subsystem1'
 */
void launchCt_IfActionSubsystem_Init(B_IfActionSubsystem_launchCtr_T *localB,
  P_IfActionSubsystem_launchCtr_T *localP)
{
  /* SystemInitialize for Outport: '<S6>/Out1' */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for action system:
 *    '<S2>/If Action Subsystem'
 *    '<S2>/If Action Subsystem1'
 *    '<S3>/If Action Subsystem'
 *    '<S3>/If Action Subsystem1'
 *    '<S4>/If Action Subsystem'
 *    '<S4>/If Action Subsystem1'
 *    '<S5>/If Action Subsystem'
 *    '<S5>/If Action Subsystem1'
 */
void launchCtrl_IfActionSubsystem(real_T rtu_In1,
  B_IfActionSubsystem_launchCtr_T *localB)
{
  /* Inport: '<S6>/In1' */
  localB->In1 = rtu_In1;
}

/* Model step function */
void launchCtrl_step(void)
{
  /* local block i/o variables */
  real_T rtb_Product1;
  real_T rtb_Product1_i;
  real_T rtb_Product1_c;
  real_T rtb_Product1_cb;
  real_T rtb_uDLookupTable;
  real_T rtb_uDLookupTable_g;
  real_T rtb_uDLookupTable_f;
  real_T rtb_uDLookupTable_k;
  real_T rtb_SumofElements;
  real_T rtb_SumofElements_o;
  real_T rtb_SumofElements_h;
  real_T rtb_SumofElements_n;
  real_T rtb_uDLookupTable1;

  /* Outport: '<Root>/FL_trq' */
  launchCtrl_Y.FL_trq = 0.0;

  /* Product: '<S2>/Product' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<S2>/GearRatio'
   */
  rtb_SumofElements = launchCtrl_P.GearRatio_Value *
    launchCtrl_P.Constant1_Value;

  /* Abs: '<S2>/Abs' */
  rtb_SumofElements = fabs(rtb_SumofElements);

  /* Lookup_n-D: '<S2>/1-D Lookup Table' */
  rtb_uDLookupTable = look1_binlxpw(rtb_SumofElements,
    launchCtrl_P.uDLookupTable_bp01Data, launchCtrl_P.uDLookupTable_tableData,
    5U);

  /* Product: '<S2>/Product1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  rtb_Product1 = launchCtrl_P.Constant_Value * rtb_uDLookupTable;

  /* Lookup_n-D: '<S2>/1-D Lookup Table1' */
  rtb_uDLookupTable1 = look1_binlxpw(rtb_SumofElements,
    launchCtrl_P.uDLookupTable1_bp01Data, launchCtrl_P.uDLookupTable1_tableData,
    5U);

  /* If: '<S2>/If' */
  if (rtb_uDLookupTable1 < rtb_Product1) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    launchCtrl_IfActionSubsystem(rtb_uDLookupTable1,
      &launchCtrl_B.IfActionSubsystem);

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    launchCtrl_IfActionSubsystem(rtb_Product1, &launchCtrl_B.IfActionSubsystem1);

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem1' */
  }

  /* End of If: '<S2>/If' */

  /* Sum: '<S2>/Sum of Elements' */
  rtb_SumofElements = launchCtrl_B.IfActionSubsystem1.In1 +
    launchCtrl_B.IfActionSubsystem.In1;

  /* Outport: '<Root>/FL_trq_inv' incorporates:
   *  Gain: '<S2>/Gain'
   */
  launchCtrl_Y.FL_trq_inv = launchCtrl_P.Gain_Gain * rtb_SumofElements;

  /* Product: '<S3>/Product' incorporates:
   *  Constant: '<Root>/Constant2'
   *  Constant: '<S3>/GearRatio'
   */
  rtb_SumofElements_o = launchCtrl_P.GearRatio_Value_a *
    launchCtrl_P.Constant2_Value;

  /* Abs: '<S3>/Abs' */
  rtb_SumofElements_o = fabs(rtb_SumofElements_o);

  /* Lookup_n-D: '<S3>/1-D Lookup Table' */
  rtb_uDLookupTable_g = look1_binlxpw(rtb_SumofElements_o,
    launchCtrl_P.uDLookupTable_bp01Data_i,
    launchCtrl_P.uDLookupTable_tableData_k, 5U);

  /* Product: '<S3>/Product1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  rtb_Product1_i = launchCtrl_P.Constant_Value * rtb_uDLookupTable_g;

  /* Lookup_n-D: '<S3>/1-D Lookup Table1' */
  rtb_uDLookupTable1 = look1_binlxpw(rtb_SumofElements_o,
    launchCtrl_P.uDLookupTable1_bp01Data_d,
    launchCtrl_P.uDLookupTable1_tableData_p, 5U);

  /* If: '<S3>/If' */
  if (rtb_uDLookupTable1 < rtb_Product1_i) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    launchCtrl_IfActionSubsystem(rtb_uDLookupTable1,
      &launchCtrl_B.IfActionSubsystem_d);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    launchCtrl_IfActionSubsystem(rtb_Product1_i,
      &launchCtrl_B.IfActionSubsystem1_e);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem1' */
  }

  /* End of If: '<S3>/If' */

  /* Sum: '<S3>/Sum of Elements' */
  rtb_SumofElements_o = launchCtrl_B.IfActionSubsystem1_e.In1 +
    launchCtrl_B.IfActionSubsystem_d.In1;

  /* Outport: '<Root>/FR_trq1' */
  launchCtrl_Y.FR_trq1 = rtb_SumofElements_o;

  /* Outport: '<Root>/FR_trq_inv1' incorporates:
   *  Gain: '<S3>/Gain'
   */
  launchCtrl_Y.FR_trq_inv1 = launchCtrl_P.Gain_Gain_m * rtb_SumofElements_o;

  /* Product: '<S4>/Product' incorporates:
   *  Constant: '<Root>/Constant3'
   *  Constant: '<S4>/GearRatio'
   */
  rtb_SumofElements_h = launchCtrl_P.GearRatio_Value_m *
    launchCtrl_P.Constant3_Value;

  /* Abs: '<S4>/Abs' */
  rtb_SumofElements_h = fabs(rtb_SumofElements_h);

  /* Lookup_n-D: '<S4>/1-D Lookup Table' */
  rtb_uDLookupTable_f = look1_binlxpw(rtb_SumofElements_h,
    launchCtrl_P.uDLookupTable_bp01Data_o,
    launchCtrl_P.uDLookupTable_tableData_b, 5U);

  /* Product: '<S4>/Product1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  rtb_Product1_c = launchCtrl_P.Constant_Value * rtb_uDLookupTable_f;

  /* Lookup_n-D: '<S4>/1-D Lookup Table1' */
  rtb_uDLookupTable1 = look1_binlxpw(rtb_SumofElements_h,
    launchCtrl_P.uDLookupTable1_bp01Data_c,
    launchCtrl_P.uDLookupTable1_tableData_d, 5U);

  /* If: '<S4>/If' */
  if (rtb_uDLookupTable1 < rtb_Product1_c) {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    launchCtrl_IfActionSubsystem(rtb_uDLookupTable1,
      &launchCtrl_B.IfActionSubsystem_j);

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    launchCtrl_IfActionSubsystem(rtb_Product1_c,
      &launchCtrl_B.IfActionSubsystem1_m);

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */
  }

  /* End of If: '<S4>/If' */

  /* Sum: '<S4>/Sum of Elements' */
  rtb_SumofElements_h = launchCtrl_B.IfActionSubsystem1_m.In1 +
    launchCtrl_B.IfActionSubsystem_j.In1;

  /* Outport: '<Root>/RL_trq1' */
  launchCtrl_Y.RL_trq1 = rtb_SumofElements_h;

  /* Outport: '<Root>/RL_trq_inv1' incorporates:
   *  Gain: '<S4>/Gain'
   */
  launchCtrl_Y.RL_trq_inv1 = launchCtrl_P.Gain_Gain_f * rtb_SumofElements_h;

  /* Product: '<S5>/Product' incorporates:
   *  Constant: '<Root>/Constant4'
   *  Constant: '<S5>/GearRatio'
   */
  rtb_SumofElements_n = launchCtrl_P.GearRatio_Value_d *
    launchCtrl_P.Constant4_Value;

  /* Abs: '<S5>/Abs' */
  rtb_SumofElements_n = fabs(rtb_SumofElements_n);

  /* Lookup_n-D: '<S5>/1-D Lookup Table' */
  rtb_uDLookupTable_k = look1_binlxpw(rtb_SumofElements_n,
    launchCtrl_P.uDLookupTable_bp01Data_e,
    launchCtrl_P.uDLookupTable_tableData_kt, 5U);

  /* Product: '<S5>/Product1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  rtb_Product1_cb = launchCtrl_P.Constant_Value * rtb_uDLookupTable_k;

  /* Lookup_n-D: '<S5>/1-D Lookup Table1' */
  rtb_uDLookupTable1 = look1_binlxpw(rtb_SumofElements_n,
    launchCtrl_P.uDLookupTable1_bp01Data_g,
    launchCtrl_P.uDLookupTable1_tableData_n, 5U);

  /* If: '<S5>/If' */
  if (rtb_uDLookupTable1 < rtb_Product1_cb) {
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    launchCtrl_IfActionSubsystem(rtb_uDLookupTable1,
      &launchCtrl_B.IfActionSubsystem_da);

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    launchCtrl_IfActionSubsystem(rtb_Product1_cb,
      &launchCtrl_B.IfActionSubsystem1_c);

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem1' */
  }

  /* End of If: '<S5>/If' */

  /* Sum: '<S5>/Sum of Elements' */
  rtb_SumofElements_n = launchCtrl_B.IfActionSubsystem1_c.In1 +
    launchCtrl_B.IfActionSubsystem_da.In1;

  /* Outport: '<Root>/RR_trq1' */
  launchCtrl_Y.RR_trq1 = rtb_SumofElements_n;

  /* Outport: '<Root>/RR_trq_inv1' incorporates:
   *  Gain: '<S5>/Gain'
   */
  launchCtrl_Y.RR_trq_inv1 = launchCtrl_P.Gain_Gain_b * rtb_SumofElements_n;

  /* Matfile logging */
  rt_UpdateTXYLogVars(launchCtrl_M->rtwLogInfo, (&launchCtrl_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(launchCtrl_M)!=-1) &&
        !((rtmGetTFinal(launchCtrl_M)-launchCtrl_M->Timing.taskTime0) >
          launchCtrl_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(launchCtrl_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++launchCtrl_M->Timing.clockTick0)) {
    ++launchCtrl_M->Timing.clockTickH0;
  }

  launchCtrl_M->Timing.taskTime0 = launchCtrl_M->Timing.clockTick0 *
    launchCtrl_M->Timing.stepSize0 + launchCtrl_M->Timing.clockTickH0 *
    launchCtrl_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void launchCtrl_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)launchCtrl_M, 0,
                sizeof(RT_MODEL_launchCtrl_T));
  rtmSetTFinal(launchCtrl_M, 10.0);
  launchCtrl_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    launchCtrl_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(launchCtrl_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(launchCtrl_M->rtwLogInfo, (NULL));
    rtliSetLogT(launchCtrl_M->rtwLogInfo, "tout");
    rtliSetLogX(launchCtrl_M->rtwLogInfo, "");
    rtliSetLogXFinal(launchCtrl_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(launchCtrl_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(launchCtrl_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(launchCtrl_M->rtwLogInfo, 0);
    rtliSetLogDecimation(launchCtrl_M->rtwLogInfo, 1);
    rtliSetLogY(launchCtrl_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(launchCtrl_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(launchCtrl_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &launchCtrl_B), 0,
                sizeof(B_launchCtrl_T));

  /* states (dwork) */
  (void) memset((void *)&launchCtrl_DW, 0,
                sizeof(DW_launchCtrl_T));

  /* external inputs */
  (void)memset(&launchCtrl_U, 0, sizeof(ExtU_launchCtrl_T));

  /* external outputs */
  (void) memset((void *)&launchCtrl_Y, 0,
                sizeof(ExtY_launchCtrl_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(launchCtrl_M->rtwLogInfo, 0.0, rtmGetTFinal
    (launchCtrl_M), launchCtrl_M->Timing.stepSize0, (&rtmGetErrorStatus
    (launchCtrl_M)));

  /* SystemInitialize for IfAction SubSystem: '<S2>/If Action Subsystem' */
  launchCt_IfActionSubsystem_Init(&launchCtrl_B.IfActionSubsystem,
    &launchCtrl_P.IfActionSubsystem);

  /* End of SystemInitialize for SubSystem: '<S2>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S2>/If Action Subsystem1' */
  launchCt_IfActionSubsystem_Init(&launchCtrl_B.IfActionSubsystem1,
    &launchCtrl_P.IfActionSubsystem1);

  /* End of SystemInitialize for SubSystem: '<S2>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem' */
  launchCt_IfActionSubsystem_Init(&launchCtrl_B.IfActionSubsystem_d,
    &launchCtrl_P.IfActionSubsystem_d);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem1' */
  launchCt_IfActionSubsystem_Init(&launchCtrl_B.IfActionSubsystem1_e,
    &launchCtrl_P.IfActionSubsystem1_e);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S4>/If Action Subsystem' */
  launchCt_IfActionSubsystem_Init(&launchCtrl_B.IfActionSubsystem_j,
    &launchCtrl_P.IfActionSubsystem_j);

  /* End of SystemInitialize for SubSystem: '<S4>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S4>/If Action Subsystem1' */
  launchCt_IfActionSubsystem_Init(&launchCtrl_B.IfActionSubsystem1_m,
    &launchCtrl_P.IfActionSubsystem1_m);

  /* End of SystemInitialize for SubSystem: '<S4>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S5>/If Action Subsystem' */
  launchCt_IfActionSubsystem_Init(&launchCtrl_B.IfActionSubsystem_da,
    &launchCtrl_P.IfActionSubsystem_da);

  /* End of SystemInitialize for SubSystem: '<S5>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S5>/If Action Subsystem1' */
  launchCt_IfActionSubsystem_Init(&launchCtrl_B.IfActionSubsystem1_c,
    &launchCtrl_P.IfActionSubsystem1_c);

  /* End of SystemInitialize for SubSystem: '<S5>/If Action Subsystem1' */
}

/* Model terminate function */
void launchCtrl_terminate(void)
{
  /* (no terminate code required) */
}
