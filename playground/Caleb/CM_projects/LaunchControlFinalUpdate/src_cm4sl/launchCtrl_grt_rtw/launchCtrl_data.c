/*
 * launchCtrl_data.c
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

/* Block parameters (default storage) */
P_launchCtrl_T launchCtrl_P = {
  /* Expression: 0.8
   * Referenced by: '<Root>/Constant'
   */
  0.8,

  /* Expression: 12
   * Referenced by: '<S2>/GearRatio'
   */
  12.0,

  /* Expression: 580
   * Referenced by: '<Root>/Constant1'
   */
  580.0,

  /* Expression: [300,300,150,100,75,20]
   * Referenced by: '<S2>/1-D Lookup Table'
   */
  { 300.0, 300.0, 150.0, 100.0, 75.0, 20.0 },

  /* Expression: [0,700,1400,2100,3000,8000]
   * Referenced by: '<S2>/1-D Lookup Table'
   */
  { 0.0, 700.0, 1400.0, 2100.0, 3000.0, 8000.0 },

  /* Expression: [200,200,100,100,75,20]
   * Referenced by: '<S2>/1-D Lookup Table1'
   */
  { 200.0, 200.0, 100.0, 100.0, 75.0, 20.0 },

  /* Expression: [0,700,1400,2100,3000,8000]
   * Referenced by: '<S2>/1-D Lookup Table1'
   */
  { 0.0, 700.0, 1400.0, 2100.0, 3000.0, 8000.0 },

  /* Expression: -1
   * Referenced by: '<S2>/Gain'
   */
  -1.0,

  /* Expression: 12
   * Referenced by: '<S3>/GearRatio'
   */
  12.0,

  /* Expression: 580
   * Referenced by: '<Root>/Constant2'
   */
  580.0,

  /* Expression: [300,300,150,100,75,20]
   * Referenced by: '<S3>/1-D Lookup Table'
   */
  { 300.0, 300.0, 150.0, 100.0, 75.0, 20.0 },

  /* Expression: [0,700,1400,2100,3000,8000]
   * Referenced by: '<S3>/1-D Lookup Table'
   */
  { 0.0, 700.0, 1400.0, 2100.0, 3000.0, 8000.0 },

  /* Expression: [200,200,100,100,75,20]
   * Referenced by: '<S3>/1-D Lookup Table1'
   */
  { 200.0, 200.0, 100.0, 100.0, 75.0, 20.0 },

  /* Expression: [0,700,1400,2100,3000,8000]
   * Referenced by: '<S3>/1-D Lookup Table1'
   */
  { 0.0, 700.0, 1400.0, 2100.0, 3000.0, 8000.0 },

  /* Expression: -1
   * Referenced by: '<S3>/Gain'
   */
  -1.0,

  /* Expression: 12
   * Referenced by: '<S4>/GearRatio'
   */
  12.0,

  /* Expression: 580
   * Referenced by: '<Root>/Constant3'
   */
  580.0,

  /* Expression: [300,300,150,100,75,20]
   * Referenced by: '<S4>/1-D Lookup Table'
   */
  { 300.0, 300.0, 150.0, 100.0, 75.0, 20.0 },

  /* Expression: [0,700,1400,2100,3000,8000]
   * Referenced by: '<S4>/1-D Lookup Table'
   */
  { 0.0, 700.0, 1400.0, 2100.0, 3000.0, 8000.0 },

  /* Expression: [200,200,100,100,75,20]
   * Referenced by: '<S4>/1-D Lookup Table1'
   */
  { 200.0, 200.0, 100.0, 100.0, 75.0, 20.0 },

  /* Expression: [0,700,1400,2100,3000,8000]
   * Referenced by: '<S4>/1-D Lookup Table1'
   */
  { 0.0, 700.0, 1400.0, 2100.0, 3000.0, 8000.0 },

  /* Expression: -1
   * Referenced by: '<S4>/Gain'
   */
  -1.0,

  /* Expression: 12
   * Referenced by: '<S5>/GearRatio'
   */
  12.0,

  /* Expression: 580
   * Referenced by: '<Root>/Constant4'
   */
  580.0,

  /* Expression: [300,300,150,100,75,20]
   * Referenced by: '<S5>/1-D Lookup Table'
   */
  { 300.0, 300.0, 150.0, 100.0, 75.0, 20.0 },

  /* Expression: [0,700,1400,2100,3000,8000]
   * Referenced by: '<S5>/1-D Lookup Table'
   */
  { 0.0, 700.0, 1400.0, 2100.0, 3000.0, 8000.0 },

  /* Expression: [200,200,100,100,75,20]
   * Referenced by: '<S5>/1-D Lookup Table1'
   */
  { 200.0, 200.0, 100.0, 100.0, 75.0, 20.0 },

  /* Expression: [0,700,1400,2100,3000,8000]
   * Referenced by: '<S5>/1-D Lookup Table1'
   */
  { 0.0, 700.0, 1400.0, 2100.0, 3000.0, 8000.0 },

  /* Expression: -1
   * Referenced by: '<S5>/Gain'
   */
  -1.0,

  /* Start of '<S5>/If Action Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S13>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S5>/If Action Subsystem1' */

  /* Start of '<S5>/If Action Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S12>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S5>/If Action Subsystem' */

  /* Start of '<S4>/If Action Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S11>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S4>/If Action Subsystem1' */

  /* Start of '<S4>/If Action Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S10>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S4>/If Action Subsystem' */

  /* Start of '<S3>/If Action Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S9>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S3>/If Action Subsystem1' */

  /* Start of '<S3>/If Action Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S8>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S3>/If Action Subsystem' */

  /* Start of '<S2>/If Action Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S7>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S2>/If Action Subsystem1' */

  /* Start of '<S2>/If Action Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S6>/Out1'
     */
    0.0
  }
  /* End of '<S2>/If Action Subsystem' */
};
