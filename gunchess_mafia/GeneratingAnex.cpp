#include "GeneratingAnex.h"
#include "TileMap.h"
#include "time.h"

bool GeneratingAnex::generateTileMap(Map* tileMap, float cprob /* cprob is a value that determens the probability of collision being set*/)
{
	std::string skeletonEdit = "";

	// Setting the random value for with and height of the tileMap
	srand(time(NULL));
	int width = rand() % 20;
	srand(time(NULL));
	int height = rand() % 20;


	// Populating the skeletonEdit with regards to width and height
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			float randNum = rand() % 10 * 0.1f;
			skeletonEdit.push_back((randNum <= cprob) ? '@' : ' ');
			if (j == width - 1) {
				skeletonEdit.push_back('\n');
			}
		}
	}

	tileMap->mapBlocks(&skeletonEdit);

	return true;
}

int GeneratingAnex::execute(Map* element)
{
	if(!this->locked && !this->canceled)
		return generateTileMap(element, 0.2);
}

