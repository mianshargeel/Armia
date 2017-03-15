//
//  Berserker.h
//  ArmyX
//
//  Created by Shargeel  on 12/11/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef BerserkerState_h
#define BerserkerState_h

#include <iostream>
#include "State.h"

class BerserkerState : public State {
public:
    BerserkerState(Rolls title, int maxHp, int damage);
    virtual ~BerserkerState();
    
    void takeMagDamage(int damage);
};
#endif /* Berserker_h */
