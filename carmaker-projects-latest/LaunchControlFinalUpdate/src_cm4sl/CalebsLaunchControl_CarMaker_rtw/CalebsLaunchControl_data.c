/*
 * CalebsLaunchControl_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "CalebsLaunchControl".
 *
 * Model version              : 1.18
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C source code generated on : Fri Oct 23 20:36:07 2020
 *
 * Target selection: CarMaker.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CalebsLaunchControl.h"
#include "CalebsLaunchControl_private.h"

/* Block parameters (default storage) */
P_CalebsLaunchControl_T CalebsLaunchControl_P = {
  { 0.0, 400.0, 800.0, 1200.0, 1600.0, 2000.0, 3000.0, 4000.0, 6000.0, 22000.0 },

  { 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0,
    8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0,
    17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0,
    0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0,
    8.0, 12.0, 16.0, 20.0, 0.0, 4.0, 8.0, 12.0, 16.0, 20.0, 0.0, 4.0, 8.0, 11.0,
    15.0, 19.0, 0.0, 3.0, 6.0, 9.0, 12.0, 15.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  { 0.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 12000.0, 14000.0, 15000.0,
    16000.0, 17000.0, 18000.0, 20000.0, 22000.0 },

  { 18.0, 20.0, 23.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0 },

  { 9.0, 10.0, 12.0, 15.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0,
    0.0 },

  { 0.0, 0.2, 0.4, 0.6, 0.8, 1.0 },
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  11.923,
  9.5492965855137211,
  -1.0,
  11.923,
  9.5492965855137211,
  -1.0,
  11.923,
  9.5492965855137211,
  -1.0,
  11.923,
  9.5492965855137211,
  -1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  11.923,
  9.5492965855137211,
  9.5492965855137211,
  -1.0,
  -1.0,
  11.923,
  9.5492965855137211,
  9.5492965855137211,
  -1.0,
  -1.0,
  0.5,
  0.15915494309189535,
  1.539,
  0.5,
  0.15915494309189535,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  1.0,
  60.0,
  0.6,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,

  { 5U, 13U },

  { 5U, 13U },

  { 5U, 13U },

  { 5U, 13U },

  { 5U, 13U },

  { 5U, 13U },

  { 5U, 13U },

  { 5U, 13U },

  /* Start of '<S12>/If Action Subsystem1' */
  {
    0.0
  }
  ,

  /* End of '<S12>/If Action Subsystem1' */

  /* Start of '<S12>/If Action Subsystem' */
  {
    0.0
  }
  ,

  /* End of '<S12>/If Action Subsystem' */

  /* Start of '<S11>/If Action Subsystem1' */
  {
    0.0
  }
  ,

  /* End of '<S11>/If Action Subsystem1' */

  /* Start of '<S11>/If Action Subsystem' */
  {
    0.0
  }
  ,

  /* End of '<S11>/If Action Subsystem' */

  /* Start of '<S10>/If Action Subsystem1' */
  {
    0.0
  }
  ,

  /* End of '<S10>/If Action Subsystem1' */

  /* Start of '<S10>/If Action Subsystem' */
  {
    0.0
  }
  ,

  /* End of '<S10>/If Action Subsystem' */

  /* Start of '<S9>/If Action Subsystem1' */
  {
    0.0
  }
  ,

  /* End of '<S9>/If Action Subsystem1' */

  /* Start of '<S9>/If Action Subsystem' */
  {
    0.0
  }
  /* End of '<S9>/If Action Subsystem' */
};
