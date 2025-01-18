#pragma once
#include <vector>
#include "Anex.h"
class GameElement
{
protected:
	std::vector<Anex*> anexes = std::vector<Anex*>();
public:
	virtual void init(int winWidth, int winHeight) {};
	virtual bool update() {};
	virtual void draw() {};
};

