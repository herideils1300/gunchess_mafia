#include "Engine.h"
#include <raylib.h>

Engine::Engine(std::vector<GameElement*> elements){
	this->elements = elements;
	this->camera = Camera2D();
}

Engine::Engine() {
	this->camera = Camera2D();
}

void Engine::addElement(GameElement* element) {
	this->elements.push_back(element);
}

void Engine::addElement(std::vector<GameElement*> elements)
{
	for (GameElement* e : elements) {
		this->elements.push_back(e);
	}
}

bool Engine::updateElements()
{
	bool finished = false;

	for (GameElement* element : this->elements) {
		finished &= element->update();
	}

	return finished;
}

void Engine::drawElements() {
	
	ClearBackground(Color{ 0, 0, 0, 0 });
	BeginDrawing();
	BeginMode2D(this->camera);
	for (GameElement* element : this->elements) {
		element->draw();
	}
	EndMode2D();
	EndDrawing();
	
}

void Engine::endGame() {
	this->gameRunning = false;
	CloseWindow();
}

void Engine::loop() {
	while (this->gameRunning) {
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
	this->camera.target = Vector2{ 0,0 };
	this->camera.offset = Vector2{ 0,0 };
	this->camera.rotation = 0.0f;
	this->camera.zoom = 1.0f;
	InitWindow(width, height, "Gunchess");
	for (GameElement* a : this->elements) {
		a->init();
	}
}

void Engine::run() {
	this->setup();
	this->loop();
}

