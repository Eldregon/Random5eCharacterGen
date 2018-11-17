#ifndef RANGER_HPP
#define RANGER_HPP

#include "character.hpp"

class Ranger : public Character {
    public:
        Ranger();
        Ranger(uint32_t level);

        void selectSkills();
    private:
};

#endif
