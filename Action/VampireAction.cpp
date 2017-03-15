//
//  VampireAction.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/13/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#include "VampireAction.hpp"
#include "VampireAction.h"
#include "../unit/Unit.h"

void VampireAction::attack(Unit& target, Unit& attacker) {
    int points = target.getHp();
    
    target.takeDamage(attacker.getDamage());
    points -= target.getHp();
    attacker.restoreHp(points/2);
    
    if ( target.getHp() != 0 ) {
        target.counterAttack(attacker, target);
    }
}

void VampireAction::counterAttack(Unit& target, Unit& attacker) {
    int points = target.getHp();
    
    target.takeDamage(attacker.getDamage()/2);
    points -= target.getHp();
    attacker.restoreHp(points/2);
}
