//
//  Transferable.h
//  ArmyX
//
//  Created by Shargeel  on 12/21/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef ABILITY_H
#define ABILITY_H

#include <iostream>
#include "../Unit/Unit.h"
#include "../Action/Action.h"

class Action;

class Unit;

class Ability {
public:
	Ability();
	virtual ~Ability();

	void Bite(Unit& target, Unit& attacker);
	void Transform(Unit& target);
};


#endif //ABILITY_H
