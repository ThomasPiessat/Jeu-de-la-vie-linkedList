#include "stdafx.h"
#include "node.h"

// --------------------------------------------------------------------------
// Node::~Node
//
// Destructeur - d�truit les autres nodes de la liste si celui-ci en est
// le manager.
// --------------------------------------------------------------------------

Node::~Node()
{
	if (_isManager)
	{
		if (!isLastNode())
		{
			_nextNode->setManager(true);
			delete _nextNode;
			_nextNode = 0;
		}
	}

	unLink();
}

// --------------------------------------------------------------------------
// Node::unLink
//
// D�tache ce noeud de la liste.
// --------------------------------------------------------------------------

void Node::unLink()
{
	if (_prevNode)
		_prevNode->_nextNode = _nextNode;

	if (_nextNode)
		_nextNode->_prevNode = _prevNode;

	_prevNode = NULL;
	_nextNode = NULL;
}

// --------------------------------------------------------------------------
// Node::attach
//
// Attache @node � la fin de la liste de celui-ci.
// --------------------------------------------------------------------------

void Node::attach(Node *node)
{
	// On v�rifie si le noeud n'est pas d�j� dans la
	// liste cha�n�e...

	if (node->isAlone())
	{
		if (isLastNode())
		{
			_nextNode = node;

			node->_prevNode = this;
			node->_nextNode = NULL;
		}
		else
		{
			_nextNode->attach(node);
		}
	}
}