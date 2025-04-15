#ifndef MONSTER_H
#define MONSTER_H

#include "Creature.h"
#include <string>

class Monster : public Creature {
protected:
    string name;

public:
    Monster();
    Monster(int a, int d, int h, string n);
    int getAttack() const override;
    void takeDamage(int) override;
    void display() const override;
};

#endif // MONSTER_H
