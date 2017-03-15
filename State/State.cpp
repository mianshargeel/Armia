#include "State.h"

State::State(Rolls title, int maxHp, int damage) {
    this->hp = maxHp;
    this->title = title;
    this->maxHp = maxHp;
    this->damage = damage;
}

State::~State() {
    
}


const int State::getHp() const {
    return hp;
}

const int State::getMaxHp() const {
    return maxHp;
}

const int State::getDamage() const {
    return damage;
}

Rolls State::getTitle() const {
    return title;
}

void State::ensureIsAlive() {
   if ( this->hp == 0 ) {
       throw DeadActionException();
   }
}

void State::calculateHp(int points) {
    points += this->hp;
    
    if ( points < 0 ) {
        points = 0;
    }
    if ( points > maxHp ) {
        points = maxHp;
    }
    this->hp = points;
}

void State::setHp(int hp) {
    this->hp = hp;
}

void State::takeDamage(int damage) {
    this->calculateHp(-damage);
}

void State::takeMagDamage(int damage) {
    this->takeDamage(damage);
}

void State::restoreHp(int points) {
    this->calculateHp(points);
}
