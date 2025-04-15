#include "Boss.h"

Boss::Boss() : Monster(), specialAttack(0), loot(0) {}

Boss::Boss(int a, int d, int h, string n, int sa, int l)
    : Monster(a, d, h, n), specialAttack(sa), loot(l) {}
