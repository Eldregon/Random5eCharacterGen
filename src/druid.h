#ifndef DRUID_HPP
#define DRUID_HPP

#include "character.hpp"

class Druid : public Character {
    public:
        Druid();
        Druid(uint32_t level);

        void selectSkills();
    private:
};

#endif
