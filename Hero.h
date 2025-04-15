#ifndef HERO_H
#define HERO_H

#include "Creature.h"
#include <string>

class Hero : public Creature {
    string name;

public:
    Hero();
    Hero(int a, int d, int h, string n);
    int getAttack() const override;
    void takeDamage(int) override;
    void display() const override;
};

#endif // HERO_H
