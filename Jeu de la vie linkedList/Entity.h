#pragma once
#include <iostream>
#include <string>
#include "node.h"

using namespace std;

/////////////////////////////////////////////////////////////////////////////
//
// Entity - classe de base pour une entit�.
//
/////////////////////////////////////////////////////////////////////////////

class Entity : public Node
{
public:
	// Constructeurs/destructeur
	Entity() { }
	Entity(std::string name)
		: _name(name) { }

	virtual ~Entity() { std::cout << "destroying " << _name << std::endl; }

public:
	// Interface publique
	void drawEntity()
	{
		// Dessine cette entit�
		draw();

		// Dessine l'entit� suivante
		if (!isLastNode())
			dynamic_cast<Entity *>(_nextNode)->drawEntity();
	}

private:
	// Fonctions internes
	virtual void draw() { }

protected:
	std::string _name;
};

