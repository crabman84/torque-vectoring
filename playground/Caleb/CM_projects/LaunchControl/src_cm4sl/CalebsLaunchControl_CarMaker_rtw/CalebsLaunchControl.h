/*
 * CalebsLaunchControl.h
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

#ifndef RTW_HEADER_CalebsLaunchControl_h_
#define RTW_HEADER_CalebsLaunchControl_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef CalebsLaunchControl_COMMON_INCLUDES_
# define CalebsLaunchControl_COMMON_INCLUDES_
#include <stdlib.h>
#include <Global.h>
#include <TextUtils.h>
#include <DataDict.h>
#include <DirectVarAccess.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                /* CalebsLaunchControl_COMMON_INCLUDES_ */

#include "CalebsLaunchControl_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->dwork = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->inputs = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->outputs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#define CalebsLaunchControl_M_TYPE     RT_MODEL_CalebsLaunchControl_T

/* Definition required by CarMaker */
#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           0.0002
#endif

/* Block signals for system '<S9>/If Action Subsystem' */
typedef struct {
  real_T In1;                          /* '<S13>/In1' */
} B_IfActionSubsystem_CalebsLaunchControl_T;

/* Block signals (default storage) */
typedef struct {
  real_T Divide2;                      /* '<S2>/Divide2' */
  real_T Divide3;                      /* '<S2>/Divide3' */
  real_T ReadCMDict;                   /* '<S22>/Read CM Dict' */
  real_T ReadCMDict1;                  /* '<S22>/Read CM Dict1' */
  real_T Product2;                     /* '<S22>/Product2' */
  real_T Gain;                         /* '<S22>/Gain' */
  real_T Product3;                     /* '<S22>/Product3' */
  real_T Gain2;                        /* '<S22>/Gain2' */
  real_T ReadCMDict_l;                 /* '<S23>/Read CM Dict' */
  real_T ReadCMDict1_j;                /* '<S23>/Read CM Dict1' */
  real_T Product2_f;                   /* '<S23>/Product2' */
  real_T Gain_h;                       /* '<S23>/Gain' */
  real_T Product3_l;                   /* '<S23>/Product3' */
  real_T Gain2_h;                      /* '<S23>/Gain2' */
  real_T Product1;                     /* '<S9>/Product1' */
  real_T Gain_f;                       /* '<S9>/Gain' */
  real_T Product1_c;                   /* '<S10>/Product1' */
  real_T Gain_b;                       /* '<S10>/Gain' */
  real_T Product1_o;                   /* '<S11>/Product1' */
  real_T Gain_a;                       /* '<S11>/Gain' */
  real_T Product1_l;                   /* '<S12>/Product1' */
  real_T Gain_i;                       /* '<S12>/Gain' */
  B_IfActionSubsystem_CalebsLaunchControl_T IfActionSubsystem1_ci;/* '<S12>/If Action Subsystem1' */
  B_IfActionSubsystem_CalebsLaunchControl_T IfActionSubsystem_d;/* '<S12>/If Action Subsystem' */
  B_IfActionSubsystem_CalebsLaunchControl_T IfActionSubsystem1_l;/* '<S11>/If Action Subsystem1' */
  B_IfActionSubsystem_CalebsLaunchControl_T IfActionSubsystem_g;/* '<S11>/If Action Subsystem' */
  B_IfActionSubsystem_CalebsLaunchControl_T IfActionSubsystem1_c;/* '<S10>/If Action Subsystem1' */
  B_IfActionSubsystem_CalebsLaunchControl_T IfActionSubsystem_c;/* '<S10>/If Action Subsystem' */
  B_IfActionSubsystem_CalebsLaunchControl_T IfActionSubsystem1;/* '<S9>/If Action Subsystem1' */
  B_IfActionSubsystem_CalebsLaunchControl_T IfActionSubsystem;/* '<S9>/If Action Subsystem' */
} B_CalebsLaunchControl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    void *Entry;
  } WriteCMDict_PWORK;                 /* '<Root>/Write CM Dict' */

  struct {
    void *Entry;
  } WriteCMDict1_PWORK;                /* '<Root>/Write CM Dict1' */

  struct {
    void *Entry;
  } ReadCMDict_PWORK;                  /* '<S22>/Read CM Dict' */

  struct {
    void *Entry;
  } ReadCMDict1_PWORK;                 /* '<S22>/Read CM Dict1' */

  struct {
    void *Entry;
  } ReadCMDict_PWORK_e;                /* '<S23>/Read CM Dict' */

  struct {
    void *Entry;
  } ReadCMDict1_PWORK_h;               /* '<S23>/Read CM Dict1' */

  struct {
    int_T Checked;
  } WriteCMDict_IWORK;                 /* '<Root>/Write CM Dict' */

  struct {
    int_T Checked;
  } WriteCMDict1_IWORK;                /* '<Root>/Write CM Dict1' */

  struct {
    int_T Checked;
  } ReadCMDict_IWORK;                  /* '<S22>/Read CM Dict' */

  struct {
    int_T Checked;
  } ReadCMDict1_IWORK;                 /* '<S22>/Read CM Dict1' */

  struct {
    int_T Checked;
  } ReadCMDict_IWORK_i;                /* '<S23>/Read CM Dict' */

  struct {
    int_T Checked;
  } ReadCMDict1_IWORK_k;               /* '<S23>/Read CM Dict1' */
} DW_CalebsLaunchControl_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  cmPowerTrainXWDIn FromCM;            /* '<Root>/FromCM' */
  cmPowerTrainXWDCfgIn CfgInFromCM;    /* '<Root>/CfgInFromCM' */
  cmPowerTrainXWDCfgOut CfgOutFromCM;  /* '<Root>/CfgOutFromCM' */
} ExtU_CalebsLaunchControl_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  cmPowerTrainXWDOut ToCM;             /* '<Root>/ToCM' */
} ExtY_CalebsLaunchControl_T;

/* Parameters for system: '<S9>/If Action Subsystem' */
struct P_IfActionSubsystem_CalebsLaunchControl_T_ {
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S13>/Out1'
                                        */
};

/* Parameters (default storage) */
struct P_CalebsLaunchControl_T_ {
  real_T LC_REVRANGE[10];              /* Variable: LC_REVRANGE
                                        * Referenced by:
                                        *   '<S11>/1-D Lookup Table1'
                                        *   '<S12>/1-D Lookup Table1'
                                        */
  real_T MotorData[84];                /* Variable: MotorData
                                        * Referenced by:
                                        *   '<S9>/2-D Lookup Table1'
                                        *   '<S10>/2-D Lookup Table1'
                                        *   '<S11>/2-D Lookup Table1'
                                        *   '<S12>/2-D Lookup Table1'
                                        *   '<S22>/2-D Lookup Table'
                                        *   '<S22>/2-D Lookup Table1'
                                        *   '<S23>/2-D Lookup Table'
                                        *   '<S23>/2-D Lookup Table1'
                                        */
  real_T RPM_RANGE[14];                /* Variable: RPM_RANGE
                                        * Referenced by:
                                        *   '<S9>/1-D Lookup Table1'
                                        *   '<S9>/2-D Lookup Table1'
                                        *   '<S10>/1-D Lookup Table1'
                                        *   '<S10>/2-D Lookup Table1'
                                        *   '<S11>/2-D Lookup Table1'
                                        *   '<S12>/2-D Lookup Table1'
                                        *   '<S22>/2-D Lookup Table'
                                        *   '<S22>/2-D Lookup Table1'
                                        *   '<S23>/2-D Lookup Table'
                                        *   '<S23>/2-D Lookup Table1'
                                        */
  real_T TC_MODE_ONE[10];              /* Variable: TC_MODE_ONE
                                        * Referenced by:
                                        *   '<S11>/1-D Lookup Table1'
                                        *   '<S12>/1-D Lookup Table1'
                                        */
  real_T TC_MODE_ONE_FRONT[14];        /* Variable: TC_MODE_ONE_FRONT
                                        * Referenced by:
                                        *   '<S9>/1-D Lookup Table1'
                                        *   '<S10>/1-D Lookup Table1'
                                        */
  real_T ThrottleOpening[6];           /* Variable: ThrottleOpening
                                        * Referenced by:
                                        *   '<S9>/2-D Lookup Table1'
                                        *   '<S10>/2-D Lookup Table1'
                                        *   '<S11>/2-D Lookup Table1'
                                        *   '<S12>/2-D Lookup Table1'
                                        *   '<S22>/2-D Lookup Table'
                                        *   '<S22>/2-D Lookup Table1'
                                        *   '<S23>/2-D Lookup Table'
                                        *   '<S23>/2-D Lookup Table1'
                                        */
  real_T FLtrq_Y0;                     /* Computed Parameter: FLtrq_Y0
                                        * Referenced by: '<S6>/FL trq'
                                        */
  real_T FLtrqinv_Y0;                  /* Computed Parameter: FLtrqinv_Y0
                                        * Referenced by: '<S6>/FL trq inv'
                                        */
  real_T FRtrq_Y0;                     /* Computed Parameter: FRtrq_Y0
                                        * Referenced by: '<S6>/FR trq'
                                        */
  real_T FRtrqinv_Y0;                  /* Computed Parameter: FRtrqinv_Y0
                                        * Referenced by: '<S6>/FR trq inv'
                                        */
  real_T RLtrq_Y0;                     /* Computed Parameter: RLtrq_Y0
                                        * Referenced by: '<S6>/RL trq'
                                        */
  real_T RLtrqinv_Y0;                  /* Computed Parameter: RLtrqinv_Y0
                                        * Referenced by: '<S6>/RL trq inv'
                                        */
  real_T RRtrq_Y0;                     /* Computed Parameter: RRtrq_Y0
                                        * Referenced by: '<S6>/RR trq'
                                        */
  real_T RRtrqinv_Y0;                  /* Computed Parameter: RRtrqinv_Y0
                                        * Referenced by: '<S6>/RR trq inv'
                                        */
  real_T GearRatio2_Value;             /* Expression: 11.923
                                        * Referenced by: '<S9>/GearRatio2'
                                        */
  real_T Gain3_Gain;                   /* Expression: 60/(2*pi)
                                        * Referenced by: '<S9>/Gain3'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S9>/Gain'
                                        */
  real_T GearRatio2_Value_e;           /* Expression: 11.923
                                        * Referenced by: '<S10>/GearRatio2'
                                        */
  real_T Gain3_Gain_m;                 /* Expression: 60/(2*pi)
                                        * Referenced by: '<S10>/Gain3'
                                        */
  real_T Gain_Gain_k;                  /* Expression: -1
                                        * Referenced by: '<S10>/Gain'
                                        */
  real_T GearRatio2_Value_j;           /* Expression: 11.923
                                        * Referenced by: '<S11>/GearRatio2'
                                        */
  real_T Gain3_Gain_d;                 /* Expression: 60/(2*pi)
                                        * Referenced by: '<S11>/Gain3'
                                        */
  real_T Gain_Gain_o;                  /* Expression: -1
                                        * Referenced by: '<S11>/Gain'
                                        */
  real_T GearRatio2_Value_f;           /* Expression: 11.923
                                        * Referenced by: '<S12>/GearRatio2'
                                        */
  real_T Gain3_Gain_h;                 /* Expression: 60/(2*pi)
                                        * Referenced by: '<S12>/Gain3'
                                        */
  real_T Gain_Gain_h;                  /* Expression: -1
                                        * Referenced by: '<S12>/Gain'
                                        */
  real_T FLtrq_Y0_l;                   /* Computed Parameter: FLtrq_Y0_l
                                        * Referenced by: '<S7>/FL trq'
                                        */
  real_T FLtrqinv_Y0_f;                /* Computed Parameter: FLtrqinv_Y0_f
                                        * Referenced by: '<S7>/FL trq inv'
                                        */
  real_T FRtrq_Y0_b;                   /* Computed Parameter: FRtrq_Y0_b
                                        * Referenced by: '<S7>/FR trq'
                                        */
  real_T FRtrqinv_Y0_a;                /* Computed Parameter: FRtrqinv_Y0_a
                                        * Referenced by: '<S7>/FR trq inv'
                                        */
  real_T RLtrq_Y0_a;                   /* Computed Parameter: RLtrq_Y0_a
                                        * Referenced by: '<S7>/RL trq'
                                        */
  real_T RLtrqinv_Y0_l;                /* Computed Parameter: RLtrqinv_Y0_l
                                        * Referenced by: '<S7>/RL trq inv'
                                        */
  real_T RRtrq_Y0_d;                   /* Computed Parameter: RRtrq_Y0_d
                                        * Referenced by: '<S7>/RR trq'
                                        */
  real_T RRtrqinv_Y0_a;                /* Computed Parameter: RRtrqinv_Y0_a
                                        * Referenced by: '<S7>/RR trq inv'
                                        */
  real_T GearRatio_Value;              /* Expression: 11.923
                                        * Referenced by: '<S22>/GearRatio'
                                        */
  real_T Gain1_Gain;                   /* Expression: 60/(2*pi)
                                        * Referenced by: '<S22>/Gain1'
                                        */
  real_T Gain3_Gain_k;                 /* Expression: 60/(2*pi)
                                        * Referenced by: '<S22>/Gain3'
                                        */
  real_T Gain_Gain_k0;                 /* Expression: -1
                                        * Referenced by: '<S22>/Gain'
                                        */
  real_T Gain2_Gain;                   /* Expression: -1
                                        * Referenced by: '<S22>/Gain2'
                                        */
  real_T GearRatio_Value_p;            /* Expression: 11.923
                                        * Referenced by: '<S23>/GearRatio'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: 60/(2*pi)
                                        * Referenced by: '<S23>/Gain1'
                                        */
  real_T Gain3_Gain_j;                 /* Expression: 60/(2*pi)
                                        * Referenced by: '<S23>/Gain3'
                                        */
  real_T Gain_Gain_l;                  /* Expression: -1
                                        * Referenced by: '<S23>/Gain'
                                        */
  real_T Gain2_Gain_d;                 /* Expression: -1
                                        * Referenced by: '<S23>/Gain2'
                                        */
  real_T Gain2_Gain_m;                 /* Expression: 0.5
                                        * Referenced by: '<S2>/Gain2'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1/(2*pi)
                                        * Referenced by: '<S2>/Gain4'
                                        */
  real_T Constant_Value;               /* Expression: 1.539
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T Gain3_Gain_mu;                /* Expression: 0.5
                                        * Referenced by: '<S2>/Gain3'
                                        */
  real_T Gain1_Gain_l;                 /* Expression: 1/(2*pi)
                                        * Referenced by: '<S2>/Gain1'
                                        */
  real_T ECU_Status_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/ECU_Status'
                                        */
  real_T EngineOutEngine_on_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/EngineOut.Engine_on'
                                        */
  real_T EngineOutrotv_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/EngineOut.rotv'
                                        */
  real_T EngineOutTrq_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/EngineOut.Trq'
                                        */
  real_T EngineOutTrqDrag_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/EngineOut.TrqDrag'
                                        */
  real_T EngineOutTrqFull_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/EngineOut.TrqFull'
                                        */
  real_T EngineOutTrqOpt_Value;        /* Expression: 0
                                        * Referenced by: '<S1>/EngineOut.TrqOpt'
                                        */
  real_T EngineOutFuelFlow_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/EngineOut.FuelFlow'
                                        */
  real_T MCU_Status_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/MCU_Status'
                                        */
  real_T ISGOutrotv_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/ISGOut.rotv'
                                        */
  real_T ISGOutTrq_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/ISGOut.Trq'
                                        */
  real_T ISGOutTrqMot_max_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/ISGOut.TrqMot_max'
                                        */
  real_T ISGOutTrqGen_max_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/ISGOut.TrqGen_max'
                                        */
  real_T ISGOutPwrElec_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/ISGOut.PwrElec'
                                        */
  real_T ISGOuti_M2WFL_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/ISGOut.i_M2W.FL'
                                        */
  real_T ISGOuti_M2WFR_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/ISGOut.i_M2W.FR'
                                        */
  real_T ISGOuti_M2WRL_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/ISGOut.i_M2W.RL'
                                        */
  real_T ISGOuti_M2WRR_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/ISGOut.i_M2W.RR'
                                        */
  real_T MotorOutm0rotv_Value;         /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m0.rotv'
                                        */
  real_T MotorOutm0Trq_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m0.Trq'
                                        */
  real_T MotorOutm0TrqMot_max_Value;   /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m0.TrqMot_max'
                                        */
  real_T MotorOutm0TrqGen_max_Value;   /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m0.TrqGen_max'
                                        */
  real_T MotorOutm0PwrElec_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m0.PwrElec'
                                        */
  real_T MotorOutm0i_M2WFL_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m0.i_M2W.FL'
                                        */
  real_T MotorOutm0i_M2WFR_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m0.i_M2W.FR'
                                        */
  real_T MotorOutm0i_M2WRL_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m0.i_M2W.RL'
                                        */
  real_T MotorOutm0i_M2WRR_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m0.i_M2W.RR'
                                        */
  real_T MotorOutm1rotv_Value;         /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m1.rotv'
                                        */
  real_T MotorOutm1Trq_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m1.Trq'
                                        */
  real_T MotorOutm1TrqMot_max_Value;   /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m1.TrqMot_max'
                                        */
  real_T MotorOutm1TrqGen_max_Value;   /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m1.TrqGen_max'
                                        */
  real_T MotorOutm1PwrElec_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m1.PwrElec'
                                        */
  real_T MotorOutm1i_M2WFL_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m1.i_M2W.FL'
                                        */
  real_T MotorOutm1i_M2WFR_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m1.i_M2W.FR'
                                        */
  real_T MotorOutm1i_M2WRL_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m1.i_M2W.RL'
                                        */
  real_T MotorOutm1i_M2WRR_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m1.i_M2W.RR'
                                        */
  real_T MotorOutm2rotv_Value;         /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m2.rotv'
                                        */
  real_T MotorOutm2Trq_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m2.Trq'
                                        */
  real_T MotorOutm2TrqMot_max_Value;   /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m2.TrqMot_max'
                                        */
  real_T MotorOutm2TrqGen_max_Value;   /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m2.TrqGen_max'
                                        */
  real_T MotorOutm2PwrElec_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m2.PwrElec'
                                        */
  real_T MotorOutm2i_M2WFL_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m2.i_M2W.FL'
                                        */
  real_T MotorOutm2i_M2WFR_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m2.i_M2W.FR'
                                        */
  real_T MotorOutm2i_M2WRL_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m2.i_M2W.RL'
                                        */
  real_T MotorOutm2i_M2WRR_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m2.i_M2W.RR'
                                        */
  real_T MotorOutm3rotv_Value;         /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m3.rotv'
                                        */
  real_T MotorOutm3Trq_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m3.Trq'
                                        */
  real_T MotorOutm3TrqMot_max_Value;   /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m3.TrqMot_max'
                                        */
  real_T MotorOutm3TrqGen_max_Value;   /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m3.TrqGen_max'
                                        */
  real_T MotorOutm3PwrElec_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m3.PwrElec'
                                        */
  real_T MotorOutm3i_M2WFL_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m3.i_M2W.FL'
                                        */
  real_T MotorOutm3i_M2WFR_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m3.i_M2W.FR'
                                        */
  real_T MotorOutm3i_M2WRL_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m3.i_M2W.RL'
                                        */
  real_T MotorOutm3i_M2WRR_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/MotorOut.m3.i_M2W.RR'
                                        */
  real_T TCU_Status_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/TCU_Status'
                                        */
  real_T ClutchOutPos_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/ClutchOut.Pos'
                                        */
  real_T ClutchOutrotv_in_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/ClutchOut.rotv_in'
                                        */
  real_T ClutchOutrotv_out_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/ClutchOut.rotv_out'
                                        */
  real_T ClutchOutTrq_in_Value;        /* Expression: 0
                                        * Referenced by: '<S1>/ClutchOut.Trq_in'
                                        */
  real_T ClutchOutTrq_out_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/ClutchOut.Trq_out'
                                        */
  real_T ClutchOuti_TrqIn2Out_Value;   /* Expression: 0
                                        * Referenced by: '<S1>/ClutchOut.i_TrqIn2Out'
                                        */
  real_T GearBoxOutGearNo_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/GearBoxOut.GearNo'
                                        */
  real_T GearBoxOutGearNo_dis_Value;   /* Expression: 0
                                        * Referenced by: '<S1>/GearBoxOut.GearNo_dis'
                                        */
  real_T GearBoxOutTrq_DriveSrc_trg_Value;/* Expression: 0
                                           * Referenced by: '<S1>/GearBoxOut.Trq_DriveSrc_trg'
                                           */
  real_T GearBoxOuti_Value;            /* Expression: 0
                                        * Referenced by: '<S1>/GearBoxOut.i'
                                        */
  real_T GearBoxOutrotv_in_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/GearBoxOut.rotv_in'
                                        */
  real_T GearBoxOutrotv_out_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/GearBoxOut.rotv_out'
                                        */
  real_T GearBoxOutTrq_in_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/GearBoxOut.Trq_in'
                                        */
  real_T GearBoxOutTrq_out_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/GearBoxOut.Trq_out'
                                        */
  real_T GearBoxOutClutchPos_Value;    /* Expression: 0
                                        * Referenced by: '<S1>/GearBoxOut.Clutch.Pos'
                                        */
  real_T GearBoxOutClutchrotv_in_Value;/* Expression: 0
                                        * Referenced by: '<S1>/GearBoxOut.Clutch.rotv_in'
                                        */
  real_T GearBoxOutClutchrotv_out_Value;/* Expression: 0
                                         * Referenced by: '<S1>/GearBoxOut.Clutch.rotv_out'
                                         */
  real_T GearBoxOutClutchTrq_in_Value; /* Expression: 0
                                        * Referenced by: '<S1>/GearBoxOut.Clutch.Trq_in'
                                        */
  real_T GearBoxOutClutchTrq_out_Value;/* Expression: 0
                                        * Referenced by: '<S1>/GearBoxOut.Clutch.Trq_out'
                                        */
  real_T GearBoxOutClutchi_TrqIn2Out_Value;/* Expression: 0
                                            * Referenced by: '<S1>/GearBoxOut.Clutch.i_TrqIn2Out'
                                            */
  real_T GearBoxOutClutch_disPos_Value;/* Expression: 0
                                        * Referenced by: '<S1>/GearBoxOut.Clutch_dis.Pos'
                                        */
  real_T GearBoxOutClutch_disrotv_in_Value;/* Expression: 0
                                            * Referenced by: '<S1>/GearBoxOut.Clutch_dis.rotv_in'
                                            */
  real_T GearBoxOutClutch_disrotv_out_Value;/* Expression: 0
                                             * Referenced by: '<S1>/GearBoxOut.Clutch_dis.rotv_out'
                                             */
  real_T GearBoxOutClutch_disTrq_in_Value;/* Expression: 0
                                           * Referenced by: '<S1>/GearBoxOut.Clutch_dis.Trq_in'
                                           */
  real_T GearBoxOutClutch_disTrq_out_Value;/* Expression: 0
                                            * Referenced by: '<S1>/GearBoxOut.Clutch_dis.Trq_out'
                                            */
  real_T GearBoxOutClutch_disi_TrqIn2Out_Value;/* Expression: 0
                                                * Referenced by: '<S1>/GearBoxOut.Clutch_dis.i_TrqIn2Out'
                                                */
  real_T GearBoxM_OutGB_m0GearNo_Value;/* Expression: 0
                                        * Referenced by: '<S1>/GearBoxM_Out.GB_m0.GearNo'
                                        */
  real_T GearBoxM_OutGB_m0GearNo_dis_Value;/* Expression: 0
                                            * Referenced by: '<S1>/GearBoxM_Out.GB_m0.GearNo_dis'
                                            */
  real_T GearBoxM_OutGB_m0Trq_DriveSrc_trg_Value;/* Expression: 0
                                                  * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Trq_DriveSrc_trg'
                                                  */
  real_T GearBoxM_OutGB_m0i_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/GearBoxM_Out.GB_m0.i'
                                        */
  real_T GearBoxM_OutGB_m0rotv_in_Value;/* Expression: 0
                                         * Referenced by: '<S1>/GearBoxM_Out.GB_m0.rotv_in'
                                         */
  real_T GearBoxM_OutGB_m0rotv_out_Value;/* Expression: 0
                                          * Referenced by: '<S1>/GearBoxM_Out.GB_m0.rotv_out'
                                          */
  real_T GearBoxM_OutGB_m0Trq_in_Value;/* Expression: 0
                                        * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Trq_in'
                                        */
  real_T GearBoxM_OutGB_m0Trq_out_Value;/* Expression: 0
                                         * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Trq_out'
                                         */
  real_T GearBoxM_OutGB_m0ClutchPos_Value;/* Expression: 0
                                           * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch.Pos'
                                           */
  real_T GearBoxM_OutGB_m0Clutchrotv_in_Value;/* Expression: 0
                                               * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch.rotv_in'
                                               */
  real_T GearBoxM_OutGB_m0Clutchrotv_out_Value;/* Expression: 0
                                                * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch.rotv_out'
                                                */
  real_T GearBoxM_OutGB_m0ClutchTrq_in_Value;/* Expression: 0
                                              * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch.Trq_in'
                                              */
  real_T GearBoxM_OutGB_m0ClutchTrq_out_Value;/* Expression: 0
                                               * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch.Trq_out'
                                               */
  real_T GearBoxM_OutGB_m0Clutchi_TrqIn2Out_Value;/* Expression: 0
                                                   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch.i_TrqIn2Out'
                                                   */
  real_T GearBoxM_OutGB_m0Clutch_disPos_Value;/* Expression: 0
                                               * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.Pos'
                                               */
  real_T GearBoxM_OutGB_m0Clutch_disrotv_in_Value;/* Expression: 0
                                                   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.rotv_in'
                                                   */
  real_T GearBoxM_OutGB_m0Clutch_disrotv_out_Value;/* Expression: 0
                                                    * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.rotv_out'
                                                    */
  real_T GearBoxM_OutGB_m0Clutch_disTrq_in_Value;/* Expression: 0
                                                  * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.Trq_in'
                                                  */
  real_T GearBoxM_OutGB_m0Clutch_disTrq_out_Value;/* Expression: 0
                                                   * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.Trq_out'
                                                   */
  real_T GearBoxM_OutGB_m0Clutch_disi_TrqIn2Out_Value;/* Expression: 0
                                                       * Referenced by: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.i_TrqIn2Out'
                                                       */
  real_T GearBoxM_OutGB_m1GearNo_Value;/* Expression: 0
                                        * Referenced by: '<S1>/GearBoxM_Out.GB_m1.GearNo'
                                        */
  real_T GearBoxM_OutGB_m1GearNo_dis_Value;/* Expression: 0
                                            * Referenced by: '<S1>/GearBoxM_Out.GB_m1.GearNo_dis'
                                            */
  real_T GearBoxM_OutGB_m1Trq_DriveSrc_trg_Value;/* Expression: 0
                                                  * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Trq_DriveSrc_trg'
                                                  */
  real_T GearBoxM_OutGB_m1i_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/GearBoxM_Out.GB_m1.i'
                                        */
  real_T GearBoxM_OutGB_m1rotv_in_Value;/* Expression: 0
                                         * Referenced by: '<S1>/GearBoxM_Out.GB_m1.rotv_in'
                                         */
  real_T GearBoxM_OutGB_m1rotv_out_Value;/* Expression: 0
                                          * Referenced by: '<S1>/GearBoxM_Out.GB_m1.rotv_out'
                                          */
  real_T GearBoxM_OutGB_m1Trq_in_Value;/* Expression: 0
                                        * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Trq_in'
                                        */
  real_T GearBoxM_OutGB_m1Trq_out_Value;/* Expression: 0
                                         * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Trq_out'
                                         */
  real_T GearBoxM_OutGB_m1ClutchPos_Value;/* Expression: 0
                                           * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch.Pos'
                                           */
  real_T GearBoxM_OutGB_m1Clutchrotv_in_Value;/* Expression: 0
                                               * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch.rotv_in'
                                               */
  real_T GearBoxM_OutGB_m1Clutchrotv_out_Value;/* Expression: 0
                                                * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch.rotv_out'
                                                */
  real_T GearBoxM_OutGB_m1ClutchTrq_in_Value;/* Expression: 0
                                              * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch.Trq_in'
                                              */
  real_T GearBoxM_OutGB_m1ClutchTrq_out_Value;/* Expression: 0
                                               * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch.Trq_out'
                                               */
  real_T GearBoxM_OutGB_m1Clutchi_TrqIn2Out_Value;/* Expression: 0
                                                   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch.i_TrqIn2Out'
                                                   */
  real_T GearBoxM_OutGB_m1Clutch_disPos_Value;/* Expression: 0
                                               * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.Pos'
                                               */
  real_T GearBoxM_OutGB_m1Clutch_disrotv_in_Value;/* Expression: 0
                                                   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.rotv_in'
                                                   */
  real_T GearBoxM_OutGB_m1Clutch_disrotv_out_Value;/* Expression: 0
                                                    * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.rotv_out'
                                                    */
  real_T GearBoxM_OutGB_m1Clutch_disTrq_in_Value;/* Expression: 0
                                                  * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.Trq_in'
                                                  */
  real_T GearBoxM_OutGB_m1Clutch_disTrq_out_Value;/* Expression: 0
                                                   * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.Trq_out'
                                                   */
  real_T GearBoxM_OutGB_m1Clutch_disi_TrqIn2Out_Value;/* Expression: 0
                                                       * Referenced by: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.i_TrqIn2Out'
                                                       */
  real_T GearBoxM_OutGB_m2GearNo_Value;/* Expression: 0
                                        * Referenced by: '<S1>/GearBoxM_Out.GB_m2.GearNo'
                                        */
  real_T GearBoxM_OutGB_m2GearNo_dis_Value;/* Expression: 0
                                            * Referenced by: '<S1>/GearBoxM_Out.GB_m2.GearNo_dis'
                                            */
  real_T GearBoxM_OutGB_m2Trq_DriveSrc_trg_Value;/* Expression: 0
                                                  * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Trq_DriveSrc_trg'
                                                  */
  real_T GearBoxM_OutGB_m2i_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/GearBoxM_Out.GB_m2.i'
                                        */
  real_T GearBoxM_OutGB_m2rotv_in_Value;/* Expression: 0
                                         * Referenced by: '<S1>/GearBoxM_Out.GB_m2.rotv_in'
                                         */
  real_T GearBoxM_OutGB_m2rotv_out_Value;/* Expression: 0
                                          * Referenced by: '<S1>/GearBoxM_Out.GB_m2.rotv_out'
                                          */
  real_T GearBoxM_OutGB_m2Trq_in_Value;/* Expression: 0
                                        * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Trq_in'
                                        */
  real_T GearBoxM_OutGB_m2Trq_out_Value;/* Expression: 0
                                         * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Trq_out'
                                         */
  real_T GearBoxM_OutGB_m2ClutchPos_Value;/* Expression: 0
                                           * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch.Pos'
                                           */
  real_T GearBoxM_OutGB_m2Clutchrotv_in_Value;/* Expression: 0
                                               * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch.rotv_in'
                                               */
  real_T GearBoxM_OutGB_m2Clutchrotv_out_Value;/* Expression: 0
                                                * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch.rotv_out'
                                                */
  real_T GearBoxM_OutGB_m2ClutchTrq_in_Value;/* Expression: 0
                                              * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch.Trq_in'
                                              */
  real_T GearBoxM_OutGB_m2ClutchTrq_out_Value;/* Expression: 0
                                               * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch.Trq_out'
                                               */
  real_T GearBoxM_OutGB_m2Clutchi_TrqIn2Out_Value;/* Expression: 0
                                                   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch.i_TrqIn2Out'
                                                   */
  real_T GearBoxM_OutGB_m2Clutch_disPos_Value;/* Expression: 0
                                               * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.Pos'
                                               */
  real_T GearBoxM_OutGB_m2Clutch_disrotv_in_Value;/* Expression: 0
                                                   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.rotv_in'
                                                   */
  real_T GearBoxM_OutGB_m2Clutch_disrotv_out_Value;/* Expression: 0
                                                    * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.rotv_out'
                                                    */
  real_T GearBoxM_OutGB_m2Clutch_disTrq_in_Value;/* Expression: 0
                                                  * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.Trq_in'
                                                  */
  real_T GearBoxM_OutGB_m2Clutch_disTrq_out_Value;/* Expression: 0
                                                   * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.Trq_out'
                                                   */
  real_T GearBoxM_OutGB_m2Clutch_disi_TrqIn2Out_Value;/* Expression: 0
                                                       * Referenced by: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.i_TrqIn2Out'
                                                       */
  real_T GearBoxM_OutGB_m3GearNo_Value;/* Expression: 0
                                        * Referenced by: '<S1>/GearBoxM_Out.GB_m3.GearNo'
                                        */
  real_T GearBoxM_OutGB_m3GearNo_dis_Value;/* Expression: 0
                                            * Referenced by: '<S1>/GearBoxM_Out.GB_m3.GearNo_dis'
                                            */
  real_T GearBoxM_OutGB_m3Trq_DriveSrc_trg_Value;/* Expression: 0
                                                  * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Trq_DriveSrc_trg'
                                                  */
  real_T GearBoxM_OutGB_m3i_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/GearBoxM_Out.GB_m3.i'
                                        */
  real_T GearBoxM_OutGB_m3rotv_in_Value;/* Expression: 0
                                         * Referenced by: '<S1>/GearBoxM_Out.GB_m3.rotv_in'
                                         */
  real_T GearBoxM_OutGB_m3rotv_out_Value;/* Expression: 0
                                          * Referenced by: '<S1>/GearBoxM_Out.GB_m3.rotv_out'
                                          */
  real_T GearBoxM_OutGB_m3Trq_in_Value;/* Expression: 0
                                        * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Trq_in'
                                        */
  real_T GearBoxM_OutGB_m3Trq_out_Value;/* Expression: 0
                                         * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Trq_out'
                                         */
  real_T GearBoxM_OutGB_m3ClutchPos_Value;/* Expression: 0
                                           * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch.Pos'
                                           */
  real_T GearBoxM_OutGB_m3Clutchrotv_in_Value;/* Expression: 0
                                               * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch.rotv_in'
                                               */
  real_T GearBoxM_OutGB_m3Clutchrotv_out_Value;/* Expression: 0
                                                * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch.rotv_out'
                                                */
  real_T GearBoxM_OutGB_m3ClutchTrq_in_Value;/* Expression: 0
                                              * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch.Trq_in'
                                              */
  real_T GearBoxM_OutGB_m3ClutchTrq_out_Value;/* Expression: 0
                                               * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch.Trq_out'
                                               */
  real_T GearBoxM_OutGB_m3Clutchi_TrqIn2Out_Value;/* Expression: 0
                                                   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch.i_TrqIn2Out'
                                                   */
  real_T GearBoxM_OutGB_m3Clutch_disPos_Value;/* Expression: 0
                                               * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.Pos'
                                               */
  real_T GearBoxM_OutGB_m3Clutch_disrotv_in_Value;/* Expression: 0
                                                   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.rotv_in'
                                                   */
  real_T GearBoxM_OutGB_m3Clutch_disrotv_out_Value;/* Expression: 0
                                                    * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.rotv_out'
                                                    */
  real_T GearBoxM_OutGB_m3Clutch_disTrq_in_Value;/* Expression: 0
                                                  * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.Trq_in'
                                                  */
  real_T GearBoxM_OutGB_m3Clutch_disTrq_out_Value;/* Expression: 0
                                                   * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.Trq_out'
                                                   */
  real_T GearBoxM_OutGB_m3Clutch_disi_TrqIn2Out_Value;/* Expression: 0
                                                       * Referenced by: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.i_TrqIn2Out'
                                                       */
  real_T BCU_Status_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/BCU_Status'
                                        */
  real_T BattLVOutSOC_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/BattLVOut.SOC'
                                        */
  real_T BattLVOutSOH_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/BattLVOut.SOH'
                                        */
  real_T BattLVOutCurrent_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/BattLVOut.Current'
                                        */
  real_T BattLVOutAOC_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/BattLVOut.AOC'
                                        */
  real_T BattLVOutTemp_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/BattLVOut.Temp'
                                        */
  real_T BattLVOutEnergy_Value;        /* Expression: 0
                                        * Referenced by: '<S1>/BattLVOut.Energy'
                                        */
  real_T BattLVOutPwr_max_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/BattLVOut.Pwr_max'
                                        */
  real_T BattHVOutSOC_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/BattHVOut.SOC'
                                        */
  real_T BattHVOutSOH_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/BattHVOut.SOH'
                                        */
  real_T BattHVOutCurrent_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/BattHVOut.Current'
                                        */
  real_T BattHVOutAOC_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/BattHVOut.AOC'
                                        */
  real_T BattHVOutTemp_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/BattHVOut.Temp'
                                        */
  real_T BattHVOutEnergy_Value;        /* Expression: 0
                                        * Referenced by: '<S1>/BattHVOut.Energy'
                                        */
  real_T BattHVOutPwr_max_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/BattHVOut.Pwr_max'
                                        */
  real_T PwrSupplyOutPwr_LV_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/PwrSupplyOut.Pwr_LV'
                                        */
  real_T PwrSupplyOutPwr_HV1_Value;    /* Expression: 0
                                        * Referenced by: '<S1>/PwrSupplyOut.Pwr_HV1'
                                        */
  real_T PwrSupplyOutPwr_HV2_Value;    /* Expression: 0
                                        * Referenced by: '<S1>/PwrSupplyOut.Pwr_HV2'
                                        */
  real_T PwrSupplyOutVoltage_LV_Value; /* Expression: 0
                                        * Referenced by: '<S1>/PwrSupplyOut.Voltage_LV'
                                        */
  real_T PwrSupplyOutVoltage_HV1_Value;/* Expression: 0
                                        * Referenced by: '<S1>/PwrSupplyOut.Voltage_HV1'
                                        */
  real_T PwrSupplyOutVoltage_HV2_Value;/* Expression: 0
                                        * Referenced by: '<S1>/PwrSupplyOut.Voltage_HV2'
                                        */
  real_T PwrSupplyOutPwr_HV1toLV_Value;/* Expression: 0
                                        * Referenced by: '<S1>/PwrSupplyOut.Pwr_HV1toLV'
                                        */
  real_T PwrSupplyOutPwr_HV1toHV2_Value;/* Expression: 0
                                         * Referenced by: '<S1>/PwrSupplyOut.Pwr_HV1toHV2'
                                         */
  real_T PwrSupplyOutPwr_HV1toLV_max_Value;/* Expression: 0
                                            * Referenced by: '<S1>/PwrSupplyOut.Pwr_HV1toLV_max'
                                            */
  real_T PwrSupplyOutPwr_HV1toHV2_max_Value;/* Expression: 0
                                             * Referenced by: '<S1>/PwrSupplyOut.Pwr_HV1toHV2_max'
                                             */
  real_T PwrSupplyOutEta_HV1toLV_Value;/* Expression: 0
                                        * Referenced by: '<S1>/PwrSupplyOut.Eta_HV1toLV'
                                        */
  real_T PwrSupplyOutEta_HV1toHV2_Value;/* Expression: 0
                                         * Referenced by: '<S1>/PwrSupplyOut.Eta_HV1toHV2'
                                         */
  real_T Trq_Supp2Bdy1rx_Value;        /* Expression: 0
                                        * Referenced by: '<S1>/Trq_Supp2Bdy1.rx'
                                        */
  real_T Trq_Supp2Bdy1ry_Value;        /* Expression: 0
                                        * Referenced by: '<S1>/Trq_Supp2Bdy1.ry'
                                        */
  real_T Trq_Supp2Bdy1rz_Value;        /* Expression: 0
                                        * Referenced by: '<S1>/Trq_Supp2Bdy1.rz'
                                        */
  real_T Trq_Supp2Bdy1Brx_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/Trq_Supp2Bdy1B.rx'
                                        */
  real_T Trq_Supp2Bdy1Bry_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/Trq_Supp2Bdy1B.ry'
                                        */
  real_T Trq_Supp2Bdy1Brz_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/Trq_Supp2Bdy1B.rz'
                                        */
  real_T Trq_Supp2BdyEngrx_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/Trq_Supp2BdyEng.rx'
                                        */
  real_T Trq_Supp2BdyEngry_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/Trq_Supp2BdyEng.ry'
                                        */
  real_T DL_iDiff_mean_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/DL_iDiff_mean'
                                        */
  real_T WheelOutFLInert_in_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/WheelOut.FL.Inert_in'
                                        */
  real_T LaunchMode_Value;             /* Expression: 1
                                        * Referenced by: '<Root>/LaunchMode'
                                        */
  real_T LaunchControlspdlimit_Value;  /* Expression: 60
                                        * Referenced by: '<S3>/Launch Control spd limit'
                                        */
  real_T Constant_Value_d;             /* Expression: 0.6
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T WheelOutFRInert_in_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/WheelOut.FR.Inert_in'
                                        */
  real_T WheelOutRLInert_in_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/WheelOut.RL.Inert_in'
                                        */
  real_T WheelOutRRInert_in_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/WheelOut.RR.Inert_in'
                                        */
  real_T PowerDeltaPlanetGear_Value;   /* Expression: 0
                                        * Referenced by: '<S1>/PowerDelta.PlanetGear'
                                        */
  real_T PowerDeltaDiffs_Value;        /* Expression: 0
                                        * Referenced by: '<S1>/PowerDelta.Diffs'
                                        */
  real_T PowerDeltaShafts_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/PowerDelta.Shafts'
                                        */
  real_T PowerDeltaSpring_DL_Value;    /* Expression: 0
                                        * Referenced by: '<S1>/PowerDelta.Spring_DL'
                                        */
  real_T PowerDeltaInert_DL_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/PowerDelta.Inert_DL'
                                        */
  real_T PowerDeltaInert_Value;        /* Expression: 0
                                        * Referenced by: '<S1>/PowerDelta.Inert'
                                        */
  real_T PowerDeltaPowerSupply_Value;  /* Expression: 0
                                        * Referenced by: '<S1>/PowerDelta.PowerSupply'
                                        */
  uint32_T uDLookupTable1_maxIndex[2];
                                  /* Computed Parameter: uDLookupTable1_maxIndex
                                   * Referenced by: '<S9>/2-D Lookup Table1'
                                   */
  uint32_T uDLookupTable1_maxIndex_n[2];
                                /* Computed Parameter: uDLookupTable1_maxIndex_n
                                 * Referenced by: '<S10>/2-D Lookup Table1'
                                 */
  uint32_T uDLookupTable1_maxIndex_o[2];
                                /* Computed Parameter: uDLookupTable1_maxIndex_o
                                 * Referenced by: '<S11>/2-D Lookup Table1'
                                 */
  uint32_T uDLookupTable1_maxIndex_a[2];
                                /* Computed Parameter: uDLookupTable1_maxIndex_a
                                 * Referenced by: '<S12>/2-D Lookup Table1'
                                 */
  uint32_T uDLookupTable_maxIndex[2];
                                   /* Computed Parameter: uDLookupTable_maxIndex
                                    * Referenced by: '<S22>/2-D Lookup Table'
                                    */
  uint32_T uDLookupTable1_maxIndex_j[2];
                                /* Computed Parameter: uDLookupTable1_maxIndex_j
                                 * Referenced by: '<S22>/2-D Lookup Table1'
                                 */
  uint32_T uDLookupTable_maxIndex_a[2];
                                 /* Computed Parameter: uDLookupTable_maxIndex_a
                                  * Referenced by: '<S23>/2-D Lookup Table'
                                  */
  uint32_T uDLookupTable1_maxIndex_m[2];
                                /* Computed Parameter: uDLookupTable1_maxIndex_m
                                 * Referenced by: '<S23>/2-D Lookup Table1'
                                 */
  P_IfActionSubsystem_CalebsLaunchControl_T IfActionSubsystem1_ci;/* '<S12>/If Action Subsystem1' */
  P_IfActionSubsystem_CalebsLaunchControl_T IfActionSubsystem_d;/* '<S12>/If Action Subsystem' */
  P_IfActionSubsystem_CalebsLaunchControl_T IfActionSubsystem1_l;/* '<S11>/If Action Subsystem1' */
  P_IfActionSubsystem_CalebsLaunchControl_T IfActionSubsystem_g;/* '<S11>/If Action Subsystem' */
  P_IfActionSubsystem_CalebsLaunchControl_T IfActionSubsystem1_c;/* '<S10>/If Action Subsystem1' */
  P_IfActionSubsystem_CalebsLaunchControl_T IfActionSubsystem_c;/* '<S10>/If Action Subsystem' */
  P_IfActionSubsystem_CalebsLaunchControl_T IfActionSubsystem1;/* '<S9>/If Action Subsystem1' */
  P_IfActionSubsystem_CalebsLaunchControl_T IfActionSubsystem;/* '<S9>/If Action Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_CalebsLaunchControl_T {
  const char_T *errorStatus;
  B_CalebsLaunchControl_T *blockIO;
  ExtU_CalebsLaunchControl_T *inputs;
  ExtY_CalebsLaunchControl_T *outputs;
  DW_CalebsLaunchControl_T *dwork;
};

/* Block parameters (default storage) */
extern P_CalebsLaunchControl_T CalebsLaunchControl_P;

/* External data declarations for dependent source files */
extern const cmPowerTrainXWDOut CalebsLaunchControl_rtZcmPowerTrainXWDOut;/* cmPowerTrainXWDOut ground */
extern const char *RT_MEMORY_ALLOCATION_ERROR;
extern P_CalebsLaunchControl_T CalebsLaunchControl_P;/* parameters */

/* Model entry point functions */
struct tInfos;
extern RT_MODEL_CalebsLaunchControl_T *CalebsLaunchControl(struct tInfos *inf);
extern void CalebsLaunchControl_initialize(RT_MODEL_CalebsLaunchControl_T *const
  CalebsLaunchControl_M);
extern void CalebsLaunchControl_step(RT_MODEL_CalebsLaunchControl_T *const
  CalebsLaunchControl_M);
extern void CalebsLaunchControl_terminate(RT_MODEL_CalebsLaunchControl_T
  * CalebsLaunchControl_M);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'CalebsLaunchControl'
 * '<S1>'   : 'CalebsLaunchControl/IF_Out_Selector'
 * '<S2>'   : 'CalebsLaunchControl/Subsystem'
 * '<S3>'   : 'CalebsLaunchControl/Subsystem4'
 * '<S4>'   : 'CalebsLaunchControl/Subsystem/Subsystem'
 * '<S5>'   : 'CalebsLaunchControl/Subsystem/Subsystem1'
 * '<S6>'   : 'CalebsLaunchControl/Subsystem4/Launch Control'
 * '<S7>'   : 'CalebsLaunchControl/Subsystem4/Traction Control'
 * '<S8>'   : 'CalebsLaunchControl/Subsystem4/Launch Control/LaunchControl'
 * '<S9>'   : 'CalebsLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem'
 * '<S10>'  : 'CalebsLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem1'
 * '<S11>'  : 'CalebsLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem2'
 * '<S12>'  : 'CalebsLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem3'
 * '<S13>'  : 'CalebsLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem/If Action Subsystem'
 * '<S14>'  : 'CalebsLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem/If Action Subsystem1'
 * '<S15>'  : 'CalebsLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem1/If Action Subsystem'
 * '<S16>'  : 'CalebsLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem1/If Action Subsystem1'
 * '<S17>'  : 'CalebsLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem2/If Action Subsystem'
 * '<S18>'  : 'CalebsLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem2/If Action Subsystem1'
 * '<S19>'  : 'CalebsLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem3/If Action Subsystem'
 * '<S20>'  : 'CalebsLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem3/If Action Subsystem1'
 * '<S21>'  : 'CalebsLaunchControl/Subsystem4/Traction Control/Traction Control'
 * '<S22>'  : 'CalebsLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem'
 * '<S23>'  : 'CalebsLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem1'
 */
#endif                                 /* RTW_HEADER_CalebsLaunchControl_h_ */
