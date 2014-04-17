/* 
 * File Counter64.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#include "MgtFactory.hxx"
#include <iostream>
#include "Counter64.hxx"

using namespace std;

namespace ietfYangTypes {

    /* Apply MGT object factory */
    REGISTERIMPL(Counter64, /ietf-yang-types/counter64)

    Counter64::Counter64() {
    };

    unsigned long int Counter64::getValue() {
        return this->Value;
    };

    void Counter64::setValue(unsigned long int value) {
        this->Value = value;
    };

    Counter64& Counter64::operator=(Counter64& counter64) {
        Value = counter64.Value;
        return *this;
    };

    Counter64::~Counter64() {
    };

    ostream& operator<<(ostream& os, const Counter64& counter64) {
        return os << counter64.Value;
    };

    istream& operator>>(istream& in, Counter64& counter64) {
        return in >> counter64.Value;
    };

}
/* namespace ietfYangTypes */
