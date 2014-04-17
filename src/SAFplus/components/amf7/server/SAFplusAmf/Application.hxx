/* 
 * File Application.hxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#ifndef APPLICATION_HXX_
#define APPLICATION_HXX_

#include <vector>
#include "MgtFactory.hxx"
#include "clMgtObject.hxx"
#include "clMgtProv.hxx"
#include "NumServiceGroups.hxx"
#include "AdministrativeState.hxx"
#include <string>

namespace SAFplusAmf {

    class Application : public ClMgtObject {

        /* Apply MGT object factory */
        REGISTER(Application);

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
        ClMgtProv<AdministrativeState> adminState;

    public:
        Application();
        Application(std::string nameValue);
        std::vector<std::string> getKeys();
        std::vector<std::string> *getChildNames();

        /*
         * XPATH: /SAFplusAmf/Application/name
         */
        std::string getName();

        /*
         * XPATH: /SAFplusAmf/Application/name
         */
        void setName(std::string nameValue);

        /*
         * XPATH: /SAFplusAmf/Application/id
         */
        unsigned short int getId();

        /*
         * XPATH: /SAFplusAmf/Application/id
         */
        void setId(unsigned short int idValue);

        /*
         * XPATH: /SAFplusAmf/Application/adminState
         */
        AdministrativeState getAdminState();

        /*
         * XPATH: /SAFplusAmf/Application/adminState
         */
        void setAdminState(AdministrativeState adminStateValue);

        /*
         * XPATH: /SAFplusAmf/Application/NumServiceGroups
         */
        NumServiceGroups* getNumServiceGroups();

        /*
         * XPATH: /SAFplusAmf/Application/NumServiceGroups
         */
        void addNumServiceGroups(NumServiceGroups *NumServiceGroupsValue);
        ~Application();

    };
}
/* namespace SAFplusAmf */
#endif /* APPLICATION_HXX_ */
