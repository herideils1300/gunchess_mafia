#pragma once
#include <functional>

template<class T>
class Generator
{
protected:
	std::vector<T> values;
public:
	void generateRandom(); // Generates random values;
	void generateWithException(std::function<T> function); // Generates values but gets a function that will make an exception (this is a wraper for this function.);
	void unclug(T value); //Fixes the generation so that the value picked is connected and forms a path;
	std::vector<T> returnValues() { return this->values; };
};

