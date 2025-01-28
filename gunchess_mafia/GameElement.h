#pragma once
#include <vector>
#include "Anex.h"
class GameElement
{
protected:
	std::vector<Anex*> anexes = std::vector<Anex*>();
public:
	virtual void init() {};
	virtual bool update() { return false; };
	virtual void draw() {};
};

