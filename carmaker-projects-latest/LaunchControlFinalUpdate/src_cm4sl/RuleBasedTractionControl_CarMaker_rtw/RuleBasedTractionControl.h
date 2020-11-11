/*
 * RuleBasedTractionControl.h
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

#ifndef RTW_HEADER_RuleBasedTractionControl_h_
#define RTW_HEADER_RuleBasedTractionControl_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef RuleBasedTractionControl_COMMON_INCLUDES_
# define RuleBasedTractionControl_COMMON_INCLUDES_
#include <stdlib.h>
#include <Global.h>
#include <TextUtils.h>
#include <DataDict.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                           /* RuleBasedTractionControl_COMMON_INCLUDES_ */

#include "RuleBasedTractionControl_types.h"

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

#define RuleBasedTractionControl_M_TYPE RT_MODEL_RuleBasedTractionControl_T

/* Definition required by CarMaker */
#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           0.0002
#endif

/* Block signals for system '<S6>/If Action Subsystem' */
typedef struct {
  real_T In1;                          /* '<S10>/In1' */
} B_IfActionSubsystem_RuleBasedTractionControl_T;

/* Block signals for system '<S19>/If Action Subsystem' */
typedef struct {
  real_T Product;                      /* '<S23>/Product' */
} B_IfActionSubsystem_RuleBasedTractionControl_j_T;

/* Block signals for system '<S19>/If Action Subsystem3' */
typedef struct {
  real_T Product;                      /* '<S26>/Product' */
} B_IfActionSubsystem3_RuleBasedTractionControl_T;

/* Block signals (default storage) */
typedef struct {
  real_T ReadCMDict;                   /* '<S19>/Read CM Dict' */
  real_T Product2;                     /* '<S19>/Product2' */
  real_T Gain;                         /* '<S19>/Gain' */
  real_T ReadCMDict_o;                 /* '<S20>/Read CM Dict' */
  real_T Product2_p;                   /* '<S20>/Product2' */
  real_T Gain_l;                       /* '<S20>/Gain' */
  real_T ReadCMDict_j;                 /* '<S21>/Read CM Dict' */
  real_T Product2_a;                   /* '<S21>/Product2' */
  real_T Gain_f;                       /* '<S21>/Gain' */
  real_T ReadCMDict_k;                 /* '<S22>/Read CM Dict' */
  real_T Product2_n;                   /* '<S22>/Product2' */
  real_T Gain_i;                       /* '<S22>/Gain' */
  real_T Product1;                     /* '<S6>/Product1' */
  real_T Gain_j;                       /* '<S6>/Gain' */
  real_T Product1_o;                   /* '<S7>/Product1' */
  real_T Gain_n;                       /* '<S7>/Gain' */
  real_T Product1_l;                   /* '<S8>/Product1' */
  real_T Gain_h;                       /* '<S8>/Gain' */
  real_T Product1_m;                   /* '<S9>/Product1' */
  real_T Gain_a;                       /* '<S9>/Gain' */
  B_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem1_m;/* '<S22>/If Action Subsystem1' */
  B_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem2_ly;/* '<S22>/If Action Subsystem2' */
  B_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem3_m;/* '<S22>/If Action Subsystem3' */
  B_IfActionSubsystem_RuleBasedTractionControl_j_T IfActionSubsystem_nm;/* '<S22>/If Action Subsystem' */
  B_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem1_d;/* '<S21>/If Action Subsystem1' */
  B_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem2_l;/* '<S21>/If Action Subsystem2' */
  B_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem3_o;/* '<S21>/If Action Subsystem3' */
  B_IfActionSubsystem_RuleBasedTractionControl_j_T IfActionSubsystem_m;/* '<S21>/If Action Subsystem' */
  B_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem1_j;/* '<S20>/If Action Subsystem1' */
  B_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem2_b;/* '<S20>/If Action Subsystem2' */
  B_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem3_g;/* '<S20>/If Action Subsystem3' */
  B_IfActionSubsystem_RuleBasedTractionControl_j_T IfActionSubsystem_d;/* '<S20>/If Action Subsystem' */
  B_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem1_f;/* '<S19>/If Action Subsystem1' */
  B_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem2;/* '<S19>/If Action Subsystem2' */
  B_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem3;/* '<S19>/If Action Subsystem3' */
  B_IfActionSubsystem_RuleBasedTractionControl_j_T IfActionSubsystem_o;/* '<S19>/If Action Subsystem' */
  B_IfActionSubsystem_RuleBasedTractionControl_T IfActionSubsystem1_l;/* '<S9>/If Action Subsystem1' */
  B_IfActionSubsystem_RuleBasedTractionControl_T IfActionSubsystem_nx;/* '<S9>/If Action Subsystem' */
  B_IfActionSubsystem_RuleBasedTractionControl_T IfActionSubsystem1_c;/* '<S8>/If Action Subsystem1' */
  B_IfActionSubsystem_RuleBasedTractionControl_T IfActionSubsystem_p;/* '<S8>/If Action Subsystem' */
  B_IfActionSubsystem_RuleBasedTractionControl_T IfActionSubsystem1_a;/* '<S7>/If Action Subsystem1' */
  B_IfActionSubsystem_RuleBasedTractionControl_T IfActionSubsystem_n;/* '<S7>/If Action Subsystem' */
  B_IfActionSubsystem_RuleBasedTractionControl_T IfActionSubsystem1;/* '<S6>/If Action Subsystem1' */
  B_IfActionSubsystem_RuleBasedTractionControl_T IfActionSubsystem;/* '<S6>/If Action Subsystem' */
} B_RuleBasedTractionControl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    void *Entry;
  } ReadCMDict_PWORK;                  /* '<S19>/Read CM Dict' */

  struct {
    void *Entry;
  } ReadCMDict_PWORK_d;                /* '<S20>/Read CM Dict' */

  struct {
    void *Entry;
  } ReadCMDict_PWORK_f;                /* '<S21>/Read CM Dict' */

  struct {
    void *Entry;
  } ReadCMDict_PWORK_i;                /* '<S22>/Read CM Dict' */

  struct {
    int_T Checked;
  } ReadCMDict_IWORK;                  /* '<S19>/Read CM Dict' */

  struct {
    int_T Checked;
  } ReadCMDict_IWORK_e;                /* '<S20>/Read CM Dict' */

  struct {
    int_T Checked;
  } ReadCMDict_IWORK_h;                /* '<S21>/Read CM Dict' */

  struct {
    int_T Checked;
  } ReadCMDict_IWORK_eu;               /* '<S22>/Read CM Dict' */
} DW_RuleBasedTractionControl_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  cmPowerTrainXWDIn FromCM;            /* '<Root>/FromCM' */
  cmPowerTrainXWDCfgIn CfgInFromCM;    /* '<Root>/CfgInFromCM' */
  cmPowerTrainXWDCfgOut CfgOutFromCM;  /* '<Root>/CfgOutFromCM' */
} ExtU_RuleBasedTractionControl_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  cmPowerTrainXWDOut ToCM;             /* '<Root>/ToCM' */
} ExtY_RuleBasedTractionControl_T;

/* Parameters for system: '<S6>/If Action Subsystem' */
struct P_IfActionSubsystem_RuleBasedTractionControl_T_ {
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S10>/Out1'
                                        */
};

/* Parameters for system: '<S19>/If Action Subsystem' */
struct P_IfActionSubsystem_RuleBasedTractionControl_j_T_ {
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S23>/Out1'
                                        */
};

/* Parameters for system: '<S19>/If Action Subsystem3' */
struct P_IfActionSubsystem3_RuleBasedTractionControl_T_ {
  real_T Out2_Y0;                      /* Computed Parameter: Out2_Y0
                                        * Referenced by: '<S26>/Out2'
                                        */
  real_T Constant_Value;               /* Expression: -1
                                        * Referenced by: '<S26>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_RuleBasedTractionControl_T_ {
  real_T FLtrq_Y0;                     /* Computed Parameter: FLtrq_Y0
                                        * Referenced by: '<S3>/FL trq'
                                        */
  real_T FLtrqinv_Y0;                  /* Computed Parameter: FLtrqinv_Y0
                                        * Referenced by: '<S3>/FL trq inv'
                                        */
  real_T FRtrq_Y0;                     /* Computed Parameter: FRtrq_Y0
                                        * Referenced by: '<S3>/FR trq'
                                        */
  real_T FRtrqinv_Y0;                  /* Computed Parameter: FRtrqinv_Y0
                                        * Referenced by: '<S3>/FR trq inv'
                                        */
  real_T RLtrq_Y0;                     /* Computed Parameter: RLtrq_Y0
                                        * Referenced by: '<S3>/RL trq'
                                        */
  real_T RLtrqinv_Y0;                  /* Computed Parameter: RLtrqinv_Y0
                                        * Referenced by: '<S3>/RL trq inv'
                                        */
  real_T RRtrq_Y0;                     /* Computed Parameter: RRtrq_Y0
                                        * Referenced by: '<S3>/RR trq'
                                        */
  real_T RRtrqinv_Y0;                  /* Computed Parameter: RRtrqinv_Y0
                                        * Referenced by: '<S3>/RR trq inv'
                                        */
  real_T GearRatio2_Value;             /* Expression: 11.923
                                        * Referenced by: '<S6>/GearRatio2'
                                        */
  real_T uDLookupTable1_tableData[14];
                        /* Expression: [9 10 12 15 25 25 25 25 25 25 25 25 25 0]
                         * Referenced by: '<S6>/1-D Lookup Table1'
                         */
  real_T uDLookupTable1_bp01Data[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S6>/1-D Lookup Table1'
   */
  real_T Gain3_Gain;                   /* Expression: 60/(2*pi)
                                        * Referenced by: '<S6>/Gain3'
                                        */
  real_T uDLookupTable1_tableData_f[84];
  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S6>/2-D Lookup Table1'
   */
  real_T uDLookupTable1_bp01Data_b[6]; /* Expression: [0 0.2 0.4 0.6 0.8 1]
                                        * Referenced by: '<S6>/2-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp02Data[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S6>/2-D Lookup Table1'
   */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T GearRatio2_Value_b;           /* Expression: 11.923
                                        * Referenced by: '<S7>/GearRatio2'
                                        */
  real_T uDLookupTable1_tableData_p[14];
                        /* Expression: [9 10 12 15 25 25 25 25 25 25 25 25 25 0]
                         * Referenced by: '<S7>/1-D Lookup Table1'
                         */
  real_T uDLookupTable1_bp01Data_l[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S7>/1-D Lookup Table1'
   */
  real_T Gain3_Gain_f;                 /* Expression: 60/(2*pi)
                                        * Referenced by: '<S7>/Gain3'
                                        */
  real_T uDLookupTable1_tableData_h[84];
  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S7>/2-D Lookup Table1'
   */
  real_T uDLookupTable1_bp01Data_o[6]; /* Expression: [0 0.2 0.4 0.6 0.8 1]
                                        * Referenced by: '<S7>/2-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp02Data_l[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S7>/2-D Lookup Table1'
   */
  real_T Gain_Gain_d;                  /* Expression: -1
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T GearRatio2_Value_i;           /* Expression: 11.923
                                        * Referenced by: '<S8>/GearRatio2'
                                        */
  real_T uDLookupTable1_tableData_i[10];
                                  /* Expression: [18 20 23 25 25 25 25 25 25 25]
                                   * Referenced by: '<S8>/1-D Lookup Table1'
                                   */
  real_T uDLookupTable1_bp01Data_a[10];
                  /* Expression: [0 400 800 1200 1600 2000 3000 4000 6000 22000]
                   * Referenced by: '<S8>/1-D Lookup Table1'
                   */
  real_T Gain3_Gain_m;                 /* Expression: 60/(2*pi)
                                        * Referenced by: '<S8>/Gain3'
                                        */
  real_T uDLookupTable1_tableData_ib[84];
  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S8>/2-D Lookup Table1'
   */
  real_T uDLookupTable1_bp01Data_a0[6];/* Expression: [0 0.2 0.4 0.6 0.8 1]
                                        * Referenced by: '<S8>/2-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp02Data_f[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S8>/2-D Lookup Table1'
   */
  real_T Gain_Gain_f;                  /* Expression: -1
                                        * Referenced by: '<S8>/Gain'
                                        */
  real_T GearRatio2_Value_f;           /* Expression: 11.923
                                        * Referenced by: '<S9>/GearRatio2'
                                        */
  real_T uDLookupTable1_tableData_ib0[10];
                                  /* Expression: [18 20 23 25 25 25 25 25 25 25]
                                   * Referenced by: '<S9>/1-D Lookup Table1'
                                   */
  real_T uDLookupTable1_bp01Data_h[10];
                  /* Expression: [0 400 800 1200 1600 2000 3000 4000 6000 22000]
                   * Referenced by: '<S9>/1-D Lookup Table1'
                   */
  real_T Gain3_Gain_o;                 /* Expression: 60/(2*pi)
                                        * Referenced by: '<S9>/Gain3'
                                        */
  real_T uDLookupTable1_tableData_hf[84];
  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S9>/2-D Lookup Table1'
   */
  real_T uDLookupTable1_bp01Data_m[6]; /* Expression: [0 0.2 0.4 0.6 0.8 1]
                                        * Referenced by: '<S9>/2-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp02Data_e[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S9>/2-D Lookup Table1'
   */
  real_T Gain_Gain_j;                  /* Expression: -1
                                        * Referenced by: '<S9>/Gain'
                                        */
  real_T FLtrq_Y0_i;                   /* Computed Parameter: FLtrq_Y0_i
                                        * Referenced by: '<S4>/FL trq'
                                        */
  real_T FLtrqinv_Y0_d;                /* Computed Parameter: FLtrqinv_Y0_d
                                        * Referenced by: '<S4>/FL trq inv'
                                        */
  real_T FRtrq_Y0_k;                   /* Computed Parameter: FRtrq_Y0_k
                                        * Referenced by: '<S4>/FR trq'
                                        */
  real_T FRtrqinv_Y0_k;                /* Computed Parameter: FRtrqinv_Y0_k
                                        * Referenced by: '<S4>/FR trq inv'
                                        */
  real_T RLtrq_Y0_g;                   /* Computed Parameter: RLtrq_Y0_g
                                        * Referenced by: '<S4>/RL trq'
                                        */
  real_T RLtrqinv_Y0_c;                /* Computed Parameter: RLtrqinv_Y0_c
                                        * Referenced by: '<S4>/RL trq inv'
                                        */
  real_T RRtrq_Y0_k;                   /* Computed Parameter: RRtrq_Y0_k
                                        * Referenced by: '<S4>/RR trq'
                                        */
  real_T RRtrqinv_Y0_m;                /* Computed Parameter: RRtrqinv_Y0_m
                                        * Referenced by: '<S4>/RR trq inv'
                                        */
  real_T GearRatio_Value;              /* Expression: 11.923
                                        * Referenced by: '<S19>/GearRatio'
                                        */
  real_T Gain1_Gain;                   /* Expression: 60/(2*pi)
                                        * Referenced by: '<S19>/Gain1'
                                        */
  real_T uDLookupTable_tableData[84];
  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S19>/2-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data[6];    /* Expression: [0 0.2 0.4 0.6 0.8 1]
                                        * Referenced by: '<S19>/2-D Lookup Table'
                                        */
  real_T uDLookupTable_bp02Data[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S19>/2-D Lookup Table'
   */
  real_T slip2_Value;                  /* Expression: 0.13
                                        * Referenced by: '<S19>/slip2'
                                        */
  real_T slip3_Value;                  /* Expression: 0.17
                                        * Referenced by: '<S19>/slip3'
                                        */
  real_T slip4_Value;                  /* Expression: 0.4
                                        * Referenced by: '<S19>/slip4'
                                        */
  real_T slip5_Value;                  /* Expression: 1
                                        * Referenced by: '<S19>/slip5'
                                        */
  real_T alpha5_Value;                 /* Expression: 0.8
                                        * Referenced by: '<S19>/alpha5'
                                        */
  real_T alpha4_Value;                 /* Expression: 0.6
                                        * Referenced by: '<S19>/alpha4'
                                        */
  real_T alpha3_Value;                 /* Expression: 0.09
                                        * Referenced by: '<S19>/alpha3'
                                        */
  real_T alpha2_Value;                 /* Expression: 0.07
                                        * Referenced by: '<S19>/alpha2'
                                        */
  real_T Gain_Gain_m;                  /* Expression: -1
                                        * Referenced by: '<S19>/Gain'
                                        */
  real_T GearRatio_Value_h;            /* Expression: 11.923
                                        * Referenced by: '<S20>/GearRatio'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: 60/(2*pi)
                                        * Referenced by: '<S20>/Gain1'
                                        */
  real_T uDLookupTable_tableData_i[84];
  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S20>/2-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data_h[6];  /* Expression: [0 0.2 0.4 0.6 0.8 1]
                                        * Referenced by: '<S20>/2-D Lookup Table'
                                        */
  real_T uDLookupTable_bp02Data_i[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S20>/2-D Lookup Table'
   */
  real_T slip2_Value_o;                /* Expression: 0.13
                                        * Referenced by: '<S20>/slip2'
                                        */
  real_T slip3_Value_p;                /* Expression: 0.17
                                        * Referenced by: '<S20>/slip3'
                                        */
  real_T slip4_Value_g;                /* Expression: 0.5
                                        * Referenced by: '<S20>/slip4'
                                        */
  real_T slip5_Value_n;                /* Expression: 1
                                        * Referenced by: '<S20>/slip5'
                                        */
  real_T alpha5_Value_g;               /* Expression: 0.9
                                        * Referenced by: '<S20>/alpha5'
                                        */
  real_T alpha4_Value_e;               /* Expression: 0.8
                                        * Referenced by: '<S20>/alpha4'
                                        */
  real_T alpha3_Value_f;               /* Expression: 0.09
                                        * Referenced by: '<S20>/alpha3'
                                        */
  real_T alpha2_Value_c;               /* Expression: 0.07
                                        * Referenced by: '<S20>/alpha2'
                                        */
  real_T Gain_Gain_m2;                 /* Expression: -1
                                        * Referenced by: '<S20>/Gain'
                                        */
  real_T GearRatio_Value_hg;           /* Expression: 11.923
                                        * Referenced by: '<S21>/GearRatio'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: 60/(2*pi)
                                        * Referenced by: '<S21>/Gain1'
                                        */
  real_T uDLookupTable_tableData_iw[84];
  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S21>/2-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data_g[6];  /* Expression: [0 0.2 0.4 0.6 0.8 1]
                                        * Referenced by: '<S21>/2-D Lookup Table'
                                        */
  real_T uDLookupTable_bp02Data_b[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S21>/2-D Lookup Table'
   */
  real_T slip2_Value_om;               /* Expression: 0.13
                                        * Referenced by: '<S21>/slip2'
                                        */
  real_T slip3_Value_b;                /* Expression: 0.17
                                        * Referenced by: '<S21>/slip3'
                                        */
  real_T slip4_Value_c;                /* Expression: 0.4
                                        * Referenced by: '<S21>/slip4'
                                        */
  real_T slip5_Value_p;                /* Expression: 1
                                        * Referenced by: '<S21>/slip5'
                                        */
  real_T alpha5_Value_gt;              /* Expression: 0.8
                                        * Referenced by: '<S21>/alpha5'
                                        */
  real_T alpha4_Value_c;               /* Expression: 0.6
                                        * Referenced by: '<S21>/alpha4'
                                        */
  real_T alpha3_Value_h;               /* Expression: 0.09
                                        * Referenced by: '<S21>/alpha3'
                                        */
  real_T alpha2_Value_d;               /* Expression: 0.07
                                        * Referenced by: '<S21>/alpha2'
                                        */
  real_T Gain_Gain_a;                  /* Expression: -1
                                        * Referenced by: '<S21>/Gain'
                                        */
  real_T GearRatio_Value_c;            /* Expression: 11.923
                                        * Referenced by: '<S22>/GearRatio'
                                        */
  real_T Gain1_Gain_f;                 /* Expression: 60/(2*pi)
                                        * Referenced by: '<S22>/Gain1'
                                        */
  real_T uDLookupTable_tableData_c[84];
  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S22>/2-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data_g5[6]; /* Expression: [0 0.2 0.4 0.6 0.8 1]
                                        * Referenced by: '<S22>/2-D Lookup Table'
                                        */
  real_T uDLookupTable_bp02Data_p[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S22>/2-D Lookup Table'
   */
  real_T slip2_Value_d;                /* Expression: 0.13
                                        * Referenced by: '<S22>/slip2'
                                        */
  real_T slip3_Value_c;                /* Expression: 0.17
                                        * Referenced by: '<S22>/slip3'
                                        */
  real_T slip4_Value_f;                /* Expression: 0.5
                                        * Referenced by: '<S22>/slip4'
                                        */
  real_T slip5_Value_k;                /* Expression: 1
                                        * Referenced by: '<S22>/slip5'
                                        */
  real_T alpha5_Value_e;               /* Expression: 0.9
                                        * Referenced by: '<S22>/alpha5'
                                        */
  real_T alpha4_Value_g;               /* Expression: 0.8
                                        * Referenced by: '<S22>/alpha4'
                                        */
  real_T alpha3_Value_b;               /* Expression: 0.09
                                        * Referenced by: '<S22>/alpha3'
                                        */
  real_T alpha2_Value_a;               /* Expression: 0.07
                                        * Referenced by: '<S22>/alpha2'
                                        */
  real_T Gain_Gain_k;                  /* Expression: -1
                                        * Referenced by: '<S22>/Gain'
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
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T LaunchControlspdlimit_Value;  /* Expression: 60
                                        * Referenced by: '<S2>/Launch Control spd limit'
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
                                   * Referenced by: '<S6>/2-D Lookup Table1'
                                   */
  uint32_T uDLookupTable1_maxIndex_p[2];
                                /* Computed Parameter: uDLookupTable1_maxIndex_p
                                 * Referenced by: '<S7>/2-D Lookup Table1'
                                 */
  uint32_T uDLookupTable1_maxIndex_k[2];
                                /* Computed Parameter: uDLookupTable1_maxIndex_k
                                 * Referenced by: '<S8>/2-D Lookup Table1'
                                 */
  uint32_T uDLookupTable1_maxIndex_a[2];
                                /* Computed Parameter: uDLookupTable1_maxIndex_a
                                 * Referenced by: '<S9>/2-D Lookup Table1'
                                 */
  uint32_T uDLookupTable_maxIndex[2];
                                   /* Computed Parameter: uDLookupTable_maxIndex
                                    * Referenced by: '<S19>/2-D Lookup Table'
                                    */
  uint32_T uDLookupTable_maxIndex_p[2];
                                 /* Computed Parameter: uDLookupTable_maxIndex_p
                                  * Referenced by: '<S20>/2-D Lookup Table'
                                  */
  uint32_T uDLookupTable_maxIndex_g[2];
                                 /* Computed Parameter: uDLookupTable_maxIndex_g
                                  * Referenced by: '<S21>/2-D Lookup Table'
                                  */
  uint32_T uDLookupTable_maxIndex_i[2];
                                 /* Computed Parameter: uDLookupTable_maxIndex_i
                                  * Referenced by: '<S22>/2-D Lookup Table'
                                  */
  P_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem1_m;/* '<S22>/If Action Subsystem1' */
  P_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem2_ly;/* '<S22>/If Action Subsystem2' */
  P_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem3_m;/* '<S22>/If Action Subsystem3' */
  P_IfActionSubsystem_RuleBasedTractionControl_j_T IfActionSubsystem_nm;/* '<S22>/If Action Subsystem' */
  P_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem1_d;/* '<S21>/If Action Subsystem1' */
  P_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem2_l;/* '<S21>/If Action Subsystem2' */
  P_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem3_o;/* '<S21>/If Action Subsystem3' */
  P_IfActionSubsystem_RuleBasedTractionControl_j_T IfActionSubsystem_m;/* '<S21>/If Action Subsystem' */
  P_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem1_j;/* '<S20>/If Action Subsystem1' */
  P_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem2_b;/* '<S20>/If Action Subsystem2' */
  P_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem3_g;/* '<S20>/If Action Subsystem3' */
  P_IfActionSubsystem_RuleBasedTractionControl_j_T IfActionSubsystem_d;/* '<S20>/If Action Subsystem' */
  P_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem1_f;/* '<S19>/If Action Subsystem1' */
  P_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem2;/* '<S19>/If Action Subsystem2' */
  P_IfActionSubsystem3_RuleBasedTractionControl_T IfActionSubsystem3;/* '<S19>/If Action Subsystem3' */
  P_IfActionSubsystem_RuleBasedTractionControl_j_T IfActionSubsystem_o;/* '<S19>/If Action Subsystem' */
  P_IfActionSubsystem_RuleBasedTractionControl_T IfActionSubsystem1_l;/* '<S9>/If Action Subsystem1' */
  P_IfActionSubsystem_RuleBasedTractionControl_T IfActionSubsystem_nx;/* '<S9>/If Action Subsystem' */
  P_IfActionSubsystem_RuleBasedTractionControl_T IfActionSubsystem1_c;/* '<S8>/If Action Subsystem1' */
  P_IfActionSubsystem_RuleBasedTractionControl_T IfActionSubsystem_p;/* '<S8>/If Action Subsystem' */
  P_IfActionSubsystem_RuleBasedTractionControl_T IfActionSubsystem1_a;/* '<S7>/If Action Subsystem1' */
  P_IfActionSubsystem_RuleBasedTractionControl_T IfActionSubsystem_n;/* '<S7>/If Action Subsystem' */
  P_IfActionSubsystem_RuleBasedTractionControl_T IfActionSubsystem1;/* '<S6>/If Action Subsystem1' */
  P_IfActionSubsystem_RuleBasedTractionControl_T IfActionSubsystem;/* '<S6>/If Action Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_RuleBasedTractionControl_T {
  const char_T *errorStatus;
  B_RuleBasedTractionControl_T *blockIO;
  ExtU_RuleBasedTractionControl_T *inputs;
  ExtY_RuleBasedTractionControl_T *outputs;
  DW_RuleBasedTractionControl_T *dwork;
};

/* Block parameters (default storage) */
extern P_RuleBasedTractionControl_T RuleBasedTractionControl_P;

/* External data declarations for dependent source files */
extern const cmPowerTrainXWDOut RuleBasedTractionControl_rtZcmPowerTrainXWDOut;/* cmPowerTrainXWDOut ground */
extern const char *RT_MEMORY_ALLOCATION_ERROR;
extern P_RuleBasedTractionControl_T RuleBasedTractionControl_P;/* parameters */

/* Model entry point functions */
struct tInfos;
extern RT_MODEL_RuleBasedTractionControl_T *RuleBasedTractionControl(struct
  tInfos *inf);
extern void RuleBasedTractionControl_initialize
  (RT_MODEL_RuleBasedTractionControl_T *const RuleBasedTractionControl_M);
extern void RuleBasedTractionControl_step(RT_MODEL_RuleBasedTractionControl_T *
  const RuleBasedTractionControl_M);
extern void RuleBasedTractionControl_terminate
  (RT_MODEL_RuleBasedTractionControl_T * RuleBasedTractionControl_M);

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
 * '<Root>' : 'RuleBasedTractionControl'
 * '<S1>'   : 'RuleBasedTractionControl/IF_Out_Selector'
 * '<S2>'   : 'RuleBasedTractionControl/Subsystem4'
 * '<S3>'   : 'RuleBasedTractionControl/Subsystem4/Launch Control'
 * '<S4>'   : 'RuleBasedTractionControl/Subsystem4/Traction Control'
 * '<S5>'   : 'RuleBasedTractionControl/Subsystem4/Launch Control/LaunchControl'
 * '<S6>'   : 'RuleBasedTractionControl/Subsystem4/Launch Control/LaunchControl/Subsystem'
 * '<S7>'   : 'RuleBasedTractionControl/Subsystem4/Launch Control/LaunchControl/Subsystem1'
 * '<S8>'   : 'RuleBasedTractionControl/Subsystem4/Launch Control/LaunchControl/Subsystem2'
 * '<S9>'   : 'RuleBasedTractionControl/Subsystem4/Launch Control/LaunchControl/Subsystem3'
 * '<S10>'  : 'RuleBasedTractionControl/Subsystem4/Launch Control/LaunchControl/Subsystem/If Action Subsystem'
 * '<S11>'  : 'RuleBasedTractionControl/Subsystem4/Launch Control/LaunchControl/Subsystem/If Action Subsystem1'
 * '<S12>'  : 'RuleBasedTractionControl/Subsystem4/Launch Control/LaunchControl/Subsystem1/If Action Subsystem'
 * '<S13>'  : 'RuleBasedTractionControl/Subsystem4/Launch Control/LaunchControl/Subsystem1/If Action Subsystem1'
 * '<S14>'  : 'RuleBasedTractionControl/Subsystem4/Launch Control/LaunchControl/Subsystem2/If Action Subsystem'
 * '<S15>'  : 'RuleBasedTractionControl/Subsystem4/Launch Control/LaunchControl/Subsystem2/If Action Subsystem1'
 * '<S16>'  : 'RuleBasedTractionControl/Subsystem4/Launch Control/LaunchControl/Subsystem3/If Action Subsystem'
 * '<S17>'  : 'RuleBasedTractionControl/Subsystem4/Launch Control/LaunchControl/Subsystem3/If Action Subsystem1'
 * '<S18>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control'
 * '<S19>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem1'
 * '<S20>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem2'
 * '<S21>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem3'
 * '<S22>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem4'
 * '<S23>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem1/If Action Subsystem'
 * '<S24>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem1/If Action Subsystem1'
 * '<S25>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem1/If Action Subsystem2'
 * '<S26>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem1/If Action Subsystem3'
 * '<S27>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem2/If Action Subsystem'
 * '<S28>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem2/If Action Subsystem1'
 * '<S29>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem2/If Action Subsystem2'
 * '<S30>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem2/If Action Subsystem3'
 * '<S31>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem3/If Action Subsystem'
 * '<S32>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem3/If Action Subsystem1'
 * '<S33>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem3/If Action Subsystem2'
 * '<S34>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem3/If Action Subsystem3'
 * '<S35>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem4/If Action Subsystem'
 * '<S36>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem4/If Action Subsystem1'
 * '<S37>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem4/If Action Subsystem2'
 * '<S38>'  : 'RuleBasedTractionControl/Subsystem4/Traction Control/Traction Control/Subsystem4/If Action Subsystem3'
 */
#endif                              /* RTW_HEADER_RuleBasedTractionControl_h_ */
