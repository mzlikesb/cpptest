#pragma once
#include "Character.h"

class Player: public Character
{
public:
	Player();
	~Player();
		
	// �θ����� �ְ� ������ �Ұ���
	virtual void Move(int KeyCode, class Map* map) override;
};

