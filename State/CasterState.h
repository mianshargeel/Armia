#ifndef CasterState_h
#define CasterState_h

#include <iostream>
#include "State.h"

class CasterState: public State {
protected:
    int mana;
    int maxMana;
    
    void calculateMana(int points);
    
public:
    CasterState(Rolls title, int maxHp, int damage, int maxMana);
    virtual ~CasterState();
    
    const int getMana() const;
    const int getMaxMana() const;
    
    void reduceMana(int cost);
    void restoreMana(int points);
};

#endif /* CasterState_h */
