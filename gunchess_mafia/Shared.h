#pragma once
#include <vector>
#include <map>
#include <tuple>
#include "Layer.h"
#include <any>
class Shared
{
private:
	std::map<const char*, std::any> values = std::map<const char*, std::any>();
public:
	Shared* operator+(std::pair<const char*, std::any> tupleValue);
	std::any getParam(const char* paramName);
};

