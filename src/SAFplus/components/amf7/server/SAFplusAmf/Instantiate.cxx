/* 
 * File Instantiate.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#include "clMgtObject.hxx"
#include "clMgtProv.hxx"
#include <vector>
#include "MgtFactory.hxx"
#include <string>
#include "Instantiate.hxx"

using namespace std;

namespace SAFplusAmf {

    /* Apply MGT object factory */
    REGISTERIMPL(Instantiate, /SAFplusAmf/Component/instantiate)

    Instantiate::Instantiate(): ClMgtObject("instantiate"), command("command"), args("args"), timeout("timeout") {
        this->addChildObject(&command, "command");
        this->addChildObject(&args, "args");
        this->addChildObject(&timeout, "timeout");
    };

    vector<string> *Instantiate::getChildNames() {
        string childNames[] = { "command", "args", "timeout" };
        return new vector<string> (childNames, childNames + sizeof(childNames) / sizeof(childNames[0]));
    };

    /*
     * XPATH: /SAFplusAmf/Component/instantiate/command
     */
    string Instantiate::getCommand() {
        return this->command.Value;
    };

    /*
     * XPATH: /SAFplusAmf/Component/instantiate/command
     */
    void Instantiate::setCommand(string commandValue) {
        this->command.Value = commandValue;
    };

    /*
     * XPATH: /SAFplusAmf/Component/instantiate/args
     */
    string Instantiate::getArgs() {
        return this->args.Value;
    };

    /*
     * XPATH: /SAFplusAmf/Component/instantiate/args
     */
    void Instantiate::setArgs(string argsValue) {
        this->args.Value = argsValue;
    };

    /*
     * XPATH: /SAFplusAmf/Component/instantiate/timeout
     */
    unsigned long int Instantiate::getTimeout() {
        return this->timeout.Value;
    };

    /*
     * XPATH: /SAFplusAmf/Component/instantiate/timeout
     */
    void Instantiate::setTimeout(unsigned long int timeoutValue) {
        this->timeout.Value = timeoutValue;
    };

    Instantiate::~Instantiate() {
    };

}
/* namespace SAFplusAmf */
