/***************************************************** target specific file ***/
/*  Wrapper module for Simulink models                                        */
/*  ------------------------------------------------------------------------  */
/*  (c) IPG Automotive GmbH    www.ipg-automotive.com   Fon: +49.721.98520-0  */
/*  Bannwaldallee 60      D-76185 Karlsruhe   Germany   Fax: +49.721.98520-99 */
/******************************************************************************/

#ifndef __RULEBASEDTRACTIONCONTROL_WRAP_H__
#define __RULEBASEDTRACTIONCONTROL_WRAP_H__
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
# define rtModel_RuleBasedTractionControl RT_MODEL_RuleBasedTractionControl_T
#else
# define rtModel_RuleBasedTractionControl tag_RTM_RuleBasedTractionControl_T
#endif                                 //CLASSIC_INTERFACE

#define ExternalInputs_RuleBasedTractionControl ExtU_RuleBasedTractionControl_T
#define ExternalOutputs_RuleBasedTractionControl ExtY_RuleBasedTractionControl_T
#ifndef RuleBasedTractionControl_rtModel

  typedef struct rtModel_RuleBasedTractionControl
    rtModel_RuleBasedTractionControl;

#endif

  /* Model registration function */
  rtModel_RuleBasedTractionControl *RuleBasedTractionControl (struct tInfos *Inf);

#if defined(CLASSIC_INTERFACE) && !defined(CM4SLDS)

  void rt_ODECreateIntegrationData (RTWSolverInfo *si);
  void rt_ODEUpdateContinuousStates(RTWSolverInfo *si);
  void rt_ODEDestroyIntegrationData(RTWSolverInfo *si);

#endif

  /* Dictionary variables and other items of the model */
  extern struct tMatSuppDictDef *RuleBasedTractionControl_DictDefines;
  extern struct tMdlBdyFrame *RuleBasedTractionControl_BdyFrameDefines;

  /* Wrapper functions */
  void RuleBasedTractionControl_SetParams (rtModel_RuleBasedTractionControl *rtm,
      struct tMatSuppTunables *tuns,
      struct tInfos *Inf);
  int RuleBasedTractionControl_Register (void);

#ifdef __cplusplus

}
#endif
#endif                                 /* __RULEBASEDTRACTIONCONTROL_WRAP_H__ */
