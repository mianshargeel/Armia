//
//  CasterState.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/11/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//


#include "CasterState.h"

CasterState::CasterState(Rolls title, int maxHp, int damage, int maxMana) : State(title, maxHp, damage), mana(maxHp), maxMana(maxMana) {}

CasterState::~CasterState() {
    
}

void CasterState::calculateMana(int points) {
    points += this->mana;
    
    if ( points < 0 ) {
        points = 0;
    }
    
    if ( points > this->maxMana) {
        points = this->maxMana;
    }
    
    this->mana = points;
}

const int CasterState::getMana() const {
    return mana;
}

const int CasterState::getMaxMana() const {
    return maxMana;
}

void CasterState::reduceMana(int cost) {
    ensureIsAlive();
    calculateMana(-cost);
}

void CasterState::restoreMana(int points) {
    ensureIsAlive();
    calculateMana(points);
}

