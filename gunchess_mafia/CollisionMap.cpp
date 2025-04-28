#include "CollisionMap.h"
#include "Character.h"
#include "Bridge.h"
#include <string>
#include <exception>

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
			this->collisionBlocks.push_back(new Collision(x, y));
			x++;
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

	this->mapBlocks(&skeleton);


}

std::vector<Character*> CollisionMap::update(std::vector<Character*> allChars)
{

}
