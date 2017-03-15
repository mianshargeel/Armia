//
//  VampireAction.h
//  ArmyX
//
//  Created by Shargeel  on 12/13/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef VampireAction_h
#define VampireAction_h

#include <iostream>
#include "Action.h"

class Unit;

class VampireAction : public Action {
public:
    virtual ~VampireAction() {}
    
    void attack(Unit& target, Unit& attacker);
    void counterAttack(Unit& target, Unit& attacker);
};

#endif //VAMPIRE_ACTION_H
