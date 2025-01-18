#include <iostream>
#include <raylib.h>
#include "Engine.h"
#include "Boss.h"
#include <fstream>
int main() {
	std::vector<GameElement*> elements = std::vector<GameElement*>{
		new Boss()
	};
	Engine engine = Engine();
	engine.addElement(elements);



	engine.run();

	

	return 0;
}