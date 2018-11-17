#include "bard.hpp"

Bard::Bard()
    : Character() {
        selectSkills();
        Character::setHealthDie(8);
}
Bard::Bard(uint32_t level)
    : Character(level) {
        selectSkills();
        Character::setHealthDie(8);
}

void Bard::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
