#pragma once
#include "Map.h"
#include "Character.h"

class Goal : public Character
{
public:
	Goal();
	~Goal();

	virtual void Render() override;
	void Init();
};

