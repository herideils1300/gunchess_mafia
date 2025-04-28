#include "Engine.h"
#include <raylib.h>

Engine::Engine(Scene* scene){
	this->scene = scene;
}

//Engine::Engine() {}

bool Engine::updateElements()
{
	bool finished = false;

	//Forward update
	for (GameElement* element : this->scene->bringAll<GameElement>()) {
		finished &= element->update();
	}
	//Backward (block or undo) update
	return finished;
}

void Engine::drawElements() {
	
	ClearBackground(Color{ 0, 0, 0, 0 });
	BeginDrawing();
	BeginMode2D(this->scene->bringCamera());
	for (GameElement* element : this->scene->bringAll<GameElement>()) {
		element->draw();
	}
	EndMode2D();
	EndDrawing();
	
}

void Engine::endGame() {
	this->engineRunning = false;
	CloseWindow();
	return;
}

void Engine::loop() {
	while (this->engineRunning) {
		this->updateElements();
		this->drawElements();
		if (WindowShouldClose()) {
			this->endGame();
		}
	}

	this->endGame();
}

void Engine::setup() {
	int width = 1024;
	int height = 720;
	InitWindow(width, height, "Gunchess");
	for (GameElement* a : this->scene->bringAll<GameElement>()) {
		a->init();
	}
}

void Engine::run() {
	this->setup();
	this->loop();
}

