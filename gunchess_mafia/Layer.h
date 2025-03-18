#pragma once
#include "GameElement.h"
#include <string> 
class Layer
{
private:
	std::vector<GameElement*> gameElements = std::vector<GameElement*>();
	bool dynamic = false;
public:
	Layer(std::vector<GameElement*> ges, bool dynamic);
	Layer(bool dynamic);
	Layer* operator+=(GameElement* element);
	Layer* operator--();
	std::vector<GameElement*> giveAllElements();
	template<typename T>
	std::vector<T*> giveAllType();
	void setDynamic(bool isDyanmic);
	bool getDynamic();
};

