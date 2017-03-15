//
//  Header.h
//  ArmyX
//
//  Created by Shargeel  on 12/13/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <iostream>

class Unit;

class Action {
public:
    virtual ~Action() {}
    
    virtual void attack(Unit& target, Unit& attacker);
    virtual void counterAttack(Unit& target, Unit& attacker);
};

#endif //ACTION_H

