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
*               and unmarshall funtions of SaMsgMessageT 
*     
* THIS FILE IS AUTO-GENERATED BY OPENCLOVIS IDE. EDIT THIS FILE AT
* YOUR OWN RISK. ANY CHANGE TO THIS FILE WILL BE OVERWRITTEN ON
* RE-GENERATION.
*     
*********************************************************************/

#ifndef _XDR_SA_MSG_MESSAGE_T_H_
#define _XDR_SA_MSG_MESSAGE_T_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "clXdrApi.h"

#include "clMsgCommon.h"
#include "clMsgCkptData.h"
#include "clIocApi.h"
#include "clCommon.h"
#include "saMsg.h"
#include "saAis.h"

struct _SaMsgMessageT_4_0_0;


ClRcT  clXdrMarshallSaMsgMessageT_4_0_0(void *,ClBufferHandleT , ClUint32T);

ClRcT  clXdrUnmarshallSaMsgMessageT_4_0_0(ClBufferHandleT, void *);

#define clXdrMarshallArraySaMsgMessageT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallArray((pointer), sizeof(SaMsgMessageT_4_0_0), (multiplicity), clXdrMarshallSaMsgMessageT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallArraySaMsgMessageT_4_0_0(msg,pointer, multiplicity) \
clXdrUnmarshallArray((msg),(pointer), sizeof(SaMsgMessageT_4_0_0), (multiplicity), clXdrUnmarshallSaMsgMessageT_4_0_0)

#define clXdrMarshallPointerSaMsgMessageT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallPointer((pointer), sizeof(SaMsgMessageT_4_0_0), (multiplicity), clXdrMarshallSaMsgMessageT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallPointerSaMsgMessageT_4_0_0(msg,pointer) \
clXdrUnmarshallPointer((msg),(pointer), sizeof(SaMsgMessageT_4_0_0), clXdrUnmarshallSaMsgMessageT_4_0_0)

#define clXdrMarshallPtrSaMsgMessageT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallPtr((pointer), sizeof(SaMsgMessageT_4_0_0), (multiplicity), clXdrMarshallSaMsgMessageT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallPtrSaMsgMessageT_4_0_0(msg,pointer,multiplicity) \
clXdrUnmarshallPtr((msg),(pointer), sizeof(SaMsgMessageT_4_0_0),multiplicity, clXdrUnmarshallSaMsgMessageT_4_0_0)


typedef SaMsgMessageT SaMsgMessageT_4_0_0;



#ifdef __cplusplus
}
#endif

#endif /*_XDR_SA_MSG_MESSAGE_T_H_*/