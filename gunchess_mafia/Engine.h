#pragma once
#include <vector>
#include "GameElement.h"
#include <raylib.h>
#include "Scene.h"
class Engine
{
private:
	Scene* scene;
	bool engineRunning = true;
	bool updateElements();
	void drawElements();
	void setup();
	void loop();
public:
	Engine(Scene* scene);
	void endGame();
	//Engine();
	void run();
};

