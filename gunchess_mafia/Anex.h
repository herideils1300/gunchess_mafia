#pragma once
#include "Character.h"
#include "Map.h"
#include "AnexType.h"
class Anex
{
protected:
	int priority;
	AnexType type;
	bool locked = false;
	void lock(int providedPriority);
public:
	Anex() {};
	Anex(AnexType type, int priority) { this->type = type; this->priority = priority; };
	virtual bool execute(Character* character) { return true; };
	virtual bool execute(Map* character) { return true; };
};

