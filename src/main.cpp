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

int main() {
    srand(time(NULL));

    Character player;
    //player.rollForStats();
    //player.pickForStats();

    player.printer();

    return 0;
}
