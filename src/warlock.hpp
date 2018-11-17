#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include "character.hpp"

class Warlock : public Character {
    public:
        Warlock();
        Warlock(uint32_t level);

        void selectSkills();
    private:
};

#endif
