#include "Layer.h"

Layer::Layer(std::vector<GameElement*> ges, bool dynamic)
{
	this->gameElements = ges;
	this->dynamic = dynamic;
}

Layer::Layer(bool dynamic) {
	this->dynamic = dynamic;
	this->gameElements = std::vector<GameElement*>();
}

Layer* Layer::operator+=(GameElement* element)
{
	this->gameElements.push_back(element);
	return this;
}

std::vector<GameElement*> Layer::giveAllElements()
{
	return this->gameElements;
}
