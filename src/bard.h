#ifndef BARD_HPP
#define BARD_HPP

#include "character.hpp"

class Bard : public Character {
    public:
        Bard();
        Bard(uint32_t level);

        void selectSkills();
    private:
};

#endif
