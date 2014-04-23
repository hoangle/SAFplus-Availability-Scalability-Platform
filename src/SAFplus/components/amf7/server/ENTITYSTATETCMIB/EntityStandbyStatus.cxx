/* 
 * File EntityStandbyStatus.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 

#include "MgtEnumType.hxx"
#include <iostream>
#include "EntityStandbyStatus.hxx"


namespace ENTITYSTATETCMIB {

    /*
     * Provide an implementation of the en2str_vec lookup table.
     */
    const EntityStandbyStatusManager::vec_t EntityStandbyStatusManager::en2str_vec = {
            pair_t(EntityStandbyStatus::unknown, "unknown"),
            pair_t(EntityStandbyStatus::hotStandby, "hotStandby"),
            pair_t(EntityStandbyStatus::coldStandby, "coldStandby"),
            pair_t(EntityStandbyStatus::providingService, "providingService")
    }; // uses c++11 initializer lists 

    std::ostream& operator<<(std::ostream& os, const ENTITYSTATETCMIB::EntityStandbyStatus& entityStandbyStatus) {
        return os << EntityStandbyStatusManager::toString(entityStandbyStatus);
    };

    std::istream& operator>>(std::istream& is, ENTITYSTATETCMIB::EntityStandbyStatus& entityStandbyStatus) {
        std::string buf;
        is >> buf;
        entityStandbyStatus = EntityStandbyStatusManager::toEnum(buf);
        return is;
    };

}
/* namespace ENTITYSTATETCMIB */
