#pragma once
#include <raylib.h>
#include <vector>
#include "Layer.h"
#include "GameElement.h"
#include "Shared.h"
class Scene
{
// Scene is like a scene in a video game. Layers are group of elements.
private:
	std::vector<Layer*> layers = std::vector<Layer*>();
	Shared* shraedParams = new Shared();
	Camera2D camera;
public:
	Scene(std::vector<Layer*> layers, Camera2D camera);
	void addLayer(Layer* gameElement);
	void addLayer(std::vector<Layer*> gameElements);
	void change(Scene newScene);
	std::vector<GameElement*> bringAll();
};

