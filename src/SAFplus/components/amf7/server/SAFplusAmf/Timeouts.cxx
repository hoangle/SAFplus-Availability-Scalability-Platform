/* 
 * File Timeouts.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#include "clMgtObject.hxx"
#include "clMgtProv.hxx"
#include "SaTimeT.hxx"
#include <vector>
#include "MgtFactory.hxx"
#include "Timeouts.hxx"

using namespace SAFplusTypes;

namespace SAFplusAmf {

    /* Apply MGT object factory */
    REGISTERIMPL(Timeouts, /SAFplusAmf/Component/timeouts)

    Timeouts::Timeouts(): ClMgtObject("timeouts"), quiescingComplete("quiescingComplete"), workRemoval("workRemoval"), workAssignment("workAssignment") {
        this->addChildObject(&quiescingComplete, "quiescingComplete");
        this->addChildObject(&workRemoval, "workRemoval");
        this->addChildObject(&workAssignment, "workAssignment");
    };

    std::vector<std::string>* Timeouts::getChildNames() {
        std::string childNames[] = { "quiescingComplete", "workRemoval", "workAssignment" };
        return new std::vector<std::string> (childNames, childNames + sizeof(childNames) / sizeof(childNames[0]));
    };

    /*
     * XPATH: /SAFplusAmf/Component/timeouts/quiescingComplete
     */
    SAFplusTypes::SaTimeT Timeouts::getQuiescingComplete() {
        return this->quiescingComplete.Value;
    };

    /*
     * XPATH: /SAFplusAmf/Component/timeouts/quiescingComplete
     */
    void Timeouts::setQuiescingComplete(SAFplusTypes::SaTimeT quiescingCompleteValue) {
        this->quiescingComplete.Value = quiescingCompleteValue;
    };

    /*
     * XPATH: /SAFplusAmf/Component/timeouts/workRemoval
     */
    SAFplusTypes::SaTimeT Timeouts::getWorkRemoval() {
        return this->workRemoval.Value;
    };

    /*
     * XPATH: /SAFplusAmf/Component/timeouts/workRemoval
     */
    void Timeouts::setWorkRemoval(SAFplusTypes::SaTimeT workRemovalValue) {
        this->workRemoval.Value = workRemovalValue;
    };

    /*
     * XPATH: /SAFplusAmf/Component/timeouts/workAssignment
     */
    SAFplusTypes::SaTimeT Timeouts::getWorkAssignment() {
        return this->workAssignment.Value;
    };

    /*
     * XPATH: /SAFplusAmf/Component/timeouts/workAssignment
     */
    void Timeouts::setWorkAssignment(SAFplusTypes::SaTimeT workAssignmentValue) {
        this->workAssignment.Value = workAssignmentValue;
    };

    Timeouts::~Timeouts() {
    };

}
/* namespace SAFplusAmf */
