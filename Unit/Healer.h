#ifndef HEALER_H
#define HEALER_H

#include "HealCaster.h"

class Healer : public HealCaster {
public:
	Healer(Rolls title=Rolls::HEALER, int maxHP=(int)MaxHp::HEALER, int damage=(int)Dmg::HEALER, int maxMan=(int)MaxMana::HEALER);
	virtual ~Healer();

	void cast(Harm& spell, Unit& target);
	void cast(Restore& spell, Unit& target);

}; 

#endif //HEALER_H