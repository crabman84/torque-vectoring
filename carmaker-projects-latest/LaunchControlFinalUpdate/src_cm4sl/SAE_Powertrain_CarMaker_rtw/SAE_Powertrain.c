/*
 * SAE_Powertrain.c
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

#include <infoc.h>
#include <Log.h>
#include <InfoParam.h>
#include <DataDict.h>
#include <MatSupp.h>
#include "SAE_Powertrain.h"
#include "SAE_Powertrain_private.h"
#include "SAE_Powertrain_wrap.h"

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

const cmPowerTrainXWDOut SAE_Powertrain_rtZcmPowerTrainXWDOut = {
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
 *    '<S13>/If Action Subsystem'
 *    '<S14>/If Action Subsystem'
 *    '<S19>/If Action Subsystem'
 *    '<S20>/If Action Subsystem'
 */
void SAE_Powertrain_IfActionSubsystem_Init(B_IfActionSubsystem_SAE_Powertrain_T *
  localB, P_IfActionSubsystem_SAE_Powertrain_T *localP)
{
  /* SystemInitialize for Outport: '<S15>/torqueOut' */
  localB->torqueRequest = localP->torqueOut_Y0;
}

/*
 * Output and update for action system:
 *    '<S13>/If Action Subsystem'
 *    '<S14>/If Action Subsystem'
 *    '<S19>/If Action Subsystem'
 *    '<S20>/If Action Subsystem'
 */
void SAE_Powertrain_IfActionSubsystem(real_T rtu_torqueRequest,
  B_IfActionSubsystem_SAE_Powertrain_T *localB)
{
  /* Inport: '<S15>/torqueRequest' */
  localB->torqueRequest = rtu_torqueRequest;
}

/*
 * Termination for action system:
 *    '<S13>/If Action Subsystem'
 *    '<S14>/If Action Subsystem'
 *    '<S19>/If Action Subsystem'
 *    '<S20>/If Action Subsystem'
 */
void SAE_Powertrain_IfActionSubsystem_Term(void)
{
}

/*
 * System initialize for action system:
 *    '<S14>/If Action Subsystem1'
 *    '<S19>/If Action Subsystem1'
 *    '<S20>/If Action Subsystem1'
 */
void SAE_Powertrain_IfActionSubsystem1_Init
  (B_IfActionSubsystem1_SAE_Powertrain_T *localB,
   P_IfActionSubsystem1_SAE_Powertrain_T *localP)
{
  /* SystemInitialize for Outport: '<S18>/TorqueOut' */
  localB->Mult = localP->TorqueOut_Y0;
}

/*
 * Output and update for action system:
 *    '<S14>/If Action Subsystem1'
 *    '<S19>/If Action Subsystem1'
 *    '<S20>/If Action Subsystem1'
 */
void SAE_Powertrain_IfActionSubsystem1(real_T rtu_torqueRequest, real_T
  rtu_SlipDifference, real_T rtu_WheelSpeed,
  B_IfActionSubsystem1_SAE_Powertrain_T *localB,
  P_IfActionSubsystem1_SAE_Powertrain_T *localP)
{
  /* Product: '<S18>/Mult' incorporates:
   *  Constant: '<S18>/Constant'
   *  Lookup_n-D: '<S18>/2-D Lookup Table'
   *  Product: '<S18>/Divide'
   *  Sum: '<S18>/Minus'
   */
  localB->Mult = (localP->Constant_Value - look2_binlxpw(rtu_SlipDifference,
    rtu_WheelSpeed, localP->uDLookupTable_bp01Data,
    localP->uDLookupTable_bp02Data, localP->uDLookupTable_tableData,
    localP->uDLookupTable_maxIndex, 10U)) / localP->Constant_Value *
    rtu_torqueRequest;
}

/*
 * Termination for action system:
 *    '<S14>/If Action Subsystem1'
 *    '<S19>/If Action Subsystem1'
 *    '<S20>/If Action Subsystem1'
 */
void SAE_Powertrain_IfActionSubsystem1_Term(void)
{
}

/* Model step function */
void SAE_Powertrain_step(RT_MODEL_SAE_Powertrain_T *const SAE_Powertrain_M)
{
  B_SAE_Powertrain_T *SAE_Powertrain_B = ((B_SAE_Powertrain_T *)
    SAE_Powertrain_M->blockIO);
  DW_SAE_Powertrain_T *SAE_Powertrain_DW = ((DW_SAE_Powertrain_T *)
    SAE_Powertrain_M->dwork);
  ExtU_SAE_Powertrain_T *SAE_Powertrain_U = (ExtU_SAE_Powertrain_T *)
    SAE_Powertrain_M->inputs;
  ExtY_SAE_Powertrain_T *SAE_Powertrain_Y = (ExtY_SAE_Powertrain_T *)
    SAE_Powertrain_M->outputs;
  real_T rtb_Trq_Supp2Bdy1_rx;
  real_T rtb_Trq_Supp2Bdy1_ry;
  real_T rtb_Trq_Supp2Bdy1_rz;
  real_T rtb_Trq_Supp2Bdy1B_rx;
  real_T rtb_Trq_Supp2Bdy1B_ry;
  real_T rtb_Trq_Supp2Bdy1B_rz;
  real_T rtb_Minus;
  real_T rtb_uDLookupTable1_ik;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/EngineOut.Engine_on'
   *  Constant: '<S1>/EngineOut.FuelFlow'
   *  Constant: '<S1>/EngineOut.Trq'
   *  Constant: '<S1>/EngineOut.TrqDrag'
   *  Constant: '<S1>/EngineOut.TrqFull'
   *  Constant: '<S1>/EngineOut.TrqOpt'
   *  Constant: '<S1>/EngineOut.rotv'
   */
  SAE_Powertrain_Y->ToCM.EngineOut.Engine_on =
    SAE_Powertrain_P.EngineOutEngine_on_Value;
  SAE_Powertrain_Y->ToCM.EngineOut.rotv = SAE_Powertrain_P.EngineOutrotv_Value;
  SAE_Powertrain_Y->ToCM.EngineOut.Trq = SAE_Powertrain_P.EngineOutTrq_Value;
  SAE_Powertrain_Y->ToCM.EngineOut.TrqDrag =
    SAE_Powertrain_P.EngineOutTrqDrag_Value;
  SAE_Powertrain_Y->ToCM.EngineOut.TrqFull =
    SAE_Powertrain_P.EngineOutTrqFull_Value;
  SAE_Powertrain_Y->ToCM.EngineOut.TrqOpt =
    SAE_Powertrain_P.EngineOutTrqOpt_Value;
  SAE_Powertrain_Y->ToCM.EngineOut.FuelFlow =
    SAE_Powertrain_P.EngineOutFuelFlow_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ISGOut.i_M2W.FL'
   *  Constant: '<S1>/ISGOut.i_M2W.FR'
   *  Constant: '<S1>/ISGOut.i_M2W.RL'
   *  Constant: '<S1>/ISGOut.i_M2W.RR'
   */
  SAE_Powertrain_Y->ToCM.ISGOut.i_M2W.FL = SAE_Powertrain_P.ISGOuti_M2WFL_Value;
  SAE_Powertrain_Y->ToCM.ISGOut.i_M2W.FR = SAE_Powertrain_P.ISGOuti_M2WFR_Value;
  SAE_Powertrain_Y->ToCM.ISGOut.i_M2W.RL = SAE_Powertrain_P.ISGOuti_M2WRL_Value;
  SAE_Powertrain_Y->ToCM.ISGOut.i_M2W.RR = SAE_Powertrain_P.ISGOuti_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ISGOut.PwrElec'
   *  Constant: '<S1>/ISGOut.Trq'
   *  Constant: '<S1>/ISGOut.TrqGen_max'
   *  Constant: '<S1>/ISGOut.TrqMot_max'
   *  Constant: '<S1>/ISGOut.rotv'
   */
  SAE_Powertrain_Y->ToCM.ISGOut.rotv = SAE_Powertrain_P.ISGOutrotv_Value;
  SAE_Powertrain_Y->ToCM.ISGOut.Trq = SAE_Powertrain_P.ISGOutTrq_Value;
  SAE_Powertrain_Y->ToCM.ISGOut.TrqMot_max =
    SAE_Powertrain_P.ISGOutTrqMot_max_Value;
  SAE_Powertrain_Y->ToCM.ISGOut.TrqGen_max =
    SAE_Powertrain_P.ISGOutTrqGen_max_Value;
  SAE_Powertrain_Y->ToCM.ISGOut.PwrElec = SAE_Powertrain_P.ISGOutPwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m0.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.RR'
   */
  SAE_Powertrain_Y->ToCM.MotorOut.m0.i_M2W.FL =
    SAE_Powertrain_P.MotorOutm0i_M2WFL_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m0.i_M2W.FR =
    SAE_Powertrain_P.MotorOutm0i_M2WFR_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m0.i_M2W.RL =
    SAE_Powertrain_P.MotorOutm0i_M2WRL_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m0.i_M2W.RR =
    SAE_Powertrain_P.MotorOutm0i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m0.PwrElec'
   *  Constant: '<S1>/MotorOut.m0.Trq'
   *  Constant: '<S1>/MotorOut.m0.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m0.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m0.rotv'
   */
  SAE_Powertrain_Y->ToCM.MotorOut.m0.rotv =
    SAE_Powertrain_P.MotorOutm0rotv_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m0.Trq = SAE_Powertrain_P.MotorOutm0Trq_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m0.TrqMot_max =
    SAE_Powertrain_P.MotorOutm0TrqMot_max_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m0.TrqGen_max =
    SAE_Powertrain_P.MotorOutm0TrqGen_max_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m0.PwrElec =
    SAE_Powertrain_P.MotorOutm0PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m1.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.RR'
   */
  SAE_Powertrain_Y->ToCM.MotorOut.m1.i_M2W.FL =
    SAE_Powertrain_P.MotorOutm1i_M2WFL_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m1.i_M2W.FR =
    SAE_Powertrain_P.MotorOutm1i_M2WFR_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m1.i_M2W.RL =
    SAE_Powertrain_P.MotorOutm1i_M2WRL_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m1.i_M2W.RR =
    SAE_Powertrain_P.MotorOutm1i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m1.PwrElec'
   *  Constant: '<S1>/MotorOut.m1.Trq'
   *  Constant: '<S1>/MotorOut.m1.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m1.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m1.rotv'
   */
  SAE_Powertrain_Y->ToCM.MotorOut.m1.rotv =
    SAE_Powertrain_P.MotorOutm1rotv_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m1.Trq = SAE_Powertrain_P.MotorOutm1Trq_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m1.TrqMot_max =
    SAE_Powertrain_P.MotorOutm1TrqMot_max_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m1.TrqGen_max =
    SAE_Powertrain_P.MotorOutm1TrqGen_max_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m1.PwrElec =
    SAE_Powertrain_P.MotorOutm1PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m2.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.RR'
   */
  SAE_Powertrain_Y->ToCM.MotorOut.m2.i_M2W.FL =
    SAE_Powertrain_P.MotorOutm2i_M2WFL_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m2.i_M2W.FR =
    SAE_Powertrain_P.MotorOutm2i_M2WFR_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m2.i_M2W.RL =
    SAE_Powertrain_P.MotorOutm2i_M2WRL_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m2.i_M2W.RR =
    SAE_Powertrain_P.MotorOutm2i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m2.PwrElec'
   *  Constant: '<S1>/MotorOut.m2.Trq'
   *  Constant: '<S1>/MotorOut.m2.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m2.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m2.rotv'
   */
  SAE_Powertrain_Y->ToCM.MotorOut.m2.rotv =
    SAE_Powertrain_P.MotorOutm2rotv_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m2.Trq = SAE_Powertrain_P.MotorOutm2Trq_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m2.TrqMot_max =
    SAE_Powertrain_P.MotorOutm2TrqMot_max_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m2.TrqGen_max =
    SAE_Powertrain_P.MotorOutm2TrqGen_max_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m2.PwrElec =
    SAE_Powertrain_P.MotorOutm2PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m3.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.RR'
   */
  SAE_Powertrain_Y->ToCM.MotorOut.m3.i_M2W.FL =
    SAE_Powertrain_P.MotorOutm3i_M2WFL_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m3.i_M2W.FR =
    SAE_Powertrain_P.MotorOutm3i_M2WFR_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m3.i_M2W.RL =
    SAE_Powertrain_P.MotorOutm3i_M2WRL_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m3.i_M2W.RR =
    SAE_Powertrain_P.MotorOutm3i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m3.PwrElec'
   *  Constant: '<S1>/MotorOut.m3.Trq'
   *  Constant: '<S1>/MotorOut.m3.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m3.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m3.rotv'
   */
  SAE_Powertrain_Y->ToCM.MotorOut.m3.rotv =
    SAE_Powertrain_P.MotorOutm3rotv_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m3.Trq = SAE_Powertrain_P.MotorOutm3Trq_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m3.TrqMot_max =
    SAE_Powertrain_P.MotorOutm3TrqMot_max_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m3.TrqGen_max =
    SAE_Powertrain_P.MotorOutm3TrqGen_max_Value;
  SAE_Powertrain_Y->ToCM.MotorOut.m3.PwrElec =
    SAE_Powertrain_P.MotorOutm3PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ClutchOut.Pos'
   *  Constant: '<S1>/ClutchOut.Trq_in'
   *  Constant: '<S1>/ClutchOut.Trq_out'
   *  Constant: '<S1>/ClutchOut.i_TrqIn2Out'
   *  Constant: '<S1>/ClutchOut.rotv_in'
   *  Constant: '<S1>/ClutchOut.rotv_out'
   */
  SAE_Powertrain_Y->ToCM.ClutchOut.Pos = SAE_Powertrain_P.ClutchOutPos_Value;
  SAE_Powertrain_Y->ToCM.ClutchOut.rotv_in =
    SAE_Powertrain_P.ClutchOutrotv_in_Value;
  SAE_Powertrain_Y->ToCM.ClutchOut.rotv_out =
    SAE_Powertrain_P.ClutchOutrotv_out_Value;
  SAE_Powertrain_Y->ToCM.ClutchOut.Trq_in =
    SAE_Powertrain_P.ClutchOutTrq_in_Value;
  SAE_Powertrain_Y->ToCM.ClutchOut.Trq_out =
    SAE_Powertrain_P.ClutchOutTrq_out_Value;
  SAE_Powertrain_Y->ToCM.ClutchOut.i_TrqIn2Out =
    SAE_Powertrain_P.ClutchOuti_TrqIn2Out_Value;

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
  SAE_Powertrain_Y->ToCM.GearBoxOut.GearNo =
    SAE_Powertrain_P.GearBoxOutGearNo_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.GearNo_dis =
    SAE_Powertrain_P.GearBoxOutGearNo_dis_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.Trq_DriveSrc_trg =
    SAE_Powertrain_P.GearBoxOutTrq_DriveSrc_trg_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.i = SAE_Powertrain_P.GearBoxOuti_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.rotv_in =
    SAE_Powertrain_P.GearBoxOutrotv_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.rotv_out =
    SAE_Powertrain_P.GearBoxOutrotv_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.Trq_in =
    SAE_Powertrain_P.GearBoxOutTrq_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.Trq_out =
    SAE_Powertrain_P.GearBoxOutTrq_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.Clutch.Pos =
    SAE_Powertrain_P.GearBoxOutClutchPos_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.Clutch.rotv_in =
    SAE_Powertrain_P.GearBoxOutClutchrotv_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.Clutch.rotv_out =
    SAE_Powertrain_P.GearBoxOutClutchrotv_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.Clutch.Trq_in =
    SAE_Powertrain_P.GearBoxOutClutchTrq_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.Clutch.Trq_out =
    SAE_Powertrain_P.GearBoxOutClutchTrq_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.Clutch.i_TrqIn2Out =
    SAE_Powertrain_P.GearBoxOutClutchi_TrqIn2Out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.Clutch_dis.Pos =
    SAE_Powertrain_P.GearBoxOutClutch_disPos_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.Clutch_dis.rotv_in =
    SAE_Powertrain_P.GearBoxOutClutch_disrotv_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.Clutch_dis.rotv_out =
    SAE_Powertrain_P.GearBoxOutClutch_disrotv_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.Clutch_dis.Trq_in =
    SAE_Powertrain_P.GearBoxOutClutch_disTrq_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.Clutch_dis.Trq_out =
    SAE_Powertrain_P.GearBoxOutClutch_disTrq_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxOut.Clutch_dis.i_TrqIn2Out =
    SAE_Powertrain_P.GearBoxOutClutch_disi_TrqIn2Out_Value;

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
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.GearNo =
    SAE_Powertrain_P.GearBoxM_OutGB_m0GearNo_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.GearNo_dis =
    SAE_Powertrain_P.GearBoxM_OutGB_m0GearNo_dis_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.Trq_DriveSrc_trg =
    SAE_Powertrain_P.GearBoxM_OutGB_m0Trq_DriveSrc_trg_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.i =
    SAE_Powertrain_P.GearBoxM_OutGB_m0i_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.rotv_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m0rotv_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.rotv_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m0rotv_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.Trq_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m0Trq_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.Trq_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m0Trq_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Pos =
    SAE_Powertrain_P.GearBoxM_OutGB_m0ClutchPos_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.rotv_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m0Clutchrotv_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.rotv_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m0Clutchrotv_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Trq_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m0ClutchTrq_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Trq_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m0ClutchTrq_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.i_TrqIn2Out =
    SAE_Powertrain_P.GearBoxM_OutGB_m0Clutchi_TrqIn2Out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Pos =
    SAE_Powertrain_P.GearBoxM_OutGB_m0Clutch_disPos_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.rotv_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m0Clutch_disrotv_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.rotv_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m0Clutch_disrotv_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Trq_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m0Clutch_disTrq_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Trq_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m0Clutch_disTrq_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.i_TrqIn2Out =
    SAE_Powertrain_P.GearBoxM_OutGB_m0Clutch_disi_TrqIn2Out_Value;

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
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.GearNo =
    SAE_Powertrain_P.GearBoxM_OutGB_m1GearNo_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.GearNo_dis =
    SAE_Powertrain_P.GearBoxM_OutGB_m1GearNo_dis_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.Trq_DriveSrc_trg =
    SAE_Powertrain_P.GearBoxM_OutGB_m1Trq_DriveSrc_trg_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.i =
    SAE_Powertrain_P.GearBoxM_OutGB_m1i_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.rotv_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m1rotv_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.rotv_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m1rotv_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.Trq_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m1Trq_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.Trq_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m1Trq_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Pos =
    SAE_Powertrain_P.GearBoxM_OutGB_m1ClutchPos_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.rotv_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m1Clutchrotv_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.rotv_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m1Clutchrotv_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Trq_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m1ClutchTrq_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Trq_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m1ClutchTrq_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.i_TrqIn2Out =
    SAE_Powertrain_P.GearBoxM_OutGB_m1Clutchi_TrqIn2Out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Pos =
    SAE_Powertrain_P.GearBoxM_OutGB_m1Clutch_disPos_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.rotv_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m1Clutch_disrotv_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.rotv_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m1Clutch_disrotv_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Trq_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m1Clutch_disTrq_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Trq_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m1Clutch_disTrq_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.i_TrqIn2Out =
    SAE_Powertrain_P.GearBoxM_OutGB_m1Clutch_disi_TrqIn2Out_Value;

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
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.GearNo =
    SAE_Powertrain_P.GearBoxM_OutGB_m2GearNo_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.GearNo_dis =
    SAE_Powertrain_P.GearBoxM_OutGB_m2GearNo_dis_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.Trq_DriveSrc_trg =
    SAE_Powertrain_P.GearBoxM_OutGB_m2Trq_DriveSrc_trg_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.i =
    SAE_Powertrain_P.GearBoxM_OutGB_m2i_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.rotv_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m2rotv_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.rotv_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m2rotv_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.Trq_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m2Trq_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.Trq_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m2Trq_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Pos =
    SAE_Powertrain_P.GearBoxM_OutGB_m2ClutchPos_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.rotv_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m2Clutchrotv_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.rotv_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m2Clutchrotv_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Trq_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m2ClutchTrq_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Trq_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m2ClutchTrq_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.i_TrqIn2Out =
    SAE_Powertrain_P.GearBoxM_OutGB_m2Clutchi_TrqIn2Out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Pos =
    SAE_Powertrain_P.GearBoxM_OutGB_m2Clutch_disPos_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.rotv_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m2Clutch_disrotv_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.rotv_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m2Clutch_disrotv_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Trq_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m2Clutch_disTrq_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Trq_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m2Clutch_disTrq_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.i_TrqIn2Out =
    SAE_Powertrain_P.GearBoxM_OutGB_m2Clutch_disi_TrqIn2Out_Value;

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
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.GearNo =
    SAE_Powertrain_P.GearBoxM_OutGB_m3GearNo_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.GearNo_dis =
    SAE_Powertrain_P.GearBoxM_OutGB_m3GearNo_dis_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.Trq_DriveSrc_trg =
    SAE_Powertrain_P.GearBoxM_OutGB_m3Trq_DriveSrc_trg_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.i =
    SAE_Powertrain_P.GearBoxM_OutGB_m3i_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.rotv_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m3rotv_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.rotv_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m3rotv_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.Trq_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m3Trq_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.Trq_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m3Trq_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Pos =
    SAE_Powertrain_P.GearBoxM_OutGB_m3ClutchPos_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.rotv_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m3Clutchrotv_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.rotv_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m3Clutchrotv_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Trq_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m3ClutchTrq_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Trq_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m3ClutchTrq_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.i_TrqIn2Out =
    SAE_Powertrain_P.GearBoxM_OutGB_m3Clutchi_TrqIn2Out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Pos =
    SAE_Powertrain_P.GearBoxM_OutGB_m3Clutch_disPos_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.rotv_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m3Clutch_disrotv_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.rotv_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m3Clutch_disrotv_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Trq_in =
    SAE_Powertrain_P.GearBoxM_OutGB_m3Clutch_disTrq_in_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Trq_out =
    SAE_Powertrain_P.GearBoxM_OutGB_m3Clutch_disTrq_out_Value;
  SAE_Powertrain_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.i_TrqIn2Out =
    SAE_Powertrain_P.GearBoxM_OutGB_m3Clutch_disi_TrqIn2Out_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BattLVOut.AOC'
   *  Constant: '<S1>/BattLVOut.Current'
   *  Constant: '<S1>/BattLVOut.Energy'
   *  Constant: '<S1>/BattLVOut.Pwr_max'
   *  Constant: '<S1>/BattLVOut.SOC'
   *  Constant: '<S1>/BattLVOut.SOH'
   *  Constant: '<S1>/BattLVOut.Temp'
   */
  SAE_Powertrain_Y->ToCM.BattLVOut.SOC = SAE_Powertrain_P.BattLVOutSOC_Value;
  SAE_Powertrain_Y->ToCM.BattLVOut.SOH = SAE_Powertrain_P.BattLVOutSOH_Value;
  SAE_Powertrain_Y->ToCM.BattLVOut.Current =
    SAE_Powertrain_P.BattLVOutCurrent_Value;
  SAE_Powertrain_Y->ToCM.BattLVOut.AOC = SAE_Powertrain_P.BattLVOutAOC_Value;
  SAE_Powertrain_Y->ToCM.BattLVOut.Temp = SAE_Powertrain_P.BattLVOutTemp_Value;
  SAE_Powertrain_Y->ToCM.BattLVOut.Energy =
    SAE_Powertrain_P.BattLVOutEnergy_Value;
  SAE_Powertrain_Y->ToCM.BattLVOut.Pwr_max =
    SAE_Powertrain_P.BattLVOutPwr_max_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BattHVOut.AOC'
   *  Constant: '<S1>/BattHVOut.Current'
   *  Constant: '<S1>/BattHVOut.Energy'
   *  Constant: '<S1>/BattHVOut.Pwr_max'
   *  Constant: '<S1>/BattHVOut.SOC'
   *  Constant: '<S1>/BattHVOut.SOH'
   *  Constant: '<S1>/BattHVOut.Temp'
   */
  SAE_Powertrain_Y->ToCM.BattHVOut.SOC = SAE_Powertrain_P.BattHVOutSOC_Value;
  SAE_Powertrain_Y->ToCM.BattHVOut.SOH = SAE_Powertrain_P.BattHVOutSOH_Value;
  SAE_Powertrain_Y->ToCM.BattHVOut.Current =
    SAE_Powertrain_P.BattHVOutCurrent_Value;
  SAE_Powertrain_Y->ToCM.BattHVOut.AOC = SAE_Powertrain_P.BattHVOutAOC_Value;
  SAE_Powertrain_Y->ToCM.BattHVOut.Temp = SAE_Powertrain_P.BattHVOutTemp_Value;
  SAE_Powertrain_Y->ToCM.BattHVOut.Energy =
    SAE_Powertrain_P.BattHVOutEnergy_Value;
  SAE_Powertrain_Y->ToCM.BattHVOut.Pwr_max =
    SAE_Powertrain_P.BattHVOutPwr_max_Value;

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
  SAE_Powertrain_Y->ToCM.PwrSupplyOut.Pwr_LV =
    SAE_Powertrain_P.PwrSupplyOutPwr_LV_Value;
  SAE_Powertrain_Y->ToCM.PwrSupplyOut.Pwr_HV1 =
    SAE_Powertrain_P.PwrSupplyOutPwr_HV1_Value;
  SAE_Powertrain_Y->ToCM.PwrSupplyOut.Pwr_HV2 =
    SAE_Powertrain_P.PwrSupplyOutPwr_HV2_Value;
  SAE_Powertrain_Y->ToCM.PwrSupplyOut.Voltage_LV =
    SAE_Powertrain_P.PwrSupplyOutVoltage_LV_Value;
  SAE_Powertrain_Y->ToCM.PwrSupplyOut.Voltage_HV1 =
    SAE_Powertrain_P.PwrSupplyOutVoltage_HV1_Value;
  SAE_Powertrain_Y->ToCM.PwrSupplyOut.Voltage_HV2 =
    SAE_Powertrain_P.PwrSupplyOutVoltage_HV2_Value;
  SAE_Powertrain_Y->ToCM.PwrSupplyOut.Pwr_HV1toLV =
    SAE_Powertrain_P.PwrSupplyOutPwr_HV1toLV_Value;
  SAE_Powertrain_Y->ToCM.PwrSupplyOut.Pwr_HV1toHV2 =
    SAE_Powertrain_P.PwrSupplyOutPwr_HV1toHV2_Value;
  SAE_Powertrain_Y->ToCM.PwrSupplyOut.Pwr_HV1toLV_max =
    SAE_Powertrain_P.PwrSupplyOutPwr_HV1toLV_max_Value;
  SAE_Powertrain_Y->ToCM.PwrSupplyOut.Pwr_HV1toHV2_max =
    SAE_Powertrain_P.PwrSupplyOutPwr_HV1toHV2_max_Value;
  SAE_Powertrain_Y->ToCM.PwrSupplyOut.Eta_HV1toLV =
    SAE_Powertrain_P.PwrSupplyOutEta_HV1toLV_Value;
  SAE_Powertrain_Y->ToCM.PwrSupplyOut.Eta_HV1toHV2 =
    SAE_Powertrain_P.PwrSupplyOutEta_HV1toHV2_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Trq_Supp2Bdy1.rx'
   *  Constant: '<S1>/Trq_Supp2Bdy1.ry'
   *  Constant: '<S1>/Trq_Supp2Bdy1.rz'
   */
  rtb_Trq_Supp2Bdy1_rx = SAE_Powertrain_P.Trq_Supp2Bdy1rx_Value;
  rtb_Trq_Supp2Bdy1_ry = SAE_Powertrain_P.Trq_Supp2Bdy1ry_Value;
  rtb_Trq_Supp2Bdy1_rz = SAE_Powertrain_P.Trq_Supp2Bdy1rz_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Trq_Supp2Bdy1B.rx'
   *  Constant: '<S1>/Trq_Supp2Bdy1B.ry'
   *  Constant: '<S1>/Trq_Supp2Bdy1B.rz'
   */
  rtb_Trq_Supp2Bdy1B_rx = SAE_Powertrain_P.Trq_Supp2Bdy1Brx_Value;
  rtb_Trq_Supp2Bdy1B_ry = SAE_Powertrain_P.Trq_Supp2Bdy1Bry_Value;
  rtb_Trq_Supp2Bdy1B_rz = SAE_Powertrain_P.Trq_Supp2Bdy1Brz_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Trq_Supp2BdyEng.rx'
   *  Constant: '<S1>/Trq_Supp2BdyEng.ry'
   */
  SAE_Powertrain_Y->ToCM.Trq_Supp2BdyEng.rx =
    SAE_Powertrain_P.Trq_Supp2BdyEngrx_Value;
  SAE_Powertrain_Y->ToCM.Trq_Supp2BdyEng.ry =
    SAE_Powertrain_P.Trq_Supp2BdyEngry_Value;

  /* If: '<S2>/If' incorporates:
   *  Constant: '<Root>/Launch Mode'
   *  Constant: '<S2>/Launch Control spd limit'
   *  Inport: '<Root>/FromCM'
   */
  if ((SAE_Powertrain_P.LaunchMode_Value > 0.0) &&
      (SAE_Powertrain_U->FromCM.Velocity <
       SAE_Powertrain_P.LaunchControlspdlimit_Value)) {
    /* Outputs for IfAction SubSystem: '<S2>/Launch Control' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Gain: '<S7>/Gain3' incorporates:
     *  Abs: '<S7>/Abs'
     *  Constant: '<S7>/GearRatio2'
     *  Product: '<S7>/Product'
     */
    SAE_Powertrain_B->Gain3 = fabs(SAE_Powertrain_U->FromCM.WheelIn.RL.rotv *
      SAE_Powertrain_P.GearRatio2_Value) * SAE_Powertrain_P.Gain3_Gain;

    /* S-Function (write_dict): '<S7>/Write CM Dict' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict_PWORK_p.Entry;
      if (!SAE_Powertrain_DW->WriteCMDict_IWORK_c.Checked) {
        SAE_Powertrain_DW->WriteCMDict_IWORK_c.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      value = SAE_Powertrain_B->Gain3;
      DVA_PokeSL(e, value);
    }

    /* Product: '<S7>/Product1' incorporates:
     *  Constant: '<S7>/GearRatio2'
     *  Lookup_n-D: '<S7>/1-D Lookup Table1'
     *  Lookup_n-D: '<S7>/2-D Lookup Table1'
     *  MinMax: '<S7>/MinMax'
     */
    SAE_Powertrain_B->Product1 = fmin(look1_binlxpw(SAE_Powertrain_B->Gain3,
      SAE_Powertrain_P.uDLookupTable1_bp01Data, SAE_Powertrain_P.REAR, 9U),
      look2_binlxpw(SAE_Powertrain_U->FromCM.Gas, SAE_Powertrain_B->Gain3,
                    SAE_Powertrain_P.uDLookupTable1_bp01Data_a,
                    SAE_Powertrain_P.uDLookupTable1_bp02Data,
                    SAE_Powertrain_P.uDLookupTable1_tableData,
                    SAE_Powertrain_P.uDLookupTable1_maxIndex, 6U)) *
      SAE_Powertrain_P.GearRatio2_Value;

    /* Gain: '<S7>/Gain' */
    SAE_Powertrain_B->Gain_h = SAE_Powertrain_P.Gain_Gain *
      SAE_Powertrain_B->Product1;

    /* Gain: '<S9>/Gain3' incorporates:
     *  Abs: '<S9>/Abs'
     *  Constant: '<S9>/GearRatio2'
     *  Product: '<S9>/Product'
     */
    SAE_Powertrain_B->Gain3_p = fabs(SAE_Powertrain_U->FromCM.WheelIn.FL.rotv *
      SAE_Powertrain_P.GearRatio2_Value_a) * SAE_Powertrain_P.Gain3_Gain_g;

    /* S-Function (write_dict): '<S9>/Write CM Dict' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict_PWORK_b.Entry;
      if (!SAE_Powertrain_DW->WriteCMDict_IWORK_l.Checked) {
        SAE_Powertrain_DW->WriteCMDict_IWORK_l.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      value = SAE_Powertrain_B->Gain3_p;
      DVA_PokeSL(e, value);
    }

    /* Lookup_n-D: '<S9>/1-D Lookup Table1' */
    SAE_Powertrain_B->uDLookupTable1 = look1_binlxpw(SAE_Powertrain_B->Gain3_p,
      SAE_Powertrain_P.uDLookupTable1_bp01Data_g, SAE_Powertrain_P.FRONT, 13U);

    /* S-Function (write_dict): '<S9>/Write CM Dict1' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict1_PWORK_d.Entry;
      if (!SAE_Powertrain_DW->WriteCMDict1_IWORK_i.Checked) {
        SAE_Powertrain_DW->WriteCMDict1_IWORK_i.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      value = SAE_Powertrain_B->uDLookupTable1;
      DVA_PokeSL(e, value);
    }

    /* Lookup_n-D: '<S9>/2-D Lookup Table1' */
    SAE_Powertrain_B->uDLookupTable1_g = look2_binlxpw
      (SAE_Powertrain_U->FromCM.Gas, SAE_Powertrain_B->Gain3_p,
       SAE_Powertrain_P.uDLookupTable1_bp01Data_f,
       SAE_Powertrain_P.uDLookupTable1_bp02Data_i,
       SAE_Powertrain_P.uDLookupTable1_tableData_o,
       SAE_Powertrain_P.uDLookupTable1_maxIndex_g, 6U);

    /* S-Function (write_dict): '<S9>/Write CM Dict2' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict2_PWORK_p.Entry;
      if (!SAE_Powertrain_DW->WriteCMDict2_IWORK_a.Checked) {
        SAE_Powertrain_DW->WriteCMDict2_IWORK_a.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      value = SAE_Powertrain_B->uDLookupTable1_g;
      DVA_PokeSL(e, value);
    }

    /* MinMax: '<S9>/MinMax' */
    SAE_Powertrain_B->MinMax = fmin(SAE_Powertrain_B->uDLookupTable1,
      SAE_Powertrain_B->uDLookupTable1_g);

    /* S-Function (write_dict): '<S9>/Write CM Dict3' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict3_PWORK_f.Entry;
      if (!SAE_Powertrain_DW->WriteCMDict3_IWORK_c.Checked) {
        SAE_Powertrain_DW->WriteCMDict3_IWORK_c.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      value = SAE_Powertrain_B->MinMax;
      DVA_PokeSL(e, value);
    }

    /* Product: '<S9>/Product1' incorporates:
     *  Constant: '<S9>/GearRatio2'
     */
    SAE_Powertrain_B->Product1_f = SAE_Powertrain_B->MinMax *
      SAE_Powertrain_P.GearRatio2_Value_a;

    /* Gain: '<S9>/Gain' */
    SAE_Powertrain_B->Gain_b = SAE_Powertrain_P.Gain_Gain_g *
      SAE_Powertrain_B->Product1_f;

    /* Gain: '<S6>/Gain3' incorporates:
     *  Abs: '<S6>/Abs'
     *  Constant: '<S6>/GearRatio2'
     *  Product: '<S6>/Product'
     */
    rtb_Minus = fabs(SAE_Powertrain_U->FromCM.WheelIn.FR.rotv *
                     SAE_Powertrain_P.GearRatio2_Value_b) *
      SAE_Powertrain_P.Gain3_Gain_f;

    /* Lookup_n-D: '<S6>/1-D Lookup Table1' */
    rtb_uDLookupTable1_ik = look1_binlxpw(rtb_Minus,
      SAE_Powertrain_P.uDLookupTable1_bp01Data_k, SAE_Powertrain_P.FRONT, 13U);

    /* Lookup_n-D: '<S6>/2-D Lookup Table1' */
    rtb_Minus = look2_binlxpw(SAE_Powertrain_U->FromCM.Gas, rtb_Minus,
      SAE_Powertrain_P.uDLookupTable1_bp01Data_o,
      SAE_Powertrain_P.uDLookupTable1_bp02Data_l,
      SAE_Powertrain_P.uDLookupTable1_tableData_h,
      SAE_Powertrain_P.uDLookupTable1_maxIndex_p, 6U);

    /* Product: '<S6>/Product1' incorporates:
     *  Constant: '<S6>/GearRatio2'
     *  MinMax: '<S6>/MinMax'
     */
    SAE_Powertrain_B->Product1_o = fmin(rtb_uDLookupTable1_ik, rtb_Minus) *
      SAE_Powertrain_P.GearRatio2_Value_b;

    /* Gain: '<S6>/Gain' */
    SAE_Powertrain_B->Gain_n = SAE_Powertrain_P.Gain_Gain_d *
      SAE_Powertrain_B->Product1_o;

    /* Gain: '<S8>/Gain3' incorporates:
     *  Abs: '<S8>/Abs'
     *  Constant: '<S8>/GearRatio2'
     *  Product: '<S8>/Product'
     */
    rtb_Minus = fabs(SAE_Powertrain_U->FromCM.WheelIn.RR.rotv *
                     SAE_Powertrain_P.GearRatio2_Value_aq) *
      SAE_Powertrain_P.Gain3_Gain_h;

    /* Lookup_n-D: '<S8>/1-D Lookup Table1' */
    rtb_uDLookupTable1_ik = look1_binlxpw(rtb_Minus,
      SAE_Powertrain_P.uDLookupTable1_bp01Data_h, SAE_Powertrain_P.REAR, 9U);

    /* Lookup_n-D: '<S8>/2-D Lookup Table1' */
    rtb_Minus = look2_binlxpw(SAE_Powertrain_U->FromCM.Gas, rtb_Minus,
      SAE_Powertrain_P.uDLookupTable1_bp01Data_i,
      SAE_Powertrain_P.uDLookupTable1_bp02Data_p,
      SAE_Powertrain_P.uDLookupTable1_tableData_g,
      SAE_Powertrain_P.uDLookupTable1_maxIndex_a, 6U);

    /* Product: '<S8>/Product1' incorporates:
     *  Constant: '<S8>/GearRatio2'
     *  MinMax: '<S8>/MinMax'
     */
    SAE_Powertrain_B->Product1_m = fmin(rtb_uDLookupTable1_ik, rtb_Minus) *
      SAE_Powertrain_P.GearRatio2_Value_aq;

    /* Gain: '<S8>/Gain' */
    SAE_Powertrain_B->Gain_hq = SAE_Powertrain_P.Gain_Gain_l *
      SAE_Powertrain_B->Product1_m;

    /* End of Outputs for SubSystem: '<S2>/Launch Control' */
  } else {
    /* Outputs for IfAction SubSystem: '<S2>/Traction Control' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Lookup_n-D: '<S11>/2-D Lookup Table' incorporates:
     *  Abs: '<S11>/Abs'
     *  Constant: '<S11>/GearRatio'
     *  Gain: '<S11>/Gain1'
     *  Product: '<S11>/Product'
     */
    SAE_Powertrain_B->uDLookupTable = look2_binlxpw(SAE_Powertrain_U->FromCM.Gas,
      fabs(SAE_Powertrain_U->FromCM.WheelIn.FL.rotv *
           SAE_Powertrain_P.GearRatio_Value) * SAE_Powertrain_P.Gain1_Gain,
      SAE_Powertrain_P.uDLookupTable_bp01Data_l,
      SAE_Powertrain_P.uDLookupTable_bp02Data_j,
      SAE_Powertrain_P.uDLookupTable_tableData_b,
      SAE_Powertrain_P.uDLookupTable_maxIndex_k, 6U);

    /* S-Function (write_dict): '<S13>/Write CM Dict' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict_PWORK.Entry;
      if (!SAE_Powertrain_DW->WriteCMDict_IWORK.Checked) {
        SAE_Powertrain_DW->WriteCMDict_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      value = SAE_Powertrain_B->uDLookupTable;
      DVA_PokeSL(e, value);
    }

    /* S-Function (write_dict): '<S13>/Write CM Dict1' incorporates:
     *  Constant: '<S11>/TargetSlip'
     */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict1_PWORK.Entry;
      if (!SAE_Powertrain_DW->WriteCMDict1_IWORK.Checked) {
        SAE_Powertrain_DW->WriteCMDict1_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      value = SAE_Powertrain_P.TargetSlip_Value;
      DVA_PokeSL(e, value);
    }

    /* S-Function (read_dict): '<S11>/Read CM Dict' */
    {
      tDDictEntry *e;
      e = (tDDictEntry *)SAE_Powertrain_DW->ReadCMDict_PWORK.Entry;
      if (!SAE_Powertrain_DW->ReadCMDict_IWORK.Checked) {
        SAE_Powertrain_DW->ReadCMDict_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      SAE_Powertrain_B->ReadCMDict = e->GetFunc(e->Var);
    }

    /* Sum: '<S13>/Minus' incorporates:
     *  Constant: '<S11>/TargetSlip'
     */
    SAE_Powertrain_B->Minus = SAE_Powertrain_B->ReadCMDict -
      SAE_Powertrain_P.TargetSlip_Value;

    /* If: '<S13>/If' incorporates:
     *  Constant: '<Root>/Traction Mode'
     */
    if ((SAE_Powertrain_B->Minus <= 0.0) || (SAE_Powertrain_P.TractionMode_Value
         == 0.0)) {
      /* Outputs for IfAction SubSystem: '<S13>/If Action Subsystem' incorporates:
       *  ActionPort: '<S15>/Action Port'
       */
      SAE_Powertrain_IfActionSubsystem(SAE_Powertrain_B->uDLookupTable,
        &SAE_Powertrain_B->IfActionSubsystem);

      /* End of Outputs for SubSystem: '<S13>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S13>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S16>/Action Port'
       */
      /* S-Function (write_dict): '<S16>/Write CM Dict' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict_PWORK_o.Entry;
        if (!SAE_Powertrain_DW->WriteCMDict_IWORK_n.Checked) {
          SAE_Powertrain_DW->WriteCMDict_IWORK_n.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
        }

        value = SAE_Powertrain_B->uDLookupTable;
        DVA_PokeSL(e, value);
      }

      /* Lookup_n-D: '<S16>/2-D Lookup Table' */
      SAE_Powertrain_B->uDLookupTable_e = look2_binlxpw(SAE_Powertrain_B->Minus,
        SAE_Powertrain_U->FromCM.WheelIn.FL.rotv,
        SAE_Powertrain_P.uDLookupTable_bp01Data,
        SAE_Powertrain_P.uDLookupTable_bp02Data,
        SAE_Powertrain_P.uDLookupTable_tableData,
        SAE_Powertrain_P.uDLookupTable_maxIndex, 10U);

      /* Sum: '<S16>/Minus' incorporates:
       *  Constant: '<S16>/Constant'
       */
      SAE_Powertrain_B->Minus_h = SAE_Powertrain_P.Constant_Value -
        SAE_Powertrain_B->uDLookupTable_e;

      /* Product: '<S16>/Divide' incorporates:
       *  Constant: '<S16>/Constant'
       */
      SAE_Powertrain_B->Divide = SAE_Powertrain_B->Minus_h /
        SAE_Powertrain_P.Constant_Value;

      /* Product: '<S16>/Mult' */
      SAE_Powertrain_B->Mult = SAE_Powertrain_B->uDLookupTable *
        SAE_Powertrain_B->Divide;

      /* S-Function (write_dict): '<S16>/Write CM Dict1' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict1_PWORK_i.Entry;
        if (!SAE_Powertrain_DW->WriteCMDict1_IWORK_k.Checked) {
          SAE_Powertrain_DW->WriteCMDict1_IWORK_k.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
        }

        value = SAE_Powertrain_B->Mult;
        DVA_PokeSL(e, value);
      }

      /* S-Function (write_dict): '<S16>/Write CM Dict2' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict2_PWORK_m.Entry;
        if (!SAE_Powertrain_DW->WriteCMDict2_IWORK_e.Checked) {
          SAE_Powertrain_DW->WriteCMDict2_IWORK_e.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
        }

        value = SAE_Powertrain_B->Divide;
        DVA_PokeSL(e, value);
      }

      /* S-Function (write_dict): '<S16>/Write CM Dict3' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict3_PWORK_e.Entry;
        if (!SAE_Powertrain_DW->WriteCMDict3_IWORK_m.Checked) {
          SAE_Powertrain_DW->WriteCMDict3_IWORK_m.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
        }

        value = SAE_Powertrain_B->Minus;
        DVA_PokeSL(e, value);
      }

      /* S-Function (write_dict): '<S16>/Write CM Dict4' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict4_PWORK_b.Entry;
        if (!SAE_Powertrain_DW->WriteCMDict4_IWORK_n.Checked) {
          SAE_Powertrain_DW->WriteCMDict4_IWORK_n.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
        }

        value = SAE_Powertrain_U->FromCM.WheelIn.FL.rotv;
        DVA_PokeSL(e, value);
      }

      /* S-Function (write_dict): '<S16>/Write CM Dict5' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict5_PWORK.Entry;
        if (!SAE_Powertrain_DW->WriteCMDict5_IWORK.Checked) {
          SAE_Powertrain_DW->WriteCMDict5_IWORK.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
        }

        value = SAE_Powertrain_B->Minus_h;
        DVA_PokeSL(e, value);
      }

      /* S-Function (write_dict): '<S16>/Write CM Dict6' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict6_PWORK_j.Entry;
        if (!SAE_Powertrain_DW->WriteCMDict6_IWORK_g.Checked) {
          SAE_Powertrain_DW->WriteCMDict6_IWORK_g.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
        }

        value = SAE_Powertrain_B->uDLookupTable_e;
        DVA_PokeSL(e, value);
      }
    }

    /* End of If: '<S13>/If' */

    /* S-Function (write_dict): '<S13>/Write CM Dict2' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict2_PWORK.Entry;
      if (!SAE_Powertrain_DW->WriteCMDict2_IWORK.Checked) {
        SAE_Powertrain_DW->WriteCMDict2_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      value = SAE_Powertrain_B->Mult;
      DVA_PokeSL(e, value);
    }

    /* S-Function (write_dict): '<S13>/Write CM Dict4' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict4_PWORK.Entry;
      if (!SAE_Powertrain_DW->WriteCMDict4_IWORK.Checked) {
        SAE_Powertrain_DW->WriteCMDict4_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      value = SAE_Powertrain_B->IfActionSubsystem.torqueRequest;
      DVA_PokeSL(e, value);
    }

    /* S-Function (write_dict): '<S13>/Write CM Dict6' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict6_PWORK.Entry;
      if (!SAE_Powertrain_DW->WriteCMDict6_IWORK.Checked) {
        SAE_Powertrain_DW->WriteCMDict6_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      value = SAE_Powertrain_B->Minus;
      DVA_PokeSL(e, value);
    }

    /* Sum: '<S13>/Sum' */
    SAE_Powertrain_B->Sum = SAE_Powertrain_B->IfActionSubsystem.torqueRequest +
      SAE_Powertrain_B->Mult;

    /* S-Function (write_dict): '<S13>/Write CM Dict7' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict7_PWORK.Entry;
      if (!SAE_Powertrain_DW->WriteCMDict7_IWORK.Checked) {
        SAE_Powertrain_DW->WriteCMDict7_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      value = SAE_Powertrain_B->Sum;
      DVA_PokeSL(e, value);
    }

    /* S-Function (write_dict): '<S13>/Write CM Dict8' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict8_PWORK.Entry;
      if (!SAE_Powertrain_DW->WriteCMDict8_IWORK.Checked) {
        SAE_Powertrain_DW->WriteCMDict8_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      value = SAE_Powertrain_B->ReadCMDict;
      DVA_PokeSL(e, value);
    }

    /* S-Function (write_dict): '<S13>/Write CM Dict3' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)SAE_Powertrain_DW->WriteCMDict3_PWORK.Entry;
      if (!SAE_Powertrain_DW->WriteCMDict3_IWORK.Checked) {
        SAE_Powertrain_DW->WriteCMDict3_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      value = 0.0;
      DVA_PokeSL(e, value);
    }

    /* Product: '<S11>/Product2' incorporates:
     *  Constant: '<S11>/GearRatio'
     */
    SAE_Powertrain_B->Product2 = SAE_Powertrain_B->Sum *
      SAE_Powertrain_P.GearRatio_Value;

    /* Gain: '<S11>/Gain' */
    SAE_Powertrain_B->Gain = SAE_Powertrain_P.Gain_Gain_o *
      SAE_Powertrain_B->Product2;

    /* S-Function (read_dict): '<S11>/Read CM Dict1' */
    {
      tDDictEntry *e;
      e = (tDDictEntry *)SAE_Powertrain_DW->ReadCMDict1_PWORK.Entry;
      if (!SAE_Powertrain_DW->ReadCMDict1_IWORK.Checked) {
        SAE_Powertrain_DW->ReadCMDict1_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      SAE_Powertrain_B->ReadCMDict1 = e->GetFunc(e->Var);
    }

    /* Sum: '<S14>/Minus' incorporates:
     *  Constant: '<S11>/TargetSlip'
     */
    rtb_Minus = SAE_Powertrain_B->ReadCMDict1 -
      SAE_Powertrain_P.TargetSlip_Value;

    /* If: '<S14>/If' incorporates:
     *  Abs: '<S11>/Abs1'
     *  Constant: '<Root>/Traction Mode'
     *  Constant: '<S11>/GearRatio'
     *  Gain: '<S11>/Gain3'
     *  Lookup_n-D: '<S11>/2-D Lookup Table1'
     *  Product: '<S11>/Product1'
     */
    if ((rtb_Minus <= 0.0) || (SAE_Powertrain_P.TractionMode_Value == 0.0)) {
      /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem' incorporates:
       *  ActionPort: '<S17>/Action Port'
       */
      SAE_Powertrain_IfActionSubsystem(look2_binlxpw
        (SAE_Powertrain_U->FromCM.Gas, SAE_Powertrain_P.Gain3_Gain_e * fabs
         (SAE_Powertrain_U->FromCM.WheelIn.FR.rotv *
          SAE_Powertrain_P.GearRatio_Value),
         SAE_Powertrain_P.uDLookupTable1_bp01Data_l,
         SAE_Powertrain_P.uDLookupTable1_bp02Data_k,
         SAE_Powertrain_P.uDLookupTable1_tableData_hs,
         SAE_Powertrain_P.uDLookupTable1_maxIndex_i, 6U),
        &SAE_Powertrain_B->IfActionSubsystem_i);

      /* End of Outputs for SubSystem: '<S14>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S18>/Action Port'
       */
      SAE_Powertrain_IfActionSubsystem1(look2_binlxpw
        (SAE_Powertrain_U->FromCM.Gas, SAE_Powertrain_P.Gain3_Gain_e * fabs
         (SAE_Powertrain_U->FromCM.WheelIn.FR.rotv *
          SAE_Powertrain_P.GearRatio_Value),
         SAE_Powertrain_P.uDLookupTable1_bp01Data_l,
         SAE_Powertrain_P.uDLookupTable1_bp02Data_k,
         SAE_Powertrain_P.uDLookupTable1_tableData_hs,
         SAE_Powertrain_P.uDLookupTable1_maxIndex_i, 6U), rtb_Minus,
        SAE_Powertrain_P.GearRatio_Value,
        &SAE_Powertrain_B->IfActionSubsystem1_j,
        &SAE_Powertrain_P.IfActionSubsystem1_j);

      /* End of Outputs for SubSystem: '<S14>/If Action Subsystem1' */
    }

    /* End of If: '<S14>/If' */

    /* Product: '<S11>/Product3' incorporates:
     *  Constant: '<S11>/GearRatio'
     *  Sum: '<S14>/Sum'
     */
    SAE_Powertrain_B->Product3 =
      (SAE_Powertrain_B->IfActionSubsystem_i.torqueRequest +
       SAE_Powertrain_B->IfActionSubsystem1_j.Mult) *
      SAE_Powertrain_P.GearRatio_Value;

    /* Gain: '<S11>/Gain2' */
    SAE_Powertrain_B->Gain2 = SAE_Powertrain_P.Gain2_Gain *
      SAE_Powertrain_B->Product3;

    /* S-Function (read_dict): '<S12>/Read CM Dict' */
    {
      tDDictEntry *e;
      e = (tDDictEntry *)SAE_Powertrain_DW->ReadCMDict_PWORK_p.Entry;
      if (!SAE_Powertrain_DW->ReadCMDict_IWORK_n.Checked) {
        SAE_Powertrain_DW->ReadCMDict_IWORK_n.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      SAE_Powertrain_B->ReadCMDict_l = e->GetFunc(e->Var);
    }

    /* Sum: '<S20>/Minus' incorporates:
     *  Constant: '<S12>/TargetSlip'
     */
    rtb_Minus = SAE_Powertrain_B->ReadCMDict_l -
      SAE_Powertrain_P.TargetSlip_Value_l;

    /* If: '<S20>/If' incorporates:
     *  Abs: '<S12>/Abs'
     *  Constant: '<Root>/Traction Mode'
     *  Constant: '<S12>/GearRatio'
     *  Gain: '<S12>/Gain1'
     *  Lookup_n-D: '<S12>/2-D Lookup Table'
     *  Product: '<S12>/Product'
     */
    if ((rtb_Minus <= 0.0) || (SAE_Powertrain_P.TractionMode_Value == 0.0)) {
      /* Outputs for IfAction SubSystem: '<S20>/If Action Subsystem' incorporates:
       *  ActionPort: '<S23>/Action Port'
       */
      SAE_Powertrain_IfActionSubsystem(look2_binlxpw
        (SAE_Powertrain_U->FromCM.Gas, SAE_Powertrain_P.Gain1_Gain_p * fabs
         (SAE_Powertrain_U->FromCM.WheelIn.RL.rotv *
          SAE_Powertrain_P.GearRatio_Value_o),
         SAE_Powertrain_P.uDLookupTable_bp01Data_b,
         SAE_Powertrain_P.uDLookupTable_bp02Data_g,
         SAE_Powertrain_P.uDLookupTable_tableData_p,
         SAE_Powertrain_P.uDLookupTable_maxIndex_o, 6U),
        &SAE_Powertrain_B->IfActionSubsystem_g);

      /* End of Outputs for SubSystem: '<S20>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S20>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S24>/Action Port'
       */
      SAE_Powertrain_IfActionSubsystem1(look2_binlxpw
        (SAE_Powertrain_U->FromCM.Gas, SAE_Powertrain_P.Gain1_Gain_p * fabs
         (SAE_Powertrain_U->FromCM.WheelIn.RL.rotv *
          SAE_Powertrain_P.GearRatio_Value_o),
         SAE_Powertrain_P.uDLookupTable_bp01Data_b,
         SAE_Powertrain_P.uDLookupTable_bp02Data_g,
         SAE_Powertrain_P.uDLookupTable_tableData_p,
         SAE_Powertrain_P.uDLookupTable_maxIndex_o, 6U), rtb_Minus,
        SAE_Powertrain_U->FromCM.WheelIn.RL.rotv,
        &SAE_Powertrain_B->IfActionSubsystem1_e,
        &SAE_Powertrain_P.IfActionSubsystem1_e);

      /* End of Outputs for SubSystem: '<S20>/If Action Subsystem1' */
    }

    /* End of If: '<S20>/If' */

    /* Product: '<S12>/Product2' incorporates:
     *  Constant: '<S12>/GearRatio'
     *  Sum: '<S20>/Sum'
     */
    SAE_Powertrain_B->Product2_j =
      (SAE_Powertrain_B->IfActionSubsystem_g.torqueRequest +
       SAE_Powertrain_B->IfActionSubsystem1_e.Mult) *
      SAE_Powertrain_P.GearRatio_Value_o;

    /* Gain: '<S12>/Gain' */
    SAE_Powertrain_B->Gain_d = SAE_Powertrain_P.Gain_Gain_ln *
      SAE_Powertrain_B->Product2_j;

    /* S-Function (read_dict): '<S12>/Read CM Dict1' */
    {
      tDDictEntry *e;
      e = (tDDictEntry *)SAE_Powertrain_DW->ReadCMDict1_PWORK_m.Entry;
      if (!SAE_Powertrain_DW->ReadCMDict1_IWORK_a.Checked) {
        SAE_Powertrain_DW->ReadCMDict1_IWORK_a.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'SAE_Powertrain'");
      }

      SAE_Powertrain_B->ReadCMDict1_n = e->GetFunc(e->Var);
    }

    /* Sum: '<S19>/Minus' incorporates:
     *  Constant: '<S12>/TargetSlip'
     */
    rtb_Minus = SAE_Powertrain_B->ReadCMDict1_n -
      SAE_Powertrain_P.TargetSlip_Value_l;

    /* If: '<S19>/If' incorporates:
     *  Abs: '<S12>/Abs1'
     *  Constant: '<Root>/Traction Mode'
     *  Constant: '<S12>/GearRatio'
     *  Gain: '<S12>/Gain3'
     *  Lookup_n-D: '<S12>/2-D Lookup Table1'
     *  Product: '<S12>/Product1'
     */
    if ((rtb_Minus <= 0.0) || (SAE_Powertrain_P.TractionMode_Value == 0.0)) {
      /* Outputs for IfAction SubSystem: '<S19>/If Action Subsystem' incorporates:
       *  ActionPort: '<S21>/Action Port'
       */
      SAE_Powertrain_IfActionSubsystem(look2_binlxpw
        (SAE_Powertrain_U->FromCM.Gas, SAE_Powertrain_P.Gain3_Gain_g3 * fabs
         (SAE_Powertrain_U->FromCM.WheelIn.RR.rotv *
          SAE_Powertrain_P.GearRatio_Value_o),
         SAE_Powertrain_P.uDLookupTable1_bp01Data_m,
         SAE_Powertrain_P.uDLookupTable1_bp02Data_b,
         SAE_Powertrain_P.uDLookupTable1_tableData_k,
         SAE_Powertrain_P.uDLookupTable1_maxIndex_p3, 6U),
        &SAE_Powertrain_B->IfActionSubsystem_io);

      /* End of Outputs for SubSystem: '<S19>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S19>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S22>/Action Port'
       */
      SAE_Powertrain_IfActionSubsystem1(look2_binlxpw
        (SAE_Powertrain_U->FromCM.Gas, SAE_Powertrain_P.Gain3_Gain_g3 * fabs
         (SAE_Powertrain_U->FromCM.WheelIn.RR.rotv *
          SAE_Powertrain_P.GearRatio_Value_o),
         SAE_Powertrain_P.uDLookupTable1_bp01Data_m,
         SAE_Powertrain_P.uDLookupTable1_bp02Data_b,
         SAE_Powertrain_P.uDLookupTable1_tableData_k,
         SAE_Powertrain_P.uDLookupTable1_maxIndex_p3, 6U), rtb_Minus,
        SAE_Powertrain_U->FromCM.WheelIn.RR.rotv,
        &SAE_Powertrain_B->IfActionSubsystem1_l,
        &SAE_Powertrain_P.IfActionSubsystem1_l);

      /* End of Outputs for SubSystem: '<S19>/If Action Subsystem1' */
    }

    /* End of If: '<S19>/If' */

    /* Product: '<S12>/Product3' incorporates:
     *  Constant: '<S12>/GearRatio'
     *  Sum: '<S19>/Sum'
     */
    SAE_Powertrain_B->Product3_l =
      (SAE_Powertrain_B->IfActionSubsystem_io.torqueRequest +
       SAE_Powertrain_B->IfActionSubsystem1_l.Mult) *
      SAE_Powertrain_P.GearRatio_Value_o;

    /* Gain: '<S12>/Gain2' */
    SAE_Powertrain_B->Gain2_k = SAE_Powertrain_P.Gain2_Gain_p *
      SAE_Powertrain_B->Product3_l;

    /* End of Outputs for SubSystem: '<S2>/Traction Control' */
  }

  /* End of If: '<S2>/If' */

  /* Sum: '<S2>/Sum' */
  SAE_Powertrain_Y->ToCM.WheelOut.FL.Trq_Drive = SAE_Powertrain_B->Product1_f +
    SAE_Powertrain_B->Product2;

  /* Sum: '<S2>/Sum1' */
  SAE_Powertrain_Y->ToCM.WheelOut.FL.Trq_Supp2WC = SAE_Powertrain_B->Gain_b +
    SAE_Powertrain_B->Gain;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.FL.Inert_in'
   */
  SAE_Powertrain_Y->ToCM.WheelOut.FL.Inert_in =
    SAE_Powertrain_P.WheelOutFLInert_in_Value;

  /* Sum: '<S2>/Sum2' */
  SAE_Powertrain_Y->ToCM.WheelOut.FR.Trq_Drive = SAE_Powertrain_B->Product1_o +
    SAE_Powertrain_B->Product3;

  /* Sum: '<S2>/Sum3' */
  SAE_Powertrain_Y->ToCM.WheelOut.FR.Trq_Supp2WC = SAE_Powertrain_B->Gain_n +
    SAE_Powertrain_B->Gain2;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.FR.Inert_in'
   */
  SAE_Powertrain_Y->ToCM.WheelOut.FR.Inert_in =
    SAE_Powertrain_P.WheelOutFRInert_in_Value;

  /* Sum: '<S2>/Sum4' */
  SAE_Powertrain_Y->ToCM.WheelOut.RL.Trq_Drive = SAE_Powertrain_B->Product1 +
    SAE_Powertrain_B->Product2_j;

  /* Sum: '<S2>/Sum5' */
  SAE_Powertrain_Y->ToCM.WheelOut.RL.Trq_Supp2WC = SAE_Powertrain_B->Gain_h +
    SAE_Powertrain_B->Gain_d;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.RL.Inert_in'
   */
  SAE_Powertrain_Y->ToCM.WheelOut.RL.Inert_in =
    SAE_Powertrain_P.WheelOutRLInert_in_Value;

  /* Sum: '<S2>/Sum6' */
  SAE_Powertrain_Y->ToCM.WheelOut.RR.Trq_Drive = SAE_Powertrain_B->Product1_m +
    SAE_Powertrain_B->Product3_l;

  /* Sum: '<S2>/Sum7' */
  SAE_Powertrain_Y->ToCM.WheelOut.RR.Trq_Supp2WC = SAE_Powertrain_B->Gain_hq +
    SAE_Powertrain_B->Gain2_k;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.RR.Inert_in'
   */
  SAE_Powertrain_Y->ToCM.WheelOut.RR.Inert_in =
    SAE_Powertrain_P.WheelOutRRInert_in_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/PowerDelta.Diffs'
   *  Constant: '<S1>/PowerDelta.Inert'
   *  Constant: '<S1>/PowerDelta.Inert_DL'
   *  Constant: '<S1>/PowerDelta.PlanetGear'
   *  Constant: '<S1>/PowerDelta.PowerSupply'
   *  Constant: '<S1>/PowerDelta.Shafts'
   *  Constant: '<S1>/PowerDelta.Spring_DL'
   */
  SAE_Powertrain_Y->ToCM.PowerDelta.PlanetGear =
    SAE_Powertrain_P.PowerDeltaPlanetGear_Value;
  SAE_Powertrain_Y->ToCM.PowerDelta.Diffs =
    SAE_Powertrain_P.PowerDeltaDiffs_Value;
  SAE_Powertrain_Y->ToCM.PowerDelta.Shafts =
    SAE_Powertrain_P.PowerDeltaShafts_Value;
  SAE_Powertrain_Y->ToCM.PowerDelta.Spring_DL =
    SAE_Powertrain_P.PowerDeltaSpring_DL_Value;
  SAE_Powertrain_Y->ToCM.PowerDelta.Inert_DL =
    SAE_Powertrain_P.PowerDeltaInert_DL_Value;
  SAE_Powertrain_Y->ToCM.PowerDelta.Inert =
    SAE_Powertrain_P.PowerDeltaInert_Value;
  SAE_Powertrain_Y->ToCM.PowerDelta.PowerSupply =
    SAE_Powertrain_P.PowerDeltaPowerSupply_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BCU_Status'
   *  Constant: '<S1>/DL_iDiff_mean'
   *  Constant: '<S1>/ECU_Status'
   *  Constant: '<S1>/MCU_Status'
   *  Constant: '<S1>/TCU_Status'
   *  Outport: '<Root>/ToCM'
   */
  SAE_Powertrain_Y->ToCM.ECU_Status = SAE_Powertrain_P.ECU_Status_Value;
  SAE_Powertrain_Y->ToCM.MCU_Status = SAE_Powertrain_P.MCU_Status_Value;
  SAE_Powertrain_Y->ToCM.TCU_Status = SAE_Powertrain_P.TCU_Status_Value;
  SAE_Powertrain_Y->ToCM.BCU_Status = SAE_Powertrain_P.BCU_Status_Value;
  SAE_Powertrain_Y->ToCM.Trq_Supp2Bdy1.rx = rtb_Trq_Supp2Bdy1_rx;
  SAE_Powertrain_Y->ToCM.Trq_Supp2Bdy1.ry = rtb_Trq_Supp2Bdy1_ry;
  SAE_Powertrain_Y->ToCM.Trq_Supp2Bdy1.rz = rtb_Trq_Supp2Bdy1_rz;
  SAE_Powertrain_Y->ToCM.Trq_Supp2Bdy1B.rx = rtb_Trq_Supp2Bdy1B_rx;
  SAE_Powertrain_Y->ToCM.Trq_Supp2Bdy1B.ry = rtb_Trq_Supp2Bdy1B_ry;
  SAE_Powertrain_Y->ToCM.Trq_Supp2Bdy1B.rz = rtb_Trq_Supp2Bdy1B_rz;
  SAE_Powertrain_Y->ToCM.DL_iDiff_mean = SAE_Powertrain_P.DL_iDiff_mean_Value;
}

/* Model initialize function */
void SAE_Powertrain_initialize(RT_MODEL_SAE_Powertrain_T *const SAE_Powertrain_M)
{
  DW_SAE_Powertrain_T *SAE_Powertrain_DW = ((DW_SAE_Powertrain_T *)
    SAE_Powertrain_M->dwork);
  B_SAE_Powertrain_T *SAE_Powertrain_B = ((B_SAE_Powertrain_T *)
    SAE_Powertrain_M->blockIO);

  /* Start for IfAction SubSystem: '<S2>/Launch Control' */
  /* Start for S-Function (write_dict): '<S7>/Write CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Caleb.MotorRPM_Back", NULL);
    SAE_Powertrain_DW->WriteCMDict_IWORK_c.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict_PWORK_p.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S9>/Write CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Caleb.MotorRPM_Front", NULL);
    SAE_Powertrain_DW->WriteCMDict_IWORK_l.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict_PWORK_b.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S9>/Write CM Dict1' */
  {
    char **namevec = CM_Names2StrVec("Caleb.TABLE_vTHREE", NULL);
    SAE_Powertrain_DW->WriteCMDict1_IWORK_i.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict1_PWORK_d.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S9>/Write CM Dict2' */
  {
    char **namevec = CM_Names2StrVec("Caleb.TABLE_vFOUR", NULL);
    SAE_Powertrain_DW->WriteCMDict2_IWORK_a.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict2_PWORK_p.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S9>/Write CM Dict3' */
  {
    char **namevec = CM_Names2StrVec("Caleb.TABLE_vFIVE", NULL);
    SAE_Powertrain_DW->WriteCMDict3_IWORK_c.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict3_PWORK_f.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for IfAction SubSystem: '<S2>/Traction Control' */
  /* Start for S-Function (write_dict): '<S13>/Write CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Caleb.TorqueRequest", NULL);
    SAE_Powertrain_DW->WriteCMDict_IWORK.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S13>/Write CM Dict1' incorporates:
   *  Constant: '<S11>/TargetSlip'
   */
  {
    char **namevec = CM_Names2StrVec("Caleb.TargetSlip", NULL);
    SAE_Powertrain_DW->WriteCMDict1_IWORK.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict1_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (read_dict): '<S11>/Read CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Car.LongSlipFL", NULL);
    SAE_Powertrain_DW->ReadCMDict_IWORK.Checked = 0;
    SAE_Powertrain_DW->ReadCMDict_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for IfAction SubSystem: '<S13>/If Action Subsystem1' */
  /* Start for S-Function (write_dict): '<S16>/Write CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Debug.TorqueR", NULL);
    SAE_Powertrain_DW->WriteCMDict_IWORK_n.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict_PWORK_o.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S16>/Write CM Dict1' */
  {
    char **namevec = CM_Names2StrVec("Debug.TorqueA", NULL);
    SAE_Powertrain_DW->WriteCMDict1_IWORK_k.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict1_PWORK_i.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S16>/Write CM Dict2' */
  {
    char **namevec = CM_Names2StrVec("Debug.Table", NULL);
    SAE_Powertrain_DW->WriteCMDict2_IWORK_e.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict2_PWORK_m.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S16>/Write CM Dict3' */
  {
    char **namevec = CM_Names2StrVec("Debug.SlipDiff", NULL);
    SAE_Powertrain_DW->WriteCMDict3_IWORK_m.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict3_PWORK_e.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S16>/Write CM Dict4' incorporates:
   *  Inport: '<Root>/FromCM'
   */
  {
    char **namevec = CM_Names2StrVec("Debug.WhlSpeed", NULL);
    SAE_Powertrain_DW->WriteCMDict4_IWORK_n.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict4_PWORK_b.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S16>/Write CM Dict5' */
  {
    char **namevec = CM_Names2StrVec("Debug.Percent", NULL);
    SAE_Powertrain_DW->WriteCMDict5_IWORK.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict5_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S16>/Write CM Dict6' */
  {
    char **namevec = CM_Names2StrVec("Debug.RawTable", NULL);
    SAE_Powertrain_DW->WriteCMDict6_IWORK_g.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict6_PWORK_j.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S13>/Write CM Dict2' */
  {
    char **namevec = CM_Names2StrVec("Caleb.IfOutput", NULL);
    SAE_Powertrain_DW->WriteCMDict2_IWORK.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict2_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S13>/Write CM Dict4' */
  {
    char **namevec = CM_Names2StrVec("Caleb.IfOutputTwo", NULL);
    SAE_Powertrain_DW->WriteCMDict4_IWORK.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict4_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S13>/Write CM Dict6' */
  {
    char **namevec = CM_Names2StrVec("Caleb.DiffSlip", NULL);
    SAE_Powertrain_DW->WriteCMDict6_IWORK.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict6_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S13>/Write CM Dict7' */
  {
    char **namevec = CM_Names2StrVec("Caleb.TorqueOut", NULL);
    SAE_Powertrain_DW->WriteCMDict7_IWORK.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict7_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S13>/Write CM Dict8' */
  {
    char **namevec = CM_Names2StrVec("Caleb.ActualSlip", NULL);
    SAE_Powertrain_DW->WriteCMDict8_IWORK.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict8_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S13>/Write CM Dict3' */
  {
    char **namevec = CM_Names2StrVec("Caleb.TorquePidOut", NULL);
    SAE_Powertrain_DW->WriteCMDict3_IWORK.Checked = 0;
    SAE_Powertrain_DW->WriteCMDict3_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (read_dict): '<S11>/Read CM Dict1' */
  {
    char **namevec = CM_Names2StrVec("Car.LongSlipFR", NULL);
    SAE_Powertrain_DW->ReadCMDict1_IWORK.Checked = 0;
    SAE_Powertrain_DW->ReadCMDict1_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (read_dict): '<S12>/Read CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Car.LongSlipFL", NULL);
    SAE_Powertrain_DW->ReadCMDict_IWORK_n.Checked = 0;
    SAE_Powertrain_DW->ReadCMDict_PWORK_p.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (read_dict): '<S12>/Read CM Dict1' */
  {
    char **namevec = CM_Names2StrVec("Car.LongSlipFR", NULL);
    SAE_Powertrain_DW->ReadCMDict1_IWORK_a.Checked = 0;
    SAE_Powertrain_DW->ReadCMDict1_PWORK_m.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* End of Start for SubSystem: '<S2>/Traction Control' */

  /* SystemInitialize for IfAction SubSystem: '<S2>/Launch Control' */
  /* SystemInitialize for Outport: '<S3>/FL trq' */
  SAE_Powertrain_B->Product1_f = SAE_Powertrain_P.FLtrq_Y0;

  /* SystemInitialize for Outport: '<S3>/FL trq inv' */
  SAE_Powertrain_B->Gain_b = SAE_Powertrain_P.FLtrqinv_Y0;

  /* SystemInitialize for Outport: '<S3>/FR trq' */
  SAE_Powertrain_B->Product1_o = SAE_Powertrain_P.FRtrq_Y0;

  /* SystemInitialize for Outport: '<S3>/FR trq inv' */
  SAE_Powertrain_B->Gain_n = SAE_Powertrain_P.FRtrqinv_Y0;

  /* SystemInitialize for Outport: '<S3>/RL trq' */
  SAE_Powertrain_B->Product1 = SAE_Powertrain_P.RLtrq_Y0;

  /* SystemInitialize for Outport: '<S3>/RL trq inv' */
  SAE_Powertrain_B->Gain_h = SAE_Powertrain_P.RLtrqinv_Y0;

  /* SystemInitialize for Outport: '<S3>/RR trq' */
  SAE_Powertrain_B->Product1_m = SAE_Powertrain_P.RRtrq_Y0;

  /* SystemInitialize for Outport: '<S3>/RR trq inv' */
  SAE_Powertrain_B->Gain_hq = SAE_Powertrain_P.RRtrqinv_Y0;

  /* End of SystemInitialize for SubSystem: '<S2>/Launch Control' */

  /* SystemInitialize for IfAction SubSystem: '<S2>/Traction Control' */
  /* SystemInitialize for IfAction SubSystem: '<S13>/If Action Subsystem' */
  SAE_Powertrain_IfActionSubsystem_Init(&SAE_Powertrain_B->IfActionSubsystem,
    &SAE_Powertrain_P.IfActionSubsystem);

  /* End of SystemInitialize for SubSystem: '<S13>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S13>/If Action Subsystem1' */
  /* SystemInitialize for Outport: '<S16>/TorqueOut' */
  SAE_Powertrain_B->Mult = SAE_Powertrain_P.TorqueOut_Y0;

  /* End of SystemInitialize for SubSystem: '<S13>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S14>/If Action Subsystem' */
  SAE_Powertrain_IfActionSubsystem_Init(&SAE_Powertrain_B->IfActionSubsystem_i,
    &SAE_Powertrain_P.IfActionSubsystem_i);

  /* End of SystemInitialize for SubSystem: '<S14>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S14>/If Action Subsystem1' */
  SAE_Powertrain_IfActionSubsystem1_Init(&SAE_Powertrain_B->IfActionSubsystem1_j,
    &SAE_Powertrain_P.IfActionSubsystem1_j);

  /* End of SystemInitialize for SubSystem: '<S14>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S20>/If Action Subsystem' */
  SAE_Powertrain_IfActionSubsystem_Init(&SAE_Powertrain_B->IfActionSubsystem_g,
    &SAE_Powertrain_P.IfActionSubsystem_g);

  /* End of SystemInitialize for SubSystem: '<S20>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S20>/If Action Subsystem1' */
  SAE_Powertrain_IfActionSubsystem1_Init(&SAE_Powertrain_B->IfActionSubsystem1_e,
    &SAE_Powertrain_P.IfActionSubsystem1_e);

  /* End of SystemInitialize for SubSystem: '<S20>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S19>/If Action Subsystem' */
  SAE_Powertrain_IfActionSubsystem_Init(&SAE_Powertrain_B->IfActionSubsystem_io,
    &SAE_Powertrain_P.IfActionSubsystem_io);

  /* End of SystemInitialize for SubSystem: '<S19>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S19>/If Action Subsystem1' */
  SAE_Powertrain_IfActionSubsystem1_Init(&SAE_Powertrain_B->IfActionSubsystem1_l,
    &SAE_Powertrain_P.IfActionSubsystem1_l);

  /* End of SystemInitialize for SubSystem: '<S19>/If Action Subsystem1' */

  /* SystemInitialize for Outport: '<S4>/FL trq' */
  SAE_Powertrain_B->Product2 = SAE_Powertrain_P.FLtrq_Y0_j;

  /* SystemInitialize for Outport: '<S4>/FL trq inv' */
  SAE_Powertrain_B->Gain = SAE_Powertrain_P.FLtrqinv_Y0_f;

  /* SystemInitialize for Outport: '<S4>/FR trq' */
  SAE_Powertrain_B->Product3 = SAE_Powertrain_P.FRtrq_Y0_e;

  /* SystemInitialize for Outport: '<S4>/FR trq inv' */
  SAE_Powertrain_B->Gain2 = SAE_Powertrain_P.FRtrqinv_Y0_h;

  /* SystemInitialize for Outport: '<S4>/RL trq' */
  SAE_Powertrain_B->Product2_j = SAE_Powertrain_P.RLtrq_Y0_l;

  /* SystemInitialize for Outport: '<S4>/RL trq inv' */
  SAE_Powertrain_B->Gain_d = SAE_Powertrain_P.RLtrqinv_Y0_p;

  /* SystemInitialize for Outport: '<S4>/RR trq' */
  SAE_Powertrain_B->Product3_l = SAE_Powertrain_P.RRtrq_Y0_j;

  /* SystemInitialize for Outport: '<S4>/RR trq inv' */
  SAE_Powertrain_B->Gain2_k = SAE_Powertrain_P.RRtrqinv_Y0_f;

  /* End of SystemInitialize for SubSystem: '<S2>/Traction Control' */
}

/* Model terminate function */
void SAE_Powertrain_terminate(RT_MODEL_SAE_Powertrain_T * SAE_Powertrain_M)
{
  /* model code */
  rt_FREE(SAE_Powertrain_M->blockIO);
  rt_FREE(SAE_Powertrain_M->inputs);
  rt_FREE(SAE_Powertrain_M->outputs);
  rt_FREE(SAE_Powertrain_M->dwork);
  rt_FREE(SAE_Powertrain_M);
}

/* Model data allocation function */
RT_MODEL_SAE_Powertrain_T *SAE_Powertrain(struct tInfos *inf)
{
  RT_MODEL_SAE_Powertrain_T *SAE_Powertrain_M;
  SAE_Powertrain_M = (RT_MODEL_SAE_Powertrain_T *) malloc(sizeof
    (RT_MODEL_SAE_Powertrain_T));
  if (SAE_Powertrain_M == NULL) {
    return NULL;
  }

  (void) memset((char *)SAE_Powertrain_M, 0,
                sizeof(RT_MODEL_SAE_Powertrain_T));
  MatSupp_Init();

  /* block I/O */
  {
    B_SAE_Powertrain_T *b = (B_SAE_Powertrain_T *) malloc(sizeof
      (B_SAE_Powertrain_T));
    rt_VALIDATE_MEMORY(SAE_Powertrain_M,b);
    SAE_Powertrain_M->blockIO = (b);
  }

  /* states (dwork) */
  {
    DW_SAE_Powertrain_T *dwork = (DW_SAE_Powertrain_T *) malloc(sizeof
      (DW_SAE_Powertrain_T));
    rt_VALIDATE_MEMORY(SAE_Powertrain_M,dwork);
    SAE_Powertrain_M->dwork = (dwork);
  }

  /* external inputs */
  {
    ExtU_SAE_Powertrain_T *SAE_Powertrain_U = (ExtU_SAE_Powertrain_T *) malloc
      (sizeof(ExtU_SAE_Powertrain_T));
    rt_VALIDATE_MEMORY(SAE_Powertrain_M,SAE_Powertrain_U);
    SAE_Powertrain_M->inputs = (((ExtU_SAE_Powertrain_T *) SAE_Powertrain_U));
  }

  /* external outputs */
  {
    ExtY_SAE_Powertrain_T *SAE_Powertrain_Y = (ExtY_SAE_Powertrain_T *) malloc
      (sizeof(ExtY_SAE_Powertrain_T));
    rt_VALIDATE_MEMORY(SAE_Powertrain_M,SAE_Powertrain_Y);
    SAE_Powertrain_M->outputs = (SAE_Powertrain_Y);
  }

  /* CarMaker parameter tuning */
  {
    SAE_Powertrain_SetParams(SAE_Powertrain_M, NULL, inf);
  }

  {
    B_SAE_Powertrain_T *SAE_Powertrain_B = ((B_SAE_Powertrain_T *)
      SAE_Powertrain_M->blockIO);
    DW_SAE_Powertrain_T *SAE_Powertrain_DW = ((DW_SAE_Powertrain_T *)
      SAE_Powertrain_M->dwork);
    ExtU_SAE_Powertrain_T *SAE_Powertrain_U = (ExtU_SAE_Powertrain_T *)
      SAE_Powertrain_M->inputs;
    ExtY_SAE_Powertrain_T *SAE_Powertrain_Y = (ExtY_SAE_Powertrain_T *)
      SAE_Powertrain_M->outputs;

    /* block I/O */
    (void) memset(((void *) SAE_Powertrain_B), 0,
                  sizeof(B_SAE_Powertrain_T));

    /* states (dwork) */
    (void) memset((void *)SAE_Powertrain_DW, 0,
                  sizeof(DW_SAE_Powertrain_T));

    /* external inputs */
    (void)memset(SAE_Powertrain_U, 0, sizeof(ExtU_SAE_Powertrain_T));

    /* external outputs */
    SAE_Powertrain_Y->ToCM = SAE_Powertrain_rtZcmPowerTrainXWDOut;
  }

  return SAE_Powertrain_M;
}

/* CarMaker dictionary definitions. */
extern tQuantEntry *main_DictDefines[];
static tQuantEntry DictDefines[] = {
  { (void*)0x01234567, (void*)0x89ABCDEF, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { (void*)main_DictDefines, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { "Caleb.MotorRPM_Back", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.MotorRPM_Front", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.TABLE_vTHREE", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.TABLE_vFOUR", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.TABLE_vFIVE", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Debug.TorqueR", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Debug.TorqueA", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Debug.Table", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Debug.SlipDiff", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Debug.WhlSpeed", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Debug.Percent", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Debug.RawTable", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.TorquePidOut", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.IfOutputTwo", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.IfOutput", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.TorqueRequest", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.TargetSlip", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.ActualSlip", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.DiffSlip", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.TorqueOut", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { NULL, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 }
};

tQuantEntry *SAE_Powertrain_DictDefines = DictDefines;
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

tMdlBdyFrame *SAE_Powertrain_BdyFrameDefines = BdyFrameDefines;
tMdlBdyFrame *main_BdyFrameDefines[] = {
  BdyFrameDefines,
  NULL
};

#endif
