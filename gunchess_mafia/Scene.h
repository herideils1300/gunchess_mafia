#pragma once
#include <raylib.h>
#include <vector>
#include "Layer.h"
#include "GameElement.h"
#include "Shared.h"
class Scene
{
private:
	std::vector<Layer*> layers = std::vector<Layer*>();
	Shared* shraedParams = new Shared();
	Camera2D camera;
public:
	Scene(std::vector<Layer*> layers);
	void addLayer(Layer* gameElement);
	void addLayer(std::vector<Layer*> gameElements);
	void change(Scene newScene);
	Camera2D bringCamera();
	template <class T>
	std::vector<T*> bringAll();
	Shared* getSharedParams();
};

