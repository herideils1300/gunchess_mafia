#pragma once
#include <any>
#include "Anex.h"
#include "GameElement.h"
class Bridge
{
protected:
	bool conditionVar = false;
public:
	virtual void assertFalse(Anex* anex) {};
	virtual void assertTrue(Anex* anex) {};
};

