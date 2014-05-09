/* 
 * File Cleanup.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 
#include "SAFplusAmfCommon.hxx"

#include "Execution.hxx"
#include <vector>
#include "MgtFactory.hxx"
#include "Cleanup.hxx"


namespace SAFplusAmf
  {

    /* Apply MGT object factory */
    MGT_REGISTER_IMPL(Cleanup, /SAFplusAmf/Component/cleanup)

    Cleanup::Cleanup()
    {
        this->name.assign("cleanup");
    };

    std::vector<std::string>* Cleanup::getChildNames()
    {
        std::string childNames[] = { "command", "args", "timeout" };
        return new std::vector<std::string> (childNames, childNames + sizeof(childNames) / sizeof(childNames[0]));
    };

    Cleanup::~Cleanup()
    {
    };

}
/* namespace SAFplusAmf */
