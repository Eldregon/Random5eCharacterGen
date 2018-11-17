#include "warlock.hpp"

Warlock::Warlock()
    : Character() {

}
Warlock::Warlock(uint32_t level)
    : Character(level) {

}

void Warlock::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
