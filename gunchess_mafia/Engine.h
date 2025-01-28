#pragma once
#include <vector>
#include "GameElement.h"
#include <raylib.h>
class Engine
{
private:
	std::vector<GameElement*> elements;
	Camera2D camera;
	bool gameRunning = true;
	bool updateElements();
	void drawElements();
	void endGame();
	void setup();
	void loop();
public:
	Engine(std::vector<GameElement*> actors);
	Engine();
	void addElement(GameElement* actor);
	void addElement(std::vector<GameElement*> actors);
	void run();
};

