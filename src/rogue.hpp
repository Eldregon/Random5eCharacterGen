#ifndef ROGUE_HPP
#define ROGUE_HPP

#include "character.hpp"

class Rogue : public Character {
    public:
        Rogue();
        Rogue(uint32_t level);

        void selectSkills();
    private:
};

#endif
