#include "MovementAnex.h"
#include <raylib.h>
#include <math.h>
#include <bit>

int MovementAnex::updateElementPosi(Character* character) {
	Vector2 posi = character->getPosi();
	switch (GetKeyPressed())
	{
	case KEY_A:
		posi.x--;
		break;
	case KEY_D:
		posi.x++;
		break;
	case KEY_W:
		posi.y--;
		break;
	case KEY_S:
		posi.y++;
		break;
	case KEY_E:
		character->rotateLeft();
		break;
	case KEY_Q:
		character->rotateRight();
		break;
	default:
		break;
	}
	character->setPosi(posi);

	return true;
}

int MovementAnex::execute(Character* character) {
	
	if (this->locked)
		return 0;
	else if (this->canceled)
		return -1;
	
	return this->updateElementPosi(character);
}


