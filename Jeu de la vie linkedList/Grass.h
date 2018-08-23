#pragma once
#include "Entity.h"

class Grass  :public Entity
{
public:
	Grass(string name);

private : 
	virtual void Draw();
};

