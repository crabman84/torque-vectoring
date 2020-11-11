/*
 * CombinedTractionLaunchControl.c
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

#include <infoc.h>
#include <Log.h>
#include <InfoParam.h>
#include <DataDict.h>
#include <MatSupp.h>
#include "CombinedTractionLaunchControl.h"
#include "CombinedTractionLaunchControl_private.h"
#include "CombinedTractionLaunchControl_wrap.h"

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

const cmPowerTrainXWDOut CombinedTractionLaunchControl_rtZcmPowerTrainXWDOut = {
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
 *    '<Root>/If Action Subsystem'
 *    '<Root>/If Action Subsystem1'
 *    '<S8>/If Action Subsystem'
 *    '<S8>/If Action Subsystem1'
 *    '<S9>/If Action Subsystem'
 *    '<S9>/If Action Subsystem1'
 *    '<S10>/If Action Subsystem'
 *    '<S10>/If Action Subsystem1'
 *    '<S11>/If Action Subsystem'
 *    '<S11>/If Action Subsystem1'
 */
void CombinedTractionLaunchControl_IfActionSubsystem_Init
  (B_IfActionSubsystem_CombinedTractionLaunchControl_T *localB,
   P_IfActionSubsystem_CombinedTractionLaunchControl_T *localP)
{
  /* SystemInitialize for Outport: '<S2>/Out1' */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for action system:
 *    '<Root>/If Action Subsystem'
 *    '<Root>/If Action Subsystem1'
 *    '<S8>/If Action Subsystem'
 *    '<S8>/If Action Subsystem1'
 *    '<S9>/If Action Subsystem'
 *    '<S9>/If Action Subsystem1'
 *    '<S10>/If Action Subsystem'
 *    '<S10>/If Action Subsystem1'
 *    '<S11>/If Action Subsystem'
 *    '<S11>/If Action Subsystem1'
 */
void CombinedTractionLaunchControl_IfActionSubsystem(real_T rtu_In1,
  B_IfActionSubsystem_CombinedTractionLaunchControl_T *localB)
{
  /* Inport: '<S2>/In1' */
  localB->In1 = rtu_In1;
}

/*
 * Termination for action system:
 *    '<Root>/If Action Subsystem'
 *    '<Root>/If Action Subsystem1'
 *    '<S8>/If Action Subsystem'
 *    '<S8>/If Action Subsystem1'
 *    '<S9>/If Action Subsystem'
 *    '<S9>/If Action Subsystem1'
 *    '<S10>/If Action Subsystem'
 *    '<S10>/If Action Subsystem1'
 *    '<S11>/If Action Subsystem'
 *    '<S11>/If Action Subsystem1'
 */
void CombinedTractionLaunchControl_IfActionSubsystem_Term(void)
{
}

/*
 * System initialize for action system:
 *    '<S23>/If Action Subsystem'
 *    '<S26>/If Action Subsystem'
 *    '<S26>/If Action Subsystem1'
 *    '<S24>/If Action Subsystem'
 *    '<S30>/If Action Subsystem'
 *    '<S30>/If Action Subsystem1'
 *    '<S33>/If Action Subsystem'
 *    '<S36>/If Action Subsystem'
 *    '<S36>/If Action Subsystem1'
 *    '<S34>/If Action Subsystem'
 *    ...
 */
void CombinedTractionLaunchControl_IfActionSubsystem_l_Init
  (B_IfActionSubsystem_CombinedTractionLaunchControl_j_T *localB,
   P_IfActionSubsystem_CombinedTractionLaunchControl_p_T *localP)
{
  /* SystemInitialize for Outport: '<S25>/torqueOut' */
  localB->torqueRequest = localP->torqueOut_Y0;
}

/*
 * Output and update for action system:
 *    '<S23>/If Action Subsystem'
 *    '<S26>/If Action Subsystem'
 *    '<S26>/If Action Subsystem1'
 *    '<S24>/If Action Subsystem'
 *    '<S30>/If Action Subsystem'
 *    '<S30>/If Action Subsystem1'
 *    '<S33>/If Action Subsystem'
 *    '<S36>/If Action Subsystem'
 *    '<S36>/If Action Subsystem1'
 *    '<S34>/If Action Subsystem'
 *    ...
 */
void CombinedTractionLaunchControl_IfActionSubsystem_i(real_T rtu_torqueRequest,
  B_IfActionSubsystem_CombinedTractionLaunchControl_j_T *localB)
{
  /* Inport: '<S25>/torqueRequest' */
  localB->torqueRequest = rtu_torqueRequest;
}

/*
 * Termination for action system:
 *    '<S23>/If Action Subsystem'
 *    '<S26>/If Action Subsystem'
 *    '<S26>/If Action Subsystem1'
 *    '<S24>/If Action Subsystem'
 *    '<S30>/If Action Subsystem'
 *    '<S30>/If Action Subsystem1'
 *    '<S33>/If Action Subsystem'
 *    '<S36>/If Action Subsystem'
 *    '<S36>/If Action Subsystem1'
 *    '<S34>/If Action Subsystem'
 *    ...
 */
void CombinedTractionLaunchControl_IfActionSubsystem_l_Term(void)
{
}

/*
 * System initialize for action system:
 *    '<S23>/If Action Subsystem1'
 *    '<S24>/If Action Subsystem1'
 *    '<S33>/If Action Subsystem1'
 */
void CombinedTractionLaunchControl_IfActionSubsystem1_Init
  (B_IfActionSubsystem1_CombinedTractionLaunchControl_T *localB,
   P_IfActionSubsystem1_CombinedTractionLaunchControl_T *localP)
{
  /* SystemInitialize for IfAction SubSystem: '<S26>/If Action Subsystem' */
  CombinedTractionLaunchControl_IfActionSubsystem_l_Init
    (&localB->IfActionSubsystem, &localP->IfActionSubsystem);

  /* End of SystemInitialize for SubSystem: '<S26>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S26>/If Action Subsystem1' */
  CombinedTractionLaunchControl_IfActionSubsystem_l_Init
    (&localB->IfActionSubsystem1, &localP->IfActionSubsystem1);

  /* End of SystemInitialize for SubSystem: '<S26>/If Action Subsystem1' */

  /* SystemInitialize for Outport: '<S26>/TorqueOut' */
  localB->Mult = localP->TorqueOut_Y0;
}

/*
 * Output and update for action system:
 *    '<S23>/If Action Subsystem1'
 *    '<S24>/If Action Subsystem1'
 *    '<S33>/If Action Subsystem1'
 */
void CombinedTractionLaunchControl_IfActionSubsystem1(real_T rtu_torqueRequest,
  real_T rtu_SlipDifference, real_T rtu_WheelSpeed,
  B_IfActionSubsystem1_CombinedTractionLaunchControl_T *localB,
  P_IfActionSubsystem1_CombinedTractionLaunchControl_T *localP)
{
  real_T rtb_Gain_d;

  /* Gain: '<S26>/Gain' incorporates:
   *  Lookup_n-D: '<S26>/2-D Lookup Table'
   */
  rtb_Gain_d = localP->Gain_Gain * look2_binlxpw(rtu_SlipDifference,
    rtu_WheelSpeed, localP->uDLookupTable_bp01Data,
    localP->uDLookupTable_bp02Data, localP->uDLookupTable_tableData,
    localP->uDLookupTable_maxIndex, 6U);

  /* If: '<S26>/If' incorporates:
   *  Constant: '<S26>/Constant'
   */
  if (rtb_Gain_d > 1.0) {
    /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    CombinedTractionLaunchControl_IfActionSubsystem_i(localP->Constant_Value,
      &localB->IfActionSubsystem);

    /* End of Outputs for SubSystem: '<S26>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S28>/Action Port'
     */
    CombinedTractionLaunchControl_IfActionSubsystem_i(rtb_Gain_d,
      &localB->IfActionSubsystem1);

    /* End of Outputs for SubSystem: '<S26>/If Action Subsystem1' */
  }

  /* End of If: '<S26>/If' */

  /* Product: '<S26>/Mult' incorporates:
   *  Constant: '<S26>/Constant'
   *  Sum: '<S26>/Subtract'
   *  Sum: '<S26>/Subtract1'
   */
  localB->Mult = (localP->Constant_Value -
                  (localB->IfActionSubsystem.torqueRequest +
                   localB->IfActionSubsystem1.torqueRequest)) *
    rtu_torqueRequest;
}

/*
 * Termination for action system:
 *    '<S23>/If Action Subsystem1'
 *    '<S24>/If Action Subsystem1'
 *    '<S33>/If Action Subsystem1'
 */
void CombinedTractionLaunchControl_IfActionSubsystem1_Term(void)
{
}

/* Model step function */
void CombinedTractionLaunchControl_step(RT_MODEL_CombinedTractionLaunchControl_T
  *const CombinedTractionLaunchControl_M)
{
  B_CombinedTractionLaunchControl_T *CombinedTractionLaunchControl_B =
    ((B_CombinedTractionLaunchControl_T *)
     CombinedTractionLaunchControl_M->blockIO);
  DW_CombinedTractionLaunchControl_T *CombinedTractionLaunchControl_DW =
    ((DW_CombinedTractionLaunchControl_T *)
     CombinedTractionLaunchControl_M->dwork);
  ExtU_CombinedTractionLaunchControl_T *CombinedTractionLaunchControl_U =
    (ExtU_CombinedTractionLaunchControl_T *)
    CombinedTractionLaunchControl_M->inputs;
  ExtY_CombinedTractionLaunchControl_T *CombinedTractionLaunchControl_Y =
    (ExtY_CombinedTractionLaunchControl_T *)
    CombinedTractionLaunchControl_M->outputs;
  real_T rtb_Trq_Supp2Bdy1_rx;
  real_T rtb_Trq_Supp2Bdy1_ry;
  real_T rtb_Trq_Supp2Bdy1_rz;
  real_T rtb_Trq_Supp2Bdy1B_rx;
  real_T rtb_Trq_Supp2Bdy1B_ry;
  real_T rtb_Trq_Supp2Bdy1B_rz;
  real_T rtb_Minus;
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
  CombinedTractionLaunchControl_Y->ToCM.EngineOut.Engine_on =
    CombinedTractionLaunchControl_P.EngineOutEngine_on_Value;
  CombinedTractionLaunchControl_Y->ToCM.EngineOut.rotv =
    CombinedTractionLaunchControl_P.EngineOutrotv_Value;
  CombinedTractionLaunchControl_Y->ToCM.EngineOut.Trq =
    CombinedTractionLaunchControl_P.EngineOutTrq_Value;
  CombinedTractionLaunchControl_Y->ToCM.EngineOut.TrqDrag =
    CombinedTractionLaunchControl_P.EngineOutTrqDrag_Value;
  CombinedTractionLaunchControl_Y->ToCM.EngineOut.TrqFull =
    CombinedTractionLaunchControl_P.EngineOutTrqFull_Value;
  CombinedTractionLaunchControl_Y->ToCM.EngineOut.TrqOpt =
    CombinedTractionLaunchControl_P.EngineOutTrqOpt_Value;
  CombinedTractionLaunchControl_Y->ToCM.EngineOut.FuelFlow =
    CombinedTractionLaunchControl_P.EngineOutFuelFlow_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ISGOut.i_M2W.FL'
   *  Constant: '<S1>/ISGOut.i_M2W.FR'
   *  Constant: '<S1>/ISGOut.i_M2W.RL'
   *  Constant: '<S1>/ISGOut.i_M2W.RR'
   */
  CombinedTractionLaunchControl_Y->ToCM.ISGOut.i_M2W.FL =
    CombinedTractionLaunchControl_P.ISGOuti_M2WFL_Value;
  CombinedTractionLaunchControl_Y->ToCM.ISGOut.i_M2W.FR =
    CombinedTractionLaunchControl_P.ISGOuti_M2WFR_Value;
  CombinedTractionLaunchControl_Y->ToCM.ISGOut.i_M2W.RL =
    CombinedTractionLaunchControl_P.ISGOuti_M2WRL_Value;
  CombinedTractionLaunchControl_Y->ToCM.ISGOut.i_M2W.RR =
    CombinedTractionLaunchControl_P.ISGOuti_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ISGOut.PwrElec'
   *  Constant: '<S1>/ISGOut.Trq'
   *  Constant: '<S1>/ISGOut.TrqGen_max'
   *  Constant: '<S1>/ISGOut.TrqMot_max'
   *  Constant: '<S1>/ISGOut.rotv'
   */
  CombinedTractionLaunchControl_Y->ToCM.ISGOut.rotv =
    CombinedTractionLaunchControl_P.ISGOutrotv_Value;
  CombinedTractionLaunchControl_Y->ToCM.ISGOut.Trq =
    CombinedTractionLaunchControl_P.ISGOutTrq_Value;
  CombinedTractionLaunchControl_Y->ToCM.ISGOut.TrqMot_max =
    CombinedTractionLaunchControl_P.ISGOutTrqMot_max_Value;
  CombinedTractionLaunchControl_Y->ToCM.ISGOut.TrqGen_max =
    CombinedTractionLaunchControl_P.ISGOutTrqGen_max_Value;
  CombinedTractionLaunchControl_Y->ToCM.ISGOut.PwrElec =
    CombinedTractionLaunchControl_P.ISGOutPwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m0.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.RR'
   */
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m0.i_M2W.FL =
    CombinedTractionLaunchControl_P.MotorOutm0i_M2WFL_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m0.i_M2W.FR =
    CombinedTractionLaunchControl_P.MotorOutm0i_M2WFR_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m0.i_M2W.RL =
    CombinedTractionLaunchControl_P.MotorOutm0i_M2WRL_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m0.i_M2W.RR =
    CombinedTractionLaunchControl_P.MotorOutm0i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m0.PwrElec'
   *  Constant: '<S1>/MotorOut.m0.Trq'
   *  Constant: '<S1>/MotorOut.m0.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m0.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m0.rotv'
   */
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m0.rotv =
    CombinedTractionLaunchControl_P.MotorOutm0rotv_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m0.Trq =
    CombinedTractionLaunchControl_P.MotorOutm0Trq_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m0.TrqMot_max =
    CombinedTractionLaunchControl_P.MotorOutm0TrqMot_max_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m0.TrqGen_max =
    CombinedTractionLaunchControl_P.MotorOutm0TrqGen_max_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m0.PwrElec =
    CombinedTractionLaunchControl_P.MotorOutm0PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m1.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.RR'
   */
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m1.i_M2W.FL =
    CombinedTractionLaunchControl_P.MotorOutm1i_M2WFL_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m1.i_M2W.FR =
    CombinedTractionLaunchControl_P.MotorOutm1i_M2WFR_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m1.i_M2W.RL =
    CombinedTractionLaunchControl_P.MotorOutm1i_M2WRL_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m1.i_M2W.RR =
    CombinedTractionLaunchControl_P.MotorOutm1i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m1.PwrElec'
   *  Constant: '<S1>/MotorOut.m1.Trq'
   *  Constant: '<S1>/MotorOut.m1.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m1.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m1.rotv'
   */
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m1.rotv =
    CombinedTractionLaunchControl_P.MotorOutm1rotv_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m1.Trq =
    CombinedTractionLaunchControl_P.MotorOutm1Trq_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m1.TrqMot_max =
    CombinedTractionLaunchControl_P.MotorOutm1TrqMot_max_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m1.TrqGen_max =
    CombinedTractionLaunchControl_P.MotorOutm1TrqGen_max_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m1.PwrElec =
    CombinedTractionLaunchControl_P.MotorOutm1PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m2.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.RR'
   */
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m2.i_M2W.FL =
    CombinedTractionLaunchControl_P.MotorOutm2i_M2WFL_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m2.i_M2W.FR =
    CombinedTractionLaunchControl_P.MotorOutm2i_M2WFR_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m2.i_M2W.RL =
    CombinedTractionLaunchControl_P.MotorOutm2i_M2WRL_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m2.i_M2W.RR =
    CombinedTractionLaunchControl_P.MotorOutm2i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m2.PwrElec'
   *  Constant: '<S1>/MotorOut.m2.Trq'
   *  Constant: '<S1>/MotorOut.m2.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m2.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m2.rotv'
   */
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m2.rotv =
    CombinedTractionLaunchControl_P.MotorOutm2rotv_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m2.Trq =
    CombinedTractionLaunchControl_P.MotorOutm2Trq_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m2.TrqMot_max =
    CombinedTractionLaunchControl_P.MotorOutm2TrqMot_max_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m2.TrqGen_max =
    CombinedTractionLaunchControl_P.MotorOutm2TrqGen_max_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m2.PwrElec =
    CombinedTractionLaunchControl_P.MotorOutm2PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m3.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.RR'
   */
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m3.i_M2W.FL =
    CombinedTractionLaunchControl_P.MotorOutm3i_M2WFL_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m3.i_M2W.FR =
    CombinedTractionLaunchControl_P.MotorOutm3i_M2WFR_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m3.i_M2W.RL =
    CombinedTractionLaunchControl_P.MotorOutm3i_M2WRL_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m3.i_M2W.RR =
    CombinedTractionLaunchControl_P.MotorOutm3i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m3.PwrElec'
   *  Constant: '<S1>/MotorOut.m3.Trq'
   *  Constant: '<S1>/MotorOut.m3.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m3.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m3.rotv'
   */
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m3.rotv =
    CombinedTractionLaunchControl_P.MotorOutm3rotv_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m3.Trq =
    CombinedTractionLaunchControl_P.MotorOutm3Trq_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m3.TrqMot_max =
    CombinedTractionLaunchControl_P.MotorOutm3TrqMot_max_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m3.TrqGen_max =
    CombinedTractionLaunchControl_P.MotorOutm3TrqGen_max_Value;
  CombinedTractionLaunchControl_Y->ToCM.MotorOut.m3.PwrElec =
    CombinedTractionLaunchControl_P.MotorOutm3PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ClutchOut.Pos'
   *  Constant: '<S1>/ClutchOut.Trq_in'
   *  Constant: '<S1>/ClutchOut.Trq_out'
   *  Constant: '<S1>/ClutchOut.i_TrqIn2Out'
   *  Constant: '<S1>/ClutchOut.rotv_in'
   *  Constant: '<S1>/ClutchOut.rotv_out'
   */
  CombinedTractionLaunchControl_Y->ToCM.ClutchOut.Pos =
    CombinedTractionLaunchControl_P.ClutchOutPos_Value;
  CombinedTractionLaunchControl_Y->ToCM.ClutchOut.rotv_in =
    CombinedTractionLaunchControl_P.ClutchOutrotv_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.ClutchOut.rotv_out =
    CombinedTractionLaunchControl_P.ClutchOutrotv_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.ClutchOut.Trq_in =
    CombinedTractionLaunchControl_P.ClutchOutTrq_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.ClutchOut.Trq_out =
    CombinedTractionLaunchControl_P.ClutchOutTrq_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.ClutchOut.i_TrqIn2Out =
    CombinedTractionLaunchControl_P.ClutchOuti_TrqIn2Out_Value;

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
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.GearNo =
    CombinedTractionLaunchControl_P.GearBoxOutGearNo_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.GearNo_dis =
    CombinedTractionLaunchControl_P.GearBoxOutGearNo_dis_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.Trq_DriveSrc_trg =
    CombinedTractionLaunchControl_P.GearBoxOutTrq_DriveSrc_trg_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.i =
    CombinedTractionLaunchControl_P.GearBoxOuti_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.rotv_in =
    CombinedTractionLaunchControl_P.GearBoxOutrotv_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.rotv_out =
    CombinedTractionLaunchControl_P.GearBoxOutrotv_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.Trq_in =
    CombinedTractionLaunchControl_P.GearBoxOutTrq_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.Trq_out =
    CombinedTractionLaunchControl_P.GearBoxOutTrq_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.Clutch.Pos =
    CombinedTractionLaunchControl_P.GearBoxOutClutchPos_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.Clutch.rotv_in =
    CombinedTractionLaunchControl_P.GearBoxOutClutchrotv_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.Clutch.rotv_out =
    CombinedTractionLaunchControl_P.GearBoxOutClutchrotv_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.Clutch.Trq_in =
    CombinedTractionLaunchControl_P.GearBoxOutClutchTrq_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.Clutch.Trq_out =
    CombinedTractionLaunchControl_P.GearBoxOutClutchTrq_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.Clutch.i_TrqIn2Out =
    CombinedTractionLaunchControl_P.GearBoxOutClutchi_TrqIn2Out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.Clutch_dis.Pos =
    CombinedTractionLaunchControl_P.GearBoxOutClutch_disPos_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.Clutch_dis.rotv_in =
    CombinedTractionLaunchControl_P.GearBoxOutClutch_disrotv_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.Clutch_dis.rotv_out =
    CombinedTractionLaunchControl_P.GearBoxOutClutch_disrotv_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.Clutch_dis.Trq_in =
    CombinedTractionLaunchControl_P.GearBoxOutClutch_disTrq_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.Clutch_dis.Trq_out =
    CombinedTractionLaunchControl_P.GearBoxOutClutch_disTrq_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxOut.Clutch_dis.i_TrqIn2Out =
    CombinedTractionLaunchControl_P.GearBoxOutClutch_disi_TrqIn2Out_Value;

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
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.GearNo =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0GearNo_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.GearNo_dis =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0GearNo_dis_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Trq_DriveSrc_trg =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0Trq_DriveSrc_trg_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.i =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0i_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.rotv_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0rotv_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.rotv_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0rotv_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Trq_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0Trq_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Trq_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0Trq_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Pos =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0ClutchPos_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.rotv_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0Clutchrotv_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.rotv_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0Clutchrotv_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Trq_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0ClutchTrq_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Trq_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0ClutchTrq_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.i_TrqIn2Out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0Clutchi_TrqIn2Out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Pos =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0Clutch_disPos_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.rotv_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0Clutch_disrotv_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.rotv_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0Clutch_disrotv_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Trq_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0Clutch_disTrq_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Trq_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0Clutch_disTrq_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.i_TrqIn2Out
    =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m0Clutch_disi_TrqIn2Out_Value;

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
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.GearNo =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1GearNo_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.GearNo_dis =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1GearNo_dis_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Trq_DriveSrc_trg =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1Trq_DriveSrc_trg_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.i =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1i_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.rotv_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1rotv_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.rotv_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1rotv_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Trq_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1Trq_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Trq_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1Trq_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Pos =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1ClutchPos_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.rotv_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1Clutchrotv_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.rotv_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1Clutchrotv_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Trq_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1ClutchTrq_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Trq_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1ClutchTrq_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.i_TrqIn2Out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1Clutchi_TrqIn2Out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Pos =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1Clutch_disPos_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.rotv_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1Clutch_disrotv_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.rotv_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1Clutch_disrotv_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Trq_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1Clutch_disTrq_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Trq_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1Clutch_disTrq_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.i_TrqIn2Out
    =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m1Clutch_disi_TrqIn2Out_Value;

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
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.GearNo =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2GearNo_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.GearNo_dis =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2GearNo_dis_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Trq_DriveSrc_trg =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2Trq_DriveSrc_trg_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.i =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2i_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.rotv_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2rotv_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.rotv_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2rotv_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Trq_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2Trq_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Trq_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2Trq_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Pos =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2ClutchPos_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.rotv_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2Clutchrotv_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.rotv_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2Clutchrotv_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Trq_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2ClutchTrq_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Trq_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2ClutchTrq_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.i_TrqIn2Out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2Clutchi_TrqIn2Out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Pos =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2Clutch_disPos_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.rotv_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2Clutch_disrotv_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.rotv_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2Clutch_disrotv_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Trq_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2Clutch_disTrq_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Trq_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2Clutch_disTrq_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.i_TrqIn2Out
    =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m2Clutch_disi_TrqIn2Out_Value;

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
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.GearNo =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3GearNo_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.GearNo_dis =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3GearNo_dis_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Trq_DriveSrc_trg =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3Trq_DriveSrc_trg_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.i =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3i_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.rotv_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3rotv_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.rotv_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3rotv_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Trq_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3Trq_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Trq_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3Trq_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Pos =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3ClutchPos_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.rotv_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3Clutchrotv_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.rotv_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3Clutchrotv_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Trq_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3ClutchTrq_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Trq_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3ClutchTrq_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.i_TrqIn2Out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3Clutchi_TrqIn2Out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Pos =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3Clutch_disPos_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.rotv_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3Clutch_disrotv_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.rotv_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3Clutch_disrotv_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Trq_in =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3Clutch_disTrq_in_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Trq_out =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3Clutch_disTrq_out_Value;
  CombinedTractionLaunchControl_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.i_TrqIn2Out
    =
    CombinedTractionLaunchControl_P.GearBoxM_OutGB_m3Clutch_disi_TrqIn2Out_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BattLVOut.AOC'
   *  Constant: '<S1>/BattLVOut.Current'
   *  Constant: '<S1>/BattLVOut.Energy'
   *  Constant: '<S1>/BattLVOut.Pwr_max'
   *  Constant: '<S1>/BattLVOut.SOC'
   *  Constant: '<S1>/BattLVOut.SOH'
   *  Constant: '<S1>/BattLVOut.Temp'
   */
  CombinedTractionLaunchControl_Y->ToCM.BattLVOut.SOC =
    CombinedTractionLaunchControl_P.BattLVOutSOC_Value;
  CombinedTractionLaunchControl_Y->ToCM.BattLVOut.SOH =
    CombinedTractionLaunchControl_P.BattLVOutSOH_Value;
  CombinedTractionLaunchControl_Y->ToCM.BattLVOut.Current =
    CombinedTractionLaunchControl_P.BattLVOutCurrent_Value;
  CombinedTractionLaunchControl_Y->ToCM.BattLVOut.AOC =
    CombinedTractionLaunchControl_P.BattLVOutAOC_Value;
  CombinedTractionLaunchControl_Y->ToCM.BattLVOut.Temp =
    CombinedTractionLaunchControl_P.BattLVOutTemp_Value;
  CombinedTractionLaunchControl_Y->ToCM.BattLVOut.Energy =
    CombinedTractionLaunchControl_P.BattLVOutEnergy_Value;
  CombinedTractionLaunchControl_Y->ToCM.BattLVOut.Pwr_max =
    CombinedTractionLaunchControl_P.BattLVOutPwr_max_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BattHVOut.AOC'
   *  Constant: '<S1>/BattHVOut.Current'
   *  Constant: '<S1>/BattHVOut.Energy'
   *  Constant: '<S1>/BattHVOut.Pwr_max'
   *  Constant: '<S1>/BattHVOut.SOC'
   *  Constant: '<S1>/BattHVOut.SOH'
   *  Constant: '<S1>/BattHVOut.Temp'
   */
  CombinedTractionLaunchControl_Y->ToCM.BattHVOut.SOC =
    CombinedTractionLaunchControl_P.BattHVOutSOC_Value;
  CombinedTractionLaunchControl_Y->ToCM.BattHVOut.SOH =
    CombinedTractionLaunchControl_P.BattHVOutSOH_Value;
  CombinedTractionLaunchControl_Y->ToCM.BattHVOut.Current =
    CombinedTractionLaunchControl_P.BattHVOutCurrent_Value;
  CombinedTractionLaunchControl_Y->ToCM.BattHVOut.AOC =
    CombinedTractionLaunchControl_P.BattHVOutAOC_Value;
  CombinedTractionLaunchControl_Y->ToCM.BattHVOut.Temp =
    CombinedTractionLaunchControl_P.BattHVOutTemp_Value;
  CombinedTractionLaunchControl_Y->ToCM.BattHVOut.Energy =
    CombinedTractionLaunchControl_P.BattHVOutEnergy_Value;
  CombinedTractionLaunchControl_Y->ToCM.BattHVOut.Pwr_max =
    CombinedTractionLaunchControl_P.BattHVOutPwr_max_Value;

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
  CombinedTractionLaunchControl_Y->ToCM.PwrSupplyOut.Pwr_LV =
    CombinedTractionLaunchControl_P.PwrSupplyOutPwr_LV_Value;
  CombinedTractionLaunchControl_Y->ToCM.PwrSupplyOut.Pwr_HV1 =
    CombinedTractionLaunchControl_P.PwrSupplyOutPwr_HV1_Value;
  CombinedTractionLaunchControl_Y->ToCM.PwrSupplyOut.Pwr_HV2 =
    CombinedTractionLaunchControl_P.PwrSupplyOutPwr_HV2_Value;
  CombinedTractionLaunchControl_Y->ToCM.PwrSupplyOut.Voltage_LV =
    CombinedTractionLaunchControl_P.PwrSupplyOutVoltage_LV_Value;
  CombinedTractionLaunchControl_Y->ToCM.PwrSupplyOut.Voltage_HV1 =
    CombinedTractionLaunchControl_P.PwrSupplyOutVoltage_HV1_Value;
  CombinedTractionLaunchControl_Y->ToCM.PwrSupplyOut.Voltage_HV2 =
    CombinedTractionLaunchControl_P.PwrSupplyOutVoltage_HV2_Value;
  CombinedTractionLaunchControl_Y->ToCM.PwrSupplyOut.Pwr_HV1toLV =
    CombinedTractionLaunchControl_P.PwrSupplyOutPwr_HV1toLV_Value;
  CombinedTractionLaunchControl_Y->ToCM.PwrSupplyOut.Pwr_HV1toHV2 =
    CombinedTractionLaunchControl_P.PwrSupplyOutPwr_HV1toHV2_Value;
  CombinedTractionLaunchControl_Y->ToCM.PwrSupplyOut.Pwr_HV1toLV_max =
    CombinedTractionLaunchControl_P.PwrSupplyOutPwr_HV1toLV_max_Value;
  CombinedTractionLaunchControl_Y->ToCM.PwrSupplyOut.Pwr_HV1toHV2_max =
    CombinedTractionLaunchControl_P.PwrSupplyOutPwr_HV1toHV2_max_Value;
  CombinedTractionLaunchControl_Y->ToCM.PwrSupplyOut.Eta_HV1toLV =
    CombinedTractionLaunchControl_P.PwrSupplyOutEta_HV1toLV_Value;
  CombinedTractionLaunchControl_Y->ToCM.PwrSupplyOut.Eta_HV1toHV2 =
    CombinedTractionLaunchControl_P.PwrSupplyOutEta_HV1toHV2_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Trq_Supp2Bdy1.rx'
   *  Constant: '<S1>/Trq_Supp2Bdy1.ry'
   *  Constant: '<S1>/Trq_Supp2Bdy1.rz'
   */
  rtb_Trq_Supp2Bdy1_rx = CombinedTractionLaunchControl_P.Trq_Supp2Bdy1rx_Value;
  rtb_Trq_Supp2Bdy1_ry = CombinedTractionLaunchControl_P.Trq_Supp2Bdy1ry_Value;
  rtb_Trq_Supp2Bdy1_rz = CombinedTractionLaunchControl_P.Trq_Supp2Bdy1rz_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Trq_Supp2Bdy1B.rx'
   *  Constant: '<S1>/Trq_Supp2Bdy1B.ry'
   *  Constant: '<S1>/Trq_Supp2Bdy1B.rz'
   */
  rtb_Trq_Supp2Bdy1B_rx = CombinedTractionLaunchControl_P.Trq_Supp2Bdy1Brx_Value;
  rtb_Trq_Supp2Bdy1B_ry = CombinedTractionLaunchControl_P.Trq_Supp2Bdy1Bry_Value;
  rtb_Trq_Supp2Bdy1B_rz = CombinedTractionLaunchControl_P.Trq_Supp2Bdy1Brz_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Trq_Supp2BdyEng.rx'
   *  Constant: '<S1>/Trq_Supp2BdyEng.ry'
   */
  CombinedTractionLaunchControl_Y->ToCM.Trq_Supp2BdyEng.rx =
    CombinedTractionLaunchControl_P.Trq_Supp2BdyEngrx_Value;
  CombinedTractionLaunchControl_Y->ToCM.Trq_Supp2BdyEng.ry =
    CombinedTractionLaunchControl_P.Trq_Supp2BdyEngry_Value;

  /* If: '<S4>/If' incorporates:
   *  Constant: '<Root>/LaunchMode'
   *  Constant: '<S4>/Launch Control spd limit'
   *  Inport: '<Root>/FromCM'
   */
  if ((CombinedTractionLaunchControl_P.LaunchMode_Value > 0.0) &&
      (CombinedTractionLaunchControl_U->FromCM.Velocity <
       CombinedTractionLaunchControl_P.LaunchControlspdlimit_Value)) {
    /* Outputs for IfAction SubSystem: '<S4>/Launch Control' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* Abs: '<S8>/Abs' incorporates:
     *  Constant: '<S8>/GearRatio2'
     *  Product: '<S8>/Product'
     */
    rtb_Minus = fabs(CombinedTractionLaunchControl_U->FromCM.WheelIn.FL.rotv *
                     CombinedTractionLaunchControl_P.GearRatio2_Value);

    /* Lookup_n-D: '<S8>/2-D Lookup Table1' incorporates:
     *  Gain: '<S8>/Gain3'
     */
    rtb_uDLookupTable1 = look2_binlxpw
      (CombinedTractionLaunchControl_U->FromCM.Gas,
       CombinedTractionLaunchControl_P.Gain3_Gain * rtb_Minus,
       CombinedTractionLaunchControl_P.uDLookupTable1_bp01Data,
       CombinedTractionLaunchControl_P.uDLookupTable1_bp02Data,
       CombinedTractionLaunchControl_P.uDLookupTable1_tableData,
       CombinedTractionLaunchControl_P.uDLookupTable1_maxIndex, 6U);

    /* Lookup_n-D: '<S8>/1-D Lookup Table1' */
    rtb_Minus = look1_binlxpw(rtb_Minus,
      CombinedTractionLaunchControl_P.uDLookupTable1_bp01Data_o,
      CombinedTractionLaunchControl_P.uDLookupTable1_tableData_h, 13U);

    /* If: '<S8>/If' */
    if (rtb_Minus < rtb_uDLookupTable1) {
      /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem' incorporates:
       *  ActionPort: '<S12>/Action Port'
       */
      CombinedTractionLaunchControl_IfActionSubsystem(rtb_Minus,
        &CombinedTractionLaunchControl_B->IfActionSubsystem_n);

      /* End of Outputs for SubSystem: '<S8>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S13>/Action Port'
       */
      CombinedTractionLaunchControl_IfActionSubsystem(rtb_uDLookupTable1,
        &CombinedTractionLaunchControl_B->IfActionSubsystem1_g);

      /* End of Outputs for SubSystem: '<S8>/If Action Subsystem1' */
    }

    /* End of If: '<S8>/If' */

    /* S-Function (write_dict): '<S8>/Write CM Dict' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)
        CombinedTractionLaunchControl_DW->WriteCMDict_PWORK_d.Entry;
      if (!CombinedTractionLaunchControl_DW->WriteCMDict_IWORK_l.Checked) {
        CombinedTractionLaunchControl_DW->WriteCMDict_IWORK_l.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
      }

      value = CombinedTractionLaunchControl_B->IfActionSubsystem_n.In1;
      DVA_PokeSL(e, value);
    }

    /* S-Function (write_dict): '<S8>/Write CM Dict1' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)
        CombinedTractionLaunchControl_DW->WriteCMDict1_PWORK_g.Entry;
      if (!CombinedTractionLaunchControl_DW->WriteCMDict1_IWORK_o.Checked) {
        CombinedTractionLaunchControl_DW->WriteCMDict1_IWORK_o.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
      }

      value = CombinedTractionLaunchControl_B->IfActionSubsystem1_g.In1;
      DVA_PokeSL(e, value);
    }

    /* Product: '<S8>/Product1' incorporates:
     *  Constant: '<S8>/GearRatio2'
     *  Sum: '<S8>/Sum'
     */
    CombinedTractionLaunchControl_B->Product1 =
      (CombinedTractionLaunchControl_B->IfActionSubsystem1_g.In1 +
       CombinedTractionLaunchControl_B->IfActionSubsystem_n.In1) *
      CombinedTractionLaunchControl_P.GearRatio2_Value;

    /* S-Function (write_dict): '<S8>/Write CM Dict2' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)
        CombinedTractionLaunchControl_DW->WriteCMDict2_PWORK_f.Entry;
      if (!CombinedTractionLaunchControl_DW->WriteCMDict2_IWORK_g.Checked) {
        CombinedTractionLaunchControl_DW->WriteCMDict2_IWORK_g.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
      }

      value = CombinedTractionLaunchControl_B->Product1;
      DVA_PokeSL(e, value);
    }

    /* Gain: '<S8>/Gain' */
    CombinedTractionLaunchControl_B->Gain_n =
      CombinedTractionLaunchControl_P.Gain_Gain *
      CombinedTractionLaunchControl_B->Product1;

    /* Abs: '<S9>/Abs' incorporates:
     *  Constant: '<S9>/GearRatio2'
     *  Product: '<S9>/Product'
     */
    rtb_uDLookupTable1 = fabs
      (CombinedTractionLaunchControl_U->FromCM.WheelIn.FR.rotv *
       CombinedTractionLaunchControl_P.GearRatio2_Value_b);

    /* Lookup_n-D: '<S9>/1-D Lookup Table1' */
    rtb_Minus = look1_binlxpw(rtb_uDLookupTable1,
      CombinedTractionLaunchControl_P.uDLookupTable1_bp01Data_oo,
      CombinedTractionLaunchControl_P.uDLookupTable1_tableData_j, 13U);

    /* Gain: '<S9>/Gain3' */
    rtb_uDLookupTable1 *= CombinedTractionLaunchControl_P.Gain3_Gain_j;

    /* Lookup_n-D: '<S9>/2-D Lookup Table1' */
    rtb_uDLookupTable1 = look2_binlxpw
      (CombinedTractionLaunchControl_U->FromCM.Gas, rtb_uDLookupTable1,
       CombinedTractionLaunchControl_P.uDLookupTable1_bp01Data_a,
       CombinedTractionLaunchControl_P.uDLookupTable1_bp02Data_c,
       CombinedTractionLaunchControl_P.uDLookupTable1_tableData_d,
       CombinedTractionLaunchControl_P.uDLookupTable1_maxIndex_f, 6U);

    /* If: '<S9>/If' */
    if (rtb_Minus < rtb_uDLookupTable1) {
      /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem' incorporates:
       *  ActionPort: '<S14>/Action Port'
       */
      CombinedTractionLaunchControl_IfActionSubsystem(rtb_Minus,
        &CombinedTractionLaunchControl_B->IfActionSubsystem_p);

      /* End of Outputs for SubSystem: '<S9>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S15>/Action Port'
       */
      CombinedTractionLaunchControl_IfActionSubsystem(rtb_uDLookupTable1,
        &CombinedTractionLaunchControl_B->IfActionSubsystem1_b);

      /* End of Outputs for SubSystem: '<S9>/If Action Subsystem1' */
    }

    /* End of If: '<S9>/If' */

    /* Product: '<S9>/Product1' incorporates:
     *  Constant: '<S9>/GearRatio2'
     *  Sum: '<S9>/Sum'
     */
    CombinedTractionLaunchControl_B->Product1_n =
      (CombinedTractionLaunchControl_B->IfActionSubsystem1_b.In1 +
       CombinedTractionLaunchControl_B->IfActionSubsystem_p.In1) *
      CombinedTractionLaunchControl_P.GearRatio2_Value_b;

    /* Gain: '<S9>/Gain' */
    CombinedTractionLaunchControl_B->Gain_np =
      CombinedTractionLaunchControl_P.Gain_Gain_p *
      CombinedTractionLaunchControl_B->Product1_n;

    /* Abs: '<S10>/Abs' incorporates:
     *  Constant: '<S10>/GearRatio2'
     *  Product: '<S10>/Product'
     */
    rtb_uDLookupTable1 = fabs
      (CombinedTractionLaunchControl_U->FromCM.WheelIn.RL.rotv *
       CombinedTractionLaunchControl_P.GearRatio2_Value_j);

    /* Lookup_n-D: '<S10>/1-D Lookup Table1' */
    rtb_Minus = look1_binlxpw(rtb_uDLookupTable1,
      CombinedTractionLaunchControl_P.uDLookupTable1_bp01Data_g,
      CombinedTractionLaunchControl_P.uDLookupTable1_tableData_b, 13U);

    /* Gain: '<S10>/Gain3' */
    rtb_uDLookupTable1 *= CombinedTractionLaunchControl_P.Gain3_Gain_f;

    /* Lookup_n-D: '<S10>/2-D Lookup Table1' */
    rtb_uDLookupTable1 = look2_binlxpw
      (CombinedTractionLaunchControl_U->FromCM.Gas, rtb_uDLookupTable1,
       CombinedTractionLaunchControl_P.uDLookupTable1_bp01Data_oa,
       CombinedTractionLaunchControl_P.uDLookupTable1_bp02Data_m,
       CombinedTractionLaunchControl_P.uDLookupTable1_tableData_l,
       CombinedTractionLaunchControl_P.uDLookupTable1_maxIndex_m, 6U);

    /* If: '<S10>/If' */
    if (rtb_Minus < rtb_uDLookupTable1) {
      /* Outputs for IfAction SubSystem: '<S10>/If Action Subsystem' incorporates:
       *  ActionPort: '<S16>/Action Port'
       */
      CombinedTractionLaunchControl_IfActionSubsystem(rtb_Minus,
        &CombinedTractionLaunchControl_B->IfActionSubsystem_l);

      /* End of Outputs for SubSystem: '<S10>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S10>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S17>/Action Port'
       */
      CombinedTractionLaunchControl_IfActionSubsystem(rtb_uDLookupTable1,
        &CombinedTractionLaunchControl_B->IfActionSubsystem1_p);

      /* End of Outputs for SubSystem: '<S10>/If Action Subsystem1' */
    }

    /* End of If: '<S10>/If' */

    /* Product: '<S10>/Product1' incorporates:
     *  Constant: '<S10>/GearRatio2'
     *  Sum: '<S10>/Sum'
     */
    CombinedTractionLaunchControl_B->Product1_b =
      (CombinedTractionLaunchControl_B->IfActionSubsystem1_p.In1 +
       CombinedTractionLaunchControl_B->IfActionSubsystem_l.In1) *
      CombinedTractionLaunchControl_P.GearRatio2_Value_j;

    /* Gain: '<S10>/Gain' */
    CombinedTractionLaunchControl_B->Gain_gi =
      CombinedTractionLaunchControl_P.Gain_Gain_f *
      CombinedTractionLaunchControl_B->Product1_b;

    /* Abs: '<S11>/Abs' incorporates:
     *  Constant: '<S11>/GearRatio2'
     *  Product: '<S11>/Product'
     */
    rtb_uDLookupTable1 = fabs
      (CombinedTractionLaunchControl_U->FromCM.WheelIn.RR.rotv *
       CombinedTractionLaunchControl_P.GearRatio2_Value_n);

    /* Lookup_n-D: '<S11>/1-D Lookup Table1' */
    rtb_Minus = look1_binlxpw(rtb_uDLookupTable1,
      CombinedTractionLaunchControl_P.uDLookupTable1_bp01Data_m,
      CombinedTractionLaunchControl_P.uDLookupTable1_tableData_l2, 13U);

    /* Gain: '<S11>/Gain3' */
    rtb_uDLookupTable1 *= CombinedTractionLaunchControl_P.Gain3_Gain_fz;

    /* Lookup_n-D: '<S11>/2-D Lookup Table1' */
    rtb_uDLookupTable1 = look2_binlxpw
      (CombinedTractionLaunchControl_U->FromCM.Gas, rtb_uDLookupTable1,
       CombinedTractionLaunchControl_P.uDLookupTable1_bp01Data_g2,
       CombinedTractionLaunchControl_P.uDLookupTable1_bp02Data_n,
       CombinedTractionLaunchControl_P.uDLookupTable1_tableData_a,
       CombinedTractionLaunchControl_P.uDLookupTable1_maxIndex_g, 6U);

    /* If: '<S11>/If' */
    if (rtb_Minus < rtb_uDLookupTable1) {
      /* Outputs for IfAction SubSystem: '<S11>/If Action Subsystem' incorporates:
       *  ActionPort: '<S18>/Action Port'
       */
      CombinedTractionLaunchControl_IfActionSubsystem(rtb_Minus,
        &CombinedTractionLaunchControl_B->IfActionSubsystem_f);

      /* End of Outputs for SubSystem: '<S11>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S11>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S19>/Action Port'
       */
      CombinedTractionLaunchControl_IfActionSubsystem(rtb_uDLookupTable1,
        &CombinedTractionLaunchControl_B->IfActionSubsystem1_pg);

      /* End of Outputs for SubSystem: '<S11>/If Action Subsystem1' */
    }

    /* End of If: '<S11>/If' */

    /* Product: '<S11>/Product1' incorporates:
     *  Constant: '<S11>/GearRatio2'
     *  Sum: '<S11>/Sum'
     */
    CombinedTractionLaunchControl_B->Product1_l =
      (CombinedTractionLaunchControl_B->IfActionSubsystem1_pg.In1 +
       CombinedTractionLaunchControl_B->IfActionSubsystem_f.In1) *
      CombinedTractionLaunchControl_P.GearRatio2_Value_n;

    /* Gain: '<S11>/Gain' */
    CombinedTractionLaunchControl_B->Gain_c =
      CombinedTractionLaunchControl_P.Gain_Gain_b *
      CombinedTractionLaunchControl_B->Product1_l;

    /* End of Outputs for SubSystem: '<S4>/Launch Control' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/Traction Control' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* Lookup_n-D: '<S21>/2-D Lookup Table' incorporates:
     *  Abs: '<S21>/Abs'
     *  Constant: '<S21>/GearRatio'
     *  Gain: '<S21>/Gain1'
     *  Product: '<S21>/Product'
     */
    CombinedTractionLaunchControl_B->uDLookupTable = look2_binlxpw
      (CombinedTractionLaunchControl_U->FromCM.Gas, fabs
       (CombinedTractionLaunchControl_U->FromCM.WheelIn.FL.rotv *
        CombinedTractionLaunchControl_P.GearRatio_Value) *
       CombinedTractionLaunchControl_P.Gain1_Gain,
       CombinedTractionLaunchControl_P.uDLookupTable_bp01Data_i,
       CombinedTractionLaunchControl_P.uDLookupTable_bp02Data_p,
       CombinedTractionLaunchControl_P.uDLookupTable_tableData_g,
       CombinedTractionLaunchControl_P.uDLookupTable_maxIndex_a, 6U);

    /* S-Function (write_dict): '<S23>/Write CM Dict' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)
        CombinedTractionLaunchControl_DW->WriteCMDict_PWORK.Entry;
      if (!CombinedTractionLaunchControl_DW->WriteCMDict_IWORK.Checked) {
        CombinedTractionLaunchControl_DW->WriteCMDict_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
      }

      value = CombinedTractionLaunchControl_B->uDLookupTable;
      DVA_PokeSL(e, value);
    }

    /* S-Function (read_dict): '<S21>/Read CM Dict' */
    {
      tDDictEntry *e;
      e = (tDDictEntry *)
        CombinedTractionLaunchControl_DW->ReadCMDict_PWORK.Entry;
      if (!CombinedTractionLaunchControl_DW->ReadCMDict_IWORK.Checked) {
        CombinedTractionLaunchControl_DW->ReadCMDict_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
      }

      CombinedTractionLaunchControl_B->ReadCMDict = e->GetFunc(e->Var);
    }

    /* Sum: '<S23>/Minus' incorporates:
     *  Constant: '<S21>/TargetSlip'
     */
    CombinedTractionLaunchControl_B->Minus =
      CombinedTractionLaunchControl_B->ReadCMDict -
      CombinedTractionLaunchControl_P.TargetSlip_Value;

    /* If: '<S23>/If' incorporates:
     *  Constant: '<Root>/TractionMode'
     */
    if ((CombinedTractionLaunchControl_B->Minus < 0.0) ||
        (CombinedTractionLaunchControl_P.TractionMode_Value == 0.0)) {
      /* Outputs for IfAction SubSystem: '<S23>/If Action Subsystem' incorporates:
       *  ActionPort: '<S25>/Action Port'
       */
      CombinedTractionLaunchControl_IfActionSubsystem_i
        (CombinedTractionLaunchControl_B->uDLookupTable,
         &CombinedTractionLaunchControl_B->IfActionSubsystem_i);

      /* End of Outputs for SubSystem: '<S23>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S23>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S26>/Action Port'
       */
      CombinedTractionLaunchControl_IfActionSubsystem1
        (CombinedTractionLaunchControl_B->uDLookupTable,
         CombinedTractionLaunchControl_B->Minus,
         CombinedTractionLaunchControl_U->FromCM.WheelIn.FL.rotv,
         &CombinedTractionLaunchControl_B->IfActionSubsystem1_i,
         &CombinedTractionLaunchControl_P.IfActionSubsystem1_i);

      /* End of Outputs for SubSystem: '<S23>/If Action Subsystem1' */
    }

    /* End of If: '<S23>/If' */

    /* S-Function (write_dict): '<S23>/Write CM Dict2' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)
        CombinedTractionLaunchControl_DW->WriteCMDict2_PWORK.Entry;
      if (!CombinedTractionLaunchControl_DW->WriteCMDict2_IWORK.Checked) {
        CombinedTractionLaunchControl_DW->WriteCMDict2_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
      }

      value = CombinedTractionLaunchControl_B->IfActionSubsystem1_i.Mult;
      DVA_PokeSL(e, value);
    }

    /* Sum: '<S23>/Sum of Elements' */
    CombinedTractionLaunchControl_B->SumofElements =
      CombinedTractionLaunchControl_B->IfActionSubsystem1_i.Mult +
      CombinedTractionLaunchControl_B->IfActionSubsystem_i.torqueRequest;

    /* S-Function (write_dict): '<S23>/Write CM Dict3' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)
        CombinedTractionLaunchControl_DW->WriteCMDict3_PWORK.Entry;
      if (!CombinedTractionLaunchControl_DW->WriteCMDict3_IWORK.Checked) {
        CombinedTractionLaunchControl_DW->WriteCMDict3_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
      }

      value = CombinedTractionLaunchControl_B->SumofElements;
      DVA_PokeSL(e, value);
    }

    /* S-Function (write_dict): '<S23>/Write CM Dict4' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)
        CombinedTractionLaunchControl_DW->WriteCMDict4_PWORK.Entry;
      if (!CombinedTractionLaunchControl_DW->WriteCMDict4_IWORK.Checked) {
        CombinedTractionLaunchControl_DW->WriteCMDict4_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
      }

      value = CombinedTractionLaunchControl_B->ReadCMDict;
      DVA_PokeSL(e, value);
    }

    /* S-Function (write_dict): '<S23>/Write CM Dict5' incorporates:
     *  Constant: '<S21>/TargetSlip'
     */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)
        CombinedTractionLaunchControl_DW->WriteCMDict5_PWORK.Entry;
      if (!CombinedTractionLaunchControl_DW->WriteCMDict5_IWORK.Checked) {
        CombinedTractionLaunchControl_DW->WriteCMDict5_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
      }

      value = CombinedTractionLaunchControl_P.TargetSlip_Value;
      DVA_PokeSL(e, value);
    }

    /* S-Function (write_dict): '<S23>/Write CM Dict6' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)
        CombinedTractionLaunchControl_DW->WriteCMDict6_PWORK.Entry;
      if (!CombinedTractionLaunchControl_DW->WriteCMDict6_IWORK.Checked) {
        CombinedTractionLaunchControl_DW->WriteCMDict6_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
      }

      value = CombinedTractionLaunchControl_B->Minus;
      DVA_PokeSL(e, value);
    }

    /* MinMax: '<S23>/MinMax' */
    CombinedTractionLaunchControl_B->MinMax = fmax
      (CombinedTractionLaunchControl_B->uDLookupTable,
       CombinedTractionLaunchControl_B->SumofElements);

    /* S-Function (write_dict): '<S23>/Write CM Dict7' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)
        CombinedTractionLaunchControl_DW->WriteCMDict7_PWORK.Entry;
      if (!CombinedTractionLaunchControl_DW->WriteCMDict7_IWORK.Checked) {
        CombinedTractionLaunchControl_DW->WriteCMDict7_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
      }

      value = CombinedTractionLaunchControl_B->MinMax;
      DVA_PokeSL(e, value);
    }

    /* Lookup_n-D: '<S21>/2-D Lookup Table1' incorporates:
     *  Abs: '<S21>/Abs1'
     *  Constant: '<S21>/GearRatio'
     *  Gain: '<S21>/Gain3'
     *  Product: '<S21>/Product1'
     */
    rtb_uDLookupTable1 = look2_binlxpw
      (CombinedTractionLaunchControl_U->FromCM.Gas, fabs
       (CombinedTractionLaunchControl_U->FromCM.WheelIn.FR.rotv *
        CombinedTractionLaunchControl_P.GearRatio_Value) *
       CombinedTractionLaunchControl_P.Gain3_Gain_fk,
       CombinedTractionLaunchControl_P.uDLookupTable1_bp01Data_h,
       CombinedTractionLaunchControl_P.uDLookupTable1_bp02Data_mw,
       CombinedTractionLaunchControl_P.uDLookupTable1_tableData_m,
       CombinedTractionLaunchControl_P.uDLookupTable1_maxIndex_o, 6U);

    /* Product: '<S21>/Product2' incorporates:
     *  Constant: '<S21>/GearRatio'
     */
    CombinedTractionLaunchControl_B->Product2 =
      CombinedTractionLaunchControl_B->MinMax *
      CombinedTractionLaunchControl_P.GearRatio_Value;

    /* Gain: '<S21>/Gain' */
    CombinedTractionLaunchControl_B->Gain =
      CombinedTractionLaunchControl_P.Gain_Gain_g *
      CombinedTractionLaunchControl_B->Product2;

    /* S-Function (read_dict): '<S21>/Read CM Dict1' */
    {
      tDDictEntry *e;
      e = (tDDictEntry *)
        CombinedTractionLaunchControl_DW->ReadCMDict1_PWORK.Entry;
      if (!CombinedTractionLaunchControl_DW->ReadCMDict1_IWORK.Checked) {
        CombinedTractionLaunchControl_DW->ReadCMDict1_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
      }

      CombinedTractionLaunchControl_B->ReadCMDict1 = e->GetFunc(e->Var);
    }

    /* Sum: '<S24>/Minus' incorporates:
     *  Constant: '<S21>/TargetSlip'
     */
    rtb_Minus = CombinedTractionLaunchControl_B->ReadCMDict1 -
      CombinedTractionLaunchControl_P.TargetSlip_Value;

    /* If: '<S24>/If' incorporates:
     *  Constant: '<Root>/TractionMode'
     *  Constant: '<S21>/GearRatio'
     */
    if ((rtb_Minus < 0.0) || (CombinedTractionLaunchControl_P.TractionMode_Value
         == 0.0)) {
      /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem' incorporates:
       *  ActionPort: '<S29>/Action Port'
       */
      CombinedTractionLaunchControl_IfActionSubsystem_i(rtb_uDLookupTable1,
        &CombinedTractionLaunchControl_B->IfActionSubsystem_o);

      /* End of Outputs for SubSystem: '<S24>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S30>/Action Port'
       */
      CombinedTractionLaunchControl_IfActionSubsystem1(rtb_uDLookupTable1,
        rtb_Minus, CombinedTractionLaunchControl_P.GearRatio_Value,
        &CombinedTractionLaunchControl_B->IfActionSubsystem1_o,
        &CombinedTractionLaunchControl_P.IfActionSubsystem1_o);

      /* End of Outputs for SubSystem: '<S24>/If Action Subsystem1' */
    }

    /* End of If: '<S24>/If' */

    /* Product: '<S21>/Product3' incorporates:
     *  Constant: '<S21>/GearRatio'
     *  MinMax: '<S24>/MinMax'
     *  Sum: '<S24>/Sum of Elements'
     */
    CombinedTractionLaunchControl_B->Product3 = fmax(rtb_uDLookupTable1,
      CombinedTractionLaunchControl_B->IfActionSubsystem1_o.Mult +
      CombinedTractionLaunchControl_B->IfActionSubsystem_o.torqueRequest) *
      CombinedTractionLaunchControl_P.GearRatio_Value;

    /* Gain: '<S21>/Gain2' */
    CombinedTractionLaunchControl_B->Gain2 =
      CombinedTractionLaunchControl_P.Gain2_Gain *
      CombinedTractionLaunchControl_B->Product3;

    /* Lookup_n-D: '<S22>/2-D Lookup Table' incorporates:
     *  Abs: '<S22>/Abs'
     *  Constant: '<S22>/GearRatio'
     *  Gain: '<S22>/Gain1'
     *  Product: '<S22>/Product'
     */
    CombinedTractionLaunchControl_B->uDLookupTable_k = look2_binlxpw
      (CombinedTractionLaunchControl_U->FromCM.Gas, fabs
       (CombinedTractionLaunchControl_U->FromCM.WheelIn.RL.rotv *
        CombinedTractionLaunchControl_P.GearRatio_Value_f) *
       CombinedTractionLaunchControl_P.Gain1_Gain_d,
       CombinedTractionLaunchControl_P.uDLookupTable_bp01Data_n,
       CombinedTractionLaunchControl_P.uDLookupTable_bp02Data_a,
       CombinedTractionLaunchControl_P.uDLookupTable_tableData_j,
       CombinedTractionLaunchControl_P.uDLookupTable_maxIndex_n, 6U);

    /* Lookup_n-D: '<S22>/2-D Lookup Table1' incorporates:
     *  Abs: '<S22>/Abs1'
     *  Constant: '<S22>/GearRatio'
     *  Gain: '<S22>/Gain3'
     *  Product: '<S22>/Product1'
     */
    rtb_uDLookupTable1 = look2_binlxpw
      (CombinedTractionLaunchControl_U->FromCM.Gas, fabs
       (CombinedTractionLaunchControl_U->FromCM.WheelIn.RR.rotv *
        CombinedTractionLaunchControl_P.GearRatio_Value_f) *
       CombinedTractionLaunchControl_P.Gain3_Gain_fze,
       CombinedTractionLaunchControl_P.uDLookupTable1_bp01Data_at,
       CombinedTractionLaunchControl_P.uDLookupTable1_bp02Data_j,
       CombinedTractionLaunchControl_P.uDLookupTable1_tableData_df,
       CombinedTractionLaunchControl_P.uDLookupTable1_maxIndex_m1, 6U);

    /* S-Function (read_dict): '<S22>/Read CM Dict' */
    {
      tDDictEntry *e;
      e = (tDDictEntry *)
        CombinedTractionLaunchControl_DW->ReadCMDict_PWORK_c.Entry;
      if (!CombinedTractionLaunchControl_DW->ReadCMDict_IWORK_d.Checked) {
        CombinedTractionLaunchControl_DW->ReadCMDict_IWORK_d.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
      }

      CombinedTractionLaunchControl_B->ReadCMDict_j = e->GetFunc(e->Var);
    }

    /* Sum: '<S34>/Minus' incorporates:
     *  Constant: '<S22>/TargetSlip'
     */
    rtb_Minus = CombinedTractionLaunchControl_B->ReadCMDict_j -
      CombinedTractionLaunchControl_P.TargetSlip_Value_n;

    /* If: '<S34>/If' incorporates:
     *  Constant: '<Root>/TractionMode'
     */
    if ((rtb_Minus < 0.0) || (CombinedTractionLaunchControl_P.TractionMode_Value
         == 0.0)) {
      /* Outputs for IfAction SubSystem: '<S34>/If Action Subsystem' incorporates:
       *  ActionPort: '<S39>/Action Port'
       */
      CombinedTractionLaunchControl_IfActionSubsystem_i
        (CombinedTractionLaunchControl_B->uDLookupTable_k,
         &CombinedTractionLaunchControl_B->IfActionSubsystem_a);

      /* End of Outputs for SubSystem: '<S34>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S34>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S40>/Action Port'
       */
      /* Lookup_n-D: '<S40>/2-D Lookup Table' */
      CombinedTractionLaunchControl_B->uDLookupTable_c = look2_binlxpw(rtb_Minus,
        CombinedTractionLaunchControl_U->FromCM.WheelIn.RL.rotv,
        CombinedTractionLaunchControl_P.uDLookupTable_bp01Data,
        CombinedTractionLaunchControl_P.uDLookupTable_bp02Data,
        CombinedTractionLaunchControl_P.uDLookupTable_tableData,
        CombinedTractionLaunchControl_P.uDLookupTable_maxIndex, 6U);

      /* Gain: '<S40>/Gain' */
      rtb_Minus = CombinedTractionLaunchControl_P.Gain_Gain_c *
        CombinedTractionLaunchControl_B->uDLookupTable_c;

      /* If: '<S40>/If' incorporates:
       *  Constant: '<S40>/Constant'
       */
      if (rtb_Minus > 1.0) {
        /* Outputs for IfAction SubSystem: '<S40>/If Action Subsystem' incorporates:
         *  ActionPort: '<S41>/Action Port'
         */
        CombinedTractionLaunchControl_IfActionSubsystem_i
          (CombinedTractionLaunchControl_P.Constant_Value,
           &CombinedTractionLaunchControl_B->IfActionSubsystem_lk);

        /* End of Outputs for SubSystem: '<S40>/If Action Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S40>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S42>/Action Port'
         */
        CombinedTractionLaunchControl_IfActionSubsystem_i(rtb_Minus,
          &CombinedTractionLaunchControl_B->IfActionSubsystem1_j);

        /* End of Outputs for SubSystem: '<S40>/If Action Subsystem1' */
      }

      /* End of If: '<S40>/If' */

      /* Sum: '<S40>/Subtract' incorporates:
       *  Constant: '<S40>/Constant'
       *  Sum: '<S40>/Subtract1'
       */
      CombinedTractionLaunchControl_B->Subtract =
        CombinedTractionLaunchControl_P.Constant_Value -
        (CombinedTractionLaunchControl_B->IfActionSubsystem_lk.torqueRequest +
         CombinedTractionLaunchControl_B->IfActionSubsystem1_j.torqueRequest);

      /* Product: '<S40>/Mult' */
      CombinedTractionLaunchControl_B->Mult =
        CombinedTractionLaunchControl_B->uDLookupTable_k *
        CombinedTractionLaunchControl_B->Subtract;

      /* S-Function (write_dict): '<S40>/Write CM Dict' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)
          CombinedTractionLaunchControl_DW->WriteCMDict_PWORK_k.Entry;
        if (!CombinedTractionLaunchControl_DW->WriteCMDict_IWORK_g.Checked) {
          CombinedTractionLaunchControl_DW->WriteCMDict_IWORK_g.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
        }

        value = CombinedTractionLaunchControl_B->Mult;
        DVA_PokeSL(e, value);
      }

      /* S-Function (write_dict): '<S40>/Write CM Dict1' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)
          CombinedTractionLaunchControl_DW->WriteCMDict1_PWORK.Entry;
        if (!CombinedTractionLaunchControl_DW->WriteCMDict1_IWORK.Checked) {
          CombinedTractionLaunchControl_DW->WriteCMDict1_IWORK.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
        }

        value = CombinedTractionLaunchControl_B->uDLookupTable_k;
        DVA_PokeSL(e, value);
      }

      /* S-Function (write_dict): '<S40>/Write CM Dict2' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)
          CombinedTractionLaunchControl_DW->WriteCMDict2_PWORK_j.Entry;
        if (!CombinedTractionLaunchControl_DW->WriteCMDict2_IWORK_m.Checked) {
          CombinedTractionLaunchControl_DW->WriteCMDict2_IWORK_m.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
        }

        value = CombinedTractionLaunchControl_B->Subtract;
        DVA_PokeSL(e, value);
      }

      /* S-Function (write_dict): '<S40>/Write CM Dict3' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)
          CombinedTractionLaunchControl_DW->WriteCMDict3_PWORK_b.Entry;
        if (!CombinedTractionLaunchControl_DW->WriteCMDict3_IWORK_a.Checked) {
          CombinedTractionLaunchControl_DW->WriteCMDict3_IWORK_a.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
        }

        value = CombinedTractionLaunchControl_B->uDLookupTable_c;
        DVA_PokeSL(e, value);
      }
    }

    /* End of If: '<S34>/If' */

    /* Product: '<S22>/Product2' incorporates:
     *  Constant: '<S22>/GearRatio'
     *  MinMax: '<S34>/MinMax'
     *  Sum: '<S34>/Sum of Elements'
     */
    CombinedTractionLaunchControl_B->Product2_o = fmax
      (CombinedTractionLaunchControl_B->uDLookupTable_k,
       CombinedTractionLaunchControl_B->Mult +
       CombinedTractionLaunchControl_B->IfActionSubsystem_a.torqueRequest) *
      CombinedTractionLaunchControl_P.GearRatio_Value_f;

    /* Gain: '<S22>/Gain' */
    CombinedTractionLaunchControl_B->Gain_g =
      CombinedTractionLaunchControl_P.Gain_Gain_h *
      CombinedTractionLaunchControl_B->Product2_o;

    /* S-Function (read_dict): '<S22>/Read CM Dict1' */
    {
      tDDictEntry *e;
      e = (tDDictEntry *)
        CombinedTractionLaunchControl_DW->ReadCMDict1_PWORK_d.Entry;
      if (!CombinedTractionLaunchControl_DW->ReadCMDict1_IWORK_l.Checked) {
        CombinedTractionLaunchControl_DW->ReadCMDict1_IWORK_l.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'CombinedTractionLaunchControl'");
      }

      CombinedTractionLaunchControl_B->ReadCMDict1_j = e->GetFunc(e->Var);
    }

    /* Sum: '<S33>/Minus' incorporates:
     *  Constant: '<S22>/TargetSlip'
     */
    rtb_Minus = CombinedTractionLaunchControl_B->ReadCMDict1_j -
      CombinedTractionLaunchControl_P.TargetSlip_Value_n;

    /* If: '<S33>/If' incorporates:
     *  Constant: '<Root>/TractionMode'
     */
    if ((rtb_Minus < 0.0) || (CombinedTractionLaunchControl_P.TractionMode_Value
         == 0.0)) {
      /* Outputs for IfAction SubSystem: '<S33>/If Action Subsystem' incorporates:
       *  ActionPort: '<S35>/Action Port'
       */
      CombinedTractionLaunchControl_IfActionSubsystem_i(rtb_uDLookupTable1,
        &CombinedTractionLaunchControl_B->IfActionSubsystem_m);

      /* End of Outputs for SubSystem: '<S33>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S33>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S36>/Action Port'
       */
      CombinedTractionLaunchControl_IfActionSubsystem1(rtb_uDLookupTable1,
        rtb_Minus, CombinedTractionLaunchControl_U->FromCM.WheelIn.RR.rotv,
        &CombinedTractionLaunchControl_B->IfActionSubsystem1_pa,
        &CombinedTractionLaunchControl_P.IfActionSubsystem1_pa);

      /* End of Outputs for SubSystem: '<S33>/If Action Subsystem1' */
    }

    /* End of If: '<S33>/If' */

    /* Product: '<S22>/Product3' incorporates:
     *  Constant: '<S22>/GearRatio'
     *  MinMax: '<S33>/MinMax'
     *  Sum: '<S33>/Sum of Elements'
     */
    CombinedTractionLaunchControl_B->Product3_c = fmax(rtb_uDLookupTable1,
      CombinedTractionLaunchControl_B->IfActionSubsystem1_pa.Mult +
      CombinedTractionLaunchControl_B->IfActionSubsystem_m.torqueRequest) *
      CombinedTractionLaunchControl_P.GearRatio_Value_f;

    /* Gain: '<S22>/Gain2' */
    CombinedTractionLaunchControl_B->Gain2_e =
      CombinedTractionLaunchControl_P.Gain2_Gain_f *
      CombinedTractionLaunchControl_B->Product3_c;

    /* End of Outputs for SubSystem: '<S4>/Traction Control' */
  }

  /* End of If: '<S4>/If' */

  /* Sum: '<S4>/Sum' */
  CombinedTractionLaunchControl_Y->ToCM.WheelOut.FL.Trq_Drive =
    CombinedTractionLaunchControl_B->Product1 +
    CombinedTractionLaunchControl_B->Product2;

  /* Sum: '<S4>/Sum1' */
  CombinedTractionLaunchControl_Y->ToCM.WheelOut.FL.Trq_Supp2WC =
    CombinedTractionLaunchControl_B->Gain_n +
    CombinedTractionLaunchControl_B->Gain;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.FL.Inert_in'
   */
  CombinedTractionLaunchControl_Y->ToCM.WheelOut.FL.Inert_in =
    CombinedTractionLaunchControl_P.WheelOutFLInert_in_Value;

  /* Sum: '<S4>/Sum2' */
  CombinedTractionLaunchControl_Y->ToCM.WheelOut.FR.Trq_Drive =
    CombinedTractionLaunchControl_B->Product1_n +
    CombinedTractionLaunchControl_B->Product3;

  /* Sum: '<S4>/Sum3' */
  CombinedTractionLaunchControl_Y->ToCM.WheelOut.FR.Trq_Supp2WC =
    CombinedTractionLaunchControl_B->Gain_np +
    CombinedTractionLaunchControl_B->Gain2;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.FR.Inert_in'
   */
  CombinedTractionLaunchControl_Y->ToCM.WheelOut.FR.Inert_in =
    CombinedTractionLaunchControl_P.WheelOutFRInert_in_Value;

  /* Sum: '<S4>/Sum4' */
  CombinedTractionLaunchControl_Y->ToCM.WheelOut.RL.Trq_Drive =
    CombinedTractionLaunchControl_B->Product1_b +
    CombinedTractionLaunchControl_B->Product2_o;

  /* Sum: '<S4>/Sum5' */
  CombinedTractionLaunchControl_Y->ToCM.WheelOut.RL.Trq_Supp2WC =
    CombinedTractionLaunchControl_B->Gain_gi +
    CombinedTractionLaunchControl_B->Gain_g;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.RL.Inert_in'
   */
  CombinedTractionLaunchControl_Y->ToCM.WheelOut.RL.Inert_in =
    CombinedTractionLaunchControl_P.WheelOutRLInert_in_Value;

  /* Sum: '<S4>/Sum6' */
  CombinedTractionLaunchControl_Y->ToCM.WheelOut.RR.Trq_Drive =
    CombinedTractionLaunchControl_B->Product1_l +
    CombinedTractionLaunchControl_B->Product3_c;

  /* Sum: '<S4>/Sum7' */
  CombinedTractionLaunchControl_Y->ToCM.WheelOut.RR.Trq_Supp2WC =
    CombinedTractionLaunchControl_B->Gain_c +
    CombinedTractionLaunchControl_B->Gain2_e;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.RR.Inert_in'
   */
  CombinedTractionLaunchControl_Y->ToCM.WheelOut.RR.Inert_in =
    CombinedTractionLaunchControl_P.WheelOutRRInert_in_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/PowerDelta.Diffs'
   *  Constant: '<S1>/PowerDelta.Inert'
   *  Constant: '<S1>/PowerDelta.Inert_DL'
   *  Constant: '<S1>/PowerDelta.PlanetGear'
   *  Constant: '<S1>/PowerDelta.PowerSupply'
   *  Constant: '<S1>/PowerDelta.Shafts'
   *  Constant: '<S1>/PowerDelta.Spring_DL'
   */
  CombinedTractionLaunchControl_Y->ToCM.PowerDelta.PlanetGear =
    CombinedTractionLaunchControl_P.PowerDeltaPlanetGear_Value;
  CombinedTractionLaunchControl_Y->ToCM.PowerDelta.Diffs =
    CombinedTractionLaunchControl_P.PowerDeltaDiffs_Value;
  CombinedTractionLaunchControl_Y->ToCM.PowerDelta.Shafts =
    CombinedTractionLaunchControl_P.PowerDeltaShafts_Value;
  CombinedTractionLaunchControl_Y->ToCM.PowerDelta.Spring_DL =
    CombinedTractionLaunchControl_P.PowerDeltaSpring_DL_Value;
  CombinedTractionLaunchControl_Y->ToCM.PowerDelta.Inert_DL =
    CombinedTractionLaunchControl_P.PowerDeltaInert_DL_Value;
  CombinedTractionLaunchControl_Y->ToCM.PowerDelta.Inert =
    CombinedTractionLaunchControl_P.PowerDeltaInert_Value;
  CombinedTractionLaunchControl_Y->ToCM.PowerDelta.PowerSupply =
    CombinedTractionLaunchControl_P.PowerDeltaPowerSupply_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BCU_Status'
   *  Constant: '<S1>/DL_iDiff_mean'
   *  Constant: '<S1>/ECU_Status'
   *  Constant: '<S1>/MCU_Status'
   *  Constant: '<S1>/TCU_Status'
   *  Outport: '<Root>/ToCM'
   */
  CombinedTractionLaunchControl_Y->ToCM.ECU_Status =
    CombinedTractionLaunchControl_P.ECU_Status_Value;
  CombinedTractionLaunchControl_Y->ToCM.MCU_Status =
    CombinedTractionLaunchControl_P.MCU_Status_Value;
  CombinedTractionLaunchControl_Y->ToCM.TCU_Status =
    CombinedTractionLaunchControl_P.TCU_Status_Value;
  CombinedTractionLaunchControl_Y->ToCM.BCU_Status =
    CombinedTractionLaunchControl_P.BCU_Status_Value;
  CombinedTractionLaunchControl_Y->ToCM.Trq_Supp2Bdy1.rx = rtb_Trq_Supp2Bdy1_rx;
  CombinedTractionLaunchControl_Y->ToCM.Trq_Supp2Bdy1.ry = rtb_Trq_Supp2Bdy1_ry;
  CombinedTractionLaunchControl_Y->ToCM.Trq_Supp2Bdy1.rz = rtb_Trq_Supp2Bdy1_rz;
  CombinedTractionLaunchControl_Y->ToCM.Trq_Supp2Bdy1B.rx =
    rtb_Trq_Supp2Bdy1B_rx;
  CombinedTractionLaunchControl_Y->ToCM.Trq_Supp2Bdy1B.ry =
    rtb_Trq_Supp2Bdy1B_ry;
  CombinedTractionLaunchControl_Y->ToCM.Trq_Supp2Bdy1B.rz =
    rtb_Trq_Supp2Bdy1B_rz;
  CombinedTractionLaunchControl_Y->ToCM.DL_iDiff_mean =
    CombinedTractionLaunchControl_P.DL_iDiff_mean_Value;

  /* If: '<Root>/If' incorporates:
   *  Constant: '<Root>/FullThrottle'
   *  Constant: '<Root>/TractionMode'
   *  Inport: '<Root>/FromCM'
   */
  if (CombinedTractionLaunchControl_P.TractionMode_Value == 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    CombinedTractionLaunchControl_IfActionSubsystem
      (CombinedTractionLaunchControl_U->FromCM.Gas,
       &CombinedTractionLaunchControl_B->IfActionSubsystem);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    CombinedTractionLaunchControl_IfActionSubsystem
      (CombinedTractionLaunchControl_P.FullThrottle_Value,
       &CombinedTractionLaunchControl_B->IfActionSubsystem1);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  }

  /* End of If: '<Root>/If' */
}

/* Model initialize function */
void CombinedTractionLaunchControl_initialize
  (RT_MODEL_CombinedTractionLaunchControl_T *const
   CombinedTractionLaunchControl_M)
{
  DW_CombinedTractionLaunchControl_T *CombinedTractionLaunchControl_DW =
    ((DW_CombinedTractionLaunchControl_T *)
     CombinedTractionLaunchControl_M->dwork);
  B_CombinedTractionLaunchControl_T *CombinedTractionLaunchControl_B =
    ((B_CombinedTractionLaunchControl_T *)
     CombinedTractionLaunchControl_M->blockIO);

  /* Start for IfAction SubSystem: '<S4>/Launch Control' */
  /* Start for S-Function (write_dict): '<S8>/Write CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Caleb.IfOne", NULL);
    CombinedTractionLaunchControl_DW->WriteCMDict_IWORK_l.Checked = 0;
    CombinedTractionLaunchControl_DW->WriteCMDict_PWORK_d.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S8>/Write CM Dict1' */
  {
    char **namevec = CM_Names2StrVec("Caleb.IfTwo", NULL);
    CombinedTractionLaunchControl_DW->WriteCMDict1_IWORK_o.Checked = 0;
    CombinedTractionLaunchControl_DW->WriteCMDict1_PWORK_g.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S8>/Write CM Dict2' */
  {
    char **namevec = CM_Names2StrVec("Caleb.IfSum", NULL);
    CombinedTractionLaunchControl_DW->WriteCMDict2_IWORK_g.Checked = 0;
    CombinedTractionLaunchControl_DW->WriteCMDict2_PWORK_f.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for IfAction SubSystem: '<S4>/Traction Control' */
  /* Start for S-Function (write_dict): '<S23>/Write CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Caleb.TorqueRequest", NULL);
    CombinedTractionLaunchControl_DW->WriteCMDict_IWORK.Checked = 0;
    CombinedTractionLaunchControl_DW->WriteCMDict_PWORK.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (read_dict): '<S21>/Read CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Car.LongSlipFL", NULL);
    CombinedTractionLaunchControl_DW->ReadCMDict_IWORK.Checked = 0;
    CombinedTractionLaunchControl_DW->ReadCMDict_PWORK.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S23>/Write CM Dict2' */
  {
    char **namevec = CM_Names2StrVec("Caleb.IfOutput", NULL);
    CombinedTractionLaunchControl_DW->WriteCMDict2_IWORK.Checked = 0;
    CombinedTractionLaunchControl_DW->WriteCMDict2_PWORK.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S23>/Write CM Dict3' */
  {
    char **namevec = CM_Names2StrVec("Caleb.TorquePidOut", NULL);
    CombinedTractionLaunchControl_DW->WriteCMDict3_IWORK.Checked = 0;
    CombinedTractionLaunchControl_DW->WriteCMDict3_PWORK.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S23>/Write CM Dict4' */
  {
    char **namevec = CM_Names2StrVec("Caleb.TargetSlip", NULL);
    CombinedTractionLaunchControl_DW->WriteCMDict4_IWORK.Checked = 0;
    CombinedTractionLaunchControl_DW->WriteCMDict4_PWORK.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S23>/Write CM Dict5' incorporates:
   *  Constant: '<S21>/TargetSlip'
   */
  {
    char **namevec = CM_Names2StrVec("Caleb.ActualSlip", NULL);
    CombinedTractionLaunchControl_DW->WriteCMDict5_IWORK.Checked = 0;
    CombinedTractionLaunchControl_DW->WriteCMDict5_PWORK.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S23>/Write CM Dict6' */
  {
    char **namevec = CM_Names2StrVec("Caleb.DiffSlip", NULL);
    CombinedTractionLaunchControl_DW->WriteCMDict6_IWORK.Checked = 0;
    CombinedTractionLaunchControl_DW->WriteCMDict6_PWORK.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S23>/Write CM Dict7' */
  {
    char **namevec = CM_Names2StrVec("Caleb.TorqueOut", NULL);
    CombinedTractionLaunchControl_DW->WriteCMDict7_IWORK.Checked = 0;
    CombinedTractionLaunchControl_DW->WriteCMDict7_PWORK.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (read_dict): '<S21>/Read CM Dict1' */
  {
    char **namevec = CM_Names2StrVec("Car.LongSlipFR", NULL);
    CombinedTractionLaunchControl_DW->ReadCMDict1_IWORK.Checked = 0;
    CombinedTractionLaunchControl_DW->ReadCMDict1_PWORK.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (read_dict): '<S22>/Read CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Car.LongSlipFL", NULL);
    CombinedTractionLaunchControl_DW->ReadCMDict_IWORK_d.Checked = 0;
    CombinedTractionLaunchControl_DW->ReadCMDict_PWORK_c.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for IfAction SubSystem: '<S34>/If Action Subsystem1' */
  /* Start for S-Function (write_dict): '<S40>/Write CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Caleb.torqueNew", NULL);
    CombinedTractionLaunchControl_DW->WriteCMDict_IWORK_g.Checked = 0;
    CombinedTractionLaunchControl_DW->WriteCMDict_PWORK_k.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S40>/Write CM Dict1' */
  {
    char **namevec = CM_Names2StrVec("Caleb.torqueOld", NULL);
    CombinedTractionLaunchControl_DW->WriteCMDict1_IWORK.Checked = 0;
    CombinedTractionLaunchControl_DW->WriteCMDict1_PWORK.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S40>/Write CM Dict2' */
  {
    char **namevec = CM_Names2StrVec("Caleb.Percent", NULL);
    CombinedTractionLaunchControl_DW->WriteCMDict2_IWORK_m.Checked = 0;
    CombinedTractionLaunchControl_DW->WriteCMDict2_PWORK_j.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S40>/Write CM Dict3' */
  {
    char **namevec = CM_Names2StrVec("Caleb.Table", NULL);
    CombinedTractionLaunchControl_DW->WriteCMDict3_IWORK_a.Checked = 0;
    CombinedTractionLaunchControl_DW->WriteCMDict3_PWORK_b.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (read_dict): '<S22>/Read CM Dict1' */
  {
    char **namevec = CM_Names2StrVec("Car.LongSlipFR", NULL);
    CombinedTractionLaunchControl_DW->ReadCMDict1_IWORK_l.Checked = 0;
    CombinedTractionLaunchControl_DW->ReadCMDict1_PWORK_d.Entry = (void *)
      DDictGetEntryOrFake(namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* End of Start for SubSystem: '<S4>/Traction Control' */

  /* SystemInitialize for IfAction SubSystem: '<S4>/Launch Control' */
  /* SystemInitialize for IfAction SubSystem: '<S8>/If Action Subsystem' */
  CombinedTractionLaunchControl_IfActionSubsystem_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem_n,
     &CombinedTractionLaunchControl_P.IfActionSubsystem_n);

  /* End of SystemInitialize for SubSystem: '<S8>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S8>/If Action Subsystem1' */
  CombinedTractionLaunchControl_IfActionSubsystem_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem1_g,
     &CombinedTractionLaunchControl_P.IfActionSubsystem1_g);

  /* End of SystemInitialize for SubSystem: '<S8>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S9>/If Action Subsystem' */
  CombinedTractionLaunchControl_IfActionSubsystem_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem_p,
     &CombinedTractionLaunchControl_P.IfActionSubsystem_p);

  /* End of SystemInitialize for SubSystem: '<S9>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S9>/If Action Subsystem1' */
  CombinedTractionLaunchControl_IfActionSubsystem_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem1_b,
     &CombinedTractionLaunchControl_P.IfActionSubsystem1_b);

  /* End of SystemInitialize for SubSystem: '<S9>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S10>/If Action Subsystem' */
  CombinedTractionLaunchControl_IfActionSubsystem_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem_l,
     &CombinedTractionLaunchControl_P.IfActionSubsystem_l);

  /* End of SystemInitialize for SubSystem: '<S10>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S10>/If Action Subsystem1' */
  CombinedTractionLaunchControl_IfActionSubsystem_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem1_p,
     &CombinedTractionLaunchControl_P.IfActionSubsystem1_p);

  /* End of SystemInitialize for SubSystem: '<S10>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S11>/If Action Subsystem' */
  CombinedTractionLaunchControl_IfActionSubsystem_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem_f,
     &CombinedTractionLaunchControl_P.IfActionSubsystem_f);

  /* End of SystemInitialize for SubSystem: '<S11>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S11>/If Action Subsystem1' */
  CombinedTractionLaunchControl_IfActionSubsystem_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem1_pg,
     &CombinedTractionLaunchControl_P.IfActionSubsystem1_pg);

  /* End of SystemInitialize for SubSystem: '<S11>/If Action Subsystem1' */

  /* SystemInitialize for Outport: '<S5>/FL trq' */
  CombinedTractionLaunchControl_B->Product1 =
    CombinedTractionLaunchControl_P.FLtrq_Y0;

  /* SystemInitialize for Outport: '<S5>/FL trq inv' */
  CombinedTractionLaunchControl_B->Gain_n =
    CombinedTractionLaunchControl_P.FLtrqinv_Y0;

  /* SystemInitialize for Outport: '<S5>/FR trq' */
  CombinedTractionLaunchControl_B->Product1_n =
    CombinedTractionLaunchControl_P.FRtrq_Y0;

  /* SystemInitialize for Outport: '<S5>/FR trq inv' */
  CombinedTractionLaunchControl_B->Gain_np =
    CombinedTractionLaunchControl_P.FRtrqinv_Y0;

  /* SystemInitialize for Outport: '<S5>/RL trq' */
  CombinedTractionLaunchControl_B->Product1_b =
    CombinedTractionLaunchControl_P.RLtrq_Y0;

  /* SystemInitialize for Outport: '<S5>/RL trq inv' */
  CombinedTractionLaunchControl_B->Gain_gi =
    CombinedTractionLaunchControl_P.RLtrqinv_Y0;

  /* SystemInitialize for Outport: '<S5>/RR trq' */
  CombinedTractionLaunchControl_B->Product1_l =
    CombinedTractionLaunchControl_P.RRtrq_Y0;

  /* SystemInitialize for Outport: '<S5>/RR trq inv' */
  CombinedTractionLaunchControl_B->Gain_c =
    CombinedTractionLaunchControl_P.RRtrqinv_Y0;

  /* End of SystemInitialize for SubSystem: '<S4>/Launch Control' */

  /* SystemInitialize for IfAction SubSystem: '<S4>/Traction Control' */
  /* SystemInitialize for IfAction SubSystem: '<S23>/If Action Subsystem' */
  CombinedTractionLaunchControl_IfActionSubsystem_l_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem_i,
     &CombinedTractionLaunchControl_P.IfActionSubsystem_i);

  /* End of SystemInitialize for SubSystem: '<S23>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S23>/If Action Subsystem1' */
  CombinedTractionLaunchControl_IfActionSubsystem1_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem1_i,
     &CombinedTractionLaunchControl_P.IfActionSubsystem1_i);

  /* End of SystemInitialize for SubSystem: '<S23>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S24>/If Action Subsystem' */
  CombinedTractionLaunchControl_IfActionSubsystem_l_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem_o,
     &CombinedTractionLaunchControl_P.IfActionSubsystem_o);

  /* End of SystemInitialize for SubSystem: '<S24>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S24>/If Action Subsystem1' */
  CombinedTractionLaunchControl_IfActionSubsystem1_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem1_o,
     &CombinedTractionLaunchControl_P.IfActionSubsystem1_o);

  /* End of SystemInitialize for SubSystem: '<S24>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S34>/If Action Subsystem' */
  CombinedTractionLaunchControl_IfActionSubsystem_l_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem_a,
     &CombinedTractionLaunchControl_P.IfActionSubsystem_a);

  /* End of SystemInitialize for SubSystem: '<S34>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S34>/If Action Subsystem1' */
  /* SystemInitialize for IfAction SubSystem: '<S40>/If Action Subsystem' */
  CombinedTractionLaunchControl_IfActionSubsystem_l_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem_lk,
     &CombinedTractionLaunchControl_P.IfActionSubsystem_lk);

  /* End of SystemInitialize for SubSystem: '<S40>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S40>/If Action Subsystem1' */
  CombinedTractionLaunchControl_IfActionSubsystem_l_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem1_j,
     &CombinedTractionLaunchControl_P.IfActionSubsystem1_j);

  /* End of SystemInitialize for SubSystem: '<S40>/If Action Subsystem1' */

  /* SystemInitialize for Outport: '<S40>/TorqueOut' */
  CombinedTractionLaunchControl_B->Mult =
    CombinedTractionLaunchControl_P.TorqueOut_Y0;

  /* End of SystemInitialize for SubSystem: '<S34>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S33>/If Action Subsystem' */
  CombinedTractionLaunchControl_IfActionSubsystem_l_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem_m,
     &CombinedTractionLaunchControl_P.IfActionSubsystem_m);

  /* End of SystemInitialize for SubSystem: '<S33>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S33>/If Action Subsystem1' */
  CombinedTractionLaunchControl_IfActionSubsystem1_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem1_pa,
     &CombinedTractionLaunchControl_P.IfActionSubsystem1_pa);

  /* End of SystemInitialize for SubSystem: '<S33>/If Action Subsystem1' */

  /* SystemInitialize for Outport: '<S6>/FL trq' */
  CombinedTractionLaunchControl_B->Product2 =
    CombinedTractionLaunchControl_P.FLtrq_Y0_e;

  /* SystemInitialize for Outport: '<S6>/FL trq inv' */
  CombinedTractionLaunchControl_B->Gain =
    CombinedTractionLaunchControl_P.FLtrqinv_Y0_h;

  /* SystemInitialize for Outport: '<S6>/FR trq' */
  CombinedTractionLaunchControl_B->Product3 =
    CombinedTractionLaunchControl_P.FRtrq_Y0_l;

  /* SystemInitialize for Outport: '<S6>/FR trq inv' */
  CombinedTractionLaunchControl_B->Gain2 =
    CombinedTractionLaunchControl_P.FRtrqinv_Y0_c;

  /* SystemInitialize for Outport: '<S6>/RL trq' */
  CombinedTractionLaunchControl_B->Product2_o =
    CombinedTractionLaunchControl_P.RLtrq_Y0_f;

  /* SystemInitialize for Outport: '<S6>/RL trq inv' */
  CombinedTractionLaunchControl_B->Gain_g =
    CombinedTractionLaunchControl_P.RLtrqinv_Y0_p;

  /* SystemInitialize for Outport: '<S6>/RR trq' */
  CombinedTractionLaunchControl_B->Product3_c =
    CombinedTractionLaunchControl_P.RRtrq_Y0_a;

  /* SystemInitialize for Outport: '<S6>/RR trq inv' */
  CombinedTractionLaunchControl_B->Gain2_e =
    CombinedTractionLaunchControl_P.RRtrqinv_Y0_n;

  /* End of SystemInitialize for SubSystem: '<S4>/Traction Control' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem' */
  CombinedTractionLaunchControl_IfActionSubsystem_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem,
     &CombinedTractionLaunchControl_P.IfActionSubsystem);

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem1' */
  CombinedTractionLaunchControl_IfActionSubsystem_Init
    (&CombinedTractionLaunchControl_B->IfActionSubsystem1,
     &CombinedTractionLaunchControl_P.IfActionSubsystem1);

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem1' */
}

/* Model terminate function */
void CombinedTractionLaunchControl_terminate
  (RT_MODEL_CombinedTractionLaunchControl_T * CombinedTractionLaunchControl_M)
{
  /* model code */
  rt_FREE(CombinedTractionLaunchControl_M->blockIO);
  rt_FREE(CombinedTractionLaunchControl_M->inputs);
  rt_FREE(CombinedTractionLaunchControl_M->outputs);
  rt_FREE(CombinedTractionLaunchControl_M->dwork);
  rt_FREE(CombinedTractionLaunchControl_M);
}

/* Model data allocation function */
RT_MODEL_CombinedTractionLaunchControl_T *CombinedTractionLaunchControl(struct
  tInfos *inf)
{
  RT_MODEL_CombinedTractionLaunchControl_T *CombinedTractionLaunchControl_M;
  CombinedTractionLaunchControl_M = (RT_MODEL_CombinedTractionLaunchControl_T *)
    malloc(sizeof(RT_MODEL_CombinedTractionLaunchControl_T));
  if (CombinedTractionLaunchControl_M == NULL) {
    return NULL;
  }

  (void) memset((char *)CombinedTractionLaunchControl_M, 0,
                sizeof(RT_MODEL_CombinedTractionLaunchControl_T));
  MatSupp_Init();

  /* block I/O */
  {
    B_CombinedTractionLaunchControl_T *b = (B_CombinedTractionLaunchControl_T *)
      malloc(sizeof(B_CombinedTractionLaunchControl_T));
    rt_VALIDATE_MEMORY(CombinedTractionLaunchControl_M,b);
    CombinedTractionLaunchControl_M->blockIO = (b);
  }

  /* states (dwork) */
  {
    DW_CombinedTractionLaunchControl_T *dwork =
      (DW_CombinedTractionLaunchControl_T *) malloc(sizeof
      (DW_CombinedTractionLaunchControl_T));
    rt_VALIDATE_MEMORY(CombinedTractionLaunchControl_M,dwork);
    CombinedTractionLaunchControl_M->dwork = (dwork);
  }

  /* external inputs */
  {
    ExtU_CombinedTractionLaunchControl_T *CombinedTractionLaunchControl_U =
      (ExtU_CombinedTractionLaunchControl_T *) malloc(sizeof
      (ExtU_CombinedTractionLaunchControl_T));
    rt_VALIDATE_MEMORY(CombinedTractionLaunchControl_M,
                       CombinedTractionLaunchControl_U);
    CombinedTractionLaunchControl_M->inputs =
      (((ExtU_CombinedTractionLaunchControl_T *) CombinedTractionLaunchControl_U));
  }

  /* external outputs */
  {
    ExtY_CombinedTractionLaunchControl_T *CombinedTractionLaunchControl_Y =
      (ExtY_CombinedTractionLaunchControl_T *) malloc(sizeof
      (ExtY_CombinedTractionLaunchControl_T));
    rt_VALIDATE_MEMORY(CombinedTractionLaunchControl_M,
                       CombinedTractionLaunchControl_Y);
    CombinedTractionLaunchControl_M->outputs = (CombinedTractionLaunchControl_Y);
  }

  /* CarMaker parameter tuning */
  {
    CombinedTractionLaunchControl_SetParams(CombinedTractionLaunchControl_M,
      NULL, inf);
  }

  {
    B_CombinedTractionLaunchControl_T *CombinedTractionLaunchControl_B =
      ((B_CombinedTractionLaunchControl_T *)
       CombinedTractionLaunchControl_M->blockIO);
    DW_CombinedTractionLaunchControl_T *CombinedTractionLaunchControl_DW =
      ((DW_CombinedTractionLaunchControl_T *)
       CombinedTractionLaunchControl_M->dwork);
    ExtU_CombinedTractionLaunchControl_T *CombinedTractionLaunchControl_U =
      (ExtU_CombinedTractionLaunchControl_T *)
      CombinedTractionLaunchControl_M->inputs;
    ExtY_CombinedTractionLaunchControl_T *CombinedTractionLaunchControl_Y =
      (ExtY_CombinedTractionLaunchControl_T *)
      CombinedTractionLaunchControl_M->outputs;

    /* block I/O */
    (void) memset(((void *) CombinedTractionLaunchControl_B), 0,
                  sizeof(B_CombinedTractionLaunchControl_T));

    /* states (dwork) */
    (void) memset((void *)CombinedTractionLaunchControl_DW, 0,
                  sizeof(DW_CombinedTractionLaunchControl_T));

    /* external inputs */
    (void)memset(CombinedTractionLaunchControl_U, 0, sizeof
                 (ExtU_CombinedTractionLaunchControl_T));

    /* external outputs */
    CombinedTractionLaunchControl_Y->ToCM =
      CombinedTractionLaunchControl_rtZcmPowerTrainXWDOut;
  }

  return CombinedTractionLaunchControl_M;
}

/* CarMaker dictionary definitions. */
extern tQuantEntry *main_DictDefines[];
static tQuantEntry DictDefines[] = {
  { (void*)0x01234567, (void*)0x89ABCDEF, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { (void*)main_DictDefines, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { "Caleb.IfOne", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.IfTwo", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.IfSum", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.torqueOld", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.torqueNew", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.Percent", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.Table", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.TorquePidOut", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.IfOutput", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.TorqueRequest", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.TargetSlip", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.ActualSlip", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.DiffSlip", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { "Caleb.TorqueOut", "", "Double4", 0, 0.0, 0.0, "None", 0.0, 0.0 },

  { NULL, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 }
};

tQuantEntry *CombinedTractionLaunchControl_DictDefines = DictDefines;
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

tMdlBdyFrame *CombinedTractionLaunchControl_BdyFrameDefines = BdyFrameDefines;
tMdlBdyFrame *main_BdyFrameDefines[] = {
  BdyFrameDefines,
  NULL
};

#endif
