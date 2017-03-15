#include "Restore.h"

Restore::Restore(SpellTitle title, int power, int cost) : Spell(title, power, cost) {}

Restore::~Restore() {}

void Restore::action(Unit& target, int modifier) {
    int points;
    
    points = this->getPower();
    points /= modifier;
    
    target.restoreHp(points);
}