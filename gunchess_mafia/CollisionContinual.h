#pragma once
#include "Continual.h"
class CollisionContinual : public Continual
{
public:
	CollisionContinual(std::vector<Scene*> scenes);
	void apply();
};

