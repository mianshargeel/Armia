//
//  RogueAction.h
//  ArmyX
//
//  Created by Shargeel  on 12/13/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef RogueAction_h
#define RogueAction_h

#include <iostream>
#include "Action.h"

class Unit;

class RogueAction : public Action {
public:
    virtual ~RogueAction() {}
    
    void attack(Unit& target, Unit& attacker);
};

#endif /* RogueAction_h */
