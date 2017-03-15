//
//  Rogue.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/13/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#include "Rogue.hpp"
#include "Rogue.h"

Rogue::Rogue(Rolls title, int maxHp, int damage) : Soldier(title, maxHp, damage) {
    this->action = new RogueAction();
    
}

Rogue::~Rogue() {
    delete action;
}

void Rogue::attack(Unit& target, Unit& attacker) {
    this->ensureIsAlive();
    
    this->action->attack(target, attacker);
}
