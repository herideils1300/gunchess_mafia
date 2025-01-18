#pragma once
#include <raylib.h>
#include <vector>
#include "GameElement.h"
class Character
{
protected:
	Vector2 posi = Vector2{ 0,0 };
	int health = 1;
	bool isPlayer = false;
	bool isAlive = true;
public:
	Vector2 getPosi();
	void setPosi(Vector2 posi);
	int getHealth();
	void setHealth(int health);
	bool getIsPlayer();
	void setIsPlayer(bool isPlayer);
	bool getIsAlive();
	void setIsAlive(bool isAlive);

};

