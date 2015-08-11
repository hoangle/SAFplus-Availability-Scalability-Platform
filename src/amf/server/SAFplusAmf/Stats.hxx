/* 
 * File Stats.hxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#pragma once
#ifndef STATS_HXX_
#define STATS_HXX_
#include "SAFplusAmfCommon.hxx"

#include "Load.hxx"
#include <vector>
#include "MgtFactory.hxx"
#include "clMgtContainer.hxx"
#include "clTransaction.hxx"
#include "clMgtProv.hxx"
#include "Load.hxx"

namespace SAFplusAmf
  {

    class Stats : public SAFplus::MgtContainer {

        /* Apply MGT object factory */
        MGT_REGISTER(Stats);

    public:

        /*
         * Number of seconds this node has been running
         */
        SAFplus::MgtProv<unsigned long int> upTime;

        /*
         * Date (in seconds since the epoch) this node booted
         */
        SAFplus::MgtProv<unsigned long int> bootTime;
        SAFplusAmf::Load load;

    public:
        Stats();
        std::vector<std::string>* getChildNames();

        /*
         * XPATH: /SAFplusAmf/Node/stats/upTime
         */
        unsigned long int getUpTime();

        /*
         * XPATH: /SAFplusAmf/Node/stats/upTime
         */
        void setUpTime(unsigned long int upTimeValue, SAFplus::Transaction &txn=SAFplus::NO_TXN);

        /*
         * XPATH: /SAFplusAmf/Node/stats/bootTime
         */
        unsigned long int getBootTime();

        /*
         * XPATH: /SAFplusAmf/Node/stats/bootTime
         */
        void setBootTime(unsigned long int bootTimeValue, SAFplus::Transaction &txn=SAFplus::NO_TXN);

        /*
         * XPATH: /SAFplusAmf/Node/stats/load
         */
        SAFplusAmf::Load* getLoad();

        /*
         * XPATH: /SAFplusAmf/Node/stats/load
         */
        void addLoad(SAFplusAmf::Load *loadValue);
        ~Stats();

    };
}
/* namespace SAFplusAmf */
#endif /* STATS_HXX_ */