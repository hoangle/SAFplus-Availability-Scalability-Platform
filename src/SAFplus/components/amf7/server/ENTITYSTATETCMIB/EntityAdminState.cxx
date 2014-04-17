/* 
 * File EntityAdminState.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#include "MgtFactory.hxx"
#include <iostream>
#include "EntityAdminState.hxx"

using namespace std;

namespace ENTITYSTATETCMIB {

    /* Apply MGT object factory */
    REGISTERIMPL(EntityAdminState, /ENTITY-STATE-TC-MIB/EntityAdminState)

    EntityAdminState::EntityAdminState() {
    };

    int EntityAdminState::getValue() {
        return this->Value;
    };

    void EntityAdminState::setValue(int value) {
        this->Value = value;
    };

    EntityAdminState& EntityAdminState::operator=(EntityAdminState& EntityAdminState) {
        Value = EntityAdminState.Value;
        return *this;
    };

    EntityAdminState::~EntityAdminState() {
    };

    ostream& operator<<(ostream& os, const EntityAdminState& EntityAdminState) {
        return os << EntityAdminState.Value;
    };

    istream& operator>>(istream& in, EntityAdminState& EntityAdminState) {
        return in >> EntityAdminState.Value;
    };

}
/* namespace ENTITYSTATETCMIB */
