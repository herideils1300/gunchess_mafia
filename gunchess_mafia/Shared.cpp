#include "Shared.h"
#include "Layer.h"
#include "Anex.h"


Shared* Shared::operator+=(Bridge* bridge)
{
	this->bridges.insert(std::pair<std::string, Bridge*>(typeid(bridge).name(), bridge));
	return this;
}

void Shared::assertBridges()
{
	for (std::pair<std::string, Bridge*> bridge : this->bridges) {
		bridge.second->assert();
	}
}
