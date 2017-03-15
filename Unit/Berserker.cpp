//
//  Berserker.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/14/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#include "Berserker.hpp"
#include "Berserker.h"

Berserker::Berserker(Rolls title, int maxHp, int damage) : Soldier(title, maxHp, damage) {
    this->state = new BerserkerState(title, maxHp, damage);
}

Berserker::~Berserker() {
    delete state;
}

void takeMagDamage(State& damage) {
    this->state->takeMagDamage(damage);
}
