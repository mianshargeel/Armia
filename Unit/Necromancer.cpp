//
//  Necromancer.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/20/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#include "Necromancer.hpp"
#include "Necromancer.h"
//#include <set>

Necromancer::Necromancer(Rolls title, int maxHp, int damage, int maxMana) : Wizard(title, maxHp, damage, maxMana) {
    this->action = new NecromancerAction();
    this->subject = NULL;
    }

Necromancer::~Necromancer() {
    delete action;
    
    if (this->subject != NULL ) {
        delete this->subject;
    }
}

void Necromancer::attack(Unit& target, Unit& attacker) {
    this->ensureIsAlive();
    this->action->attack(target, attacker);
}

void Necromancer::counterAttack(Unit& target, Unit& attacker) {
    this->ensureIsAlive();
    this->action->counterAttack(target, attacker);
}

//void Necromancer::Update() {}

//
//void Necromancer::attachISubject(ISubject* subject) {
//    subject->insert(subject);
//}
//
//void Necromancer::detachISubject(ISubject* subject) {
//    subject->erase(subject);
//}
//
//void Necromancer::notifyISubject() {
//    std::set<ISubject*>::iterator it;
//    
//    for ( it = subject->begin(); it != subject->end(); it++ ) {
//        (*subject).detach(this);
//    }
//}
