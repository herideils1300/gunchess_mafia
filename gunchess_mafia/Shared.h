#pragma once
#include <vector>
#include <map>
#include <tuple>
#include "Layer.h"
#include "Bridge.h"
#include <functional>
#include <any>
class Shared
{
private:
	std::map<std::string, Bridge*> bridges = std::map<std::string, Bridge*>();
public:
	Shared* operator+=(Bridge* bridge);
	std::map<std::string, Bridge*> getBridges() { return this->bridges; };
	void assertBridges();

};

