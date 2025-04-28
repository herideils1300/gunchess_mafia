#include "CollisionContinual.h"
#include "CollisionMap.h"
CollisionContinual::CollisionContinual(std::vector<Scene*> scenes) : Continual(scenes) {};


void CollisionContinual::apply()
{
	for (Scene* scene : this->scenes) {
		std::vector<Character*> characters = scene->bringAll<Character>();
		CollisionMap* collMap = scene->bringAll<CollisionMap>().front();

		std::vector<Character*> collChars = collMap->update(characters);


	}
}
