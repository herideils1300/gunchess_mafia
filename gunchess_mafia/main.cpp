#include <iostream>
#include <raylib.h>
#include "Engine.h"
#include "Boss.h"
#include "TileMap.h"
int main() {
	std::vector<GameElement*> elements = std::vector<GameElement*>{
		new TileMap()
	};

	Engine engine = Engine();
	engine.addElement(elements);

	engine.run();

	return 0;
}