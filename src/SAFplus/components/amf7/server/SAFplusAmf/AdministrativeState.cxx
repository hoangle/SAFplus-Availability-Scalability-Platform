/* 
 * File AdministrativeState.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#include <iostream>
#include "AdministrativeState.hxx"


namespace SAFplusAmf {

     AdministrativeState::AdministrativeState() {
    };

    int AdministrativeState::getValue() {
        return this->Value;
    };

    void AdministrativeState::setValue(int value) {
        this->Value = value;
    };

    SAFplusAmf::AdministrativeState& AdministrativeState::operator=(const SAFplusAmf::AdministrativeState& AdministrativeState) {
        Value = AdministrativeState.Value;
        return *this;
    };

     AdministrativeState::~AdministrativeState() {
    };

    std::ostream& operator<<(std::ostream& os, const SAFplusAmf::AdministrativeState& AdministrativeState) {
        return os << AdministrativeState.Value;
    };

    std::istream& operator>>(std::istream& in, SAFplusAmf::AdministrativeState& AdministrativeState) {
        return in >> AdministrativeState.Value;
    };

}
/* namespace SAFplusAmf */
