#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
using namespace std;

class Creature {
protected:
    int attack;
    int defense;
    int health;

public:
    Creature(int a = 0, int d = 0, int h = 0) : attack(a), defense(d), health(h) {}

    virtual int getAttack() const {
        return attack;
    }

    int getDefense() const {
        return defense;
    }

    int getHealth() const {
        return health;
    }

    virtual void takeDamage(int) = 0;  // Pure virtual function
    virtual void display() const = 0;  // Pure virtual function
};

#endif // CREATURE_H
