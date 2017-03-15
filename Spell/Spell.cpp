//
//  Spell.cpp
//  ArmyX
//
//  Created by Shargeel  on 12/14/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#include "Spell.hpp"
#include "Spell.h"

Spell::Spell(SpellTitle title, int power, int cost) : title(title), power(power), cost(cost) {}

Spell::~Spell() {}

SpellTitle Spell::getTitle() const {
    return title;
}

const int Spell::getPower() const {
    return power;
}

const int Spell::getCost() const {
    return cost;
}
