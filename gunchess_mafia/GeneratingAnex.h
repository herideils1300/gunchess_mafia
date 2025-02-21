#pragma once
#include "Anex.h"
#include "Map.h"
class GeneratingAnex : public Anex
{
private:
	bool generateTileMap(Map* tileMap, float cprob);
public:
	GeneratingAnex(AnexType type = AnexType::initAnex, int priority = 0) : Anex(type, priority) {};
	int execute(Map* element) override;
};

