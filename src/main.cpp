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
#include "character_classes.hpp"

int get_input(std::string prompt, std::vector<std::string> selections) {
    std::cout << prompt << std::endl;
    for (int i=0; i<selections.size(); i++) {
        std::cout << "[" << i+1 << "] " << selections[i] << std::endl;
    }
    int answer;
    std::cin >> answer;
    return answer;
}

int main() {
    srand(time(NULL));

    std::cout << "============================" << std::endl;
    std::cout << "| DnD 5e Character Creator |" << std::endl;
    std::cout << "============================" << std::endl;

    std::string prompt = "Would you like to create a character randomly or manually?";
    std::vector<std::string> answers {"Random","Manual"};
    int input = get_input(prompt, answers);

    Classes newCharacter;
    if (input == 1) {
        std::cout << "Class created" << std::endl;
        newCharacter = Classes(rand()%11);
    }

    Character character;
    switch(newCharacter) {
        default:
        bard:
            character = Bard();
            break;
        barbarian:
            character = Barbarian();
            break;
        cleric:
            character = Cleric();
            break;
        druid:
            character = Druid();
            break;
        monk:
            character = Monk();
            break;
        paladin:
            character = Paladin();
            break;
        ranger:
            character = Ranger();
            break;
        rogue:
            character = Rogue();
            break;
        sorcerer:
            character = Sorcerer();
            break;
        warlock:
            character = Warlock();
            break;
        wizard:
            character = Wizard();
            break;
    }
    character.printer();

    return 0;
}
