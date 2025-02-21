#pragma once
#include "Link.h"
#include "CollisionMap.h"
#include "ActionType.h"

class CollisionLink : public Link
{
private:
	void checkIfCollided(CollisionMap colMap, Character character);
public:
	void determineCourse(GameElement* element, ActionType actionType) override;
};

