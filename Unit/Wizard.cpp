//
//  Wizard.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/15/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#include "Wizard.hpp"
#include "Wizard.h"

Wizard::Wizard(Rolls title, int maxHp, int damage, int maxMana) : Caster(title, maxHp, damage, maxMana) {
    }

Wizard::~Wizard() {}

void Wizard::cast(Harm& spell, Unit& target) {
    Caster::cast(spell, target);
}

void Wizard::cast(Restore& spell, Unit& target) {
    Caster::cast(spell, target);
}
