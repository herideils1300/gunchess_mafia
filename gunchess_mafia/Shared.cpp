#include "Shared.h"
#include "Layer.h"
#include "Anex.h"
Shared* Shared::operator*=(std::function<void(Layer*)> conditional)
{
	this->cancelConditionals.push_back(conditional);
	return this;
}

Shared* Shared::operator*=(std::vector<std::function<void(Layer*)>> conditionals)
{
	for (std::function<void(Layer*)> conditional : conditionals) {
		this->cancelConditionals.push_back(conditional);
	}

	return this;
}

Shared* Shared::operator+=(std::pair<const char*, std::any> tupleValue)
{
	this->values.insert(tupleValue);
	return this;
}

std::any Shared::operator[](const char* paramName)
{
	return this->values[paramName];
}



