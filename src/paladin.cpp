#include "paladin.hpp"

Paladin::Paladin()
    : Character() {

}
Paladin::Paladin(uint32_t level)
    : Character(level) {

}

void Paladin::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
