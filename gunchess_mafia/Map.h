#pragma once
#include <raylib.h>
#include <string>
#include <vector>
struct Map {
protected:
	//Protected values that are being accessed
	Texture2D nonColTexture;
	Texture2D colTexture;
	std::string skeleton;
	std::vector<std::string> layers = std::vector<std::string>();
public:
	//Getters and setters for the sturcture values
	Texture2D getNonColTexture() { return this->nonColTexture; };
	void setNonColTexture(Texture2D nonColTexture) { this->nonColTexture = nonColTexture; };
	Texture2D getColTexture() { return this->colTexture; };
	void setColTexture(Texture2D colTexture) { this->colTexture = colTexture; };
	void setSkeleton(const char* skeleton) { this->skeleton = skeleton; };
};
