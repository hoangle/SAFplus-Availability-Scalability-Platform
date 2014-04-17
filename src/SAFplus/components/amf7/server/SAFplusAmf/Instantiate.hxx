/* 
 * File Instantiate.hxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#ifndef INSTANTIATE_HXX_
#define INSTANTIATE_HXX_

#include "clMgtObject.hxx"
#include "clMgtProv.hxx"
#include <vector>
#include "MgtFactory.hxx"
#include <string>

namespace SAFplusAmf {

    class Instantiate : public ClMgtObject {

        /* Apply MGT object factory */
        REGISTER(Instantiate);

    public:

        /*
         * Specify both name of the binary here
         */
        ClMgtProv<std::string> command;

        /*
         * Specify the arguments as if you are writing them on the command line
         */
        ClMgtProv<std::string> args;

        /*
         * The maximum time this operation should take before the AMF receives a response or the command completes.  Specified in milliseconds.
         */
        ClMgtProv<unsigned long int> timeout;

    public:
        Instantiate();
        std::vector<std::string> *getChildNames();

        /*
         * XPATH: /SAFplusAmf/Component/instantiate/command
         */
        std::string getCommand();

        /*
         * XPATH: /SAFplusAmf/Component/instantiate/command
         */
        void setCommand(std::string commandValue);

        /*
         * XPATH: /SAFplusAmf/Component/instantiate/args
         */
        std::string getArgs();

        /*
         * XPATH: /SAFplusAmf/Component/instantiate/args
         */
        void setArgs(std::string argsValue);

        /*
         * XPATH: /SAFplusAmf/Component/instantiate/timeout
         */
        unsigned long int getTimeout();

        /*
         * XPATH: /SAFplusAmf/Component/instantiate/timeout
         */
        void setTimeout(unsigned long int timeoutValue);
        ~Instantiate();

    };
}
/* namespace SAFplusAmf */
#endif /* INSTANTIATE_HXX_ */
