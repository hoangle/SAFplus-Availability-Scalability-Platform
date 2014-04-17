/* 
 * File PhysAddress.hxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#ifndef PHYSADDRESS_HXX_
#define PHYSADDRESS_HXX_

#include "MgtFactory.hxx"
#include <string>
#include <iostream>

namespace ietfYangTypes {

    class PhysAddress {

        /* Apply MGT object factory */
        REGISTER(PhysAddress);

    public:
        std::string Value;

    public:
        PhysAddress();
        std::string getValue();
        void setValue(std::string value);
        PhysAddress& operator=(PhysAddress& physAddress);
        friend std::ostream& operator<<(std::ostream& os, const PhysAddress& physAddress);
        friend std::istream& operator>>(std::istream& in, PhysAddress& physAddress);
        ~PhysAddress();

    };
}
/* namespace ietfYangTypes */
#endif /* PHYSADDRESS_HXX_ */
