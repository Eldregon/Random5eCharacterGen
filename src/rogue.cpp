#include "rogue.hpp"

Rogue::Rogue()
    : Character() {
        selectSkills();
}
Rogue::Rogue(uint32_t level)
    : Character(level) {
        selectSkills();
}

void Rogue::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
