/* 
 * File DateAndTime.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#include "MgtFactory.hxx"
#include <string>
#include <iostream>
#include "DateAndTime.hxx"

using namespace std;

namespace ietfYangTypes {

    /* Apply MGT object factory */
    REGISTERIMPL(DateAndTime, /ietf-yang-types/date-and-time)

    DateAndTime::DateAndTime() {
    };

    string DateAndTime::getValue() {
        return this->Value;
    };

    void DateAndTime::setValue(string value) {
        this->Value = value;
    };

    DateAndTime& DateAndTime::operator=(DateAndTime& dateAndTime) {
        Value = dateAndTime.Value;
        return *this;
    };

    DateAndTime::~DateAndTime() {
    };

    ostream& operator<<(ostream& os, const DateAndTime& dateAndTime) {
        return os << dateAndTime.Value;
    };

    istream& operator>>(istream& in, DateAndTime& dateAndTime) {
        return in >> dateAndTime.Value;
    };

}
/* namespace ietfYangTypes */
