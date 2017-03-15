//
//  Vampire.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/13/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#include "Vampire.hpp"
#include "Vampire.h"

Vampire::Vampire(Rolls title, int maxHp, int damage) :Soldier(title, maxHp, damage) {
    this->action = new VampireAction();
}

Vampire::~Vampire() {
    delete action;
}

void Vampire::attack(Unit& target, Unit& attacker) {
    this->ensureIsAlive();
    this->action->attack(target, attacker);
    
}

void Vampire::counterAttack(Unit& target, Unit& attacker) {
    this->ensureIsAlive();
    this->action->counterAttack(target, attacker);
}
