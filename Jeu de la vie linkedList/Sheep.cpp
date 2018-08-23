#include "stdafx.h"
#include "Sheep.h"

Sheep::Sheep(string name) : Entity(name)
{
}

void Sheep::Draw()
{
	cout << "Drawing Sheep " << _name << endl;
}

//void Sheep::number()
//{
//	cout << "Enter the number of male Sheep" << endl;
//	cin >> m_nbS;
//
//	List<int> Sheep;
//	Sheep.PushBack(m_nbS);
//	
//}