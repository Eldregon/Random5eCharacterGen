#include "cleric.hpp"

Cleric::Cleric()
    : Character() {
        selectSkills();
        Character::setHealthDie(8);
}
Cleric::Cleric(uint32_t level)
    : Character(level) {
        selectSkills();
        Character::setHealthDie(8);
}

void Cleric::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
