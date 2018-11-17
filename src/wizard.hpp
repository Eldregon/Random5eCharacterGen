#ifndef WIZARD_HPP
#define WIZARD_HPP

#include "character.hpp"

class Wizard : public Character {
    public:
        Wizard();
        Wizard(uint32_t level);

        void selectSkills();
    private:
};

#endif
