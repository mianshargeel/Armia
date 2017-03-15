//
//  Berserker.h
//  ArmyX
//
//  Created by Shargeel  on 12/14/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef Berserker_h
#define Berserker_h

#include <iostream>
#include "Soldier.h"
#include "../State/BerserkerState.h"

class Berserker : public Soldier {
protected:
    BerserkerState* state;

public:
    Berserker(Rolls title=Rolls::BERSERKER, int maxHp=(int)MaxHp::BERSERKER, int damage=(int)Dmg::BERSERKER);
    virtual ~Berserker();

    void takeMagdamage(State& damage);
    
};

#endif /* Berserker_h */
