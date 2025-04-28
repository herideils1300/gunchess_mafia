#pragma once
#include "Block.h"
class Tile : public GameElement, public Block
{
private:
	Texture2D texture;
public:
	Tile(int xi, int yi, Texture2D texture) : Block(xi, yi) { this->xid = xi; this->yid = yi; this->texture = texture; }
	void affect() override;
};

