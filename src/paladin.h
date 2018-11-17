#ifndef PALADIN_HPP
#define PALADIN_HPP

#include "character.hpp"

class Paladin : public Character {
    public:
        Paladin();
        Paladin(uint32_t level);

        void selectSkills();
    private:
};

#endif
