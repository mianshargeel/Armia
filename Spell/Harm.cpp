#include "Harm.h"

Harm::Harm(SpellTitle title, int power, int cost) : Spell(title, power, cost) {}

Harm::~Harm() {}

void Harm::action(Unit& target, int modifier) {
    int damage;
    
    damage = this->getPower();
    damage /= modifier;
    
    target.takeMagDamage(damage);
}