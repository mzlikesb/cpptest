#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include "Map.h"
#include "Map2.h"
#include "Goal.h"
#include "Goblin.h"
#include "Slime.h"
#include "WildPig.h"

int main() {
	
	Engine* engine = new Engine();	

	//0-map, 1-goal, 2-player, 3~monster
	engine->actors.push_back(new Map2());
	engine->actors.push_back(new Goal());
	engine->actors.push_back(new Player());
	engine->actors.push_back(new Goblin());
	engine->actors.push_back(new Slime());
	engine->actors.push_back(new WildPig());

	engine->Run();

	delete engine;
	engine = nullptr;

	return 0;
}