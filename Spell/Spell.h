//
//  Spell.h
//  ArmyX
//
//  Created by Shargeel  on 12/14/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef Spell_h
#define Spell_h

#include <iostream>
#include "../Unit/Unit.h"
#include "SpellProperties.h"

class Spell {
protected:
    SpellTitle title;
    int power;
    int cost;
public:
    Spell(SpellTitle title, int power, int cost);
    virtual ~Spell();
    
    SpellTitle getTitle() const;
    const int getPower() const;
    const int getCost() const;
    
    virtual void action(Unit& target, int modifier) = 0;
    
};

#endif /* Spell_h */
