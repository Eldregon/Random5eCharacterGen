#include "wizard.hpp"

Wizard::Wizard()
    : Character() {
        selectSkills();
        Character::setHealthDie(6);
}
Wizard::Wizard(uint32_t level)
    : Character(level) {
        selectSkills();
        Character::setHealthDie(6);
}

void Wizard::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
