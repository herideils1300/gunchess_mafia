#pragma once
#include "Anex.h"
#include "Character.h"
#include "Boss.h"
#include <raylib.h>
class MovementAnex : public Anex
{
private:
	int updateElementPosi(Character* character);
public:
	MovementAnex() {};
	int execute(Character* character) override;
};

