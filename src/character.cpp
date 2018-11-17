#include "character.hpp"

Character::Character() {
    m_level = 1;
    m_stats = std::vector<uint32_t> (6);
    create_skill_attribute_map();
}
Character::Character(uint32_t level) {
    m_level = level;
    m_stats = std::vector<uint32_t> (6);
    create_skill_attribute_map();
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
int Character::getAttributeModifier(int stat) {
    if (stat >= 0 && stat < m_stats.size()) {
        return m_stats[stat]/2 - 5;
    }
    return 0;
}
void Character::selectSkills(std::vector<std::string> valid_skills, int skillCount) {
    // Pick as many random skills from the argument vector and gain proficiency in them
    int selectedCount = 0;
    while (selectedCount < skillCount) {
        int skill = rand() % valid_skills.size();
        // Check that we haven't already become proficient in it
        if (!m_skills[valid_skills[skill]].proficient) {
            // Become proficient and increment proficiency counter
            m_skills[valid_skills[skill]].proficient = true;
            selectedCount++;
        }
    }
}
int Character::getSkillModifier(std::string skill) {
    // Get the modifier based on the attribute of the skill
    int mod = getAttributeModifier(m_skills[skill].attribute);
    if (m_skills[skill].proficient) {
        mod += m_proficiency;
    }
    return mod;
}

void Character::printer() {
    std::cout << "Str: " << m_stats[STR] << std::endl;
    std::cout << "Dex: " << m_stats[DEX] << std::endl;
    std::cout << "Con: " << m_stats[CON] << std::endl;
    std::cout << "Int: " << m_stats[INT] << std::endl;
    std::cout << "Wis: " << m_stats[WIS] << std::endl;
    std::cout << "Chr: " << m_stats[CHA] << std::endl;
}

void Character::create_skill_attribute_map() {
    m_skills["acrobatics"]      = Skill_Data(DEX);
    m_skills["animalhandling"]  = Skill_Data(WIS);
    m_skills["arcana"]          = Skill_Data(INT);
    m_skills["athletics"]       = Skill_Data(STR);
    m_skills["deception"]       = Skill_Data(CHA);
    m_skills["history"]         = Skill_Data(INT);
    m_skills["insight"]         = Skill_Data(WIS);
    m_skills["intimidation"]    = Skill_Data(CHA);
    m_skills["investigation"]   = Skill_Data(INT);
    m_skills["medicine"]        = Skill_Data(WIS);
    m_skills["nature"]          = Skill_Data(INT);
    m_skills["perception"]      = Skill_Data(WIS);
    m_skills["performance"]     = Skill_Data(CHA);
    m_skills["persuasion"]      = Skill_Data(CHA);
    m_skills["religion"]        = Skill_Data(INT);
    m_skills["sleightofhand"]   = Skill_Data(DEX);
    m_skills["stealth"]         = Skill_Data(DEX);
    m_skills["survival"]        = Skill_Data(WIS);
}
