#include <iostream>
#include <raylib.h>
#include "Engine.h"
#include "Boss.h"
#include "TileMap.h"
#include "Scene.h"
int main() {
	//Redoing the main scene...
	std::vector<GameElement*> mapElements = std::vector<GameElement*>{
		new TileMap()
	};

	std::vector<GameElement*> piecesElements = std::vector<GameElement*>{
		new Boss()
	};

	Layer mapLayer = Layer(mapElements, false);
	Layer piecesLayer = Layer(piecesElements, true);
	Scene scene = Scene();
	

	engine.run();

	return 0;
}