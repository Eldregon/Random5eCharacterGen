#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include <vector>

#define STR 0
#define DEX 1
#define CON 2
#define INT 3
#define WIS 4
#define CHR 5

class Character {
    public: 
        Character();
        Character(uint32_t level);

        void rollForStats();
        void pickForStats();

        void printer();
    private:
        uint32_t m_level;
        std::vector<uint32_t> m_stats;
};

#endif
