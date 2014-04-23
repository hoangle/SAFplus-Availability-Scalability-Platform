/* 
 * File ServiceInstance.hxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#ifndef SERVICEINSTANCE_HXX_
#define SERVICEINSTANCE_HXX_

#include "AssignmentState.hxx"
#include <string>
#include "StandbyWeight.hxx"
#include <map>
#include "StandbyAssignments.hxx"
#include "StandbyWeight.hxx"
#include "MgtFactory.hxx"
#include "ActiveAssignments.hxx"
#include "AdministrativeState.hxx"
#include "ActiveWeight.hxx"
#include "ActiveWeight.hxx"
#include "clMgtObject.hxx"
#include "clMgtProv.hxx"
#include "StandbyAssignments.hxx"
#include <vector>
#include "ActiveAssignments.hxx"

namespace SAFplusAmf {

    class ServiceInstance : public ClMgtObject {

        /* Apply MGT object factory */
        REGISTER(ServiceInstance);

    public:

        /*
         * Unique name of this entity
         */
        ClMgtProv<std::string> name;

        /*
         * Each SAFplus AMF entity gets a unique numerical identifier
         */
        ClMgtProv<unsigned short int> id;

        /*
         * Does the operator want this entity to be off, idle, or in service?
         */
        ClMgtProv<SAFplusAmf::AdministrativeState> adminState;

        /*
         * The assignment state of a service instance indicates whether the service represented by this service instance is being provided or not by some service unit.
         */
        ClMgtProv<SAFplusAmf::AssignmentState> assignmentState;

        /*
         * Lower rank is instantiated before higher; but rank 0 means 'don't care'.
         */
        ClMgtProv<unsigned int> rank;

    public:
        ServiceInstance();
        ServiceInstance(std::string nameValue);
        std::vector<std::string> getKeys();
        std::vector<std::string>* getChildNames();

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/name
         */
        std::string getName();

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/name
         */
        void setName(std::string nameValue);

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/id
         */
        unsigned short int getId();

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/id
         */
        void setId(unsigned short int idValue);

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/adminState
         */
        SAFplusAmf::AdministrativeState getAdminState();

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/adminState
         */
        void setAdminState(SAFplusAmf::AdministrativeState adminStateValue);

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/assignmentState
         */
        SAFplusAmf::AssignmentState getAssignmentState();

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/assignmentState
         */
        void setAssignmentState(SAFplusAmf::AssignmentState assignmentStateValue);

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/rank
         */
        unsigned int getRank();

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/rank
         */
        void setRank(unsigned int rankValue);

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/activeWeight
         */
        SAFplusAmf::ActiveWeight* getActiveWeight(std::string resourceValue);

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/activeWeight
         */
        void addActiveWeight(SAFplusAmf::ActiveWeight *activeWeightValue);

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/activeWeight
         */
        void addActiveWeight(std::string resourceValue);

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/standbyWeight
         */
        SAFplusAmf::StandbyWeight* getStandbyWeight(std::string resourceValue);

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/standbyWeight
         */
        void addStandbyWeight(SAFplusAmf::StandbyWeight *standbyWeightValue);

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/standbyWeight
         */
        void addStandbyWeight(std::string resourceValue);

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/activeAssignments
         */
        SAFplusAmf::ActiveAssignments* getActiveAssignments();

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/activeAssignments
         */
        void addActiveAssignments(SAFplusAmf::ActiveAssignments *activeAssignmentsValue);

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/standbyAssignments
         */
        SAFplusAmf::StandbyAssignments* getStandbyAssignments();

        /*
         * XPATH: /SAFplusAmf/ServiceInstance/standbyAssignments
         */
        void addStandbyAssignments(SAFplusAmf::StandbyAssignments *standbyAssignmentsValue);
        ~ServiceInstance();

    };
}
/* namespace SAFplusAmf */
#endif /* SERVICEINSTANCE_HXX_ */
