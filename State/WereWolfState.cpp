//
//  WereWolfState.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/14/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#include "WereWolfState.hpp"
#include "WereWolfState.h"

WereWolfState::WereWolfState(Rolls title, int maxHp, int damage) : State(title, maxHp, damage) {
    this->ActiveState = new State(title, maxHp, damage);
    this->AlterState = new State(title, maxHp*2, damage*2);
}

WereWolfState::~WereWolfState() {
    delete ActiveState;
    delete AlterState;
}

const int WereWolfState::getHp() const {
    return this->ActiveState->getHp();

}

void WereWolfState::changeState() {
    State* temp = ActiveState;
    
    ActiveState = AlterState;
    AlterState = temp;
    
}

void WereWolfState::takeDamage(int damage) {
    this->ActiveState->takeDamage(damage);
    this->AlterState->takeDamage(damage);
    
}

void WereWolfState::takeMegDamage(int damage) {
    this->ActiveState->takeMagDamage(damage);
    this->AlterState->takeMagDamage(damage);
    
}

void WereWolfState::restoreHp(int points) {
    this->ActiveState->restoreHp(points);
    this->AlterState->restoreHp(points);

}
