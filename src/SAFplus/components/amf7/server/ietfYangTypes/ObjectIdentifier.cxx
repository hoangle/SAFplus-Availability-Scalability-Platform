/* 
 * File ObjectIdentifier.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 
#include "ietfYangTypesCommon.hxx"

#include <string>
#include <iostream>
#include "ObjectIdentifier.hxx"


namespace ietfYangTypes
  {

    ObjectIdentifier::ObjectIdentifier()
    {
    };

    std::string ObjectIdentifier::getValue()
    {
        return this->Value;
    };

    void ObjectIdentifier::setValue(std::string value)
    {
        this->Value = value;
    };

    ietfYangTypes::ObjectIdentifier& ObjectIdentifier::operator=(const ietfYangTypes::ObjectIdentifier &objectIdentifier)
    {
        Value = objectIdentifier.value;
        return *this;
    };

    ObjectIdentifier::~ObjectIdentifier()
    {
    };

    std::ostream& operator<<(std::ostream &os, const ietfYangTypes::ObjectIdentifier &objectIdentifier)
    {
        return os << objectIdentifier.value;
    };

    std::istream& operator>>(std::istream &is, ietfYangTypes::ObjectIdentifier &objectIdentifier)
    {
        return is >> objectIdentifier.value;
    };

}
/* namespace ietfYangTypes */
