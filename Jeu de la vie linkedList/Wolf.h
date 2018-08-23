#pragma once
#include "Entity.h"

class Wolf : public Entity
{
public:
	Wolf(string name);
private:
	virtual void Draw();
};

