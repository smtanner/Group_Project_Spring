#ifndef BOSS_H
#define BOSS_H

#include "Monster.h"
#include <string>

class Boss : public Monster {
    int specialAttack;
    int loot;

public:
    Boss();
    Boss(int a, int d, int h, string n, int sa, int l);
};

#endif // BOSS_H
