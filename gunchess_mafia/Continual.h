#pragma once
#include "Scene.h"
//Static svojstvo that can be applied to all scene passed in the constructor.
class Continual
{
protected:
	std::vector<Scene*> scenes;
public:
	Continual(std::vector<Scene*> scenes) { this->scenes = scenes; };
	virtual void apply();
};

