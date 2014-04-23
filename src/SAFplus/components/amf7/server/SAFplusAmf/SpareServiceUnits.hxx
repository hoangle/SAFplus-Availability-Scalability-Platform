/* 
 * File SpareServiceUnits.hxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#ifndef SPARESERVICEUNITS_HXX_
#define SPARESERVICEUNITS_HXX_

#include "clMgtObject.hxx"
#include "clMgtProv.hxx"
#include <vector>
#include "MgtFactory.hxx"
#include "clMgtProvList.hxx"

namespace SAFplusAmf {

    class SpareServiceUnits : public ClMgtObject {

        /* Apply MGT object factory */
        REGISTER(SpareServiceUnits);

    public:
        ClMgtProv<unsigned long int> current;
        ClMgtProvList<unsigned long int> history10sec;
        ClMgtProvList<unsigned long int> history1min;
        ClMgtProvList<unsigned long int> history10min;
        ClMgtProvList<unsigned long int> history1hour;
        ClMgtProvList<unsigned long int> history12hour;
        ClMgtProvList<unsigned long int> history1day;
        ClMgtProvList<unsigned long int> history1week;
        ClMgtProvList<unsigned long int> history1month;

    public:
        SpareServiceUnits();
        std::vector<std::string>* getChildNames();

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/current
         */
        unsigned long int getCurrent();

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/current
         */
        void setCurrent(unsigned long int currentValue);

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/history10sec
         */
        std::vector<unsigned long int> getHistory10sec();

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/history10sec
         */
        void setHistory10sec(unsigned long int history10secValue);

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/history1min
         */
        std::vector<unsigned long int> getHistory1min();

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/history1min
         */
        void setHistory1min(unsigned long int history1minValue);

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/history10min
         */
        std::vector<unsigned long int> getHistory10min();

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/history10min
         */
        void setHistory10min(unsigned long int history10minValue);

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/history1hour
         */
        std::vector<unsigned long int> getHistory1hour();

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/history1hour
         */
        void setHistory1hour(unsigned long int history1hourValue);

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/history12hour
         */
        std::vector<unsigned long int> getHistory12hour();

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/history12hour
         */
        void setHistory12hour(unsigned long int history12hourValue);

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/history1day
         */
        std::vector<unsigned long int> getHistory1day();

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/history1day
         */
        void setHistory1day(unsigned long int history1dayValue);

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/history1week
         */
        std::vector<unsigned long int> getHistory1week();

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/history1week
         */
        void setHistory1week(unsigned long int history1weekValue);

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/history1month
         */
        std::vector<unsigned long int> getHistory1month();

        /*
         * XPATH: /SAFplusAmf/ServiceGroup/spareServiceUnits/history1month
         */
        void setHistory1month(unsigned long int history1monthValue);
        ~SpareServiceUnits();

    };
}
/* namespace SAFplusAmf */
#endif /* SPARESERVICEUNITS_HXX_ */
