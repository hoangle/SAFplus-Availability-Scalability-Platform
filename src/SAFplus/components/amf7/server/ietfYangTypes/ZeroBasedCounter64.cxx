/* 
 * File ZeroBasedCounter64.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#include <iostream>
#include "ZeroBasedCounter64.hxx"


namespace ietfYangTypes {

    ZeroBasedCounter64::ZeroBasedCounter64() {
    };

    unsigned long int ZeroBasedCounter64::getValue() {
        return this->Value;
    };

    void ZeroBasedCounter64::setValue(unsigned long int value) {
        this->Value = value;
    };

    ietfYangTypes::ZeroBasedCounter64& ZeroBasedCounter64::operator=(const ietfYangTypes::ZeroBasedCounter64& zeroBasedCounter64) {
        Value = zeroBasedCounter64.Value;
        return *this;
    };

    ZeroBasedCounter64::~ZeroBasedCounter64() {
    };

    std::ostream& operator<<(std::ostream& os, const ietfYangTypes::ZeroBasedCounter64& zeroBasedCounter64) {
        return os << zeroBasedCounter64.Value;
    };

    std::istream& operator>>(std::istream& is, ietfYangTypes::ZeroBasedCounter64& zeroBasedCounter64) {
        return is >> zeroBasedCounter64.Value;
    };

}
/* namespace ietfYangTypes */
