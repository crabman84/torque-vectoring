/*
 * ExperimentalPowertrain.c
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

#include <infoc.h>
#include <Log.h>
#include <InfoParam.h>
#include <DataDict.h>
#include <MatSupp.h>
#include "ExperimentalPowertrain.h"
#include "ExperimentalPowertrain_private.h"
#include "ExperimentalPowertrain_wrap.h"

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

const cmPowerTrainXWDOut ExperimentalPowertrain_rtZcmPowerTrainXWDOut = {
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

real_T look2_binlxpw(real_T u0, real_T u1, const real_T bp0[], const real_T bp1[],
                     const real_T table[], const uint32_T maxIndex[], uint32_T
                     stride)
{
  real_T frac;
  uint32_T bpIndices[2];
  real_T fractions[2];
  real_T yL_1d;
  uint32_T iRght;
  uint32_T bpIdx;
  uint32_T iLeft;

  /* Column-major Lookup 2-D
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
  } else if (u0 < bp0[maxIndex[0U]]) {
    /* Binary Search */
    bpIdx = maxIndex[0U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[0U];
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
    iLeft = maxIndex[0U] - 1U;
    frac = (u0 - bp0[maxIndex[0U] - 1U]) / (bp0[maxIndex[0U]] - bp0[maxIndex[0U]
      - 1U]);
  }

  fractions[0U] = frac;
  bpIndices[0U] = iLeft;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u1 <= bp1[0U]) {
    iLeft = 0U;
    frac = (u1 - bp1[0U]) / (bp1[1U] - bp1[0U]);
  } else if (u1 < bp1[maxIndex[1U]]) {
    /* Binary Search */
    bpIdx = maxIndex[1U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[1U];
    while (iRght - iLeft > 1U) {
      if (u1 < bp1[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u1 - bp1[iLeft]) / (bp1[iLeft + 1U] - bp1[iLeft]);
  } else {
    iLeft = maxIndex[1U] - 1U;
    frac = (u1 - bp1[maxIndex[1U] - 1U]) / (bp1[maxIndex[1U]] - bp1[maxIndex[1U]
      - 1U]);
  }

  /* Column-major Interpolation 2-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  bpIdx = iLeft * stride + bpIndices[0U];
  yL_1d = (table[bpIdx + 1U] - table[bpIdx]) * fractions[0U] + table[bpIdx];
  bpIdx += stride;
  return (((table[bpIdx + 1U] - table[bpIdx]) * fractions[0U] + table[bpIdx]) -
          yL_1d) * frac + yL_1d;
}

/*
 * System initialize for action system:
 *    '<S6>/If Action Subsystem'
 *    '<S6>/If Action Subsystem1'
 *    '<S7>/If Action Subsystem'
 *    '<S7>/If Action Subsystem1'
 *    '<S8>/If Action Subsystem'
 *    '<S8>/If Action Subsystem1'
 *    '<S9>/If Action Subsystem'
 *    '<S9>/If Action Subsystem1'
 */
void ExperimentalPowertrain_IfActionSubsystem_Init
  (B_IfActionSubsystem_ExperimentalPowertrain_T *localB,
   P_IfActionSubsystem_ExperimentalPowertrain_T *localP)
{
  /* SystemInitialize for Outport: '<S10>/Out1' */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for action system:
 *    '<S6>/If Action Subsystem'
 *    '<S6>/If Action Subsystem1'
 *    '<S7>/If Action Subsystem'
 *    '<S7>/If Action Subsystem1'
 *    '<S8>/If Action Subsystem'
 *    '<S8>/If Action Subsystem1'
 *    '<S9>/If Action Subsystem'
 *    '<S9>/If Action Subsystem1'
 */
void ExperimentalPowertrain_IfActionSubsystem(real_T rtu_In1,
  B_IfActionSubsystem_ExperimentalPowertrain_T *localB)
{
  /* Inport: '<S10>/In1' */
  localB->In1 = rtu_In1;
}

/*
 * Termination for action system:
 *    '<S6>/If Action Subsystem'
 *    '<S6>/If Action Subsystem1'
 *    '<S7>/If Action Subsystem'
 *    '<S7>/If Action Subsystem1'
 *    '<S8>/If Action Subsystem'
 *    '<S8>/If Action Subsystem1'
 *    '<S9>/If Action Subsystem'
 *    '<S9>/If Action Subsystem1'
 */
void ExperimentalPowertrain_IfActionSubsystem_Term(void)
{
}

/* Model step function */
void ExperimentalPowertrain_step(RT_MODEL_ExperimentalPowertrain_T *const
  ExperimentalPowertrain_M)
{
  B_ExperimentalPowertrain_T *ExperimentalPowertrain_B =
    ((B_ExperimentalPowertrain_T *) ExperimentalPowertrain_M->blockIO);
  DW_ExperimentalPowertrain_T *ExperimentalPowertrain_DW =
    ((DW_ExperimentalPowertrain_T *) ExperimentalPowertrain_M->dwork);
  ExtU_ExperimentalPowertrain_T *ExperimentalPowertrain_U =
    (ExtU_ExperimentalPowertrain_T *) ExperimentalPowertrain_M->inputs;
  ExtY_ExperimentalPowertrain_T *ExperimentalPowertrain_Y =
    (ExtY_ExperimentalPowertrain_T *) ExperimentalPowertrain_M->outputs;
  real_T rtb_Trq_Supp2Bdy1_rx;
  real_T rtb_Trq_Supp2Bdy1_ry;
  real_T rtb_Trq_Supp2Bdy1_rz;
  real_T rtb_Trq_Supp2Bdy1B_rx;
  real_T rtb_Trq_Supp2Bdy1B_ry;
  real_T rtb_Trq_Supp2Bdy1B_rz;
  real_T rtb_Gain3;
  real_T rtb_uDLookupTable1;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/EngineOut.Engine_on'
   *  Constant: '<S1>/EngineOut.FuelFlow'
   *  Constant: '<S1>/EngineOut.Trq'
   *  Constant: '<S1>/EngineOut.TrqDrag'
   *  Constant: '<S1>/EngineOut.TrqFull'
   *  Constant: '<S1>/EngineOut.TrqOpt'
   *  Constant: '<S1>/EngineOut.rotv'
   */
  ExperimentalPowertrain_Y->ToCM.EngineOut.Engine_on =
    ExperimentalPowertrain_P.EngineOutEngine_on_Value;
  ExperimentalPowertrain_Y->ToCM.EngineOut.rotv =
    ExperimentalPowertrain_P.EngineOutrotv_Value;
  ExperimentalPowertrain_Y->ToCM.EngineOut.Trq =
    ExperimentalPowertrain_P.EngineOutTrq_Value;
  ExperimentalPowertrain_Y->ToCM.EngineOut.TrqDrag =
    ExperimentalPowertrain_P.EngineOutTrqDrag_Value;
  ExperimentalPowertrain_Y->ToCM.EngineOut.TrqFull =
    ExperimentalPowertrain_P.EngineOutTrqFull_Value;
  ExperimentalPowertrain_Y->ToCM.EngineOut.TrqOpt =
    ExperimentalPowertrain_P.EngineOutTrqOpt_Value;
  ExperimentalPowertrain_Y->ToCM.EngineOut.FuelFlow =
    ExperimentalPowertrain_P.EngineOutFuelFlow_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ISGOut.i_M2W.FL'
   *  Constant: '<S1>/ISGOut.i_M2W.FR'
   *  Constant: '<S1>/ISGOut.i_M2W.RL'
   *  Constant: '<S1>/ISGOut.i_M2W.RR'
   */
  ExperimentalPowertrain_Y->ToCM.ISGOut.i_M2W.FL =
    ExperimentalPowertrain_P.ISGOuti_M2WFL_Value;
  ExperimentalPowertrain_Y->ToCM.ISGOut.i_M2W.FR =
    ExperimentalPowertrain_P.ISGOuti_M2WFR_Value;
  ExperimentalPowertrain_Y->ToCM.ISGOut.i_M2W.RL =
    ExperimentalPowertrain_P.ISGOuti_M2WRL_Value;
  ExperimentalPowertrain_Y->ToCM.ISGOut.i_M2W.RR =
    ExperimentalPowertrain_P.ISGOuti_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ISGOut.PwrElec'
   *  Constant: '<S1>/ISGOut.Trq'
   *  Constant: '<S1>/ISGOut.TrqGen_max'
   *  Constant: '<S1>/ISGOut.TrqMot_max'
   *  Constant: '<S1>/ISGOut.rotv'
   */
  ExperimentalPowertrain_Y->ToCM.ISGOut.rotv =
    ExperimentalPowertrain_P.ISGOutrotv_Value;
  ExperimentalPowertrain_Y->ToCM.ISGOut.Trq =
    ExperimentalPowertrain_P.ISGOutTrq_Value;
  ExperimentalPowertrain_Y->ToCM.ISGOut.TrqMot_max =
    ExperimentalPowertrain_P.ISGOutTrqMot_max_Value;
  ExperimentalPowertrain_Y->ToCM.ISGOut.TrqGen_max =
    ExperimentalPowertrain_P.ISGOutTrqGen_max_Value;
  ExperimentalPowertrain_Y->ToCM.ISGOut.PwrElec =
    ExperimentalPowertrain_P.ISGOutPwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m0.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.RR'
   */
  ExperimentalPowertrain_Y->ToCM.MotorOut.m0.i_M2W.FL =
    ExperimentalPowertrain_P.MotorOutm0i_M2WFL_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m0.i_M2W.FR =
    ExperimentalPowertrain_P.MotorOutm0i_M2WFR_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m0.i_M2W.RL =
    ExperimentalPowertrain_P.MotorOutm0i_M2WRL_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m0.i_M2W.RR =
    ExperimentalPowertrain_P.MotorOutm0i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m0.PwrElec'
   *  Constant: '<S1>/MotorOut.m0.Trq'
   *  Constant: '<S1>/MotorOut.m0.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m0.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m0.rotv'
   */
  ExperimentalPowertrain_Y->ToCM.MotorOut.m0.rotv =
    ExperimentalPowertrain_P.MotorOutm0rotv_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m0.Trq =
    ExperimentalPowertrain_P.MotorOutm0Trq_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m0.TrqMot_max =
    ExperimentalPowertrain_P.MotorOutm0TrqMot_max_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m0.TrqGen_max =
    ExperimentalPowertrain_P.MotorOutm0TrqGen_max_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m0.PwrElec =
    ExperimentalPowertrain_P.MotorOutm0PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m1.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.RR'
   */
  ExperimentalPowertrain_Y->ToCM.MotorOut.m1.i_M2W.FL =
    ExperimentalPowertrain_P.MotorOutm1i_M2WFL_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m1.i_M2W.FR =
    ExperimentalPowertrain_P.MotorOutm1i_M2WFR_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m1.i_M2W.RL =
    ExperimentalPowertrain_P.MotorOutm1i_M2WRL_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m1.i_M2W.RR =
    ExperimentalPowertrain_P.MotorOutm1i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m1.PwrElec'
   *  Constant: '<S1>/MotorOut.m1.Trq'
   *  Constant: '<S1>/MotorOut.m1.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m1.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m1.rotv'
   */
  ExperimentalPowertrain_Y->ToCM.MotorOut.m1.rotv =
    ExperimentalPowertrain_P.MotorOutm1rotv_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m1.Trq =
    ExperimentalPowertrain_P.MotorOutm1Trq_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m1.TrqMot_max =
    ExperimentalPowertrain_P.MotorOutm1TrqMot_max_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m1.TrqGen_max =
    ExperimentalPowertrain_P.MotorOutm1TrqGen_max_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m1.PwrElec =
    ExperimentalPowertrain_P.MotorOutm1PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m2.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.RR'
   */
  ExperimentalPowertrain_Y->ToCM.MotorOut.m2.i_M2W.FL =
    ExperimentalPowertrain_P.MotorOutm2i_M2WFL_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m2.i_M2W.FR =
    ExperimentalPowertrain_P.MotorOutm2i_M2WFR_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m2.i_M2W.RL =
    ExperimentalPowertrain_P.MotorOutm2i_M2WRL_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m2.i_M2W.RR =
    ExperimentalPowertrain_P.MotorOutm2i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m2.PwrElec'
   *  Constant: '<S1>/MotorOut.m2.Trq'
   *  Constant: '<S1>/MotorOut.m2.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m2.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m2.rotv'
   */
  ExperimentalPowertrain_Y->ToCM.MotorOut.m2.rotv =
    ExperimentalPowertrain_P.MotorOutm2rotv_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m2.Trq =
    ExperimentalPowertrain_P.MotorOutm2Trq_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m2.TrqMot_max =
    ExperimentalPowertrain_P.MotorOutm2TrqMot_max_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m2.TrqGen_max =
    ExperimentalPowertrain_P.MotorOutm2TrqGen_max_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m2.PwrElec =
    ExperimentalPowertrain_P.MotorOutm2PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m3.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.RR'
   */
  ExperimentalPowertrain_Y->ToCM.MotorOut.m3.i_M2W.FL =
    ExperimentalPowertrain_P.MotorOutm3i_M2WFL_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m3.i_M2W.FR =
    ExperimentalPowertrain_P.MotorOutm3i_M2WFR_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m3.i_M2W.RL =
    ExperimentalPowertrain_P.MotorOutm3i_M2WRL_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m3.i_M2W.RR =
    ExperimentalPowertrain_P.MotorOutm3i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m3.PwrElec'
   *  Constant: '<S1>/MotorOut.m3.Trq'
   *  Constant: '<S1>/MotorOut.m3.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m3.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m3.rotv'
   */
  ExperimentalPowertrain_Y->ToCM.MotorOut.m3.rotv =
    ExperimentalPowertrain_P.MotorOutm3rotv_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m3.Trq =
    ExperimentalPowertrain_P.MotorOutm3Trq_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m3.TrqMot_max =
    ExperimentalPowertrain_P.MotorOutm3TrqMot_max_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m3.TrqGen_max =
    ExperimentalPowertrain_P.MotorOutm3TrqGen_max_Value;
  ExperimentalPowertrain_Y->ToCM.MotorOut.m3.PwrElec =
    ExperimentalPowertrain_P.MotorOutm3PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ClutchOut.Pos'
   *  Constant: '<S1>/ClutchOut.Trq_in'
   *  Constant: '<S1>/ClutchOut.Trq_out'
   *  Constant: '<S1>/ClutchOut.i_TrqIn2Out'
   *  Constant: '<S1>/ClutchOut.rotv_in'
   *  Constant: '<S1>/ClutchOut.rotv_out'
   */
  ExperimentalPowertrain_Y->ToCM.ClutchOut.Pos =
    ExperimentalPowertrain_P.ClutchOutPos_Value;
  ExperimentalPowertrain_Y->ToCM.ClutchOut.rotv_in =
    ExperimentalPowertrain_P.ClutchOutrotv_in_Value;
  ExperimentalPowertrain_Y->ToCM.ClutchOut.rotv_out =
    ExperimentalPowertrain_P.ClutchOutrotv_out_Value;
  ExperimentalPowertrain_Y->ToCM.ClutchOut.Trq_in =
    ExperimentalPowertrain_P.ClutchOutTrq_in_Value;
  ExperimentalPowertrain_Y->ToCM.ClutchOut.Trq_out =
    ExperimentalPowertrain_P.ClutchOutTrq_out_Value;
  ExperimentalPowertrain_Y->ToCM.ClutchOut.i_TrqIn2Out =
    ExperimentalPowertrain_P.ClutchOuti_TrqIn2Out_Value;

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
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.GearNo =
    ExperimentalPowertrain_P.GearBoxOutGearNo_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.GearNo_dis =
    ExperimentalPowertrain_P.GearBoxOutGearNo_dis_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.Trq_DriveSrc_trg =
    ExperimentalPowertrain_P.GearBoxOutTrq_DriveSrc_trg_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.i =
    ExperimentalPowertrain_P.GearBoxOuti_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.rotv_in =
    ExperimentalPowertrain_P.GearBoxOutrotv_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.rotv_out =
    ExperimentalPowertrain_P.GearBoxOutrotv_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.Trq_in =
    ExperimentalPowertrain_P.GearBoxOutTrq_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.Trq_out =
    ExperimentalPowertrain_P.GearBoxOutTrq_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.Clutch.Pos =
    ExperimentalPowertrain_P.GearBoxOutClutchPos_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.Clutch.rotv_in =
    ExperimentalPowertrain_P.GearBoxOutClutchrotv_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.Clutch.rotv_out =
    ExperimentalPowertrain_P.GearBoxOutClutchrotv_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.Clutch.Trq_in =
    ExperimentalPowertrain_P.GearBoxOutClutchTrq_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.Clutch.Trq_out =
    ExperimentalPowertrain_P.GearBoxOutClutchTrq_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.Clutch.i_TrqIn2Out =
    ExperimentalPowertrain_P.GearBoxOutClutchi_TrqIn2Out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.Clutch_dis.Pos =
    ExperimentalPowertrain_P.GearBoxOutClutch_disPos_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.Clutch_dis.rotv_in =
    ExperimentalPowertrain_P.GearBoxOutClutch_disrotv_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.Clutch_dis.rotv_out =
    ExperimentalPowertrain_P.GearBoxOutClutch_disrotv_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.Clutch_dis.Trq_in =
    ExperimentalPowertrain_P.GearBoxOutClutch_disTrq_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.Clutch_dis.Trq_out =
    ExperimentalPowertrain_P.GearBoxOutClutch_disTrq_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxOut.Clutch_dis.i_TrqIn2Out =
    ExperimentalPowertrain_P.GearBoxOutClutch_disi_TrqIn2Out_Value;

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
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.GearNo =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0GearNo_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.GearNo_dis =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0GearNo_dis_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.Trq_DriveSrc_trg =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0Trq_DriveSrc_trg_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.i =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0i_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.rotv_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0rotv_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.rotv_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0rotv_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.Trq_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0Trq_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.Trq_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0Trq_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Pos =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0ClutchPos_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.rotv_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0Clutchrotv_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.rotv_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0Clutchrotv_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Trq_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0ClutchTrq_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Trq_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0ClutchTrq_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.i_TrqIn2Out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0Clutchi_TrqIn2Out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Pos =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0Clutch_disPos_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.rotv_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0Clutch_disrotv_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.rotv_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0Clutch_disrotv_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Trq_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0Clutch_disTrq_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Trq_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0Clutch_disTrq_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.i_TrqIn2Out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m0Clutch_disi_TrqIn2Out_Value;

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
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.GearNo =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1GearNo_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.GearNo_dis =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1GearNo_dis_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.Trq_DriveSrc_trg =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1Trq_DriveSrc_trg_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.i =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1i_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.rotv_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1rotv_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.rotv_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1rotv_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.Trq_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1Trq_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.Trq_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1Trq_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Pos =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1ClutchPos_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.rotv_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1Clutchrotv_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.rotv_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1Clutchrotv_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Trq_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1ClutchTrq_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Trq_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1ClutchTrq_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.i_TrqIn2Out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1Clutchi_TrqIn2Out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Pos =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1Clutch_disPos_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.rotv_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1Clutch_disrotv_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.rotv_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1Clutch_disrotv_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Trq_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1Clutch_disTrq_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Trq_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1Clutch_disTrq_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.i_TrqIn2Out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m1Clutch_disi_TrqIn2Out_Value;

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
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.GearNo =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2GearNo_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.GearNo_dis =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2GearNo_dis_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.Trq_DriveSrc_trg =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2Trq_DriveSrc_trg_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.i =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2i_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.rotv_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2rotv_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.rotv_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2rotv_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.Trq_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2Trq_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.Trq_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2Trq_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Pos =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2ClutchPos_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.rotv_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2Clutchrotv_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.rotv_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2Clutchrotv_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Trq_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2ClutchTrq_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Trq_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2ClutchTrq_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.i_TrqIn2Out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2Clutchi_TrqIn2Out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Pos =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2Clutch_disPos_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.rotv_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2Clutch_disrotv_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.rotv_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2Clutch_disrotv_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Trq_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2Clutch_disTrq_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Trq_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2Clutch_disTrq_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.i_TrqIn2Out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m2Clutch_disi_TrqIn2Out_Value;

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
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.GearNo =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3GearNo_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.GearNo_dis =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3GearNo_dis_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.Trq_DriveSrc_trg =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3Trq_DriveSrc_trg_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.i =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3i_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.rotv_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3rotv_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.rotv_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3rotv_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.Trq_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3Trq_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.Trq_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3Trq_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Pos =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3ClutchPos_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.rotv_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3Clutchrotv_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.rotv_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3Clutchrotv_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Trq_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3ClutchTrq_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Trq_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3ClutchTrq_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.i_TrqIn2Out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3Clutchi_TrqIn2Out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Pos =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3Clutch_disPos_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.rotv_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3Clutch_disrotv_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.rotv_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3Clutch_disrotv_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Trq_in =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3Clutch_disTrq_in_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Trq_out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3Clutch_disTrq_out_Value;
  ExperimentalPowertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.i_TrqIn2Out =
    ExperimentalPowertrain_P.GearBoxM_OutGB_m3Clutch_disi_TrqIn2Out_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BattLVOut.AOC'
   *  Constant: '<S1>/BattLVOut.Current'
   *  Constant: '<S1>/BattLVOut.Energy'
   *  Constant: '<S1>/BattLVOut.Pwr_max'
   *  Constant: '<S1>/BattLVOut.SOC'
   *  Constant: '<S1>/BattLVOut.SOH'
   *  Constant: '<S1>/BattLVOut.Temp'
   */
  ExperimentalPowertrain_Y->ToCM.BattLVOut.SOC =
    ExperimentalPowertrain_P.BattLVOutSOC_Value;
  ExperimentalPowertrain_Y->ToCM.BattLVOut.SOH =
    ExperimentalPowertrain_P.BattLVOutSOH_Value;
  ExperimentalPowertrain_Y->ToCM.BattLVOut.Current =
    ExperimentalPowertrain_P.BattLVOutCurrent_Value;
  ExperimentalPowertrain_Y->ToCM.BattLVOut.AOC =
    ExperimentalPowertrain_P.BattLVOutAOC_Value;
  ExperimentalPowertrain_Y->ToCM.BattLVOut.Temp =
    ExperimentalPowertrain_P.BattLVOutTemp_Value;
  ExperimentalPowertrain_Y->ToCM.BattLVOut.Energy =
    ExperimentalPowertrain_P.BattLVOutEnergy_Value;
  ExperimentalPowertrain_Y->ToCM.BattLVOut.Pwr_max =
    ExperimentalPowertrain_P.BattLVOutPwr_max_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BattHVOut.AOC'
   *  Constant: '<S1>/BattHVOut.Current'
   *  Constant: '<S1>/BattHVOut.Energy'
   *  Constant: '<S1>/BattHVOut.Pwr_max'
   *  Constant: '<S1>/BattHVOut.SOC'
   *  Constant: '<S1>/BattHVOut.SOH'
   *  Constant: '<S1>/BattHVOut.Temp'
   */
  ExperimentalPowertrain_Y->ToCM.BattHVOut.SOC =
    ExperimentalPowertrain_P.BattHVOutSOC_Value;
  ExperimentalPowertrain_Y->ToCM.BattHVOut.SOH =
    ExperimentalPowertrain_P.BattHVOutSOH_Value;
  ExperimentalPowertrain_Y->ToCM.BattHVOut.Current =
    ExperimentalPowertrain_P.BattHVOutCurrent_Value;
  ExperimentalPowertrain_Y->ToCM.BattHVOut.AOC =
    ExperimentalPowertrain_P.BattHVOutAOC_Value;
  ExperimentalPowertrain_Y->ToCM.BattHVOut.Temp =
    ExperimentalPowertrain_P.BattHVOutTemp_Value;
  ExperimentalPowertrain_Y->ToCM.BattHVOut.Energy =
    ExperimentalPowertrain_P.BattHVOutEnergy_Value;
  ExperimentalPowertrain_Y->ToCM.BattHVOut.Pwr_max =
    ExperimentalPowertrain_P.BattHVOutPwr_max_Value;

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
  ExperimentalPowertrain_Y->ToCM.PwrSupplyOut.Pwr_LV =
    ExperimentalPowertrain_P.PwrSupplyOutPwr_LV_Value;
  ExperimentalPowertrain_Y->ToCM.PwrSupplyOut.Pwr_HV1 =
    ExperimentalPowertrain_P.PwrSupplyOutPwr_HV1_Value;
  ExperimentalPowertrain_Y->ToCM.PwrSupplyOut.Pwr_HV2 =
    ExperimentalPowertrain_P.PwrSupplyOutPwr_HV2_Value;
  ExperimentalPowertrain_Y->ToCM.PwrSupplyOut.Voltage_LV =
    ExperimentalPowertrain_P.PwrSupplyOutVoltage_LV_Value;
  ExperimentalPowertrain_Y->ToCM.PwrSupplyOut.Voltage_HV1 =
    ExperimentalPowertrain_P.PwrSupplyOutVoltage_HV1_Value;
  ExperimentalPowertrain_Y->ToCM.PwrSupplyOut.Voltage_HV2 =
    ExperimentalPowertrain_P.PwrSupplyOutVoltage_HV2_Value;
  ExperimentalPowertrain_Y->ToCM.PwrSupplyOut.Pwr_HV1toLV =
    ExperimentalPowertrain_P.PwrSupplyOutPwr_HV1toLV_Value;
  ExperimentalPowertrain_Y->ToCM.PwrSupplyOut.Pwr_HV1toHV2 =
    ExperimentalPowertrain_P.PwrSupplyOutPwr_HV1toHV2_Value;
  ExperimentalPowertrain_Y->ToCM.PwrSupplyOut.Pwr_HV1toLV_max =
    ExperimentalPowertrain_P.PwrSupplyOutPwr_HV1toLV_max_Value;
  ExperimentalPowertrain_Y->ToCM.PwrSupplyOut.Pwr_HV1toHV2_max =
    ExperimentalPowertrain_P.PwrSupplyOutPwr_HV1toHV2_max_Value;
  ExperimentalPowertrain_Y->ToCM.PwrSupplyOut.Eta_HV1toLV =
    ExperimentalPowertrain_P.PwrSupplyOutEta_HV1toLV_Value;
  ExperimentalPowertrain_Y->ToCM.PwrSupplyOut.Eta_HV1toHV2 =
    ExperimentalPowertrain_P.PwrSupplyOutEta_HV1toHV2_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Trq_Supp2Bdy1.rx'
   *  Constant: '<S1>/Trq_Supp2Bdy1.ry'
   *  Constant: '<S1>/Trq_Supp2Bdy1.rz'
   */
  rtb_Trq_Supp2Bdy1_rx = ExperimentalPowertrain_P.Trq_Supp2Bdy1rx_Value;
  rtb_Trq_Supp2Bdy1_ry = ExperimentalPowertrain_P.Trq_Supp2Bdy1ry_Value;
  rtb_Trq_Supp2Bdy1_rz = ExperimentalPowertrain_P.Trq_Supp2Bdy1rz_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Trq_Supp2Bdy1B.rx'
   *  Constant: '<S1>/Trq_Supp2Bdy1B.ry'
   *  Constant: '<S1>/Trq_Supp2Bdy1B.rz'
   */
  rtb_Trq_Supp2Bdy1B_rx = ExperimentalPowertrain_P.Trq_Supp2Bdy1Brx_Value;
  rtb_Trq_Supp2Bdy1B_ry = ExperimentalPowertrain_P.Trq_Supp2Bdy1Bry_Value;
  rtb_Trq_Supp2Bdy1B_rz = ExperimentalPowertrain_P.Trq_Supp2Bdy1Brz_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Trq_Supp2BdyEng.rx'
   *  Constant: '<S1>/Trq_Supp2BdyEng.ry'
   */
  ExperimentalPowertrain_Y->ToCM.Trq_Supp2BdyEng.rx =
    ExperimentalPowertrain_P.Trq_Supp2BdyEngrx_Value;
  ExperimentalPowertrain_Y->ToCM.Trq_Supp2BdyEng.ry =
    ExperimentalPowertrain_P.Trq_Supp2BdyEngry_Value;

  /* If: '<S2>/If' incorporates:
   *  Constant: '<Root>/LaunchMode1'
   *  Constant: '<S2>/Launch Control spd limit'
   *  Inport: '<Root>/FromCM'
   */
  if ((ExperimentalPowertrain_P.LaunchMode1_Value > 0.0) &&
      (ExperimentalPowertrain_U->FromCM.Velocity <
       ExperimentalPowertrain_P.LaunchControlspdlimit_Value)) {
    /* Outputs for IfAction SubSystem: '<S2>/Launch Control' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Abs: '<S6>/Abs' incorporates:
     *  Constant: '<S6>/GearRatio2'
     *  Product: '<S6>/Product'
     */
    rtb_Gain3 = fabs(ExperimentalPowertrain_U->FromCM.WheelIn.FL.rotv *
                     ExperimentalPowertrain_P.GearRatio2_Value);

    /* Lookup_n-D: '<S6>/1-D Lookup Table1' */
    rtb_uDLookupTable1 = look1_binlxpw(rtb_Gain3,
      ExperimentalPowertrain_P.uDLookupTable1_bp01Data,
      ExperimentalPowertrain_P.uDLookupTable1_tableData, 13U);

    /* Gain: '<S6>/Gain3' */
    rtb_Gain3 *= ExperimentalPowertrain_P.Gain3_Gain;

    /* Lookup_n-D: '<S6>/2-D Lookup Table1' */
    rtb_Gain3 = look2_binlxpw(ExperimentalPowertrain_U->FromCM.Gas, rtb_Gain3,
      ExperimentalPowertrain_P.uDLookupTable1_bp01Data_b,
      ExperimentalPowertrain_P.uDLookupTable1_bp02Data,
      ExperimentalPowertrain_P.uDLookupTable1_tableData_f,
      ExperimentalPowertrain_P.uDLookupTable1_maxIndex, 6U);

    /* If: '<S6>/If' */
    if (rtb_uDLookupTable1 < rtb_Gain3) {
      /* Outputs for IfAction SubSystem: '<S6>/If Action Subsystem' incorporates:
       *  ActionPort: '<S10>/Action Port'
       */
      ExperimentalPowertrain_IfActionSubsystem(rtb_uDLookupTable1,
        &ExperimentalPowertrain_B->IfActionSubsystem);

      /* End of Outputs for SubSystem: '<S6>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S6>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S11>/Action Port'
       */
      ExperimentalPowertrain_IfActionSubsystem(rtb_Gain3,
        &ExperimentalPowertrain_B->IfActionSubsystem1);

      /* End of Outputs for SubSystem: '<S6>/If Action Subsystem1' */
    }

    /* End of If: '<S6>/If' */

    /* Product: '<S6>/Product1' incorporates:
     *  Constant: '<S6>/GearRatio2'
     *  Sum: '<S6>/Sum of Elements'
     */
    ExperimentalPowertrain_B->Product1 =
      (ExperimentalPowertrain_B->IfActionSubsystem1.In1 +
       ExperimentalPowertrain_B->IfActionSubsystem.In1) *
      ExperimentalPowertrain_P.GearRatio2_Value;

    /* Gain: '<S6>/Gain' */
    ExperimentalPowertrain_B->Gain_j = ExperimentalPowertrain_P.Gain_Gain *
      ExperimentalPowertrain_B->Product1;

    /* Abs: '<S7>/Abs' incorporates:
     *  Constant: '<S7>/GearRatio2'
     *  Product: '<S7>/Product'
     */
    rtb_Gain3 = fabs(ExperimentalPowertrain_U->FromCM.WheelIn.FR.rotv *
                     ExperimentalPowertrain_P.GearRatio2_Value_b);

    /* Lookup_n-D: '<S7>/1-D Lookup Table1' */
    rtb_uDLookupTable1 = look1_binlxpw(rtb_Gain3,
      ExperimentalPowertrain_P.uDLookupTable1_bp01Data_l,
      ExperimentalPowertrain_P.uDLookupTable1_tableData_p, 13U);

    /* Gain: '<S7>/Gain3' */
    rtb_Gain3 *= ExperimentalPowertrain_P.Gain3_Gain_f;

    /* Lookup_n-D: '<S7>/2-D Lookup Table1' */
    rtb_Gain3 = look2_binlxpw(ExperimentalPowertrain_U->FromCM.Gas, rtb_Gain3,
      ExperimentalPowertrain_P.uDLookupTable1_bp01Data_o,
      ExperimentalPowertrain_P.uDLookupTable1_bp02Data_l,
      ExperimentalPowertrain_P.uDLookupTable1_tableData_h,
      ExperimentalPowertrain_P.uDLookupTable1_maxIndex_p, 6U);

    /* If: '<S7>/If' */
    if (rtb_uDLookupTable1 < rtb_Gain3) {
      /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem' incorporates:
       *  ActionPort: '<S12>/Action Port'
       */
      ExperimentalPowertrain_IfActionSubsystem(rtb_uDLookupTable1,
        &ExperimentalPowertrain_B->IfActionSubsystem_n);

      /* End of Outputs for SubSystem: '<S7>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S13>/Action Port'
       */
      ExperimentalPowertrain_IfActionSubsystem(rtb_Gain3,
        &ExperimentalPowertrain_B->IfActionSubsystem1_a);

      /* End of Outputs for SubSystem: '<S7>/If Action Subsystem1' */
    }

    /* End of If: '<S7>/If' */

    /* Product: '<S7>/Product1' incorporates:
     *  Constant: '<S7>/GearRatio2'
     *  Sum: '<S7>/Sum of Elements'
     */
    ExperimentalPowertrain_B->Product1_o =
      (ExperimentalPowertrain_B->IfActionSubsystem1_a.In1 +
       ExperimentalPowertrain_B->IfActionSubsystem_n.In1) *
      ExperimentalPowertrain_P.GearRatio2_Value_b;

    /* Gain: '<S7>/Gain' */
    ExperimentalPowertrain_B->Gain_n = ExperimentalPowertrain_P.Gain_Gain_d *
      ExperimentalPowertrain_B->Product1_o;

    /* Abs: '<S8>/Abs' incorporates:
     *  Constant: '<S8>/GearRatio2'
     *  Product: '<S8>/Product'
     */
    rtb_Gain3 = fabs(ExperimentalPowertrain_U->FromCM.WheelIn.RL.rotv *
                     ExperimentalPowertrain_P.GearRatio2_Value_i);

    /* Lookup_n-D: '<S8>/1-D Lookup Table1' */
    rtb_uDLookupTable1 = look1_binlxpw(rtb_Gain3,
      ExperimentalPowertrain_P.uDLookupTable1_bp01Data_a,
      ExperimentalPowertrain_P.uDLookupTable1_tableData_i, 9U);

    /* Gain: '<S8>/Gain3' */
    rtb_Gain3 *= ExperimentalPowertrain_P.Gain3_Gain_m;

    /* Lookup_n-D: '<S8>/2-D Lookup Table1' */
    rtb_Gain3 = look2_binlxpw(ExperimentalPowertrain_U->FromCM.Gas, rtb_Gain3,
      ExperimentalPowertrain_P.uDLookupTable1_bp01Data_a0,
      ExperimentalPowertrain_P.uDLookupTable1_bp02Data_f,
      ExperimentalPowertrain_P.uDLookupTable1_tableData_ib,
      ExperimentalPowertrain_P.uDLookupTable1_maxIndex_k, 6U);

    /* If: '<S8>/If' */
    if (rtb_uDLookupTable1 < rtb_Gain3) {
      /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem' incorporates:
       *  ActionPort: '<S14>/Action Port'
       */
      ExperimentalPowertrain_IfActionSubsystem(rtb_uDLookupTable1,
        &ExperimentalPowertrain_B->IfActionSubsystem_p);

      /* End of Outputs for SubSystem: '<S8>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S15>/Action Port'
       */
      ExperimentalPowertrain_IfActionSubsystem(rtb_Gain3,
        &ExperimentalPowertrain_B->IfActionSubsystem1_c);

      /* End of Outputs for SubSystem: '<S8>/If Action Subsystem1' */
    }

    /* End of If: '<S8>/If' */

    /* Product: '<S8>/Product1' incorporates:
     *  Constant: '<S8>/GearRatio2'
     *  Sum: '<S8>/Sum of Elements'
     */
    ExperimentalPowertrain_B->Product1_l =
      (ExperimentalPowertrain_B->IfActionSubsystem1_c.In1 +
       ExperimentalPowertrain_B->IfActionSubsystem_p.In1) *
      ExperimentalPowertrain_P.GearRatio2_Value_i;

    /* Gain: '<S8>/Gain' */
    ExperimentalPowertrain_B->Gain_hd = ExperimentalPowertrain_P.Gain_Gain_f *
      ExperimentalPowertrain_B->Product1_l;

    /* Abs: '<S9>/Abs' incorporates:
     *  Constant: '<S9>/GearRatio2'
     *  Product: '<S9>/Product'
     */
    rtb_Gain3 = fabs(ExperimentalPowertrain_U->FromCM.WheelIn.RR.rotv *
                     ExperimentalPowertrain_P.GearRatio2_Value_f);

    /* Lookup_n-D: '<S9>/1-D Lookup Table1' */
    rtb_uDLookupTable1 = look1_binlxpw(rtb_Gain3,
      ExperimentalPowertrain_P.uDLookupTable1_bp01Data_h,
      ExperimentalPowertrain_P.uDLookupTable1_tableData_ib0, 9U);

    /* Gain: '<S9>/Gain3' */
    rtb_Gain3 *= ExperimentalPowertrain_P.Gain3_Gain_o;

    /* Lookup_n-D: '<S9>/2-D Lookup Table1' */
    rtb_Gain3 = look2_binlxpw(ExperimentalPowertrain_U->FromCM.Gas, rtb_Gain3,
      ExperimentalPowertrain_P.uDLookupTable1_bp01Data_m,
      ExperimentalPowertrain_P.uDLookupTable1_bp02Data_e,
      ExperimentalPowertrain_P.uDLookupTable1_tableData_hf,
      ExperimentalPowertrain_P.uDLookupTable1_maxIndex_a, 6U);

    /* If: '<S9>/If' */
    if (rtb_uDLookupTable1 < rtb_Gain3) {
      /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem' incorporates:
       *  ActionPort: '<S16>/Action Port'
       */
      ExperimentalPowertrain_IfActionSubsystem(rtb_uDLookupTable1,
        &ExperimentalPowertrain_B->IfActionSubsystem_nx);

      /* End of Outputs for SubSystem: '<S9>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S17>/Action Port'
       */
      ExperimentalPowertrain_IfActionSubsystem(rtb_Gain3,
        &ExperimentalPowertrain_B->IfActionSubsystem1_l);

      /* End of Outputs for SubSystem: '<S9>/If Action Subsystem1' */
    }

    /* End of If: '<S9>/If' */

    /* Product: '<S9>/Product1' incorporates:
     *  Constant: '<S9>/GearRatio2'
     *  Sum: '<S9>/Sum of Elements'
     */
    ExperimentalPowertrain_B->Product1_m =
      (ExperimentalPowertrain_B->IfActionSubsystem1_l.In1 +
       ExperimentalPowertrain_B->IfActionSubsystem_nx.In1) *
      ExperimentalPowertrain_P.GearRatio2_Value_f;

    /* Gain: '<S9>/Gain' */
    ExperimentalPowertrain_B->Gain_a = ExperimentalPowertrain_P.Gain_Gain_j *
      ExperimentalPowertrain_B->Product1_m;

    /* End of Outputs for SubSystem: '<S2>/Launch Control' */
  } else {
    /* Outputs for IfAction SubSystem: '<S2>/Traction Control' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Gain: '<S19>/Gain3' incorporates:
     *  Constant: '<S19>/Constant'
     *  Constant: '<S19>/Constant1'
     *  Constant: '<S19>/TargetSlip'
     *  Gain: '<S19>/Gain2'
     *  Product: '<S19>/Divide'
     *  Product: '<S19>/Divide1'
     *  Sum: '<S19>/Subtract'
     */
    ExperimentalPowertrain_B->Gain3 = ExperimentalPowertrain_U->FromCM.Velocity /
      ExperimentalPowertrain_P.Constant_Value *
      ExperimentalPowertrain_P.Gain2_Gain /
      (ExperimentalPowertrain_P.Constant1_Value -
       ExperimentalPowertrain_P.TargetSlip_Value) *
      ExperimentalPowertrain_P.Gain3_Gain_n;

    /* Lookup_n-D: '<S19>/1-D Lookup Table' */
    ExperimentalPowertrain_B->uDLookupTable = look1_binlxpw
      (ExperimentalPowertrain_B->Gain3,
       ExperimentalPowertrain_P.uDLookupTable_bp01Data,
       ExperimentalPowertrain_P.uDLookupTable_tableData, 13U);

    /* S-Function (write_dict): '<S19>/Write CM Dict' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)ExperimentalPowertrain_DW->WriteCMDict_PWORK.Entry;
      if (!ExperimentalPowertrain_DW->WriteCMDict_IWORK.Checked) {
        ExperimentalPowertrain_DW->WriteCMDict_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'ExperimentalPowertrain'");
      }

      value = ExperimentalPowertrain_B->uDLookupTable;
      DVA_PokeSL(e, value);
    }

    /* S-Function (write_dict): '<S19>/Write CM Dict1' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)ExperimentalPowertrain_DW->WriteCMDict1_PWORK.Entry;
      if (!ExperimentalPowertrain_DW->WriteCMDict1_IWORK.Checked) {
        ExperimentalPowertrain_DW->WriteCMDict1_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'ExperimentalPowertrain'");
      }

      value = ExperimentalPowertrain_B->Gain3;
      DVA_PokeSL(e, value);
    }

    /* Sum: '<S19>/Subtract1' */
    ExperimentalPowertrain_B->Subtract1 =
      ExperimentalPowertrain_U->FromCM.WheelIn.FL.rotv -
      ExperimentalPowertrain_B->Gain3;

    /* S-Function (write_dict): '<S19>/Write CM Dict2' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)ExperimentalPowertrain_DW->WriteCMDict2_PWORK.Entry;
      if (!ExperimentalPowertrain_DW->WriteCMDict2_IWORK.Checked) {
        ExperimentalPowertrain_DW->WriteCMDict2_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'ExperimentalPowertrain'");
      }

      value = ExperimentalPowertrain_B->Subtract1;
      DVA_PokeSL(e, value);
    }

    /* Product: '<S19>/Divide2' */
    ExperimentalPowertrain_B->Divide2 = ExperimentalPowertrain_B->Subtract1 /
      ExperimentalPowertrain_U->FromCM.WheelIn.FL.rotv;

    /* S-Function (write_dict): '<S19>/Write CM Dict3' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)ExperimentalPowertrain_DW->WriteCMDict3_PWORK.Entry;
      if (!ExperimentalPowertrain_DW->WriteCMDict3_IWORK.Checked) {
        ExperimentalPowertrain_DW->WriteCMDict3_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'ExperimentalPowertrain'");
      }

      value = ExperimentalPowertrain_B->Divide2;
      DVA_PokeSL(e, value);
    }

    /* Product: '<S19>/Product2' incorporates:
     *  Constant: '<S19>/GearRatio'
     */
    ExperimentalPowertrain_B->Product2 = ExperimentalPowertrain_B->uDLookupTable
      * ExperimentalPowertrain_P.GearRatio_Value;

    /* Gain: '<S19>/Gain' */
    ExperimentalPowertrain_B->Gain = ExperimentalPowertrain_P.Gain_Gain_o *
      ExperimentalPowertrain_B->Product2;

    /* Product: '<S20>/Product2' incorporates:
     *  Constant: '<S20>/Constant'
     *  Constant: '<S20>/Constant1'
     *  Constant: '<S20>/GearRatio'
     *  Constant: '<S20>/TargetSlip'
     *  Gain: '<S20>/Gain2'
     *  Gain: '<S20>/Gain3'
     *  Lookup_n-D: '<S20>/1-D Lookup Table'
     *  Product: '<S20>/Divide'
     *  Product: '<S20>/Divide1'
     *  Sum: '<S20>/Subtract'
     */
    ExperimentalPowertrain_B->Product2_m = look1_binlxpw
      (ExperimentalPowertrain_U->FromCM.Velocity /
       ExperimentalPowertrain_P.Constant_Value_l *
       ExperimentalPowertrain_P.Gain2_Gain_g /
       (ExperimentalPowertrain_P.Constant1_Value_m -
        ExperimentalPowertrain_P.TargetSlip_Value_c) *
       ExperimentalPowertrain_P.Gain3_Gain_l,
       ExperimentalPowertrain_P.uDLookupTable_bp01Data_g,
       ExperimentalPowertrain_P.uDLookupTable_tableData_c, 13U) *
      ExperimentalPowertrain_P.GearRatio_Value_p;

    /* Gain: '<S20>/Gain' */
    ExperimentalPowertrain_B->Gain_h = ExperimentalPowertrain_P.Gain_Gain_m *
      ExperimentalPowertrain_B->Product2_m;

    /* Product: '<S21>/Product2' incorporates:
     *  Constant: '<S21>/Constant'
     *  Constant: '<S21>/Constant1'
     *  Constant: '<S21>/GearRatio'
     *  Constant: '<S21>/TargetSlip'
     *  Gain: '<S21>/Gain2'
     *  Gain: '<S21>/Gain3'
     *  Lookup_n-D: '<S21>/1-D Lookup Table'
     *  Product: '<S21>/Divide'
     *  Product: '<S21>/Divide1'
     *  Sum: '<S21>/Subtract'
     */
    ExperimentalPowertrain_B->Product2_n = look1_binlxpw
      (ExperimentalPowertrain_U->FromCM.Velocity /
       ExperimentalPowertrain_P.Constant_Value_c *
       ExperimentalPowertrain_P.Gain2_Gain_i /
       (ExperimentalPowertrain_P.Constant1_Value_l -
        ExperimentalPowertrain_P.TargetSlip_Value_j) *
       ExperimentalPowertrain_P.Gain3_Gain_mj,
       ExperimentalPowertrain_P.uDLookupTable_bp01Data_c,
       ExperimentalPowertrain_P.uDLookupTable_tableData_d, 13U) *
      ExperimentalPowertrain_P.GearRatio_Value_m;

    /* Gain: '<S21>/Gain' */
    ExperimentalPowertrain_B->Gain_p = ExperimentalPowertrain_P.Gain_Gain_a *
      ExperimentalPowertrain_B->Product2_n;

    /* Product: '<S22>/Product2' incorporates:
     *  Constant: '<S22>/Constant'
     *  Constant: '<S22>/Constant1'
     *  Constant: '<S22>/GearRatio'
     *  Constant: '<S22>/TargetSlip'
     *  Gain: '<S22>/Gain2'
     *  Gain: '<S22>/Gain3'
     *  Lookup_n-D: '<S22>/1-D Lookup Table'
     *  Product: '<S22>/Divide'
     *  Product: '<S22>/Divide1'
     *  Sum: '<S22>/Subtract'
     */
    ExperimentalPowertrain_B->Product2_j = look1_binlxpw
      (ExperimentalPowertrain_U->FromCM.Velocity /
       ExperimentalPowertrain_P.Constant_Value_c3 *
       ExperimentalPowertrain_P.Gain2_Gain_m /
       (ExperimentalPowertrain_P.Constant1_Value_ld -
        ExperimentalPowertrain_P.TargetSlip_Value_h) *
       ExperimentalPowertrain_P.Gain3_Gain_a,
       ExperimentalPowertrain_P.uDLookupTable_bp01Data_a,
       ExperimentalPowertrain_P.uDLookupTable_tableData_l, 13U) *
      ExperimentalPowertrain_P.GearRatio_Value_j;

    /* Gain: '<S22>/Gain' */
    ExperimentalPowertrain_B->Gain_f = ExperimentalPowertrain_P.Gain_Gain_l *
      ExperimentalPowertrain_B->Product2_j;

    /* End of Outputs for SubSystem: '<S2>/Traction Control' */
  }

  /* End of If: '<S2>/If' */

  /* Sum: '<S2>/Sum' */
  ExperimentalPowertrain_Y->ToCM.WheelOut.FL.Trq_Drive =
    ExperimentalPowertrain_B->Product1 + ExperimentalPowertrain_B->Product2;

  /* Sum: '<S2>/Sum1' */
  ExperimentalPowertrain_Y->ToCM.WheelOut.FL.Trq_Supp2WC =
    ExperimentalPowertrain_B->Gain_j + ExperimentalPowertrain_B->Gain;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.FL.Inert_in'
   */
  ExperimentalPowertrain_Y->ToCM.WheelOut.FL.Inert_in =
    ExperimentalPowertrain_P.WheelOutFLInert_in_Value;

  /* Sum: '<S2>/Sum2' */
  ExperimentalPowertrain_Y->ToCM.WheelOut.FR.Trq_Drive =
    ExperimentalPowertrain_B->Product1_o + ExperimentalPowertrain_B->Product2_m;

  /* Sum: '<S2>/Sum3' */
  ExperimentalPowertrain_Y->ToCM.WheelOut.FR.Trq_Supp2WC =
    ExperimentalPowertrain_B->Gain_n + ExperimentalPowertrain_B->Gain_h;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.FR.Inert_in'
   */
  ExperimentalPowertrain_Y->ToCM.WheelOut.FR.Inert_in =
    ExperimentalPowertrain_P.WheelOutFRInert_in_Value;

  /* Sum: '<S2>/Sum4' */
  ExperimentalPowertrain_Y->ToCM.WheelOut.RL.Trq_Drive =
    ExperimentalPowertrain_B->Product1_l + ExperimentalPowertrain_B->Product2_n;

  /* Sum: '<S2>/Sum5' */
  ExperimentalPowertrain_Y->ToCM.WheelOut.RL.Trq_Supp2WC =
    ExperimentalPowertrain_B->Gain_hd + ExperimentalPowertrain_B->Gain_p;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.RL.Inert_in'
   */
  ExperimentalPowertrain_Y->ToCM.WheelOut.RL.Inert_in =
    ExperimentalPowertrain_P.WheelOutRLInert_in_Value;

  /* Sum: '<S2>/Sum6' */
  ExperimentalPowertrain_Y->ToCM.WheelOut.RR.Trq_Drive =
    ExperimentalPowertrain_B->Product1_m + ExperimentalPowertrain_B->Product2_j;

  /* Sum: '<S2>/Sum7' */
  ExperimentalPowertrain_Y->ToCM.WheelOut.RR.Trq_Supp2WC =
    ExperimentalPowertrain_B->Gain_a + ExperimentalPowertrain_B->Gain_f;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.RR.Inert_in'
   */
  ExperimentalPowertrain_Y->ToCM.WheelOut.RR.Inert_in =
    ExperimentalPowertrain_P.WheelOutRRInert_in_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/PowerDelta.Diffs'
   *  Constant: '<S1>/PowerDelta.Inert'
   *  Constant: '<S1>/PowerDelta.Inert_DL'
   *  Constant: '<S1>/PowerDelta.PlanetGear'
   *  Constant: '<S1>/PowerDelta.PowerSupply'
   *  Constant: '<S1>/PowerDelta.Shafts'
   *  Constant: '<S1>/PowerDelta.Spring_DL'
   */
  ExperimentalPowertrain_Y->ToCM.PowerDelta.PlanetGear =
    ExperimentalPowertrain_P.PowerDeltaPlanetGear_Value;
  ExperimentalPowertrain_Y->ToCM.PowerDelta.Diffs =
    ExperimentalPowertrain_P.PowerDeltaDiffs_Value;
  ExperimentalPowertrain_Y->ToCM.PowerDelta.Shafts =
    ExperimentalPowertrain_P.PowerDeltaShafts_Value;
  ExperimentalPowertrain_Y->ToCM.PowerDelta.Spring_DL =
    ExperimentalPowertrain_P.PowerDeltaSpring_DL_Value;
  ExperimentalPowertrain_Y->ToCM.PowerDelta.Inert_DL =
    ExperimentalPowertrain_P.PowerDeltaInert_DL_Value;
  ExperimentalPowertrain_Y->ToCM.PowerDelta.Inert =
    ExperimentalPowertrain_P.PowerDeltaInert_Value;
  ExperimentalPowertrain_Y->ToCM.PowerDelta.PowerSupply =
    ExperimentalPowertrain_P.PowerDeltaPowerSupply_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BCU_Status'
   *  Constant: '<S1>/DL_iDiff_mean'
   *  Constant: '<S1>/ECU_Status'
   *  Constant: '<S1>/MCU_Status'
   *  Constant: '<S1>/TCU_Status'
   *  Outport: '<Root>/ToCM'
   */
  ExperimentalPowertrain_Y->ToCM.ECU_Status =
    ExperimentalPowertrain_P.ECU_Status_Value;
  ExperimentalPowertrain_Y->ToCM.MCU_Status =
    ExperimentalPowertrain_P.MCU_Status_Value;
  ExperimentalPowertrain_Y->ToCM.TCU_Status =
    ExperimentalPowertrain_P.TCU_Status_Value;
  ExperimentalPowertrain_Y->ToCM.BCU_Status =
    ExperimentalPowertrain_P.BCU_Status_Value;
  ExperimentalPowertrain_Y->ToCM.Trq_Supp2Bdy1.rx = rtb_Trq_Supp2Bdy1_rx;
  ExperimentalPowertrain_Y->ToCM.Trq_Supp2Bdy1.ry = rtb_Trq_Supp2Bdy1_ry;
  ExperimentalPowertrain_Y->ToCM.Trq_Supp2Bdy1.rz = rtb_Trq_Supp2Bdy1_rz;
  ExperimentalPowertrain_Y->ToCM.Trq_Supp2Bdy1B.rx = rtb_Trq_Supp2Bdy1B_rx;
  ExperimentalPowertrain_Y->ToCM.Trq_Supp2Bdy1B.ry = rtb_Trq_Supp2Bdy1B_ry;
  ExperimentalPowertrain_Y->ToCM.Trq_Supp2Bdy1B.rz = rtb_Trq_Supp2Bdy1B_rz;
  ExperimentalPowertrain_Y->ToCM.DL_iDiff_mean =
    ExperimentalPowertrain_P.DL_iDiff_mean_Value;
}

/* Model initialize function */
void ExperimentalPowertrain_initialize(RT_MODEL_ExperimentalPowertrain_T *const
  ExperimentalPowertrain_M)
{
  DW_ExperimentalPowertrain_T *ExperimentalPowertrain_DW =
    ((DW_ExperimentalPowertrain_T *) ExperimentalPowertrain_M->dwork);
  B_ExperimentalPowertrain_T *ExperimentalPowertrain_B =
    ((B_ExperimentalPowertrain_T *) ExperimentalPowertrain_M->blockIO);

  /* Start for IfAction SubSystem: '<S2>/Traction Control' */

  /* Start for S-Function (write_dict): '<S19>/Write CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Caleb.TorqueTarget", NULL);
    ExperimentalPowertrain_DW->WriteCMDict_IWORK.Checked = 0;
    ExperimentalPowertrain_DW->WriteCMDict_PWORK.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S19>/Write CM Dict1' */
  {
    char **namevec = CM_Names2StrVec("Caleb.FrontTarget", NULL);
    ExperimentalPowertrain_DW->WriteCMDict1_IWORK.Checked = 0;
    ExperimentalPowertrain_DW->WriteCMDict1_PWORK.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S19>/Write CM Dict2' */
  {
    char **namevec = CM_Names2StrVec("Caleb.RotDiff", NULL);
    ExperimentalPowertrain_DW->WriteCMDict2_IWORK.Checked = 0;
    ExperimentalPowertrain_DW->WriteCMDict2_PWORK.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S19>/Write CM Dict3' */
  {
    char **namevec = CM_Names2StrVec("Caleb.PerDiff", NULL);
    ExperimentalPowertrain_DW->WriteCMDict3_IWORK.Checked = 0;
    ExperimentalPowertrain_DW->WriteCMDict3_PWORK.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* End of Start for SubSystem: '<S2>/Traction Control' */

  /* SystemInitialize for IfAction SubSystem: '<S2>/Launch Control' */
  /* SystemInitialize for IfAction SubSystem: '<S6>/If Action Subsystem' */
  ExperimentalPowertrain_IfActionSubsystem_Init
    (&ExperimentalPowertrain_B->IfActionSubsystem,
     &ExperimentalPowertrain_P.IfActionSubsystem);

  /* End of SystemInitialize for SubSystem: '<S6>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S6>/If Action Subsystem1' */
  ExperimentalPowertrain_IfActionSubsystem_Init
    (&ExperimentalPowertrain_B->IfActionSubsystem1,
     &ExperimentalPowertrain_P.IfActionSubsystem1);

  /* End of SystemInitialize for SubSystem: '<S6>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S7>/If Action Subsystem' */
  ExperimentalPowertrain_IfActionSubsystem_Init
    (&ExperimentalPowertrain_B->IfActionSubsystem_n,
     &ExperimentalPowertrain_P.IfActionSubsystem_n);

  /* End of SystemInitialize for SubSystem: '<S7>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S7>/If Action Subsystem1' */
  ExperimentalPowertrain_IfActionSubsystem_Init
    (&ExperimentalPowertrain_B->IfActionSubsystem1_a,
     &ExperimentalPowertrain_P.IfActionSubsystem1_a);

  /* End of SystemInitialize for SubSystem: '<S7>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S8>/If Action Subsystem' */
  ExperimentalPowertrain_IfActionSubsystem_Init
    (&ExperimentalPowertrain_B->IfActionSubsystem_p,
     &ExperimentalPowertrain_P.IfActionSubsystem_p);

  /* End of SystemInitialize for SubSystem: '<S8>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S8>/If Action Subsystem1' */
  ExperimentalPowertrain_IfActionSubsystem_Init
    (&ExperimentalPowertrain_B->IfActionSubsystem1_c,
     &ExperimentalPowertrain_P.IfActionSubsystem1_c);

  /* End of SystemInitialize for SubSystem: '<S8>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S9>/If Action Subsystem' */
  ExperimentalPowertrain_IfActionSubsystem_Init
    (&ExperimentalPowertrain_B->IfActionSubsystem_nx,
     &ExperimentalPowertrain_P.IfActionSubsystem_nx);

  /* End of SystemInitialize for SubSystem: '<S9>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S9>/If Action Subsystem1' */
  ExperimentalPowertrain_IfActionSubsystem_Init
    (&ExperimentalPowertrain_B->IfActionSubsystem1_l,
     &ExperimentalPowertrain_P.IfActionSubsystem1_l);

  /* End of SystemInitialize for SubSystem: '<S9>/If Action Subsystem1' */

  /* SystemInitialize for Outport: '<S3>/FL trq' */
  ExperimentalPowertrain_B->Product1 = ExperimentalPowertrain_P.FLtrq_Y0;

  /* SystemInitialize for Outport: '<S3>/FL trq inv' */
  ExperimentalPowertrain_B->Gain_j = ExperimentalPowertrain_P.FLtrqinv_Y0;

  /* SystemInitialize for Outport: '<S3>/FR trq' */
  ExperimentalPowertrain_B->Product1_o = ExperimentalPowertrain_P.FRtrq_Y0;

  /* SystemInitialize for Outport: '<S3>/FR trq inv' */
  ExperimentalPowertrain_B->Gain_n = ExperimentalPowertrain_P.FRtrqinv_Y0;

  /* SystemInitialize for Outport: '<S3>/RL trq' */
  ExperimentalPowertrain_B->Product1_l = ExperimentalPowertrain_P.RLtrq_Y0;

  /* SystemInitialize for Outport: '<S3>/RL trq inv' */
  ExperimentalPowertrain_B->Gain_hd = ExperimentalPowertrain_P.RLtrqinv_Y0;

  /* SystemInitialize for Outport: '<S3>/RR trq' */
  ExperimentalPowertrain_B->Product1_m = ExperimentalPowertrain_P.RRtrq_Y0;

  /* SystemInitialize for Outport: '<S3>/RR trq inv' */
  ExperimentalPowertrain_B->Gain_a = ExperimentalPowertrain_P.RRtrqinv_Y0;

  /* End of SystemInitialize for SubSystem: '<S2>/Launch Control' */

  /* SystemInitialize for IfAction SubSystem: '<S2>/Traction Control' */
  /* SystemInitialize for Outport: '<S4>/FL trq' */
  ExperimentalPowertrain_B->Product2 = ExperimentalPowertrain_P.FLtrq_Y0_j;

  /* SystemInitialize for Outport: '<S4>/FL trq inv' */
  ExperimentalPowertrain_B->Gain = ExperimentalPowertrain_P.FLtrqinv_Y0_f;

  /* SystemInitialize for Outport: '<S4>/FR trq' */
  ExperimentalPowertrain_B->Product2_m = ExperimentalPowertrain_P.FRtrq_Y0_e;

  /* SystemInitialize for Outport: '<S4>/FR trq inv' */
  ExperimentalPowertrain_B->Gain_h = ExperimentalPowertrain_P.FRtrqinv_Y0_h;

  /* SystemInitialize for Outport: '<S4>/RL trq' */
  ExperimentalPowertrain_B->Product2_n = ExperimentalPowertrain_P.RLtrq_Y0_l;

  /* SystemInitialize for Outport: '<S4>/RL trq inv' */
  ExperimentalPowertrain_B->Gain_p = ExperimentalPowertrain_P.RLtrqinv_Y0_p;

  /* SystemInitialize for Outport: '<S4>/RR trq' */
  ExperimentalPowertrain_B->Product2_j = ExperimentalPowertrain_P.RRtrq_Y0_j;

  /* SystemInitialize for Outport: '<S4>/RR trq inv' */
  ExperimentalPowertrain_B->Gain_f = ExperimentalPowertrain_P.RRtrqinv_Y0_f;

  /* End of SystemInitialize for SubSystem: '<S2>/Traction Control' */
}

/* Model terminate function */
void ExperimentalPowertrain_terminate(RT_MODEL_ExperimentalPowertrain_T
  * ExperimentalPowertrain_M)
{
  /* model code */
  rt_FREE(ExperimentalPowertrain_M->blockIO);
  rt_FREE(ExperimentalPowertrain_M->inputs);
  rt_FREE(ExperimentalPowertrain_M->outputs);
  rt_FREE(ExperimentalPowertrain_M->dwork);
  rt_FREE(ExperimentalPowertrain_M);
}

/* Model data allocation function */
RT_MODEL_ExperimentalPowertrain_T *ExperimentalPowertrain(struct tInfos *inf)
{
  RT_MODEL_ExperimentalPowertrain_T *ExperimentalPowertrain_M;
  ExperimentalPowertrain_M = (RT_MODEL_ExperimentalPowertrain_T *) malloc(sizeof
    (RT_MODEL_ExperimentalPowertrain_T));
  if (ExperimentalPowertrain_M == NULL) {
    return NULL;
  }

  (void) memset((char *)ExperimentalPowertrain_M, 0,
                sizeof(RT_MODEL_ExperimentalPowertrain_T));
  MatSupp_Init();

  /* block I/O */
  {
    B_ExperimentalPowertrain_T *b = (B_ExperimentalPowertrain_T *) malloc(sizeof
      (B_ExperimentalPowertrain_T));
    rt_VALIDATE_MEMORY(ExperimentalPowertrain_M,b);
    ExperimentalPowertrain_M->blockIO = (b);
  }

  /* states (dwork) */
  {
    DW_ExperimentalPowertrain_T *dwork = (DW_ExperimentalPowertrain_T *) malloc
      (sizeof(DW_ExperimentalPowertrain_T));
    rt_VALIDATE_MEMORY(ExperimentalPowertrain_M,dwork);
    ExperimentalPowertrain_M->dwork = (dwork);
  }

  /* external inputs */
  {
    ExtU_ExperimentalPowertrain_T *ExperimentalPowertrain_U =
      (ExtU_ExperimentalPowertrain_T *) malloc(sizeof
      (ExtU_ExperimentalPowertrain_T));
    rt_VALIDATE_MEMORY(ExperimentalPowertrain_M,ExperimentalPowertrain_U);
    ExperimentalPowertrain_M->inputs = (((ExtU_ExperimentalPowertrain_T *)
      ExperimentalPowertrain_U));
  }

  /* external outputs */
  {
    ExtY_ExperimentalPowertrain_T *ExperimentalPowertrain_Y =
      (ExtY_ExperimentalPowertrain_T *) malloc(sizeof
      (ExtY_ExperimentalPowertrain_T));
    rt_VALIDATE_MEMORY(ExperimentalPowertrain_M,ExperimentalPowertrain_Y);
    ExperimentalPowertrain_M->outputs = (ExperimentalPowertrain_Y);
  }

  /* CarMaker parameter tuning */
  {
    ExperimentalPowertrain_SetParams(ExperimentalPowertrain_M, NULL, inf);
  }

  {
    B_ExperimentalPowertrain_T *ExperimentalPowertrain_B =
      ((B_ExperimentalPowertrain_T *) ExperimentalPowertrain_M->blockIO);
    DW_ExperimentalPowertrain_T *ExperimentalPowertrain_DW =
      ((DW_ExperimentalPowertrain_T *) ExperimentalPowertrain_M->dwork);
    ExtU_ExperimentalPowertrain_T *ExperimentalPowertrain_U =
      (ExtU_ExperimentalPowertrain_T *) ExperimentalPowertrain_M->inputs;
    ExtY_ExperimentalPowertrain_T *ExperimentalPowertrain_Y =
      (ExtY_ExperimentalPowertrain_T *) ExperimentalPowertrain_M->outputs;

    /* block I/O */
    (void) memset(((void *) ExperimentalPowertrain_B), 0,
                  sizeof(B_ExperimentalPowertrain_T));

    /* states (dwork) */
    (void) memset((void *)ExperimentalPowertrain_DW, 0,
                  sizeof(DW_ExperimentalPowertrain_T));

    /* external inputs */
    (void)memset(ExperimentalPowertrain_U, 0, sizeof
                 (ExtU_ExperimentalPowertrain_T));

    /* external outputs */
    ExperimentalPowertrain_Y->ToCM =
      ExperimentalPowertrain_rtZcmPowerTrainXWDOut;
  }

  return ExperimentalPowertrain_M;
}

/* CarMaker dictionary definitions. */
extern tQuantEntry *main_DictDefines[];
static tQuantEntry DictDefines[] = {
  { (void*)0x01234567, (void*)0x89ABCDEF, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { (void*)main_DictDefines, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { "Caleb.TorqueTarget", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.FrontTarget", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.RotDiff", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.PerDiff", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { NULL, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 }
};

tQuantEntry *ExperimentalPowertrain_DictDefines = DictDefines;
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

tMdlBdyFrame *ExperimentalPowertrain_BdyFrameDefines = BdyFrameDefines;
tMdlBdyFrame *main_BdyFrameDefines[] = {
  BdyFrameDefines,
  NULL
};

#endif
