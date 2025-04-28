#pragma once
#include "Map.h"
#include "GameElement.h"
#include "raylib.h"
#include "Collision.h"
#include <iostream>
#include <utility>
#include <vector>

class CollisionMap : public GameElement, public Map
{
private:
	std::vector<Collision*> collisionBlocks;
public:
	CollisionMap();
	std::vector<std::pair<int, int>> getCollisions();
	void init() override;
	std::vector<Character*> update(std::vector<Character*> allChars);
};

