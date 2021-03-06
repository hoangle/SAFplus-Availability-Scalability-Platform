/* 
 * File EntityAlarmStatus.hxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#pragma once
#ifndef ENTITYALARMSTATUS_HXX_
#define ENTITYALARMSTATUS_HXX_
#include "ENTITYSTATETCMIBCommon.hxx"

#include <iostream>
#include "clTransaction.hxx"
#include <bitset>

namespace ENTITYSTATETCMIB
  {

    class EntityAlarmStatus {
    public:
        std::bitset<7> value;

    public:
        EntityAlarmStatus();
        std::bitset<7> getValue();
        void setValue(std::bitset<7> &value, SAFplus::Transaction &t=SAFplus::NO_TXN);
        ::ENTITYSTATETCMIB::EntityAlarmStatus& operator=(const ::ENTITYSTATETCMIB::EntityAlarmStatus &EntityAlarmStatus);
        friend std::ostream& operator<<(std::ostream &os, const ::ENTITYSTATETCMIB::EntityAlarmStatus &EntityAlarmStatus);
        friend std::istream& operator>>(std::istream &is, ::ENTITYSTATETCMIB::EntityAlarmStatus &EntityAlarmStatus);
        ~EntityAlarmStatus();

    };
}
/* namespace ::ENTITYSTATETCMIB */
#endif /* ENTITYALARMSTATUS_HXX_ */
