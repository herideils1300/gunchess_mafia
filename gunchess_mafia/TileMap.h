#pragma once
#include "GameElement.h"
#include <string>
#include <raylib.h>
class TileMap : public GameElement
{
private:
	Texture2D freeTexture = LoadTexture("");
	Texture2D collisionTexture = LoadTexture("");
	int width = 0, height = 0;
	const char* tiles;
public:
	TileMap();
	TileMap(TileMap* instance);
	void init() override;
	void draw() override;
};

