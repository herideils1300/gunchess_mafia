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
	bool canceled = false;
	void lock(int providedPriority);
public:
	Anex() {};
	Anex(AnexType type, int priority) { this->type = type; this->priority = priority; };
	virtual int execute(Character* character) { return true; };
	virtual int execute(Map* character) { return true; };
};

