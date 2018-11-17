#include "bard.hpp"

Bard::Bard()
    : Character() {
        selectSkills();
}
Bard::Bard(uint32_t level)
    : Character(level) {
        selectSkills();

}

void Bard::selectSkills() {
    std::vector<std::string> allowed_skills {"acrobatics","animalhandling","athletics","history","insight","intimidation","perception","survival"};
    Character::selectSkills(allowed_skills,2);
}
