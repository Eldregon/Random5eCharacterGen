#ifndef MONK_HPP
#define MONK_HPP

#include "character.hpp"

class Monk : public Character {
    public:
        Monk();
        Monk(uint32_t level);

        void selectSkills();
    private:
};

#endif
