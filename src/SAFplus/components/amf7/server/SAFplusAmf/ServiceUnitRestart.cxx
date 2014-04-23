/* 
 * File ServiceUnitRestart.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#include "clMgtObject.hxx"
#include "clMgtProv.hxx"
#include "SaTimeT.hxx"
#include <vector>
#include "MgtFactory.hxx"
#include "ServiceUnitRestart.hxx"

using namespace SAFplusTypes;

namespace SAFplusAmf {

    /* Apply MGT object factory */
    REGISTERIMPL(ServiceUnitRestart, /SAFplusAmf/ServiceGroup/ServiceUnitRestart)

    ServiceUnitRestart::ServiceUnitRestart(): ClMgtObject("ServiceUnitRestart"), maximum("maximum"), duration("duration") {
        this->addChildObject(&maximum, "maximum");
        this->addChildObject(&duration, "duration");
    };

    std::vector<std::string>* ServiceUnitRestart::getChildNames() {
        std::string childNames[] = { "maximum", "duration" };
        return new std::vector<std::string> (childNames, childNames + sizeof(childNames) / sizeof(childNames[0]));
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/ServiceUnitRestart/maximum
     */
    unsigned long int ServiceUnitRestart::getMaximum() {
        return this->maximum.Value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/ServiceUnitRestart/maximum
     */
    void ServiceUnitRestart::setMaximum(unsigned long int maximumValue) {
        this->maximum.Value = maximumValue;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/ServiceUnitRestart/duration
     */
    SAFplusTypes::SaTimeT ServiceUnitRestart::getDuration() {
        return this->duration.Value;
    };

    /*
     * XPATH: /SAFplusAmf/ServiceGroup/ServiceUnitRestart/duration
     */
    void ServiceUnitRestart::setDuration(SAFplusTypes::SaTimeT durationValue) {
        this->duration.Value = durationValue;
    };

    ServiceUnitRestart::~ServiceUnitRestart() {
    };

}
/* namespace SAFplusAmf */
