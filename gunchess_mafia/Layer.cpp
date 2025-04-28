#include "Layer.h"
#include "Character.h"
#include "GameElement.h"
#include <typeinfo>
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

template<class T>
std::vector<T*> Layer::giveAllType()
{
	std::vector<T*> chars = std::vector<T*>();
	for (GameElement* character : this->gameElements) {
		if (typeid(character) == typeid(T)) {
			chars.push_back(character);
		}
	}

	return chars;

}

void Layer::setDynamic(bool isDyanmic)
{
	this->dynamic = isDyanmic;
}

bool Layer::getDynamic() {
	return this->dynamic;
}