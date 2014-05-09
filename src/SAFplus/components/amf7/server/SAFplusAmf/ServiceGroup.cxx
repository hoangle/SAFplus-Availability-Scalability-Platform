/* 
 * File ServiceGroup.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 
#include "SAFplusAmfCommon.hxx"

#include <string>
#include "MgtFactory.hxx"
#include "NumSpareServiceUnits.hxx"
#include "ServiceUnitRestart.hxx"
#include "AdministrativeState.hxx"
#include "ComponentRestart.hxx"
#include "NumIdleServiceUnits.hxx"
#include "clMgtProv.hxx"
#include "Application.hxx"
#include "ServiceInstance.hxx"
#include "ComponentRestart.hxx"
#include "NumIdleServiceUnits.hxx"
#include "ServiceUnitRestart.hxx"
#include <vector>
#include "NumAssignedServiceUnits.hxx"
#include "NumSpareServiceUnits.hxx"
#include "NumAssignedServiceUnits.hxx"
#include "EntityId.hxx"
#include "clMgtProvList.hxx"
#include "ServiceUnit.hxx"
#include "ServiceGroup.hxx"


namespace SAFplusAmf
  {

    /* Apply MGT object factory */
    MGT_REGISTER_IMPL(ServiceGroup, /SAFplusAmf/ServiceGroup)

    ServiceGroup::ServiceGroup(): adminState("adminState"), autoRepair("autoRepair"), autoAdjust("autoAdjust"), autoAdjustInterval("autoAdjustInterval"), preferredNumActiveServiceUnits("preferredNumActiveServiceUnits"), preferredNumStandbyServiceUnits("preferredNumStandbyServiceUnits"), preferredNumIdleServiceUnits("preferredNumIdleServiceUnits"), maxActiveWorkAssignments("maxActiveWorkAssignments"), maxStandbyWorkAssignments("maxStandbyWorkAssignments"), serviceUnits("serviceUnits"), serviceInstances("serviceInstances"), application("application")
    {
        this->addChildObject(&adminState, "adminState");
        this->addChildObject(&autoRepair, "autoRepair");
        this->addChildObject(&autoAdjust, "autoAdjust");
        this->addChildObject(&autoAdjustInterval, "autoAdjustInterval");
        this->addChildObject(&preferredNumActiveServiceUnits, "preferredNumActiveServiceUnits");
        this->addChildObject(&preferredNumStandbyServiceUnits, "preferredNumStandbyServiceUnits");
        this->addChildObject(&preferredNumIdleServiceUnits, "preferredNumIdleServiceUnits");
        this->addChildObject(&maxActiveWorkAssignments, "maxActiveWorkAssignments");
        this->addChildObject(&maxStandbyWorkAssignments, "maxStandbyWorkAssignments");
        this->addChildObject(&serviceUnits, "serviceUnits");
        this->addChildObject(&serviceInstances, "serviceInstances");
        this->addChildObject(&application, "application");
        this->addKey("myName");
        this->name.assign("ServiceGroup");
    };

    ServiceGroup::ServiceGroup(std::string myNameValue): adminState("adminState"), autoRepair("autoRepair"), autoAdjust("autoAdjust"), autoAdjustInterval("autoAdjustInterval"), preferredNumActiveServiceUnits("preferredNumActiveServiceUnits"), preferredNumStandbyServiceUnits("preferredNumStandbyServiceUnits"), preferredNumIdleServiceUnits("preferredNumIdleServiceUnits"), maxActiveWorkAssignments("maxActiveWorkAssignments"), maxStandbyWorkAssignments("maxStandbyWorkAssignments"), serviceUnits("serviceUnits"), serviceInstances("serviceInstances"), application("application")
    {
        this->myName.value =  myNameValue;
        this->addKey("myName");
        this->addChildObject(&adminState, "adminState");
        this->addChildObject(&autoRepair, "autoRepair");
        this->addChildObject(&autoAdjust, "autoAdjust");
        this->addChildObject(&autoAdjustInterval, "autoAdjustInterval");
        this->addChildObject(&preferredNumActiveServiceUnits, "preferredNumActiveServiceUnits");
        this->addChildObject(&preferredNumStandbyServiceUnits, "preferredNumStandbyServiceUnits");
        this->addChildObject(&preferredNumIdleServiceUnits, "preferredNumIdleServiceUnits");
        this->addChildObject(&maxActiveWorkAssignments, "maxActiveWorkAssignments");
        this->addChildObject(&maxStandbyWorkAssignments, "maxStandbyWorkAssignments");
        this->addChildObject(&serviceUnits, "serviceUnits");
        this->addChildObject(&serviceInstances, "serviceInstances");
        this->addChildObject(&application, "application");
        this->name.assign("ServiceGroup");
    };

    std::vector<std::string> ServiceGroup::getKeys()
    {
        std::string keyNames[] = { "myName" };
        return std::vector<std::string> (keyNames, keyNames + sizeof(keyNames) / sizeof(keyNames[0]));
    };

    std::vector<std::string>* ServiceGroup::getChildNames()
    {
        std::string childNames[] = { "myName", "id", "adminState", "autoRepair", "autoAdjust", "autoAdjustInterval", "preferredNumActiveServiceUnits", "preferredNumStandbyServiceUnits", "preferredNumIdleServiceUnits", "maxActiveWorkAssignments", "maxStandbyWorkAssignments", "componentRestart", "serviceUnitRestart", "numAssignedServiceUnits", "numIdleServiceUnits", "numSpareServiceUnits", "serviceUnits", "serviceInstances", "application" };
        return new std::vector<std::string> (childNames, childNames + sizeof(childNames) / sizeof(childNames[0]));
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/adminState
     */
    SAFplusAmf::AdministrativeState ServiceGroup::getAdminState()
    {
        return this->adminState.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/adminState
     */
    void ServiceGroup::setAdminState(SAFplusAmf::AdministrativeState adminStateValue)
    {
        this->adminState.value = adminStateValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/autoRepair
     */
    bool ServiceGroup::getAutoRepair()
    {
        return this->autoRepair.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/autoRepair
     */
    void ServiceGroup::setAutoRepair(bool autoRepairValue)
    {
        this->autoRepair.value = autoRepairValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/autoAdjust
     */
    bool ServiceGroup::getAutoAdjust()
    {
        return this->autoAdjust.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/autoAdjust
     */
    void ServiceGroup::setAutoAdjust(bool autoAdjustValue)
    {
        this->autoAdjust.value = autoAdjustValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/autoAdjustInterval
     */
    SaTimeT ServiceGroup::getAutoAdjustInterval()
    {
        return this->autoAdjustInterval.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/autoAdjustInterval
     */
    void ServiceGroup::setAutoAdjustInterval(SaTimeT autoAdjustIntervalValue)
    {
        this->autoAdjustInterval.value = autoAdjustIntervalValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/preferredNumActiveServiceUnits
     */
    unsigned int ServiceGroup::getPreferredNumActiveServiceUnits()
    {
        return this->preferredNumActiveServiceUnits.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/preferredNumActiveServiceUnits
     */
    void ServiceGroup::setPreferredNumActiveServiceUnits(unsigned int preferredNumActiveServiceUnitsValue)
    {
        this->preferredNumActiveServiceUnits.value = preferredNumActiveServiceUnitsValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/preferredNumStandbyServiceUnits
     */
    unsigned int ServiceGroup::getPreferredNumStandbyServiceUnits()
    {
        return this->preferredNumStandbyServiceUnits.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/preferredNumStandbyServiceUnits
     */
    void ServiceGroup::setPreferredNumStandbyServiceUnits(unsigned int preferredNumStandbyServiceUnitsValue)
    {
        this->preferredNumStandbyServiceUnits.value = preferredNumStandbyServiceUnitsValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/preferredNumIdleServiceUnits
     */
    unsigned int ServiceGroup::getPreferredNumIdleServiceUnits()
    {
        return this->preferredNumIdleServiceUnits.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/preferredNumIdleServiceUnits
     */
    void ServiceGroup::setPreferredNumIdleServiceUnits(unsigned int preferredNumIdleServiceUnitsValue)
    {
        this->preferredNumIdleServiceUnits.value = preferredNumIdleServiceUnitsValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/maxActiveWorkAssignments
     */
    unsigned int ServiceGroup::getMaxActiveWorkAssignments()
    {
        return this->maxActiveWorkAssignments.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/maxActiveWorkAssignments
     */
    void ServiceGroup::setMaxActiveWorkAssignments(unsigned int maxActiveWorkAssignmentsValue)
    {
        this->maxActiveWorkAssignments.value = maxActiveWorkAssignmentsValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/maxStandbyWorkAssignments
     */
    unsigned int ServiceGroup::getMaxStandbyWorkAssignments()
    {
        return this->maxStandbyWorkAssignments.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/maxStandbyWorkAssignments
     */
    void ServiceGroup::setMaxStandbyWorkAssignments(unsigned int maxStandbyWorkAssignmentsValue)
    {
        this->maxStandbyWorkAssignments.value = maxStandbyWorkAssignmentsValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/serviceUnits
     */
    std::vector<SAFplusAmf::ServiceUnit*> ServiceGroup::getServiceUnits()
    {
        return this->serviceUnits.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/serviceUnits
     */
    void ServiceGroup::setServiceUnits(SAFplusAmf::ServiceUnit* serviceUnitsValue)
    {
        this->serviceUnits.value.push_back(serviceUnitsValue);
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/serviceInstances
     */
    std::vector<SAFplusAmf::ServiceInstance*> ServiceGroup::getServiceInstances()
    {
        return this->serviceInstances.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/serviceInstances
     */
    void ServiceGroup::setServiceInstances(SAFplusAmf::ServiceInstance* serviceInstancesValue)
    {
        this->serviceInstances.value.push_back(serviceInstancesValue);
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/application
     */
    SAFplusAmf::Application* ServiceGroup::getApplication()
    {
        return this->application.value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/application
     */
    void ServiceGroup::setApplication(SAFplusAmf::Application* applicationValue)
    {
        this->application.value = applicationValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/componentRestart
     */
    SAFplusAmf::ComponentRestart* ServiceGroup::getComponentRestart()
    {
        return (ComponentRestart*)this->getChildObject("componentRestart");
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/componentRestart
     */
    void ServiceGroup::addComponentRestart(SAFplusAmf::ComponentRestart *componentRestartValue)
    {
        this->addChildObject(componentRestartValue, "componentRestart");
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/serviceUnitRestart
     */
    SAFplusAmf::ServiceUnitRestart* ServiceGroup::getServiceUnitRestart()
    {
        return (ServiceUnitRestart*)this->getChildObject("serviceUnitRestart");
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/serviceUnitRestart
     */
    void ServiceGroup::addServiceUnitRestart(SAFplusAmf::ServiceUnitRestart *serviceUnitRestartValue)
    {
        this->addChildObject(serviceUnitRestartValue, "serviceUnitRestart");
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/numAssignedServiceUnits
     */
    SAFplusAmf::NumAssignedServiceUnits* ServiceGroup::getNumAssignedServiceUnits()
    {
        return (NumAssignedServiceUnits*)this->getChildObject("numAssignedServiceUnits");
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/numAssignedServiceUnits
     */
    void ServiceGroup::addNumAssignedServiceUnits(SAFplusAmf::NumAssignedServiceUnits *numAssignedServiceUnitsValue)
    {
        this->addChildObject(numAssignedServiceUnitsValue, "numAssignedServiceUnits");
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/numIdleServiceUnits
     */
    SAFplusAmf::NumIdleServiceUnits* ServiceGroup::getNumIdleServiceUnits()
    {
        return (NumIdleServiceUnits*)this->getChildObject("numIdleServiceUnits");
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/numIdleServiceUnits
     */
    void ServiceGroup::addNumIdleServiceUnits(SAFplusAmf::NumIdleServiceUnits *numIdleServiceUnitsValue)
    {
        this->addChildObject(numIdleServiceUnitsValue, "numIdleServiceUnits");
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/numSpareServiceUnits
     */
    SAFplusAmf::NumSpareServiceUnits* ServiceGroup::getNumSpareServiceUnits()
    {
        return (NumSpareServiceUnits*)this->getChildObject("numSpareServiceUnits");
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/numSpareServiceUnits
     */
    void ServiceGroup::addNumSpareServiceUnits(SAFplusAmf::NumSpareServiceUnits *numSpareServiceUnitsValue)
    {
        this->addChildObject(numSpareServiceUnitsValue, "numSpareServiceUnits");
    };

    ServiceGroup::~ServiceGroup()
    {
    };

}
/* namespace SAFplusAmf */
