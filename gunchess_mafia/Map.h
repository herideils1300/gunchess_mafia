#pragma once
#include <raylib.h>
#include <string>
#include <vector>
#include "Block.h"
struct Map {
protected:
	//Protected values that are being accessed
	Texture2D nonColTexture = Texture2D();
	Texture2D colTexture = Texture2D();
	std::vector<Block*> blockArray;
public:
	//Getters and setters for the sturcture values
	Texture2D getNonColTexture() { return this->nonColTexture; };
	void setNonColTexture(Texture2D nonColTexture) { this->nonColTexture = nonColTexture; };
	Texture2D getColTexture() { return this->colTexture; };
	void setColTexture(Texture2D colTexture) { this->colTexture = colTexture; };
	virtual void mapBlocks(std::string skeleton) {};
};
