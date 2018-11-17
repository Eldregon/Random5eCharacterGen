#ifndef CLERIC_HPP
#define CLERIC_HPP

#include "character.hpp"

class Cleric : public Character {
    public:
        Cleric();
        Cleric(uint32_t level);

        void selectSkills();
    private:
};

#endif
