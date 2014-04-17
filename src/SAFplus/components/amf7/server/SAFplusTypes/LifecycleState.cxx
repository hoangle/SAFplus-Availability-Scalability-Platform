/* 
 * File LifecycleState.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#include "MgtFactory.hxx"
#include <iostream>
#include "LifecycleState.hxx"

using namespace std;

namespace SAFplusTypes {

    /* Apply MGT object factory */
    REGISTERIMPL(LifecycleState, /SAFplusTypes/lifecycleState)

    LifecycleState::LifecycleState() {
    };

    int LifecycleState::getValue() {
        return this->Value;
    };

    void LifecycleState::setValue(int value) {
        this->Value = value;
    };

    LifecycleState& LifecycleState::operator=(LifecycleState& lifecycleState) {
        Value = lifecycleState.Value;
        return *this;
    };

    LifecycleState::~LifecycleState() {
    };

    ostream& operator<<(ostream& os, const LifecycleState& lifecycleState) {
        return os << lifecycleState.Value;
    };

    istream& operator>>(istream& in, LifecycleState& lifecycleState) {
        return in >> lifecycleState.Value;
    };

}
/* namespace SAFplusTypes */
