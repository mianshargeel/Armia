//
//  Action.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/13/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#include "Action.hpp"
#include "Action.h"
#include "../unit/Unit.h"

void Action::attack(Unit& target, Unit& attacker) {
    target.takeDamage(attacker.getDamage());
    
    if ( target.getHp() != 0 ) {
        target.counterAttack(attacker, target);
    }
}

void Action::counterAttack(Unit& target, Unit& attacker) {
    target.takeDamage(attacker.getDamage()/2);
}
