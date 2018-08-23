#include "stdafx.h"
#include "Wolf.h"

Wolf::Wolf(string name) : Entity(name) 
{
}


void Wolf::Draw()
{
	cout << "Drawing Wolf " << _name << endl;
}