/* 
 * File Execution.hxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#pragma once
#ifndef EXECUTION_HXX_
#define EXECUTION_HXX_
#include "SAFplusAmfCommon.hxx"

#include <vector>
#include <string>
#include "clMgtContainer.hxx"
#include "clMgtProv.hxx"

namespace SAFplusAmf
  {

    class Execution : public SAFplus::MgtContainer {
    public:

        /*
         * Specify both name of the binary here
         */
        SAFplus::MgtProv<std::string> command;

        /*
         * Specify the arguments as if you are writing them on the command line
         */
        SAFplus::MgtProv<std::string> args;

        /*
         * The maximum time this operation should take before the AMF receives a response or the command completes.  Specified in milliseconds.
         */
        SAFplus::MgtProv<unsigned long int> timeout;

    public:
        Execution();
        std::vector<std::string>* getChildNames();

        /*
         * XPATH: /SAFplusAmf/execution/command
         */
        std::string getCommand();

        /*
         * XPATH: /SAFplusAmf/execution/command
         */
        void setCommand(std::string commandValue);

        /*
         * XPATH: /SAFplusAmf/execution/args
         */
        std::string getArgs();

        /*
         * XPATH: /SAFplusAmf/execution/args
         */
        void setArgs(std::string argsValue);

        /*
         * XPATH: /SAFplusAmf/execution/timeout
         */
        unsigned long int getTimeout();

        /*
         * XPATH: /SAFplusAmf/execution/timeout
         */
        void setTimeout(unsigned long int timeoutValue);
        ~Execution();

    };
}
/* namespace SAFplusAmf */
#endif /* EXECUTION_HXX_ */
