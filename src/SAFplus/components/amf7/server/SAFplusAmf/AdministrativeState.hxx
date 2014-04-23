/* 
 * File AdministrativeState.hxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#ifndef ADMINISTRATIVESTATE_HXX_
#define ADMINISTRATIVESTATE_HXX_

#include "MgtEnumType.hxx"
#include <iostream>

namespace SAFplusAmf {

    enum class AdministrativeState {
        off=0, idle=1, on=2
    };
    std::ostream& operator<<(std::ostream& os, const AdministrativeState& e);
    std::istream& operator>>(std::istream& is, AdministrativeState& e);

    /*
     * This is the class that will handle the conversion for us.
     */
    class AdministrativeStateManager : public SAFplus::MgtEnumType<AdministrativeStateManager, AdministrativeState> {
        AdministrativeStateManager();  // private to prevent instantiation
    public:
        static const vec_t en2str_vec;  // This is the lookup table.
    };
}
/* namespace SAFplusAmf */
#endif /* ADMINISTRATIVESTATE_HXX_ */
