#include "CollideCharacterBridge.h"
#include "CollisionMap.h"
#include <vector>


bool isCollided(std::pair<int, int> posIP, std::vector<std::pair<int, int>> colls) {
	int indexPos = (posIP.first + 1) * (posIP.second + 1);
	for (std::pair<int, int> coll : colls) {
		int indexColl = (coll.first + 1) * (coll.second + 1);
		if (indexPos == indexColl) {
			return true;
		}
	}

	return false;
}

void CollideCharacterBridge::condition(Character* character, Layer executorLayer)
{
	std::vector<Character*> chars = providerLayer.giveAllType<Character>();
	std::vector<std::pair<int, int>> colls = executorLayer.giveAllType<CollisionMap>().front()->getCollisions();



	for (Character* character : chars) {
		if(character->getPosi().x == )
	}


}

void CollideCharacterBridge::assertTrue(Anex* anex)
{
	if (this->conditionVar) {
		anex->cancel();
	}
}
