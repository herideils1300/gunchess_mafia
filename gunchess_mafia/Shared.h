#pragma once
#include <vector>
#include <map>
#include <tuple>
#include "Layer.h"
#include <functional>
#include <any>
class Shared
{
private:
	std::map<const char*, std::any> values = std::map<const char*, std::any>();
	std::vector<std::function<void(Layer*)>> cancelConditionals = std::vector<std::function<void(Layer*)>>();
public:
	Shared* operator*=(std::function<void(Layer*)> conditional);
	Shared* operator*=(std::vector<std::function<void(Layer*)>> conditionals);
	Shared* operator+=(std::pair<const char*, std::any> tupleValue);
	std::any operator[](const char* paramName);
	std::vector<std::function<void(Layer*)>> getConditionals();

};

