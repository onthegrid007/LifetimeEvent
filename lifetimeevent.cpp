#include "lifetimeevent.h"

LifetimeEvent::LifetimeEvent(const UUID_T& uuid, const std::string plainTextMessage) :
    m_ownerUUID(uuid),
    m_plainTextReason((plainTextMessage == "") ? 0 : new std::string(plainTextMessage)) {}
    
LifetimeEvent::~LifetimeEvent() {
    m_plainTextReason ? delete m_plainTextReason : void(0);
}

LifetimeEvent::operator std::string() {
    return ((!m_plainTextReason) ? "" : *m_plainTextReason);
}

LifetimeEvent::operator UUID_T() {
    return m_ownerUUID;
}