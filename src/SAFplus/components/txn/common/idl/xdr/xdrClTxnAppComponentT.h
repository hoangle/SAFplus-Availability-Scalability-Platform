/*
 * Copyright (C) 2002-2012 OpenClovis Solutions Inc.  All Rights Reserved.
 *
 * This file is available  under  a  commercial  license  from  the
 * copyright  holder or the GNU General Public License Version 2.0.
 * 
 * The source code for  this program is not published  or otherwise 
 * divested of  its trade secrets, irrespective  of  what  has been 
 * deposited with the U.S. Copyright office.
 * 
 * This program is distributed in the  hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied  warranty  of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 * 
 * For more  information, see  the file  COPYING provided with this
 * material.
 */


/*********************************************************************
* ModuleName  : idl
*********************************************************************/
/*********************************************************************
* Description : This file contains the declarations for marshall 
*               and unmarshall funtions of ClTxnAppComponentT 
*     
* THIS FILE IS AUTO-GENERATED BY OPENCLOVIS IDE. EDIT THIS FILE AT
* YOUR OWN RISK. ANY CHANGE TO THIS FILE WILL BE OVERWRITTEN ON
* RE-GENERATION.
*     
*********************************************************************/

#ifndef _XDR_CL_TXN_APP_COMPONENT_T_H_
#define _XDR_CL_TXN_APP_COMPONENT_T_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "clXdrApi.h"

#include "clTxnCommonDefn.h"
#include "clIocApi.h"
#include "xdrClIocPhysicalAddressT.h"

struct _ClTxnAppComponentT_4_0_0;


ClRcT  clXdrMarshallClTxnAppComponentT_4_0_0(void *,ClBufferHandleT , ClUint32T);

ClRcT  clXdrUnmarshallClTxnAppComponentT_4_0_0(ClBufferHandleT, void *);

#define clXdrMarshallArrayClTxnAppComponentT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallArray((pointer), sizeof(ClTxnAppComponentT_4_0_0), (multiplicity), clXdrMarshallClTxnAppComponentT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallArrayClTxnAppComponentT_4_0_0(msg,pointer, multiplicity) \
clXdrUnmarshallArray((msg),(pointer), sizeof(ClTxnAppComponentT_4_0_0), (multiplicity), clXdrUnmarshallClTxnAppComponentT_4_0_0)

#define clXdrMarshallPointerClTxnAppComponentT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallPointer((pointer), sizeof(ClTxnAppComponentT_4_0_0), (multiplicity), clXdrMarshallClTxnAppComponentT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallPointerClTxnAppComponentT_4_0_0(msg,pointer) \
clXdrUnmarshallPointer((msg),(pointer), sizeof(ClTxnAppComponentT_4_0_0), clXdrUnmarshallClTxnAppComponentT_4_0_0)

#define clXdrMarshallPtrClTxnAppComponentT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallPtr((pointer), sizeof(ClTxnAppComponentT_4_0_0), (multiplicity), clXdrMarshallClTxnAppComponentT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallPtrClTxnAppComponentT_4_0_0(msg,pointer,multiplicity) \
clXdrUnmarshallPtr((msg),(pointer), sizeof(ClTxnAppComponentT_4_0_0),multiplicity, clXdrUnmarshallClTxnAppComponentT_4_0_0)


typedef ClTxnAppComponentT ClTxnAppComponentT_4_0_0;



#ifdef __cplusplus
}
#endif

#endif /*_XDR_CL_TXN_APP_COMPONENT_T_H_*/