#include "druid.hpp"

Druid::Druid()
    : Character() {

}
Druid::Druid(uint32_t level)
    : Character(level) {

}

void Druid::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
