#include "barbarian.hpp"

Barbarian::Barbarian()
    : Character() {

    }
Barbarian::Barbarian(uint32_t level)
    : Character(level) {

    }

void Barbarian::selectSkills() {
    std::vector<std::string> allowed_skills {"animalhandling","athleticss","intimidation","nature","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
