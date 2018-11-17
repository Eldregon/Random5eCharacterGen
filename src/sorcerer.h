#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "character.hpp"

class Sorcerer : public Character {
    public:
        Sorcerer();
        Sorcerer(uint32_t level);

        void selectSkills();
    private:
};

#endif
