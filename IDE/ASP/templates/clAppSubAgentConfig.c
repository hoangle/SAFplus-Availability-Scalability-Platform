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
/*
 * Build: 4.2.0
 */
/*******************************************************************************
 * ModuleName  : clAppSubAgentConfig                                            
* File        : clAppSubAgentConfig.c
 *******************************************************************************/

/*******************************************************************************
 * Description : This file needs to be modified by the user appropriately as
 * per the requirement of  sub-agent. 
 * WARNING : APPLICATION CODE MAY NOT COMPILE CORRECTLY  IF THESE MODIFICATION ARE
 * NOT PERFORMED  APPROPRIATELY
 *******************************************************************************/

#include <clLogApi.h>
#include <clSnmpLog.h>
#include <clDebugApi.h>
#include <clSnmpOp.h>
#include <clSampleMIB.h>   /* 
                            * This inclusion is for prepackaged example.
                            * Application needs to specify its own 
                            * mib2c generated header file. This  file  has the prototype for 
                            * init function used in init_appMIB.
                            */
#include <clAppSubAgentConfig.h>

/*
 * This structure contains information regarding oid of the table and the 
 * type of index. The index  can  either be  a string value or a non-string value 
 * Application needs to modify this code as per the index defintion of his
 * tables. The default values provided are meant for prepackaged example.
 */

ClSnmpIndexTableT appMibInfoTbl[] =
{
    {CL_PROV_GIGE_TABLE, {1, 3, 6, 1, 4, 1, 20000, 1},
                                    1/*no of index*/, {{CL_SNMP_STRING_ATTR, CL_SNMP_DISPLAY_STRING_SIZE}} },
    {CL_PROV_T3_TABLE, {1, 3, 6, 1, 4, 1, 20000, 2},
                                    1/*no of index*/, {{CL_SNMP_STRING_ATTR, CL_SNMP_DISPLAY_STRING_SIZE}} },
    {0, {0}, 0, {{0,0}}}
};

/*
 * This has a mapping of the table oid, with table name and the instance 
 * translator and instance comparison functions.
 * Application needs to modify this mapping table as per the translator and Instance compare
 * fuctions requirement. The default values provided are meant for prepackaged example.
 */
ClSnmpOidTableT appOidTable[]= {
    {"1.3.6.1.4.1.20000.1", CL_PROV_GIGE_TABLE, sampleInstXlator, sampleInstCompare},
    {"1.3.6.1.4.1.20000.2", CL_PROV_T3_TABLE, sampleInstXlator, sampleInstCompare},
    {(ClCharT *)NULL, -1}
};
			
/*
 * This provides mapping between trap oid and the notification call back function 
 * generated by mib2c. When an alarm is raised this mapping is used to call the
 * corresponding notification function.
 */
ClSnmpNotifyCallbackTableT clSnmpAppCallback[]= {
    {NULL, NULL}
};

/*
 * This function needs to be written for every application MIB sub-agent. From
 * this function call the app MIB specific init functions. The app MIB
 * specific init functions are generated by mib2c
 */
 
void init_appMIB(void)
{
    

	/*Application needs to replace the below function with  mib2c generated init function.*/
	init_sampleMIB();
}

/*
 * This function needs to be written for every application MIB sub-agent. 
 * This implements the extraction part of the MIB table index. The user 
 * fills the logic for obtaining the index.
 */
  
ClRcT sampleInstXlator (CL_IN const struct ClMedAgentId *pAgntId,
                     CL_IN ClCorMOIdPtrT         hmoId,
                     CL_IN ClCorAttrPathPtrT containedPath,
                     CL_OUT void**         pRetInstData,
                     CL_OUT ClUint32T     *instLen,
                     CL_IN ClUint32T     create)
{
    ClRcT       rc = CL_OK; /* Return code */ 
    ClUint32T   len = 0;
    ClSNMPRequestInfoT *pInst = (ClSNMPRequestInfoT*)*pRetInstData;
    ClCntNodeHandleT nodeHandle;
    ClSnmpOidTableT *pOidTable;
    ClNameT moIdName;
   
    if(CL_OK != (rc = clCntNodeFind(gClSnmpOidContainerHandle, (ClCntKeyHandleT)pAgntId->id, &nodeHandle) ) )
    {
        CL_DEBUG_PRINT(CL_DEBUG_ERROR, ("Could not find node for oid %s. RC = 0x%x",(ClCharT *) pAgntId->id, rc) );
        return rc;
    }
    if(CL_OK != (rc = clCntNodeUserDataGet(gClSnmpOidContainerHandle, nodeHandle, (ClCntDataHandleT *)&pOidTable) ) )
    {
        CL_DEBUG_PRINT(CL_DEBUG_ERROR, ("Could not find node for oid %s. RC = 0x%x",(ClCharT *) pAgntId->id, rc) );
        return rc;
    }
    
    if (pInst == NULL)
    {
        pInst = (ClSNMPRequestInfoT *) clHeapAllocate (sizeof (ClSNMPRequestInfoT));
        if (pInst == NULL)
        {
            CL_DEBUG_PRINT(CL_DEBUG_ERROR, ("snmpInstXlator Unable to allocate memory for the instance translation!\n"));
            clLogWrite(CL_LOG_HANDLE_APP, CL_LOG_ERROR, NULL, CL_LOG_MESSAGE_0_MEMORY_ALLOCATION_FAILED);
            return (CL_ERR_NO_MEMORY);
        }
        *instLen = sizeof (ClSNMPRequestInfoT);
        *pRetInstData = (void**)pInst;
    }
    for(len = 0; len < pAgntId->len; len++)
    {
        pInst->oid[len] = pAgntId->id[len];
    }
    memset(&moIdName, 0, sizeof(ClNameT) );
    switch (pOidTable->tableType)
    {
        case CL_PROV_GIGE_TABLE:
        {
            pInst->tableType = CL_PROV_GIGE_TABLE;
            if (0 == create)
            {
                clCorMoIdToMoIdNameGet(hmoId, &moIdName);
                strcpy(pInst->index.provGigeInfo.dispMoid, moIdName.value);
            }
            break;
        }
        case CL_PROV_T3_TABLE:
        {
            pInst->tableType = CL_PROV_T3_TABLE;
            if (0 == create)
            {
                clCorMoIdToMoIdNameGet(hmoId, &moIdName);
                strcpy(pInst->index.provT3Info.dispMoid, moIdName.value);
            }
            break;
        }
        default:
        {
            pInst->tableType = CL_SNMP_TABLE_MAX;
            break;
        }
    }
    *pRetInstData = (void**)pInst;
    return (rc);
}

/*
 * This function needs to be written for every application MIB sub-agent.
 * The information for MIB table index is stored in container, so the user
 * needs to provide logic for key comparison of the container.
 */
ClInt32T  sampleInstCompare (CL_IN ClCntKeyHandleT key1,
                            CL_IN ClCntKeyHandleT key2)
{
    ClSNMPRequestInfoT *pTabIdx1 = NULL;
    ClSNMPRequestInfoT *pTabIdx2 = NULL;
    ClUint32T rc = CL_OK;
    
    if (key1 != 0) pTabIdx1 = (ClSNMPRequestInfoT *)key1;
    if (key2 != 0) pTabIdx2 = (ClSNMPRequestInfoT *)key2;
   
    if(pTabIdx1->tableType == CL_PROV_GIGE_TABLE)
        rc = strcmp((char*)pTabIdx1->index.provGigeInfo.dispMoid, (char*)pTabIdx2->index.provGigeInfo.dispMoid);
    else if(pTabIdx1->tableType == CL_PROV_T3_TABLE)
        rc = strcmp((char*)pTabIdx1->index.provT3Info.dispMoid, (char*)pTabIdx2->index.provT3Info.dispMoid);
    return rc;
}
