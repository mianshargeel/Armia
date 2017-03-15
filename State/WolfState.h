//
//  WolfState.h
//  ArmyX
//
//  Created by Shargeel  on 12/11/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef WolfState_h
#define WolfState_h

#include <iostream>
#include "State.h"

class WolfState : public State {
protected:
    void calculateHp(double points);
    
public:
    WolfState(Rolls title, int maxHp, int damage);
    virtual ~WolfState();
    
    void takeDamage(int damage);
    void takeMagDamage(int damage);
};

#endif /* WolfState_h */
