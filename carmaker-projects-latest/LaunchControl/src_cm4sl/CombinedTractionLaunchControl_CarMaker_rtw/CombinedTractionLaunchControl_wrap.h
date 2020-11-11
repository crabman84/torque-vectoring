/***************************************************** target specific file ***/
/*  Wrapper module for Simulink models                                        */
/*  ------------------------------------------------------------------------  */
/*  (c) IPG Automotive GmbH    www.ipg-automotive.com   Fon: +49.721.98520-0  */
/*  Bannwaldallee 60      D-76185 Karlsruhe   Germany   Fax: +49.721.98520-99 */
/******************************************************************************/
#ifndef __COMBINEDTRACTIONLAUNCHCONTROL_WRAP_H__
#define __COMBINEDTRACTIONLAUNCHCONTROL_WRAP_H__
#ifndef IS_CAR
# define IS_CAR
#endif

#ifdef __cplusplus

extern "C" {

#endif

  struct tInfos;
  struct tMdlBdyFrame;
  struct tMatSuppDictDef;
  struct tMatSuppTunables;

#ifdef CLASSIC_INTERFACE
# define rtModel_CombinedTractionLaunchControl RT_MODEL_CombinedTractionLaunchControl_T
#else
# define rtModel_CombinedTractionLaunchControl tag_RTM_CombinedTractionLaunchControl_T
#endif                                 //CLASSIC_INTERFACE

#define ExternalInputs_CombinedTractionLaunchControl ExtU_CombinedTractionLaunchControl_T
#define ExternalOutputs_CombinedTractionLaunchControl ExtY_CombinedTractionLaunchControl_T
#ifndef CombinedTractionLaunchControl_rtModel

  typedef struct rtModel_CombinedTractionLaunchControl
    rtModel_CombinedTractionLaunchControl;

#endif

  /* Model registration function */
  rtModel_CombinedTractionLaunchControl *CombinedTractionLaunchControl (struct
    tInfos *Inf);

#if defined(CLASSIC_INTERFACE) && !defined(CM4SLDS)

  void rt_ODECreateIntegrationData (RTWSolverInfo *si);
  void rt_ODEUpdateContinuousStates(RTWSolverInfo *si);
  void rt_ODEDestroyIntegrationData(RTWSolverInfo *si);

#endif

  /* Dictionary variables and other items of the model */
  extern struct tMatSuppDictDef *CombinedTractionLaunchControl_DictDefines;
  extern struct tMdlBdyFrame *CombinedTractionLaunchControl_BdyFrameDefines;

  /* Wrapper functions */
  void CombinedTractionLaunchControl_SetParams
    (rtModel_CombinedTractionLaunchControl *rtm,
      struct tMatSuppTunables *tuns,
      struct tInfos *Inf);
  int CombinedTractionLaunchControl_Register (void);

#ifdef __cplusplus

}
#endif
#endif                            /* __COMBINEDTRACTIONLAUNCHCONTROL_WRAP_H__ */
