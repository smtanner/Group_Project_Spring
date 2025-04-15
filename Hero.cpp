#include "Hero.h"

Hero::Hero() : Creature(), name("Unknown Hero") {}

Hero::Hero(int a, int d, int h, string n) : Creature(a, d, h), name(n) {}

int Hero::getAttack() const {
    return attack;
}

void Hero::takeDamage(int dmg) {
    health -= (dmg - defense);
    if (health < 0) health = 0;
}

void Hero::display() const {
    cout << "Hero: " << name << " [ATK: " << attack << ", DEF: " << defense << ", HP: " << health << "]\n";
}
