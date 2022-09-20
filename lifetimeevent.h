#ifndef LIFETIMEEVENT_HPP_
#define LIFETIMEEVENT_HPP_

#include "vendor/UUID/UUID.h"
#include "vendor/Timestamp/timestamp.hpp"

class LifetimeEvent {
    public:
    LifetimeEvent(const UUID& uuid, const std::string plainTextMessage);
    ~LifetimeEvent();
    operator std::string();
    operator UUID();
    
    enum EventLevel : char {
        ERROR = 0,
        WARNING = 1,
        INFO = 2,
        DEBUG = 4
    };
    
    private:
    std::string* m_plainTextReason;
    
    protected:
    UUID m_ownerUUID;
    Timestamp m_timeStamp;
};

#endif