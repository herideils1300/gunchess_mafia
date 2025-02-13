#pragma once
#include "Anex.h"
#include "Map.h"
class GeneratingAnex : public Anex
{
private:
	bool generateTileMap(Map* tileMap, float cprob);
public:
	GeneratingAnex(AnexType type = AnexType::initAnex, int priority = 0) : Anex(type, priority) {};
	bool execute(Map* element) override;
};

