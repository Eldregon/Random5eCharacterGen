#ifndef FIGHTER_HPP
#define FIGHTER_HPP

#include "character.hpp"

class Fighter : public Character {
    public:
        Fighter();
        Fighter(uint32_t level);

        void selectSkills();
    private:
};

#endif
