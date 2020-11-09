/***************************************************** target specific file ***/
/*  Wrapper module for Simulink models                                        */
/*  ------------------------------------------------------------------------  */
/*  (c) IPG Automotive GmbH    www.ipg-automotive.com   Fon: +49.721.98520-0  */
/*  Bannwaldallee 60      D-76185 Karlsruhe   Germany   Fax: +49.721.98520-99 */
/******************************************************************************/

#ifndef __FINALSYSTEM_WRAP_H__
#define __FINALSYSTEM_WRAP_H__
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
# define rtModel_FinalSystem           RT_MODEL_FinalSystem_T
#else
# define rtModel_FinalSystem           tag_RTM_FinalSystem_T
#endif                                 //CLASSIC_INTERFACE

#define ExternalInputs_FinalSystem     ExtU_FinalSystem_T
#define ExternalOutputs_FinalSystem    ExtY_FinalSystem_T
#ifndef FinalSystem_rtModel

  typedef struct rtModel_FinalSystem rtModel_FinalSystem;

#endif

  /* Model registration function */
  rtModel_FinalSystem *FinalSystem (struct tInfos *Inf);

#if defined(CLASSIC_INTERFACE) && !defined(CM4SLDS)

  void rt_ODECreateIntegrationData (RTWSolverInfo *si);
  void rt_ODEUpdateContinuousStates(RTWSolverInfo *si);
  void rt_ODEDestroyIntegrationData(RTWSolverInfo *si);

#endif

  /* Dictionary variables and other items of the model */
  extern struct tMatSuppDictDef *FinalSystem_DictDefines;
  extern struct tMdlBdyFrame *FinalSystem_BdyFrameDefines;

  /* Wrapper functions */
  void FinalSystem_SetParams (rtModel_FinalSystem *rtm,
      struct tMatSuppTunables *tuns,
      struct tInfos *Inf);
  int FinalSystem_Register (void);

#ifdef __cplusplus

}
#endif
#endif                                 /* __FINALSYSTEM_WRAP_H__ */
