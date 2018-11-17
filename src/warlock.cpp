#include "warlock.hpp"

Warlock::Warlock()
    : Character() {
        selectSkills();
}
Warlock::Warlock(uint32_t level)
    : Character(level) {
        selectSkills();
}

void Warlock::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
