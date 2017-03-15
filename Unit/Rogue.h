//
//  Rogue.h
//  ArmyX
//
//  Created by Shargeel  on 12/13/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef Rogue_h
#define Rogue_h

#include <istream>
#include "Soldier.h"
#include "../Action/RogueAction.h"

class Rogue : public Soldier {
protected:
    RogueAction* action;
    
public:
    Rogue(Rolls title=Rolls::ROGUE, int maxHp=(int)MaxHp::ROGUE, int damage=(int)Dmg::ROGUE);
    virtual ~Rogue();
    
    void attack(Unit& target, Unit& attacker);
};

#endif /* Rogue_h */
