#pragma once
#include "Block.h"
class Collision : public GameElement, public Block
{
private:
	bool isCollision = true;
public:
	Collision(int xi, int yi, bool isCollision) : Block(xi, yi) { this->xid = xi; this->yid = yi; this->isCollision = isCollision; };
	void affect() override;
};

