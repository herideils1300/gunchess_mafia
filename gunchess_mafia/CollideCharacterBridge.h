#pragma once
#include "Bridge.h"
#include "Anex.h"
#include "Layer.h"
#include "CollisionMap.h"

class CollideCharacterBridge : public Bridge
{
protected:
	void determineCondition(Character* pl, CollisionMap el);
};

