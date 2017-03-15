//
//  StatePropertise.h
//  ArmyX
//
//  Created by Shargeel  on 12/11/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef StatePropertise_h
#define StatePropertise_h

enum class Rolls {
    SOLDIER,
    ROGUE,
    WEREWOLF,
    VAMPIRE,
    BERSERKER,
    WIZARD,
    HEALER,
    PRIEST,
    WARLOCK,
    NECROMANCER
};

enum class MaxHp {
    SOLDIER = 100,
    ROGUE = 60,
    WEREWOLF = 80,
    VAMPIRE = 40,
    BERSERKER = 60,
    WIZARD = 60,
    HEALER = 40,
    PRIEST = 60,
    WARLOCK = 80,
    NECROMANCER = 40
};

enum class Dmg {
    SOLDIER = 10,
    ROGUE = 8,
    WEREWOLF = 6,
    VAMPIRE = 4,
    BERSERKER = 6,
    WIZARD = 4,
    HEALER = 4,
    PRIEST = 4,
    WARLOCK = 6,
    NECROMANCER = 4
};

enum class MaxMana {
    WIZARD = 200,
    HEALER = 150,
    PRIEST = 120,
    WARLOCK = 80,
    NECROMANCER = 100
};

#endif /* StatePropertise_h */
