/*
 * CalebsLaunchControl_data.c
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

#include "CalebsLaunchControl.h"
#include "CalebsLaunchControl_private.h"

/* Block parameters (default storage) */
P_CalebsLaunchControl_T CalebsLaunchControl_P = {
  /* Expression: 0
   * Referenced by: '<S1>/ECU_Status'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/EngineOut.Engine_on'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/EngineOut.rotv'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/EngineOut.Trq'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/EngineOut.TrqDrag'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/EngineOut.TrqFull'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/EngineOut.TrqOpt'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/EngineOut.FuelFlow'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MCU_Status'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/ISGOut.rotv'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/ISGOut.Trq'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/ISGOut.TrqMot_max'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/ISGOut.TrqGen_max'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/ISGOut.PwrElec'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/ISGOut.i_M2W.FL'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/ISGOut.i_M2W.FR'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/ISGOut.i_M2W.RL'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/ISGOut.i_M2W.RR'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m0.rotv'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m0.Trq'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m0.TrqMot_max'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m0.TrqGen_max'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m0.PwrElec'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m0.i_M2W.FL'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m0.i_M2W.FR'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m0.i_M2W.RL'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m0.i_M2W.RR'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m1.rotv'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m1.Trq'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m1.TrqMot_max'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m1.TrqGen_max'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m1.PwrElec'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m1.i_M2W.FL'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m1.i_M2W.FR'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m1.i_M2W.RL'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m1.i_M2W.RR'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m2.rotv'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m2.Trq'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m2.TrqMot_max'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m2.TrqGen_max'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m2.PwrElec'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m2.i_M2W.FL'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m2.i_M2W.FR'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m2.i_M2W.RL'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m2.i_M2W.RR'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m3.rotv'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m3.Trq'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m3.TrqMot_max'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m3.TrqGen_max'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m3.PwrElec'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m3.i_M2W.FL'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m3.i_M2W.FR'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m3.i_M2W.RL'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/MotorOut.m3.i_M2W.RR'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/TCU_Status'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/ClutchOut.Pos'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/ClutchOut.rotv_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/ClutchOut.rotv_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/ClutchOut.Trq_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/ClutchOut.Trq_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/ClutchOut.i_TrqIn2Out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.GearNo'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.GearNo_dis'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.Trq_DriveSrc_trg'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.i'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.rotv_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.rotv_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.Trq_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.Trq_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.Clutch.Pos'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.Clutch.rotv_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.Clutch.rotv_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.Clutch.Trq_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.Clutch.Trq_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.Clutch.i_TrqIn2Out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.Clutch_dis.Pos'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.Clutch_dis.rotv_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.Clutch_dis.rotv_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.Clutch_dis.Trq_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.Clutch_dis.Trq_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxOut.Clutch_dis.i_TrqIn2Out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.GearNo'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.GearNo_dis'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Trq_DriveSrc_trg'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.i'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.rotv_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.rotv_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Trq_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Trq_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch.Pos'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch.rotv_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch.rotv_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch.Trq_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch.Trq_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch.i_TrqIn2Out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.Pos'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.rotv_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.rotv_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.Trq_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.Trq_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.i_TrqIn2Out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.GearNo'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.GearNo_dis'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Trq_DriveSrc_trg'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.i'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.rotv_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.rotv_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Trq_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Trq_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch.Pos'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch.rotv_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch.rotv_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch.Trq_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch.Trq_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch.i_TrqIn2Out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.Pos'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.rotv_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.rotv_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.Trq_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.Trq_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.i_TrqIn2Out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.GearNo'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.GearNo_dis'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Trq_DriveSrc_trg'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.i'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.rotv_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.rotv_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Trq_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Trq_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch.Pos'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch.rotv_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch.rotv_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch.Trq_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch.Trq_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch.i_TrqIn2Out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.Pos'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.rotv_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.rotv_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.Trq_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.Trq_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.i_TrqIn2Out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.GearNo'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.GearNo_dis'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Trq_DriveSrc_trg'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.i'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.rotv_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.rotv_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Trq_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Trq_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch.Pos'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch.rotv_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch.rotv_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch.Trq_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch.Trq_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch.i_TrqIn2Out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.Pos'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.rotv_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.rotv_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.Trq_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.Trq_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.i_TrqIn2Out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BCU_Status'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BattLVOut.SOC'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BattLVOut.SOH'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BattLVOut.Current'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BattLVOut.AOC'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BattLVOut.Temp'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BattLVOut.Energy'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BattLVOut.Pwr_max'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BattHVOut.SOC'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BattHVOut.SOH'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BattHVOut.Current'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BattHVOut.AOC'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BattHVOut.Temp'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BattHVOut.Energy'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BattHVOut.Pwr_max'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PwrSupplyOut.Pwr_LV'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PwrSupplyOut.Pwr_HV1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PwrSupplyOut.Pwr_HV2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PwrSupplyOut.Voltage_LV'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PwrSupplyOut.Voltage_HV1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PwrSupplyOut.Voltage_HV2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PwrSupplyOut.Pwr_HV1toLV'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PwrSupplyOut.Pwr_HV1toHV2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PwrSupplyOut.Pwr_HV1toLV_max'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PwrSupplyOut.Pwr_HV1toHV2_max'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PwrSupplyOut.Eta_HV1toLV'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PwrSupplyOut.Eta_HV1toHV2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Trq_Supp2Bdy1.rx'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Trq_Supp2Bdy1.ry'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Trq_Supp2Bdy1.rz'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Trq_Supp2Bdy1B.rx'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Trq_Supp2Bdy1B.ry'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Trq_Supp2Bdy1B.rz'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Trq_Supp2BdyEng.rx'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Trq_Supp2BdyEng.ry'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/DL_iDiff_mean'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/WheelOut.FL.Inert_in'
   */
  0.0,

  /* Expression: 12
   * Referenced by: '<S3>/GearRatio'
   */
  12.0,

  /* Expression: [300,300,150,100,75,20]
   * Referenced by: '<S3>/1-D Lookup Table'
   */
  { 300.0, 300.0, 150.0, 100.0, 75.0, 20.0 },

  /* Expression: [0,700,1400,2100,3000,8000]
   * Referenced by: '<S3>/1-D Lookup Table'
   */
  { 0.0, 700.0, 1400.0, 2100.0, 3000.0, 8000.0 },

  /* Expression: [10,10,10,10,10,10]
   * Referenced by: '<S3>/1-D Lookup Table1'
   */
  { 10.0, 10.0, 10.0, 10.0, 10.0, 10.0 },

  /* Expression: [0,700,1400,2100,3000,8000]
   * Referenced by: '<S3>/1-D Lookup Table1'
   */
  { 0.0, 700.0, 1400.0, 2100.0, 3000.0, 8000.0 },

  /* Expression: -1
   * Referenced by: '<S3>/Gain'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S1>/WheelOut.FR.Inert_in'
   */
  0.0,

  /* Expression: 12
   * Referenced by: '<S4>/GearRatio'
   */
  12.0,

  /* Expression: [300,300,150,100,75,20]
   * Referenced by: '<S4>/1-D Lookup Table'
   */
  { 300.0, 300.0, 150.0, 100.0, 75.0, 20.0 },

  /* Expression: [0,700,1400,2100,3000,8000]
   * Referenced by: '<S4>/1-D Lookup Table'
   */
  { 0.0, 700.0, 1400.0, 2100.0, 3000.0, 8000.0 },

  /* Expression: [10,10,10,10,10,10]
   * Referenced by: '<S4>/1-D Lookup Table1'
   */
  { 10.0, 10.0, 10.0, 10.0, 10.0, 10.0 },

  /* Expression: [0,700,1400,2100,3000,8000]
   * Referenced by: '<S4>/1-D Lookup Table1'
   */
  { 0.0, 700.0, 1400.0, 2100.0, 3000.0, 8000.0 },

  /* Expression: -1
   * Referenced by: '<S4>/Gain'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S1>/WheelOut.RL.Inert_in'
   */
  0.0,

  /* Expression: 12
   * Referenced by: '<S5>/GearRatio'
   */
  12.0,

  /* Expression: [300,300,150,100,75,20]
   * Referenced by: '<S5>/1-D Lookup Table'
   */
  { 300.0, 300.0, 150.0, 100.0, 75.0, 20.0 },

  /* Expression: [0,700,1400,2100,3000,8000]
   * Referenced by: '<S5>/1-D Lookup Table'
   */
  { 0.0, 700.0, 1400.0, 2100.0, 3000.0, 8000.0 },

  /* Expression: [10,10,10,10,10,10]
   * Referenced by: '<S5>/1-D Lookup Table1'
   */
  { 10.0, 10.0, 10.0, 10.0, 10.0, 10.0 },

  /* Expression: [0,700,1400,2100,3000,8000]
   * Referenced by: '<S5>/1-D Lookup Table1'
   */
  { 0.0, 700.0, 1400.0, 2100.0, 3000.0, 8000.0 },

  /* Expression: -1
   * Referenced by: '<S5>/Gain'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S1>/WheelOut.RR.Inert_in'
   */
  0.0,

  /* Expression: 12
   * Referenced by: '<S6>/GearRatio'
   */
  12.0,

  /* Expression: [300,300,150,100,75,20]
   * Referenced by: '<S6>/1-D Lookup Table'
   */
  { 300.0, 300.0, 150.0, 100.0, 75.0, 20.0 },

  /* Expression: [0,700,1400,2100,3000,8000]
   * Referenced by: '<S6>/1-D Lookup Table'
   */
  { 0.0, 700.0, 1400.0, 2100.0, 3000.0, 8000.0 },

  /* Expression: [10,10,10,10,10,10]
   * Referenced by: '<S6>/1-D Lookup Table1'
   */
  { 10.0, 10.0, 10.0, 10.0, 10.0, 10.0 },

  /* Expression: [0,700,1400,2100,3000,8000]
   * Referenced by: '<S6>/1-D Lookup Table1'
   */
  { 0.0, 700.0, 1400.0, 2100.0, 3000.0, 8000.0 },

  /* Expression: -1
   * Referenced by: '<S6>/Gain'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S1>/PowerDelta.PlanetGear'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PowerDelta.Diffs'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PowerDelta.Shafts'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PowerDelta.Spring_DL'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PowerDelta.Inert_DL'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PowerDelta.Inert'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/PowerDelta.PowerSupply'
   */
  0.0,

  /* Start of '<S6>/If Action Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S14>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S6>/If Action Subsystem1' */

  /* Start of '<S6>/If Action Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S13>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S6>/If Action Subsystem' */

  /* Start of '<S5>/If Action Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S12>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S5>/If Action Subsystem1' */

  /* Start of '<S5>/If Action Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S11>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S5>/If Action Subsystem' */

  /* Start of '<S4>/If Action Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S10>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S4>/If Action Subsystem1' */

  /* Start of '<S4>/If Action Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S9>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S4>/If Action Subsystem' */

  /* Start of '<S3>/If Action Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S8>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S3>/If Action Subsystem1' */

  /* Start of '<S3>/If Action Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S7>/Out1'
     */
    0.0
  }
  /* End of '<S3>/If Action Subsystem' */
};
