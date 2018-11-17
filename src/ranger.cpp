#include "ranger.hpp"

Ranger::Ranger()
    : Character() {
        selectSkills();
        Character::setHealthDie(10);
}
Ranger::Ranger(uint32_t level)
    : Character(level) {
        selectSkills();
        Character::setHealthDie(10);
}

void Ranger::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
