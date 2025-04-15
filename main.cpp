#include "Army.h"
#include "Hero.h"
#include "Monster.h"
#include "Boss.h"

int main() {
    Army army1, army2;

    // Player 1's Army
    army1.addCreature(new Hero(10, 5, 20, "Knight"));
    army1.addCreature(new Monster(8, 4, 15, "Goblin"));
    army1.addCreature(new Boss(12, 6, 25, "Dragon", 10, 100));

    // Player 2's Army
    army2.addCreature(new Hero(9, 6, 18, "Paladin"));
    army2.addCreature(new Monster(7, 5, 14, "Orc"));
    army2.addCreature(new Boss(11, 7, 22, "Demon", 12, 120));

    cout << "Player 1 Army - Before Sorting:\n";
    army1.display();
    army1.sortArmy();
    cout << "\nPlayer 1 Army - After Sorting:\n";
    army1.display();

    cout << "\nPlayer 2 Army - Before Sorting:\n";
    army2.display();
    army2.sortArmy();
    cout << "\nPlayer 2 Army - After Sorting:\n";
    army2.display();

    return 0;
}
