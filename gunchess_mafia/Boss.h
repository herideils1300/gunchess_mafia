#pragma once
#include <raylib.h>
#include "Rotation.h"
#include "Character.h"
#include "GameElement.h"

class Boss : public Character, public GameElement
{
private:
	Texture2D texture;
public:
	Boss();
	void init() override;
	bool update() override;
	void draw() override;
};

