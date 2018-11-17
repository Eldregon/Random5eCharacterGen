#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

#include "character.hpp"

class Barbarian : public Character {
    public:
        Barbarian();
        Barbarian(uint32_t level);

        void selectSkills();
    private:
};

#endif
