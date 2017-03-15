#ifndef WIZARD_H
#define WIZARD_H

#include "Caster.h"

class Wizard : public Caster {
public:
	Wizard(Rolls title=Rolls::WIZARD, int maxHp=(int)MaxHp::WIZARD, int damage=(int)Dmg::WIZARD, int maxMana=(int)MaxMana::WIZARD);
    virtual ~Wizard();
    
    void cast(Harm& spell, Unit& target);
    void cast(Restore& spell, Unit& target);
};

#endif //WIZARD_H
