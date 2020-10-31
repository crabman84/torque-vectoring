/***************************************************** target specific file ***/
/*  Wrapper module for Simulink models                                        */
/*  ------------------------------------------------------------------------  */
/*  (c) IPG Automotive GmbH    www.ipg-automotive.com   Fon: +49.721.98520-0  */
/*  Bannwaldallee 60      D-76185 Karlsruhe   Germany   Fax: +49.721.98520-99 */
/******************************************************************************/

#ifndef __CALEBSLAUNCHCONTROL_WRAP_H__
#define __CALEBSLAUNCHCONTROL_WRAP_H__

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
# define rtModel_CalebsLaunchControl          RT_MODEL_CalebsLaunchControl_T
#else
# define rtModel_CalebsLaunchControl          tag_RTM_CalebsLaunchControl_T
#endif //CLASSIC_INTERFACE

#define ExternalInputs_CalebsLaunchControl   ExtU_CalebsLaunchControl_T
#define ExternalOutputs_CalebsLaunchControl  ExtY_CalebsLaunchControl_T

#ifndef CalebsLaunchControl_rtModel
typedef struct rtModel_CalebsLaunchControl rtModel_CalebsLaunchControl;
#endif

/* Model registration function */
rtModel_CalebsLaunchControl *CalebsLaunchControl (struct tInfos *Inf);

#if defined(CLASSIC_INTERFACE) && !defined(CM4SLDS)
void rt_ODECreateIntegrationData (RTWSolverInfo *si);
void rt_ODEUpdateContinuousStates(RTWSolverInfo *si);
void rt_ODEDestroyIntegrationData(RTWSolverInfo *si);
#endif


/* Dictionary variables and other items of the model */
extern struct tMatSuppDictDef *CalebsLaunchControl_DictDefines;
extern struct tMdlBdyFrame *CalebsLaunchControl_BdyFrameDefines;


/* Wrapper functions */
void CalebsLaunchControl_SetParams (rtModel_CalebsLaunchControl *rtm,
			struct tMatSuppTunables *tuns,
			struct tInfos *Inf);
int CalebsLaunchControl_Register (void);


#ifdef __cplusplus
}
#endif

#endif /* __CALEBSLAUNCHCONTROL_WRAP_H__ */

