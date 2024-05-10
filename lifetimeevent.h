#ifndef LIFETIMEEVENT_HPP_
#define LIFETIMEEVENT_HPP_

#include "vendor/UUID/UUID.hpp"
// #include "vendor/Timestamp/timestamp.hpp"
#include <string>

class LifetimeEvent {
    public:
    LifetimeEvent(const UUID_T& uuid, const std::string plainTextMessage);
    ~LifetimeEvent();
    operator std::string();
    operator UUID_T();
    
    enum EventLevel : char {
        ERROR = 0,
        WARNING = 1,
        INFO = 2,
        DEBUG = 4
    };
    
    private:
    std::string* m_plainTextReason = nullptr;
    
    protected:
    UUID_T m_ownerUUID;
    // Timestamp m_timeStamp;
};

#endif