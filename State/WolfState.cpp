//
//  WolfState.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/11/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#include "WolfState.h"

WolfState::WolfState(Rolls title, int maxHp, int damage) : State(title, maxHp, damage) {}

WolfState::~WolfState() {
    
}

void WolfState::calculateHp(double points) {
    points += this->hp;
    
    if ( points < 0 ) {
        points = 0;
    }
    
    if ( points > this->maxHp ) {
        points = this->maxHp;
    }
    this->hp = points;
}

void WolfState::takeDamage(int damage) {
    this->calculateHp(-(double)damage/2);
}

void WolfState::takeMagDamage(int damage) {
    this->calculateHp(-damage);
}
