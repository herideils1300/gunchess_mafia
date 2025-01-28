#pragma once
#include "Anex.h"
#include "GameElement.h"
class GeneratingAnex : public Anex
{
private:
	bool generateTileMap(GameElement* tileMap, float cprob);
public:
	GeneratingAnex(AnexType type = AnexType::initAnex, int priority = 0);
	bool execute(GameElement* element) override;
};

