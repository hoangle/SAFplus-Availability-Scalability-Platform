/*
 * Copyright (C) 2002-2009 by OpenClovis Inc. All  Rights Reserved.
 * 
 * The source code for  this program is not published  or otherwise 
 * divested of  its trade secrets, irrespective  of  what  has been 
 * deposited with the U.S. Copyright office.
 * 
 * This program is  free software; you can redistribute it and / or
 * modify  it under  the  terms  of  the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 * 
 * This program is distributed in the  hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied  warranty  of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 * 
 * You  should  have  received  a  copy of  the  GNU General Public
 * License along  with  this program. If  not,  write  to  the 
 * Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */


/*********************************************************************
* ModuleName  : idl
*********************************************************************/
/*********************************************************************
* Description : This file contains the declarations for marshall 
*               and unmarshall funtions of CkptPeerListInfoT 
*     
* THIS FILE IS AUTO-GENERATED BY OPENCLOVIS IDE. EDIT THIS FILE AT
* YOUR OWN RISK. ANY CHANGE TO THIS FILE WILL BE OVERWRITTEN ON
* RE-GENERATION.
*     
*********************************************************************/

#ifndef _XDR_CKPT_PEER_LIST_INFO_T_H_
#define _XDR_CKPT_PEER_LIST_INFO_T_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "clXdrApi.h"

#include "clCkptApi.h"
#include "clCkptExtApi.h"
#include "xdrCkptNodeListInfoT.h"
#include "../common/clCkptCommon.h"

struct _CkptPeerListInfoT_4_0_0;

typedef struct _CkptPeerListInfoT_4_0_0 {
    ClUint32T    nodeAddr;
    ClUint8T    credential;
    ClUint32T    available;
    ClUint32T    numOfOpens;
    ClUint32T    numOfHdl;
    ClUint32T    replicaCount;
    CkptNodeListInfoT_4_0_0*    nodeListInfo;
    ClHandleT*    mastHdlInfo;

}CkptPeerListInfoT_4_0_0;


ClRcT  clXdrMarshallCkptPeerListInfoT_4_0_0(void *,ClBufferHandleT , ClUint32T);

ClRcT  clXdrUnmarshallCkptPeerListInfoT_4_0_0(ClBufferHandleT, void *);

#define clXdrMarshallArrayCkptPeerListInfoT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallArray((pointer), sizeof(CkptPeerListInfoT_4_0_0), (multiplicity), clXdrMarshallCkptPeerListInfoT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallArrayCkptPeerListInfoT_4_0_0(msg,pointer, multiplicity) \
clXdrUnmarshallArray((msg),(pointer), sizeof(CkptPeerListInfoT_4_0_0), (multiplicity), clXdrUnmarshallCkptPeerListInfoT_4_0_0)

#define clXdrMarshallPointerCkptPeerListInfoT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallPointer((pointer), sizeof(CkptPeerListInfoT_4_0_0), (multiplicity), clXdrMarshallCkptPeerListInfoT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallPointerCkptPeerListInfoT_4_0_0(msg,pointer) \
clXdrUnmarshallPointer((msg),(pointer), sizeof(CkptPeerListInfoT_4_0_0), clXdrUnmarshallCkptPeerListInfoT_4_0_0)

#define clXdrMarshallPtrCkptPeerListInfoT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallPtr((pointer), sizeof(CkptPeerListInfoT_4_0_0), (multiplicity), clXdrMarshallCkptPeerListInfoT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallPtrCkptPeerListInfoT_4_0_0(msg,pointer,multiplicity) \
clXdrUnmarshallPtr((msg),(pointer), sizeof(CkptPeerListInfoT_4_0_0),multiplicity, clXdrUnmarshallCkptPeerListInfoT_4_0_0)


typedef CkptPeerListInfoT_4_0_0 CkptPeerListInfoT;



#ifdef __cplusplus
}
#endif

#endif /*_XDR_CKPT_PEER_LIST_INFO_T_H_*/
