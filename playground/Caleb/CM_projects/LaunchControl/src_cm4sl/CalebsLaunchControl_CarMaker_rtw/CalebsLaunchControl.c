/*
 * CalebsLaunchControl.c
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

#include <infoc.h>
#include <Log.h>
#include <InfoParam.h>
#include <DataDict.h>
#include <MatSupp.h>
#include "CalebsLaunchControl.h"
#include "CalebsLaunchControl_private.h"
#include "CalebsLaunchControl_wrap.h"

/* CarMaker: Compile- and link-time checks for the right Matlab version. */
#if MATSUPP_NUMVER == 90700

/* The following statement will cause an "unresolved symbol" error when
   linking with a MatSupp library built for the wrong Matlab version. */
extern int MATSUPP_VARNAME(MatSupp, MATSUPP_NUMVER);
void *MATSUPP_VARNAME(MODEL, MATSUPP_NUMVER) = &MATSUPP_VARNAME(MatSupp,
  MATSUPP_NUMVER);

#else
# error Compiler options unsuitable for C code created with Matlab 9.7
#endif

const cmPowerTrainXWDOut CalebsLaunchControl_rtZcmPowerTrainXWDOut = {
  0.0,                                 /* ECU_Status */

  {
    0.0,                               /* Engine_on */
    0.0,                               /* rotv */
    0.0,                               /* Trq */
    0.0,                               /* TrqDrag */
    0.0,                               /* TrqFull */
    0.0,                               /* TrqOpt */
    0.0                                /* FuelFlow */
  },                                   /* EngineOut */
  0.0,                                 /* MCU_Status */

  {
    0.0,                               /* rotv */
    0.0,                               /* Trq */
    0.0,                               /* TrqMot_max */
    0.0,                               /* TrqGen_max */
    0.0,                               /* PwrElec */

    {
      0.0,                             /* FL */
      0.0,                             /* FR */
      0.0,                             /* RL */
      0.0                              /* RR */
    }                                  /* i_M2W */
  },                                   /* ISGOut */

  {
    {
      0.0,                             /* rotv */
      0.0,                             /* Trq */
      0.0,                             /* TrqMot_max */
      0.0,                             /* TrqGen_max */
      0.0,                             /* PwrElec */

      {
        0.0,                           /* FL */
        0.0,                           /* FR */
        0.0,                           /* RL */
        0.0                            /* RR */
      }                                /* i_M2W */
    },                                 /* m0 */

    {
      0.0,                             /* rotv */
      0.0,                             /* Trq */
      0.0,                             /* TrqMot_max */
      0.0,                             /* TrqGen_max */
      0.0,                             /* PwrElec */

      {
        0.0,                           /* FL */
        0.0,                           /* FR */
        0.0,                           /* RL */
        0.0                            /* RR */
      }                                /* i_M2W */
    },                                 /* m1 */

    {
      0.0,                             /* rotv */
      0.0,                             /* Trq */
      0.0,                             /* TrqMot_max */
      0.0,                             /* TrqGen_max */
      0.0,                             /* PwrElec */

      {
        0.0,                           /* FL */
        0.0,                           /* FR */
        0.0,                           /* RL */
        0.0                            /* RR */
      }                                /* i_M2W */
    },                                 /* m2 */

    {
      0.0,                             /* rotv */
      0.0,                             /* Trq */
      0.0,                             /* TrqMot_max */
      0.0,                             /* TrqGen_max */
      0.0,                             /* PwrElec */

      {
        0.0,                           /* FL */
        0.0,                           /* FR */
        0.0,                           /* RL */
        0.0                            /* RR */
      }                                /* i_M2W */
    }                                  /* m3 */
  },                                   /* MotorOut */
  0.0,                                 /* TCU_Status */

  {
    0.0,                               /* Pos */
    0.0,                               /* rotv_in */
    0.0,                               /* rotv_out */
    0.0,                               /* Trq_in */
    0.0,                               /* Trq_out */
    0.0                                /* i_TrqIn2Out */
  },                                   /* ClutchOut */

  {
    0.0,                               /* GearNo */
    0.0,                               /* GearNo_dis */
    0.0,                               /* Trq_DriveSrc_trg */
    0.0,                               /* i */
    0.0,                               /* rotv_in */
    0.0,                               /* rotv_out */
    0.0,                               /* Trq_in */
    0.0,                               /* Trq_out */

    {
      0.0,                             /* Pos */
      0.0,                             /* rotv_in */
      0.0,                             /* rotv_out */
      0.0,                             /* Trq_in */
      0.0,                             /* Trq_out */
      0.0                              /* i_TrqIn2Out */
    },                                 /* Clutch */

    {
      0.0,                             /* Pos */
      0.0,                             /* rotv_in */
      0.0,                             /* rotv_out */
      0.0,                             /* Trq_in */
      0.0,                             /* Trq_out */
      0.0                              /* i_TrqIn2Out */
    }                                  /* Clutch_dis */
  },                                   /* GearBoxOut */

  {
    {
      0.0,                             /* GearNo */
      0.0,                             /* GearNo_dis */
      0.0,                             /* Trq_DriveSrc_trg */
      0.0,                             /* i */
      0.0,                             /* rotv_in */
      0.0,                             /* rotv_out */
      0.0,                             /* Trq_in */
      0.0,                             /* Trq_out */

      {
        0.0,                           /* Pos */
        0.0,                           /* rotv_in */
        0.0,                           /* rotv_out */
        0.0,                           /* Trq_in */
        0.0,                           /* Trq_out */
        0.0                            /* i_TrqIn2Out */
      },                               /* Clutch */

      {
        0.0,                           /* Pos */
        0.0,                           /* rotv_in */
        0.0,                           /* rotv_out */
        0.0,                           /* Trq_in */
        0.0,                           /* Trq_out */
        0.0                            /* i_TrqIn2Out */
      }                                /* Clutch_dis */
    },                                 /* GB_m0 */

    {
      0.0,                             /* GearNo */
      0.0,                             /* GearNo_dis */
      0.0,                             /* Trq_DriveSrc_trg */
      0.0,                             /* i */
      0.0,                             /* rotv_in */
      0.0,                             /* rotv_out */
      0.0,                             /* Trq_in */
      0.0,                             /* Trq_out */

      {
        0.0,                           /* Pos */
        0.0,                           /* rotv_in */
        0.0,                           /* rotv_out */
        0.0,                           /* Trq_in */
        0.0,                           /* Trq_out */
        0.0                            /* i_TrqIn2Out */
      },                               /* Clutch */

      {
        0.0,                           /* Pos */
        0.0,                           /* rotv_in */
        0.0,                           /* rotv_out */
        0.0,                           /* Trq_in */
        0.0,                           /* Trq_out */
        0.0                            /* i_TrqIn2Out */
      }                                /* Clutch_dis */
    },                                 /* GB_m1 */

    {
      0.0,                             /* GearNo */
      0.0,                             /* GearNo_dis */
      0.0,                             /* Trq_DriveSrc_trg */
      0.0,                             /* i */
      0.0,                             /* rotv_in */
      0.0,                             /* rotv_out */
      0.0,                             /* Trq_in */
      0.0,                             /* Trq_out */

      {
        0.0,                           /* Pos */
        0.0,                           /* rotv_in */
        0.0,                           /* rotv_out */
        0.0,                           /* Trq_in */
        0.0,                           /* Trq_out */
        0.0                            /* i_TrqIn2Out */
      },                               /* Clutch */

      {
        0.0,                           /* Pos */
        0.0,                           /* rotv_in */
        0.0,                           /* rotv_out */
        0.0,                           /* Trq_in */
        0.0,                           /* Trq_out */
        0.0                            /* i_TrqIn2Out */
      }                                /* Clutch_dis */
    },                                 /* GB_m2 */

    {
      0.0,                             /* GearNo */
      0.0,                             /* GearNo_dis */
      0.0,                             /* Trq_DriveSrc_trg */
      0.0,                             /* i */
      0.0,                             /* rotv_in */
      0.0,                             /* rotv_out */
      0.0,                             /* Trq_in */
      0.0,                             /* Trq_out */

      {
        0.0,                           /* Pos */
        0.0,                           /* rotv_in */
        0.0,                           /* rotv_out */
        0.0,                           /* Trq_in */
        0.0,                           /* Trq_out */
        0.0                            /* i_TrqIn2Out */
      },                               /* Clutch */

      {
        0.0,                           /* Pos */
        0.0,                           /* rotv_in */
        0.0,                           /* rotv_out */
        0.0,                           /* Trq_in */
        0.0,                           /* Trq_out */
        0.0                            /* i_TrqIn2Out */
      }                                /* Clutch_dis */
    }                                  /* GB_m3 */
  },                                   /* GearBoxM_Out */
  0.0,                                 /* BCU_Status */

  {
    0.0,                               /* SOC */
    0.0,                               /* SOH */
    0.0,                               /* Current */
    0.0,                               /* AOC */
    0.0,                               /* Temp */
    0.0,                               /* Energy */
    0.0                                /* Pwr_max */
  },                                   /* BattLVOut */

  {
    0.0,                               /* SOC */
    0.0,                               /* SOH */
    0.0,                               /* Current */
    0.0,                               /* AOC */
    0.0,                               /* Temp */
    0.0,                               /* Energy */
    0.0                                /* Pwr_max */
  },                                   /* BattHVOut */

  {
    0.0,                               /* Pwr_LV */
    0.0,                               /* Pwr_HV1 */
    0.0,                               /* Pwr_HV2 */
    0.0,                               /* Voltage_LV */
    0.0,                               /* Voltage_HV1 */
    0.0,                               /* Voltage_HV2 */
    0.0,                               /* Pwr_HV1toLV */
    0.0,                               /* Pwr_HV1toHV2 */
    0.0,                               /* Pwr_HV1toLV_max */
    0.0,                               /* Pwr_HV1toHV2_max */
    0.0,                               /* Eta_HV1toLV */
    0.0                                /* Eta_HV1toHV2 */
  },                                   /* PwrSupplyOut */

  {
    0.0,                               /* rx */
    0.0,                               /* ry */
    0.0                                /* rz */
  },                                   /* Trq_Supp2Bdy1 */

  {
    0.0,                               /* rx */
    0.0,                               /* ry */
    0.0                                /* rz */
  },                                   /* Trq_Supp2Bdy1B */

  {
    0.0,                               /* rx */
    0.0                                /* ry */
  },                                   /* Trq_Supp2BdyEng */
  0.0,                                 /* DL_iDiff_mean */

  {
    {
      0.0,                             /* Inert_in */
      0.0,                             /* Trq_Drive */
      0.0                              /* Trq_Supp2WC */
    },                                 /* FL */

    {
      0.0,                             /* Inert_in */
      0.0,                             /* Trq_Drive */
      0.0                              /* Trq_Supp2WC */
    },                                 /* FR */

    {
      0.0,                             /* Inert_in */
      0.0,                             /* Trq_Drive */
      0.0                              /* Trq_Supp2WC */
    },                                 /* RL */

    {
      0.0,                             /* Inert_in */
      0.0,                             /* Trq_Drive */
      0.0                              /* Trq_Supp2WC */
    }                                  /* RR */
  },                                   /* WheelOut */

  {
    0.0,                               /* PlanetGear */
    0.0,                               /* Diffs */
    0.0,                               /* Shafts */
    0.0,                               /* Spring_DL */
    0.0,                               /* Inert_DL */
    0.0,                               /* Inert */
    0.0                                /* PowerSupply */
  }                                    /* PowerDelta */
} ;                                    /* cmPowerTrainXWDOut ground */

real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

/*
 * System initialize for action system:
 *    '<S3>/If Action Subsystem'
 *    '<S3>/If Action Subsystem1'
 *    '<S4>/If Action Subsystem'
 *    '<S4>/If Action Subsystem1'
 *    '<S5>/If Action Subsystem'
 *    '<S5>/If Action Subsystem1'
 *    '<S6>/If Action Subsystem'
 *    '<S6>/If Action Subsystem1'
 */
void CalebsLaunchControl_IfActionSubsystem_Init
  (B_IfActionSubsystem_CalebsLaunchControl_T *localB,
   P_IfActionSubsystem_CalebsLaunchControl_T *localP)
{
  /* SystemInitialize for Outport: '<S7>/Out1' */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for action system:
 *    '<S3>/If Action Subsystem'
 *    '<S3>/If Action Subsystem1'
 *    '<S4>/If Action Subsystem'
 *    '<S4>/If Action Subsystem1'
 *    '<S5>/If Action Subsystem'
 *    '<S5>/If Action Subsystem1'
 *    '<S6>/If Action Subsystem'
 *    '<S6>/If Action Subsystem1'
 */
void CalebsLaunchControl_IfActionSubsystem(real_T rtu_In1,
  B_IfActionSubsystem_CalebsLaunchControl_T *localB)
{
  /* Inport: '<S7>/In1' */
  localB->In1 = rtu_In1;
}

/*
 * Termination for action system:
 *    '<S3>/If Action Subsystem'
 *    '<S3>/If Action Subsystem1'
 *    '<S4>/If Action Subsystem'
 *    '<S4>/If Action Subsystem1'
 *    '<S5>/If Action Subsystem'
 *    '<S5>/If Action Subsystem1'
 *    '<S6>/If Action Subsystem'
 *    '<S6>/If Action Subsystem1'
 */
void CalebsLaunchControl_IfActionSubsystem_Term(void)
{
}

/* Model step function */
void CalebsLaunchControl_step(RT_MODEL_CalebsLaunchControl_T *const
  CalebsLaunchControl_M)
{
  B_CalebsLaunchControl_T *CalebsLaunchControl_B = ((B_CalebsLaunchControl_T *)
    CalebsLaunchControl_M->blockIO);
  ExtU_CalebsLaunchControl_T *CalebsLaunchControl_U =
    (ExtU_CalebsLaunchControl_T *) CalebsLaunchControl_M->inputs;
  ExtY_CalebsLaunchControl_T *CalebsLaunchControl_Y =
    (ExtY_CalebsLaunchControl_T *) CalebsLaunchControl_M->outputs;
  real_T rtb_uDLookupTable;
  real_T rtb_Product1;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/EngineOut.Engine_on'
   *  Constant: '<S1>/EngineOut.FuelFlow'
   *  Constant: '<S1>/EngineOut.Trq'
   *  Constant: '<S1>/EngineOut.TrqDrag'
   *  Constant: '<S1>/EngineOut.TrqFull'
   *  Constant: '<S1>/EngineOut.TrqOpt'
   *  Constant: '<S1>/EngineOut.rotv'
   */
  CalebsLaunchControl_Y->ToCM.EngineOut.Engine_on =
    CalebsLaunchControl_P.EngineOutEngine_on_Value;
  CalebsLaunchControl_Y->ToCM.EngineOut.rotv =
    CalebsLaunchControl_P.EngineOutrotv_Value;
  CalebsLaunchControl_Y->ToCM.EngineOut.Trq =
    CalebsLaunchControl_P.EngineOutTrq_Value;
  CalebsLaunchControl_Y->ToCM.EngineOut.TrqDrag =
    CalebsLaunchControl_P.EngineOutTrqDrag_Value;
  CalebsLaunchControl_Y->ToCM.EngineOut.TrqFull =
    CalebsLaunchControl_P.EngineOutTrqFull_Value;
  CalebsLaunchControl_Y->ToCM.EngineOut.TrqOpt =
    CalebsLaunchControl_P.EngineOutTrqOpt_Value;
  CalebsLaunchControl_Y->ToCM.EngineOut.FuelFlow =
    CalebsLaunchControl_P.EngineOutFuelFlow_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ISGOut.i_M2W.FL'
   *  Constant: '<S1>/ISGOut.i_M2W.FR'
   *  Constant: '<S1>/ISGOut.i_M2W.RL'
   *  Constant: '<S1>/ISGOut.i_M2W.RR'
   */
  CalebsLaunchControl_Y->ToCM.ISGOut.i_M2W.FL =
    CalebsLaunchControl_P.ISGOuti_M2WFL_Value;
  CalebsLaunchControl_Y->ToCM.ISGOut.i_M2W.FR =
    CalebsLaunchControl_P.ISGOuti_M2WFR_Value;
  CalebsLaunchControl_Y->ToCM.ISGOut.i_M2W.RL =
    CalebsLaunchControl_P.ISGOuti_M2WRL_Value;
  CalebsLaunchControl_Y->ToCM.ISGOut.i_M2W.RR =
    CalebsLaunchControl_P.ISGOuti_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ISGOut.PwrElec'
   *  Constant: '<S1>/ISGOut.Trq'
   *  Constant: '<S1>/ISGOut.TrqGen_max'
   *  Constant: '<S1>/ISGOut.TrqMot_max'
   *  Constant: '<S1>/ISGOut.rotv'
   */
  CalebsLaunchControl_Y->ToCM.ISGOut.rotv =
    CalebsLaunchControl_P.ISGOutrotv_Value;
  CalebsLaunchControl_Y->ToCM.ISGOut.Trq = CalebsLaunchControl_P.ISGOutTrq_Value;
  CalebsLaunchControl_Y->ToCM.ISGOut.TrqMot_max =
    CalebsLaunchControl_P.ISGOutTrqMot_max_Value;
  CalebsLaunchControl_Y->ToCM.ISGOut.TrqGen_max =
    CalebsLaunchControl_P.ISGOutTrqGen_max_Value;
  CalebsLaunchControl_Y->ToCM.ISGOut.PwrElec =
    CalebsLaunchControl_P.ISGOutPwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m0.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.RR'
   */
  CalebsLaunchControl_Y->ToCM.MotorOut.m0.i_M2W.FL =
    CalebsLaunchControl_P.MotorOutm0i_M2WFL_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m0.i_M2W.FR =
    CalebsLaunchControl_P.MotorOutm0i_M2WFR_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m0.i_M2W.RL =
    CalebsLaunchControl_P.MotorOutm0i_M2WRL_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m0.i_M2W.RR =
    CalebsLaunchControl_P.MotorOutm0i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m0.PwrElec'
   *  Constant: '<S1>/MotorOut.m0.Trq'
   *  Constant: '<S1>/MotorOut.m0.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m0.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m0.rotv'
   */
  CalebsLaunchControl_Y->ToCM.MotorOut.m0.rotv =
    CalebsLaunchControl_P.MotorOutm0rotv_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m0.Trq =
    CalebsLaunchControl_P.MotorOutm0Trq_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m0.TrqMot_max =
    CalebsLaunchControl_P.MotorOutm0TrqMot_max_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m0.TrqGen_max =
    CalebsLaunchControl_P.MotorOutm0TrqGen_max_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m0.PwrElec =
    CalebsLaunchControl_P.MotorOutm0PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m1.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.RR'
   */
  CalebsLaunchControl_Y->ToCM.MotorOut.m1.i_M2W.FL =
    CalebsLaunchControl_P.MotorOutm1i_M2WFL_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m1.i_M2W.FR =
    CalebsLaunchControl_P.MotorOutm1i_M2WFR_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m1.i_M2W.RL =
    CalebsLaunchControl_P.MotorOutm1i_M2WRL_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m1.i_M2W.RR =
    CalebsLaunchControl_P.MotorOutm1i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m1.PwrElec'
   *  Constant: '<S1>/MotorOut.m1.Trq'
   *  Constant: '<S1>/MotorOut.m1.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m1.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m1.rotv'
   */
  CalebsLaunchControl_Y->ToCM.MotorOut.m1.rotv =
    CalebsLaunchControl_P.MotorOutm1rotv_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m1.Trq =
    CalebsLaunchControl_P.MotorOutm1Trq_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m1.TrqMot_max =
    CalebsLaunchControl_P.MotorOutm1TrqMot_max_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m1.TrqGen_max =
    CalebsLaunchControl_P.MotorOutm1TrqGen_max_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m1.PwrElec =
    CalebsLaunchControl_P.MotorOutm1PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m2.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.RR'
   */
  CalebsLaunchControl_Y->ToCM.MotorOut.m2.i_M2W.FL =
    CalebsLaunchControl_P.MotorOutm2i_M2WFL_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m2.i_M2W.FR =
    CalebsLaunchControl_P.MotorOutm2i_M2WFR_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m2.i_M2W.RL =
    CalebsLaunchControl_P.MotorOutm2i_M2WRL_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m2.i_M2W.RR =
    CalebsLaunchControl_P.MotorOutm2i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m2.PwrElec'
   *  Constant: '<S1>/MotorOut.m2.Trq'
   *  Constant: '<S1>/MotorOut.m2.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m2.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m2.rotv'
   */
  CalebsLaunchControl_Y->ToCM.MotorOut.m2.rotv =
    CalebsLaunchControl_P.MotorOutm2rotv_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m2.Trq =
    CalebsLaunchControl_P.MotorOutm2Trq_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m2.TrqMot_max =
    CalebsLaunchControl_P.MotorOutm2TrqMot_max_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m2.TrqGen_max =
    CalebsLaunchControl_P.MotorOutm2TrqGen_max_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m2.PwrElec =
    CalebsLaunchControl_P.MotorOutm2PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m3.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.RR'
   */
  CalebsLaunchControl_Y->ToCM.MotorOut.m3.i_M2W.FL =
    CalebsLaunchControl_P.MotorOutm3i_M2WFL_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m3.i_M2W.FR =
    CalebsLaunchControl_P.MotorOutm3i_M2WFR_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m3.i_M2W.RL =
    CalebsLaunchControl_P.MotorOutm3i_M2WRL_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m3.i_M2W.RR =
    CalebsLaunchControl_P.MotorOutm3i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m3.PwrElec'
   *  Constant: '<S1>/MotorOut.m3.Trq'
   *  Constant: '<S1>/MotorOut.m3.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m3.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m3.rotv'
   */
  CalebsLaunchControl_Y->ToCM.MotorOut.m3.rotv =
    CalebsLaunchControl_P.MotorOutm3rotv_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m3.Trq =
    CalebsLaunchControl_P.MotorOutm3Trq_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m3.TrqMot_max =
    CalebsLaunchControl_P.MotorOutm3TrqMot_max_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m3.TrqGen_max =
    CalebsLaunchControl_P.MotorOutm3TrqGen_max_Value;
  CalebsLaunchControl_Y->ToCM.MotorOut.m3.PwrElec =
    CalebsLaunchControl_P.MotorOutm3PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ClutchOut.Pos'
   *  Constant: '<S1>/ClutchOut.Trq_in'
   *  Constant: '<S1>/ClutchOut.Trq_out'
   *  Constant: '<S1>/ClutchOut.i_TrqIn2Out'
   *  Constant: '<S1>/ClutchOut.rotv_in'
   *  Constant: '<S1>/ClutchOut.rotv_out'
   */
  CalebsLaunchControl_Y->ToCM.ClutchOut.Pos =
    CalebsLaunchControl_P.ClutchOutPos_Value;
  CalebsLaunchControl_Y->ToCM.ClutchOut.rotv_in =
    CalebsLaunchControl_P.ClutchOutrotv_in_Value;
  CalebsLaunchControl_Y->ToCM.ClutchOut.rotv_out =
    CalebsLaunchControl_P.ClutchOutrotv_out_Value;
  CalebsLaunchControl_Y->ToCM.ClutchOut.Trq_in =
    CalebsLaunchControl_P.ClutchOutTrq_in_Value;
  CalebsLaunchControl_Y->ToCM.ClutchOut.Trq_out =
    CalebsLaunchControl_P.ClutchOutTrq_out_Value;
  CalebsLaunchControl_Y->ToCM.ClutchOut.i_TrqIn2Out =
    CalebsLaunchControl_P.ClutchOuti_TrqIn2Out_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/GearBoxOut.Clutch.Pos'
   *  Constant: '<S1>/GearBoxOut.Clutch.Trq_in'
   *  Constant: '<S1>/GearBoxOut.Clutch.Trq_out'
   *  Constant: '<S1>/GearBoxOut.Clutch.i_TrqIn2Out'
   *  Constant: '<S1>/GearBoxOut.Clutch.rotv_in'
   *  Constant: '<S1>/GearBoxOut.Clutch.rotv_out'
   *  Constant: '<S1>/GearBoxOut.Clutch_dis.Pos'
   *  Constant: '<S1>/GearBoxOut.Clutch_dis.Trq_in'
   *  Constant: '<S1>/GearBoxOut.Clutch_dis.Trq_out'
   *  Constant: '<S1>/GearBoxOut.Clutch_dis.i_TrqIn2Out'
   *  Constant: '<S1>/GearBoxOut.Clutch_dis.rotv_in'
   *  Constant: '<S1>/GearBoxOut.Clutch_dis.rotv_out'
   *  Constant: '<S1>/GearBoxOut.GearNo'
   *  Constant: '<S1>/GearBoxOut.GearNo_dis'
   *  Constant: '<S1>/GearBoxOut.Trq_DriveSrc_trg'
   *  Constant: '<S1>/GearBoxOut.Trq_in'
   *  Constant: '<S1>/GearBoxOut.Trq_out'
   *  Constant: '<S1>/GearBoxOut.i'
   *  Constant: '<S1>/GearBoxOut.rotv_in'
   *  Constant: '<S1>/GearBoxOut.rotv_out'
   */
  CalebsLaunchControl_Y->ToCM.GearBoxOut.GearNo =
    CalebsLaunchControl_P.GearBoxOutGearNo_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.GearNo_dis =
    CalebsLaunchControl_P.GearBoxOutGearNo_dis_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.Trq_DriveSrc_trg =
    CalebsLaunchControl_P.GearBoxOutTrq_DriveSrc_trg_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.i =
    CalebsLaunchControl_P.GearBoxOuti_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.rotv_in =
    CalebsLaunchControl_P.GearBoxOutrotv_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.rotv_out =
    CalebsLaunchControl_P.GearBoxOutrotv_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.Trq_in =
    CalebsLaunchControl_P.GearBoxOutTrq_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.Trq_out =
    CalebsLaunchControl_P.GearBoxOutTrq_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.Clutch.Pos =
    CalebsLaunchControl_P.GearBoxOutClutchPos_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.Clutch.rotv_in =
    CalebsLaunchControl_P.GearBoxOutClutchrotv_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.Clutch.rotv_out =
    CalebsLaunchControl_P.GearBoxOutClutchrotv_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.Clutch.Trq_in =
    CalebsLaunchControl_P.GearBoxOutClutchTrq_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.Clutch.Trq_out =
    CalebsLaunchControl_P.GearBoxOutClutchTrq_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.Clutch.i_TrqIn2Out =
    CalebsLaunchControl_P.GearBoxOutClutchi_TrqIn2Out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.Clutch_dis.Pos =
    CalebsLaunchControl_P.GearBoxOutClutch_disPos_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.Clutch_dis.rotv_in =
    CalebsLaunchControl_P.GearBoxOutClutch_disrotv_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.Clutch_dis.rotv_out =
    CalebsLaunchControl_P.GearBoxOutClutch_disrotv_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.Clutch_dis.Trq_in =
    CalebsLaunchControl_P.GearBoxOutClutch_disTrq_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.Clutch_dis.Trq_out =
    CalebsLaunchControl_P.GearBoxOutClutch_disTrq_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxOut.Clutch_dis.i_TrqIn2Out =
    CalebsLaunchControl_P.GearBoxOutClutch_disi_TrqIn2Out_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.Clutch.Pos'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.Clutch.Trq_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.Clutch.Trq_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.Clutch.i_TrqIn2Out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.Clutch.rotv_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.Clutch.rotv_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.Pos'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.Trq_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.Trq_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.i_TrqIn2Out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.rotv_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.Clutch_dis.rotv_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.GearNo'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.GearNo_dis'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.Trq_DriveSrc_trg'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.Trq_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.Trq_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.i'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.rotv_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m0.rotv_out'
   */
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.GearNo =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0GearNo_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.GearNo_dis =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0GearNo_dis_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Trq_DriveSrc_trg =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0Trq_DriveSrc_trg_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.i =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0i_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.rotv_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0rotv_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.rotv_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0rotv_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Trq_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0Trq_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Trq_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0Trq_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Pos =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0ClutchPos_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.rotv_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0Clutchrotv_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.rotv_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0Clutchrotv_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Trq_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0ClutchTrq_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Trq_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0ClutchTrq_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.i_TrqIn2Out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0Clutchi_TrqIn2Out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Pos =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0Clutch_disPos_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.rotv_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0Clutch_disrotv_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.rotv_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0Clutch_disrotv_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Trq_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0Clutch_disTrq_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Trq_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0Clutch_disTrq_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.i_TrqIn2Out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m0Clutch_disi_TrqIn2Out_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.Clutch.Pos'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.Clutch.Trq_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.Clutch.Trq_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.Clutch.i_TrqIn2Out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.Clutch.rotv_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.Clutch.rotv_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.Pos'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.Trq_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.Trq_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.i_TrqIn2Out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.rotv_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.Clutch_dis.rotv_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.GearNo'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.GearNo_dis'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.Trq_DriveSrc_trg'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.Trq_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.Trq_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.i'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.rotv_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m1.rotv_out'
   */
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.GearNo =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1GearNo_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.GearNo_dis =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1GearNo_dis_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Trq_DriveSrc_trg =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1Trq_DriveSrc_trg_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.i =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1i_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.rotv_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1rotv_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.rotv_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1rotv_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Trq_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1Trq_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Trq_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1Trq_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Pos =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1ClutchPos_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.rotv_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1Clutchrotv_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.rotv_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1Clutchrotv_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Trq_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1ClutchTrq_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Trq_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1ClutchTrq_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.i_TrqIn2Out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1Clutchi_TrqIn2Out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Pos =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1Clutch_disPos_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.rotv_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1Clutch_disrotv_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.rotv_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1Clutch_disrotv_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Trq_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1Clutch_disTrq_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Trq_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1Clutch_disTrq_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.i_TrqIn2Out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m1Clutch_disi_TrqIn2Out_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.Clutch.Pos'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.Clutch.Trq_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.Clutch.Trq_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.Clutch.i_TrqIn2Out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.Clutch.rotv_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.Clutch.rotv_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.Pos'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.Trq_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.Trq_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.i_TrqIn2Out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.rotv_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.Clutch_dis.rotv_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.GearNo'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.GearNo_dis'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.Trq_DriveSrc_trg'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.Trq_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.Trq_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.i'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.rotv_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m2.rotv_out'
   */
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.GearNo =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2GearNo_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.GearNo_dis =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2GearNo_dis_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Trq_DriveSrc_trg =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2Trq_DriveSrc_trg_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.i =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2i_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.rotv_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2rotv_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.rotv_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2rotv_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Trq_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2Trq_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Trq_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2Trq_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Pos =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2ClutchPos_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.rotv_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2Clutchrotv_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.rotv_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2Clutchrotv_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Trq_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2ClutchTrq_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Trq_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2ClutchTrq_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.i_TrqIn2Out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2Clutchi_TrqIn2Out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Pos =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2Clutch_disPos_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.rotv_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2Clutch_disrotv_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.rotv_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2Clutch_disrotv_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Trq_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2Clutch_disTrq_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Trq_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2Clutch_disTrq_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.i_TrqIn2Out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m2Clutch_disi_TrqIn2Out_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.Clutch.Pos'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.Clutch.Trq_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.Clutch.Trq_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.Clutch.i_TrqIn2Out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.Clutch.rotv_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.Clutch.rotv_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.Pos'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.Trq_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.Trq_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.i_TrqIn2Out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.rotv_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.Clutch_dis.rotv_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.GearNo'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.GearNo_dis'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.Trq_DriveSrc_trg'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.Trq_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.Trq_out'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.i'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.rotv_in'
   *  Constant: '<S1>/GearBoxM_Out.GB_m3.rotv_out'
   */
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.GearNo =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3GearNo_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.GearNo_dis =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3GearNo_dis_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Trq_DriveSrc_trg =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3Trq_DriveSrc_trg_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.i =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3i_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.rotv_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3rotv_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.rotv_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3rotv_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Trq_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3Trq_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Trq_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3Trq_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Pos =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3ClutchPos_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.rotv_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3Clutchrotv_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.rotv_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3Clutchrotv_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Trq_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3ClutchTrq_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Trq_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3ClutchTrq_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.i_TrqIn2Out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3Clutchi_TrqIn2Out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Pos =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3Clutch_disPos_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.rotv_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3Clutch_disrotv_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.rotv_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3Clutch_disrotv_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Trq_in =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3Clutch_disTrq_in_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Trq_out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3Clutch_disTrq_out_Value;
  CalebsLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.i_TrqIn2Out =
    CalebsLaunchControl_P.GearBoxM_OutGB_m3Clutch_disi_TrqIn2Out_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BattLVOut.AOC'
   *  Constant: '<S1>/BattLVOut.Current'
   *  Constant: '<S1>/BattLVOut.Energy'
   *  Constant: '<S1>/BattLVOut.Pwr_max'
   *  Constant: '<S1>/BattLVOut.SOC'
   *  Constant: '<S1>/BattLVOut.SOH'
   *  Constant: '<S1>/BattLVOut.Temp'
   */
  CalebsLaunchControl_Y->ToCM.BattLVOut.SOC =
    CalebsLaunchControl_P.BattLVOutSOC_Value;
  CalebsLaunchControl_Y->ToCM.BattLVOut.SOH =
    CalebsLaunchControl_P.BattLVOutSOH_Value;
  CalebsLaunchControl_Y->ToCM.BattLVOut.Current =
    CalebsLaunchControl_P.BattLVOutCurrent_Value;
  CalebsLaunchControl_Y->ToCM.BattLVOut.AOC =
    CalebsLaunchControl_P.BattLVOutAOC_Value;
  CalebsLaunchControl_Y->ToCM.BattLVOut.Temp =
    CalebsLaunchControl_P.BattLVOutTemp_Value;
  CalebsLaunchControl_Y->ToCM.BattLVOut.Energy =
    CalebsLaunchControl_P.BattLVOutEnergy_Value;
  CalebsLaunchControl_Y->ToCM.BattLVOut.Pwr_max =
    CalebsLaunchControl_P.BattLVOutPwr_max_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BattHVOut.AOC'
   *  Constant: '<S1>/BattHVOut.Current'
   *  Constant: '<S1>/BattHVOut.Energy'
   *  Constant: '<S1>/BattHVOut.Pwr_max'
   *  Constant: '<S1>/BattHVOut.SOC'
   *  Constant: '<S1>/BattHVOut.SOH'
   *  Constant: '<S1>/BattHVOut.Temp'
   */
  CalebsLaunchControl_Y->ToCM.BattHVOut.SOC =
    CalebsLaunchControl_P.BattHVOutSOC_Value;
  CalebsLaunchControl_Y->ToCM.BattHVOut.SOH =
    CalebsLaunchControl_P.BattHVOutSOH_Value;
  CalebsLaunchControl_Y->ToCM.BattHVOut.Current =
    CalebsLaunchControl_P.BattHVOutCurrent_Value;
  CalebsLaunchControl_Y->ToCM.BattHVOut.AOC =
    CalebsLaunchControl_P.BattHVOutAOC_Value;
  CalebsLaunchControl_Y->ToCM.BattHVOut.Temp =
    CalebsLaunchControl_P.BattHVOutTemp_Value;
  CalebsLaunchControl_Y->ToCM.BattHVOut.Energy =
    CalebsLaunchControl_P.BattHVOutEnergy_Value;
  CalebsLaunchControl_Y->ToCM.BattHVOut.Pwr_max =
    CalebsLaunchControl_P.BattHVOutPwr_max_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/PwrSupplyOut.Eta_HV1toHV2'
   *  Constant: '<S1>/PwrSupplyOut.Eta_HV1toLV'
   *  Constant: '<S1>/PwrSupplyOut.Pwr_HV1'
   *  Constant: '<S1>/PwrSupplyOut.Pwr_HV1toHV2'
   *  Constant: '<S1>/PwrSupplyOut.Pwr_HV1toHV2_max'
   *  Constant: '<S1>/PwrSupplyOut.Pwr_HV1toLV'
   *  Constant: '<S1>/PwrSupplyOut.Pwr_HV1toLV_max'
   *  Constant: '<S1>/PwrSupplyOut.Pwr_HV2'
   *  Constant: '<S1>/PwrSupplyOut.Pwr_LV'
   *  Constant: '<S1>/PwrSupplyOut.Voltage_HV1'
   *  Constant: '<S1>/PwrSupplyOut.Voltage_HV2'
   *  Constant: '<S1>/PwrSupplyOut.Voltage_LV'
   */
  CalebsLaunchControl_Y->ToCM.PwrSupplyOut.Pwr_LV =
    CalebsLaunchControl_P.PwrSupplyOutPwr_LV_Value;
  CalebsLaunchControl_Y->ToCM.PwrSupplyOut.Pwr_HV1 =
    CalebsLaunchControl_P.PwrSupplyOutPwr_HV1_Value;
  CalebsLaunchControl_Y->ToCM.PwrSupplyOut.Pwr_HV2 =
    CalebsLaunchControl_P.PwrSupplyOutPwr_HV2_Value;
  CalebsLaunchControl_Y->ToCM.PwrSupplyOut.Voltage_LV =
    CalebsLaunchControl_P.PwrSupplyOutVoltage_LV_Value;
  CalebsLaunchControl_Y->ToCM.PwrSupplyOut.Voltage_HV1 =
    CalebsLaunchControl_P.PwrSupplyOutVoltage_HV1_Value;
  CalebsLaunchControl_Y->ToCM.PwrSupplyOut.Voltage_HV2 =
    CalebsLaunchControl_P.PwrSupplyOutVoltage_HV2_Value;
  CalebsLaunchControl_Y->ToCM.PwrSupplyOut.Pwr_HV1toLV =
    CalebsLaunchControl_P.PwrSupplyOutPwr_HV1toLV_Value;
  CalebsLaunchControl_Y->ToCM.PwrSupplyOut.Pwr_HV1toHV2 =
    CalebsLaunchControl_P.PwrSupplyOutPwr_HV1toHV2_Value;
  CalebsLaunchControl_Y->ToCM.PwrSupplyOut.Pwr_HV1toLV_max =
    CalebsLaunchControl_P.PwrSupplyOutPwr_HV1toLV_max_Value;
  CalebsLaunchControl_Y->ToCM.PwrSupplyOut.Pwr_HV1toHV2_max =
    CalebsLaunchControl_P.PwrSupplyOutPwr_HV1toHV2_max_Value;
  CalebsLaunchControl_Y->ToCM.PwrSupplyOut.Eta_HV1toLV =
    CalebsLaunchControl_P.PwrSupplyOutEta_HV1toLV_Value;
  CalebsLaunchControl_Y->ToCM.PwrSupplyOut.Eta_HV1toHV2 =
    CalebsLaunchControl_P.PwrSupplyOutEta_HV1toHV2_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Trq_Supp2BdyEng.rx'
   *  Constant: '<S1>/Trq_Supp2BdyEng.ry'
   */
  CalebsLaunchControl_Y->ToCM.Trq_Supp2BdyEng.rx =
    CalebsLaunchControl_P.Trq_Supp2BdyEngrx_Value;
  CalebsLaunchControl_Y->ToCM.Trq_Supp2BdyEng.ry =
    CalebsLaunchControl_P.Trq_Supp2BdyEngry_Value;

  /* Abs: '<S3>/Abs' incorporates:
   *  Constant: '<S3>/GearRatio'
   *  Inport: '<Root>/FromCM'
   *  Product: '<S3>/Product'
   */
  rtb_uDLookupTable = fabs(CalebsLaunchControl_P.GearRatio_Value *
    CalebsLaunchControl_U->FromCM.WheelIn.FL.rotv);

  /* Product: '<S3>/Product1' incorporates:
   *  Inport: '<Root>/FromCM'
   *  Lookup_n-D: '<S3>/1-D Lookup Table'
   */
  rtb_Product1 = CalebsLaunchControl_U->FromCM.Gas * look1_binlxpw
    (rtb_uDLookupTable, CalebsLaunchControl_P.uDLookupTable_bp01Data,
     CalebsLaunchControl_P.uDLookupTable_tableData, 5U);

  /* Lookup_n-D: '<S3>/1-D Lookup Table1' */
  rtb_uDLookupTable = look1_binlxpw(rtb_uDLookupTable,
    CalebsLaunchControl_P.uDLookupTable1_bp01Data,
    CalebsLaunchControl_P.uDLookupTable1_tableData, 5U);

  /* If: '<S3>/If' */
  if (rtb_uDLookupTable < rtb_Product1) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    CalebsLaunchControl_IfActionSubsystem(rtb_uDLookupTable,
      &CalebsLaunchControl_B->IfActionSubsystem);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    CalebsLaunchControl_IfActionSubsystem(rtb_Product1,
      &CalebsLaunchControl_B->IfActionSubsystem1);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem1' */
  }

  /* End of If: '<S3>/If' */

  /* Sum: '<S3>/Sum of Elements' */
  rtb_Product1 = CalebsLaunchControl_B->IfActionSubsystem1.In1 +
    CalebsLaunchControl_B->IfActionSubsystem.In1;

  /* Gain: '<S3>/Gain' */
  CalebsLaunchControl_Y->ToCM.WheelOut.FL.Trq_Supp2WC =
    CalebsLaunchControl_P.Gain_Gain * rtb_Product1;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.FL.Inert_in'
   */
  CalebsLaunchControl_Y->ToCM.WheelOut.FL.Inert_in =
    CalebsLaunchControl_P.WheelOutFLInert_in_Value;
  CalebsLaunchControl_Y->ToCM.WheelOut.FL.Trq_Drive = rtb_Product1;

  /* Abs: '<S4>/Abs' incorporates:
   *  Constant: '<S4>/GearRatio'
   *  Inport: '<Root>/FromCM'
   *  Product: '<S4>/Product'
   */
  rtb_Product1 = fabs(CalebsLaunchControl_P.GearRatio_Value_l *
                      CalebsLaunchControl_U->FromCM.WheelIn.FR.rotv);

  /* Product: '<S4>/Product1' incorporates:
   *  Inport: '<Root>/FromCM'
   *  Lookup_n-D: '<S4>/1-D Lookup Table'
   */
  rtb_uDLookupTable = CalebsLaunchControl_U->FromCM.Gas * look1_binlxpw
    (rtb_Product1, CalebsLaunchControl_P.uDLookupTable_bp01Data_h,
     CalebsLaunchControl_P.uDLookupTable_tableData_f, 5U);

  /* Lookup_n-D: '<S4>/1-D Lookup Table1' */
  rtb_Product1 = look1_binlxpw(rtb_Product1,
    CalebsLaunchControl_P.uDLookupTable1_bp01Data_g,
    CalebsLaunchControl_P.uDLookupTable1_tableData_p, 5U);

  /* If: '<S4>/If' */
  if (rtb_Product1 < rtb_uDLookupTable) {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    CalebsLaunchControl_IfActionSubsystem(rtb_Product1,
      &CalebsLaunchControl_B->IfActionSubsystem_g);

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    CalebsLaunchControl_IfActionSubsystem(rtb_uDLookupTable,
      &CalebsLaunchControl_B->IfActionSubsystem1_f);

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */
  }

  /* End of If: '<S4>/If' */

  /* Sum: '<S4>/Sum of Elements' */
  rtb_Product1 = CalebsLaunchControl_B->IfActionSubsystem1_f.In1 +
    CalebsLaunchControl_B->IfActionSubsystem_g.In1;

  /* Gain: '<S4>/Gain' */
  CalebsLaunchControl_Y->ToCM.WheelOut.FR.Trq_Supp2WC =
    CalebsLaunchControl_P.Gain_Gain_m * rtb_Product1;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.FR.Inert_in'
   */
  CalebsLaunchControl_Y->ToCM.WheelOut.FR.Inert_in =
    CalebsLaunchControl_P.WheelOutFRInert_in_Value;
  CalebsLaunchControl_Y->ToCM.WheelOut.FR.Trq_Drive = rtb_Product1;

  /* Abs: '<S5>/Abs' incorporates:
   *  Constant: '<S5>/GearRatio'
   *  Inport: '<Root>/FromCM'
   *  Product: '<S5>/Product'
   */
  rtb_Product1 = fabs(CalebsLaunchControl_P.GearRatio_Value_p *
                      CalebsLaunchControl_U->FromCM.WheelIn.RL.rotv);

  /* Product: '<S5>/Product1' incorporates:
   *  Inport: '<Root>/FromCM'
   *  Lookup_n-D: '<S5>/1-D Lookup Table'
   */
  rtb_uDLookupTable = CalebsLaunchControl_U->FromCM.Gas * look1_binlxpw
    (rtb_Product1, CalebsLaunchControl_P.uDLookupTable_bp01Data_a,
     CalebsLaunchControl_P.uDLookupTable_tableData_e, 5U);

  /* Lookup_n-D: '<S5>/1-D Lookup Table1' */
  rtb_Product1 = look1_binlxpw(rtb_Product1,
    CalebsLaunchControl_P.uDLookupTable1_bp01Data_o,
    CalebsLaunchControl_P.uDLookupTable1_tableData_i, 5U);

  /* If: '<S5>/If' */
  if (rtb_Product1 < rtb_uDLookupTable) {
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    CalebsLaunchControl_IfActionSubsystem(rtb_Product1,
      &CalebsLaunchControl_B->IfActionSubsystem_b);

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    CalebsLaunchControl_IfActionSubsystem(rtb_uDLookupTable,
      &CalebsLaunchControl_B->IfActionSubsystem1_f0);

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem1' */
  }

  /* End of If: '<S5>/If' */

  /* Sum: '<S5>/Sum of Elements' */
  rtb_Product1 = CalebsLaunchControl_B->IfActionSubsystem1_f0.In1 +
    CalebsLaunchControl_B->IfActionSubsystem_b.In1;

  /* Gain: '<S5>/Gain' */
  CalebsLaunchControl_Y->ToCM.WheelOut.RL.Trq_Supp2WC =
    CalebsLaunchControl_P.Gain_Gain_f * rtb_Product1;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.RL.Inert_in'
   */
  CalebsLaunchControl_Y->ToCM.WheelOut.RL.Inert_in =
    CalebsLaunchControl_P.WheelOutRLInert_in_Value;
  CalebsLaunchControl_Y->ToCM.WheelOut.RL.Trq_Drive = rtb_Product1;

  /* Abs: '<S6>/Abs' incorporates:
   *  Constant: '<S6>/GearRatio'
   *  Inport: '<Root>/FromCM'
   *  Product: '<S6>/Product'
   */
  rtb_Product1 = fabs(CalebsLaunchControl_P.GearRatio_Value_e *
                      CalebsLaunchControl_U->FromCM.WheelIn.RR.rotv);

  /* Product: '<S6>/Product1' incorporates:
   *  Inport: '<Root>/FromCM'
   *  Lookup_n-D: '<S6>/1-D Lookup Table'
   */
  rtb_uDLookupTable = CalebsLaunchControl_U->FromCM.Gas * look1_binlxpw
    (rtb_Product1, CalebsLaunchControl_P.uDLookupTable_bp01Data_j,
     CalebsLaunchControl_P.uDLookupTable_tableData_e5, 5U);

  /* Lookup_n-D: '<S6>/1-D Lookup Table1' */
  rtb_Product1 = look1_binlxpw(rtb_Product1,
    CalebsLaunchControl_P.uDLookupTable1_bp01Data_a,
    CalebsLaunchControl_P.uDLookupTable1_tableData_h, 5U);

  /* If: '<S6>/If' */
  if (rtb_Product1 < rtb_uDLookupTable) {
    /* Outputs for IfAction SubSystem: '<S6>/If Action Subsystem' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    CalebsLaunchControl_IfActionSubsystem(rtb_Product1,
      &CalebsLaunchControl_B->IfActionSubsystem_m);

    /* End of Outputs for SubSystem: '<S6>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S6>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    CalebsLaunchControl_IfActionSubsystem(rtb_uDLookupTable,
      &CalebsLaunchControl_B->IfActionSubsystem1_h);

    /* End of Outputs for SubSystem: '<S6>/If Action Subsystem1' */
  }

  /* End of If: '<S6>/If' */

  /* Sum: '<S6>/Sum of Elements' */
  rtb_Product1 = CalebsLaunchControl_B->IfActionSubsystem1_h.In1 +
    CalebsLaunchControl_B->IfActionSubsystem_m.In1;

  /* Gain: '<S6>/Gain' */
  CalebsLaunchControl_Y->ToCM.WheelOut.RR.Trq_Supp2WC =
    CalebsLaunchControl_P.Gain_Gain_k * rtb_Product1;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.RR.Inert_in'
   */
  CalebsLaunchControl_Y->ToCM.WheelOut.RR.Inert_in =
    CalebsLaunchControl_P.WheelOutRRInert_in_Value;
  CalebsLaunchControl_Y->ToCM.WheelOut.RR.Trq_Drive = rtb_Product1;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/PowerDelta.Diffs'
   *  Constant: '<S1>/PowerDelta.Inert'
   *  Constant: '<S1>/PowerDelta.Inert_DL'
   *  Constant: '<S1>/PowerDelta.PlanetGear'
   *  Constant: '<S1>/PowerDelta.PowerSupply'
   *  Constant: '<S1>/PowerDelta.Shafts'
   *  Constant: '<S1>/PowerDelta.Spring_DL'
   */
  CalebsLaunchControl_Y->ToCM.PowerDelta.PlanetGear =
    CalebsLaunchControl_P.PowerDeltaPlanetGear_Value;
  CalebsLaunchControl_Y->ToCM.PowerDelta.Diffs =
    CalebsLaunchControl_P.PowerDeltaDiffs_Value;
  CalebsLaunchControl_Y->ToCM.PowerDelta.Shafts =
    CalebsLaunchControl_P.PowerDeltaShafts_Value;
  CalebsLaunchControl_Y->ToCM.PowerDelta.Spring_DL =
    CalebsLaunchControl_P.PowerDeltaSpring_DL_Value;
  CalebsLaunchControl_Y->ToCM.PowerDelta.Inert_DL =
    CalebsLaunchControl_P.PowerDeltaInert_DL_Value;
  CalebsLaunchControl_Y->ToCM.PowerDelta.Inert =
    CalebsLaunchControl_P.PowerDeltaInert_Value;
  CalebsLaunchControl_Y->ToCM.PowerDelta.PowerSupply =
    CalebsLaunchControl_P.PowerDeltaPowerSupply_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BCU_Status'
   *  Constant: '<S1>/DL_iDiff_mean'
   *  Constant: '<S1>/ECU_Status'
   *  Constant: '<S1>/MCU_Status'
   *  Constant: '<S1>/TCU_Status'
   *  Constant: '<S1>/Trq_Supp2Bdy1.rx'
   *  Constant: '<S1>/Trq_Supp2Bdy1.ry'
   *  Constant: '<S1>/Trq_Supp2Bdy1.rz'
   *  Constant: '<S1>/Trq_Supp2Bdy1B.rx'
   *  Constant: '<S1>/Trq_Supp2Bdy1B.ry'
   *  Constant: '<S1>/Trq_Supp2Bdy1B.rz'
   *  Outport: '<Root>/ToCM'
   */
  CalebsLaunchControl_Y->ToCM.ECU_Status =
    CalebsLaunchControl_P.ECU_Status_Value;
  CalebsLaunchControl_Y->ToCM.MCU_Status =
    CalebsLaunchControl_P.MCU_Status_Value;
  CalebsLaunchControl_Y->ToCM.TCU_Status =
    CalebsLaunchControl_P.TCU_Status_Value;
  CalebsLaunchControl_Y->ToCM.BCU_Status =
    CalebsLaunchControl_P.BCU_Status_Value;
  CalebsLaunchControl_Y->ToCM.Trq_Supp2Bdy1.rx =
    CalebsLaunchControl_P.Trq_Supp2Bdy1rx_Value;
  CalebsLaunchControl_Y->ToCM.Trq_Supp2Bdy1.ry =
    CalebsLaunchControl_P.Trq_Supp2Bdy1ry_Value;
  CalebsLaunchControl_Y->ToCM.Trq_Supp2Bdy1.rz =
    CalebsLaunchControl_P.Trq_Supp2Bdy1rz_Value;
  CalebsLaunchControl_Y->ToCM.Trq_Supp2Bdy1B.rx =
    CalebsLaunchControl_P.Trq_Supp2Bdy1Brx_Value;
  CalebsLaunchControl_Y->ToCM.Trq_Supp2Bdy1B.ry =
    CalebsLaunchControl_P.Trq_Supp2Bdy1Bry_Value;
  CalebsLaunchControl_Y->ToCM.Trq_Supp2Bdy1B.rz =
    CalebsLaunchControl_P.Trq_Supp2Bdy1Brz_Value;
  CalebsLaunchControl_Y->ToCM.DL_iDiff_mean =
    CalebsLaunchControl_P.DL_iDiff_mean_Value;
}

/* Model initialize function */
void CalebsLaunchControl_initialize(RT_MODEL_CalebsLaunchControl_T *const
  CalebsLaunchControl_M)
{
  B_CalebsLaunchControl_T *CalebsLaunchControl_B = ((B_CalebsLaunchControl_T *)
    CalebsLaunchControl_M->blockIO);

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem' */
  CalebsLaunchControl_IfActionSubsystem_Init
    (&CalebsLaunchControl_B->IfActionSubsystem,
     &CalebsLaunchControl_P.IfActionSubsystem);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem1' */
  CalebsLaunchControl_IfActionSubsystem_Init
    (&CalebsLaunchControl_B->IfActionSubsystem1,
     &CalebsLaunchControl_P.IfActionSubsystem1);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S4>/If Action Subsystem' */
  CalebsLaunchControl_IfActionSubsystem_Init
    (&CalebsLaunchControl_B->IfActionSubsystem_g,
     &CalebsLaunchControl_P.IfActionSubsystem_g);

  /* End of SystemInitialize for SubSystem: '<S4>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S4>/If Action Subsystem1' */
  CalebsLaunchControl_IfActionSubsystem_Init
    (&CalebsLaunchControl_B->IfActionSubsystem1_f,
     &CalebsLaunchControl_P.IfActionSubsystem1_f);

  /* End of SystemInitialize for SubSystem: '<S4>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S5>/If Action Subsystem' */
  CalebsLaunchControl_IfActionSubsystem_Init
    (&CalebsLaunchControl_B->IfActionSubsystem_b,
     &CalebsLaunchControl_P.IfActionSubsystem_b);

  /* End of SystemInitialize for SubSystem: '<S5>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S5>/If Action Subsystem1' */
  CalebsLaunchControl_IfActionSubsystem_Init
    (&CalebsLaunchControl_B->IfActionSubsystem1_f0,
     &CalebsLaunchControl_P.IfActionSubsystem1_f0);

  /* End of SystemInitialize for SubSystem: '<S5>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S6>/If Action Subsystem' */
  CalebsLaunchControl_IfActionSubsystem_Init
    (&CalebsLaunchControl_B->IfActionSubsystem_m,
     &CalebsLaunchControl_P.IfActionSubsystem_m);

  /* End of SystemInitialize for SubSystem: '<S6>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S6>/If Action Subsystem1' */
  CalebsLaunchControl_IfActionSubsystem_Init
    (&CalebsLaunchControl_B->IfActionSubsystem1_h,
     &CalebsLaunchControl_P.IfActionSubsystem1_h);

  /* End of SystemInitialize for SubSystem: '<S6>/If Action Subsystem1' */
}

/* Model terminate function */
void CalebsLaunchControl_terminate(RT_MODEL_CalebsLaunchControl_T
  * CalebsLaunchControl_M)
{
  /* model code */
  rt_FREE(CalebsLaunchControl_M->blockIO);
  rt_FREE(CalebsLaunchControl_M->inputs);
  rt_FREE(CalebsLaunchControl_M->outputs);
  rt_FREE(CalebsLaunchControl_M);
}

/* Model data allocation function */
RT_MODEL_CalebsLaunchControl_T *CalebsLaunchControl(struct tInfos *inf)
{
  RT_MODEL_CalebsLaunchControl_T *CalebsLaunchControl_M;
  CalebsLaunchControl_M = (RT_MODEL_CalebsLaunchControl_T *) malloc(sizeof
    (RT_MODEL_CalebsLaunchControl_T));
  if (CalebsLaunchControl_M == NULL) {
    return NULL;
  }

  (void) memset((char *)CalebsLaunchControl_M, 0,
                sizeof(RT_MODEL_CalebsLaunchControl_T));
  MatSupp_Init();

  /* block I/O */
  {
    B_CalebsLaunchControl_T *b = (B_CalebsLaunchControl_T *) malloc(sizeof
      (B_CalebsLaunchControl_T));
    rt_VALIDATE_MEMORY(CalebsLaunchControl_M,b);
    CalebsLaunchControl_M->blockIO = (b);
  }

  /* external inputs */
  {
    ExtU_CalebsLaunchControl_T *CalebsLaunchControl_U =
      (ExtU_CalebsLaunchControl_T *) malloc(sizeof(ExtU_CalebsLaunchControl_T));
    rt_VALIDATE_MEMORY(CalebsLaunchControl_M,CalebsLaunchControl_U);
    CalebsLaunchControl_M->inputs = (((ExtU_CalebsLaunchControl_T *)
      CalebsLaunchControl_U));
  }

  /* external outputs */
  {
    ExtY_CalebsLaunchControl_T *CalebsLaunchControl_Y =
      (ExtY_CalebsLaunchControl_T *) malloc(sizeof(ExtY_CalebsLaunchControl_T));
    rt_VALIDATE_MEMORY(CalebsLaunchControl_M,CalebsLaunchControl_Y);
    CalebsLaunchControl_M->outputs = (CalebsLaunchControl_Y);
  }

  /* CarMaker parameter tuning */
  {
    CalebsLaunchControl_SetParams(CalebsLaunchControl_M, NULL, inf);
  }

  {
    B_CalebsLaunchControl_T *CalebsLaunchControl_B = ((B_CalebsLaunchControl_T *)
      CalebsLaunchControl_M->blockIO);
    ExtU_CalebsLaunchControl_T *CalebsLaunchControl_U =
      (ExtU_CalebsLaunchControl_T *) CalebsLaunchControl_M->inputs;
    ExtY_CalebsLaunchControl_T *CalebsLaunchControl_Y =
      (ExtY_CalebsLaunchControl_T *) CalebsLaunchControl_M->outputs;

    /* block I/O */
    (void) memset(((void *) CalebsLaunchControl_B), 0,
                  sizeof(B_CalebsLaunchControl_T));

    /* external inputs */
    (void)memset(CalebsLaunchControl_U, 0, sizeof(ExtU_CalebsLaunchControl_T));

    /* external outputs */
    CalebsLaunchControl_Y->ToCM = CalebsLaunchControl_rtZcmPowerTrainXWDOut;
  }

  return CalebsLaunchControl_M;
}

/* CarMaker dictionary definitions. */
extern tQuantEntry *main_DictDefines[];
static tQuantEntry DictDefines[] = {
  { (void*)0x01234567, (void*)0x89ABCDEF, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { (void*)main_DictDefines, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { NULL, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 }
};

tQuantEntry *CalebsLaunchControl_DictDefines = DictDefines;
tQuantEntry *main_DictDefines[] = {
  DictDefines,
  NULL
};

/* CarMaker bodyframe definitions. */
#ifndef RTMAKER

extern tMdlBdyFrame *main_BdyFrameDefines[];
static tMdlBdyFrame BdyFrameDefines[] = {
  { (void*)0x01234567 },

  { (void*)0x89ABCDEF },

  { (void*)main_BdyFrameDefines },

  { NULL }
};

tMdlBdyFrame *CalebsLaunchControl_BdyFrameDefines = BdyFrameDefines;
tMdlBdyFrame *main_BdyFrameDefines[] = {
  BdyFrameDefines,
  NULL
};

#endif
