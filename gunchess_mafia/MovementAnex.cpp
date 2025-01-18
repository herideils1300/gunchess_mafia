#include "MovementAnex.h"
#include <raylib.h>
void MovementAnex::moveToNewPosi(Vector2* playerPosi, float speed) {
	while (playerPosi->x != this->lastPosi.x && playerPosi->y != this->lastPosi.y)
	{
		playerPosi->x += (playerPosi->x - this->lastPosi.x);
		playerPosi->y += (playerPosi->y - this->lastPosi.y) * GetFrameTime();
	}
}

MovementAnex::MovementAnex()
{
	//Does the constructor stuff
}

void MovementAnex::execute(Character* element) {
	this->moveToNewPosi(&((Vector2)element->getPosi()), 0.5f);
}


