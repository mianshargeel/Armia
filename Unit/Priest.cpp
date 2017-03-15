//
//  Priest.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/20/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#include "Priest.hpp"
#include "Priest.h"

Priest::Priest(Rolls title, int maxHp, int damage, int maxMana) : Healer(title, maxHp, damage, maxMana) {
    
}
Priest::~Priest() {}

void Priest::cast(Harm& spell, Unit& target) {
    Healer::cast(spell, target);
}

void Priest::cast(Restore& spell, Unit& target) {
    Healer::cast(spell, target);
}
