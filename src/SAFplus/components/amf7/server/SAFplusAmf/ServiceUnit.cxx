/* 
 * File ServiceUnit.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 
#include "SAFplusAmfCommon.hxx"

#include "RestartCount.hxx"
#include "Node.hxx"
#include <string>
#include "NumActiveServiceInstances.hxx"
#include "RestartCount.hxx"
#include "Component.hxx"
#include "MgtFactory.hxx"
#include "AdministrativeState.hxx"
#include "NumStandbyServiceInstances.hxx"
#include "ReadinessState.hxx"
#include "NumActiveServiceInstances.hxx"
#include "clMgtProv.hxx"
#include "ServiceInstance.hxx"
#include "HighAvailabilityReadinessState.hxx"
#include "ServiceGroup.hxx"
#include <vector>
#include "HighAvailabilityState.hxx"
#include "PresenceState.hxx"
#include "EntityId.hxx"
#include "NumStandbyServiceInstances.hxx"
#include "clMgtProvList.hxx"
#include "ServiceUnit.hxx"


namespace SAFplusAmf
  {

    /* Apply MGT object factory */
    MGT_REGISTER_IMPL(ServiceUnit, /SAFplusAmf/ServiceUnit)

    ServiceUnit::ServiceUnit(): adminState("adminState"), rank("rank"), failover("failover"), preinstantiable("preinstantiable"), saAmfSUHostNodeOrNodeGroup("saAmfSUHostNodeOrNodeGroup"), presenceState("presenceState"), readinessState("readinessState"), haReadinessState("haReadinessState"), haState("haState"), operState("operState"), assignedServiceInstances("assignedServiceInstances"), components("components"), node("node"), serviceGroup("serviceGroup")
    {
        this->addChildObject(&adminState, "adminState");
        this->addChildObject(&rank, "rank");
        this->addChildObject(&failover, "failover");
        this->addChildObject(&preinstantiable, "preinstantiable");
        this->addChildObject(&saAmfSUHostNodeOrNodeGroup, "saAmfSUHostNodeOrNodeGroup");
        this->addChildObject(&presenceState, "presenceState");
        this->addChildObject(&readinessState, "readinessState");
        this->addChildObject(&haReadinessState, "haReadinessState");
        this->addChildObject(&haState, "haState");
        this->addChildObject(&operState, "operState");
        this->addChildObject(&assignedServiceInstances, "assignedServiceInstances");
        this->addChildObject(&components, "components");
        this->addChildObject(&node, "node");
        this->addChildObject(&serviceGroup, "serviceGroup");
        this->addKey("myName");
        this->name.assign("ServiceUnit");
    };

    ServiceUnit::ServiceUnit(std::string myNameValue): adminState("adminState"), rank("rank"), failover("failover"), preinstantiable("preinstantiable"), saAmfSUHostNodeOrNodeGroup("saAmfSUHostNodeOrNodeGroup"), presenceState("presenceState"), readinessState("readinessState"), haReadinessState("haReadinessState"), haState("haState"), operState("operState"), assignedServiceInstances("assignedServiceInstances"), components("components"), node("node"), serviceGroup("serviceGroup")
    {
        this->myName.value =  myNameValue;
        this->addKey("myName");
        this->addChildObject(&adminState, "adminState");
        this->addChildObject(&rank, "rank");
        this->addChildObject(&failover, "failover");
        this->addChildObject(&preinstantiable, "preinstantiable");
        this->addChildObject(&saAmfSUHostNodeOrNodeGroup, "saAmfSUHostNodeOrNodeGroup");
        this->addChildObject(&presenceState, "presenceState");
        this->addChildObject(&readinessState, "readinessState");
        this->addChildObject(&haReadinessState, "haReadinessState");
        this->addChildObject(&haState, "haState");
        this->addChildObject(&operState, "operState");
        this->addChildObject(&assignedServiceInstances, "assignedServiceInstances");
        this->addChildObject(&components, "components");
        this->addChildObject(&node, "node");
        this->addChildObject(&serviceGroup, "serviceGroup");
        this->name.assign("ServiceUnit");
    };

    std::vector<std::string> ServiceUnit::getKeys()
    {
        std::string keyNames[] = { "myName" };
        return std::vector<std::string> (keyNames, keyNames + sizeof(keyNames) / sizeof(keyNames[0]));
    };

    std::vector<std::string>* ServiceUnit::getChildNames()
    {
        std::string childNames[] = { "myName", "id", "adminState", "rank", "failover", "preinstantiable", "saAmfSUHostNodeOrNodeGroup", "presenceState", "readinessState", "haReadinessState", "haState", "operState", "assignedServiceInstances", "numActiveServiceInstances", "numStandbyServiceInstances", "restartCount", "components", "node", "serviceGroup" };
        return new std::vector<std::string> (childNames, childNames + sizeof(childNames) / sizeof(childNames[0]));
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/adminState
     */
    SAFplusAmf::AdministrativeState ServiceUnit::getAdminState()
    {
        return this->adminState.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/adminState
     */
    void ServiceUnit::setAdminState(SAFplusAmf::AdministrativeState adminStateValue)
    {
        this->adminState.value = adminStateValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/rank
     */
    unsigned int ServiceUnit::getRank()
    {
        return this->rank.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/rank
     */
    void ServiceUnit::setRank(unsigned int rankValue)
    {
        this->rank.value = rankValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/failover
     */
    bool ServiceUnit::getFailover()
    {
        return this->failover.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/failover
     */
    void ServiceUnit::setFailover(bool failoverValue)
    {
        this->failover.value = failoverValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/preinstantiable
     */
    bool ServiceUnit::getPreinstantiable()
    {
        return this->preinstantiable.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/preinstantiable
     */
    void ServiceUnit::setPreinstantiable(bool preinstantiableValue)
    {
        this->preinstantiable.value = preinstantiableValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/saAmfSUHostNodeOrNodeGroup
     */
    std::string ServiceUnit::getSaAmfSUHostNodeOrNodeGroup()
    {
        return this->saAmfSUHostNodeOrNodeGroup.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/saAmfSUHostNodeOrNodeGroup
     */
    void ServiceUnit::setSaAmfSUHostNodeOrNodeGroup(std::string saAmfSUHostNodeOrNodeGroupValue)
    {
        this->saAmfSUHostNodeOrNodeGroup.value = saAmfSUHostNodeOrNodeGroupValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/presenceState
     */
    SAFplusAmf::PresenceState ServiceUnit::getPresenceState()
    {
        return this->presenceState.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/presenceState
     */
    void ServiceUnit::setPresenceState(SAFplusAmf::PresenceState presenceStateValue)
    {
        this->presenceState.value = presenceStateValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/readinessState
     */
    SAFplusAmf::ReadinessState ServiceUnit::getReadinessState()
    {
        return this->readinessState.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/readinessState
     */
    void ServiceUnit::setReadinessState(SAFplusAmf::ReadinessState readinessStateValue)
    {
        this->readinessState.value = readinessStateValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/haReadinessState
     */
    SAFplusAmf::HighAvailabilityReadinessState ServiceUnit::getHaReadinessState()
    {
        return this->haReadinessState.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/haReadinessState
     */
    void ServiceUnit::setHaReadinessState(SAFplusAmf::HighAvailabilityReadinessState haReadinessStateValue)
    {
        this->haReadinessState.value = haReadinessStateValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/haState
     */
    SAFplusAmf::HighAvailabilityState ServiceUnit::getHaState()
    {
        return this->haState.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/haState
     */
    void ServiceUnit::setHaState(SAFplusAmf::HighAvailabilityState haStateValue)
    {
        this->haState.value = haStateValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/operState
     */
    bool ServiceUnit::getOperState()
    {
        return this->operState.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/operState
     */
    void ServiceUnit::setOperState(bool operStateValue)
    {
        this->operState.value = operStateValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/assignedServiceInstances
     */
    std::vector<SAFplusAmf::ServiceInstance*> ServiceUnit::getAssignedServiceInstances()
    {
        return this->assignedServiceInstances.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/assignedServiceInstances
     */
    void ServiceUnit::setAssignedServiceInstances(SAFplusAmf::ServiceInstance* assignedServiceInstancesValue)
    {
        this->assignedServiceInstances.value.push_back(assignedServiceInstancesValue);
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/components
     */
    std::vector<SAFplusAmf::Component*> ServiceUnit::getComponents()
    {
        return this->components.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/components
     */
    void ServiceUnit::setComponents(SAFplusAmf::Component* componentsValue)
    {
        this->components.value.push_back(componentsValue);
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/node
     */
    SAFplusAmf::Node* ServiceUnit::getNode()
    {
        return this->node.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/node
     */
    void ServiceUnit::setNode(SAFplusAmf::Node* nodeValue)
    {
        this->node.value = nodeValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/serviceGroup
     */
    SAFplusAmf::ServiceGroup* ServiceUnit::getServiceGroup()
    {
        return this->serviceGroup.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/serviceGroup
     */
    void ServiceUnit::setServiceGroup(SAFplusAmf::ServiceGroup* serviceGroupValue)
    {
        this->serviceGroup.value = serviceGroupValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/numActiveServiceInstances
     */
    SAFplusAmf::NumActiveServiceInstances* ServiceUnit::getNumActiveServiceInstances()
    {
        return (NumActiveServiceInstances*)this->getChildObject("numActiveServiceInstances");
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/numActiveServiceInstances
     */
    void ServiceUnit::addNumActiveServiceInstances(SAFplusAmf::NumActiveServiceInstances *numActiveServiceInstancesValue)
    {
        this->addChildObject(numActiveServiceInstancesValue, "numActiveServiceInstances");
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/numStandbyServiceInstances
     */
    SAFplusAmf::NumStandbyServiceInstances* ServiceUnit::getNumStandbyServiceInstances()
    {
        return (NumStandbyServiceInstances*)this->getChildObject("numStandbyServiceInstances");
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/numStandbyServiceInstances
     */
    void ServiceUnit::addNumStandbyServiceInstances(SAFplusAmf::NumStandbyServiceInstances *numStandbyServiceInstancesValue)
    {
        this->addChildObject(numStandbyServiceInstancesValue, "numStandbyServiceInstances");
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/restartCount
     */
    SAFplusAmf::RestartCount* ServiceUnit::getRestartCount()
    {
        return (RestartCount*)this->getChildObject("restartCount");
    };

    /*
     * XPATH: /SAFplusAmf/ServiceUnit/restartCount
     */
    void ServiceUnit::addRestartCount(SAFplusAmf::RestartCount *restartCountValue)
    {
        this->addChildObject(restartCountValue, "restartCount");
    };

    ServiceUnit::~ServiceUnit()
    {
    };

}
/* namespace SAFplusAmf */
