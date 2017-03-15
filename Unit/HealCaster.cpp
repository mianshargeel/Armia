#include "HealCaster.h"

HealCaster::HealCaster(Rolls title, int maxHp, int damage, int maxMana) : Caster(title, maxHp, damage, maxMana) {}

HealCaster::~HealCaster() {}

void HealCaster::cast(Harm& spell, Unit& target) {
	this->ensureIsAlive();

	this->reduceMana(spell.getCost());
	spell.action(target, 2);

	if ( target.getHp() != 0 ) {
		target.counterAttack(*this, target);
	}
}

void HealCaster::cast(Restore& spell, Unit& target) {
	this->ensureIsAlive();

	this->reduceMana(spell.getCost());
	spell.action(target, 1);
}
