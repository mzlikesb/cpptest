#pragma once
#include "Character.h"

class Player: public Character
{
public:
	Player();
	~Player();
		
	// 부모한테 있고 재정의 할것임
	virtual void Move(int KeyCode, class Map* map) override;
	virtual void Render() override;
	virtual void Init() override;
};

