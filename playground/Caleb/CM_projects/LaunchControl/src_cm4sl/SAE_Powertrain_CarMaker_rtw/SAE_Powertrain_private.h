/*
 * SAE_Powertrain_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "SAE_Powertrain".
 *
 * Model version              : 1.11
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C source code generated on : Wed Oct 28 14:38:55 2020
 *
 * Target selection: CarMaker.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SAE_Powertrain_private_h_
#define RTW_HEADER_SAE_Powertrain_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "SAE_Powertrain.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(0) { }
#endif

#define rt_FREE(ptr)                   if((ptr) != (NULL)) { free((void *)(ptr)); (ptr) = (NULL); }

extern real_T look2_binlxpw(real_T u0, real_T u1, const real_T bp0[], const
  real_T bp1[], const real_T table[], const uint32_T maxIndex[], uint32_T stride);
extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
void SAE_Powertrain_IfActionSubsystem_Init(B_IfActionSubsystem_SAE_Powertrain_T *
  localB, P_IfActionSubsystem_SAE_Powertrain_T *localP);
void SAE_Powertrain_IfActionSubsystem(real_T rtu_torqueRequest,
  B_IfActionSubsystem_SAE_Powertrain_T *localB);
void SAE_Powertrain_IfActionSubsystem1_Init
  (B_IfActionSubsystem1_SAE_Powertrain_T *localB,
   P_IfActionSubsystem1_SAE_Powertrain_T *localP);
void SAE_Powertrain_IfActionSubsystem1(real_T rtu_torqueRequest, real_T
  rtu_SlipDifference, real_T rtu_WheelSpeed,
  B_IfActionSubsystem1_SAE_Powertrain_T *localB,
  P_IfActionSubsystem1_SAE_Powertrain_T *localP);

#endif                                /* RTW_HEADER_SAE_Powertrain_private_h_ */
