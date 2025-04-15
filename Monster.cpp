#include "Monster.h"

Monster::Monster() : Creature(), name("Unknown Monster") {}

Monster::Monster(int a, int d, int h, string n) : Creature(a, d, h), name(n) {}

int Monster::getAttack() const {
    return attack + 1;  // Slight bonus for monsters
}

void Monster::takeDamage(int dmg) {
    health -= (dmg - defense);
    if (health < 0) health = 0;
}

void Monster::display() const {
    cout << "Monster: " << name << " [ATK: " << attack << ", DEF: " << defense << ", HP: " << health << "]\n";
}
