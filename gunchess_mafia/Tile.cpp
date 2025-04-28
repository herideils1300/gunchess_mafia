#include "Tile.h"
#include <raylib.h>

void Tile::affect()
{
	DrawTexturePro(this->texture, Rectangle{0, 0, this->width, this->height}, Rectangle{ this->x, this->y, this->width, this->height }, Vector2{ this->x, this->y }, 0.0f, WHITE);
}
