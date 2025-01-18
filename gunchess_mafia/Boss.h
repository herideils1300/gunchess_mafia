#pragma once
#include <raylib.h>
#include "Rotation.h"
#include "Character.h"
#include "GameElement.h"

class Boss : public Character, public GameElement
{
private:
	Rotation rotation = Rotation::Left;
	Texture2D texture;
public:
	Boss();
	void init(int winWidth, int winHeight) override;
	bool update() override;
	void draw() override;
};

