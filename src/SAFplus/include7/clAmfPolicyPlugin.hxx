#include <clPluginApi.hxx>
#include <clMgtApi.hxx>
#include <clAmfApi.hxx>

namespace SAFplus
{

enum
  {
    CL_AMF_POLICY_PLUGIN_ID = 0x53843922,
    CL_AMF_POLICY_PLUGIN_VER = 1
  };

  class ClAmfPolicyPlugin_1:public ClPlugin
  {
  public:
    AmfRedundancyPolicy policyId;
    virtual void activeAudit(MgtObject* root) = 0;
    virtual void standbyAudit(MgtObject* root) = 0;
  
    // The copy constructor is disabled to ensure that the only copy of this
    // class exists in the shared memory lib.
    // This will help allow policies to be unloaded and updated by discouraging
    // them from being copied willy-nilly.
    ClAmfPolicyPlugin_1(ClAmfPolicyPlugin_1 const&) = delete; 
    ClAmfPolicyPlugin_1& operator=(ClAmfPolicyPlugin_1 const&) = delete;
  protected:  // Only constructable from your derived class from within the .so
    ClAmfPolicyPlugin_1() {};


  };

}
