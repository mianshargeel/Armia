//
//  NecromancerAction.h
//  ArmyX
//
//  Created by Shargeel  on 12/13/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef NecromancerAction_h
#define NecromancerAction_h


#include <iostream>
#include "Action.h"

class Unit;

class NecromancerAction : public Action {
public:
    virtual ~NecromancerAction() {}
    
    void attack(Unit& target, Unit& attacker);
    void counterAttack(Unit& target, Unit& attacker);
};

#endif //NECROMANCER_ACTION_H
