#pragma once
#include "Character.h"
#include "Map.h"
#include "ActionType.h"
#include "Bridge.h"

class Anex
{
protected:
	std::vector<Bridge*> bridges = std::vector<Bridge*>();
	int priority = 0;
	ActionType type = ActionType::initAction;
	bool locked = false;
	bool canceled = false;
	void switchLock(int providedPriority); // If priority is smaller lock
public:
	Anex() {};
	Anex(ActionType type, int priority) { this->type = type; this->priority = priority; };
	void setPriority(int priority) { this->priority = priority; };
	void setType(ActionType type) { this->type = type; };
	virtual int execute(Character* character) { return true; };
	virtual int execute(Map* character) { return true; };
	void cancel();
	void reset() {
		this->canceled = false;
	};
};

