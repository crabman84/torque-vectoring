/*
 * CalebsLaunchControl_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "CalebsLaunchControl".
 *
 * Model version              : 1.1
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C source code generated on : Mon Sep  7 17:31:42 2020
 *
 * Target selection: CarMaker.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CalebsLaunchControl_private_h_
#define RTW_HEADER_CalebsLaunchControl_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "CalebsLaunchControl.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(0) { }
#endif

#define rt_FREE(ptr)                   if((ptr) != (NULL)) { free((void *)(ptr)); (ptr) = (NULL); }

extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
void CalebsLaunchControl_IfActionSubsystem_Init
  (B_IfActionSubsystem_CalebsLaunchControl_T *localB,
   P_IfActionSubsystem_CalebsLaunchControl_T *localP);
void CalebsLaunchControl_IfActionSubsystem(real_T rtu_In1,
  B_IfActionSubsystem_CalebsLaunchControl_T *localB);

#endif                           /* RTW_HEADER_CalebsLaunchControl_private_h_ */
