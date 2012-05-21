/*
 * @(#) $RCSfile: ImportXMLAction.java,v $
 * $Revision: #2 $ $Date: 2007/01/03 $
 *
 * Copyright (C) 2005 -- Clovis Solutions.
 * Proprietary and Confidential. All Rights Reserved.
 *
 * This software is the proprietary information of Clovis Solutions.
 * Use is subject to license terms.
 *
 */
package com.clovis.cw.workspace.action;

import org.eclipse.jface.action.IAction;
import org.eclipse.ui.IViewActionDelegate;
import org.eclipse.ui.IViewPart;
import org.eclipse.ui.IWorkbenchWindow;
import org.eclipse.ui.IWorkbenchWindowActionDelegate;

import com.clovis.cw.workspace.dialog.ImportXMLDialog;

public class ImportXMLAction extends CommonMenuAction 
implements IWorkbenchWindowActionDelegate, IViewActionDelegate
{
    /**
     * @param action - IAction
     */
    public void run(IAction action)
    {
        ImportXMLDialog dialog = new ImportXMLDialog(_shell, _project);
        dialog.open();
        
    }
    /**
     * Does nothing
     */
    public void dispose()
    {
    }
    /**
     * initializes the shell variable
     * @param window - IWorkbenchWindow
     * 
     */
    public void init(IWorkbenchWindow window)
    {
        _shell = window.getShell();
    }
    /**
     * initializes the shell variable
     * @param view - IViewPart
     */
    public void init(IViewPart view)
    {
        _shell = view.getViewSite().getShell();
        
    }
}