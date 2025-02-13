#pragma once
#include "GameElement.h"
#include <string>
#include <raylib.h>
class TileMap : public GameElement, public Map
{
public:
	TileMap();
	void init() override;
	void draw() override;
};

