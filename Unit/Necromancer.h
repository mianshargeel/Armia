//
//  Necromancer.h
//  ArmyX
//
//  Created by Shargeel  on 12/20/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef Necromancer_h
#define Necromancer_h
#include <iostream>
#include <set>
#include "Wizard.h"
#include "../Action/NecromancerAction.h"

class Necromancer : public Wizard, public IObserver {
protected:
    NecromancerAction* action;
    std::set<ISubject*>* subject;
    
public:
    Necromancer(Rolls title=Rolls::NECROMANCER, int maxHp=(int)MaxHp::NECROMANCER, int damage=(int)Dmg::NECROMANCER, int maxMana=(int)MaxMana::NECROMANCER);
    
    virtual ~Necromancer();
    
    void attack(Unit& target, Unit& attacker);
    void counterAttack(Unit& target, Unit& attacker);
    
    void Update();
    void attachISubject(ISubject* subject);
    void detachISubject(ISubject* subject);
    void notifyISubject();
    
};

#endif /* Necromancer_h */
