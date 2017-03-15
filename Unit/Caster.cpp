#include "Caster.h"

Caster::Caster(Rolls title, int maxHp, int damage, int maxMana) : Soldier(title, maxHp, damage) {
	this->state = new CasterState(title, maxHp, damage, maxMana);
	this->spellBook = new std::map<SpellTitle, Spell*>();

	this->spellBook->insert(std::pair<SpellTitle, Spell*>(SpellTitle::FLAMESTRIKE, new FlameStrike()));
	this->spellBook->insert(std::pair<SpellTitle, Spell*>(SpellTitle::HEAL, new Heal()));
}

Caster::~Caster() {
	delete state;
	delete spellBook;
}

        
const int Caster::getMana() const {
	return this->state->getMana();
}

const int Caster::getMaxMana() const {
	return this->state->getMaxMana();
}

const std::map<SpellTitle, Spell*>& Caster::openSpellBook() const {
	return *spellBook;
}

        
void Caster::reduceMana(int cost) {
	this->ensureIsAlive();
	this->state->reduceMana(cost);
}

void Caster::restoreMana(int points) {
	this->ensureIsAlive();
	this->state->restoreMana(points);
}

        
Spell& Caster::findSpell(SpellTitle title) const {
	Spell* spell;

	if ( this->openSpellBook().find(title) == this->openSpellBook().end() ) {
		throw SpellUnavailableException();
	}

	spell = openSpellBook().at(title);

	return *spell;
}

void Caster::cast(Harm& spell, Unit& target)  {
	this->ensureIsAlive();

	this->reduceMana(spell.getCost());
	spell.action(target,1);

	if ( target.getHp() != 0 ) {
		target.counterAttack(*this, target); //Unit&
	}

}

void Caster::cast(Restore& spell, Unit& target)  {
	this->ensureIsAlive();

	this->reduceMana(spell.getCost());
	spell.action(target, 2);

}
