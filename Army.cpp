#include "Army.h"
#include <iostream>
#include <algorithm>

Army::Army() {}

Army::~Army() {
    for (auto creature : army) {
        delete creature;  // Delete dynamically allocated creatures
    }
}

void Army::addCreature(Creature* creature) {
    army.push_back(creature);
}

void Army::display() const {
    for (auto creature : army) {
        creature->display();
    }
}

void Army::sortArmy() {
    std::sort(army.begin(), army.end(), [](Creature* a, Creature* b) {
        return (a->getAttack() + a->getDefense() + a->getHealth()) >
               (b->getAttack() + b->getDefense() + b->getHealth());
    });
}
