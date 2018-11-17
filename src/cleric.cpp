#include "cleric.hpp"

Cleric::Cleric()
    : Character() {
        selectSkills();
}
Cleric::Cleric(uint32_t level)
    : Character(level) {
        selectSkills();
}

void Cleric::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
