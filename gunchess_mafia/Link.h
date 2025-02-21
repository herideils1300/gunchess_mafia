#pragma once
#include "GameElement.h"
#include "Shared.h"
#include "ActionType.h"
#include <vector>
class Link
{
protected:
	std::vector<bool*> conditions;
public:
	virtual void setCondition(bool* condition) {}; // Will set condition
	virtual void determineCourse(GameElement* anex, ActionType actionType = ActionType::initAction) {}; // Will cancel anex if the condtion is false
};

