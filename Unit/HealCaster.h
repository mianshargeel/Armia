#ifndef HEALCASTER_H
#define HEALCASTER_H

#include <iostream>
#include "Caster.h"

class HealCaster : public Caster {
public:
	HealCaster(Rolls title, int maxHp, int damage, int maxMana);
	virtual ~HealCaster();

	virtual void cast(Harm& Spell, Unit& target) = 0;
	virtual void cast(Restore& Spell, Unit& target) = 0;
};

#endif //HEALCASTER_H