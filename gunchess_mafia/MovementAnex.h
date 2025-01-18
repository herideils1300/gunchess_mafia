#pragma once
#include "Character.h"
#include <raylib.h>
class MovementAnex : public Anex
{
private:
	Vector2 lastPosi = Vector2{ 0,0 };
	void moveToNewPosi(Vector2* playerPosi, float speed);
public:
	MovementAnex();
	void execute(Character* character) override;
};

