/*
******************************************************************************
**  CarMaker
**  Vehicle Dynamics Simulation Toolkit
**
**  Copyright (C)   IPG Automotive GmbH
**                  Bannwaldallee 60             Phone  +49.721.98520.0
**                  76185 Karlsruhe              Fax    +49.721.98520.99
**                  Germany                      WWW    www.ipg-automotive.com
******************************************************************************
*/

#include <Global.h>

#if defined(WIN32)
#  include <windows.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <infoc.h>
#include <CarMaker.h>
#include <ipgdriver.h>
#include <road.h>

extern const char *SetConnectedIO (const char *io);

static const char *CompileLibs[] = {
    /* libCalebsLaunchControl_win64.a */
    /* libCombinedTractionLaunchControl_win64.a */
    /* libFinalSystem_win64.a */
    /* libSAE_Powertrain_win64.a */
    /* libExperimentalPowertrain_win64.a */
    /* libRuleBasedTractionControl_win64.a */
    /* C:/IPG/carmaker/win64-8.1.1/lib/libcar4sl.a */
    /* C:/IPG/carmaker/win64-8.1.1/lib/libcarmaker4sl.a */
    /* C:/IPG/carmaker/win64-8.1.1/lib/libipgdriver.a */
    /* C:/IPG/carmaker/win64-8.1.1/lib/libipgroad.a */
    /* C:/IPG/carmaker/win64-8.1.1/lib/libipgtire.a */
    "libCalebsLaunchControl_win64.a	CalebsLaunchControl win64 1.0 2020-10-23",
    "libCombinedTractionLaunchControl_win64.a	CombinedTractionLaunchControl win64 1.0 2020-10-24",
    "libFinalSystem_win64.a	FinalSystem win64 1.0 2020-10-24",
    "libSAE_Powertrain_win64.a	SAE_Powertrain win64 1.0 2020-10-28",
    "libExperimentalPowertrain_win64.a	ExperimentalPowertrain win64 1.0 2020-10-30",
    "libRuleBasedTractionControl_win64.a	RuleBasedTractionControl win64 1.0 2020-10-31",
    "libcar4sl.a	CarMaker-Car win64 8.1.1 2019-12-19",
    "libcarmaker4sl.a	CarMaker win64 8.1.1 2019-12-19",
    "libipgdriver.a	IPGDriver win64 8.1 2019-10-31",
    "libipgroad.a	IPGRoad win64 8.1.1 2019-12-19",
    "libipgtire.a	IPGTire win64 8.1 2019-11-05",
    NULL
};


static const char *CompileFlags[] = {
    "-O3 -DNDEBUG -DWIN32 -DWIN64 -DCM_NUMVER=80101",
    "-IC:/IPG/carmaker/win64-8.1.1/include -Wall",
    "-Wimplicit -Wmissing-prototypes",
    "-D__USE_MINGW_ANSI_STDIO -DCM4SL -U__STRICT_ANSI__",
    "-Wall -malign-double -fomit-frame-pointer",
    NULL
};


tAppStartInfo   AppStartInfo = {
    "Car_Generic ?.?",          /* App_Version         */
    "412",          /* App_BuildVersion    */
    "caleb",     /* App_CompileUser     */
    "dfcd05236",         /* App_CompileSystem   */
    "2020-10-31 11:33:59",  /* App_CompileTime */

    CompileFlags,                /* App_CompileFlags  */
    CompileLibs,                 /* App_Libs          */

    "8.1.1",          /* SetVersion        */

    NULL,           /* TestRunName       */
    NULL,           /* TestRunFName      */
    NULL,           /* TestRunVariation  */
    NULL,           /* LogFName          */

    0,              /* SaveMode          */
    0,              /* OnErrSaveHist     */

    0,              /* Verbose           */
    0,              /* Comments          */
    0,              /* ModelCheck        */
    0,              /* Snapshot          */
    0,              /* DriverAdaption    */
    0,              /* Log2Screen        */
    0,              /* ShowDataDict      */
    0,              /* DontHandleSignals */
    {0, 0, NULL},   /* Suffixes          */
    {0, 0, NULL}    /* Keys              */
};



void
App_InfoPrint (void)
{
    int i;
    Log ("App.Version\t%s #%s (%s)\n",
            AppStartInfo.App_Version,
            AppStartInfo.App_BuildVersion,
            SimCoreInfo.Version);
    Log ("App.Compiled\t%s@%s %s\n",
            AppStartInfo.App_CompileUser,
            AppStartInfo.App_CompileSystem,
            AppStartInfo.App_CompileTime);

    i = 0;
    Log ("App.CompileFlags:\n");
    while (AppStartInfo.App_CompileFlags != NULL
        && AppStartInfo.App_CompileFlags[i] != NULL) {
        Log ("			%s\n", AppStartInfo.App_CompileFlags[i++]);
    }

    i = 0;
    Log ("App.Libs:\n");
    while (AppStartInfo.App_Libs != NULL && AppStartInfo.App_Libs[i] != NULL)
        Log ("			%s\n", AppStartInfo.App_Libs[i++]);

    /* Security */
    i = 0;
    Log ("App.Suffixes:\n");
    while (AppStartInfo.Suffix.List != NULL && AppStartInfo.Suffix.List[i] != NULL)
        Log ("			%s\n", AppStartInfo.Suffix.List[i++]);

    i = 0;
    Log ("App.Keys:\n");
    while (AppStartInfo.Key.List != NULL && AppStartInfo.Key.List[i] != NULL)
        Log ("			%s\n", AppStartInfo.Key.List[i++]);


    /*** Linked libraries */
    Log ("App.Version.Driver =\t%s\n",  IPGDrv_LibVersion);
    Log ("App.Version.Road =\t%s\n",    RoadLibVersion);
}




int
App_ExportConfig (void)
{
    int        i, n;
    char       *txt[42], sbuf[512];
    char const *item;
    tInfos *inf = SimCore.Config.Inf;

    InfoSetStr (inf, "Application.Version",       AppStartInfo.App_Version);
    InfoSetStr (inf, "Application.BuildVersion",  AppStartInfo.App_BuildVersion);
    InfoSetStr (inf, "Application.CompileTime",   AppStartInfo.App_CompileTime);
    InfoSetStr (inf, "Application.CompileUser",   AppStartInfo.App_CompileUser);
    InfoSetStr (inf, "Application.CompileSystem", AppStartInfo.App_CompileSystem);
    if (AppStartInfo.App_CompileFlags != NULL)
        InfoSetTxt (inf, "Application.CompileFlags",
                    (char**)AppStartInfo.App_CompileFlags);
    InfoAddLineBehind (inf, NULL, "");
    if (AppStartInfo.App_Libs != NULL)
        InfoSetTxt (inf, "Application.Libs",
                    (char**)AppStartInfo.App_Libs);
    InfoAddLineBehind (inf, NULL, "");

    /*** Linked libraries */
    InfoSetStr (inf, "Application.Version.Driver",  IPGDrv_LibVersion);
    InfoSetStr (inf, "Application.Version.Road",    RoadLibVersion);
    InfoAddLineBehind (inf, NULL, "");

    /*** I/O configuration */
    IO_ListNames(sbuf, -1);

    n = 0;
    txt[n] = NULL;
    while (1) {
	item = strtok((n==0 ? sbuf : NULL), " \t");
	if (item == NULL || n >= 42-1)
	    break;

	txt[n++] = strdup(item);
	txt[n] =   NULL;
    }

    InfoSetTxt (inf, "IO.Configs", txt);
    InfoAddLineBehind (inf, NULL, "");

    for (i=0; i < n; i++)
	free (txt[i]);

    return 0;
}


#if defined(_DS1006)
void
IPGRT_Board_Init (void)
{
    init();
}
#endif

