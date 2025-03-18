#pragma once
#include "Map.h"
#include "GameElement.h"
#include "raylib.h"
#include <iostream>
#include <utility>
#include <vector>
class CollisionMap : public GameElement, public Map
{
private:
	std::vector<std::pair<int, int>> collisionCoords;
	template<typename T>
	bool isThingCollided(T* object);
public:
	CollisionMap();
	std::vector<std::pair<int, int>> getCollisions();
	void init() override;
	bool update() override;
};

