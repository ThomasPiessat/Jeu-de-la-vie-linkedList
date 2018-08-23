#pragma once
#include "Entity.h"

class Sheep : public Entity
{
protected : 
	//Sheep Number
	//static int m_nbS;
	
public:
	Sheep (string name);
	//Sheep(string sexe, int life);
	//void number();
private:
	virtual void Draw();
};
