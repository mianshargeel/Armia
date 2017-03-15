//
//  Unit.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/11/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#include "Unit.h"
//#include "Action.h"

Unit::Unit(State* state) : state(state), action(new Action()) {}

Unit::~Unit() {
    
    delete state;
    delete action;
}

void Unit::ensureIsAlive() {
    if ( this->state->getHp() == 0 ) {
        throw DeadActionException();
    }
}

const int Unit::getHp() const {
    return this->state->getHp();
}

const int Unit::getMaxHp() const {
    return this->state->getMaxHp();
}

const int Unit::getDamage() const {
    return this->state->getDamage();
}

Rolls Unit::getTitle() const {
    return this->state->getTitle();
}

void Unit::takeDamage(int damage) {
    this->state->takeDamage(damage);
}

void Unit::takeMagDamage(int damage) {
    this->state->takeMagDamage(damage);
}

void Unit::restoreHp(int points) {
    this->state->restoreHp(points);
}

void Unit::attack(Unit& target, Unit& attacker) {
    this->state->ensureIsAlive();
    
    this->action->attack(target, attacker);

}

void Unit::counterAttack(Unit& target, Unit& attacker) {
    this->state->ensureIsAlive();
    
    this->action->counterAttack(target, attacker);

}

void Unit::attach(IObserver* observer) {
    iobserver->insert(observer);
    observer->attachSubject(this);
}

void Unit::detach(IObserver* observer) {
    iobserver->erase(observer);
    observer->detachSubject(this);
}

void Unit::notify() {
    std::set<IObserver*>::iterator it = iobserver->begin();
    
    for ( ; it != iobserver->end(); it++ ) {
        (*it)->update();
        this->detach(*it);
    }
    
    
}
