#include "MovementAnex.h"
#include <raylib.h>

MovementAnex::MovementAnex()
{
	//Does the constructor stuff
}

void MovementAnex::moveToNewPosi(Character* character, float speed) {
	Vector2 posi = character->getPosi();
	while (posi.x != this->lastPosi.x && posi.y != this->lastPosi.y)
	{
		posi.x += (posi.x - this->lastPosi.x) * GetFrameTime();
		posi.y += (posi.y - this->lastPosi.y) * GetFrameTime();
	}
	character->setPosi(posi);
}

void MovementAnex::execute(Character* character) {
	this->moveToNewPosi(character, 0.5f);
}


