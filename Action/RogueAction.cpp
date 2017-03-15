//
//  RogueAction.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/13/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#include "RogueAction.hpp"
#include "RogueAction.h"
#include "../unit/Unit.h"

void RogueAction::attack(Unit& target, Unit& attacker) {
    target.takeDamage(attacker.getDamage());
}
