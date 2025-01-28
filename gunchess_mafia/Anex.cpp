#include "Anex.h"

Anex::Anex(int priority = 0) {
	this->priority = priority;
}

void Anex::lock(int providedPriority) {
	if (this->priority < providedPriority) {
		this->locked = true;
	}
}