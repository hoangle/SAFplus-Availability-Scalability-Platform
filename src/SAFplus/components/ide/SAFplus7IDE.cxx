#include <sdk.h> // Code::Blocks SDK

//cb header
#include <configurationpanel.h>
#include <logmanager.h>
#include <cbproject.h>

//wx header
#include <wx/wx.h>
#include <wx/xrc/xmlres.h>
#include <wx/ffile.h>
#include <wx/toolbar.h>
#include <wx/treectrl.h>
#include <wx/menu.h>
#include <manager.h>
#include <editormanager.h>
#include <configmanager.h>

#include "SAFplus7IDE.h"
#include "SAFplus7EditorPanel.h"

// Register the plugin with Code::Blocks.
// We are using an anonymous namespace so we don't litter the global one.
namespace
{
PluginRegistrant<SAFplus7IDE> reg(_T("SAFplus7IDE"));
}

/*
Global define manager
*/
Manager    *m_manager = Manager::Get();
LogManager *m_log = Manager::Get()->GetLogManager();


/*
Binding wxWidget resource
*/
// Menu
int idMenuSAFplus7ClusterDesignGUI = XRCID("idMenuSAFplus7ClusterDesignGUI");

// Toolbar
int idToolbarSAFplus7ClusterDesignGUI = XRCID("idToolbarSAFplus7ClusterDesignGUI");

// events handling
BEGIN_EVENT_TABLE(SAFplus7IDE, cbPlugin)
    // add any events you want to handle here
    EVT_UPDATE_UI(idMenuSAFplus7ClusterDesignGUI, SAFplus7IDE::UpdateUI)
    EVT_UPDATE_UI(idToolbarSAFplus7ClusterDesignGUI, SAFplus7IDE::UpdateUI)

    EVT_MENU(idToolbarSAFplus7ClusterDesignGUI, SAFplus7IDE::Action)
    EVT_MENU(idMenuSAFplus7ClusterDesignGUI, SAFplus7IDE::Action)

END_EVENT_TABLE()

const wxString g_editorTitle = _T("SAFplus Cluster Design GUI");

// constructor
SAFplus7IDE::SAFplus7IDE()
{
    // Make sure our resources are available.
    // In the generated boilerplate code we have no resources but when
    // we add some, it will be nice that this code is in place already ;)
    if(!Manager::LoadResource(_T("SAFplus7IDE.zip")))
    {
        NotifyMissingFile(_T("SAFplus7IDE.zip"));
    }

}

// destructor
SAFplus7IDE::~SAFplus7IDE()
{
}

void SAFplus7IDE::OnAttach()
{
    m_IsAttached = true;
}

void SAFplus7IDE::OnRelease(bool appShutDown)
{
    // do de-initialization for your plugin
    // if appShutDown is true, the plugin is unloaded because Code::Blocks is being shut down,
    // which means you must not use any of the SDK Managers
    // NOTE: after this function, the inherited member variable
    // m_IsAttached will be FALSE...
    //m_IsAttached = false;
    if (!appShutDown)
    {
      SAFplus7EditorPanel::closeAllEditors();
    }
}

int SAFplus7IDE::Configure()
{
    //create and display the configuration dialog for your plugin
    cbConfigurationDialog dlg(Manager::Get()->GetAppWindow(), wxID_ANY, _("Your dialog title"));
    cbConfigurationPanel* panel = GetConfigurationPanel(&dlg);
    if (panel)
    {
        dlg.AttachConfigurationPanel(panel);
        PlaceWindow(&dlg);
        return dlg.ShowModal() == wxID_OK ? 0 : -1;
    }
    return -1;
}

void SAFplus7IDE::BuildMenu(wxMenuBar* menuBar)
{
    if (!IsAttached())
        return;

    /* Load XRC */
    m_menu = m_manager->LoadMenu(_T("safplus_menu"),true);

    /* */
    int posInsert = 7;
    int posPluginMenu = menuBar->FindMenu(_("P&lugins"));
    if (posPluginMenu != wxNOT_FOUND)
    {
      posInsert = posPluginMenu;
    }
    menuBar->Insert(posInsert, m_menu, _("SAFpl&us"));
}

void SAFplus7IDE::BuildModuleMenu(const ModuleType type, wxMenu* menu, const FileTreeData* data)
{
    if (!IsAttached())
        return;

    if (type == mtEditorManager || (data && data->GetKind() == FileTreeData::ftdkProject))
    {
      m_menu = m_manager->LoadMenu(_T("safplus_menu"),true);

      /* Attach to cb menu */
      menu->AppendSeparator();
      menu->Append(wxNewId(), _T("SAFplus7") ,m_menu);
    }
}

bool SAFplus7IDE::BuildToolBar(wxToolBar* toolBar)
{
    if ( !IsAttached() || !toolBar )
        return false;

    m_toolbar = toolBar;

    /* Load XRC */
    m_manager->AddonToolBar(toolBar,_T("safplus_toolbar"));

    /* Refresh toolbar */
    toolBar->Realize();
    toolBar->SetInitialSize();

    // return true if you add toolbar items
    return true;
}

void SAFplus7IDE::UpdateUI(wxUpdateUIEvent& event)
{
    cbProject *prjActive = m_manager->GetProjectManager()->GetActiveProject();
    wxMenuBar* mbar = Manager::Get()->GetAppFrame()->GetMenuBar();
    if (mbar)
    {
      mbar->Enable(idMenuSAFplus7ClusterDesignGUI, prjActive);
    }
    wxToolBar* tbar = m_toolbar;
    if (tbar)
    {
      tbar->EnableTool(idToolbarSAFplus7ClusterDesignGUI, prjActive);
    }
}

void SAFplus7IDE::Action(wxCommandEvent& event)
{
    #if 0 // Please use wxwindows 2.8 APIs or lower.  This is what can be installed automatically from Ubuntu.  If there is a very compelling reason to go higher let's talk about it.
    // load SAFplusEntityDef.xml and SAFplusAmf.yang
    wxString entity_contents;
    wxString safplus_amf_contents;

    wxFile entityDefFile(ConfigManager::GetDataFolder(false) + wxT("/SAFplusEntityDef.xml"));
    entityDefFile.ReadAll(&entity_contents);

    wxFile safplusAmfFile(ConfigManager::GetDataFolder(false) + wxT("/SAFplusAmf.yang"));
    safplusAmfFile.ReadAll(&safplus_amf_contents);
    #endif

    // Get selection project (singleton editor project)
    wxString projectName;

    wxTreeCtrl* tree = m_manager->GetProjectManager()->GetUI().GetTree();
    wxTreeItemId sel = m_manager->GetProjectManager()->GetUI().GetTreeSelection();
    FileTreeData* ftd = sel.IsOk() ? (FileTreeData*)tree->GetItemData(sel) : 0;
    if (ftd)
    {
      projectName = ftd->GetProject()->GetTitle();
    }
    else
    {
      projectName = m_manager->GetProjectManager()->GetActiveProject()->GetTitle();
    }
    wxString title(projectName + _T("::") + g_editorTitle);

    if (!m_manager->GetEditorManager()->IsOpen(title))
    {
      new SAFplus7EditorPanel((wxWindow*)m_manager->GetEditorManager()->GetNotebook(), title);
    }
}