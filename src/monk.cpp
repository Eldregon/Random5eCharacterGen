#include "monk.hpp"

Monk::Monk()
    : Character() {

}
Monk::Monk(uint32_t level)
    : Character(level) {

}

void Monk::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
