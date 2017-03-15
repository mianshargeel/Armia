//
//  Vampire.h
//  ArmyX
//
//  Created by Shargeel  on 12/13/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef Vampire_h
#define Vampire_h

#include <iostream>
#include "Soldier.h"
#include "../Action/VampireAction.h"

class Vampire : public Soldier {
    protected:
        VampireAction* action;
    
    public:
    Vampire(Rolls title=Rolls::VAMPIRE, int maxHp=(int)MaxHp::VAMPIRE, int damage=(int)Dmg::VAMPIRE);
    virtual ~Vampire();
    
    virtual void attack(Unit& target, Unit& attacker);
    virtual void counterAttack(Unit& target, Unit& attacker);
};

#endif /* Vampire_h */
