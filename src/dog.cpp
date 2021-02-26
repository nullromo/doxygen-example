#include "dog.hpp"
#include "utility.hpp"
#include <stdio.h>

Dog::Dog(const char* _name) : name(_name) {
    energy = MAX_ENERGY / 2;
    printf("Created %s the dog.\n", name);
}

void Dog::bark(void) {
    int energyToExpend = 1;
    if (checkEnergy(energyToExpend)) {
        energy -= energyToExpend;
        printf("%s BARKS!\n", name);
    } else {
        fprintf(stderr, "%s is too tired to bark.\n", name);
    }
}

void Dog::run(int minutes) {
    int energyToExpend = multiply(minutes, 3);
    if (checkEnergy(energyToExpend)) {
        energy -= energyToExpend;
        printf("%s runs for %d minute%s.\n",
               name,
               minutes,
               minutes == 1 ? "" : "s");
    } else {
        fprintf(stderr,
                "%s is too tired to run for %d minute%s.\n",
                name,
                minutes,
                minutes == 1 ? "" : "s");
    }
}

void Dog::sleep(int minutes) {
    int energyToRegain = multiply(minutes, 2);
    energy += energyToRegain;
    printf("%s sleeps for %d minute%s.\n",
           name,
           minutes,
           minutes == 1 ? "" : "s");
    if (energy > MAX_ENERGY) {
        energy = MAX_ENERGY;
        printf("%s is fully rested.\n", name);
    }
}

bool Dog::checkEnergy(int energyToExpend) {
    if (energy > energyToExpend) {
        return true;
    }
    return false;
}
