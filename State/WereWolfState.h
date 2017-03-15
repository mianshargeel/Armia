//
//  WereWolfState.h
//  ArmyX
//
//  Created by Shargeel  on 12/14/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef WereWolfState_h
#define WereWolfState_h

#include <iostream>
//#include "State.h"
#include "WolfState.h"

class WereWolfState : public State {
protected:
    State* ActiveState;
    State* AlterState;
    
public:
    WereWolfState(Rolls title, int maxHp, int damage);
    virtual ~WereWolfState();
    
    const int getHp() const;
    
    void changeState();
    
    void takeDamage(int damage);
    void takeMegDamage(int damage);
    void restoreHp(int points);
    
};

#endif /* WereWolfState_h */
