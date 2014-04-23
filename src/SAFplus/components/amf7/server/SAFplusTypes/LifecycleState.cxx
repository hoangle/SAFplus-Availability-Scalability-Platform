/* 
 * File LifecycleState.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#include "MgtEnumType.hxx"
#include <iostream>
#include "LifecycleState.hxx"


namespace SAFplusTypes {

    /*
     * Provide an implementation of the en2str_vec lookup table.
     */
    const LifecycleStateManager::vec_t LifecycleStateManager::en2str_vec = {
            pair_t(LifecycleState::start, "start"),
            pair_t(LifecycleState::idle, "idle"),
            pair_t(LifecycleState::stop, "stop")
    }; // uses c++11 initializer lists 

    std::ostream& operator<<(std::ostream& os, const SAFplusTypes::LifecycleState& lifecycleState) {
        return os << LifecycleStateManager::toString(lifecycleState);
    };

    std::istream& operator>>(std::istream& is, SAFplusTypes::LifecycleState& lifecycleState) {
        std::string buf;
        is >> buf;
        lifecycleState = LifecycleStateManager::toEnum(buf);
        return is;
    };

}
/* namespace SAFplusTypes */
