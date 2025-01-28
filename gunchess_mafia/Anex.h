#pragma once
#include "Character.h"
#include "AnexType.h"
class Anex
{
protected:
	int priority;
	AnexType type;
	bool locked = false;
	void lock(int providedPriority);
public:
	Anex(AnexType type, int priorirty) { this->type = type; this->priority = priorirty; };
	virtual bool execute(Character* character) { return true; };
	virtual bool execute(GameElement* element) { return true; };
};

