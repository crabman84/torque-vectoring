/*
 * RuleBasedTractionControl_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RuleBasedTractionControl".
 *
 * Model version              : 1.7
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C source code generated on : Sat Oct 31 11:33:53 2020
 *
 * Target selection: CarMaker.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_RuleBasedTractionControl_private_h_
#define RTW_HEADER_RuleBasedTractionControl_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "RuleBasedTractionControl.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(0) { }
#endif

#define rt_FREE(ptr)                   if((ptr) != (NULL)) { free((void *)(ptr)); (ptr) = (NULL); }

extern real_T look2_binlxpw(real_T u0, real_T u1, const real_T bp0[], const
  real_T bp1[], const real_T table[], const uint32_T maxIndex[], uint32_T stride);
extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
void RuleBasedTractionControl_IfActionSubsystem_Init
  (B_IfActionSubsystem_RuleBasedTractionControl_T *localB,
   P_IfActionSubsystem_RuleBasedTractionControl_T *localP);
void RuleBasedTractionControl_IfActionSubsystem(real_T rtu_In1,
  B_IfActionSubsystem_RuleBasedTractionControl_T *localB);
void RuleBasedTractionControl_IfActionSubsystem_j_Init
  (B_IfActionSubsystem_RuleBasedTractionControl_j_T *localB,
   P_IfActionSubsystem_RuleBasedTractionControl_j_T *localP);
void RuleBasedTractionControl_IfActionSubsystem_o(real_T rtu_In1, real_T rtu_In2,
  real_T rtu_In3, B_IfActionSubsystem_RuleBasedTractionControl_j_T *localB);
void RuleBasedTractionControl_IfActionSubsystem3_Init
  (B_IfActionSubsystem3_RuleBasedTractionControl_T *localB,
   P_IfActionSubsystem3_RuleBasedTractionControl_T *localP);
void RuleBasedTractionControl_IfActionSubsystem3(real_T rtu_In2, real_T rtu_In3,
  real_T rtu_In4, B_IfActionSubsystem3_RuleBasedTractionControl_T *localB,
  P_IfActionSubsystem3_RuleBasedTractionControl_T *localP);

#endif                      /* RTW_HEADER_RuleBasedTractionControl_private_h_ */
