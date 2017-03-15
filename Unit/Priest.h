#ifndef PRIEST_H
#define PRIEST_H

#include <iostream>
#include "Healer.H"

class Priest : public Healer {
public:
	Priest(Rolls title=Rolls::PRIEST, int maxHp=(int)MaxHp::PRIEST, int damage=(int)Dmg::PRIEST, int maxMana=(int)MaxMana::PRIEST);
	virtual ~Priest();

	void cast(Harm& spell, Unit& target);
	void cast(Restore& spell, Unit& target);
};

#endif //PRIEST_H