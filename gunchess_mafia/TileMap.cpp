#include "TileMap.h"
#include "GeneratingAnex.h"
#include <vector>
#include <raylib.h>
#include "ActionType.h"


TileMap::TileMap() {

}

void TileMap::draw() {
	int index = 0;
	int yCoordi = 0, xCoordi = 0;
	while (index < this->skeleton.length()) {
		Rectangle source = Rectangle{ 0.0f, 0.0f, 32.0f, 32.0f };
		Rectangle destination = Rectangle{ xCoordi * 32.0f, yCoordi * 32.0f, 32, 32 };
		Vector2 root = Vector2{ 0.0f, 0.0f };
		float rotation = 0.0f;
		Color color = WHITE;
		switch (this->skeleton[index])
		{
		case '@':
			DrawTexturePro(this->getColTexture(), source, destination, root, rotation, color);
			xCoordi++;
			break;
		case ' ':
			DrawTexturePro(this->getNonColTexture(), source, destination, root, rotation, color);
			xCoordi++;
			break;
		case '\n':
			yCoordi++;
			xCoordi = 0;
			break;
		default:
			break;
		}
		index++;
	}
}

void TileMap::init() {
	this->setColTexture(LoadTexture("../../assets/collisionTest.png"));
	this->setNonColTexture(LoadTexture("../../assets/nonCollisionTest.png"));

	this->anexes = std::vector<Anex*>{
		new GeneratingAnex(ActionType::initAction, 0)
	};

	for (Anex* anex : this->anexes) {
		anex->execute(this);
	}

}
