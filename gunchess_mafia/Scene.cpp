#include "Scene.h"
#include <vector>

Scene::Scene(std::vector<Layer*> layers, Camera2D camera)
{
	this->layers = layers;
	this->shraedParams = new Shared();
	this->camera = camera;
}

void Scene::addLayer(Layer* layer) {
	this->layers.push_back(layer);
}

void Scene::addLayer(std::vector<Layer*> layers) {
	for (Layer* layer : layers) {
		this->layers.push_back(layer);
	}
}

void Scene::change(Scene newScene) {
	*this = newScene;
}

std::vector<GameElement*> Scene::bringAll()
{
	//Thinking if I will use this in the loop or in setup...
	std::vector<GameElement*> gameElements = std::vector<GameElement*>();

	for (Layer* layer : this->layers) {
		for (GameElement* element : layer->giveAllElements()) {
			gameElements.push_back(element);
		}
	}

	return gameElements;
}
