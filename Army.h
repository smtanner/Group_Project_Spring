#ifndef ARMY_H
#define ARMY_H

#include <vector>
#include <algorithm>
#include "Creature.h"

class Army {
    vector<Creature*> army;

public:
    Army();
    void addCreature(Creature*);
    void display() const;
    void sortArmy();
    ~Army();
};

#endif // ARMY_H
