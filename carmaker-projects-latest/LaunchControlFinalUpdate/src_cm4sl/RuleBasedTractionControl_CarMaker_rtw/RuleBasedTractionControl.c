/*
 * RuleBasedTractionControl.c
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

#include <infoc.h>
#include <Log.h>
#include <InfoParam.h>
#include <DataDict.h>
#include <MatSupp.h>
#include "RuleBasedTractionControl.h"
#include "RuleBasedTractionControl_private.h"
#include "RuleBasedTractionControl_wrap.h"

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

const cmPowerTrainXWDOut RuleBasedTractionControl_rtZcmPowerTrainXWDOut = {
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
 *    '<S6>/If Action Subsystem'
 *    '<S6>/If Action Subsystem1'
 *    '<S7>/If Action Subsystem'
 *    '<S7>/If Action Subsystem1'
 *    '<S8>/If Action Subsystem'
 *    '<S8>/If Action Subsystem1'
 *    '<S9>/If Action Subsystem'
 *    '<S9>/If Action Subsystem1'
 */
void RuleBasedTractionControl_IfActionSubsystem_Init
  (B_IfActionSubsystem_RuleBasedTractionControl_T *localB,
   P_IfActionSubsystem_RuleBasedTractionControl_T *localP)
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
void RuleBasedTractionControl_IfActionSubsystem(real_T rtu_In1,
  B_IfActionSubsystem_RuleBasedTractionControl_T *localB)
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
void RuleBasedTractionControl_IfActionSubsystem_Term(void)
{
}

/*
 * System initialize for action system:
 *    '<S19>/If Action Subsystem'
 *    '<S20>/If Action Subsystem'
 *    '<S21>/If Action Subsystem'
 *    '<S22>/If Action Subsystem'
 */
void RuleBasedTractionControl_IfActionSubsystem_j_Init
  (B_IfActionSubsystem_RuleBasedTractionControl_j_T *localB,
   P_IfActionSubsystem_RuleBasedTractionControl_j_T *localP)
{
  /* SystemInitialize for Outport: '<S23>/Out1' */
  localB->Product = localP->Out1_Y0;
}

/*
 * Output and update for action system:
 *    '<S19>/If Action Subsystem'
 *    '<S20>/If Action Subsystem'
 *    '<S21>/If Action Subsystem'
 *    '<S22>/If Action Subsystem'
 */
void RuleBasedTractionControl_IfActionSubsystem_o(real_T rtu_In1, real_T rtu_In2,
  real_T rtu_In3, B_IfActionSubsystem_RuleBasedTractionControl_j_T *localB)
{
  /* Product: '<S23>/Product' */
  localB->Product = rtu_In1 * rtu_In2 * rtu_In3;
}

/*
 * Termination for action system:
 *    '<S19>/If Action Subsystem'
 *    '<S20>/If Action Subsystem'
 *    '<S21>/If Action Subsystem'
 *    '<S22>/If Action Subsystem'
 */
void RuleBasedTractionControl_IfActionSubsystem_a_Term(void)
{
}

/*
 * System initialize for action system:
 *    '<S19>/If Action Subsystem3'
 *    '<S19>/If Action Subsystem2'
 *    '<S19>/If Action Subsystem1'
 *    '<S20>/If Action Subsystem3'
 *    '<S20>/If Action Subsystem2'
 *    '<S20>/If Action Subsystem1'
 *    '<S21>/If Action Subsystem3'
 *    '<S21>/If Action Subsystem2'
 *    '<S21>/If Action Subsystem1'
 *    '<S22>/If Action Subsystem3'
 *    ...
 */
void RuleBasedTractionControl_IfActionSubsystem3_Init
  (B_IfActionSubsystem3_RuleBasedTractionControl_T *localB,
   P_IfActionSubsystem3_RuleBasedTractionControl_T *localP)
{
  /* SystemInitialize for Outport: '<S26>/Out2' */
  localB->Product = localP->Out2_Y0;
}

/*
 * Output and update for action system:
 *    '<S19>/If Action Subsystem3'
 *    '<S19>/If Action Subsystem2'
 *    '<S19>/If Action Subsystem1'
 *    '<S20>/If Action Subsystem3'
 *    '<S20>/If Action Subsystem2'
 *    '<S20>/If Action Subsystem1'
 *    '<S21>/If Action Subsystem3'
 *    '<S21>/If Action Subsystem2'
 *    '<S21>/If Action Subsystem1'
 *    '<S22>/If Action Subsystem3'
 *    ...
 */
void RuleBasedTractionControl_IfActionSubsystem3(real_T rtu_In2, real_T rtu_In3,
  real_T rtu_In4, B_IfActionSubsystem3_RuleBasedTractionControl_T *localB,
  P_IfActionSubsystem3_RuleBasedTractionControl_T *localP)
{
  /* Product: '<S26>/Product' incorporates:
   *  Constant: '<S26>/Constant'
   */
  localB->Product = rtu_In2 * rtu_In3 * rtu_In4 * localP->Constant_Value;
}

/*
 * Termination for action system:
 *    '<S19>/If Action Subsystem3'
 *    '<S19>/If Action Subsystem2'
 *    '<S19>/If Action Subsystem1'
 *    '<S20>/If Action Subsystem3'
 *    '<S20>/If Action Subsystem2'
 *    '<S20>/If Action Subsystem1'
 *    '<S21>/If Action Subsystem3'
 *    '<S21>/If Action Subsystem2'
 *    '<S21>/If Action Subsystem1'
 *    '<S22>/If Action Subsystem3'
 *    ...
 */
void RuleBasedTractionControl_IfActionSubsystem3_Term(void)
{
}

/* Model step function */
void RuleBasedTractionControl_step(RT_MODEL_RuleBasedTractionControl_T *const
  RuleBasedTractionControl_M)
{
  B_RuleBasedTractionControl_T *RuleBasedTractionControl_B =
    ((B_RuleBasedTractionControl_T *) RuleBasedTractionControl_M->blockIO);
  DW_RuleBasedTractionControl_T *RuleBasedTractionControl_DW =
    ((DW_RuleBasedTractionControl_T *) RuleBasedTractionControl_M->dwork);
  ExtU_RuleBasedTractionControl_T *RuleBasedTractionControl_U =
    (ExtU_RuleBasedTractionControl_T *) RuleBasedTractionControl_M->inputs;
  ExtY_RuleBasedTractionControl_T *RuleBasedTractionControl_Y =
    (ExtY_RuleBasedTractionControl_T *) RuleBasedTractionControl_M->outputs;
  real_T rtb_Abs1;
  real_T rtb_uDLookupTable;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/EngineOut.Engine_on'
   *  Constant: '<S1>/EngineOut.FuelFlow'
   *  Constant: '<S1>/EngineOut.Trq'
   *  Constant: '<S1>/EngineOut.TrqDrag'
   *  Constant: '<S1>/EngineOut.TrqFull'
   *  Constant: '<S1>/EngineOut.TrqOpt'
   *  Constant: '<S1>/EngineOut.rotv'
   */
  RuleBasedTractionControl_Y->ToCM.EngineOut.Engine_on =
    RuleBasedTractionControl_P.EngineOutEngine_on_Value;
  RuleBasedTractionControl_Y->ToCM.EngineOut.rotv =
    RuleBasedTractionControl_P.EngineOutrotv_Value;
  RuleBasedTractionControl_Y->ToCM.EngineOut.Trq =
    RuleBasedTractionControl_P.EngineOutTrq_Value;
  RuleBasedTractionControl_Y->ToCM.EngineOut.TrqDrag =
    RuleBasedTractionControl_P.EngineOutTrqDrag_Value;
  RuleBasedTractionControl_Y->ToCM.EngineOut.TrqFull =
    RuleBasedTractionControl_P.EngineOutTrqFull_Value;
  RuleBasedTractionControl_Y->ToCM.EngineOut.TrqOpt =
    RuleBasedTractionControl_P.EngineOutTrqOpt_Value;
  RuleBasedTractionControl_Y->ToCM.EngineOut.FuelFlow =
    RuleBasedTractionControl_P.EngineOutFuelFlow_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ISGOut.i_M2W.FL'
   *  Constant: '<S1>/ISGOut.i_M2W.FR'
   *  Constant: '<S1>/ISGOut.i_M2W.RL'
   *  Constant: '<S1>/ISGOut.i_M2W.RR'
   */
  RuleBasedTractionControl_Y->ToCM.ISGOut.i_M2W.FL =
    RuleBasedTractionControl_P.ISGOuti_M2WFL_Value;
  RuleBasedTractionControl_Y->ToCM.ISGOut.i_M2W.FR =
    RuleBasedTractionControl_P.ISGOuti_M2WFR_Value;
  RuleBasedTractionControl_Y->ToCM.ISGOut.i_M2W.RL =
    RuleBasedTractionControl_P.ISGOuti_M2WRL_Value;
  RuleBasedTractionControl_Y->ToCM.ISGOut.i_M2W.RR =
    RuleBasedTractionControl_P.ISGOuti_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ISGOut.PwrElec'
   *  Constant: '<S1>/ISGOut.Trq'
   *  Constant: '<S1>/ISGOut.TrqGen_max'
   *  Constant: '<S1>/ISGOut.TrqMot_max'
   *  Constant: '<S1>/ISGOut.rotv'
   */
  RuleBasedTractionControl_Y->ToCM.ISGOut.rotv =
    RuleBasedTractionControl_P.ISGOutrotv_Value;
  RuleBasedTractionControl_Y->ToCM.ISGOut.Trq =
    RuleBasedTractionControl_P.ISGOutTrq_Value;
  RuleBasedTractionControl_Y->ToCM.ISGOut.TrqMot_max =
    RuleBasedTractionControl_P.ISGOutTrqMot_max_Value;
  RuleBasedTractionControl_Y->ToCM.ISGOut.TrqGen_max =
    RuleBasedTractionControl_P.ISGOutTrqGen_max_Value;
  RuleBasedTractionControl_Y->ToCM.ISGOut.PwrElec =
    RuleBasedTractionControl_P.ISGOutPwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m0.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.RR'
   */
  RuleBasedTractionControl_Y->ToCM.MotorOut.m0.i_M2W.FL =
    RuleBasedTractionControl_P.MotorOutm0i_M2WFL_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m0.i_M2W.FR =
    RuleBasedTractionControl_P.MotorOutm0i_M2WFR_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m0.i_M2W.RL =
    RuleBasedTractionControl_P.MotorOutm0i_M2WRL_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m0.i_M2W.RR =
    RuleBasedTractionControl_P.MotorOutm0i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m0.PwrElec'
   *  Constant: '<S1>/MotorOut.m0.Trq'
   *  Constant: '<S1>/MotorOut.m0.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m0.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m0.rotv'
   */
  RuleBasedTractionControl_Y->ToCM.MotorOut.m0.rotv =
    RuleBasedTractionControl_P.MotorOutm0rotv_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m0.Trq =
    RuleBasedTractionControl_P.MotorOutm0Trq_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m0.TrqMot_max =
    RuleBasedTractionControl_P.MotorOutm0TrqMot_max_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m0.TrqGen_max =
    RuleBasedTractionControl_P.MotorOutm0TrqGen_max_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m0.PwrElec =
    RuleBasedTractionControl_P.MotorOutm0PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m1.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.RR'
   */
  RuleBasedTractionControl_Y->ToCM.MotorOut.m1.i_M2W.FL =
    RuleBasedTractionControl_P.MotorOutm1i_M2WFL_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m1.i_M2W.FR =
    RuleBasedTractionControl_P.MotorOutm1i_M2WFR_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m1.i_M2W.RL =
    RuleBasedTractionControl_P.MotorOutm1i_M2WRL_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m1.i_M2W.RR =
    RuleBasedTractionControl_P.MotorOutm1i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m1.PwrElec'
   *  Constant: '<S1>/MotorOut.m1.Trq'
   *  Constant: '<S1>/MotorOut.m1.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m1.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m1.rotv'
   */
  RuleBasedTractionControl_Y->ToCM.MotorOut.m1.rotv =
    RuleBasedTractionControl_P.MotorOutm1rotv_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m1.Trq =
    RuleBasedTractionControl_P.MotorOutm1Trq_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m1.TrqMot_max =
    RuleBasedTractionControl_P.MotorOutm1TrqMot_max_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m1.TrqGen_max =
    RuleBasedTractionControl_P.MotorOutm1TrqGen_max_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m1.PwrElec =
    RuleBasedTractionControl_P.MotorOutm1PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m2.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.RR'
   */
  RuleBasedTractionControl_Y->ToCM.MotorOut.m2.i_M2W.FL =
    RuleBasedTractionControl_P.MotorOutm2i_M2WFL_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m2.i_M2W.FR =
    RuleBasedTractionControl_P.MotorOutm2i_M2WFR_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m2.i_M2W.RL =
    RuleBasedTractionControl_P.MotorOutm2i_M2WRL_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m2.i_M2W.RR =
    RuleBasedTractionControl_P.MotorOutm2i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m2.PwrElec'
   *  Constant: '<S1>/MotorOut.m2.Trq'
   *  Constant: '<S1>/MotorOut.m2.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m2.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m2.rotv'
   */
  RuleBasedTractionControl_Y->ToCM.MotorOut.m2.rotv =
    RuleBasedTractionControl_P.MotorOutm2rotv_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m2.Trq =
    RuleBasedTractionControl_P.MotorOutm2Trq_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m2.TrqMot_max =
    RuleBasedTractionControl_P.MotorOutm2TrqMot_max_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m2.TrqGen_max =
    RuleBasedTractionControl_P.MotorOutm2TrqGen_max_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m2.PwrElec =
    RuleBasedTractionControl_P.MotorOutm2PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m3.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.RR'
   */
  RuleBasedTractionControl_Y->ToCM.MotorOut.m3.i_M2W.FL =
    RuleBasedTractionControl_P.MotorOutm3i_M2WFL_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m3.i_M2W.FR =
    RuleBasedTractionControl_P.MotorOutm3i_M2WFR_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m3.i_M2W.RL =
    RuleBasedTractionControl_P.MotorOutm3i_M2WRL_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m3.i_M2W.RR =
    RuleBasedTractionControl_P.MotorOutm3i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m3.PwrElec'
   *  Constant: '<S1>/MotorOut.m3.Trq'
   *  Constant: '<S1>/MotorOut.m3.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m3.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m3.rotv'
   */
  RuleBasedTractionControl_Y->ToCM.MotorOut.m3.rotv =
    RuleBasedTractionControl_P.MotorOutm3rotv_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m3.Trq =
    RuleBasedTractionControl_P.MotorOutm3Trq_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m3.TrqMot_max =
    RuleBasedTractionControl_P.MotorOutm3TrqMot_max_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m3.TrqGen_max =
    RuleBasedTractionControl_P.MotorOutm3TrqGen_max_Value;
  RuleBasedTractionControl_Y->ToCM.MotorOut.m3.PwrElec =
    RuleBasedTractionControl_P.MotorOutm3PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ClutchOut.Pos'
   *  Constant: '<S1>/ClutchOut.Trq_in'
   *  Constant: '<S1>/ClutchOut.Trq_out'
   *  Constant: '<S1>/ClutchOut.i_TrqIn2Out'
   *  Constant: '<S1>/ClutchOut.rotv_in'
   *  Constant: '<S1>/ClutchOut.rotv_out'
   */
  RuleBasedTractionControl_Y->ToCM.ClutchOut.Pos =
    RuleBasedTractionControl_P.ClutchOutPos_Value;
  RuleBasedTractionControl_Y->ToCM.ClutchOut.rotv_in =
    RuleBasedTractionControl_P.ClutchOutrotv_in_Value;
  RuleBasedTractionControl_Y->ToCM.ClutchOut.rotv_out =
    RuleBasedTractionControl_P.ClutchOutrotv_out_Value;
  RuleBasedTractionControl_Y->ToCM.ClutchOut.Trq_in =
    RuleBasedTractionControl_P.ClutchOutTrq_in_Value;
  RuleBasedTractionControl_Y->ToCM.ClutchOut.Trq_out =
    RuleBasedTractionControl_P.ClutchOutTrq_out_Value;
  RuleBasedTractionControl_Y->ToCM.ClutchOut.i_TrqIn2Out =
    RuleBasedTractionControl_P.ClutchOuti_TrqIn2Out_Value;

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
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.GearNo =
    RuleBasedTractionControl_P.GearBoxOutGearNo_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.GearNo_dis =
    RuleBasedTractionControl_P.GearBoxOutGearNo_dis_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.Trq_DriveSrc_trg =
    RuleBasedTractionControl_P.GearBoxOutTrq_DriveSrc_trg_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.i =
    RuleBasedTractionControl_P.GearBoxOuti_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.rotv_in =
    RuleBasedTractionControl_P.GearBoxOutrotv_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.rotv_out =
    RuleBasedTractionControl_P.GearBoxOutrotv_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.Trq_in =
    RuleBasedTractionControl_P.GearBoxOutTrq_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.Trq_out =
    RuleBasedTractionControl_P.GearBoxOutTrq_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.Clutch.Pos =
    RuleBasedTractionControl_P.GearBoxOutClutchPos_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.Clutch.rotv_in =
    RuleBasedTractionControl_P.GearBoxOutClutchrotv_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.Clutch.rotv_out =
    RuleBasedTractionControl_P.GearBoxOutClutchrotv_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.Clutch.Trq_in =
    RuleBasedTractionControl_P.GearBoxOutClutchTrq_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.Clutch.Trq_out =
    RuleBasedTractionControl_P.GearBoxOutClutchTrq_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.Clutch.i_TrqIn2Out =
    RuleBasedTractionControl_P.GearBoxOutClutchi_TrqIn2Out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.Clutch_dis.Pos =
    RuleBasedTractionControl_P.GearBoxOutClutch_disPos_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.Clutch_dis.rotv_in =
    RuleBasedTractionControl_P.GearBoxOutClutch_disrotv_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.Clutch_dis.rotv_out =
    RuleBasedTractionControl_P.GearBoxOutClutch_disrotv_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.Clutch_dis.Trq_in =
    RuleBasedTractionControl_P.GearBoxOutClutch_disTrq_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.Clutch_dis.Trq_out =
    RuleBasedTractionControl_P.GearBoxOutClutch_disTrq_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxOut.Clutch_dis.i_TrqIn2Out =
    RuleBasedTractionControl_P.GearBoxOutClutch_disi_TrqIn2Out_Value;

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
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.GearNo =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0GearNo_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.GearNo_dis =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0GearNo_dis_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.Trq_DriveSrc_trg =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0Trq_DriveSrc_trg_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.i =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0i_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.rotv_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0rotv_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.rotv_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0rotv_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.Trq_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0Trq_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.Trq_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0Trq_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Pos =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0ClutchPos_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.rotv_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0Clutchrotv_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.rotv_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0Clutchrotv_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Trq_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0ClutchTrq_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Trq_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0ClutchTrq_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.i_TrqIn2Out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0Clutchi_TrqIn2Out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Pos =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0Clutch_disPos_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.rotv_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0Clutch_disrotv_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.rotv_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0Clutch_disrotv_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Trq_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0Clutch_disTrq_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Trq_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0Clutch_disTrq_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.i_TrqIn2Out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m0Clutch_disi_TrqIn2Out_Value;

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
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.GearNo =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1GearNo_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.GearNo_dis =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1GearNo_dis_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.Trq_DriveSrc_trg =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1Trq_DriveSrc_trg_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.i =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1i_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.rotv_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1rotv_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.rotv_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1rotv_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.Trq_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1Trq_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.Trq_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1Trq_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Pos =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1ClutchPos_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.rotv_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1Clutchrotv_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.rotv_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1Clutchrotv_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Trq_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1ClutchTrq_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Trq_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1ClutchTrq_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.i_TrqIn2Out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1Clutchi_TrqIn2Out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Pos =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1Clutch_disPos_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.rotv_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1Clutch_disrotv_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.rotv_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1Clutch_disrotv_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Trq_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1Clutch_disTrq_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Trq_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1Clutch_disTrq_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.i_TrqIn2Out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m1Clutch_disi_TrqIn2Out_Value;

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
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.GearNo =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2GearNo_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.GearNo_dis =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2GearNo_dis_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.Trq_DriveSrc_trg =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2Trq_DriveSrc_trg_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.i =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2i_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.rotv_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2rotv_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.rotv_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2rotv_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.Trq_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2Trq_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.Trq_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2Trq_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Pos =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2ClutchPos_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.rotv_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2Clutchrotv_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.rotv_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2Clutchrotv_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Trq_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2ClutchTrq_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Trq_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2ClutchTrq_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.i_TrqIn2Out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2Clutchi_TrqIn2Out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Pos =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2Clutch_disPos_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.rotv_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2Clutch_disrotv_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.rotv_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2Clutch_disrotv_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Trq_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2Clutch_disTrq_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Trq_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2Clutch_disTrq_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.i_TrqIn2Out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m2Clutch_disi_TrqIn2Out_Value;

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
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.GearNo =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3GearNo_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.GearNo_dis =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3GearNo_dis_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.Trq_DriveSrc_trg =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3Trq_DriveSrc_trg_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.i =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3i_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.rotv_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3rotv_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.rotv_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3rotv_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.Trq_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3Trq_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.Trq_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3Trq_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Pos =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3ClutchPos_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.rotv_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3Clutchrotv_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.rotv_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3Clutchrotv_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Trq_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3ClutchTrq_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Trq_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3ClutchTrq_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.i_TrqIn2Out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3Clutchi_TrqIn2Out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Pos =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3Clutch_disPos_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.rotv_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3Clutch_disrotv_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.rotv_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3Clutch_disrotv_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Trq_in =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3Clutch_disTrq_in_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Trq_out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3Clutch_disTrq_out_Value;
  RuleBasedTractionControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.i_TrqIn2Out =
    RuleBasedTractionControl_P.GearBoxM_OutGB_m3Clutch_disi_TrqIn2Out_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BattLVOut.AOC'
   *  Constant: '<S1>/BattLVOut.Current'
   *  Constant: '<S1>/BattLVOut.Energy'
   *  Constant: '<S1>/BattLVOut.Pwr_max'
   *  Constant: '<S1>/BattLVOut.SOC'
   *  Constant: '<S1>/BattLVOut.SOH'
   *  Constant: '<S1>/BattLVOut.Temp'
   */
  RuleBasedTractionControl_Y->ToCM.BattLVOut.SOC =
    RuleBasedTractionControl_P.BattLVOutSOC_Value;
  RuleBasedTractionControl_Y->ToCM.BattLVOut.SOH =
    RuleBasedTractionControl_P.BattLVOutSOH_Value;
  RuleBasedTractionControl_Y->ToCM.BattLVOut.Current =
    RuleBasedTractionControl_P.BattLVOutCurrent_Value;
  RuleBasedTractionControl_Y->ToCM.BattLVOut.AOC =
    RuleBasedTractionControl_P.BattLVOutAOC_Value;
  RuleBasedTractionControl_Y->ToCM.BattLVOut.Temp =
    RuleBasedTractionControl_P.BattLVOutTemp_Value;
  RuleBasedTractionControl_Y->ToCM.BattLVOut.Energy =
    RuleBasedTractionControl_P.BattLVOutEnergy_Value;
  RuleBasedTractionControl_Y->ToCM.BattLVOut.Pwr_max =
    RuleBasedTractionControl_P.BattLVOutPwr_max_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BattHVOut.AOC'
   *  Constant: '<S1>/BattHVOut.Current'
   *  Constant: '<S1>/BattHVOut.Energy'
   *  Constant: '<S1>/BattHVOut.Pwr_max'
   *  Constant: '<S1>/BattHVOut.SOC'
   *  Constant: '<S1>/BattHVOut.SOH'
   *  Constant: '<S1>/BattHVOut.Temp'
   */
  RuleBasedTractionControl_Y->ToCM.BattHVOut.SOC =
    RuleBasedTractionControl_P.BattHVOutSOC_Value;
  RuleBasedTractionControl_Y->ToCM.BattHVOut.SOH =
    RuleBasedTractionControl_P.BattHVOutSOH_Value;
  RuleBasedTractionControl_Y->ToCM.BattHVOut.Current =
    RuleBasedTractionControl_P.BattHVOutCurrent_Value;
  RuleBasedTractionControl_Y->ToCM.BattHVOut.AOC =
    RuleBasedTractionControl_P.BattHVOutAOC_Value;
  RuleBasedTractionControl_Y->ToCM.BattHVOut.Temp =
    RuleBasedTractionControl_P.BattHVOutTemp_Value;
  RuleBasedTractionControl_Y->ToCM.BattHVOut.Energy =
    RuleBasedTractionControl_P.BattHVOutEnergy_Value;
  RuleBasedTractionControl_Y->ToCM.BattHVOut.Pwr_max =
    RuleBasedTractionControl_P.BattHVOutPwr_max_Value;

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
  RuleBasedTractionControl_Y->ToCM.PwrSupplyOut.Pwr_LV =
    RuleBasedTractionControl_P.PwrSupplyOutPwr_LV_Value;
  RuleBasedTractionControl_Y->ToCM.PwrSupplyOut.Pwr_HV1 =
    RuleBasedTractionControl_P.PwrSupplyOutPwr_HV1_Value;
  RuleBasedTractionControl_Y->ToCM.PwrSupplyOut.Pwr_HV2 =
    RuleBasedTractionControl_P.PwrSupplyOutPwr_HV2_Value;
  RuleBasedTractionControl_Y->ToCM.PwrSupplyOut.Voltage_LV =
    RuleBasedTractionControl_P.PwrSupplyOutVoltage_LV_Value;
  RuleBasedTractionControl_Y->ToCM.PwrSupplyOut.Voltage_HV1 =
    RuleBasedTractionControl_P.PwrSupplyOutVoltage_HV1_Value;
  RuleBasedTractionControl_Y->ToCM.PwrSupplyOut.Voltage_HV2 =
    RuleBasedTractionControl_P.PwrSupplyOutVoltage_HV2_Value;
  RuleBasedTractionControl_Y->ToCM.PwrSupplyOut.Pwr_HV1toLV =
    RuleBasedTractionControl_P.PwrSupplyOutPwr_HV1toLV_Value;
  RuleBasedTractionControl_Y->ToCM.PwrSupplyOut.Pwr_HV1toHV2 =
    RuleBasedTractionControl_P.PwrSupplyOutPwr_HV1toHV2_Value;
  RuleBasedTractionControl_Y->ToCM.PwrSupplyOut.Pwr_HV1toLV_max =
    RuleBasedTractionControl_P.PwrSupplyOutPwr_HV1toLV_max_Value;
  RuleBasedTractionControl_Y->ToCM.PwrSupplyOut.Pwr_HV1toHV2_max =
    RuleBasedTractionControl_P.PwrSupplyOutPwr_HV1toHV2_max_Value;
  RuleBasedTractionControl_Y->ToCM.PwrSupplyOut.Eta_HV1toLV =
    RuleBasedTractionControl_P.PwrSupplyOutEta_HV1toLV_Value;
  RuleBasedTractionControl_Y->ToCM.PwrSupplyOut.Eta_HV1toHV2 =
    RuleBasedTractionControl_P.PwrSupplyOutEta_HV1toHV2_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Trq_Supp2BdyEng.rx'
   *  Constant: '<S1>/Trq_Supp2BdyEng.ry'
   */
  RuleBasedTractionControl_Y->ToCM.Trq_Supp2BdyEng.rx =
    RuleBasedTractionControl_P.Trq_Supp2BdyEngrx_Value;
  RuleBasedTractionControl_Y->ToCM.Trq_Supp2BdyEng.ry =
    RuleBasedTractionControl_P.Trq_Supp2BdyEngry_Value;

  /* If: '<S2>/If' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<S2>/Launch Control spd limit'
   *  Inport: '<Root>/FromCM'
   */
  if ((RuleBasedTractionControl_P.Constant_Value > 0.0) &&
      (RuleBasedTractionControl_U->FromCM.Velocity <
       RuleBasedTractionControl_P.LaunchControlspdlimit_Value)) {
    /* Outputs for IfAction SubSystem: '<S2>/Launch Control' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Abs: '<S6>/Abs' incorporates:
     *  Constant: '<S6>/GearRatio2'
     *  Product: '<S6>/Product'
     */
    rtb_uDLookupTable = fabs(RuleBasedTractionControl_U->FromCM.WheelIn.FL.rotv *
      RuleBasedTractionControl_P.GearRatio2_Value);

    /* Lookup_n-D: '<S6>/1-D Lookup Table1' */
    rtb_Abs1 = look1_binlxpw(rtb_uDLookupTable,
      RuleBasedTractionControl_P.uDLookupTable1_bp01Data,
      RuleBasedTractionControl_P.uDLookupTable1_tableData, 13U);

    /* Gain: '<S6>/Gain3' */
    rtb_uDLookupTable *= RuleBasedTractionControl_P.Gain3_Gain;

    /* Lookup_n-D: '<S6>/2-D Lookup Table1' */
    rtb_uDLookupTable = look2_binlxpw(RuleBasedTractionControl_U->FromCM.Gas,
      rtb_uDLookupTable, RuleBasedTractionControl_P.uDLookupTable1_bp01Data_b,
      RuleBasedTractionControl_P.uDLookupTable1_bp02Data,
      RuleBasedTractionControl_P.uDLookupTable1_tableData_f,
      RuleBasedTractionControl_P.uDLookupTable1_maxIndex, 6U);

    /* If: '<S6>/If' */
    if (rtb_Abs1 < rtb_uDLookupTable) {
      /* Outputs for IfAction SubSystem: '<S6>/If Action Subsystem' incorporates:
       *  ActionPort: '<S10>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem(rtb_Abs1,
        &RuleBasedTractionControl_B->IfActionSubsystem);

      /* End of Outputs for SubSystem: '<S6>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S6>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S11>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem(rtb_uDLookupTable,
        &RuleBasedTractionControl_B->IfActionSubsystem1);

      /* End of Outputs for SubSystem: '<S6>/If Action Subsystem1' */
    }

    /* End of If: '<S6>/If' */

    /* Product: '<S6>/Product1' incorporates:
     *  Constant: '<S6>/GearRatio2'
     *  Sum: '<S6>/Sum of Elements'
     */
    RuleBasedTractionControl_B->Product1 =
      (RuleBasedTractionControl_B->IfActionSubsystem1.In1 +
       RuleBasedTractionControl_B->IfActionSubsystem.In1) *
      RuleBasedTractionControl_P.GearRatio2_Value;

    /* Gain: '<S6>/Gain' */
    RuleBasedTractionControl_B->Gain_j = RuleBasedTractionControl_P.Gain_Gain *
      RuleBasedTractionControl_B->Product1;

    /* Abs: '<S7>/Abs' incorporates:
     *  Constant: '<S7>/GearRatio2'
     *  Product: '<S7>/Product'
     */
    rtb_uDLookupTable = fabs(RuleBasedTractionControl_U->FromCM.WheelIn.FR.rotv *
      RuleBasedTractionControl_P.GearRatio2_Value_b);

    /* Lookup_n-D: '<S7>/1-D Lookup Table1' */
    rtb_Abs1 = look1_binlxpw(rtb_uDLookupTable,
      RuleBasedTractionControl_P.uDLookupTable1_bp01Data_l,
      RuleBasedTractionControl_P.uDLookupTable1_tableData_p, 13U);

    /* Gain: '<S7>/Gain3' */
    rtb_uDLookupTable *= RuleBasedTractionControl_P.Gain3_Gain_f;

    /* Lookup_n-D: '<S7>/2-D Lookup Table1' */
    rtb_uDLookupTable = look2_binlxpw(RuleBasedTractionControl_U->FromCM.Gas,
      rtb_uDLookupTable, RuleBasedTractionControl_P.uDLookupTable1_bp01Data_o,
      RuleBasedTractionControl_P.uDLookupTable1_bp02Data_l,
      RuleBasedTractionControl_P.uDLookupTable1_tableData_h,
      RuleBasedTractionControl_P.uDLookupTable1_maxIndex_p, 6U);

    /* If: '<S7>/If' */
    if (rtb_Abs1 < rtb_uDLookupTable) {
      /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem' incorporates:
       *  ActionPort: '<S12>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem(rtb_Abs1,
        &RuleBasedTractionControl_B->IfActionSubsystem_n);

      /* End of Outputs for SubSystem: '<S7>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S13>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem(rtb_uDLookupTable,
        &RuleBasedTractionControl_B->IfActionSubsystem1_a);

      /* End of Outputs for SubSystem: '<S7>/If Action Subsystem1' */
    }

    /* End of If: '<S7>/If' */

    /* Product: '<S7>/Product1' incorporates:
     *  Constant: '<S7>/GearRatio2'
     *  Sum: '<S7>/Sum of Elements'
     */
    RuleBasedTractionControl_B->Product1_o =
      (RuleBasedTractionControl_B->IfActionSubsystem1_a.In1 +
       RuleBasedTractionControl_B->IfActionSubsystem_n.In1) *
      RuleBasedTractionControl_P.GearRatio2_Value_b;

    /* Gain: '<S7>/Gain' */
    RuleBasedTractionControl_B->Gain_n = RuleBasedTractionControl_P.Gain_Gain_d *
      RuleBasedTractionControl_B->Product1_o;

    /* Abs: '<S8>/Abs' incorporates:
     *  Constant: '<S8>/GearRatio2'
     *  Product: '<S8>/Product'
     */
    rtb_uDLookupTable = fabs(RuleBasedTractionControl_U->FromCM.WheelIn.RL.rotv *
      RuleBasedTractionControl_P.GearRatio2_Value_i);

    /* Lookup_n-D: '<S8>/1-D Lookup Table1' */
    rtb_Abs1 = look1_binlxpw(rtb_uDLookupTable,
      RuleBasedTractionControl_P.uDLookupTable1_bp01Data_a,
      RuleBasedTractionControl_P.uDLookupTable1_tableData_i, 9U);

    /* Gain: '<S8>/Gain3' */
    rtb_uDLookupTable *= RuleBasedTractionControl_P.Gain3_Gain_m;

    /* Lookup_n-D: '<S8>/2-D Lookup Table1' */
    rtb_uDLookupTable = look2_binlxpw(RuleBasedTractionControl_U->FromCM.Gas,
      rtb_uDLookupTable, RuleBasedTractionControl_P.uDLookupTable1_bp01Data_a0,
      RuleBasedTractionControl_P.uDLookupTable1_bp02Data_f,
      RuleBasedTractionControl_P.uDLookupTable1_tableData_ib,
      RuleBasedTractionControl_P.uDLookupTable1_maxIndex_k, 6U);

    /* If: '<S8>/If' */
    if (rtb_Abs1 < rtb_uDLookupTable) {
      /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem' incorporates:
       *  ActionPort: '<S14>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem(rtb_Abs1,
        &RuleBasedTractionControl_B->IfActionSubsystem_p);

      /* End of Outputs for SubSystem: '<S8>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S15>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem(rtb_uDLookupTable,
        &RuleBasedTractionControl_B->IfActionSubsystem1_c);

      /* End of Outputs for SubSystem: '<S8>/If Action Subsystem1' */
    }

    /* End of If: '<S8>/If' */

    /* Product: '<S8>/Product1' incorporates:
     *  Constant: '<S8>/GearRatio2'
     *  Sum: '<S8>/Sum of Elements'
     */
    RuleBasedTractionControl_B->Product1_l =
      (RuleBasedTractionControl_B->IfActionSubsystem1_c.In1 +
       RuleBasedTractionControl_B->IfActionSubsystem_p.In1) *
      RuleBasedTractionControl_P.GearRatio2_Value_i;

    /* Gain: '<S8>/Gain' */
    RuleBasedTractionControl_B->Gain_h = RuleBasedTractionControl_P.Gain_Gain_f *
      RuleBasedTractionControl_B->Product1_l;

    /* Abs: '<S9>/Abs' incorporates:
     *  Constant: '<S9>/GearRatio2'
     *  Product: '<S9>/Product'
     */
    rtb_uDLookupTable = fabs(RuleBasedTractionControl_U->FromCM.WheelIn.RR.rotv *
      RuleBasedTractionControl_P.GearRatio2_Value_f);

    /* Lookup_n-D: '<S9>/1-D Lookup Table1' */
    rtb_Abs1 = look1_binlxpw(rtb_uDLookupTable,
      RuleBasedTractionControl_P.uDLookupTable1_bp01Data_h,
      RuleBasedTractionControl_P.uDLookupTable1_tableData_ib0, 9U);

    /* Gain: '<S9>/Gain3' */
    rtb_uDLookupTable *= RuleBasedTractionControl_P.Gain3_Gain_o;

    /* Lookup_n-D: '<S9>/2-D Lookup Table1' */
    rtb_uDLookupTable = look2_binlxpw(RuleBasedTractionControl_U->FromCM.Gas,
      rtb_uDLookupTable, RuleBasedTractionControl_P.uDLookupTable1_bp01Data_m,
      RuleBasedTractionControl_P.uDLookupTable1_bp02Data_e,
      RuleBasedTractionControl_P.uDLookupTable1_tableData_hf,
      RuleBasedTractionControl_P.uDLookupTable1_maxIndex_a, 6U);

    /* If: '<S9>/If' */
    if (rtb_Abs1 < rtb_uDLookupTable) {
      /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem' incorporates:
       *  ActionPort: '<S16>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem(rtb_Abs1,
        &RuleBasedTractionControl_B->IfActionSubsystem_nx);

      /* End of Outputs for SubSystem: '<S9>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S17>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem(rtb_uDLookupTable,
        &RuleBasedTractionControl_B->IfActionSubsystem1_l);

      /* End of Outputs for SubSystem: '<S9>/If Action Subsystem1' */
    }

    /* End of If: '<S9>/If' */

    /* Product: '<S9>/Product1' incorporates:
     *  Constant: '<S9>/GearRatio2'
     *  Sum: '<S9>/Sum of Elements'
     */
    RuleBasedTractionControl_B->Product1_m =
      (RuleBasedTractionControl_B->IfActionSubsystem1_l.In1 +
       RuleBasedTractionControl_B->IfActionSubsystem_nx.In1) *
      RuleBasedTractionControl_P.GearRatio2_Value_f;

    /* Gain: '<S9>/Gain' */
    RuleBasedTractionControl_B->Gain_a = RuleBasedTractionControl_P.Gain_Gain_j *
      RuleBasedTractionControl_B->Product1_m;

    /* End of Outputs for SubSystem: '<S2>/Launch Control' */
  } else {
    /* Outputs for IfAction SubSystem: '<S2>/Traction Control' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Lookup_n-D: '<S19>/2-D Lookup Table' incorporates:
     *  Abs: '<S19>/Abs'
     *  Constant: '<S19>/GearRatio'
     *  Gain: '<S19>/Gain1'
     *  Product: '<S19>/Product'
     */
    rtb_uDLookupTable = look2_binlxpw(RuleBasedTractionControl_U->FromCM.Gas,
      fabs(RuleBasedTractionControl_U->FromCM.WheelIn.RL.rotv *
           RuleBasedTractionControl_P.GearRatio_Value) *
      RuleBasedTractionControl_P.Gain1_Gain,
      RuleBasedTractionControl_P.uDLookupTable_bp01Data,
      RuleBasedTractionControl_P.uDLookupTable_bp02Data,
      RuleBasedTractionControl_P.uDLookupTable_tableData,
      RuleBasedTractionControl_P.uDLookupTable_maxIndex, 6U);

    /* S-Function (read_dict): '<S19>/Read CM Dict' */
    {
      tDDictEntry *e;
      e = (tDDictEntry *)RuleBasedTractionControl_DW->ReadCMDict_PWORK.Entry;
      if (!RuleBasedTractionControl_DW->ReadCMDict_IWORK.Checked) {
        RuleBasedTractionControl_DW->ReadCMDict_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'RuleBasedTractionControl'");
      }

      RuleBasedTractionControl_B->ReadCMDict = e->GetFunc(e->Var);
    }

    /* Abs: '<S19>/Abs1' */
    rtb_Abs1 = fabs(RuleBasedTractionControl_B->ReadCMDict);

    /* If: '<S19>/If' incorporates:
     *  Constant: '<S19>/alpha2'
     *  Constant: '<S19>/alpha3'
     *  Constant: '<S19>/alpha4'
     *  Constant: '<S19>/alpha5'
     *  Constant: '<S19>/slip2'
     *  Constant: '<S19>/slip3'
     *  Constant: '<S19>/slip4'
     *  Constant: '<S19>/slip5'
     */
    if (rtb_Abs1 < RuleBasedTractionControl_P.slip2_Value) {
      /* Outputs for IfAction SubSystem: '<S19>/If Action Subsystem' incorporates:
       *  ActionPort: '<S23>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem_o(rtb_Abs1,
        RuleBasedTractionControl_P.alpha2_Value, rtb_uDLookupTable,
        &RuleBasedTractionControl_B->IfActionSubsystem_o);

      /* End of Outputs for SubSystem: '<S19>/If Action Subsystem' */
    } else if (rtb_Abs1 > RuleBasedTractionControl_P.slip5_Value) {
      /* Outputs for IfAction SubSystem: '<S19>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S26>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem3(rtb_Abs1,
        RuleBasedTractionControl_P.alpha5_Value, rtb_uDLookupTable,
        &RuleBasedTractionControl_B->IfActionSubsystem3,
        &RuleBasedTractionControl_P.IfActionSubsystem3);

      /* End of Outputs for SubSystem: '<S19>/If Action Subsystem3' */
    } else if (rtb_Abs1 > RuleBasedTractionControl_P.slip4_Value) {
      /* Outputs for IfAction SubSystem: '<S19>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S25>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem3(rtb_Abs1,
        RuleBasedTractionControl_P.alpha4_Value, rtb_uDLookupTable,
        &RuleBasedTractionControl_B->IfActionSubsystem2,
        &RuleBasedTractionControl_P.IfActionSubsystem2);

      /* End of Outputs for SubSystem: '<S19>/If Action Subsystem2' */
    } else {
      if (rtb_Abs1 > RuleBasedTractionControl_P.slip3_Value) {
        /* Outputs for IfAction SubSystem: '<S19>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S24>/Action Port'
         */
        RuleBasedTractionControl_IfActionSubsystem3(rtb_Abs1,
          RuleBasedTractionControl_P.alpha3_Value, rtb_uDLookupTable,
          &RuleBasedTractionControl_B->IfActionSubsystem1_f,
          &RuleBasedTractionControl_P.IfActionSubsystem1_f);

        /* End of Outputs for SubSystem: '<S19>/If Action Subsystem1' */
      }
    }

    /* End of If: '<S19>/If' */

    /* Product: '<S19>/Product2' incorporates:
     *  Constant: '<S19>/GearRatio'
     *  Sum: '<S19>/Add'
     *  Sum: '<S19>/Sum'
     */
    RuleBasedTractionControl_B->Product2 =
      ((((RuleBasedTractionControl_B->IfActionSubsystem_o.Product +
          RuleBasedTractionControl_B->IfActionSubsystem1_f.Product) +
         RuleBasedTractionControl_B->IfActionSubsystem2.Product) +
        RuleBasedTractionControl_B->IfActionSubsystem3.Product) +
       rtb_uDLookupTable) * RuleBasedTractionControl_P.GearRatio_Value;

    /* Gain: '<S19>/Gain' */
    RuleBasedTractionControl_B->Gain = RuleBasedTractionControl_P.Gain_Gain_m *
      RuleBasedTractionControl_B->Product2;

    /* Lookup_n-D: '<S20>/2-D Lookup Table' incorporates:
     *  Abs: '<S20>/Abs'
     *  Constant: '<S20>/GearRatio'
     *  Gain: '<S20>/Gain1'
     *  Product: '<S20>/Product'
     */
    rtb_uDLookupTable = look2_binlxpw(RuleBasedTractionControl_U->FromCM.Gas,
      fabs(RuleBasedTractionControl_U->FromCM.WheelIn.FR.rotv *
           RuleBasedTractionControl_P.GearRatio_Value_h) *
      RuleBasedTractionControl_P.Gain1_Gain_d,
      RuleBasedTractionControl_P.uDLookupTable_bp01Data_h,
      RuleBasedTractionControl_P.uDLookupTable_bp02Data_i,
      RuleBasedTractionControl_P.uDLookupTable_tableData_i,
      RuleBasedTractionControl_P.uDLookupTable_maxIndex_p, 6U);

    /* S-Function (read_dict): '<S20>/Read CM Dict' */
    {
      tDDictEntry *e;
      e = (tDDictEntry *)RuleBasedTractionControl_DW->ReadCMDict_PWORK_d.Entry;
      if (!RuleBasedTractionControl_DW->ReadCMDict_IWORK_e.Checked) {
        RuleBasedTractionControl_DW->ReadCMDict_IWORK_e.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'RuleBasedTractionControl'");
      }

      RuleBasedTractionControl_B->ReadCMDict_o = e->GetFunc(e->Var);
    }

    /* Abs: '<S20>/Abs1' */
    rtb_Abs1 = fabs(RuleBasedTractionControl_B->ReadCMDict_o);

    /* If: '<S20>/If' incorporates:
     *  Constant: '<S20>/alpha2'
     *  Constant: '<S20>/alpha3'
     *  Constant: '<S20>/alpha4'
     *  Constant: '<S20>/alpha5'
     *  Constant: '<S20>/slip2'
     *  Constant: '<S20>/slip3'
     *  Constant: '<S20>/slip4'
     *  Constant: '<S20>/slip5'
     */
    if (rtb_Abs1 < RuleBasedTractionControl_P.slip2_Value_o) {
      /* Outputs for IfAction SubSystem: '<S20>/If Action Subsystem' incorporates:
       *  ActionPort: '<S27>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem_o(rtb_Abs1,
        RuleBasedTractionControl_P.alpha2_Value_c, rtb_uDLookupTable,
        &RuleBasedTractionControl_B->IfActionSubsystem_d);

      /* End of Outputs for SubSystem: '<S20>/If Action Subsystem' */
    } else if (rtb_Abs1 > RuleBasedTractionControl_P.slip5_Value_n) {
      /* Outputs for IfAction SubSystem: '<S20>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S30>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem3(rtb_Abs1,
        RuleBasedTractionControl_P.alpha5_Value_g, rtb_uDLookupTable,
        &RuleBasedTractionControl_B->IfActionSubsystem3_g,
        &RuleBasedTractionControl_P.IfActionSubsystem3_g);

      /* End of Outputs for SubSystem: '<S20>/If Action Subsystem3' */
    } else if (rtb_Abs1 > RuleBasedTractionControl_P.slip4_Value_g) {
      /* Outputs for IfAction SubSystem: '<S20>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S29>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem3(rtb_Abs1,
        RuleBasedTractionControl_P.alpha4_Value_e, rtb_uDLookupTable,
        &RuleBasedTractionControl_B->IfActionSubsystem2_b,
        &RuleBasedTractionControl_P.IfActionSubsystem2_b);

      /* End of Outputs for SubSystem: '<S20>/If Action Subsystem2' */
    } else {
      if (rtb_Abs1 > RuleBasedTractionControl_P.slip3_Value_p) {
        /* Outputs for IfAction SubSystem: '<S20>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S28>/Action Port'
         */
        RuleBasedTractionControl_IfActionSubsystem3(rtb_Abs1,
          RuleBasedTractionControl_P.alpha3_Value_f, rtb_uDLookupTable,
          &RuleBasedTractionControl_B->IfActionSubsystem1_j,
          &RuleBasedTractionControl_P.IfActionSubsystem1_j);

        /* End of Outputs for SubSystem: '<S20>/If Action Subsystem1' */
      }
    }

    /* End of If: '<S20>/If' */

    /* Product: '<S20>/Product2' incorporates:
     *  Constant: '<S20>/GearRatio'
     *  Sum: '<S20>/Add'
     *  Sum: '<S20>/Sum'
     */
    RuleBasedTractionControl_B->Product2_p =
      ((((RuleBasedTractionControl_B->IfActionSubsystem_d.Product +
          RuleBasedTractionControl_B->IfActionSubsystem1_j.Product) +
         RuleBasedTractionControl_B->IfActionSubsystem2_b.Product) +
        RuleBasedTractionControl_B->IfActionSubsystem3_g.Product) +
       rtb_uDLookupTable) * RuleBasedTractionControl_P.GearRatio_Value_h;

    /* Gain: '<S20>/Gain' */
    RuleBasedTractionControl_B->Gain_l = RuleBasedTractionControl_P.Gain_Gain_m2
      * RuleBasedTractionControl_B->Product2_p;

    /* Lookup_n-D: '<S21>/2-D Lookup Table' incorporates:
     *  Abs: '<S21>/Abs'
     *  Constant: '<S21>/GearRatio'
     *  Gain: '<S21>/Gain1'
     *  Product: '<S21>/Product'
     */
    rtb_uDLookupTable = look2_binlxpw(RuleBasedTractionControl_U->FromCM.Gas,
      fabs(RuleBasedTractionControl_U->FromCM.WheelIn.RR.rotv *
           RuleBasedTractionControl_P.GearRatio_Value_hg) *
      RuleBasedTractionControl_P.Gain1_Gain_i,
      RuleBasedTractionControl_P.uDLookupTable_bp01Data_g,
      RuleBasedTractionControl_P.uDLookupTable_bp02Data_b,
      RuleBasedTractionControl_P.uDLookupTable_tableData_iw,
      RuleBasedTractionControl_P.uDLookupTable_maxIndex_g, 6U);

    /* S-Function (read_dict): '<S21>/Read CM Dict' */
    {
      tDDictEntry *e;
      e = (tDDictEntry *)RuleBasedTractionControl_DW->ReadCMDict_PWORK_f.Entry;
      if (!RuleBasedTractionControl_DW->ReadCMDict_IWORK_h.Checked) {
        RuleBasedTractionControl_DW->ReadCMDict_IWORK_h.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'RuleBasedTractionControl'");
      }

      RuleBasedTractionControl_B->ReadCMDict_j = e->GetFunc(e->Var);
    }

    /* Abs: '<S21>/Abs1' */
    rtb_Abs1 = fabs(RuleBasedTractionControl_B->ReadCMDict_j);

    /* If: '<S21>/If' incorporates:
     *  Constant: '<S21>/alpha2'
     *  Constant: '<S21>/alpha3'
     *  Constant: '<S21>/alpha4'
     *  Constant: '<S21>/alpha5'
     *  Constant: '<S21>/slip2'
     *  Constant: '<S21>/slip3'
     *  Constant: '<S21>/slip4'
     *  Constant: '<S21>/slip5'
     */
    if (rtb_Abs1 < RuleBasedTractionControl_P.slip2_Value_om) {
      /* Outputs for IfAction SubSystem: '<S21>/If Action Subsystem' incorporates:
       *  ActionPort: '<S31>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem_o(rtb_Abs1,
        RuleBasedTractionControl_P.alpha2_Value_d, rtb_uDLookupTable,
        &RuleBasedTractionControl_B->IfActionSubsystem_m);

      /* End of Outputs for SubSystem: '<S21>/If Action Subsystem' */
    } else if (rtb_Abs1 > RuleBasedTractionControl_P.slip5_Value_p) {
      /* Outputs for IfAction SubSystem: '<S21>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S34>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem3(rtb_Abs1,
        RuleBasedTractionControl_P.alpha5_Value_gt, rtb_uDLookupTable,
        &RuleBasedTractionControl_B->IfActionSubsystem3_o,
        &RuleBasedTractionControl_P.IfActionSubsystem3_o);

      /* End of Outputs for SubSystem: '<S21>/If Action Subsystem3' */
    } else if (rtb_Abs1 > RuleBasedTractionControl_P.slip4_Value_c) {
      /* Outputs for IfAction SubSystem: '<S21>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S33>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem3(rtb_Abs1,
        RuleBasedTractionControl_P.alpha4_Value_c, rtb_uDLookupTable,
        &RuleBasedTractionControl_B->IfActionSubsystem2_l,
        &RuleBasedTractionControl_P.IfActionSubsystem2_l);

      /* End of Outputs for SubSystem: '<S21>/If Action Subsystem2' */
    } else {
      if (rtb_Abs1 > RuleBasedTractionControl_P.slip3_Value_b) {
        /* Outputs for IfAction SubSystem: '<S21>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S32>/Action Port'
         */
        RuleBasedTractionControl_IfActionSubsystem3(rtb_Abs1,
          RuleBasedTractionControl_P.alpha3_Value_h, rtb_uDLookupTable,
          &RuleBasedTractionControl_B->IfActionSubsystem1_d,
          &RuleBasedTractionControl_P.IfActionSubsystem1_d);

        /* End of Outputs for SubSystem: '<S21>/If Action Subsystem1' */
      }
    }

    /* End of If: '<S21>/If' */

    /* Product: '<S21>/Product2' incorporates:
     *  Constant: '<S21>/GearRatio'
     *  Sum: '<S21>/Add'
     *  Sum: '<S21>/Sum'
     */
    RuleBasedTractionControl_B->Product2_a =
      ((((RuleBasedTractionControl_B->IfActionSubsystem_m.Product +
          RuleBasedTractionControl_B->IfActionSubsystem1_d.Product) +
         RuleBasedTractionControl_B->IfActionSubsystem2_l.Product) +
        RuleBasedTractionControl_B->IfActionSubsystem3_o.Product) +
       rtb_uDLookupTable) * RuleBasedTractionControl_P.GearRatio_Value_hg;

    /* Gain: '<S21>/Gain' */
    RuleBasedTractionControl_B->Gain_f = RuleBasedTractionControl_P.Gain_Gain_a *
      RuleBasedTractionControl_B->Product2_a;

    /* Lookup_n-D: '<S22>/2-D Lookup Table' incorporates:
     *  Abs: '<S22>/Abs'
     *  Constant: '<S22>/GearRatio'
     *  Gain: '<S22>/Gain1'
     *  Product: '<S22>/Product'
     */
    rtb_uDLookupTable = look2_binlxpw(RuleBasedTractionControl_U->FromCM.Gas,
      fabs(RuleBasedTractionControl_U->FromCM.WheelIn.FL.rotv *
           RuleBasedTractionControl_P.GearRatio_Value_c) *
      RuleBasedTractionControl_P.Gain1_Gain_f,
      RuleBasedTractionControl_P.uDLookupTable_bp01Data_g5,
      RuleBasedTractionControl_P.uDLookupTable_bp02Data_p,
      RuleBasedTractionControl_P.uDLookupTable_tableData_c,
      RuleBasedTractionControl_P.uDLookupTable_maxIndex_i, 6U);

    /* S-Function (read_dict): '<S22>/Read CM Dict' */
    {
      tDDictEntry *e;
      e = (tDDictEntry *)RuleBasedTractionControl_DW->ReadCMDict_PWORK_i.Entry;
      if (!RuleBasedTractionControl_DW->ReadCMDict_IWORK_eu.Checked) {
        RuleBasedTractionControl_DW->ReadCMDict_IWORK_eu.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'RuleBasedTractionControl'");
      }

      RuleBasedTractionControl_B->ReadCMDict_k = e->GetFunc(e->Var);
    }

    /* Abs: '<S22>/Abs1' */
    rtb_Abs1 = fabs(RuleBasedTractionControl_B->ReadCMDict_k);

    /* If: '<S22>/If' incorporates:
     *  Constant: '<S22>/alpha2'
     *  Constant: '<S22>/alpha3'
     *  Constant: '<S22>/alpha4'
     *  Constant: '<S22>/alpha5'
     *  Constant: '<S22>/slip2'
     *  Constant: '<S22>/slip3'
     *  Constant: '<S22>/slip4'
     *  Constant: '<S22>/slip5'
     */
    if (rtb_Abs1 < RuleBasedTractionControl_P.slip2_Value_d) {
      /* Outputs for IfAction SubSystem: '<S22>/If Action Subsystem' incorporates:
       *  ActionPort: '<S35>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem_o(rtb_Abs1,
        RuleBasedTractionControl_P.alpha2_Value_a, rtb_uDLookupTable,
        &RuleBasedTractionControl_B->IfActionSubsystem_nm);

      /* End of Outputs for SubSystem: '<S22>/If Action Subsystem' */
    } else if (rtb_Abs1 > RuleBasedTractionControl_P.slip5_Value_k) {
      /* Outputs for IfAction SubSystem: '<S22>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S38>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem3(rtb_Abs1,
        RuleBasedTractionControl_P.alpha5_Value_e, rtb_uDLookupTable,
        &RuleBasedTractionControl_B->IfActionSubsystem3_m,
        &RuleBasedTractionControl_P.IfActionSubsystem3_m);

      /* End of Outputs for SubSystem: '<S22>/If Action Subsystem3' */
    } else if (rtb_Abs1 > RuleBasedTractionControl_P.slip4_Value_f) {
      /* Outputs for IfAction SubSystem: '<S22>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S37>/Action Port'
       */
      RuleBasedTractionControl_IfActionSubsystem3(rtb_Abs1,
        RuleBasedTractionControl_P.alpha4_Value_g, rtb_uDLookupTable,
        &RuleBasedTractionControl_B->IfActionSubsystem2_ly,
        &RuleBasedTractionControl_P.IfActionSubsystem2_ly);

      /* End of Outputs for SubSystem: '<S22>/If Action Subsystem2' */
    } else {
      if (rtb_Abs1 > RuleBasedTractionControl_P.slip3_Value_c) {
        /* Outputs for IfAction SubSystem: '<S22>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S36>/Action Port'
         */
        RuleBasedTractionControl_IfActionSubsystem3(rtb_Abs1,
          RuleBasedTractionControl_P.alpha3_Value_b, rtb_uDLookupTable,
          &RuleBasedTractionControl_B->IfActionSubsystem1_m,
          &RuleBasedTractionControl_P.IfActionSubsystem1_m);

        /* End of Outputs for SubSystem: '<S22>/If Action Subsystem1' */
      }
    }

    /* End of If: '<S22>/If' */

    /* Product: '<S22>/Product2' incorporates:
     *  Constant: '<S22>/GearRatio'
     *  Sum: '<S22>/Add'
     *  Sum: '<S22>/Sum'
     */
    RuleBasedTractionControl_B->Product2_n =
      ((((RuleBasedTractionControl_B->IfActionSubsystem_nm.Product +
          RuleBasedTractionControl_B->IfActionSubsystem1_m.Product) +
         RuleBasedTractionControl_B->IfActionSubsystem2_ly.Product) +
        RuleBasedTractionControl_B->IfActionSubsystem3_m.Product) +
       rtb_uDLookupTable) * RuleBasedTractionControl_P.GearRatio_Value_c;

    /* Gain: '<S22>/Gain' */
    RuleBasedTractionControl_B->Gain_i = RuleBasedTractionControl_P.Gain_Gain_k *
      RuleBasedTractionControl_B->Product2_n;

    /* End of Outputs for SubSystem: '<S2>/Traction Control' */
  }

  /* End of If: '<S2>/If' */

  /* Sum: '<S2>/Sum' */
  RuleBasedTractionControl_Y->ToCM.WheelOut.FL.Trq_Drive =
    RuleBasedTractionControl_B->Product1 +
    RuleBasedTractionControl_B->Product2_n;

  /* Sum: '<S2>/Sum1' */
  RuleBasedTractionControl_Y->ToCM.WheelOut.FL.Trq_Supp2WC =
    RuleBasedTractionControl_B->Gain_j + RuleBasedTractionControl_B->Gain_i;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.FL.Inert_in'
   */
  RuleBasedTractionControl_Y->ToCM.WheelOut.FL.Inert_in =
    RuleBasedTractionControl_P.WheelOutFLInert_in_Value;

  /* Sum: '<S2>/Sum2' */
  RuleBasedTractionControl_Y->ToCM.WheelOut.FR.Trq_Drive =
    RuleBasedTractionControl_B->Product1_o +
    RuleBasedTractionControl_B->Product2_p;

  /* Sum: '<S2>/Sum3' */
  RuleBasedTractionControl_Y->ToCM.WheelOut.FR.Trq_Supp2WC =
    RuleBasedTractionControl_B->Gain_n + RuleBasedTractionControl_B->Gain_l;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.FR.Inert_in'
   */
  RuleBasedTractionControl_Y->ToCM.WheelOut.FR.Inert_in =
    RuleBasedTractionControl_P.WheelOutFRInert_in_Value;

  /* Sum: '<S2>/Sum4' */
  RuleBasedTractionControl_Y->ToCM.WheelOut.RL.Trq_Drive =
    RuleBasedTractionControl_B->Product1_l +
    RuleBasedTractionControl_B->Product2;

  /* Sum: '<S2>/Sum5' */
  RuleBasedTractionControl_Y->ToCM.WheelOut.RL.Trq_Supp2WC =
    RuleBasedTractionControl_B->Gain_h + RuleBasedTractionControl_B->Gain;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.RL.Inert_in'
   */
  RuleBasedTractionControl_Y->ToCM.WheelOut.RL.Inert_in =
    RuleBasedTractionControl_P.WheelOutRLInert_in_Value;

  /* Sum: '<S2>/Sum6' */
  RuleBasedTractionControl_Y->ToCM.WheelOut.RR.Trq_Drive =
    RuleBasedTractionControl_B->Product1_m +
    RuleBasedTractionControl_B->Product2_a;

  /* Sum: '<S2>/Sum7' */
  RuleBasedTractionControl_Y->ToCM.WheelOut.RR.Trq_Supp2WC =
    RuleBasedTractionControl_B->Gain_a + RuleBasedTractionControl_B->Gain_f;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.RR.Inert_in'
   */
  RuleBasedTractionControl_Y->ToCM.WheelOut.RR.Inert_in =
    RuleBasedTractionControl_P.WheelOutRRInert_in_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/PowerDelta.Diffs'
   *  Constant: '<S1>/PowerDelta.Inert'
   *  Constant: '<S1>/PowerDelta.Inert_DL'
   *  Constant: '<S1>/PowerDelta.PlanetGear'
   *  Constant: '<S1>/PowerDelta.PowerSupply'
   *  Constant: '<S1>/PowerDelta.Shafts'
   *  Constant: '<S1>/PowerDelta.Spring_DL'
   */
  RuleBasedTractionControl_Y->ToCM.PowerDelta.PlanetGear =
    RuleBasedTractionControl_P.PowerDeltaPlanetGear_Value;
  RuleBasedTractionControl_Y->ToCM.PowerDelta.Diffs =
    RuleBasedTractionControl_P.PowerDeltaDiffs_Value;
  RuleBasedTractionControl_Y->ToCM.PowerDelta.Shafts =
    RuleBasedTractionControl_P.PowerDeltaShafts_Value;
  RuleBasedTractionControl_Y->ToCM.PowerDelta.Spring_DL =
    RuleBasedTractionControl_P.PowerDeltaSpring_DL_Value;
  RuleBasedTractionControl_Y->ToCM.PowerDelta.Inert_DL =
    RuleBasedTractionControl_P.PowerDeltaInert_DL_Value;
  RuleBasedTractionControl_Y->ToCM.PowerDelta.Inert =
    RuleBasedTractionControl_P.PowerDeltaInert_Value;
  RuleBasedTractionControl_Y->ToCM.PowerDelta.PowerSupply =
    RuleBasedTractionControl_P.PowerDeltaPowerSupply_Value;

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
  RuleBasedTractionControl_Y->ToCM.ECU_Status =
    RuleBasedTractionControl_P.ECU_Status_Value;
  RuleBasedTractionControl_Y->ToCM.MCU_Status =
    RuleBasedTractionControl_P.MCU_Status_Value;
  RuleBasedTractionControl_Y->ToCM.TCU_Status =
    RuleBasedTractionControl_P.TCU_Status_Value;
  RuleBasedTractionControl_Y->ToCM.BCU_Status =
    RuleBasedTractionControl_P.BCU_Status_Value;
  RuleBasedTractionControl_Y->ToCM.Trq_Supp2Bdy1.rx =
    RuleBasedTractionControl_P.Trq_Supp2Bdy1rx_Value;
  RuleBasedTractionControl_Y->ToCM.Trq_Supp2Bdy1.ry =
    RuleBasedTractionControl_P.Trq_Supp2Bdy1ry_Value;
  RuleBasedTractionControl_Y->ToCM.Trq_Supp2Bdy1.rz =
    RuleBasedTractionControl_P.Trq_Supp2Bdy1rz_Value;
  RuleBasedTractionControl_Y->ToCM.Trq_Supp2Bdy1B.rx =
    RuleBasedTractionControl_P.Trq_Supp2Bdy1Brx_Value;
  RuleBasedTractionControl_Y->ToCM.Trq_Supp2Bdy1B.ry =
    RuleBasedTractionControl_P.Trq_Supp2Bdy1Bry_Value;
  RuleBasedTractionControl_Y->ToCM.Trq_Supp2Bdy1B.rz =
    RuleBasedTractionControl_P.Trq_Supp2Bdy1Brz_Value;
  RuleBasedTractionControl_Y->ToCM.DL_iDiff_mean =
    RuleBasedTractionControl_P.DL_iDiff_mean_Value;
}

/* Model initialize function */
void RuleBasedTractionControl_initialize(RT_MODEL_RuleBasedTractionControl_T *
  const RuleBasedTractionControl_M)
{
  DW_RuleBasedTractionControl_T *RuleBasedTractionControl_DW =
    ((DW_RuleBasedTractionControl_T *) RuleBasedTractionControl_M->dwork);
  B_RuleBasedTractionControl_T *RuleBasedTractionControl_B =
    ((B_RuleBasedTractionControl_T *) RuleBasedTractionControl_M->blockIO);

  /* Start for IfAction SubSystem: '<S2>/Traction Control' */

  /* Start for S-Function (read_dict): '<S19>/Read CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Car.LongSlipRL", NULL);
    RuleBasedTractionControl_DW->ReadCMDict_IWORK.Checked = 0;
    RuleBasedTractionControl_DW->ReadCMDict_PWORK.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (read_dict): '<S20>/Read CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Car.LongSlipFR", NULL);
    RuleBasedTractionControl_DW->ReadCMDict_IWORK_e.Checked = 0;
    RuleBasedTractionControl_DW->ReadCMDict_PWORK_d.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (read_dict): '<S21>/Read CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Car.LongSlipRR", NULL);
    RuleBasedTractionControl_DW->ReadCMDict_IWORK_h.Checked = 0;
    RuleBasedTractionControl_DW->ReadCMDict_PWORK_f.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (read_dict): '<S22>/Read CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Car.LongSlipFL", NULL);
    RuleBasedTractionControl_DW->ReadCMDict_IWORK_eu.Checked = 0;
    RuleBasedTractionControl_DW->ReadCMDict_PWORK_i.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* End of Start for SubSystem: '<S2>/Traction Control' */

  /* SystemInitialize for IfAction SubSystem: '<S2>/Launch Control' */
  /* SystemInitialize for IfAction SubSystem: '<S6>/If Action Subsystem' */
  RuleBasedTractionControl_IfActionSubsystem_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem,
     &RuleBasedTractionControl_P.IfActionSubsystem);

  /* End of SystemInitialize for SubSystem: '<S6>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S6>/If Action Subsystem1' */
  RuleBasedTractionControl_IfActionSubsystem_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem1,
     &RuleBasedTractionControl_P.IfActionSubsystem1);

  /* End of SystemInitialize for SubSystem: '<S6>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S7>/If Action Subsystem' */
  RuleBasedTractionControl_IfActionSubsystem_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem_n,
     &RuleBasedTractionControl_P.IfActionSubsystem_n);

  /* End of SystemInitialize for SubSystem: '<S7>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S7>/If Action Subsystem1' */
  RuleBasedTractionControl_IfActionSubsystem_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem1_a,
     &RuleBasedTractionControl_P.IfActionSubsystem1_a);

  /* End of SystemInitialize for SubSystem: '<S7>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S8>/If Action Subsystem' */
  RuleBasedTractionControl_IfActionSubsystem_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem_p,
     &RuleBasedTractionControl_P.IfActionSubsystem_p);

  /* End of SystemInitialize for SubSystem: '<S8>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S8>/If Action Subsystem1' */
  RuleBasedTractionControl_IfActionSubsystem_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem1_c,
     &RuleBasedTractionControl_P.IfActionSubsystem1_c);

  /* End of SystemInitialize for SubSystem: '<S8>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S9>/If Action Subsystem' */
  RuleBasedTractionControl_IfActionSubsystem_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem_nx,
     &RuleBasedTractionControl_P.IfActionSubsystem_nx);

  /* End of SystemInitialize for SubSystem: '<S9>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S9>/If Action Subsystem1' */
  RuleBasedTractionControl_IfActionSubsystem_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem1_l,
     &RuleBasedTractionControl_P.IfActionSubsystem1_l);

  /* End of SystemInitialize for SubSystem: '<S9>/If Action Subsystem1' */

  /* SystemInitialize for Outport: '<S3>/FL trq' */
  RuleBasedTractionControl_B->Product1 = RuleBasedTractionControl_P.FLtrq_Y0;

  /* SystemInitialize for Outport: '<S3>/FL trq inv' */
  RuleBasedTractionControl_B->Gain_j = RuleBasedTractionControl_P.FLtrqinv_Y0;

  /* SystemInitialize for Outport: '<S3>/FR trq' */
  RuleBasedTractionControl_B->Product1_o = RuleBasedTractionControl_P.FRtrq_Y0;

  /* SystemInitialize for Outport: '<S3>/FR trq inv' */
  RuleBasedTractionControl_B->Gain_n = RuleBasedTractionControl_P.FRtrqinv_Y0;

  /* SystemInitialize for Outport: '<S3>/RL trq' */
  RuleBasedTractionControl_B->Product1_l = RuleBasedTractionControl_P.RLtrq_Y0;

  /* SystemInitialize for Outport: '<S3>/RL trq inv' */
  RuleBasedTractionControl_B->Gain_h = RuleBasedTractionControl_P.RLtrqinv_Y0;

  /* SystemInitialize for Outport: '<S3>/RR trq' */
  RuleBasedTractionControl_B->Product1_m = RuleBasedTractionControl_P.RRtrq_Y0;

  /* SystemInitialize for Outport: '<S3>/RR trq inv' */
  RuleBasedTractionControl_B->Gain_a = RuleBasedTractionControl_P.RRtrqinv_Y0;

  /* End of SystemInitialize for SubSystem: '<S2>/Launch Control' */

  /* SystemInitialize for IfAction SubSystem: '<S2>/Traction Control' */
  /* SystemInitialize for IfAction SubSystem: '<S19>/If Action Subsystem' */
  RuleBasedTractionControl_IfActionSubsystem_j_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem_o,
     &RuleBasedTractionControl_P.IfActionSubsystem_o);

  /* End of SystemInitialize for SubSystem: '<S19>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S19>/If Action Subsystem3' */
  RuleBasedTractionControl_IfActionSubsystem3_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem3,
     &RuleBasedTractionControl_P.IfActionSubsystem3);

  /* End of SystemInitialize for SubSystem: '<S19>/If Action Subsystem3' */

  /* SystemInitialize for IfAction SubSystem: '<S19>/If Action Subsystem2' */
  RuleBasedTractionControl_IfActionSubsystem3_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem2,
     &RuleBasedTractionControl_P.IfActionSubsystem2);

  /* End of SystemInitialize for SubSystem: '<S19>/If Action Subsystem2' */

  /* SystemInitialize for IfAction SubSystem: '<S19>/If Action Subsystem1' */
  RuleBasedTractionControl_IfActionSubsystem3_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem1_f,
     &RuleBasedTractionControl_P.IfActionSubsystem1_f);

  /* End of SystemInitialize for SubSystem: '<S19>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S20>/If Action Subsystem' */
  RuleBasedTractionControl_IfActionSubsystem_j_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem_d,
     &RuleBasedTractionControl_P.IfActionSubsystem_d);

  /* End of SystemInitialize for SubSystem: '<S20>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S20>/If Action Subsystem3' */
  RuleBasedTractionControl_IfActionSubsystem3_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem3_g,
     &RuleBasedTractionControl_P.IfActionSubsystem3_g);

  /* End of SystemInitialize for SubSystem: '<S20>/If Action Subsystem3' */

  /* SystemInitialize for IfAction SubSystem: '<S20>/If Action Subsystem2' */
  RuleBasedTractionControl_IfActionSubsystem3_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem2_b,
     &RuleBasedTractionControl_P.IfActionSubsystem2_b);

  /* End of SystemInitialize for SubSystem: '<S20>/If Action Subsystem2' */

  /* SystemInitialize for IfAction SubSystem: '<S20>/If Action Subsystem1' */
  RuleBasedTractionControl_IfActionSubsystem3_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem1_j,
     &RuleBasedTractionControl_P.IfActionSubsystem1_j);

  /* End of SystemInitialize for SubSystem: '<S20>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S21>/If Action Subsystem' */
  RuleBasedTractionControl_IfActionSubsystem_j_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem_m,
     &RuleBasedTractionControl_P.IfActionSubsystem_m);

  /* End of SystemInitialize for SubSystem: '<S21>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S21>/If Action Subsystem3' */
  RuleBasedTractionControl_IfActionSubsystem3_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem3_o,
     &RuleBasedTractionControl_P.IfActionSubsystem3_o);

  /* End of SystemInitialize for SubSystem: '<S21>/If Action Subsystem3' */

  /* SystemInitialize for IfAction SubSystem: '<S21>/If Action Subsystem2' */
  RuleBasedTractionControl_IfActionSubsystem3_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem2_l,
     &RuleBasedTractionControl_P.IfActionSubsystem2_l);

  /* End of SystemInitialize for SubSystem: '<S21>/If Action Subsystem2' */

  /* SystemInitialize for IfAction SubSystem: '<S21>/If Action Subsystem1' */
  RuleBasedTractionControl_IfActionSubsystem3_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem1_d,
     &RuleBasedTractionControl_P.IfActionSubsystem1_d);

  /* End of SystemInitialize for SubSystem: '<S21>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S22>/If Action Subsystem' */
  RuleBasedTractionControl_IfActionSubsystem_j_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem_nm,
     &RuleBasedTractionControl_P.IfActionSubsystem_nm);

  /* End of SystemInitialize for SubSystem: '<S22>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S22>/If Action Subsystem3' */
  RuleBasedTractionControl_IfActionSubsystem3_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem3_m,
     &RuleBasedTractionControl_P.IfActionSubsystem3_m);

  /* End of SystemInitialize for SubSystem: '<S22>/If Action Subsystem3' */

  /* SystemInitialize for IfAction SubSystem: '<S22>/If Action Subsystem2' */
  RuleBasedTractionControl_IfActionSubsystem3_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem2_ly,
     &RuleBasedTractionControl_P.IfActionSubsystem2_ly);

  /* End of SystemInitialize for SubSystem: '<S22>/If Action Subsystem2' */

  /* SystemInitialize for IfAction SubSystem: '<S22>/If Action Subsystem1' */
  RuleBasedTractionControl_IfActionSubsystem3_Init
    (&RuleBasedTractionControl_B->IfActionSubsystem1_m,
     &RuleBasedTractionControl_P.IfActionSubsystem1_m);

  /* End of SystemInitialize for SubSystem: '<S22>/If Action Subsystem1' */

  /* SystemInitialize for Outport: '<S4>/FL trq' */
  RuleBasedTractionControl_B->Product2_n = RuleBasedTractionControl_P.FLtrq_Y0_i;

  /* SystemInitialize for Outport: '<S4>/FL trq inv' */
  RuleBasedTractionControl_B->Gain_i = RuleBasedTractionControl_P.FLtrqinv_Y0_d;

  /* SystemInitialize for Outport: '<S4>/FR trq' */
  RuleBasedTractionControl_B->Product2_p = RuleBasedTractionControl_P.FRtrq_Y0_k;

  /* SystemInitialize for Outport: '<S4>/FR trq inv' */
  RuleBasedTractionControl_B->Gain_l = RuleBasedTractionControl_P.FRtrqinv_Y0_k;

  /* SystemInitialize for Outport: '<S4>/RL trq' */
  RuleBasedTractionControl_B->Product2 = RuleBasedTractionControl_P.RLtrq_Y0_g;

  /* SystemInitialize for Outport: '<S4>/RL trq inv' */
  RuleBasedTractionControl_B->Gain = RuleBasedTractionControl_P.RLtrqinv_Y0_c;

  /* SystemInitialize for Outport: '<S4>/RR trq' */
  RuleBasedTractionControl_B->Product2_a = RuleBasedTractionControl_P.RRtrq_Y0_k;

  /* SystemInitialize for Outport: '<S4>/RR trq inv' */
  RuleBasedTractionControl_B->Gain_f = RuleBasedTractionControl_P.RRtrqinv_Y0_m;

  /* End of SystemInitialize for SubSystem: '<S2>/Traction Control' */
}

/* Model terminate function */
void RuleBasedTractionControl_terminate(RT_MODEL_RuleBasedTractionControl_T
  * RuleBasedTractionControl_M)
{
  /* model code */
  rt_FREE(RuleBasedTractionControl_M->blockIO);
  rt_FREE(RuleBasedTractionControl_M->inputs);
  rt_FREE(RuleBasedTractionControl_M->outputs);
  rt_FREE(RuleBasedTractionControl_M->dwork);
  rt_FREE(RuleBasedTractionControl_M);
}

/* Model data allocation function */
RT_MODEL_RuleBasedTractionControl_T *RuleBasedTractionControl(struct tInfos *inf)
{
  RT_MODEL_RuleBasedTractionControl_T *RuleBasedTractionControl_M;
  RuleBasedTractionControl_M = (RT_MODEL_RuleBasedTractionControl_T *) malloc
    (sizeof(RT_MODEL_RuleBasedTractionControl_T));
  if (RuleBasedTractionControl_M == NULL) {
    return NULL;
  }

  (void) memset((char *)RuleBasedTractionControl_M, 0,
                sizeof(RT_MODEL_RuleBasedTractionControl_T));
  MatSupp_Init();

  /* block I/O */
  {
    B_RuleBasedTractionControl_T *b = (B_RuleBasedTractionControl_T *) malloc
      (sizeof(B_RuleBasedTractionControl_T));
    rt_VALIDATE_MEMORY(RuleBasedTractionControl_M,b);
    RuleBasedTractionControl_M->blockIO = (b);
  }

  /* states (dwork) */
  {
    DW_RuleBasedTractionControl_T *dwork = (DW_RuleBasedTractionControl_T *)
      malloc(sizeof(DW_RuleBasedTractionControl_T));
    rt_VALIDATE_MEMORY(RuleBasedTractionControl_M,dwork);
    RuleBasedTractionControl_M->dwork = (dwork);
  }

  /* external inputs */
  {
    ExtU_RuleBasedTractionControl_T *RuleBasedTractionControl_U =
      (ExtU_RuleBasedTractionControl_T *) malloc(sizeof
      (ExtU_RuleBasedTractionControl_T));
    rt_VALIDATE_MEMORY(RuleBasedTractionControl_M,RuleBasedTractionControl_U);
    RuleBasedTractionControl_M->inputs = (((ExtU_RuleBasedTractionControl_T *)
      RuleBasedTractionControl_U));
  }

  /* external outputs */
  {
    ExtY_RuleBasedTractionControl_T *RuleBasedTractionControl_Y =
      (ExtY_RuleBasedTractionControl_T *) malloc(sizeof
      (ExtY_RuleBasedTractionControl_T));
    rt_VALIDATE_MEMORY(RuleBasedTractionControl_M,RuleBasedTractionControl_Y);
    RuleBasedTractionControl_M->outputs = (RuleBasedTractionControl_Y);
  }

  /* CarMaker parameter tuning */
  {
    RuleBasedTractionControl_SetParams(RuleBasedTractionControl_M, NULL, inf);
  }

  {
    B_RuleBasedTractionControl_T *RuleBasedTractionControl_B =
      ((B_RuleBasedTractionControl_T *) RuleBasedTractionControl_M->blockIO);
    DW_RuleBasedTractionControl_T *RuleBasedTractionControl_DW =
      ((DW_RuleBasedTractionControl_T *) RuleBasedTractionControl_M->dwork);
    ExtU_RuleBasedTractionControl_T *RuleBasedTractionControl_U =
      (ExtU_RuleBasedTractionControl_T *) RuleBasedTractionControl_M->inputs;
    ExtY_RuleBasedTractionControl_T *RuleBasedTractionControl_Y =
      (ExtY_RuleBasedTractionControl_T *) RuleBasedTractionControl_M->outputs;

    /* block I/O */
    (void) memset(((void *) RuleBasedTractionControl_B), 0,
                  sizeof(B_RuleBasedTractionControl_T));

    /* states (dwork) */
    (void) memset((void *)RuleBasedTractionControl_DW, 0,
                  sizeof(DW_RuleBasedTractionControl_T));

    /* external inputs */
    (void)memset(RuleBasedTractionControl_U, 0, sizeof
                 (ExtU_RuleBasedTractionControl_T));

    /* external outputs */
    RuleBasedTractionControl_Y->ToCM =
      RuleBasedTractionControl_rtZcmPowerTrainXWDOut;
  }

  return RuleBasedTractionControl_M;
}

/* CarMaker dictionary definitions. */
extern tQuantEntry *main_DictDefines[];
static tQuantEntry DictDefines[] = {
  { (void*)0x01234567, (void*)0x89ABCDEF, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { (void*)main_DictDefines, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { NULL, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 }
};

tQuantEntry *RuleBasedTractionControl_DictDefines = DictDefines;
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

tMdlBdyFrame *RuleBasedTractionControl_BdyFrameDefines = BdyFrameDefines;
tMdlBdyFrame *main_BdyFrameDefines[] = {
  BdyFrameDefines,
  NULL
};

#endif
