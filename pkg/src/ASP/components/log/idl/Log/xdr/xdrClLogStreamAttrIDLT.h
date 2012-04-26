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
*               and unmarshall funtions of ClLogStreamAttrIDLT 
*     
* THIS FILE IS AUTO-GENERATED BY OPENCLOVIS IDE. EDIT THIS FILE AT
* YOUR OWN RISK. ANY CHANGE TO THIS FILE WILL BE OVERWRITTEN ON
* RE-GENERATION.
*     
*********************************************************************/

#ifndef _XDR_CL_LOG_STREAM_ATTR_IDLT_H_
#define _XDR_CL_LOG_STREAM_ATTR_IDLT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "clXdrApi.h"

#include "clIocApi.h"
#include "clLogApi.h"
#include "xdrClWaterMarkT.h"
#include "xdrClLogFileFullActionT.h"

struct _ClLogStreamAttrIDLT_4_0_0;

typedef struct _ClLogStreamAttrIDLT_4_0_0 {
    ClStringT    fileName;
    ClStringT    fileLocation;
    ClUint32T    fileUnitSize;
    ClUint32T    recordSize;
    ClUint16T    haProperty;
    ClLogFileFullActionT_4_0_0    fileFullAction;
    ClUint32T    maxFilesRotated;
    ClUint32T    flushFreq;
    ClInt64T    flushInterval;
    ClWaterMarkT_4_0_0    waterMark;
    ClUint16T    syslog;

}ClLogStreamAttrIDLT_4_0_0;


ClRcT  clXdrMarshallClLogStreamAttrIDLT_4_0_0(void *,ClBufferHandleT , ClUint32T);

ClRcT  clXdrUnmarshallClLogStreamAttrIDLT_4_0_0(ClBufferHandleT, void *);

#define clXdrMarshallArrayClLogStreamAttrIDLT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallArray((pointer), sizeof(ClLogStreamAttrIDLT_4_0_0), (multiplicity), clXdrMarshallClLogStreamAttrIDLT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallArrayClLogStreamAttrIDLT_4_0_0(msg,pointer, multiplicity) \
clXdrUnmarshallArray((msg),(pointer), sizeof(ClLogStreamAttrIDLT_4_0_0), (multiplicity), clXdrUnmarshallClLogStreamAttrIDLT_4_0_0)

#define clXdrMarshallPointerClLogStreamAttrIDLT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallPointer((pointer), sizeof(ClLogStreamAttrIDLT_4_0_0), (multiplicity), clXdrMarshallClLogStreamAttrIDLT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallPointerClLogStreamAttrIDLT_4_0_0(msg,pointer) \
clXdrUnmarshallPointer((msg),(pointer), sizeof(ClLogStreamAttrIDLT_4_0_0), clXdrUnmarshallClLogStreamAttrIDLT_4_0_0)

#define clXdrMarshallPtrClLogStreamAttrIDLT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallPtr((pointer), sizeof(ClLogStreamAttrIDLT_4_0_0), (multiplicity), clXdrMarshallClLogStreamAttrIDLT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallPtrClLogStreamAttrIDLT_4_0_0(msg,pointer,multiplicity) \
clXdrUnmarshallPtr((msg),(pointer), sizeof(ClLogStreamAttrIDLT_4_0_0),multiplicity, clXdrUnmarshallClLogStreamAttrIDLT_4_0_0)


typedef ClLogStreamAttrIDLT_4_0_0 ClLogStreamAttrIDLT;



#ifdef __cplusplus
}
#endif

#endif /*_XDR_CL_LOG_STREAM_ATTR_IDLT_H_*/