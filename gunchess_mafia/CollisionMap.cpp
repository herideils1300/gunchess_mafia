#include "CollisionMap.h"
#include <string>

CollisionMap::CollisionMap()
{
}

std::vector<std::pair<int, int>> CollisionMap::getCollisions()
{
	return this->collisionCoords;
}

void CollisionMap::init()
{
	std::string skeleton = this->getSkeleton();

	int x = 0;
	int y = 0;
	int index = 0;

	while (index < skeleton.length())
	{
		if (skeleton[index] == '@') {
			this->collisionCoords.push_back({x, y});
		}
		else if (skeleton[index] == '\n') {
			x = 0;
			y++;
		}
		else {
			x++;
		}
		index++;
	}
}


bool CollisionMap::update() {

}
