#include "Scene.h"
#include <vector>

Scene::Scene(std::vector<Layer*> layers)
{
	this->layers = layers;
	this->shraedParams = new Shared();
	this->camera = Camera2D();
	// TODO: Later calculate parameters based on layers.
	this->camera.zoom = 1.0f;
	this->camera.rotation = 0.0f;
	this->camera.target = Vector2{ 0,0 };
	this->camera.offset = Vector2{ 0,0 };
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

Camera2D Scene::bringCamera()
{
	return this->camera;
}

std::vector<GameElement*> Scene::bringAll()
{
	std::vector<GameElement*> gameElements = std::vector<GameElement*>();

	for (Layer* layer : this->layers) {
		for (GameElement* element : layer->giveAllElements()) {
			gameElements.push_back(element);
		}
	}

	return gameElements;
}
