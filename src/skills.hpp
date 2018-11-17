#ifndef SKILLS_HPP
#define SKILLS_HPP

#include <iostream>
#include <string>
#include <map>
#include <vector>

#define STR 0
#define DEX 1
#define CON 2
#define INT 3
#define WIS 4
#define CHA 5

class Skills {
    public:
        Skills();

        uint32_t getAttribute(std::string skill);
    private:
        std::map<std::string, uint32_t> m_skillMaps;
};

#endif
