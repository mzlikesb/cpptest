#pragma once
#include "Character.h"
#include "Actor.h"
#include <vector>
using namespace std;

class Monster : public Character
{
public:	
	Monster();
	~Monster();

	virtual void Move(int KeyCode, class Map* map) override;
	virtual void Render() override;
};

