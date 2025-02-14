#include "Layer.h"

Layer::Layer(std::vector<GameElement*> ges, bool dynamic)
{
	this->gameElements = ges;
	this->dynamic = dynamic;
}

void Layer::operator+(GameElement* element)
{
	this->gameElements.push_back(element);
}

std::vector<GameElement*> Layer::giveAllElements()
{
	return this->gameElements;
}
