#include "wizard.hpp"

Wizard::Wizard()
    : Character() {

}
Wizard::Wizard(uint32_t level)
    : Character(level) {

}

void Wizard::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
