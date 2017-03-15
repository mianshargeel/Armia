//
//  Soldier.h
//  ArmyX
//
//  Created by Shargeel  on 12/13/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef Soldier_h
#define Soldier_h

#include <iostream>
#include "Unit.h"

class Soldier : public Unit {
    public:
    Soldier(Rolls title=Rolls::SOLDIER, int maxHp=(int)MaxHp::SOLDIER, int damage=(int)Dmg::SOLDIER); //Use of enum
    virtual ~Soldier();
};

#endif /* Soldier_h */
