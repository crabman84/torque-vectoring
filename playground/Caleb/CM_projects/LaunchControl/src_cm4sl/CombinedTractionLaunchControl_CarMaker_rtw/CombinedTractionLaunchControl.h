/*
 * CombinedTractionLaunchControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "CombinedTractionLaunchControl".
 *
 * Model version              : 1.43
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C source code generated on : Sat Oct 24 11:29:10 2020
 *
 * Target selection: CarMaker.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CombinedTractionLaunchControl_h_
#define RTW_HEADER_CombinedTractionLaunchControl_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef CombinedTractionLaunchControl_COMMON_INCLUDES_
# define CombinedTractionLaunchControl_COMMON_INCLUDES_
#include <stdlib.h>
#include <Global.h>
#include <TextUtils.h>
#include <DataDict.h>
#include <DirectVarAccess.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                      /* CombinedTractionLaunchControl_COMMON_INCLUDES_ */

#include "CombinedTractionLaunchControl_types.h"

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

#define CombinedTractionLaunchControl_M_TYPE RT_MODEL_CombinedTractionLaunchControl_T

/* Definition required by CarMaker */
#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           0.0002
#endif

/* Block signals for system '<Root>/If Action Subsystem' */
typedef struct {
  real_T In1;                          /* '<S2>/In1' */
} B_IfActionSubsystem_CombinedTractionLaunchControl_T;

/* Block signals for system '<S23>/If Action Subsystem' */
typedef struct {
  real_T torqueRequest;                /* '<S25>/torqueRequest' */
} B_IfActionSubsystem_CombinedTractionLaunchControl_j_T;

/* Block signals for system '<S23>/If Action Subsystem1' */
typedef struct {
  real_T Mult;                         /* '<S26>/Mult' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_j_T IfActionSubsystem1;/* '<S26>/If Action Subsystem1' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_j_T IfActionSubsystem;/* '<S26>/If Action Subsystem' */
} B_IfActionSubsystem1_CombinedTractionLaunchControl_T;

/* Block signals (default storage) */
typedef struct {
  real_T uDLookupTable;                /* '<S21>/2-D Lookup Table' */
  real_T ReadCMDict;                   /* '<S21>/Read CM Dict' */
  real_T Minus;                        /* '<S23>/Minus' */
  real_T SumofElements;                /* '<S23>/Sum of Elements' */
  real_T MinMax;                       /* '<S23>/MinMax' */
  real_T Product2;                     /* '<S21>/Product2' */
  real_T Gain;                         /* '<S21>/Gain' */
  real_T ReadCMDict1;                  /* '<S21>/Read CM Dict1' */
  real_T Product3;                     /* '<S21>/Product3' */
  real_T Gain2;                        /* '<S21>/Gain2' */
  real_T uDLookupTable_k;              /* '<S22>/2-D Lookup Table' */
  real_T ReadCMDict_j;                 /* '<S22>/Read CM Dict' */
  real_T Product2_o;                   /* '<S22>/Product2' */
  real_T Gain_g;                       /* '<S22>/Gain' */
  real_T ReadCMDict1_j;                /* '<S22>/Read CM Dict1' */
  real_T Product3_c;                   /* '<S22>/Product3' */
  real_T Gain2_e;                      /* '<S22>/Gain2' */
  real_T uDLookupTable_c;              /* '<S40>/2-D Lookup Table' */
  real_T Subtract;                     /* '<S40>/Subtract' */
  real_T Mult;                         /* '<S40>/Mult' */
  real_T Product1;                     /* '<S8>/Product1' */
  real_T Gain_n;                       /* '<S8>/Gain' */
  real_T Product1_n;                   /* '<S9>/Product1' */
  real_T Gain_np;                      /* '<S9>/Gain' */
  real_T Product1_b;                   /* '<S10>/Product1' */
  real_T Gain_gi;                      /* '<S10>/Gain' */
  real_T Product1_l;                   /* '<S11>/Product1' */
  real_T Gain_c;                       /* '<S11>/Gain' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_j_T IfActionSubsystem1_j;/* '<S40>/If Action Subsystem1' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_j_T IfActionSubsystem_lk;/* '<S40>/If Action Subsystem' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_j_T IfActionSubsystem_a;/* '<S34>/If Action Subsystem' */
  B_IfActionSubsystem1_CombinedTractionLaunchControl_T IfActionSubsystem1_pa;/* '<S33>/If Action Subsystem1' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_j_T IfActionSubsystem_m;/* '<S33>/If Action Subsystem' */
  B_IfActionSubsystem1_CombinedTractionLaunchControl_T IfActionSubsystem1_o;/* '<S24>/If Action Subsystem1' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_j_T IfActionSubsystem_o;/* '<S24>/If Action Subsystem' */
  B_IfActionSubsystem1_CombinedTractionLaunchControl_T IfActionSubsystem1_i;/* '<S23>/If Action Subsystem1' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_j_T IfActionSubsystem_i;/* '<S23>/If Action Subsystem' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem1_pg;/* '<S11>/If Action Subsystem1' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem_f;/* '<S11>/If Action Subsystem' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem1_p;/* '<S10>/If Action Subsystem1' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem_l;/* '<S10>/If Action Subsystem' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem1_b;/* '<S9>/If Action Subsystem1' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem_p;/* '<S9>/If Action Subsystem' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem1_g;/* '<S8>/If Action Subsystem1' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem_n;/* '<S8>/If Action Subsystem' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem1;/* '<Root>/If Action Subsystem1' */
  B_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem;/* '<Root>/If Action Subsystem' */
} B_CombinedTractionLaunchControl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    void *Entry;
  } WriteCMDict_PWORK;                 /* '<S23>/Write CM Dict' */

  struct {
    void *Entry;
  } ReadCMDict_PWORK;                  /* '<S21>/Read CM Dict' */

  struct {
    void *Entry;
  } WriteCMDict2_PWORK;                /* '<S23>/Write CM Dict2' */

  struct {
    void *Entry;
  } WriteCMDict3_PWORK;                /* '<S23>/Write CM Dict3' */

  struct {
    void *Entry;
  } WriteCMDict4_PWORK;                /* '<S23>/Write CM Dict4' */

  struct {
    void *Entry;
  } WriteCMDict5_PWORK;                /* '<S23>/Write CM Dict5' */

  struct {
    void *Entry;
  } WriteCMDict6_PWORK;                /* '<S23>/Write CM Dict6' */

  struct {
    void *Entry;
  } WriteCMDict7_PWORK;                /* '<S23>/Write CM Dict7' */

  struct {
    void *Entry;
  } ReadCMDict1_PWORK;                 /* '<S21>/Read CM Dict1' */

  struct {
    void *Entry;
  } ReadCMDict_PWORK_c;                /* '<S22>/Read CM Dict' */

  struct {
    void *Entry;
  } ReadCMDict1_PWORK_d;               /* '<S22>/Read CM Dict1' */

  struct {
    void *Entry;
  } WriteCMDict_PWORK_k;               /* '<S40>/Write CM Dict' */

  struct {
    void *Entry;
  } WriteCMDict1_PWORK;                /* '<S40>/Write CM Dict1' */

  struct {
    void *Entry;
  } WriteCMDict2_PWORK_j;              /* '<S40>/Write CM Dict2' */

  struct {
    void *Entry;
  } WriteCMDict3_PWORK_b;              /* '<S40>/Write CM Dict3' */

  struct {
    void *Entry;
  } WriteCMDict_PWORK_d;               /* '<S8>/Write CM Dict' */

  struct {
    void *Entry;
  } WriteCMDict1_PWORK_g;              /* '<S8>/Write CM Dict1' */

  struct {
    void *Entry;
  } WriteCMDict2_PWORK_f;              /* '<S8>/Write CM Dict2' */

  struct {
    int_T Checked;
  } WriteCMDict_IWORK;                 /* '<S23>/Write CM Dict' */

  struct {
    int_T Checked;
  } ReadCMDict_IWORK;                  /* '<S21>/Read CM Dict' */

  struct {
    int_T Checked;
  } WriteCMDict2_IWORK;                /* '<S23>/Write CM Dict2' */

  struct {
    int_T Checked;
  } WriteCMDict3_IWORK;                /* '<S23>/Write CM Dict3' */

  struct {
    int_T Checked;
  } WriteCMDict4_IWORK;                /* '<S23>/Write CM Dict4' */

  struct {
    int_T Checked;
  } WriteCMDict5_IWORK;                /* '<S23>/Write CM Dict5' */

  struct {
    int_T Checked;
  } WriteCMDict6_IWORK;                /* '<S23>/Write CM Dict6' */

  struct {
    int_T Checked;
  } WriteCMDict7_IWORK;                /* '<S23>/Write CM Dict7' */

  struct {
    int_T Checked;
  } ReadCMDict1_IWORK;                 /* '<S21>/Read CM Dict1' */

  struct {
    int_T Checked;
  } ReadCMDict_IWORK_d;                /* '<S22>/Read CM Dict' */

  struct {
    int_T Checked;
  } ReadCMDict1_IWORK_l;               /* '<S22>/Read CM Dict1' */

  struct {
    int_T Checked;
  } WriteCMDict_IWORK_g;               /* '<S40>/Write CM Dict' */

  struct {
    int_T Checked;
  } WriteCMDict1_IWORK;                /* '<S40>/Write CM Dict1' */

  struct {
    int_T Checked;
  } WriteCMDict2_IWORK_m;              /* '<S40>/Write CM Dict2' */

  struct {
    int_T Checked;
  } WriteCMDict3_IWORK_a;              /* '<S40>/Write CM Dict3' */

  struct {
    int_T Checked;
  } WriteCMDict_IWORK_l;               /* '<S8>/Write CM Dict' */

  struct {
    int_T Checked;
  } WriteCMDict1_IWORK_o;              /* '<S8>/Write CM Dict1' */

  struct {
    int_T Checked;
  } WriteCMDict2_IWORK_g;              /* '<S8>/Write CM Dict2' */
} DW_CombinedTractionLaunchControl_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  cmPowerTrainXWDIn FromCM;            /* '<Root>/FromCM' */
  cmPowerTrainXWDCfgIn CfgInFromCM;    /* '<Root>/CfgInFromCM' */
  cmPowerTrainXWDCfgOut CfgOutFromCM;  /* '<Root>/CfgOutFromCM' */
} ExtU_CombinedTractionLaunchControl_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  cmPowerTrainXWDOut ToCM;             /* '<Root>/ToCM' */
} ExtY_CombinedTractionLaunchControl_T;

/* Parameters for system: '<Root>/If Action Subsystem' */
struct P_IfActionSubsystem_CombinedTractionLaunchControl_T_ {
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S2>/Out1'
                                        */
};

/* Parameters for system: '<S23>/If Action Subsystem' */
struct P_IfActionSubsystem_CombinedTractionLaunchControl_p_T_ {
  real_T torqueOut_Y0;                 /* Computed Parameter: torqueOut_Y0
                                        * Referenced by: '<S25>/torqueOut'
                                        */
};

/* Parameters for system: '<S23>/If Action Subsystem1' */
struct P_IfActionSubsystem1_CombinedTractionLaunchControl_T_ {
  real_T TorqueOut_Y0;                 /* Computed Parameter: TorqueOut_Y0
                                        * Referenced by: '<S26>/TorqueOut'
                                        */
  real_T uDLookupTable_tableData[30];
  /* Expression: [0 0 0 0 0;2 2 2 2 2; 5 5 5 5 5; 7 7 7 7 7; 12 12 12 12 12; 50 50 50 50 50]
   * Referenced by: '<S26>/2-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data[6];    /* Expression: [0 0.05 0.1 0.15 0.5 2.5]
                                        * Referenced by: '<S26>/2-D Lookup Table'
                                        */
  real_T uDLookupTable_bp02Data[5];    /* Expression: [0 500 1000 1500 2000]
                                        * Referenced by: '<S26>/2-D Lookup Table'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S26>/Constant'
                                        */
  real_T Gain_Gain;                    /* Expression: 1/100
                                        * Referenced by: '<S26>/Gain'
                                        */
  uint32_T uDLookupTable_maxIndex[2];
                                   /* Computed Parameter: uDLookupTable_maxIndex
                                    * Referenced by: '<S26>/2-D Lookup Table'
                                    */
  P_IfActionSubsystem_CombinedTractionLaunchControl_p_T IfActionSubsystem1;/* '<S26>/If Action Subsystem1' */
  P_IfActionSubsystem_CombinedTractionLaunchControl_p_T IfActionSubsystem;/* '<S26>/If Action Subsystem' */
};

/* Parameters (default storage) */
struct P_CombinedTractionLaunchControl_T_ {
  real_T FLtrq_Y0;                     /* Computed Parameter: FLtrq_Y0
                                        * Referenced by: '<S5>/FL trq'
                                        */
  real_T FLtrqinv_Y0;                  /* Computed Parameter: FLtrqinv_Y0
                                        * Referenced by: '<S5>/FL trq inv'
                                        */
  real_T FRtrq_Y0;                     /* Computed Parameter: FRtrq_Y0
                                        * Referenced by: '<S5>/FR trq'
                                        */
  real_T FRtrqinv_Y0;                  /* Computed Parameter: FRtrqinv_Y0
                                        * Referenced by: '<S5>/FR trq inv'
                                        */
  real_T RLtrq_Y0;                     /* Computed Parameter: RLtrq_Y0
                                        * Referenced by: '<S5>/RL trq'
                                        */
  real_T RLtrqinv_Y0;                  /* Computed Parameter: RLtrqinv_Y0
                                        * Referenced by: '<S5>/RL trq inv'
                                        */
  real_T RRtrq_Y0;                     /* Computed Parameter: RRtrq_Y0
                                        * Referenced by: '<S5>/RR trq'
                                        */
  real_T RRtrqinv_Y0;                  /* Computed Parameter: RRtrqinv_Y0
                                        * Referenced by: '<S5>/RR trq inv'
                                        */
  real_T GearRatio2_Value;             /* Expression: 11.923
                                        * Referenced by: '<S8>/GearRatio2'
                                        */
  real_T Gain3_Gain;                   /* Expression: 60/(2*pi)
                                        * Referenced by: '<S8>/Gain3'
                                        */
  real_T uDLookupTable1_tableData[84];
  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S8>/2-D Lookup Table1'
   */
  real_T uDLookupTable1_bp01Data[6];   /* Expression: [0 0.2 0.4 0.6 0.8 1]
                                        * Referenced by: '<S8>/2-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp02Data[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S8>/2-D Lookup Table1'
   */
  real_T uDLookupTable1_tableData_h[14];
                        /* Expression: [9 10 12 15 21 21 21 21 21 21 21 21 21 0]
                         * Referenced by: '<S8>/1-D Lookup Table1'
                         */
  real_T uDLookupTable1_bp01Data_o[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S8>/1-D Lookup Table1'
   */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S8>/Gain'
                                        */
  real_T GearRatio2_Value_b;           /* Expression: 11.923
                                        * Referenced by: '<S9>/GearRatio2'
                                        */
  real_T uDLookupTable1_tableData_j[14];
                        /* Expression: [9 10 12 15 21 21 21 21 21 21 21 21 21 0]
                         * Referenced by: '<S9>/1-D Lookup Table1'
                         */
  real_T uDLookupTable1_bp01Data_oo[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S9>/1-D Lookup Table1'
   */
  real_T Gain3_Gain_j;                 /* Expression: 60/(2*pi)
                                        * Referenced by: '<S9>/Gain3'
                                        */
  real_T uDLookupTable1_tableData_d[84];
  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S9>/2-D Lookup Table1'
   */
  real_T uDLookupTable1_bp01Data_a[6]; /* Expression: [0 0.2 0.4 0.6 0.8 1]
                                        * Referenced by: '<S9>/2-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp02Data_c[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S9>/2-D Lookup Table1'
   */
  real_T Gain_Gain_p;                  /* Expression: -1
                                        * Referenced by: '<S9>/Gain'
                                        */
  real_T GearRatio2_Value_j;           /* Expression: 11.923
                                        * Referenced by: '<S10>/GearRatio2'
                                        */
  real_T uDLookupTable1_tableData_b[14];
                        /* Expression: [9 10 12 15 21 21 21 21 21 21 21 21 21 0]
                         * Referenced by: '<S10>/1-D Lookup Table1'
                         */
  real_T uDLookupTable1_bp01Data_g[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S10>/1-D Lookup Table1'
   */
  real_T Gain3_Gain_f;                 /* Expression: 60/(2*pi)
                                        * Referenced by: '<S10>/Gain3'
                                        */
  real_T uDLookupTable1_tableData_l[84];
  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S10>/2-D Lookup Table1'
   */
  real_T uDLookupTable1_bp01Data_oa[6];/* Expression: [0 0.2 0.4 0.6 0.8 1]
                                        * Referenced by: '<S10>/2-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp02Data_m[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S10>/2-D Lookup Table1'
   */
  real_T Gain_Gain_f;                  /* Expression: -1
                                        * Referenced by: '<S10>/Gain'
                                        */
  real_T GearRatio2_Value_n;           /* Expression: 11.923
                                        * Referenced by: '<S11>/GearRatio2'
                                        */
  real_T uDLookupTable1_tableData_l2[14];
                        /* Expression: [9 10 12 15 21 21 21 21 21 21 21 21 21 0]
                         * Referenced by: '<S11>/1-D Lookup Table1'
                         */
  real_T uDLookupTable1_bp01Data_m[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S11>/1-D Lookup Table1'
   */
  real_T Gain3_Gain_fz;                /* Expression: 60/(2*pi)
                                        * Referenced by: '<S11>/Gain3'
                                        */
  real_T uDLookupTable1_tableData_a[84];
  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S11>/2-D Lookup Table1'
   */
  real_T uDLookupTable1_bp01Data_g2[6];/* Expression: [0 0.2 0.4 0.6 0.8 1]
                                        * Referenced by: '<S11>/2-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp02Data_n[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S11>/2-D Lookup Table1'
   */
  real_T Gain_Gain_b;                  /* Expression: -1
                                        * Referenced by: '<S11>/Gain'
                                        */
  real_T TorqueOut_Y0;                 /* Computed Parameter: TorqueOut_Y0
                                        * Referenced by: '<S40>/TorqueOut'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S40>/Constant'
                                        */
  real_T uDLookupTable_tableData[30];
  /* Expression: [0 0 0 0 0;2 2 2 2 2; 5 5 5 5 5; 7 7 7 7 7; 12 12 12 12 12; 50 50 50 50 50]
   * Referenced by: '<S40>/2-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data[6];    /* Expression: [0 0.05 0.1 0.15 0.5 2.5]
                                        * Referenced by: '<S40>/2-D Lookup Table'
                                        */
  real_T uDLookupTable_bp02Data[5];    /* Expression: [0 500 1000 1500 2000]
                                        * Referenced by: '<S40>/2-D Lookup Table'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 1/100
                                        * Referenced by: '<S40>/Gain'
                                        */
  real_T FLtrq_Y0_e;                   /* Computed Parameter: FLtrq_Y0_e
                                        * Referenced by: '<S6>/FL trq'
                                        */
  real_T FLtrqinv_Y0_h;                /* Computed Parameter: FLtrqinv_Y0_h
                                        * Referenced by: '<S6>/FL trq inv'
                                        */
  real_T FRtrq_Y0_l;                   /* Computed Parameter: FRtrq_Y0_l
                                        * Referenced by: '<S6>/FR trq'
                                        */
  real_T FRtrqinv_Y0_c;                /* Computed Parameter: FRtrqinv_Y0_c
                                        * Referenced by: '<S6>/FR trq inv'
                                        */
  real_T RLtrq_Y0_f;                   /* Computed Parameter: RLtrq_Y0_f
                                        * Referenced by: '<S6>/RL trq'
                                        */
  real_T RLtrqinv_Y0_p;                /* Computed Parameter: RLtrqinv_Y0_p
                                        * Referenced by: '<S6>/RL trq inv'
                                        */
  real_T RRtrq_Y0_a;                   /* Computed Parameter: RRtrq_Y0_a
                                        * Referenced by: '<S6>/RR trq'
                                        */
  real_T RRtrqinv_Y0_n;                /* Computed Parameter: RRtrqinv_Y0_n
                                        * Referenced by: '<S6>/RR trq inv'
                                        */
  real_T GearRatio_Value;              /* Expression: 11.923
                                        * Referenced by: '<S21>/GearRatio'
                                        */
  real_T Gain1_Gain;                   /* Expression: 60/(2*pi)
                                        * Referenced by: '<S21>/Gain1'
                                        */
  real_T uDLookupTable_tableData_g[84];
  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S21>/2-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data_i[6];  /* Expression: [0 0.2 0.4 0.6 0.8 1]
                                        * Referenced by: '<S21>/2-D Lookup Table'
                                        */
  real_T uDLookupTable_bp02Data_p[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S21>/2-D Lookup Table'
   */
  real_T TargetSlip_Value;             /* Expression: 0.1
                                        * Referenced by: '<S21>/TargetSlip'
                                        */
  real_T Gain3_Gain_fk;                /* Expression: 60/(2*pi)
                                        * Referenced by: '<S21>/Gain3'
                                        */
  real_T uDLookupTable1_tableData_m[84];
  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S21>/2-D Lookup Table1'
   */
  real_T uDLookupTable1_bp01Data_h[6]; /* Expression: [0 0.2 0.4 0.6 0.8 1]
                                        * Referenced by: '<S21>/2-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp02Data_mw[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S21>/2-D Lookup Table1'
   */
  real_T Gain_Gain_g;                  /* Expression: -1
                                        * Referenced by: '<S21>/Gain'
                                        */
  real_T Gain2_Gain;                   /* Expression: -1
                                        * Referenced by: '<S21>/Gain2'
                                        */
  real_T GearRatio_Value_f;            /* Expression: 11.923
                                        * Referenced by: '<S22>/GearRatio'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: 60/(2*pi)
                                        * Referenced by: '<S22>/Gain1'
                                        */
  real_T uDLookupTable_tableData_j[84];
  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S22>/2-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data_n[6];  /* Expression: [0 0.2 0.4 0.6 0.8 1]
                                        * Referenced by: '<S22>/2-D Lookup Table'
                                        */
  real_T uDLookupTable_bp02Data_a[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S22>/2-D Lookup Table'
   */
  real_T Gain3_Gain_fze;               /* Expression: 60/(2*pi)
                                        * Referenced by: '<S22>/Gain3'
                                        */
  real_T uDLookupTable1_tableData_df[84];
  /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0;4 4 4 4 4 4 4 4 4 4 4 4 3 0;8 8 8 8 8 8 8 8 8 8 8 8 6 0;13 13 13 13 13 13 13 13 13 12 12 11 9 0;17 17 17 17 17 17 17 17 17 16 16 15 12 0;21 21 21 21 21 21 21 21 21 20 20 19 15 0]
   * Referenced by: '<S22>/2-D Lookup Table1'
   */
  real_T uDLookupTable1_bp01Data_at[6];/* Expression: [0 0.2 0.4 0.6 0.8 1]
                                        * Referenced by: '<S22>/2-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp02Data_j[14];
  /* Expression: [0 2000 4000 6000 8000 10000 12000 14000 15000 16000 17000 18000 20000 22000]
   * Referenced by: '<S22>/2-D Lookup Table1'
   */
  real_T TargetSlip_Value_n;           /* Expression: 0.1
                                        * Referenced by: '<S22>/TargetSlip'
                                        */
  real_T Gain_Gain_h;                  /* Expression: -1
                                        * Referenced by: '<S22>/Gain'
                                        */
  real_T Gain2_Gain_f;                 /* Expression: -1
                                        * Referenced by: '<S22>/Gain2'
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
                                        * Referenced by: '<S4>/Launch Control spd limit'
                                        */
  real_T TractionMode_Value;           /* Expression: 0
                                        * Referenced by: '<Root>/TractionMode'
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
  real_T FullThrottle_Value;           /* Expression: 1
                                        * Referenced by: '<Root>/FullThrottle'
                                        */
  uint32_T uDLookupTable1_maxIndex[2];
                                  /* Computed Parameter: uDLookupTable1_maxIndex
                                   * Referenced by: '<S8>/2-D Lookup Table1'
                                   */
  uint32_T uDLookupTable1_maxIndex_f[2];
                                /* Computed Parameter: uDLookupTable1_maxIndex_f
                                 * Referenced by: '<S9>/2-D Lookup Table1'
                                 */
  uint32_T uDLookupTable1_maxIndex_m[2];
                                /* Computed Parameter: uDLookupTable1_maxIndex_m
                                 * Referenced by: '<S10>/2-D Lookup Table1'
                                 */
  uint32_T uDLookupTable1_maxIndex_g[2];
                                /* Computed Parameter: uDLookupTable1_maxIndex_g
                                 * Referenced by: '<S11>/2-D Lookup Table1'
                                 */
  uint32_T uDLookupTable_maxIndex[2];
                                   /* Computed Parameter: uDLookupTable_maxIndex
                                    * Referenced by: '<S40>/2-D Lookup Table'
                                    */
  uint32_T uDLookupTable_maxIndex_a[2];
                                 /* Computed Parameter: uDLookupTable_maxIndex_a
                                  * Referenced by: '<S21>/2-D Lookup Table'
                                  */
  uint32_T uDLookupTable1_maxIndex_o[2];
                                /* Computed Parameter: uDLookupTable1_maxIndex_o
                                 * Referenced by: '<S21>/2-D Lookup Table1'
                                 */
  uint32_T uDLookupTable_maxIndex_n[2];
                                 /* Computed Parameter: uDLookupTable_maxIndex_n
                                  * Referenced by: '<S22>/2-D Lookup Table'
                                  */
  uint32_T uDLookupTable1_maxIndex_m1[2];
                               /* Computed Parameter: uDLookupTable1_maxIndex_m1
                                * Referenced by: '<S22>/2-D Lookup Table1'
                                */
  P_IfActionSubsystem_CombinedTractionLaunchControl_p_T IfActionSubsystem1_j;/* '<S40>/If Action Subsystem1' */
  P_IfActionSubsystem_CombinedTractionLaunchControl_p_T IfActionSubsystem_lk;/* '<S40>/If Action Subsystem' */
  P_IfActionSubsystem_CombinedTractionLaunchControl_p_T IfActionSubsystem_a;/* '<S34>/If Action Subsystem' */
  P_IfActionSubsystem1_CombinedTractionLaunchControl_T IfActionSubsystem1_pa;/* '<S33>/If Action Subsystem1' */
  P_IfActionSubsystem_CombinedTractionLaunchControl_p_T IfActionSubsystem_m;/* '<S33>/If Action Subsystem' */
  P_IfActionSubsystem1_CombinedTractionLaunchControl_T IfActionSubsystem1_o;/* '<S24>/If Action Subsystem1' */
  P_IfActionSubsystem_CombinedTractionLaunchControl_p_T IfActionSubsystem_o;/* '<S24>/If Action Subsystem' */
  P_IfActionSubsystem1_CombinedTractionLaunchControl_T IfActionSubsystem1_i;/* '<S23>/If Action Subsystem1' */
  P_IfActionSubsystem_CombinedTractionLaunchControl_p_T IfActionSubsystem_i;/* '<S23>/If Action Subsystem' */
  P_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem1_pg;/* '<S11>/If Action Subsystem1' */
  P_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem_f;/* '<S11>/If Action Subsystem' */
  P_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem1_p;/* '<S10>/If Action Subsystem1' */
  P_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem_l;/* '<S10>/If Action Subsystem' */
  P_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem1_b;/* '<S9>/If Action Subsystem1' */
  P_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem_p;/* '<S9>/If Action Subsystem' */
  P_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem1_g;/* '<S8>/If Action Subsystem1' */
  P_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem_n;/* '<S8>/If Action Subsystem' */
  P_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem1;/* '<Root>/If Action Subsystem1' */
  P_IfActionSubsystem_CombinedTractionLaunchControl_T IfActionSubsystem;/* '<Root>/If Action Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_CombinedTractionLaunchControl_T {
  const char_T *errorStatus;
  B_CombinedTractionLaunchControl_T *blockIO;
  ExtU_CombinedTractionLaunchControl_T *inputs;
  ExtY_CombinedTractionLaunchControl_T *outputs;
  DW_CombinedTractionLaunchControl_T *dwork;
};

/* Block parameters (default storage) */
extern P_CombinedTractionLaunchControl_T CombinedTractionLaunchControl_P;

/* External data declarations for dependent source files */
extern const cmPowerTrainXWDOut
  CombinedTractionLaunchControl_rtZcmPowerTrainXWDOut;/* cmPowerTrainXWDOut ground */
extern const char *RT_MEMORY_ALLOCATION_ERROR;
extern P_CombinedTractionLaunchControl_T CombinedTractionLaunchControl_P;/* parameters */

/* Model entry point functions */
struct tInfos;
extern RT_MODEL_CombinedTractionLaunchControl_T *CombinedTractionLaunchControl(
    struct tInfos *inf);
extern void CombinedTractionLaunchControl_initialize
  (RT_MODEL_CombinedTractionLaunchControl_T *const
   CombinedTractionLaunchControl_M);
extern void CombinedTractionLaunchControl_step
  (RT_MODEL_CombinedTractionLaunchControl_T *const
   CombinedTractionLaunchControl_M);
extern void CombinedTractionLaunchControl_terminate
  (RT_MODEL_CombinedTractionLaunchControl_T * CombinedTractionLaunchControl_M);

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
 * '<Root>' : 'CombinedTractionLaunchControl'
 * '<S1>'   : 'CombinedTractionLaunchControl/IF_Out_Selector'
 * '<S2>'   : 'CombinedTractionLaunchControl/If Action Subsystem'
 * '<S3>'   : 'CombinedTractionLaunchControl/If Action Subsystem1'
 * '<S4>'   : 'CombinedTractionLaunchControl/Subsystem4'
 * '<S5>'   : 'CombinedTractionLaunchControl/Subsystem4/Launch Control'
 * '<S6>'   : 'CombinedTractionLaunchControl/Subsystem4/Traction Control'
 * '<S7>'   : 'CombinedTractionLaunchControl/Subsystem4/Launch Control/LaunchControl'
 * '<S8>'   : 'CombinedTractionLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem'
 * '<S9>'   : 'CombinedTractionLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem1'
 * '<S10>'  : 'CombinedTractionLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem2'
 * '<S11>'  : 'CombinedTractionLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem3'
 * '<S12>'  : 'CombinedTractionLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem/If Action Subsystem'
 * '<S13>'  : 'CombinedTractionLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem/If Action Subsystem1'
 * '<S14>'  : 'CombinedTractionLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem1/If Action Subsystem'
 * '<S15>'  : 'CombinedTractionLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem1/If Action Subsystem1'
 * '<S16>'  : 'CombinedTractionLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem2/If Action Subsystem'
 * '<S17>'  : 'CombinedTractionLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem2/If Action Subsystem1'
 * '<S18>'  : 'CombinedTractionLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem3/If Action Subsystem'
 * '<S19>'  : 'CombinedTractionLaunchControl/Subsystem4/Launch Control/LaunchControl/Subsystem3/If Action Subsystem1'
 * '<S20>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control'
 * '<S21>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem'
 * '<S22>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem1'
 * '<S23>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem/Subsystem'
 * '<S24>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem/Subsystem1'
 * '<S25>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem/Subsystem/If Action Subsystem'
 * '<S26>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem/Subsystem/If Action Subsystem1'
 * '<S27>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem/Subsystem/If Action Subsystem1/If Action Subsystem'
 * '<S28>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem/Subsystem/If Action Subsystem1/If Action Subsystem1'
 * '<S29>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem/Subsystem1/If Action Subsystem'
 * '<S30>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem/Subsystem1/If Action Subsystem1'
 * '<S31>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem/Subsystem1/If Action Subsystem1/If Action Subsystem'
 * '<S32>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem/Subsystem1/If Action Subsystem1/If Action Subsystem1'
 * '<S33>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem1/Subsystem1'
 * '<S34>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem1/Subsystem2'
 * '<S35>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem1/Subsystem1/If Action Subsystem'
 * '<S36>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem1/Subsystem1/If Action Subsystem1'
 * '<S37>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem1/Subsystem1/If Action Subsystem1/If Action Subsystem'
 * '<S38>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem1/Subsystem1/If Action Subsystem1/If Action Subsystem1'
 * '<S39>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem1/Subsystem2/If Action Subsystem'
 * '<S40>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem1/Subsystem2/If Action Subsystem1'
 * '<S41>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem1/Subsystem2/If Action Subsystem1/If Action Subsystem'
 * '<S42>'  : 'CombinedTractionLaunchControl/Subsystem4/Traction Control/Traction Control/Subsystem1/Subsystem2/If Action Subsystem1/If Action Subsystem1'
 */
#endif                         /* RTW_HEADER_CombinedTractionLaunchControl_h_ */
