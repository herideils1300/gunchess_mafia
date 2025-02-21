#include "Anex.h"

void Anex::lock(int providedPriority) {
	if (this->priority < providedPriority) {
		this->locked = true;
	}
}

void Anex::cancel()
{
	this->canceled = true;
}
