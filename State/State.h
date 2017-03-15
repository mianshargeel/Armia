#ifndef State_h
#define State_h

#include <iostream>
#include "StateProperties.h"
#include "Exception.h"

class State {
protected:
    int hp;
    int maxHp;
    int damage;
    Rolls title;    //User define data type through enum with varialbe (title)
    
    void calculateHp(int points);
    
public:
    State(Rolls title, int maxHp, int damage);
    virtual ~State();
    
    const int getHp() const;
    const int getMaxHp() const;
    const int getDamage() const;
    Rolls getTitle() const;
    
    void ensureIsAlive();
    void setHp(int hp);
    
    virtual void takeDamage(int damage);
    virtual void takeMagDamage(int damage);
    virtual void restoreHp(int points);
};


#endif /* State_h */
