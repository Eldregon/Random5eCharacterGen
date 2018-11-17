#include "skills.hpp"

Skills::Skills() {
    m_skillMaps["Acrobatics"]       = DEX;
    m_skillMaps["Animal Handling"]  = WIS;
    m_skillMaps["Arcana"]           = INT;
    m_skillMaps["Athletics"]        = STR;
    m_skillMaps["Deception"]        = CHA;
    m_skillMaps["History"]          = INT;
    m_skillMaps["Insight"]          = WIS;
    m_skillMaps["Intimidation"]     = CHA;
    m_skillMaps["Investigation"]    = INT;
    m_skillMaps["Medicine"]         = WIS;
    m_skillMaps["Nature"]           = INT;
    m_skillMaps["Perception"]       = WIS;
    m_skillMaps["Performance"]      = CHA;
    m_skillMaps["Persuasion"]       = CHA;
    m_skillMaps["Religion"]         = INT;
    m_skillMaps["Sleight of Hand"]  = DEX;
    m_skillMaps["Stealth"]          = DEX;
    m_skillMaps["Survival"]         = WIS;
}
