/***************************************************** target specific file ***/
/*  Wrapper module for Simulink models                                        */
/*  ------------------------------------------------------------------------  */
/*  (c) IPG Automotive GmbH    www.ipg-automotive.com   Fon: +49.721.98520-0  */
/*  Bannwaldallee 60      D-76185 Karlsruhe   Germany   Fax: +49.721.98520-99 */
/******************************************************************************/

#ifndef __EXPERIMENTALPOWERTRAIN_WRAP_H__
#define __EXPERIMENTALPOWERTRAIN_WRAP_H__
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
# define rtModel_ExperimentalPowertrain RT_MODEL_ExperimentalPowertrain_T
#else
# define rtModel_ExperimentalPowertrain tag_RTM_ExperimentalPowertrain_T
#endif                                 //CLASSIC_INTERFACE

#define ExternalInputs_ExperimentalPowertrain ExtU_ExperimentalPowertrain_T
#define ExternalOutputs_ExperimentalPowertrain ExtY_ExperimentalPowertrain_T
#ifndef ExperimentalPowertrain_rtModel

  typedef struct rtModel_ExperimentalPowertrain rtModel_ExperimentalPowertrain;

#endif

  /* Model registration function */
  rtModel_ExperimentalPowertrain *ExperimentalPowertrain (struct tInfos *Inf);

#if defined(CLASSIC_INTERFACE) && !defined(CM4SLDS)

  void rt_ODECreateIntegrationData (RTWSolverInfo *si);
  void rt_ODEUpdateContinuousStates(RTWSolverInfo *si);
  void rt_ODEDestroyIntegrationData(RTWSolverInfo *si);

#endif

  /* Dictionary variables and other items of the model */
  extern struct tMatSuppDictDef *ExperimentalPowertrain_DictDefines;
  extern struct tMdlBdyFrame *ExperimentalPowertrain_BdyFrameDefines;

  /* Wrapper functions */
  void ExperimentalPowertrain_SetParams (rtModel_ExperimentalPowertrain *rtm,
      struct tMatSuppTunables *tuns,
      struct tInfos *Inf);
  int ExperimentalPowertrain_Register (void);

#ifdef __cplusplus

}
#endif
#endif                                 /* __EXPERIMENTALPOWERTRAIN_WRAP_H__ */
