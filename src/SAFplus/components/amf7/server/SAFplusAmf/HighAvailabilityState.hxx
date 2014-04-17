/* 
 * File HighAvailabilityState.hxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#ifndef HIGHAVAILABILITYSTATE_HXX_
#define HIGHAVAILABILITYSTATE_HXX_

#include "MgtFactory.hxx"
#include <iostream>

namespace SAFplusAmf {

    class HighAvailabilityState {

        /* Apply MGT object factory */
        REGISTER(HighAvailabilityState);

    public:
        int Value;

    public:
        HighAvailabilityState();
        int getValue();
        void setValue(int value);
        HighAvailabilityState& operator=(HighAvailabilityState& HighAvailabilityState);
        friend std::ostream& operator<<(std::ostream& os, const HighAvailabilityState& HighAvailabilityState);
        friend std::istream& operator>>(std::istream& in, HighAvailabilityState& HighAvailabilityState);
        ~HighAvailabilityState();

    };
}
/* namespace SAFplusAmf */
#endif /* HIGHAVAILABILITYSTATE_HXX_ */
