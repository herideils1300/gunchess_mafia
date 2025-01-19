#pragma once
#include <raylib.h>
#include <vector>
#include "GameElement.h"
class Character
{
protected:
	Vector2* posi = new Vector2{ 0,0 };
	int health = 1;
	bool isPlayer = false;
	bool isAlive = true;
public:
	Vector2* getPosi() { return this->posi; };
	void setPosi(Vector2* posi) { this->posi = posi; };
	int getHealth() { return this->health; };
	void setHealth(int health) { this->health = health; };
	bool getIsPlayer() { return this->isPlayer; };
	void setIsPlayer(bool isPlayer) { this->isPlayer = isPlayer; };
	bool getIsAlive() { return this->isAlive; };
	void setIsAlive(bool isAlive) { this->isAlive = isAlive; };
};