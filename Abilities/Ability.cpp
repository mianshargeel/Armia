#include "Ability.h"
#include <iostream>

Ability::Ability() {
	std::cout << "The Ability of Bite and Transform Constructor:" << std::endl;
}

Ability::~Ability() {
	std::cout << "Ability Destructor:" << std::endl;
}

void Ability::Bite(Unit& target, Unit& attacker) {
	std::cout << "This Bite is a Dangerous attack to Change: " << std::endl;
	target.counterAttack(target, attacker);
}

void Ability::Transform(Unit& target) {
	std::cout << " O my God Transfored already wow !!! :" << std::endl;
}
