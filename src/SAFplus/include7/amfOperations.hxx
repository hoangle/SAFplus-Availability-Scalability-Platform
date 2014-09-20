#pragma once

#include <SAFplusAmf/AdministrativeState.hxx>
#include <SAFplusAmf/HighAvailabilityState.hxx>
namespace SAFplusAmf
  {
  class Component;
  class ServiceUnit;
  class ServiceGroup;
  class ServiceInstance;
  }

namespace SAFplus
  {
  namespace Rpc
    {
  namespace amfRpc
      {
      class amfRpc_Stub;
      };
   namespace amfAppRpc
      {
      class amfAppRpc_Stub;
      };
   };


  enum class CompStatus
    {
    Uninstantiated = 0,
    Instantiated = 1
    };

  SAFplusAmf::AdministrativeState effectiveAdminState(SAFplusAmf::Component* comp);
  SAFplusAmf::AdministrativeState effectiveAdminState(SAFplusAmf::ServiceUnit* su);
  SAFplusAmf::AdministrativeState effectiveAdminState(SAFplusAmf::ServiceGroup* sg);
  SAFplusAmf::AdministrativeState effectiveAdminState(SAFplusAmf::ServiceInstance* si);
  void setAdminState(SAFplusAmf::ServiceGroup* sg,SAFplusAmf::AdministrativeState tgt);


  class AmfOperations
    {
  public: // Don't use directly
    Rpc::amfRpc::amfRpc_Stub* amfInternalRpc;

    Rpc::amfAppRpc::amfAppRpc_Stub* amfAppRpc;
    uint64_t invocation;  // keeps track of the particular request being sent to the app (at the SAF level)

    AmfOperations()
    {
    amfInternalRpc = nullptr;
    amfAppRpc = nullptr;
    // Make the invocation unique per AMF to ensure that failover or restart does not reuse invocation by accident (although, would reuse really matter?)
    invocation = (SAFplus::ASP_NODEADDR << 16) | SAFplus::pid;
    invocation <<= 32;  // TODO: should checkpointed value be used?
    }

  public:  // Public API
    //? Get the current component state from the node on which it is running
    CompStatus getCompState(SAFplusAmf::Component* comp);
    void start(SAFplusAmf::ServiceGroup* sg,Wakeable& w = *((Wakeable*)nullptr));
    void start(SAFplusAmf::Component* comp,Wakeable& w = *((Wakeable*)nullptr));

    void assignWork(SAFplusAmf::ServiceUnit* su, SAFplusAmf::ServiceInstance* si, SAFplusAmf::HighAvailabilityState state,Wakeable& w = *((Wakeable*)nullptr));
    };
  };
