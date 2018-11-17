#include "sorcerer.hpp"

Sorcerer::Sorcerer()
    : Character() {
        selectSkills();
}
Sorcerer::Sorcerer(uint32_t level)
    : Character(level) {
        selectSkills();
}

void Sorcerer::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
