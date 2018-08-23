#pragma once

// Node - noeud d'une liste doublement chaînée.


class Node
{
public:
	// Constructeur/destructeur
	Node() : _nextNode(NULL), _prevNode(NULL), _isManager(false) { }
	virtual ~Node();

public:
	// Interface publique
	bool isLastNode() { return (_nextNode ? false : true); }
	bool isFirstNode() { return !isLastNode(); }
	bool isAlone() { return ((_prevNode && _nextNode) ? false : true); }
	bool isManager() { return _isManager; }

	void setManager(bool manager) { _isManager = manager; }
	void attach(Node *node);
	void unLink();

protected:
	// Variables membres
	Node *_nextNode;
	Node *_prevNode;

	bool _isManager;
};

