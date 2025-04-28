#pragma once
#include "GameElement.h"
#include <utility>
class Block
{
protected:
	int xid = 0, yid  = 0;
	float x = 0.0f, y  = 0.0f;
	float width = 32.0f, height = 32.0f;
	GameElement* element = nullptr;
public:
	std::pair<int, int> getICoords() { return std::pair<int, int>{ xid, yid }; };
	void setICoords(std::pair<int, int> coords) { this->xid = coords.first; this->yid = coords.second; };
	Vector2 getFCoords() { return Vector2{ x, y }; };
	void setFCoords(Vector2 coords) { this->x = coords.x; this->y = coords.y; };
	Block(float x, float y) { this->x = x; this->y = y; };
	Block(int xi, int yi) { this->xid = xi; this->yid = yi; };
	std::pair<int, int> getCoords() { return std::pair<int, int>(xid, yid); };
	bool contains() { return this->element != nullptr; };
	virtual void affect() {};

};

