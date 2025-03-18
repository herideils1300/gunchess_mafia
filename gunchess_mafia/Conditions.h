#pragma once
#include <vector>
#include <functional>
#include "Layer.h"


std::vector<std::function<void(Layer*)>> conditions = std::vector<std::function<void(Layer*)>>{
	[]() {},
};
