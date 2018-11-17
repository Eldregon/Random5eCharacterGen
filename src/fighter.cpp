#include "fighter.hpp"

Fighter::Fighter()
    : Character() {

}
Fighter::Fighter(uint32_t level)
    : Character(level) {

}

void Fighter::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
