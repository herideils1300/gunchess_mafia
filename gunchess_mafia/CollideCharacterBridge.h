#pragma once
#include "Bridge.h"
#include "Anex.h"
#include "Layer.h"

class CollideCharacterBridge : public Bridge
{
protected:
	void condition(Character* pl, Layer el);
public:
	void assertTrue(Anex* anex) override;
};

