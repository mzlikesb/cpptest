#pragma once
#include "Character.h"
#include "Actor.h"
#include <vector>
using namespace std;

class Monster : public Character
{
public:
	Monster(char shape, vector<class Actor*> actors);
	~Monster();

	void Init(vector<Actor*> actors);
	virtual void Move(int KeyCode, class Map* map) override;
	virtual void Render() override;

};

