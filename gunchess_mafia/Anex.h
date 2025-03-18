#pragma once
#include "Character.h"
#include "Map.h"
#include "ActionType.h"
class Anex
{
protected:
	int priority = 0;
	ActionType type = ActionType::initAction;
	bool locked = false;
	bool canceled = false;
	void switchLock(int providedPriority); // If priority is smaller lock
public:
	Anex() {};
	Anex(ActionType type, int priority) { this->type = type; this->priority = priority; };
	virtual int execute(Character* character) { return true; };
	virtual int execute(Map* character) { return true; };
	void cancel();
};

