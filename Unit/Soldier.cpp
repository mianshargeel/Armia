//
//  Soldier.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/13/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#include "Soldier.hpp"
#include "Soldier.h"

Soldier::Soldier(Rolls title, int maxHp, int damage) : Unit(new State(title, maxHp, damage)) {}

Soldier::~Soldier() {}
