#include "paladin.hpp"

Paladin::Paladin()
    : Character() {
        selectSkills();
        Character::setHealthDie(10);
}
Paladin::Paladin(uint32_t level)
    : Character(level) {
        selectSkills();
        Character::setHealthDie(10);
}

void Paladin::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
