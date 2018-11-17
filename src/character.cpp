#include "character.hpp"

Character::Character() {
    m_level = 1;
    m_stats = std::vector<uint32_t> (6);
    
}
Character::Character(uint32_t level) {
    m_level = level;
    m_stats = std::vector<uint32_t> (6);
}

void Character::rollForStats() {
    int min = 4;
    int max = 18;

    // Create all of the stats for the character based off of dice rolling
    for (int i=0; i<m_stats.size(); i++) {
        m_stats[i] = rand() % (max-min) + min;
    }
}
void Character::pickForStats() {
    // Attribute points you have to spend
    int scores = 27;
    // Cost to increase the attribute scores
    std::vector<int> costs = {0,1,2,3,4,5,7,9};
    // Initialize stats to starting values
    for (int i=0; i<m_stats.size(); i++) {
        m_stats[i] = 8;
    }
    // Loop until we run out of scores to spend
    while (scores) {
        // Attribute to increase
        int attrib = rand() % m_stats.size();
        // Check that we aren't going over the bondary and have enough points to spend
        if (m_stats[attrib] < 15 && scores >= costs[m_stats[attrib]-7]) {
            scores -= costs[m_stats[attrib]-7];
            m_stats[attrib]++;
        }
    }
}

void Character::printer() {
    std::cout << "Str: " << m_stats[STR] << std::endl;
    std::cout << "Dex: " << m_stats[DEX] << std::endl;
    std::cout << "Con: " << m_stats[CON] << std::endl;
    std::cout << "Int: " << m_stats[INT] << std::endl;
    std::cout << "Wis: " << m_stats[WIS] << std::endl;
    std::cout << "Chr: " << m_stats[CHR] << std::endl;
}