#include "Healer.h"

Healer::Healer(Rolls title, int maxHP, int damage, int maxMana) : HealCaster(title, maxHP, damage, maxMana) {}

Healer::~Healer() {}

void Healer::cast(Harm& spell, Unit& target) {
	HealCaster::cast(spell, target);
}

void Healer::cast(Restore& spell, Unit& target) {
	HealCaster::cast(spell, target);
}