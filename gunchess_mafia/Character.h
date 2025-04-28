#pragma once
#include <raylib.h>
#include "Rotation.h"
struct Character
{
protected:
	Vector2 posi = Vector2{ 0,0 };
	Vector2 prevPosi = Vector2{ 0,0 };
	Rotation rotation = Rotation::Left;
	int health = 1;
	bool isPlayer = false;
	bool isAlive = true;
public:
	Vector2 getPosi() { return this->posi; };
	void setPosi(Vector2 posi) { this->posi = posi; };
	int getHealth() { return this->health; };
	void setHealth(int health) { this->health = health; };
	bool getIsPlayer() { return this->isPlayer; };
	void setIsPlayer(bool isPlayer) { this->isPlayer = isPlayer; };
	bool getIsAlive() { return this->isAlive; };
	void setIsAlive(bool isAlive) { this->isAlive = isAlive; };
	void rotateLeft() { int rotInt = (int)this->rotation; rotInt++; this->rotation = (Rotation)rotInt; };
	void rotateRight() { int rotInt = (int)this->rotation; rotInt--; this->rotation = (Rotation)rotInt; };
	void undoMovement();
};