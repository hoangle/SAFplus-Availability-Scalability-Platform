
/*********************************************************************
* File: 
*********************************************************************/
/*********************************************************************
* Description : This file contains the declartions for server stub
*               routines
*     
* THIS FILE IS AUTO-GENERATED BY OPENCLOVIS IDE. EDIT THIS FILE AT
* YOUR OWN RISK. ANY CHANGE TO THIS FILE WILL BE OVERWRITTEN ON
* RE-GENERATION.
*     
*********************************************************************/

#ifndef _CKPTEOCKPTSERVERPEERPEEREXTFUNC_SERVER_H_
#define _CKPTEOCKPTSERVERPEERPEEREXTFUNC_SERVER_H_
#ifdef __cplusplus
extern "C" {
#endif
#include <clXdrApi.h>
#include <clIdlApi.h>
#include <ipi/clRmdIpi.h>
#include "../clientIDDefinitions.h"
#include "xdrClCkptIOVectorElementT.h"
#include "xdrCkptMasterDBClientInfoT.h"
#include "xdrCkptDynamicSyncupT.h"
#include "xdrCkptXlationDBEntryT.h"
#include "xdrCkptSectionInfoT.h"
#include "xdrCkptPeerListInfoT.h"
#include "xdrCkptCreateInfoT.h"
#include "xdrCkptCPInfoT.h"
#include "xdrClCkptCheckpointCreationAttributesT.h"
#include "xdrClCkptSectionIdT.h"
#include "xdrCkptHdlDbT.h"
#include "xdrCkptDPInfoT.h"
#include "xdrClCkptSectionDescriptorT.h"
#include "xdrCkptInfoT.h"
#include "xdrCkptMasterDBEntryIDLT.h"
#include "xdrCkptMasterDBInfoIDLT.h"
#include "xdrCkptOpenInfoT.h"
#include "xdrClCkptSectionCreationAttributesT.h"
#include "xdrClCkptCheckpointDescriptorT.h"
#include "xdrCkptUpdateFlagT.h"
#include "xdrCkptDynamicInfoT.h"



ClRcT clCkptRemSvrWelcome_5_1_0(CL_INOUT ClVersionT*  pVersion, CL_IN ClUint32T  peerAddr, CL_IN ClUint8T  credential);

ClRcT clCkptRemSvrWelcomeResponseSend_5_1_0(CL_IN ClIdlHandleT idlHdl,CL_IN ClRcT retCode,CL_INOUT  ClVersionT  pVersion);


#ifdef __cplusplus
}
#endif
#endif /*_CKPTEOCKPTSERVERPEERPEEREXTFUNC_SERVER_H_*/