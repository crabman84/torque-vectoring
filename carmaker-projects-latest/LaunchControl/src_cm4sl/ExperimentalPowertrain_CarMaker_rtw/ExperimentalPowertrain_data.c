/*
 * ExperimentalPowertrain_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ExperimentalPowertrain".
 *
 * Model version              : 1.4
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C source code generated on : Fri Oct 30 16:25:36 2020
 *
 * Target selection: CarMaker.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ExperimentalPowertrain.h"
#include "ExperimentalPowertrain_private.h"

/* Block parameters (default storage) */
P_ExperimentalPowertrain_T ExperimentalPowertrain_P = {
  /* Computed Parameter: FLtrq_Y0
   * Referenced by: '<S3>/FL trq'
   */
  0.0,

  /* Computed Parameter: FLtrqinv_Y0
   * Referenced by: '<S3>/FL trq inv'
   */
  0.0,

  /* Computed Parameter: FRtrq_Y0
   * Referenced by: '<S3>/FR trq'
   */
  0.0,

  /* Computed Parameter: FRtrqinv_Y0
   * Referenced by: '<S3>/FR trq inv'
   */
  0.0,

  /* Computed Parameter: RLtrq_Y0
   * Referenced by: '<S3>/RL trq'
   */
  0.0,

  /* Computed Parameter: RLtrqinv_Y0
   * Referenced by: '<S3>/RL trq inv'
   */
  0.0,

  /* Computed Parameter: RRtrq_Y0
   * Referenced by: '<S3>/RR trq'
   */
  0.0,

  /* Computed Parameter: RRtrqinv_Y0
   * Referenced by: '<S3>/RR trq inv'
   */
  0.0,

  /* Expression: 11.923
   * Referenced by: '<S6>/GearRatio2'
   */
  11.923,

  /* Expression: [9 10 12 15 25 25 25 25 25 25 25 25 25 0]
   * Referenced by: '<S6>/1-D Lookup Table1'
   */
  { 9.0, 10.0, 12.0, 15.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0,
    0.0 },

  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S6>/1-D Lookup Table1'
   */
  { 0.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 12000.0, 14000.0, 15000.0,
    16000.0, 17000.0, 18000.0, 20000.0, 22000.0 },

  /* Expression: 60/(2*pi)
   * Referenced by: '<S6>/Gain3'
   */
  9.5492965855137211,

  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S6>/2-D Lookup Table1'
   */
  { 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0,
    8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0,
    17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0,
    0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0,
    8.0, 12.0, 16.0, 20.0, 0.0, 4.0, 8.0, 12.0, 16.0, 20.0, 0.0, 4.0, 8.0, 11.0,
    15.0, 19.0, 0.0, 3.0, 6.0, 9.0, 12.0, 15.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0.2 0.4 0.6 0.8 1]
   * Referenced by: '<S6>/2-D Lookup Table1'
   */
  { 0.0, 0.2, 0.4, 0.6, 0.8, 1.0 },

  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S6>/2-D Lookup Table1'
   */
  { 0.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 12000.0, 14000.0, 15000.0,
    16000.0, 17000.0, 18000.0, 20000.0, 22000.0 },

  /* Expression: -1
   * Referenced by: '<S6>/Gain'
   */
  -1.0,

  /* Expression: 11.923
   * Referenced by: '<S7>/GearRatio2'
   */
  11.923,

  /* Expression: [9 10 12 15 25 25 25 25 25 25 25 25 25 0]
   * Referenced by: '<S7>/1-D Lookup Table1'
   */
  { 9.0, 10.0, 12.0, 15.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0,
    0.0 },

  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S7>/1-D Lookup Table1'
   */
  { 0.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 12000.0, 14000.0, 15000.0,
    16000.0, 17000.0, 18000.0, 20000.0, 22000.0 },

  /* Expression: 60/(2*pi)
   * Referenced by: '<S7>/Gain3'
   */
  9.5492965855137211,

  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S7>/2-D Lookup Table1'
   */
  { 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0,
    8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0,
    17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0,
    0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0,
    8.0, 12.0, 16.0, 20.0, 0.0, 4.0, 8.0, 12.0, 16.0, 20.0, 0.0, 4.0, 8.0, 11.0,
    15.0, 19.0, 0.0, 3.0, 6.0, 9.0, 12.0, 15.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0.2 0.4 0.6 0.8 1]
   * Referenced by: '<S7>/2-D Lookup Table1'
   */
  { 0.0, 0.2, 0.4, 0.6, 0.8, 1.0 },

  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S7>/2-D Lookup Table1'
   */
  { 0.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 12000.0, 14000.0, 15000.0,
    16000.0, 17000.0, 18000.0, 20000.0, 22000.0 },

  /* Expression: -1
   * Referenced by: '<S7>/Gain'
   */
  -1.0,

  /* Expression: 11.923
   * Referenced by: '<S8>/GearRatio2'
   */
  11.923,

  /* Expression: [18 20 23 25 25 25 25 25 25 25]
   * Referenced by: '<S8>/1-D Lookup Table1'
   */
  { 18.0, 20.0, 23.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0 },

  /* Expression: [0 400 800 1200 1600 2000 3000 4000 6000 22000]
   * Referenced by: '<S8>/1-D Lookup Table1'
   */
  { 0.0, 400.0, 800.0, 1200.0, 1600.0, 2000.0, 3000.0, 4000.0, 6000.0, 22000.0 },

  /* Expression: 60/(2*pi)
   * Referenced by: '<S8>/Gain3'
   */
  9.5492965855137211,

  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S8>/2-D Lookup Table1'
   */
  { 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0,
    8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0,
    17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0,
    0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0,
    8.0, 12.0, 16.0, 20.0, 0.0, 4.0, 8.0, 12.0, 16.0, 20.0, 0.0, 4.0, 8.0, 11.0,
    15.0, 19.0, 0.0, 3.0, 6.0, 9.0, 12.0, 15.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0.2 0.4 0.6 0.8 1]
   * Referenced by: '<S8>/2-D Lookup Table1'
   */
  { 0.0, 0.2, 0.4, 0.6, 0.8, 1.0 },

  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S8>/2-D Lookup Table1'
   */
  { 0.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 12000.0, 14000.0, 15000.0,
    16000.0, 17000.0, 18000.0, 20000.0, 22000.0 },

  /* Expression: -1
   * Referenced by: '<S8>/Gain'
   */
  -1.0,

  /* Expression: 11.923
   * Referenced by: '<S9>/GearRatio2'
   */
  11.923,

  /* Expression: [18 20 23 25 25 25 25 25 25 25]
   * Referenced by: '<S9>/1-D Lookup Table1'
   */
  { 18.0, 20.0, 23.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0, 25.0 },

  /* Expression: [0 400 800 1200 1600 2000 3000 4000 6000 22000]
   * Referenced by: '<S9>/1-D Lookup Table1'
   */
  { 0.0, 400.0, 800.0, 1200.0, 1600.0, 2000.0, 3000.0, 4000.0, 6000.0, 22000.0 },

  /* Expression: 60/(2*pi)
   * Referenced by: '<S9>/Gain3'
   */
  9.5492965855137211,

  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S9>/2-D Lookup Table1'
   */
  { 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0,
    8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0,
    17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0,
    0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0, 8.0, 13.0, 17.0, 21.0, 0.0, 4.0,
    8.0, 12.0, 16.0, 20.0, 0.0, 4.0, 8.0, 12.0, 16.0, 20.0, 0.0, 4.0, 8.0, 11.0,
    15.0, 19.0, 0.0, 3.0, 6.0, 9.0, 12.0, 15.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0.2 0.4 0.6 0.8 1]
   * Referenced by: '<S9>/2-D Lookup Table1'
   */
  { 0.0, 0.2, 0.4, 0.6, 0.8, 1.0 },

  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S9>/2-D Lookup Table1'
   */
  { 0.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 12000.0, 14000.0, 15000.0,
    16000.0, 17000.0, 18000.0, 20000.0, 22000.0 },

  /* Expression: -1
   * Referenced by: '<S9>/Gain'
   */
  -1.0,

  /* Computed Parameter: FLtrq_Y0_j
   * Referenced by: '<S4>/FL trq'
   */
  0.0,

  /* Computed Parameter: FLtrqinv_Y0_f
   * Referenced by: '<S4>/FL trq inv'
   */
  0.0,

  /* Computed Parameter: FRtrq_Y0_e
   * Referenced by: '<S4>/FR trq'
   */
  0.0,

  /* Computed Parameter: FRtrqinv_Y0_h
   * Referenced by: '<S4>/FR trq inv'
   */
  0.0,

  /* Computed Parameter: RLtrq_Y0_l
   * Referenced by: '<S4>/RL trq'
   */
  0.0,

  /* Computed Parameter: RLtrqinv_Y0_p
   * Referenced by: '<S4>/RL trq inv'
   */
  0.0,

  /* Computed Parameter: RRtrq_Y0_j
   * Referenced by: '<S4>/RR trq'
   */
  0.0,

  /* Computed Parameter: RRtrqinv_Y0_f
   * Referenced by: '<S4>/RR trq inv'
   */
  0.0,

  /* Expression: 1.539
   * Referenced by: '<S19>/Constant'
   */
  1.539,

  /* Expression: 2*pi
   * Referenced by: '<S19>/Gain2'
   */
  6.2831853071795862,

  /* Expression: 1
   * Referenced by: '<S19>/Constant1'
   */
  1.0,

  /* Expression: 0.1
   * Referenced by: '<S19>/TargetSlip'
   */
  0.1,

  /* Expression: 9.5493/2
   * Referenced by: '<S19>/Gain3'
   */
  4.77465,

  /* Expression: [21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S19>/1-D Lookup Table'
   */
  { 21.0, 21.0, 21.0, 21.0, 21.0, 21.0, 21.0, 21.0, 21.0, 20.0, 20.0, 19.0, 15.0,
    0.0 },

  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S19>/1-D Lookup Table'
   */
  { 0.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 12000.0, 14000.0, 15000.0,
    16000.0, 17000.0, 18000.0, 20000.0, 22000.0 },

  /* Expression: 11.923
   * Referenced by: '<S19>/GearRatio'
   */
  11.923,

  /* Expression: -1
   * Referenced by: '<S19>/Gain'
   */
  -1.0,

  /* Expression: 1.539
   * Referenced by: '<S20>/Constant'
   */
  1.539,

  /* Expression: 2*pi
   * Referenced by: '<S20>/Gain2'
   */
  6.2831853071795862,

  /* Expression: 1
   * Referenced by: '<S20>/Constant1'
   */
  1.0,

  /* Expression: 0.1
   * Referenced by: '<S20>/TargetSlip'
   */
  0.1,

  /* Expression: 9.5493/2
   * Referenced by: '<S20>/Gain3'
   */
  4.77465,

  /* Expression: [21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S20>/1-D Lookup Table'
   */
  { 21.0, 21.0, 21.0, 21.0, 21.0, 21.0, 21.0, 21.0, 21.0, 20.0, 20.0, 19.0, 15.0,
    0.0 },

  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S20>/1-D Lookup Table'
   */
  { 0.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 12000.0, 14000.0, 15000.0,
    16000.0, 17000.0, 18000.0, 20000.0, 22000.0 },

  /* Expression: 11.923
   * Referenced by: '<S20>/GearRatio'
   */
  11.923,

  /* Expression: -1
   * Referenced by: '<S20>/Gain'
   */
  -1.0,

  /* Expression: 1.539
   * Referenced by: '<S21>/Constant'
   */
  1.539,

  /* Expression: 2*pi
   * Referenced by: '<S21>/Gain2'
   */
  6.2831853071795862,

  /* Expression: 1
   * Referenced by: '<S21>/Constant1'
   */
  1.0,

  /* Expression: 0.1
   * Referenced by: '<S21>/TargetSlip'
   */
  0.1,

  /* Expression: 9.5493/2
   * Referenced by: '<S21>/Gain3'
   */
  4.77465,

  /* Expression: [21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S21>/1-D Lookup Table'
   */
  { 21.0, 21.0, 21.0, 21.0, 21.0, 21.0, 21.0, 21.0, 21.0, 20.0, 20.0, 19.0, 15.0,
    0.0 },

  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S21>/1-D Lookup Table'
   */
  { 0.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 12000.0, 14000.0, 15000.0,
    16000.0, 17000.0, 18000.0, 20000.0, 22000.0 },

  /* Expression: 11.923
   * Referenced by: '<S21>/GearRatio'
   */
  11.923,

  /* Expression: -1
   * Referenced by: '<S21>/Gain'
   */
  -1.0,

  /* Expression: 1.539
   * Referenced by: '<S22>/Constant'
   */
  1.539,

  /* Expression: 2*pi
   * Referenced by: '<S22>/Gain2'
   */
  6.2831853071795862,

  /* Expression: 1
   * Referenced by: '<S22>/Constant1'
   */
  1.0,

  /* Expression: 0.1
   * Referenced by: '<S22>/TargetSlip'
   */
  0.1,

  /* Expression: 9.5493/2
   * Referenced by: '<S22>/Gain3'
   */
  4.77465,

  /* Expression: [21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S22>/1-D Lookup Table'
   */
  { 21.0, 21.0, 21.0, 21.0, 21.0, 21.0, 21.0, 21.0, 21.0, 20.0, 20.0, 19.0, 15.0,
    0.0 },

  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S22>/1-D Lookup Table'
   */
  { 0.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 12000.0, 14000.0, 15000.0,
    16000.0, 17000.0, 18000.0, 20000.0, 22000.0 },

  /* Expression: 11.923
   * Referenced by: '<S22>/GearRatio'
   */
  11.923,

  /* Expression: -1
   * Referenced by: '<S22>/Gain'
   */
  -1.0,

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

  /* Expression: 0
   * Referenced by: '<Root>/LaunchMode1'
   */
  0.0,

  /* Expression: 60
   * Referenced by: '<S2>/Launch Control spd limit'
   */
  60.0,

  /* Expression: 0
   * Referenced by: '<S1>/WheelOut.FR.Inert_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/WheelOut.RL.Inert_in'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/WheelOut.RR.Inert_in'
   */
  0.0,

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

  /* Computed Parameter: uDLookupTable1_maxIndex
   * Referenced by: '<S6>/2-D Lookup Table1'
   */
  { 5U, 13U },

  /* Computed Parameter: uDLookupTable1_maxIndex_p
   * Referenced by: '<S7>/2-D Lookup Table1'
   */
  { 5U, 13U },

  /* Computed Parameter: uDLookupTable1_maxIndex_k
   * Referenced by: '<S8>/2-D Lookup Table1'
   */
  { 5U, 13U },

  /* Computed Parameter: uDLookupTable1_maxIndex_a
   * Referenced by: '<S9>/2-D Lookup Table1'
   */
  { 5U, 13U },

  /* Start of '<S9>/If Action Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S17>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S9>/If Action Subsystem1' */

  /* Start of '<S9>/If Action Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S16>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S9>/If Action Subsystem' */

  /* Start of '<S8>/If Action Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S15>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S8>/If Action Subsystem1' */

  /* Start of '<S8>/If Action Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S14>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S8>/If Action Subsystem' */

  /* Start of '<S7>/If Action Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S13>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S7>/If Action Subsystem1' */

  /* Start of '<S7>/If Action Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S12>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S7>/If Action Subsystem' */

  /* Start of '<S6>/If Action Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S11>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S6>/If Action Subsystem1' */

  /* Start of '<S6>/If Action Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S10>/Out1'
     */
    0.0
  }
  /* End of '<S6>/If Action Subsystem' */
};
