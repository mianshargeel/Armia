#ifndef CASTER_H
#define CASTER_H

#include <iostream>
#include <map>
#include "Soldier.h"
#include "../state/CasterState.h"
#include "../spell/Spell.h"
#include "../spell/FlameStrike.h"
#include "../spell/Heal.h"

class Caster : public Soldier {
    protected:
        CasterState* state;
        std::map<SpellTitle, Spell*>* spellBook;
    
    public:
        Caster(Rolls title, int maxHp, int damage, int maxMana);
        virtual ~Caster();
        
        const int getMana() const;
        const int getMaxMana() const;
        const std::map<SpellTitle, Spell*>& openSpellBook() const;
        
        virtual void reduceMana(int cost);
        virtual void restoreMana(int points);
        
        Spell& findSpell(SpellTitle title) const;
        virtual void cast(Harm& spell, Unit& target) = 0;
        virtual void cast(Restore& spell, Unit& target) = 0;
};

#endif //CASTER_H