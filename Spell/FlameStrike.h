#ifndef FLAMESTRIKE_H
#define FLAMESTRIKE_H

#include <iostream>
#include "Harm.h"

class FlameStrike: public Harm {
    public:
        FlameStrike(SpellTitle title=SpellTitle::FLAMESTRIKE, int power=(int)Power::FLAMESTRIKE, int cost=(int)Cost::FLAMESTRIKE);
        virtual ~FlameStrike();
        
        void action(Unit& target, int modifier);
};

#endif //FLAMESTRIKE_H