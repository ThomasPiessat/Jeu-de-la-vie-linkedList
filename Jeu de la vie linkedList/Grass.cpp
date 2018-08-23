#include "stdafx.h"
#include "Grass.h"

Grass::Grass(string name) : Entity(name)
{
}

void Grass::Draw()
{
	cout << "Drawing Grass " << _name << endl;
}
