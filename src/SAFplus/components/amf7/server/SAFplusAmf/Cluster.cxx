/* 
 * File Cluster.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#include "clMgtObject.hxx"
#include "clMgtProv.hxx"
#include "SaTimeT.hxx"
#include <vector>
#include "MgtFactory.hxx"
#include "AdministrativeState.hxx"
#include <string>
#include "Cluster.hxx"

using namespace SAFplusTypes;

namespace SAFplusAmf {

    /* Apply MGT object factory */
    REGISTERIMPL(Cluster, /SAFplusAmf/Cluster)

    Cluster::Cluster(): ClMgtObject("Cluster"), name("name"), id("id"), adminState("adminState"), startupAssignmentDelay("startupAssignmentDelay") {
        this->addChildObject(&name, "name");
        this->addChildObject(&id, "id");
        this->addChildObject(&adminState, "adminState");
        this->addChildObject(&startupAssignmentDelay, "startupAssignmentDelay");
        this->addKey("name");
    };

    Cluster::Cluster(std::string nameValue): ClMgtObject("Cluster"), name("name"), id("id"), adminState("adminState"), startupAssignmentDelay("startupAssignmentDelay") {
        this->name.Value =  nameValue;
        this->addKey("name");
        this->addChildObject(&name, "name");
        this->addChildObject(&id, "id");
        this->addChildObject(&adminState, "adminState");
        this->addChildObject(&startupAssignmentDelay, "startupAssignmentDelay");
    };

    std::vector<std::string> Cluster::getKeys() {
        std::string keyNames[] = { "name" };
        return std::vector<std::string> (keyNames, keyNames + sizeof(keyNames) / sizeof(keyNames[0]));
    };

    std::vector<std::string>* Cluster::getChildNames() {
        std::string childNames[] = { "name", "id", "adminState", "startupAssignmentDelay" };
        return new std::vector<std::string> (childNames, childNames + sizeof(childNames) / sizeof(childNames[0]));
    };

    /*
     * XPATH: /SAFplusAmf/Cluster/name
     */
    std::string Cluster::getName() {
        return this->name.Value;
    };

    /*
     * XPATH: /SAFplusAmf/Cluster/name
     */
    void Cluster::setName(std::string nameValue) {
        this->name.Value = nameValue;
    };

    /*
     * XPATH: /SAFplusAmf/Cluster/id
     */
    unsigned short int Cluster::getId() {
        return this->id.Value;
    };

    /*
     * XPATH: /SAFplusAmf/Cluster/id
     */
    void Cluster::setId(unsigned short int idValue) {
        this->id.Value = idValue;
    };

    /*
     * XPATH: /SAFplusAmf/Cluster/adminState
     */
    SAFplusAmf::AdministrativeState Cluster::getAdminState() {
        return this->adminState.Value;
    };

    /*
     * XPATH: /SAFplusAmf/Cluster/adminState
     */
    void Cluster::setAdminState(SAFplusAmf::AdministrativeState adminStateValue) {
        this->adminState.Value = adminStateValue;
    };

    /*
     * XPATH: /SAFplusAmf/Cluster/startupAssignmentDelay
     */
    SAFplusTypes::SaTimeT Cluster::getStartupAssignmentDelay() {
        return this->startupAssignmentDelay.Value;
    };

    /*
     * XPATH: /SAFplusAmf/Cluster/startupAssignmentDelay
     */
    void Cluster::setStartupAssignmentDelay(SAFplusTypes::SaTimeT startupAssignmentDelayValue) {
        this->startupAssignmentDelay.Value = startupAssignmentDelayValue;
    };

    Cluster::~Cluster() {
    };

}
/* namespace SAFplusAmf */
