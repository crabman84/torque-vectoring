/*
 * FinalSystem.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "FinalSystem".
 *
 * Model version              : 1.11
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C source code generated on : Mon Oct 26 13:55:06 2020
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
#include "FinalSystem.h"
#include "FinalSystem_private.h"
#include "FinalSystem_wrap.h"

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

const cmPowerTrainXWDOut FinalSystem_rtZcmPowerTrainXWDOut = {
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
void FinalSystem_IfActionSubsystem_Init(B_IfActionSubsystem_FinalSystem_T
  *localB, P_IfActionSubsystem_FinalSystem_T *localP)
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
void FinalSystem_IfActionSubsystem(real_T rtu_In1,
  B_IfActionSubsystem_FinalSystem_T *localB)
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
void FinalSystem_IfActionSubsystem_Term(void)
{
}

/*
 * System initialize for action system:
 *    '<S21>/If Action Subsystem'
 *    '<S22>/If Action Subsystem'
 *    '<S27>/If Action Subsystem'
 *    '<S28>/If Action Subsystem'
 */
void FinalSystem_IfActionSubsystem_p_Init(B_IfActionSubsystem_FinalSystem_g_T
  *localB, P_IfActionSubsystem_FinalSystem_c_T *localP)
{
  /* SystemInitialize for Outport: '<S23>/torqueOut' */
  localB->torqueRequest = localP->torqueOut_Y0;
}

/*
 * Output and update for action system:
 *    '<S21>/If Action Subsystem'
 *    '<S22>/If Action Subsystem'
 *    '<S27>/If Action Subsystem'
 *    '<S28>/If Action Subsystem'
 */
void FinalSystem_IfActionSubsystem_d(real_T rtu_torqueRequest,
  B_IfActionSubsystem_FinalSystem_g_T *localB)
{
  /* Inport: '<S23>/torqueRequest' */
  localB->torqueRequest = rtu_torqueRequest;
}

/*
 * Termination for action system:
 *    '<S21>/If Action Subsystem'
 *    '<S22>/If Action Subsystem'
 *    '<S27>/If Action Subsystem'
 *    '<S28>/If Action Subsystem'
 */
void FinalSystem_IfActionSubsystem_c_Term(void)
{
}

/*
 * System initialize for action system:
 *    '<S22>/If Action Subsystem1'
 *    '<S27>/If Action Subsystem1'
 *    '<S28>/If Action Subsystem1'
 */
void FinalSystem_IfActionSubsystem1_Init(B_IfActionSubsystem1_FinalSystem_T
  *localB, P_IfActionSubsystem1_FinalSystem_T *localP)
{
  /* SystemInitialize for Outport: '<S26>/TorqueOut' */
  localB->Mult = localP->TorqueOut_Y0;
}

/*
 * Output and update for action system:
 *    '<S22>/If Action Subsystem1'
 *    '<S27>/If Action Subsystem1'
 *    '<S28>/If Action Subsystem1'
 */
void FinalSystem_IfActionSubsystem1(real_T rtu_torqueRequest, real_T
  rtu_SlipDifference, real_T rtu_WheelSpeed, B_IfActionSubsystem1_FinalSystem_T *
  localB, P_IfActionSubsystem1_FinalSystem_T *localP)
{
  /* Product: '<S26>/Mult' incorporates:
   *  Constant: '<S26>/Constant'
   *  Lookup_n-D: '<S26>/2-D Lookup Table'
   *  Product: '<S26>/Divide'
   *  Sum: '<S26>/Minus'
   */
  localB->Mult = (localP->Constant_Value - look2_binlxpw(rtu_SlipDifference,
    rtu_WheelSpeed, localP->uDLookupTable_bp01Data,
    localP->uDLookupTable_bp02Data, localP->uDLookupTable_tableData,
    localP->uDLookupTable_maxIndex, 10U)) / localP->Constant_Value *
    rtu_torqueRequest;
}

/*
 * Termination for action system:
 *    '<S22>/If Action Subsystem1'
 *    '<S27>/If Action Subsystem1'
 *    '<S28>/If Action Subsystem1'
 */
void FinalSystem_IfActionSubsystem1_Term(void)
{
}

/* Model step function */
void FinalSystem_step(RT_MODEL_FinalSystem_T *const FinalSystem_M)
{
  B_FinalSystem_T *FinalSystem_B = ((B_FinalSystem_T *) FinalSystem_M->blockIO);
  DW_FinalSystem_T *FinalSystem_DW = ((DW_FinalSystem_T *) FinalSystem_M->dwork);
  ExtU_FinalSystem_T *FinalSystem_U = (ExtU_FinalSystem_T *)
    FinalSystem_M->inputs;
  ExtY_FinalSystem_T *FinalSystem_Y = (ExtY_FinalSystem_T *)
    FinalSystem_M->outputs;
  real_T rtb_Trq_Supp2Bdy1_rx;
  real_T rtb_Trq_Supp2Bdy1_ry;
  real_T rtb_Trq_Supp2Bdy1_rz;
  real_T rtb_Trq_Supp2Bdy1B_rx;
  real_T rtb_Trq_Supp2Bdy1B_ry;
  real_T rtb_Trq_Supp2Bdy1B_rz;
  real_T rtb_Minus;
  real_T rtb_uDLookupTable1_p;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/EngineOut.Engine_on'
   *  Constant: '<S1>/EngineOut.FuelFlow'
   *  Constant: '<S1>/EngineOut.Trq'
   *  Constant: '<S1>/EngineOut.TrqDrag'
   *  Constant: '<S1>/EngineOut.TrqFull'
   *  Constant: '<S1>/EngineOut.TrqOpt'
   *  Constant: '<S1>/EngineOut.rotv'
   */
  FinalSystem_Y->ToCM.EngineOut.Engine_on =
    FinalSystem_P.EngineOutEngine_on_Value;
  FinalSystem_Y->ToCM.EngineOut.rotv = FinalSystem_P.EngineOutrotv_Value;
  FinalSystem_Y->ToCM.EngineOut.Trq = FinalSystem_P.EngineOutTrq_Value;
  FinalSystem_Y->ToCM.EngineOut.TrqDrag = FinalSystem_P.EngineOutTrqDrag_Value;
  FinalSystem_Y->ToCM.EngineOut.TrqFull = FinalSystem_P.EngineOutTrqFull_Value;
  FinalSystem_Y->ToCM.EngineOut.TrqOpt = FinalSystem_P.EngineOutTrqOpt_Value;
  FinalSystem_Y->ToCM.EngineOut.FuelFlow = FinalSystem_P.EngineOutFuelFlow_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ISGOut.i_M2W.FL'
   *  Constant: '<S1>/ISGOut.i_M2W.FR'
   *  Constant: '<S1>/ISGOut.i_M2W.RL'
   *  Constant: '<S1>/ISGOut.i_M2W.RR'
   */
  FinalSystem_Y->ToCM.ISGOut.i_M2W.FL = FinalSystem_P.ISGOuti_M2WFL_Value;
  FinalSystem_Y->ToCM.ISGOut.i_M2W.FR = FinalSystem_P.ISGOuti_M2WFR_Value;
  FinalSystem_Y->ToCM.ISGOut.i_M2W.RL = FinalSystem_P.ISGOuti_M2WRL_Value;
  FinalSystem_Y->ToCM.ISGOut.i_M2W.RR = FinalSystem_P.ISGOuti_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ISGOut.PwrElec'
   *  Constant: '<S1>/ISGOut.Trq'
   *  Constant: '<S1>/ISGOut.TrqGen_max'
   *  Constant: '<S1>/ISGOut.TrqMot_max'
   *  Constant: '<S1>/ISGOut.rotv'
   */
  FinalSystem_Y->ToCM.ISGOut.rotv = FinalSystem_P.ISGOutrotv_Value;
  FinalSystem_Y->ToCM.ISGOut.Trq = FinalSystem_P.ISGOutTrq_Value;
  FinalSystem_Y->ToCM.ISGOut.TrqMot_max = FinalSystem_P.ISGOutTrqMot_max_Value;
  FinalSystem_Y->ToCM.ISGOut.TrqGen_max = FinalSystem_P.ISGOutTrqGen_max_Value;
  FinalSystem_Y->ToCM.ISGOut.PwrElec = FinalSystem_P.ISGOutPwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m0.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m0.i_M2W.RR'
   */
  FinalSystem_Y->ToCM.MotorOut.m0.i_M2W.FL =
    FinalSystem_P.MotorOutm0i_M2WFL_Value;
  FinalSystem_Y->ToCM.MotorOut.m0.i_M2W.FR =
    FinalSystem_P.MotorOutm0i_M2WFR_Value;
  FinalSystem_Y->ToCM.MotorOut.m0.i_M2W.RL =
    FinalSystem_P.MotorOutm0i_M2WRL_Value;
  FinalSystem_Y->ToCM.MotorOut.m0.i_M2W.RR =
    FinalSystem_P.MotorOutm0i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m0.PwrElec'
   *  Constant: '<S1>/MotorOut.m0.Trq'
   *  Constant: '<S1>/MotorOut.m0.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m0.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m0.rotv'
   */
  FinalSystem_Y->ToCM.MotorOut.m0.rotv = FinalSystem_P.MotorOutm0rotv_Value;
  FinalSystem_Y->ToCM.MotorOut.m0.Trq = FinalSystem_P.MotorOutm0Trq_Value;
  FinalSystem_Y->ToCM.MotorOut.m0.TrqMot_max =
    FinalSystem_P.MotorOutm0TrqMot_max_Value;
  FinalSystem_Y->ToCM.MotorOut.m0.TrqGen_max =
    FinalSystem_P.MotorOutm0TrqGen_max_Value;
  FinalSystem_Y->ToCM.MotorOut.m0.PwrElec =
    FinalSystem_P.MotorOutm0PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m1.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m1.i_M2W.RR'
   */
  FinalSystem_Y->ToCM.MotorOut.m1.i_M2W.FL =
    FinalSystem_P.MotorOutm1i_M2WFL_Value;
  FinalSystem_Y->ToCM.MotorOut.m1.i_M2W.FR =
    FinalSystem_P.MotorOutm1i_M2WFR_Value;
  FinalSystem_Y->ToCM.MotorOut.m1.i_M2W.RL =
    FinalSystem_P.MotorOutm1i_M2WRL_Value;
  FinalSystem_Y->ToCM.MotorOut.m1.i_M2W.RR =
    FinalSystem_P.MotorOutm1i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m1.PwrElec'
   *  Constant: '<S1>/MotorOut.m1.Trq'
   *  Constant: '<S1>/MotorOut.m1.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m1.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m1.rotv'
   */
  FinalSystem_Y->ToCM.MotorOut.m1.rotv = FinalSystem_P.MotorOutm1rotv_Value;
  FinalSystem_Y->ToCM.MotorOut.m1.Trq = FinalSystem_P.MotorOutm1Trq_Value;
  FinalSystem_Y->ToCM.MotorOut.m1.TrqMot_max =
    FinalSystem_P.MotorOutm1TrqMot_max_Value;
  FinalSystem_Y->ToCM.MotorOut.m1.TrqGen_max =
    FinalSystem_P.MotorOutm1TrqGen_max_Value;
  FinalSystem_Y->ToCM.MotorOut.m1.PwrElec =
    FinalSystem_P.MotorOutm1PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m2.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m2.i_M2W.RR'
   */
  FinalSystem_Y->ToCM.MotorOut.m2.i_M2W.FL =
    FinalSystem_P.MotorOutm2i_M2WFL_Value;
  FinalSystem_Y->ToCM.MotorOut.m2.i_M2W.FR =
    FinalSystem_P.MotorOutm2i_M2WFR_Value;
  FinalSystem_Y->ToCM.MotorOut.m2.i_M2W.RL =
    FinalSystem_P.MotorOutm2i_M2WRL_Value;
  FinalSystem_Y->ToCM.MotorOut.m2.i_M2W.RR =
    FinalSystem_P.MotorOutm2i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m2.PwrElec'
   *  Constant: '<S1>/MotorOut.m2.Trq'
   *  Constant: '<S1>/MotorOut.m2.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m2.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m2.rotv'
   */
  FinalSystem_Y->ToCM.MotorOut.m2.rotv = FinalSystem_P.MotorOutm2rotv_Value;
  FinalSystem_Y->ToCM.MotorOut.m2.Trq = FinalSystem_P.MotorOutm2Trq_Value;
  FinalSystem_Y->ToCM.MotorOut.m2.TrqMot_max =
    FinalSystem_P.MotorOutm2TrqMot_max_Value;
  FinalSystem_Y->ToCM.MotorOut.m2.TrqGen_max =
    FinalSystem_P.MotorOutm2TrqGen_max_Value;
  FinalSystem_Y->ToCM.MotorOut.m2.PwrElec =
    FinalSystem_P.MotorOutm2PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m3.i_M2W.FL'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.FR'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.RL'
   *  Constant: '<S1>/MotorOut.m3.i_M2W.RR'
   */
  FinalSystem_Y->ToCM.MotorOut.m3.i_M2W.FL =
    FinalSystem_P.MotorOutm3i_M2WFL_Value;
  FinalSystem_Y->ToCM.MotorOut.m3.i_M2W.FR =
    FinalSystem_P.MotorOutm3i_M2WFR_Value;
  FinalSystem_Y->ToCM.MotorOut.m3.i_M2W.RL =
    FinalSystem_P.MotorOutm3i_M2WRL_Value;
  FinalSystem_Y->ToCM.MotorOut.m3.i_M2W.RR =
    FinalSystem_P.MotorOutm3i_M2WRR_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/MotorOut.m3.PwrElec'
   *  Constant: '<S1>/MotorOut.m3.Trq'
   *  Constant: '<S1>/MotorOut.m3.TrqGen_max'
   *  Constant: '<S1>/MotorOut.m3.TrqMot_max'
   *  Constant: '<S1>/MotorOut.m3.rotv'
   */
  FinalSystem_Y->ToCM.MotorOut.m3.rotv = FinalSystem_P.MotorOutm3rotv_Value;
  FinalSystem_Y->ToCM.MotorOut.m3.Trq = FinalSystem_P.MotorOutm3Trq_Value;
  FinalSystem_Y->ToCM.MotorOut.m3.TrqMot_max =
    FinalSystem_P.MotorOutm3TrqMot_max_Value;
  FinalSystem_Y->ToCM.MotorOut.m3.TrqGen_max =
    FinalSystem_P.MotorOutm3TrqGen_max_Value;
  FinalSystem_Y->ToCM.MotorOut.m3.PwrElec =
    FinalSystem_P.MotorOutm3PwrElec_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/ClutchOut.Pos'
   *  Constant: '<S1>/ClutchOut.Trq_in'
   *  Constant: '<S1>/ClutchOut.Trq_out'
   *  Constant: '<S1>/ClutchOut.i_TrqIn2Out'
   *  Constant: '<S1>/ClutchOut.rotv_in'
   *  Constant: '<S1>/ClutchOut.rotv_out'
   */
  FinalSystem_Y->ToCM.ClutchOut.Pos = FinalSystem_P.ClutchOutPos_Value;
  FinalSystem_Y->ToCM.ClutchOut.rotv_in = FinalSystem_P.ClutchOutrotv_in_Value;
  FinalSystem_Y->ToCM.ClutchOut.rotv_out = FinalSystem_P.ClutchOutrotv_out_Value;
  FinalSystem_Y->ToCM.ClutchOut.Trq_in = FinalSystem_P.ClutchOutTrq_in_Value;
  FinalSystem_Y->ToCM.ClutchOut.Trq_out = FinalSystem_P.ClutchOutTrq_out_Value;
  FinalSystem_Y->ToCM.ClutchOut.i_TrqIn2Out =
    FinalSystem_P.ClutchOuti_TrqIn2Out_Value;

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
  FinalSystem_Y->ToCM.GearBoxOut.GearNo = FinalSystem_P.GearBoxOutGearNo_Value;
  FinalSystem_Y->ToCM.GearBoxOut.GearNo_dis =
    FinalSystem_P.GearBoxOutGearNo_dis_Value;
  FinalSystem_Y->ToCM.GearBoxOut.Trq_DriveSrc_trg =
    FinalSystem_P.GearBoxOutTrq_DriveSrc_trg_Value;
  FinalSystem_Y->ToCM.GearBoxOut.i = FinalSystem_P.GearBoxOuti_Value;
  FinalSystem_Y->ToCM.GearBoxOut.rotv_in = FinalSystem_P.GearBoxOutrotv_in_Value;
  FinalSystem_Y->ToCM.GearBoxOut.rotv_out =
    FinalSystem_P.GearBoxOutrotv_out_Value;
  FinalSystem_Y->ToCM.GearBoxOut.Trq_in = FinalSystem_P.GearBoxOutTrq_in_Value;
  FinalSystem_Y->ToCM.GearBoxOut.Trq_out = FinalSystem_P.GearBoxOutTrq_out_Value;
  FinalSystem_Y->ToCM.GearBoxOut.Clutch.Pos =
    FinalSystem_P.GearBoxOutClutchPos_Value;
  FinalSystem_Y->ToCM.GearBoxOut.Clutch.rotv_in =
    FinalSystem_P.GearBoxOutClutchrotv_in_Value;
  FinalSystem_Y->ToCM.GearBoxOut.Clutch.rotv_out =
    FinalSystem_P.GearBoxOutClutchrotv_out_Value;
  FinalSystem_Y->ToCM.GearBoxOut.Clutch.Trq_in =
    FinalSystem_P.GearBoxOutClutchTrq_in_Value;
  FinalSystem_Y->ToCM.GearBoxOut.Clutch.Trq_out =
    FinalSystem_P.GearBoxOutClutchTrq_out_Value;
  FinalSystem_Y->ToCM.GearBoxOut.Clutch.i_TrqIn2Out =
    FinalSystem_P.GearBoxOutClutchi_TrqIn2Out_Value;
  FinalSystem_Y->ToCM.GearBoxOut.Clutch_dis.Pos =
    FinalSystem_P.GearBoxOutClutch_disPos_Value;
  FinalSystem_Y->ToCM.GearBoxOut.Clutch_dis.rotv_in =
    FinalSystem_P.GearBoxOutClutch_disrotv_in_Value;
  FinalSystem_Y->ToCM.GearBoxOut.Clutch_dis.rotv_out =
    FinalSystem_P.GearBoxOutClutch_disrotv_out_Value;
  FinalSystem_Y->ToCM.GearBoxOut.Clutch_dis.Trq_in =
    FinalSystem_P.GearBoxOutClutch_disTrq_in_Value;
  FinalSystem_Y->ToCM.GearBoxOut.Clutch_dis.Trq_out =
    FinalSystem_P.GearBoxOutClutch_disTrq_out_Value;
  FinalSystem_Y->ToCM.GearBoxOut.Clutch_dis.i_TrqIn2Out =
    FinalSystem_P.GearBoxOutClutch_disi_TrqIn2Out_Value;

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
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.GearNo =
    FinalSystem_P.GearBoxM_OutGB_m0GearNo_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.GearNo_dis =
    FinalSystem_P.GearBoxM_OutGB_m0GearNo_dis_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.Trq_DriveSrc_trg =
    FinalSystem_P.GearBoxM_OutGB_m0Trq_DriveSrc_trg_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.i =
    FinalSystem_P.GearBoxM_OutGB_m0i_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.rotv_in =
    FinalSystem_P.GearBoxM_OutGB_m0rotv_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.rotv_out =
    FinalSystem_P.GearBoxM_OutGB_m0rotv_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.Trq_in =
    FinalSystem_P.GearBoxM_OutGB_m0Trq_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.Trq_out =
    FinalSystem_P.GearBoxM_OutGB_m0Trq_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Pos =
    FinalSystem_P.GearBoxM_OutGB_m0ClutchPos_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.rotv_in =
    FinalSystem_P.GearBoxM_OutGB_m0Clutchrotv_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.rotv_out =
    FinalSystem_P.GearBoxM_OutGB_m0Clutchrotv_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Trq_in =
    FinalSystem_P.GearBoxM_OutGB_m0ClutchTrq_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.Trq_out =
    FinalSystem_P.GearBoxM_OutGB_m0ClutchTrq_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.Clutch.i_TrqIn2Out =
    FinalSystem_P.GearBoxM_OutGB_m0Clutchi_TrqIn2Out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Pos =
    FinalSystem_P.GearBoxM_OutGB_m0Clutch_disPos_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.rotv_in =
    FinalSystem_P.GearBoxM_OutGB_m0Clutch_disrotv_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.rotv_out =
    FinalSystem_P.GearBoxM_OutGB_m0Clutch_disrotv_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Trq_in =
    FinalSystem_P.GearBoxM_OutGB_m0Clutch_disTrq_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.Trq_out =
    FinalSystem_P.GearBoxM_OutGB_m0Clutch_disTrq_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m0.Clutch_dis.i_TrqIn2Out =
    FinalSystem_P.GearBoxM_OutGB_m0Clutch_disi_TrqIn2Out_Value;

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
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.GearNo =
    FinalSystem_P.GearBoxM_OutGB_m1GearNo_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.GearNo_dis =
    FinalSystem_P.GearBoxM_OutGB_m1GearNo_dis_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.Trq_DriveSrc_trg =
    FinalSystem_P.GearBoxM_OutGB_m1Trq_DriveSrc_trg_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.i =
    FinalSystem_P.GearBoxM_OutGB_m1i_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.rotv_in =
    FinalSystem_P.GearBoxM_OutGB_m1rotv_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.rotv_out =
    FinalSystem_P.GearBoxM_OutGB_m1rotv_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.Trq_in =
    FinalSystem_P.GearBoxM_OutGB_m1Trq_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.Trq_out =
    FinalSystem_P.GearBoxM_OutGB_m1Trq_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Pos =
    FinalSystem_P.GearBoxM_OutGB_m1ClutchPos_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.rotv_in =
    FinalSystem_P.GearBoxM_OutGB_m1Clutchrotv_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.rotv_out =
    FinalSystem_P.GearBoxM_OutGB_m1Clutchrotv_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Trq_in =
    FinalSystem_P.GearBoxM_OutGB_m1ClutchTrq_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.Trq_out =
    FinalSystem_P.GearBoxM_OutGB_m1ClutchTrq_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.Clutch.i_TrqIn2Out =
    FinalSystem_P.GearBoxM_OutGB_m1Clutchi_TrqIn2Out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Pos =
    FinalSystem_P.GearBoxM_OutGB_m1Clutch_disPos_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.rotv_in =
    FinalSystem_P.GearBoxM_OutGB_m1Clutch_disrotv_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.rotv_out =
    FinalSystem_P.GearBoxM_OutGB_m1Clutch_disrotv_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Trq_in =
    FinalSystem_P.GearBoxM_OutGB_m1Clutch_disTrq_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.Trq_out =
    FinalSystem_P.GearBoxM_OutGB_m1Clutch_disTrq_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m1.Clutch_dis.i_TrqIn2Out =
    FinalSystem_P.GearBoxM_OutGB_m1Clutch_disi_TrqIn2Out_Value;

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
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.GearNo =
    FinalSystem_P.GearBoxM_OutGB_m2GearNo_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.GearNo_dis =
    FinalSystem_P.GearBoxM_OutGB_m2GearNo_dis_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.Trq_DriveSrc_trg =
    FinalSystem_P.GearBoxM_OutGB_m2Trq_DriveSrc_trg_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.i =
    FinalSystem_P.GearBoxM_OutGB_m2i_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.rotv_in =
    FinalSystem_P.GearBoxM_OutGB_m2rotv_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.rotv_out =
    FinalSystem_P.GearBoxM_OutGB_m2rotv_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.Trq_in =
    FinalSystem_P.GearBoxM_OutGB_m2Trq_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.Trq_out =
    FinalSystem_P.GearBoxM_OutGB_m2Trq_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Pos =
    FinalSystem_P.GearBoxM_OutGB_m2ClutchPos_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.rotv_in =
    FinalSystem_P.GearBoxM_OutGB_m2Clutchrotv_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.rotv_out =
    FinalSystem_P.GearBoxM_OutGB_m2Clutchrotv_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Trq_in =
    FinalSystem_P.GearBoxM_OutGB_m2ClutchTrq_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.Trq_out =
    FinalSystem_P.GearBoxM_OutGB_m2ClutchTrq_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.Clutch.i_TrqIn2Out =
    FinalSystem_P.GearBoxM_OutGB_m2Clutchi_TrqIn2Out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Pos =
    FinalSystem_P.GearBoxM_OutGB_m2Clutch_disPos_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.rotv_in =
    FinalSystem_P.GearBoxM_OutGB_m2Clutch_disrotv_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.rotv_out =
    FinalSystem_P.GearBoxM_OutGB_m2Clutch_disrotv_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Trq_in =
    FinalSystem_P.GearBoxM_OutGB_m2Clutch_disTrq_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.Trq_out =
    FinalSystem_P.GearBoxM_OutGB_m2Clutch_disTrq_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m2.Clutch_dis.i_TrqIn2Out =
    FinalSystem_P.GearBoxM_OutGB_m2Clutch_disi_TrqIn2Out_Value;

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
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.GearNo =
    FinalSystem_P.GearBoxM_OutGB_m3GearNo_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.GearNo_dis =
    FinalSystem_P.GearBoxM_OutGB_m3GearNo_dis_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.Trq_DriveSrc_trg =
    FinalSystem_P.GearBoxM_OutGB_m3Trq_DriveSrc_trg_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.i =
    FinalSystem_P.GearBoxM_OutGB_m3i_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.rotv_in =
    FinalSystem_P.GearBoxM_OutGB_m3rotv_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.rotv_out =
    FinalSystem_P.GearBoxM_OutGB_m3rotv_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.Trq_in =
    FinalSystem_P.GearBoxM_OutGB_m3Trq_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.Trq_out =
    FinalSystem_P.GearBoxM_OutGB_m3Trq_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Pos =
    FinalSystem_P.GearBoxM_OutGB_m3ClutchPos_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.rotv_in =
    FinalSystem_P.GearBoxM_OutGB_m3Clutchrotv_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.rotv_out =
    FinalSystem_P.GearBoxM_OutGB_m3Clutchrotv_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Trq_in =
    FinalSystem_P.GearBoxM_OutGB_m3ClutchTrq_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.Trq_out =
    FinalSystem_P.GearBoxM_OutGB_m3ClutchTrq_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.Clutch.i_TrqIn2Out =
    FinalSystem_P.GearBoxM_OutGB_m3Clutchi_TrqIn2Out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Pos =
    FinalSystem_P.GearBoxM_OutGB_m3Clutch_disPos_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.rotv_in =
    FinalSystem_P.GearBoxM_OutGB_m3Clutch_disrotv_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.rotv_out =
    FinalSystem_P.GearBoxM_OutGB_m3Clutch_disrotv_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Trq_in =
    FinalSystem_P.GearBoxM_OutGB_m3Clutch_disTrq_in_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.Trq_out =
    FinalSystem_P.GearBoxM_OutGB_m3Clutch_disTrq_out_Value;
  FinalSystem_Y->ToCM.GearBoxM_Out.GB_m3.Clutch_dis.i_TrqIn2Out =
    FinalSystem_P.GearBoxM_OutGB_m3Clutch_disi_TrqIn2Out_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BattLVOut.AOC'
   *  Constant: '<S1>/BattLVOut.Current'
   *  Constant: '<S1>/BattLVOut.Energy'
   *  Constant: '<S1>/BattLVOut.Pwr_max'
   *  Constant: '<S1>/BattLVOut.SOC'
   *  Constant: '<S1>/BattLVOut.SOH'
   *  Constant: '<S1>/BattLVOut.Temp'
   */
  FinalSystem_Y->ToCM.BattLVOut.SOC = FinalSystem_P.BattLVOutSOC_Value;
  FinalSystem_Y->ToCM.BattLVOut.SOH = FinalSystem_P.BattLVOutSOH_Value;
  FinalSystem_Y->ToCM.BattLVOut.Current = FinalSystem_P.BattLVOutCurrent_Value;
  FinalSystem_Y->ToCM.BattLVOut.AOC = FinalSystem_P.BattLVOutAOC_Value;
  FinalSystem_Y->ToCM.BattLVOut.Temp = FinalSystem_P.BattLVOutTemp_Value;
  FinalSystem_Y->ToCM.BattLVOut.Energy = FinalSystem_P.BattLVOutEnergy_Value;
  FinalSystem_Y->ToCM.BattLVOut.Pwr_max = FinalSystem_P.BattLVOutPwr_max_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BattHVOut.AOC'
   *  Constant: '<S1>/BattHVOut.Current'
   *  Constant: '<S1>/BattHVOut.Energy'
   *  Constant: '<S1>/BattHVOut.Pwr_max'
   *  Constant: '<S1>/BattHVOut.SOC'
   *  Constant: '<S1>/BattHVOut.SOH'
   *  Constant: '<S1>/BattHVOut.Temp'
   */
  FinalSystem_Y->ToCM.BattHVOut.SOC = FinalSystem_P.BattHVOutSOC_Value;
  FinalSystem_Y->ToCM.BattHVOut.SOH = FinalSystem_P.BattHVOutSOH_Value;
  FinalSystem_Y->ToCM.BattHVOut.Current = FinalSystem_P.BattHVOutCurrent_Value;
  FinalSystem_Y->ToCM.BattHVOut.AOC = FinalSystem_P.BattHVOutAOC_Value;
  FinalSystem_Y->ToCM.BattHVOut.Temp = FinalSystem_P.BattHVOutTemp_Value;
  FinalSystem_Y->ToCM.BattHVOut.Energy = FinalSystem_P.BattHVOutEnergy_Value;
  FinalSystem_Y->ToCM.BattHVOut.Pwr_max = FinalSystem_P.BattHVOutPwr_max_Value;

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
  FinalSystem_Y->ToCM.PwrSupplyOut.Pwr_LV =
    FinalSystem_P.PwrSupplyOutPwr_LV_Value;
  FinalSystem_Y->ToCM.PwrSupplyOut.Pwr_HV1 =
    FinalSystem_P.PwrSupplyOutPwr_HV1_Value;
  FinalSystem_Y->ToCM.PwrSupplyOut.Pwr_HV2 =
    FinalSystem_P.PwrSupplyOutPwr_HV2_Value;
  FinalSystem_Y->ToCM.PwrSupplyOut.Voltage_LV =
    FinalSystem_P.PwrSupplyOutVoltage_LV_Value;
  FinalSystem_Y->ToCM.PwrSupplyOut.Voltage_HV1 =
    FinalSystem_P.PwrSupplyOutVoltage_HV1_Value;
  FinalSystem_Y->ToCM.PwrSupplyOut.Voltage_HV2 =
    FinalSystem_P.PwrSupplyOutVoltage_HV2_Value;
  FinalSystem_Y->ToCM.PwrSupplyOut.Pwr_HV1toLV =
    FinalSystem_P.PwrSupplyOutPwr_HV1toLV_Value;
  FinalSystem_Y->ToCM.PwrSupplyOut.Pwr_HV1toHV2 =
    FinalSystem_P.PwrSupplyOutPwr_HV1toHV2_Value;
  FinalSystem_Y->ToCM.PwrSupplyOut.Pwr_HV1toLV_max =
    FinalSystem_P.PwrSupplyOutPwr_HV1toLV_max_Value;
  FinalSystem_Y->ToCM.PwrSupplyOut.Pwr_HV1toHV2_max =
    FinalSystem_P.PwrSupplyOutPwr_HV1toHV2_max_Value;
  FinalSystem_Y->ToCM.PwrSupplyOut.Eta_HV1toLV =
    FinalSystem_P.PwrSupplyOutEta_HV1toLV_Value;
  FinalSystem_Y->ToCM.PwrSupplyOut.Eta_HV1toHV2 =
    FinalSystem_P.PwrSupplyOutEta_HV1toHV2_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Trq_Supp2Bdy1.rx'
   *  Constant: '<S1>/Trq_Supp2Bdy1.ry'
   *  Constant: '<S1>/Trq_Supp2Bdy1.rz'
   */
  rtb_Trq_Supp2Bdy1_rx = FinalSystem_P.Trq_Supp2Bdy1rx_Value;
  rtb_Trq_Supp2Bdy1_ry = FinalSystem_P.Trq_Supp2Bdy1ry_Value;
  rtb_Trq_Supp2Bdy1_rz = FinalSystem_P.Trq_Supp2Bdy1rz_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Trq_Supp2Bdy1B.rx'
   *  Constant: '<S1>/Trq_Supp2Bdy1B.ry'
   *  Constant: '<S1>/Trq_Supp2Bdy1B.rz'
   */
  rtb_Trq_Supp2Bdy1B_rx = FinalSystem_P.Trq_Supp2Bdy1Brx_Value;
  rtb_Trq_Supp2Bdy1B_ry = FinalSystem_P.Trq_Supp2Bdy1Bry_Value;
  rtb_Trq_Supp2Bdy1B_rz = FinalSystem_P.Trq_Supp2Bdy1Brz_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Trq_Supp2BdyEng.rx'
   *  Constant: '<S1>/Trq_Supp2BdyEng.ry'
   */
  FinalSystem_Y->ToCM.Trq_Supp2BdyEng.rx = FinalSystem_P.Trq_Supp2BdyEngrx_Value;
  FinalSystem_Y->ToCM.Trq_Supp2BdyEng.ry = FinalSystem_P.Trq_Supp2BdyEngry_Value;

  /* If: '<S2>/If' incorporates:
   *  Constant: '<Root>/LaunchMode1'
   *  Constant: '<S2>/Launch Control spd limit'
   *  Inport: '<Root>/FromCM'
   */
  if ((FinalSystem_P.LaunchMode1_Value > 0.0) && (FinalSystem_U->FromCM.Velocity
       < FinalSystem_P.LaunchControlspdlimit_Value)) {
    /* Outputs for IfAction SubSystem: '<S2>/Launch Control' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Abs: '<S6>/Abs' incorporates:
     *  Constant: '<S6>/GearRatio2'
     *  Product: '<S6>/Product'
     */
    rtb_Minus = fabs(FinalSystem_U->FromCM.WheelIn.FL.rotv *
                     FinalSystem_P.GearRatio2_Value);

    /* Lookup_n-D: '<S6>/1-D Lookup Table1' */
    rtb_uDLookupTable1_p = look1_binlxpw(rtb_Minus,
      FinalSystem_P.uDLookupTable1_bp01Data,
      FinalSystem_P.uDLookupTable1_tableData, 13U);

    /* Gain: '<S6>/Gain3' */
    rtb_Minus *= FinalSystem_P.Gain3_Gain;

    /* Lookup_n-D: '<S6>/2-D Lookup Table1' */
    rtb_Minus = look2_binlxpw(FinalSystem_U->FromCM.Gas, rtb_Minus,
      FinalSystem_P.uDLookupTable1_bp01Data_m,
      FinalSystem_P.uDLookupTable1_bp02Data,
      FinalSystem_P.uDLookupTable1_tableData_p,
      FinalSystem_P.uDLookupTable1_maxIndex, 6U);

    /* If: '<S6>/If' */
    if (rtb_uDLookupTable1_p < rtb_Minus) {
      /* Outputs for IfAction SubSystem: '<S6>/If Action Subsystem' incorporates:
       *  ActionPort: '<S10>/Action Port'
       */
      FinalSystem_IfActionSubsystem(rtb_uDLookupTable1_p,
        &FinalSystem_B->IfActionSubsystem);

      /* End of Outputs for SubSystem: '<S6>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S6>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S11>/Action Port'
       */
      FinalSystem_IfActionSubsystem(rtb_Minus,
        &FinalSystem_B->IfActionSubsystem1);

      /* End of Outputs for SubSystem: '<S6>/If Action Subsystem1' */
    }

    /* End of If: '<S6>/If' */

    /* Product: '<S6>/Product1' incorporates:
     *  Constant: '<S6>/GearRatio2'
     *  Sum: '<S6>/Sum of Elements'
     */
    FinalSystem_B->Product1 = (FinalSystem_B->IfActionSubsystem1.In1 +
      FinalSystem_B->IfActionSubsystem.In1) * FinalSystem_P.GearRatio2_Value;

    /* Gain: '<S6>/Gain' */
    FinalSystem_B->Gain_gk = FinalSystem_P.Gain_Gain * FinalSystem_B->Product1;

    /* Abs: '<S7>/Abs' incorporates:
     *  Constant: '<S7>/GearRatio2'
     *  Product: '<S7>/Product'
     */
    rtb_Minus = fabs(FinalSystem_U->FromCM.WheelIn.FR.rotv *
                     FinalSystem_P.GearRatio2_Value_b);

    /* Lookup_n-D: '<S7>/1-D Lookup Table1' */
    rtb_uDLookupTable1_p = look1_binlxpw(rtb_Minus,
      FinalSystem_P.uDLookupTable1_bp01Data_l,
      FinalSystem_P.uDLookupTable1_tableData_f, 13U);

    /* Gain: '<S7>/Gain3' */
    rtb_Minus *= FinalSystem_P.Gain3_Gain_a;

    /* Lookup_n-D: '<S7>/2-D Lookup Table1' */
    rtb_Minus = look2_binlxpw(FinalSystem_U->FromCM.Gas, rtb_Minus,
      FinalSystem_P.uDLookupTable1_bp01Data_k,
      FinalSystem_P.uDLookupTable1_bp02Data_a,
      FinalSystem_P.uDLookupTable1_tableData_j,
      FinalSystem_P.uDLookupTable1_maxIndex_e, 6U);

    /* If: '<S7>/If' */
    if (rtb_uDLookupTable1_p < rtb_Minus) {
      /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem' incorporates:
       *  ActionPort: '<S12>/Action Port'
       */
      FinalSystem_IfActionSubsystem(rtb_uDLookupTable1_p,
        &FinalSystem_B->IfActionSubsystem_b);

      /* End of Outputs for SubSystem: '<S7>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S13>/Action Port'
       */
      FinalSystem_IfActionSubsystem(rtb_Minus,
        &FinalSystem_B->IfActionSubsystem1_d);

      /* End of Outputs for SubSystem: '<S7>/If Action Subsystem1' */
    }

    /* End of If: '<S7>/If' */

    /* Product: '<S7>/Product1' incorporates:
     *  Constant: '<S7>/GearRatio2'
     *  Sum: '<S7>/Sum of Elements'
     */
    FinalSystem_B->Product1_o = (FinalSystem_B->IfActionSubsystem1_d.In1 +
      FinalSystem_B->IfActionSubsystem_b.In1) * FinalSystem_P.GearRatio2_Value_b;

    /* Gain: '<S7>/Gain' */
    FinalSystem_B->Gain_f = FinalSystem_P.Gain_Gain_h *
      FinalSystem_B->Product1_o;

    /* Abs: '<S8>/Abs' incorporates:
     *  Constant: '<S8>/GearRatio2'
     *  Product: '<S8>/Product'
     */
    rtb_Minus = fabs(FinalSystem_U->FromCM.WheelIn.RL.rotv *
                     FinalSystem_P.GearRatio2_Value_n);

    /* Lookup_n-D: '<S8>/1-D Lookup Table1' */
    rtb_uDLookupTable1_p = look1_binlxpw(rtb_Minus,
      FinalSystem_P.uDLookupTable1_bp01Data_d,
      FinalSystem_P.uDLookupTable1_tableData_p5, 9U);

    /* Gain: '<S8>/Gain3' */
    rtb_Minus *= FinalSystem_P.Gain3_Gain_p;

    /* Lookup_n-D: '<S8>/2-D Lookup Table1' */
    rtb_Minus = look2_binlxpw(FinalSystem_U->FromCM.Gas, rtb_Minus,
      FinalSystem_P.uDLookupTable1_bp01Data_b,
      FinalSystem_P.uDLookupTable1_bp02Data_d,
      FinalSystem_P.uDLookupTable1_tableData_o,
      FinalSystem_P.uDLookupTable1_maxIndex_l, 6U);

    /* If: '<S8>/If' */
    if (rtb_uDLookupTable1_p < rtb_Minus) {
      /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem' incorporates:
       *  ActionPort: '<S14>/Action Port'
       */
      FinalSystem_IfActionSubsystem(rtb_uDLookupTable1_p,
        &FinalSystem_B->IfActionSubsystem_d);

      /* End of Outputs for SubSystem: '<S8>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S15>/Action Port'
       */
      FinalSystem_IfActionSubsystem(rtb_Minus,
        &FinalSystem_B->IfActionSubsystem1_g);

      /* End of Outputs for SubSystem: '<S8>/If Action Subsystem1' */
    }

    /* End of If: '<S8>/If' */

    /* Product: '<S8>/Product1' incorporates:
     *  Constant: '<S8>/GearRatio2'
     *  Sum: '<S8>/Sum of Elements'
     */
    FinalSystem_B->Product1_j = (FinalSystem_B->IfActionSubsystem1_g.In1 +
      FinalSystem_B->IfActionSubsystem_d.In1) * FinalSystem_P.GearRatio2_Value_n;

    /* Gain: '<S8>/Gain' */
    FinalSystem_B->Gain_m = FinalSystem_P.Gain_Gain_d *
      FinalSystem_B->Product1_j;

    /* Abs: '<S9>/Abs' incorporates:
     *  Constant: '<S9>/GearRatio2'
     *  Product: '<S9>/Product'
     */
    rtb_Minus = fabs(FinalSystem_U->FromCM.WheelIn.RR.rotv *
                     FinalSystem_P.GearRatio2_Value_d);

    /* Lookup_n-D: '<S9>/1-D Lookup Table1' */
    rtb_uDLookupTable1_p = look1_binlxpw(rtb_Minus,
      FinalSystem_P.uDLookupTable1_bp01Data_f,
      FinalSystem_P.uDLookupTable1_tableData_b, 9U);

    /* Gain: '<S9>/Gain3' */
    rtb_Minus *= FinalSystem_P.Gain3_Gain_l;

    /* Lookup_n-D: '<S9>/2-D Lookup Table1' */
    rtb_Minus = look2_binlxpw(FinalSystem_U->FromCM.Gas, rtb_Minus,
      FinalSystem_P.uDLookupTable1_bp01Data_bx,
      FinalSystem_P.uDLookupTable1_bp02Data_i,
      FinalSystem_P.uDLookupTable1_tableData_c,
      FinalSystem_P.uDLookupTable1_maxIndex_d, 6U);

    /* If: '<S9>/If' */
    if (rtb_uDLookupTable1_p < rtb_Minus) {
      /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem' incorporates:
       *  ActionPort: '<S16>/Action Port'
       */
      FinalSystem_IfActionSubsystem(rtb_uDLookupTable1_p,
        &FinalSystem_B->IfActionSubsystem_l);

      /* End of Outputs for SubSystem: '<S9>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S17>/Action Port'
       */
      FinalSystem_IfActionSubsystem(rtb_Minus,
        &FinalSystem_B->IfActionSubsystem1_c);

      /* End of Outputs for SubSystem: '<S9>/If Action Subsystem1' */
    }

    /* End of If: '<S9>/If' */

    /* Product: '<S9>/Product1' incorporates:
     *  Constant: '<S9>/GearRatio2'
     *  Sum: '<S9>/Sum of Elements'
     */
    FinalSystem_B->Product1_e = (FinalSystem_B->IfActionSubsystem1_c.In1 +
      FinalSystem_B->IfActionSubsystem_l.In1) * FinalSystem_P.GearRatio2_Value_d;

    /* Gain: '<S9>/Gain' */
    FinalSystem_B->Gain_h = FinalSystem_P.Gain_Gain_hi *
      FinalSystem_B->Product1_e;

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
    FinalSystem_B->uDLookupTable = look2_binlxpw(FinalSystem_U->FromCM.Gas, fabs
      (FinalSystem_U->FromCM.WheelIn.FL.rotv * FinalSystem_P.GearRatio_Value) *
      FinalSystem_P.Gain1_Gain, FinalSystem_P.uDLookupTable_bp01Data_b,
      FinalSystem_P.uDLookupTable_bp02Data_d,
      FinalSystem_P.uDLookupTable_tableData_p,
      FinalSystem_P.uDLookupTable_maxIndex_j, 6U);

    /* S-Function (write_dict): '<S21>/Write CM Dict' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)FinalSystem_DW->WriteCMDict_PWORK.Entry;
      if (!FinalSystem_DW->WriteCMDict_IWORK.Checked) {
        FinalSystem_DW->WriteCMDict_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
      }

      value = FinalSystem_B->uDLookupTable;
      DVA_PokeSL(e, value);
    }

    /* S-Function (write_dict): '<S21>/Write CM Dict1' incorporates:
     *  Constant: '<S19>/TargetSlip'
     */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)FinalSystem_DW->WriteCMDict1_PWORK.Entry;
      if (!FinalSystem_DW->WriteCMDict1_IWORK.Checked) {
        FinalSystem_DW->WriteCMDict1_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
      }

      value = FinalSystem_P.TargetSlip_Value;
      DVA_PokeSL(e, value);
    }

    /* S-Function (read_dict): '<S19>/Read CM Dict' */
    {
      tDDictEntry *e;
      e = (tDDictEntry *)FinalSystem_DW->ReadCMDict_PWORK.Entry;
      if (!FinalSystem_DW->ReadCMDict_IWORK.Checked) {
        FinalSystem_DW->ReadCMDict_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
      }

      FinalSystem_B->ReadCMDict = e->GetFunc(e->Var);
    }

    /* Sum: '<S21>/Minus' incorporates:
     *  Constant: '<S19>/TargetSlip'
     */
    FinalSystem_B->Minus = FinalSystem_B->ReadCMDict -
      FinalSystem_P.TargetSlip_Value;

    /* If: '<S21>/If' incorporates:
     *  Constant: '<Root>/TractionMode'
     */
    if ((FinalSystem_B->Minus <= 0.0) || (FinalSystem_P.TractionMode_Value ==
         0.0)) {
      /* Outputs for IfAction SubSystem: '<S21>/If Action Subsystem' incorporates:
       *  ActionPort: '<S23>/Action Port'
       */
      FinalSystem_IfActionSubsystem_d(FinalSystem_B->uDLookupTable,
        &FinalSystem_B->IfActionSubsystem_d1);

      /* End of Outputs for SubSystem: '<S21>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S21>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S24>/Action Port'
       */
      /* S-Function (write_dict): '<S24>/Write CM Dict' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)FinalSystem_DW->WriteCMDict_PWORK_g.Entry;
        if (!FinalSystem_DW->WriteCMDict_IWORK_a.Checked) {
          FinalSystem_DW->WriteCMDict_IWORK_a.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
        }

        value = FinalSystem_B->uDLookupTable;
        DVA_PokeSL(e, value);
      }

      /* Lookup_n-D: '<S24>/2-D Lookup Table' */
      FinalSystem_B->uDLookupTable_l = look2_binlxpw(FinalSystem_B->Minus,
        FinalSystem_U->FromCM.WheelIn.FL.rotv,
        FinalSystem_P.uDLookupTable_bp01Data,
        FinalSystem_P.uDLookupTable_bp02Data,
        FinalSystem_P.uDLookupTable_tableData,
        FinalSystem_P.uDLookupTable_maxIndex, 10U);

      /* Sum: '<S24>/Minus' incorporates:
       *  Constant: '<S24>/Constant'
       */
      FinalSystem_B->Minus_c = FinalSystem_P.Constant_Value -
        FinalSystem_B->uDLookupTable_l;

      /* Product: '<S24>/Divide' incorporates:
       *  Constant: '<S24>/Constant'
       */
      FinalSystem_B->Divide = FinalSystem_B->Minus_c /
        FinalSystem_P.Constant_Value;

      /* Product: '<S24>/Mult' */
      FinalSystem_B->Mult = FinalSystem_B->uDLookupTable * FinalSystem_B->Divide;

      /* S-Function (write_dict): '<S24>/Write CM Dict1' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)FinalSystem_DW->WriteCMDict1_PWORK_k.Entry;
        if (!FinalSystem_DW->WriteCMDict1_IWORK_j.Checked) {
          FinalSystem_DW->WriteCMDict1_IWORK_j.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
        }

        value = FinalSystem_B->Mult;
        DVA_PokeSL(e, value);
      }

      /* S-Function (write_dict): '<S24>/Write CM Dict2' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)FinalSystem_DW->WriteCMDict2_PWORK_l.Entry;
        if (!FinalSystem_DW->WriteCMDict2_IWORK_e.Checked) {
          FinalSystem_DW->WriteCMDict2_IWORK_e.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
        }

        value = FinalSystem_B->Divide;
        DVA_PokeSL(e, value);
      }

      /* S-Function (write_dict): '<S24>/Write CM Dict3' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)FinalSystem_DW->WriteCMDict3_PWORK_p.Entry;
        if (!FinalSystem_DW->WriteCMDict3_IWORK_b.Checked) {
          FinalSystem_DW->WriteCMDict3_IWORK_b.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
        }

        value = FinalSystem_B->Minus;
        DVA_PokeSL(e, value);
      }

      /* S-Function (write_dict): '<S24>/Write CM Dict4' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)FinalSystem_DW->WriteCMDict4_PWORK_e.Entry;
        if (!FinalSystem_DW->WriteCMDict4_IWORK_p.Checked) {
          FinalSystem_DW->WriteCMDict4_IWORK_p.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
        }

        value = FinalSystem_U->FromCM.WheelIn.FL.rotv;
        DVA_PokeSL(e, value);
      }

      /* S-Function (write_dict): '<S24>/Write CM Dict5' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)FinalSystem_DW->WriteCMDict5_PWORK.Entry;
        if (!FinalSystem_DW->WriteCMDict5_IWORK.Checked) {
          FinalSystem_DW->WriteCMDict5_IWORK.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
        }

        value = FinalSystem_B->Minus_c;
        DVA_PokeSL(e, value);
      }

      /* S-Function (write_dict): '<S24>/Write CM Dict6' */
      {
        tDDictEntry *e;
        real_T value;
        e = (tDDictEntry *)FinalSystem_DW->WriteCMDict6_PWORK_f.Entry;
        if (!FinalSystem_DW->WriteCMDict6_IWORK_e.Checked) {
          FinalSystem_DW->WriteCMDict6_IWORK_e.Checked = 1;
          DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
        }

        value = FinalSystem_B->uDLookupTable_l;
        DVA_PokeSL(e, value);
      }
    }

    /* End of If: '<S21>/If' */

    /* S-Function (write_dict): '<S21>/Write CM Dict2' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)FinalSystem_DW->WriteCMDict2_PWORK.Entry;
      if (!FinalSystem_DW->WriteCMDict2_IWORK.Checked) {
        FinalSystem_DW->WriteCMDict2_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
      }

      value = FinalSystem_B->Mult;
      DVA_PokeSL(e, value);
    }

    /* S-Function (write_dict): '<S21>/Write CM Dict4' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)FinalSystem_DW->WriteCMDict4_PWORK.Entry;
      if (!FinalSystem_DW->WriteCMDict4_IWORK.Checked) {
        FinalSystem_DW->WriteCMDict4_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
      }

      value = FinalSystem_B->IfActionSubsystem_d1.torqueRequest;
      DVA_PokeSL(e, value);
    }

    /* S-Function (write_dict): '<S21>/Write CM Dict6' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)FinalSystem_DW->WriteCMDict6_PWORK.Entry;
      if (!FinalSystem_DW->WriteCMDict6_IWORK.Checked) {
        FinalSystem_DW->WriteCMDict6_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
      }

      value = FinalSystem_B->Minus;
      DVA_PokeSL(e, value);
    }

    /* Sum: '<S21>/Sum' */
    FinalSystem_B->Sum = FinalSystem_B->IfActionSubsystem_d1.torqueRequest +
      FinalSystem_B->Mult;

    /* S-Function (write_dict): '<S21>/Write CM Dict7' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)FinalSystem_DW->WriteCMDict7_PWORK.Entry;
      if (!FinalSystem_DW->WriteCMDict7_IWORK.Checked) {
        FinalSystem_DW->WriteCMDict7_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
      }

      value = FinalSystem_B->Sum;
      DVA_PokeSL(e, value);
    }

    /* S-Function (write_dict): '<S21>/Write CM Dict8' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)FinalSystem_DW->WriteCMDict8_PWORK.Entry;
      if (!FinalSystem_DW->WriteCMDict8_IWORK.Checked) {
        FinalSystem_DW->WriteCMDict8_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
      }

      value = FinalSystem_B->ReadCMDict;
      DVA_PokeSL(e, value);
    }

    /* S-Function (write_dict): '<S21>/Write CM Dict3' */
    {
      tDDictEntry *e;
      real_T value;
      e = (tDDictEntry *)FinalSystem_DW->WriteCMDict3_PWORK.Entry;
      if (!FinalSystem_DW->WriteCMDict3_IWORK.Checked) {
        FinalSystem_DW->WriteCMDict3_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
      }

      value = 0.0;
      DVA_PokeSL(e, value);
    }

    /* Product: '<S19>/Product2' incorporates:
     *  Constant: '<S19>/GearRatio'
     */
    FinalSystem_B->Product2 = FinalSystem_B->Sum * FinalSystem_P.GearRatio_Value;

    /* Gain: '<S19>/Gain' */
    FinalSystem_B->Gain = FinalSystem_P.Gain_Gain_o * FinalSystem_B->Product2;

    /* S-Function (read_dict): '<S19>/Read CM Dict1' */
    {
      tDDictEntry *e;
      e = (tDDictEntry *)FinalSystem_DW->ReadCMDict1_PWORK.Entry;
      if (!FinalSystem_DW->ReadCMDict1_IWORK.Checked) {
        FinalSystem_DW->ReadCMDict1_IWORK.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
      }

      FinalSystem_B->ReadCMDict1 = e->GetFunc(e->Var);
    }

    /* Sum: '<S22>/Minus' incorporates:
     *  Constant: '<S19>/TargetSlip'
     */
    rtb_Minus = FinalSystem_B->ReadCMDict1 - FinalSystem_P.TargetSlip_Value;

    /* If: '<S22>/If' incorporates:
     *  Abs: '<S19>/Abs1'
     *  Constant: '<Root>/TractionMode'
     *  Constant: '<S19>/GearRatio'
     *  Gain: '<S19>/Gain3'
     *  Lookup_n-D: '<S19>/2-D Lookup Table1'
     *  Product: '<S19>/Product1'
     */
    if ((rtb_Minus <= 0.0) || (FinalSystem_P.TractionMode_Value == 0.0)) {
      /* Outputs for IfAction SubSystem: '<S22>/If Action Subsystem' incorporates:
       *  ActionPort: '<S25>/Action Port'
       */
      FinalSystem_IfActionSubsystem_d(look2_binlxpw(FinalSystem_U->FromCM.Gas,
        FinalSystem_P.Gain3_Gain_f * fabs(FinalSystem_U->FromCM.WheelIn.FR.rotv *
        FinalSystem_P.GearRatio_Value), FinalSystem_P.uDLookupTable1_bp01Data_ln,
        FinalSystem_P.uDLookupTable1_bp02Data_a3,
        FinalSystem_P.uDLookupTable1_tableData_d,
        FinalSystem_P.uDLookupTable1_maxIndex_i, 6U),
        &FinalSystem_B->IfActionSubsystem_h);

      /* End of Outputs for SubSystem: '<S22>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S22>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S26>/Action Port'
       */
      FinalSystem_IfActionSubsystem1(look2_binlxpw(FinalSystem_U->FromCM.Gas,
        FinalSystem_P.Gain3_Gain_f * fabs(FinalSystem_U->FromCM.WheelIn.FR.rotv *
        FinalSystem_P.GearRatio_Value), FinalSystem_P.uDLookupTable1_bp01Data_ln,
        FinalSystem_P.uDLookupTable1_bp02Data_a3,
        FinalSystem_P.uDLookupTable1_tableData_d,
        FinalSystem_P.uDLookupTable1_maxIndex_i, 6U), rtb_Minus,
        FinalSystem_P.GearRatio_Value, &FinalSystem_B->IfActionSubsystem1_m,
        &FinalSystem_P.IfActionSubsystem1_m);

      /* End of Outputs for SubSystem: '<S22>/If Action Subsystem1' */
    }

    /* End of If: '<S22>/If' */

    /* Product: '<S19>/Product3' incorporates:
     *  Constant: '<S19>/GearRatio'
     *  Sum: '<S22>/Sum'
     */
    FinalSystem_B->Product3 = (FinalSystem_B->IfActionSubsystem_h.torqueRequest
      + FinalSystem_B->IfActionSubsystem1_m.Mult) *
      FinalSystem_P.GearRatio_Value;

    /* Gain: '<S19>/Gain2' */
    FinalSystem_B->Gain2 = FinalSystem_P.Gain2_Gain * FinalSystem_B->Product3;

    /* S-Function (read_dict): '<S20>/Read CM Dict' */
    {
      tDDictEntry *e;
      e = (tDDictEntry *)FinalSystem_DW->ReadCMDict_PWORK_n.Entry;
      if (!FinalSystem_DW->ReadCMDict_IWORK_i.Checked) {
        FinalSystem_DW->ReadCMDict_IWORK_i.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
      }

      FinalSystem_B->ReadCMDict_i = e->GetFunc(e->Var);
    }

    /* Sum: '<S28>/Minus' incorporates:
     *  Constant: '<S20>/TargetSlip'
     */
    rtb_Minus = FinalSystem_B->ReadCMDict_i - FinalSystem_P.TargetSlip_Value_m;

    /* If: '<S28>/If' incorporates:
     *  Abs: '<S20>/Abs'
     *  Constant: '<Root>/TractionMode'
     *  Constant: '<S20>/GearRatio'
     *  Gain: '<S20>/Gain1'
     *  Lookup_n-D: '<S20>/2-D Lookup Table'
     *  Product: '<S20>/Product'
     */
    if ((rtb_Minus <= 0.0) || (FinalSystem_P.TractionMode_Value == 0.0)) {
      /* Outputs for IfAction SubSystem: '<S28>/If Action Subsystem' incorporates:
       *  ActionPort: '<S31>/Action Port'
       */
      FinalSystem_IfActionSubsystem_d(look2_binlxpw(FinalSystem_U->FromCM.Gas,
        FinalSystem_P.Gain1_Gain_f * fabs(FinalSystem_U->FromCM.WheelIn.RL.rotv *
        FinalSystem_P.GearRatio_Value_p), FinalSystem_P.uDLookupTable_bp01Data_n,
        FinalSystem_P.uDLookupTable_bp02Data_a,
        FinalSystem_P.uDLookupTable_tableData_j,
        FinalSystem_P.uDLookupTable_maxIndex_a, 6U),
        &FinalSystem_B->IfActionSubsystem_m);

      /* End of Outputs for SubSystem: '<S28>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S28>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S32>/Action Port'
       */
      FinalSystem_IfActionSubsystem1(look2_binlxpw(FinalSystem_U->FromCM.Gas,
        FinalSystem_P.Gain1_Gain_f * fabs(FinalSystem_U->FromCM.WheelIn.RL.rotv *
        FinalSystem_P.GearRatio_Value_p), FinalSystem_P.uDLookupTable_bp01Data_n,
        FinalSystem_P.uDLookupTable_bp02Data_a,
        FinalSystem_P.uDLookupTable_tableData_j,
        FinalSystem_P.uDLookupTable_maxIndex_a, 6U), rtb_Minus,
        FinalSystem_U->FromCM.WheelIn.RL.rotv,
        &FinalSystem_B->IfActionSubsystem1_il,
        &FinalSystem_P.IfActionSubsystem1_il);

      /* End of Outputs for SubSystem: '<S28>/If Action Subsystem1' */
    }

    /* End of If: '<S28>/If' */

    /* Product: '<S20>/Product2' incorporates:
     *  Constant: '<S20>/GearRatio'
     *  Sum: '<S28>/Sum'
     */
    FinalSystem_B->Product2_b =
      (FinalSystem_B->IfActionSubsystem_m.torqueRequest +
       FinalSystem_B->IfActionSubsystem1_il.Mult) *
      FinalSystem_P.GearRatio_Value_p;

    /* Gain: '<S20>/Gain' */
    FinalSystem_B->Gain_g = FinalSystem_P.Gain_Gain_f *
      FinalSystem_B->Product2_b;

    /* S-Function (read_dict): '<S20>/Read CM Dict1' */
    {
      tDDictEntry *e;
      e = (tDDictEntry *)FinalSystem_DW->ReadCMDict1_PWORK_e.Entry;
      if (!FinalSystem_DW->ReadCMDict1_IWORK_c.Checked) {
        FinalSystem_DW->ReadCMDict1_IWORK_c.Checked = 1;
        DDictErrorUponFakedEntry(e, "Model 'FinalSystem'");
      }

      FinalSystem_B->ReadCMDict1_h = e->GetFunc(e->Var);
    }

    /* Sum: '<S27>/Minus' incorporates:
     *  Constant: '<S20>/TargetSlip'
     */
    rtb_Minus = FinalSystem_B->ReadCMDict1_h - FinalSystem_P.TargetSlip_Value_m;

    /* If: '<S27>/If' incorporates:
     *  Abs: '<S20>/Abs1'
     *  Constant: '<Root>/TractionMode'
     *  Constant: '<S20>/GearRatio'
     *  Gain: '<S20>/Gain3'
     *  Lookup_n-D: '<S20>/2-D Lookup Table1'
     *  Product: '<S20>/Product1'
     */
    if ((rtb_Minus <= 0.0) || (FinalSystem_P.TractionMode_Value == 0.0)) {
      /* Outputs for IfAction SubSystem: '<S27>/If Action Subsystem' incorporates:
       *  ActionPort: '<S29>/Action Port'
       */
      FinalSystem_IfActionSubsystem_d(look2_binlxpw(FinalSystem_U->FromCM.Gas,
        FinalSystem_P.Gain3_Gain_ff * fabs(FinalSystem_U->FromCM.WheelIn.RR.rotv
        * FinalSystem_P.GearRatio_Value_p),
        FinalSystem_P.uDLookupTable1_bp01Data_h,
        FinalSystem_P.uDLookupTable1_bp02Data_e,
        FinalSystem_P.uDLookupTable1_tableData_c0,
        FinalSystem_P.uDLookupTable1_maxIndex_h, 6U),
        &FinalSystem_B->IfActionSubsystem_a);

      /* End of Outputs for SubSystem: '<S27>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S27>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S30>/Action Port'
       */
      FinalSystem_IfActionSubsystem1(look2_binlxpw(FinalSystem_U->FromCM.Gas,
        FinalSystem_P.Gain3_Gain_ff * fabs(FinalSystem_U->FromCM.WheelIn.RR.rotv
        * FinalSystem_P.GearRatio_Value_p),
        FinalSystem_P.uDLookupTable1_bp01Data_h,
        FinalSystem_P.uDLookupTable1_bp02Data_e,
        FinalSystem_P.uDLookupTable1_tableData_c0,
        FinalSystem_P.uDLookupTable1_maxIndex_h, 6U), rtb_Minus,
        FinalSystem_U->FromCM.WheelIn.RR.rotv,
        &FinalSystem_B->IfActionSubsystem1_h,
        &FinalSystem_P.IfActionSubsystem1_h);

      /* End of Outputs for SubSystem: '<S27>/If Action Subsystem1' */
    }

    /* End of If: '<S27>/If' */

    /* Product: '<S20>/Product3' incorporates:
     *  Constant: '<S20>/GearRatio'
     *  Sum: '<S27>/Sum'
     */
    FinalSystem_B->Product3_m =
      (FinalSystem_B->IfActionSubsystem_a.torqueRequest +
       FinalSystem_B->IfActionSubsystem1_h.Mult) *
      FinalSystem_P.GearRatio_Value_p;

    /* Gain: '<S20>/Gain2' */
    FinalSystem_B->Gain2_l = FinalSystem_P.Gain2_Gain_b *
      FinalSystem_B->Product3_m;

    /* End of Outputs for SubSystem: '<S2>/Traction Control' */
  }

  /* End of If: '<S2>/If' */

  /* Sum: '<S2>/Sum' */
  FinalSystem_Y->ToCM.WheelOut.FL.Trq_Drive = FinalSystem_B->Product1 +
    FinalSystem_B->Product2;

  /* Sum: '<S2>/Sum1' */
  FinalSystem_Y->ToCM.WheelOut.FL.Trq_Supp2WC = FinalSystem_B->Gain_gk +
    FinalSystem_B->Gain;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.FL.Inert_in'
   */
  FinalSystem_Y->ToCM.WheelOut.FL.Inert_in =
    FinalSystem_P.WheelOutFLInert_in_Value;

  /* Sum: '<S2>/Sum2' */
  FinalSystem_Y->ToCM.WheelOut.FR.Trq_Drive = FinalSystem_B->Product1_o +
    FinalSystem_B->Product3;

  /* Sum: '<S2>/Sum3' */
  FinalSystem_Y->ToCM.WheelOut.FR.Trq_Supp2WC = FinalSystem_B->Gain_f +
    FinalSystem_B->Gain2;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.FR.Inert_in'
   */
  FinalSystem_Y->ToCM.WheelOut.FR.Inert_in =
    FinalSystem_P.WheelOutFRInert_in_Value;

  /* Sum: '<S2>/Sum4' */
  FinalSystem_Y->ToCM.WheelOut.RL.Trq_Drive = FinalSystem_B->Product1_j +
    FinalSystem_B->Product2_b;

  /* Sum: '<S2>/Sum5' */
  FinalSystem_Y->ToCM.WheelOut.RL.Trq_Supp2WC = FinalSystem_B->Gain_m +
    FinalSystem_B->Gain_g;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.RL.Inert_in'
   */
  FinalSystem_Y->ToCM.WheelOut.RL.Inert_in =
    FinalSystem_P.WheelOutRLInert_in_Value;

  /* Sum: '<S2>/Sum6' */
  FinalSystem_Y->ToCM.WheelOut.RR.Trq_Drive = FinalSystem_B->Product1_e +
    FinalSystem_B->Product3_m;

  /* Sum: '<S2>/Sum7' */
  FinalSystem_Y->ToCM.WheelOut.RR.Trq_Supp2WC = FinalSystem_B->Gain_h +
    FinalSystem_B->Gain2_l;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.RR.Inert_in'
   */
  FinalSystem_Y->ToCM.WheelOut.RR.Inert_in =
    FinalSystem_P.WheelOutRRInert_in_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/PowerDelta.Diffs'
   *  Constant: '<S1>/PowerDelta.Inert'
   *  Constant: '<S1>/PowerDelta.Inert_DL'
   *  Constant: '<S1>/PowerDelta.PlanetGear'
   *  Constant: '<S1>/PowerDelta.PowerSupply'
   *  Constant: '<S1>/PowerDelta.Shafts'
   *  Constant: '<S1>/PowerDelta.Spring_DL'
   */
  FinalSystem_Y->ToCM.PowerDelta.PlanetGear =
    FinalSystem_P.PowerDeltaPlanetGear_Value;
  FinalSystem_Y->ToCM.PowerDelta.Diffs = FinalSystem_P.PowerDeltaDiffs_Value;
  FinalSystem_Y->ToCM.PowerDelta.Shafts = FinalSystem_P.PowerDeltaShafts_Value;
  FinalSystem_Y->ToCM.PowerDelta.Spring_DL =
    FinalSystem_P.PowerDeltaSpring_DL_Value;
  FinalSystem_Y->ToCM.PowerDelta.Inert_DL =
    FinalSystem_P.PowerDeltaInert_DL_Value;
  FinalSystem_Y->ToCM.PowerDelta.Inert = FinalSystem_P.PowerDeltaInert_Value;
  FinalSystem_Y->ToCM.PowerDelta.PowerSupply =
    FinalSystem_P.PowerDeltaPowerSupply_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BCU_Status'
   *  Constant: '<S1>/DL_iDiff_mean'
   *  Constant: '<S1>/ECU_Status'
   *  Constant: '<S1>/MCU_Status'
   *  Constant: '<S1>/TCU_Status'
   *  Outport: '<Root>/ToCM'
   */
  FinalSystem_Y->ToCM.ECU_Status = FinalSystem_P.ECU_Status_Value;
  FinalSystem_Y->ToCM.MCU_Status = FinalSystem_P.MCU_Status_Value;
  FinalSystem_Y->ToCM.TCU_Status = FinalSystem_P.TCU_Status_Value;
  FinalSystem_Y->ToCM.BCU_Status = FinalSystem_P.BCU_Status_Value;
  FinalSystem_Y->ToCM.Trq_Supp2Bdy1.rx = rtb_Trq_Supp2Bdy1_rx;
  FinalSystem_Y->ToCM.Trq_Supp2Bdy1.ry = rtb_Trq_Supp2Bdy1_ry;
  FinalSystem_Y->ToCM.Trq_Supp2Bdy1.rz = rtb_Trq_Supp2Bdy1_rz;
  FinalSystem_Y->ToCM.Trq_Supp2Bdy1B.rx = rtb_Trq_Supp2Bdy1B_rx;
  FinalSystem_Y->ToCM.Trq_Supp2Bdy1B.ry = rtb_Trq_Supp2Bdy1B_ry;
  FinalSystem_Y->ToCM.Trq_Supp2Bdy1B.rz = rtb_Trq_Supp2Bdy1B_rz;
  FinalSystem_Y->ToCM.DL_iDiff_mean = FinalSystem_P.DL_iDiff_mean_Value;
}

/* Model initialize function */
void FinalSystem_initialize(RT_MODEL_FinalSystem_T *const FinalSystem_M)
{
  DW_FinalSystem_T *FinalSystem_DW = ((DW_FinalSystem_T *) FinalSystem_M->dwork);
  B_FinalSystem_T *FinalSystem_B = ((B_FinalSystem_T *) FinalSystem_M->blockIO);

  /* Start for IfAction SubSystem: '<S2>/Traction Control' */
  /* Start for S-Function (write_dict): '<S21>/Write CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Caleb.TorqueRequest", NULL);
    FinalSystem_DW->WriteCMDict_IWORK.Checked = 0;
    FinalSystem_DW->WriteCMDict_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S21>/Write CM Dict1' incorporates:
   *  Constant: '<S19>/TargetSlip'
   */
  {
    char **namevec = CM_Names2StrVec("Caleb.TargetSlip", NULL);
    FinalSystem_DW->WriteCMDict1_IWORK.Checked = 0;
    FinalSystem_DW->WriteCMDict1_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (read_dict): '<S19>/Read CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Car.LongSlipFL", NULL);
    FinalSystem_DW->ReadCMDict_IWORK.Checked = 0;
    FinalSystem_DW->ReadCMDict_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for IfAction SubSystem: '<S21>/If Action Subsystem1' */
  /* Start for S-Function (write_dict): '<S24>/Write CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Debug.TorqueR", NULL);
    FinalSystem_DW->WriteCMDict_IWORK_a.Checked = 0;
    FinalSystem_DW->WriteCMDict_PWORK_g.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S24>/Write CM Dict1' */
  {
    char **namevec = CM_Names2StrVec("Debug.TorqueA", NULL);
    FinalSystem_DW->WriteCMDict1_IWORK_j.Checked = 0;
    FinalSystem_DW->WriteCMDict1_PWORK_k.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S24>/Write CM Dict2' */
  {
    char **namevec = CM_Names2StrVec("Debug.Table", NULL);
    FinalSystem_DW->WriteCMDict2_IWORK_e.Checked = 0;
    FinalSystem_DW->WriteCMDict2_PWORK_l.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S24>/Write CM Dict3' */
  {
    char **namevec = CM_Names2StrVec("Debug.SlipDiff", NULL);
    FinalSystem_DW->WriteCMDict3_IWORK_b.Checked = 0;
    FinalSystem_DW->WriteCMDict3_PWORK_p.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S24>/Write CM Dict4' incorporates:
   *  Inport: '<Root>/FromCM'
   */
  {
    char **namevec = CM_Names2StrVec("Debug.WhlSpeed", NULL);
    FinalSystem_DW->WriteCMDict4_IWORK_p.Checked = 0;
    FinalSystem_DW->WriteCMDict4_PWORK_e.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S24>/Write CM Dict5' */
  {
    char **namevec = CM_Names2StrVec("Debug.Percent", NULL);
    FinalSystem_DW->WriteCMDict5_IWORK.Checked = 0;
    FinalSystem_DW->WriteCMDict5_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S24>/Write CM Dict6' */
  {
    char **namevec = CM_Names2StrVec("Debug.RawTable", NULL);
    FinalSystem_DW->WriteCMDict6_IWORK_e.Checked = 0;
    FinalSystem_DW->WriteCMDict6_PWORK_f.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S21>/Write CM Dict2' */
  {
    char **namevec = CM_Names2StrVec("Caleb.IfOutput", NULL);
    FinalSystem_DW->WriteCMDict2_IWORK.Checked = 0;
    FinalSystem_DW->WriteCMDict2_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S21>/Write CM Dict4' */
  {
    char **namevec = CM_Names2StrVec("Caleb.IfOutputTwo", NULL);
    FinalSystem_DW->WriteCMDict4_IWORK.Checked = 0;
    FinalSystem_DW->WriteCMDict4_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S21>/Write CM Dict6' */
  {
    char **namevec = CM_Names2StrVec("Caleb.DiffSlip", NULL);
    FinalSystem_DW->WriteCMDict6_IWORK.Checked = 0;
    FinalSystem_DW->WriteCMDict6_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S21>/Write CM Dict7' */
  {
    char **namevec = CM_Names2StrVec("Caleb.TorqueOut", NULL);
    FinalSystem_DW->WriteCMDict7_IWORK.Checked = 0;
    FinalSystem_DW->WriteCMDict7_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S21>/Write CM Dict8' */
  {
    char **namevec = CM_Names2StrVec("Caleb.ActualSlip", NULL);
    FinalSystem_DW->WriteCMDict8_IWORK.Checked = 0;
    FinalSystem_DW->WriteCMDict8_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (write_dict): '<S21>/Write CM Dict3' */
  {
    char **namevec = CM_Names2StrVec("Caleb.TorquePidOut", NULL);
    FinalSystem_DW->WriteCMDict3_IWORK.Checked = 0;
    FinalSystem_DW->WriteCMDict3_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (read_dict): '<S19>/Read CM Dict1' */
  {
    char **namevec = CM_Names2StrVec("Car.LongSlipFR", NULL);
    FinalSystem_DW->ReadCMDict1_IWORK.Checked = 0;
    FinalSystem_DW->ReadCMDict1_PWORK.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (read_dict): '<S20>/Read CM Dict' */
  {
    char **namevec = CM_Names2StrVec("Car.LongSlipFL", NULL);
    FinalSystem_DW->ReadCMDict_IWORK_i.Checked = 0;
    FinalSystem_DW->ReadCMDict_PWORK_n.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* Start for S-Function (read_dict): '<S20>/Read CM Dict1' */
  {
    char **namevec = CM_Names2StrVec("Car.LongSlipFR", NULL);
    FinalSystem_DW->ReadCMDict1_IWORK_c.Checked = 0;
    FinalSystem_DW->ReadCMDict1_PWORK_e.Entry = (void *)DDictGetEntryOrFake
      (namevec[0]);
    CM_FreeStrVec(namevec);
  }

  /* End of Start for SubSystem: '<S2>/Traction Control' */

  /* SystemInitialize for IfAction SubSystem: '<S2>/Launch Control' */
  /* SystemInitialize for IfAction SubSystem: '<S6>/If Action Subsystem' */
  FinalSystem_IfActionSubsystem_Init(&FinalSystem_B->IfActionSubsystem,
    &FinalSystem_P.IfActionSubsystem);

  /* End of SystemInitialize for SubSystem: '<S6>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S6>/If Action Subsystem1' */
  FinalSystem_IfActionSubsystem_Init(&FinalSystem_B->IfActionSubsystem1,
    &FinalSystem_P.IfActionSubsystem1);

  /* End of SystemInitialize for SubSystem: '<S6>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S7>/If Action Subsystem' */
  FinalSystem_IfActionSubsystem_Init(&FinalSystem_B->IfActionSubsystem_b,
    &FinalSystem_P.IfActionSubsystem_b);

  /* End of SystemInitialize for SubSystem: '<S7>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S7>/If Action Subsystem1' */
  FinalSystem_IfActionSubsystem_Init(&FinalSystem_B->IfActionSubsystem1_d,
    &FinalSystem_P.IfActionSubsystem1_d);

  /* End of SystemInitialize for SubSystem: '<S7>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S8>/If Action Subsystem' */
  FinalSystem_IfActionSubsystem_Init(&FinalSystem_B->IfActionSubsystem_d,
    &FinalSystem_P.IfActionSubsystem_d);

  /* End of SystemInitialize for SubSystem: '<S8>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S8>/If Action Subsystem1' */
  FinalSystem_IfActionSubsystem_Init(&FinalSystem_B->IfActionSubsystem1_g,
    &FinalSystem_P.IfActionSubsystem1_g);

  /* End of SystemInitialize for SubSystem: '<S8>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S9>/If Action Subsystem' */
  FinalSystem_IfActionSubsystem_Init(&FinalSystem_B->IfActionSubsystem_l,
    &FinalSystem_P.IfActionSubsystem_l);

  /* End of SystemInitialize for SubSystem: '<S9>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S9>/If Action Subsystem1' */
  FinalSystem_IfActionSubsystem_Init(&FinalSystem_B->IfActionSubsystem1_c,
    &FinalSystem_P.IfActionSubsystem1_c);

  /* End of SystemInitialize for SubSystem: '<S9>/If Action Subsystem1' */

  /* SystemInitialize for Outport: '<S3>/FL trq' */
  FinalSystem_B->Product1 = FinalSystem_P.FLtrq_Y0;

  /* SystemInitialize for Outport: '<S3>/FL trq inv' */
  FinalSystem_B->Gain_gk = FinalSystem_P.FLtrqinv_Y0;

  /* SystemInitialize for Outport: '<S3>/FR trq' */
  FinalSystem_B->Product1_o = FinalSystem_P.FRtrq_Y0;

  /* SystemInitialize for Outport: '<S3>/FR trq inv' */
  FinalSystem_B->Gain_f = FinalSystem_P.FRtrqinv_Y0;

  /* SystemInitialize for Outport: '<S3>/RL trq' */
  FinalSystem_B->Product1_j = FinalSystem_P.RLtrq_Y0;

  /* SystemInitialize for Outport: '<S3>/RL trq inv' */
  FinalSystem_B->Gain_m = FinalSystem_P.RLtrqinv_Y0;

  /* SystemInitialize for Outport: '<S3>/RR trq' */
  FinalSystem_B->Product1_e = FinalSystem_P.RRtrq_Y0;

  /* SystemInitialize for Outport: '<S3>/RR trq inv' */
  FinalSystem_B->Gain_h = FinalSystem_P.RRtrqinv_Y0;

  /* End of SystemInitialize for SubSystem: '<S2>/Launch Control' */

  /* SystemInitialize for IfAction SubSystem: '<S2>/Traction Control' */
  /* SystemInitialize for IfAction SubSystem: '<S21>/If Action Subsystem' */
  FinalSystem_IfActionSubsystem_p_Init(&FinalSystem_B->IfActionSubsystem_d1,
    &FinalSystem_P.IfActionSubsystem_d1);

  /* End of SystemInitialize for SubSystem: '<S21>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S21>/If Action Subsystem1' */
  /* SystemInitialize for Outport: '<S24>/TorqueOut' */
  FinalSystem_B->Mult = FinalSystem_P.TorqueOut_Y0;

  /* End of SystemInitialize for SubSystem: '<S21>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S22>/If Action Subsystem' */
  FinalSystem_IfActionSubsystem_p_Init(&FinalSystem_B->IfActionSubsystem_h,
    &FinalSystem_P.IfActionSubsystem_h);

  /* End of SystemInitialize for SubSystem: '<S22>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S22>/If Action Subsystem1' */
  FinalSystem_IfActionSubsystem1_Init(&FinalSystem_B->IfActionSubsystem1_m,
    &FinalSystem_P.IfActionSubsystem1_m);

  /* End of SystemInitialize for SubSystem: '<S22>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S28>/If Action Subsystem' */
  FinalSystem_IfActionSubsystem_p_Init(&FinalSystem_B->IfActionSubsystem_m,
    &FinalSystem_P.IfActionSubsystem_m);

  /* End of SystemInitialize for SubSystem: '<S28>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S28>/If Action Subsystem1' */
  FinalSystem_IfActionSubsystem1_Init(&FinalSystem_B->IfActionSubsystem1_il,
    &FinalSystem_P.IfActionSubsystem1_il);

  /* End of SystemInitialize for SubSystem: '<S28>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S27>/If Action Subsystem' */
  FinalSystem_IfActionSubsystem_p_Init(&FinalSystem_B->IfActionSubsystem_a,
    &FinalSystem_P.IfActionSubsystem_a);

  /* End of SystemInitialize for SubSystem: '<S27>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<S27>/If Action Subsystem1' */
  FinalSystem_IfActionSubsystem1_Init(&FinalSystem_B->IfActionSubsystem1_h,
    &FinalSystem_P.IfActionSubsystem1_h);

  /* End of SystemInitialize for SubSystem: '<S27>/If Action Subsystem1' */

  /* SystemInitialize for Outport: '<S4>/FL trq' */
  FinalSystem_B->Product2 = FinalSystem_P.FLtrq_Y0_g;

  /* SystemInitialize for Outport: '<S4>/FL trq inv' */
  FinalSystem_B->Gain = FinalSystem_P.FLtrqinv_Y0_a;

  /* SystemInitialize for Outport: '<S4>/FR trq' */
  FinalSystem_B->Product3 = FinalSystem_P.FRtrq_Y0_i;

  /* SystemInitialize for Outport: '<S4>/FR trq inv' */
  FinalSystem_B->Gain2 = FinalSystem_P.FRtrqinv_Y0_j;

  /* SystemInitialize for Outport: '<S4>/RL trq' */
  FinalSystem_B->Product2_b = FinalSystem_P.RLtrq_Y0_p;

  /* SystemInitialize for Outport: '<S4>/RL trq inv' */
  FinalSystem_B->Gain_g = FinalSystem_P.RLtrqinv_Y0_l;

  /* SystemInitialize for Outport: '<S4>/RR trq' */
  FinalSystem_B->Product3_m = FinalSystem_P.RRtrq_Y0_g;

  /* SystemInitialize for Outport: '<S4>/RR trq inv' */
  FinalSystem_B->Gain2_l = FinalSystem_P.RRtrqinv_Y0_o;

  /* End of SystemInitialize for SubSystem: '<S2>/Traction Control' */
}

/* Model terminate function */
void FinalSystem_terminate(RT_MODEL_FinalSystem_T * FinalSystem_M)
{
  /* model code */
  rt_FREE(FinalSystem_M->blockIO);
  rt_FREE(FinalSystem_M->inputs);
  rt_FREE(FinalSystem_M->outputs);
  rt_FREE(FinalSystem_M->dwork);
  rt_FREE(FinalSystem_M);
}

/* Model data allocation function */
RT_MODEL_FinalSystem_T *FinalSystem(struct tInfos *inf)
{
  RT_MODEL_FinalSystem_T *FinalSystem_M;
  FinalSystem_M = (RT_MODEL_FinalSystem_T *) malloc(sizeof
    (RT_MODEL_FinalSystem_T));
  if (FinalSystem_M == NULL) {
    return NULL;
  }

  (void) memset((char *)FinalSystem_M, 0,
                sizeof(RT_MODEL_FinalSystem_T));
  MatSupp_Init();

  /* block I/O */
  {
    B_FinalSystem_T *b = (B_FinalSystem_T *) malloc(sizeof(B_FinalSystem_T));
    rt_VALIDATE_MEMORY(FinalSystem_M,b);
    FinalSystem_M->blockIO = (b);
  }

  /* states (dwork) */
  {
    DW_FinalSystem_T *dwork = (DW_FinalSystem_T *) malloc(sizeof
      (DW_FinalSystem_T));
    rt_VALIDATE_MEMORY(FinalSystem_M,dwork);
    FinalSystem_M->dwork = (dwork);
  }

  /* external inputs */
  {
    ExtU_FinalSystem_T *FinalSystem_U = (ExtU_FinalSystem_T *) malloc(sizeof
      (ExtU_FinalSystem_T));
    rt_VALIDATE_MEMORY(FinalSystem_M,FinalSystem_U);
    FinalSystem_M->inputs = (((ExtU_FinalSystem_T *) FinalSystem_U));
  }

  /* external outputs */
  {
    ExtY_FinalSystem_T *FinalSystem_Y = (ExtY_FinalSystem_T *) malloc(sizeof
      (ExtY_FinalSystem_T));
    rt_VALIDATE_MEMORY(FinalSystem_M,FinalSystem_Y);
    FinalSystem_M->outputs = (FinalSystem_Y);
  }

  /* CarMaker parameter tuning */
  {
    FinalSystem_SetParams(FinalSystem_M, NULL, inf);
  }

  {
    B_FinalSystem_T *FinalSystem_B = ((B_FinalSystem_T *) FinalSystem_M->blockIO);
    DW_FinalSystem_T *FinalSystem_DW = ((DW_FinalSystem_T *)
      FinalSystem_M->dwork);
    ExtU_FinalSystem_T *FinalSystem_U = (ExtU_FinalSystem_T *)
      FinalSystem_M->inputs;
    ExtY_FinalSystem_T *FinalSystem_Y = (ExtY_FinalSystem_T *)
      FinalSystem_M->outputs;

    /* block I/O */
    (void) memset(((void *) FinalSystem_B), 0,
                  sizeof(B_FinalSystem_T));

    /* states (dwork) */
    (void) memset((void *)FinalSystem_DW, 0,
                  sizeof(DW_FinalSystem_T));

    /* external inputs */
    (void)memset(FinalSystem_U, 0, sizeof(ExtU_FinalSystem_T));

    /* external outputs */
    FinalSystem_Y->ToCM = FinalSystem_rtZcmPowerTrainXWDOut;
  }

  return FinalSystem_M;
}

/* CarMaker dictionary definitions. */
extern tQuantEntry *main_DictDefines[];
static tQuantEntry DictDefines[] = {
  { (void*)0x01234567, (void*)0x89ABCDEF, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { (void*)main_DictDefines, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 },

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

tQuantEntry *FinalSystem_DictDefines = DictDefines;
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

tMdlBdyFrame *FinalSystem_BdyFrameDefines = BdyFrameDefines;
tMdlBdyFrame *main_BdyFrameDefines[] = {
  BdyFrameDefines,
  NULL
};

#endif
