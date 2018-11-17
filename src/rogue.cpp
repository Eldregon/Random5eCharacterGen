#include "rogue.hpp"

Rogue::Rogue()
    : Character() {
        selectSkills();
        Character::setHealthDie(8);
}
Rogue::Rogue(uint32_t level)
    : Character(level) {
        selectSkills();
        Character::setHealthDie(8);
}

void Rogue::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
