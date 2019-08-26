#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include "Map.h"
#include "Goal.h"

int main() {
	
	Engine* engine = new Engine();	

	//0-map, 1-goal, 2-player, 3~monster
	engine->actors.push_back(new Map());
	engine->actors.push_back(new Goal());
	engine->actors.push_back(new Player());
	engine->actors.push_back(new Monster('K', engine->actors));
	engine->actors.push_back(new Monster('S', engine->actors));
	engine->actors.push_back(new Monster('W', engine->actors));

	engine->Run();

	delete engine;
	engine = nullptr;

	return 0;
}