/*
 * launchCtrl.h
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

#ifndef RTW_HEADER_launchCtrl_h_
#define RTW_HEADER_launchCtrl_h_
#include <math.h>
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef launchCtrl_COMMON_INCLUDES_
# define launchCtrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* launchCtrl_COMMON_INCLUDES_ */

#include "launchCtrl_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

/* Block signals for system '<S2>/If Action Subsystem' */
typedef struct {
  real_T In1;                          /* '<S6>/In1' */
} B_IfActionSubsystem_launchCtr_T;

/* Block signals (default storage) */
typedef struct {
  B_IfActionSubsystem_launchCtr_T IfActionSubsystem1_c;/* '<S5>/If Action Subsystem1' */
  B_IfActionSubsystem_launchCtr_T IfActionSubsystem_da;/* '<S5>/If Action Subsystem' */
  B_IfActionSubsystem_launchCtr_T IfActionSubsystem1_m;/* '<S4>/If Action Subsystem1' */
  B_IfActionSubsystem_launchCtr_T IfActionSubsystem_j;/* '<S4>/If Action Subsystem' */
  B_IfActionSubsystem_launchCtr_T IfActionSubsystem1_e;/* '<S3>/If Action Subsystem1' */
  B_IfActionSubsystem_launchCtr_T IfActionSubsystem_d;/* '<S3>/If Action Subsystem' */
  B_IfActionSubsystem_launchCtr_T IfActionSubsystem1;/* '<S2>/If Action Subsystem1' */
  B_IfActionSubsystem_launchCtr_T IfActionSubsystem;/* '<S2>/If Action Subsystem' */
} B_launchCtrl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *LoggedData[4];
  } Scope_PWORK_m;                     /* '<S2>/Scope' */

  struct {
    void *LoggedData[4];
  } Scope_PWORK_f;                     /* '<S3>/Scope' */

  struct {
    void *LoggedData[4];
  } Scope_PWORK_e;                     /* '<S4>/Scope' */

  struct {
    void *LoggedData[4];
  } Scope_PWORK_mk;                    /* '<S5>/Scope' */
} DW_launchCtrl_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Gas;                          /* '<Root>/Gas' */
  real_T FL_vel;                       /* '<Root>/FL_vel' */
  real_T FR_vel1;                      /* '<Root>/FR_vel1' */
  real_T RL_vel1;                      /* '<Root>/RL_vel1' */
  real_T RR_vel2;                      /* '<Root>/RR_vel2' */
} ExtU_launchCtrl_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T FL_trq;                       /* '<Root>/FL_trq' */
  real_T FL_trq_inv;                   /* '<Root>/FL_trq_inv' */
  real_T FR_trq1;                      /* '<Root>/FR_trq1' */
  real_T FR_trq_inv1;                  /* '<Root>/FR_trq_inv1' */
  real_T RL_trq1;                      /* '<Root>/RL_trq1' */
  real_T RL_trq_inv1;                  /* '<Root>/RL_trq_inv1' */
  real_T RR_trq1;                      /* '<Root>/RR_trq1' */
  real_T RR_trq_inv1;                  /* '<Root>/RR_trq_inv1' */
} ExtY_launchCtrl_T;

/* Parameters for system: '<S2>/If Action Subsystem' */
struct P_IfActionSubsystem_launchCtr_T_ {
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S6>/Out1'
                                        */
};

/* Parameters (default storage) */
struct P_launchCtrl_T_ {
  real_T Constant_Value;               /* Expression: 0.8
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T GearRatio_Value;              /* Expression: 12
                                        * Referenced by: '<S2>/GearRatio'
                                        */
  real_T Constant1_Value;              /* Expression: 580
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T uDLookupTable_tableData[6];   /* Expression: [300,300,150,100,75,20]
                                        * Referenced by: '<S2>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[6];   /* Expression: [0,700,1400,2100,3000,8000]
                                       * Referenced by: '<S2>/1-D Lookup Table'
                                       */
  real_T uDLookupTable1_tableData[6];  /* Expression: [200,200,100,100,75,20]
                                        * Referenced by: '<S2>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp01Data[6];  /* Expression: [0,700,1400,2100,3000,8000]
                                       * Referenced by: '<S2>/1-D Lookup Table1'
                                       */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S2>/Gain'
                                        */
  real_T GearRatio_Value_a;            /* Expression: 12
                                        * Referenced by: '<S3>/GearRatio'
                                        */
  real_T Constant2_Value;              /* Expression: 580
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T uDLookupTable_tableData_k[6]; /* Expression: [300,300,150,100,75,20]
                                        * Referenced by: '<S3>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_i[6]; /* Expression: [0,700,1400,2100,3000,8000]
                                       * Referenced by: '<S3>/1-D Lookup Table'
                                       */
  real_T uDLookupTable1_tableData_p[6];/* Expression: [200,200,100,100,75,20]
                                        * Referenced by: '<S3>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp01Data_d[6];/* Expression: [0,700,1400,2100,3000,8000]
                                       * Referenced by: '<S3>/1-D Lookup Table1'
                                       */
  real_T Gain_Gain_m;                  /* Expression: -1
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T GearRatio_Value_m;            /* Expression: 12
                                        * Referenced by: '<S4>/GearRatio'
                                        */
  real_T Constant3_Value;              /* Expression: 580
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T uDLookupTable_tableData_b[6]; /* Expression: [300,300,150,100,75,20]
                                        * Referenced by: '<S4>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_o[6]; /* Expression: [0,700,1400,2100,3000,8000]
                                       * Referenced by: '<S4>/1-D Lookup Table'
                                       */
  real_T uDLookupTable1_tableData_d[6];/* Expression: [200,200,100,100,75,20]
                                        * Referenced by: '<S4>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp01Data_c[6];/* Expression: [0,700,1400,2100,3000,8000]
                                       * Referenced by: '<S4>/1-D Lookup Table1'
                                       */
  real_T Gain_Gain_f;                  /* Expression: -1
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T GearRatio_Value_d;            /* Expression: 12
                                        * Referenced by: '<S5>/GearRatio'
                                        */
  real_T Constant4_Value;              /* Expression: 580
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T uDLookupTable_tableData_kt[6];/* Expression: [300,300,150,100,75,20]
                                        * Referenced by: '<S5>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_e[6]; /* Expression: [0,700,1400,2100,3000,8000]
                                       * Referenced by: '<S5>/1-D Lookup Table'
                                       */
  real_T uDLookupTable1_tableData_n[6];/* Expression: [200,200,100,100,75,20]
                                        * Referenced by: '<S5>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp01Data_g[6];/* Expression: [0,700,1400,2100,3000,8000]
                                       * Referenced by: '<S5>/1-D Lookup Table1'
                                       */
  real_T Gain_Gain_b;                  /* Expression: -1
                                        * Referenced by: '<S5>/Gain'
                                        */
  P_IfActionSubsystem_launchCtr_T IfActionSubsystem1_c;/* '<S5>/If Action Subsystem1' */
  P_IfActionSubsystem_launchCtr_T IfActionSubsystem_da;/* '<S5>/If Action Subsystem' */
  P_IfActionSubsystem_launchCtr_T IfActionSubsystem1_m;/* '<S4>/If Action Subsystem1' */
  P_IfActionSubsystem_launchCtr_T IfActionSubsystem_j;/* '<S4>/If Action Subsystem' */
  P_IfActionSubsystem_launchCtr_T IfActionSubsystem1_e;/* '<S3>/If Action Subsystem1' */
  P_IfActionSubsystem_launchCtr_T IfActionSubsystem_d;/* '<S3>/If Action Subsystem' */
  P_IfActionSubsystem_launchCtr_T IfActionSubsystem1;/* '<S2>/If Action Subsystem1' */
  P_IfActionSubsystem_launchCtr_T IfActionSubsystem;/* '<S2>/If Action Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_launchCtrl_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_launchCtrl_T launchCtrl_P;

/* Block signals (default storage) */
extern B_launchCtrl_T launchCtrl_B;

/* Block states (default storage) */
extern DW_launchCtrl_T launchCtrl_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_launchCtrl_T launchCtrl_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_launchCtrl_T launchCtrl_Y;

/* Model entry point functions */
extern void launchCtrl_initialize(void);
extern void launchCtrl_step(void);
extern void launchCtrl_terminate(void);

/* Real-time Model object */
extern RT_MODEL_launchCtrl_T *const launchCtrl_M;

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
 * '<Root>' : 'launchCtrl'
 * '<S1>'   : 'launchCtrl/Subsystem4'
 * '<S2>'   : 'launchCtrl/Subsystem4/Subsystem'
 * '<S3>'   : 'launchCtrl/Subsystem4/Subsystem1'
 * '<S4>'   : 'launchCtrl/Subsystem4/Subsystem2'
 * '<S5>'   : 'launchCtrl/Subsystem4/Subsystem3'
 * '<S6>'   : 'launchCtrl/Subsystem4/Subsystem/If Action Subsystem'
 * '<S7>'   : 'launchCtrl/Subsystem4/Subsystem/If Action Subsystem1'
 * '<S8>'   : 'launchCtrl/Subsystem4/Subsystem1/If Action Subsystem'
 * '<S9>'   : 'launchCtrl/Subsystem4/Subsystem1/If Action Subsystem1'
 * '<S10>'  : 'launchCtrl/Subsystem4/Subsystem2/If Action Subsystem'
 * '<S11>'  : 'launchCtrl/Subsystem4/Subsystem2/If Action Subsystem1'
 * '<S12>'  : 'launchCtrl/Subsystem4/Subsystem3/If Action Subsystem'
 * '<S13>'  : 'launchCtrl/Subsystem4/Subsystem3/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_launchCtrl_h_ */
