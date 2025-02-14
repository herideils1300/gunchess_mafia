#pragma once
#include "GameElement.h"
class Layer
{
private:
	std::vector<GameElement*> gameElements = std::vector<GameElement*>();
	bool dynamic = false;
public:
	Layer(std::vector<GameElement*> ges, bool dynamic);
	void operator+(GameElement* element);
	std::vector<GameElement*> giveAllElements();
};

