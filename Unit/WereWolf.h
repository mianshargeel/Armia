//
//  WereWolf.h
//  ArmyX
//
//  Created by Shargeel  on 12/14/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef WereWolf_h
#define WereWolf_h

#include <iostream>
#include "Soldier.h"
#include "../State/WereWolfState.h"

class WereWolf : public Soldier {
protected:
    WereWolfState* state;

public:
    WereWolf(Rolls title=Rolls::WEREWOLF, int maxHp=(int)MaxHp::WEREWOLF, int damage=(int)Dmg::WEREWOLF);
    virtual ~WereWolf();
    
    const int getHp() const;
    
    void changeState();
    
    void takeDamage(int damage);
    void takeMagDamage(int damage);
    void restoreHp(int points);
};

#endif /* WereWolf_h */
