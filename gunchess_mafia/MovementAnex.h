#pragma once
#include "Anex.h"
#include "Character.h"
#include "Boss.h"
#include <raylib.h>
class MovementAnex : public Anex
{
private:
	bool updateElementPosi(Character* character);
public:
	MovementAnex() {};
	bool execute(Character* character) override;
};

