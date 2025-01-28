#include "GeneratingAnex.h"
#include "TileMap.h"

bool GeneratingAnex::generateTileMap(GameElement* tileMap, float cprob)
{
	TileMap tileMap = TileMap(tileMap);
}

GeneratingAnex::GeneratingAnex(AnexType type = AnexType::initAnex, int priority = 0) : Anex(type, priority) {}

bool GeneratingAnex::execute(GameElement* element)
{
	return generateTileMap(element, 0.2);
}

