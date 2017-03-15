//
//  Berserker.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/11/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#include "BerserkerState.h"

BerserkerState::BerserkerState(Rolls title, int maxHp, int damage) : State(title, maxHp, damage) {}

BerserkerState::~BerserkerState() {
    
}

void BerserkerState::takeMagDamage(int damage) {}
