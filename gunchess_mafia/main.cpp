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

	Layer* mapLayer = new Layer(false);
	Layer* piecesLayer = new Layer(true);

	std::vector<Layer*> layers = std::vector<Layer*>{
		mapLayer,
		piecesLayer
	};

	Scene* scene = new Scene(layers);
	Engine engine = Engine(scene);

	engine.run();

	return 0;
}