#include "../unit/Soldier.h"
#include "../unit/Rogue.h"
#include "../unit/Berserker.h"
#include "../unit/Wizard.h"
#include "../unit/Healer.h"
#include "../unit/Priest.h"
#include "../unit/Werewolf.h"
//#include "../unit/Warlock.h"
//#include "../unit/Demon.h"
#include "../unit/Necromancer.h"
#include "../spell/Spell.h"
#include "catch.hpp"

TEST_CASE("test Soldier", "[Soldier]") {
    Soldier* sol = new Soldier();
    Soldier* sol2 = new Soldier();
