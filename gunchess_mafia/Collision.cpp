#include "Collision.h"

void Collision::affect()
{
	if (this->contains()) {
		((Character*)this->element)->undoMovement();
		this->element = nullptr;
	}
}
