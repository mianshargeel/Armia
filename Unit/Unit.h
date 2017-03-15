//
//  Unit.h
//  ArmyX
//
//  Created by Shargeel  on 12/11/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef Unit_h
#define Unit_h

#include <iostream>
#include <set>
#include "../Action/Action.h"
#include "../State/State.h"
#include "../Interfaces/IObserver.h"
#include "../Interfaces/ISubject.h"

class Unit : public ISubject {
    protected:
        State* state;
        Action* action;
    
        std::set<IObserver*>* iobserver;
    
    void ensureIsAlive();
    
    public:
        //STATE
        Unit(State* state);
        virtual ~Unit();
    
        const int getHp() const;
        const int getMaxHp() const;
        const int getDamage() const;
        Rolls getTitle() const;
    
        void takeDamage(int damage);
        void takeMagDamage(int damage);
        void restoreHp(int points);
    
        //ACTION
        virtual void attack(Unit& target, Unit& attacker) = 0;
        virtual void counterAttack(Unit& target, Unit& attacker) = 0;
    
        //OBSERVER
        void attach(IObserver* observer);
        void detach(IObserver* observer);
        void notify();
};

#endif /* Unit_h */
