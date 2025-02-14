#pragma once
#include <vector>
#include "GameElement.h"
#include <raylib.h>
#include "Scene.h"
class Engine
{
private:
	Scene* scene = new Scene();
	bool gameRunning = true;
	bool updateElements();
	void drawElements();
	void setup();
	void loop();
public:
	Engine(Scene* scene);
	Engine();
	void run();
};

