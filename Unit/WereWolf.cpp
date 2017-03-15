//
//  WereWolf.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/14/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#include "WereWolf.hpp"
#include "WereWolf.h"

WereWolf::WereWolf(Rolls title, int maxHp, int damage) : Soldier(title, maxHp, damage) {
    this->state = new WereWolfState(title, maxHp, damage);
    
}

WereWolf::~WereWolf() {
    delete state;
}

const int WereWolf::getHp() const {
    return this->state->getHp();
}

void WereWolf::changeState() {
    this->state->changeState();
}

void WereWolf::takeDamage(int damage) {
    this->state->takeDamage(damage);
}

void WereWolf::takeMagDamage(int damage) {
    this->state->takeDamage(damage);
}

void WereWolf::restoreHp(int points) {
    this->state->restoreHp(points);
}
