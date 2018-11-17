#include "ranger.hpp"

Ranger::Ranger()
    : Character() {
        selectSkills();
}
Ranger::Ranger(uint32_t level)
    : Character(level) {
        selectSkills();
}

void Ranger::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
