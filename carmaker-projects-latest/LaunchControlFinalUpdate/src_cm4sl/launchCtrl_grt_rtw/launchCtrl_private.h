/*
 * launchCtrl_private.h
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

#ifndef RTW_HEADER_launchCtrl_private_h_
#define RTW_HEADER_launchCtrl_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "launchCtrl.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern void launchCt_IfActionSubsystem_Init(B_IfActionSubsystem_launchCtr_T
  *localB, P_IfActionSubsystem_launchCtr_T *localP);
extern void launchCtrl_IfActionSubsystem(real_T rtu_In1,
  B_IfActionSubsystem_launchCtr_T *localB);

#endif                                 /* RTW_HEADER_launchCtrl_private_h_ */
