/***************************************************** target specific file ***/
/*  Wrapper module for Simulink models                                        */
/*  ------------------------------------------------------------------------  */
/*  (c) IPG Automotive GmbH    www.ipg-automotive.com   Fon: +49.721.98520-0  */
/*  Bannwaldallee 60      D-76185 Karlsruhe   Germany   Fax: +49.721.98520-99 */
/******************************************************************************/

#ifndef __SAE_POWERTRAIN_WRAP_H__
#define __SAE_POWERTRAIN_WRAP_H__
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
# define rtModel_SAE_Powertrain        RT_MODEL_SAE_Powertrain_T
#else
# define rtModel_SAE_Powertrain        tag_RTM_SAE_Powertrain_T
#endif                                 //CLASSIC_INTERFACE

#define ExternalInputs_SAE_Powertrain  ExtU_SAE_Powertrain_T
#define ExternalOutputs_SAE_Powertrain ExtY_SAE_Powertrain_T
#ifndef SAE_Powertrain_rtModel

  typedef struct rtModel_SAE_Powertrain rtModel_SAE_Powertrain;

#endif

  /* Model registration function */
  rtModel_SAE_Powertrain *SAE_Powertrain (struct tInfos *Inf);

#if defined(CLASSIC_INTERFACE) && !defined(CM4SLDS)

  void rt_ODECreateIntegrationData (RTWSolverInfo *si);
  void rt_ODEUpdateContinuousStates(RTWSolverInfo *si);
  void rt_ODEDestroyIntegrationData(RTWSolverInfo *si);

#endif

  /* Dictionary variables and other items of the model */
  extern struct tMatSuppDictDef *SAE_Powertrain_DictDefines;
  extern struct tMdlBdyFrame *SAE_Powertrain_BdyFrameDefines;

  /* Wrapper functions */
  void SAE_Powertrain_SetParams (rtModel_SAE_Powertrain *rtm,
      struct tMatSuppTunables *tuns,
      struct tInfos *Inf);
  int SAE_Powertrain_Register (void);

#ifdef __cplusplus

}
#endif
#endif                                 /* __SAE_POWERTRAIN_WRAP_H__ */
