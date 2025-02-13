#include "TileMap.h"
#include "GeneratingAnex.h"
#include <vector>
#include <raylib.h>

TileMap::TileMap() {
	this->colTexture = LoadTexture("../../assets/collisionTest.png");
	this->nonColTexture = LoadTexture("../../assets/nonCollisionTest.png");
}

void TileMap::draw() {
	int index = 0;
	int yCoordi = 0, xCoordi = 0;
	while (index < this->skeleton.length()) {
		Rectangle source = Rectangle{ 0.0f, 0.0f, 32.0f, 32.0f };
		Rectangle destination = Rectangle{ xCoordi * 32.0f + 16.0f, yCoordi * 32.0f + 16.0f, 32, 32 };
		Vector2 root = Vector2{ 16.0f, 16.0f };
		float rotation = 0.0f;
		Color color = WHITE;
		switch (this->skeleton[index])
		{
		case '@':
			DrawTexturePro(this->colTexture, source, destination, root, rotation, color);
			break;
		case ' ':
			DrawTexturePro(this->nonColTexture, source, destination, root, rotation, color);
			break;
		default:
			break;
		}
	}
}

void TileMap::init() {
	this->anexes = std::vector<Anex*>{
		new GeneratingAnex(AnexType::initAnex, 0)
	};
}
