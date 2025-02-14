#include "Shared.h"
#include "Layer.h"

Shared* Shared::operator+(std::pair<const char*, std::any> tupleValue)
{
	this->values.insert(tupleValue);
	return this;
}

std::any Shared::getParam(const char* paramName)
{
	return this->values[paramName];
}



