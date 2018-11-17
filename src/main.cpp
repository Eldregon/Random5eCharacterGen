/*
 * Nicholas Wallace
 *
 * User interface for the character creation
 */
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "character.hpp"
#include "fighter.hpp"

int main() {
    srand(time(NULL));

    Character player;
    player.rollForStats();
    //player.pickForStats();

    player.printer();

    std::cout << "Testing skill selection of Fighter" << std::endl;
    Fighter fighter;
    fighter.rollForStats();
    fighter.selectSkills();
    fighter.printer();

    return 0;
}
