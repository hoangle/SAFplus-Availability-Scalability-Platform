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
 * ModuleName  : ground
 * File        : clGroundPM.c
 *******************************************************************************/

/*******************************************************************************
 * Description :
 *******************************************************************************/

#include <assert.h>

#include <clCommon.h>
#include <clCommonErrors.h>

#include <clPMApi.h>

/* These files are only used to compile clEo.c in the main component.
   If a library is being used by a component and it fills out the
   ASP_LIBS part in Makefile properly, then this file will not get
   linked into the executable by 'ld'. Yes, 'ld' is more intelligent
   than us. */
ClRcT clPMLibInitialize(void)
{
    /* empty function to satisfy linker, but this should never get
       called. */
    assert(CL_FALSE);
    return CL_OK;
}

ClRcT clPMLibFinalize(void)
{
    /* empty function to satisfy linker, but this should never get
       called. */
    assert(CL_FALSE);
    return CL_OK;
}
