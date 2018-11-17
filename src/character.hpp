#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "defines.hpp"

// Struct to manage skill information
struct Skill_Data {
    Skill_Data() {
        proficient = false;
        attribute = 0;
    }
    Skill_Data(int attr) {
        proficient = false;
        attribute = attr;
    }
    Skill_Data(bool is_proficient, int attr) {
        proficient = is_proficient;
        attribute = attr;
    }
    bool proficient;
    int attribute;
};

class Character {
    public: 
        // Constructors
        Character();
        Character(uint32_t level);

        // Attributes
        void rollForStats();
        void pickForStats();
        int getAttributeModifier(int stat);

        // Skills
        void selectSkills(std::vector<std::string> valid_skills, int skillCount);
        int getSkillModifier(std::string skill);

        // Feat selection

        // Equipment selection

        // Display character sheet
        void printer();
    private:
        // Create skill to attribute map
        void create_skill_attribute_map();

        // Printer helper functions
        void printAttributes();
        void printSkills();

        // Member variables
        uint32_t m_level;
        std::vector<uint32_t> m_stats;
        int32_t m_proficiency;
        std::vector<bool> m_saving_throws;
        std::map<std::string, Skill_Data> m_skills;
};

#endif
