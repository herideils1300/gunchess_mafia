#include "Boss.h"
#include <string>
#include <iostream>
#include <vector>
#include "Anex.h"
#include "MovementAnex.h"

Boss::Boss() {
}

void Boss::init(int winWidth, int winHeight) {
	this->texture = LoadTexture("../../assets/orange_boss.png");
	this->anexes = std::vector<Anex*>{
		new MovementAnex()
	};
}

bool Boss::update() {
	for (Anex* anex : this->anexes) {
		anex->execute(this);
	}
	/*switch (GetKeyPressed())
	{
	case KEY_A:
		this->posi.x--;
		break;
	case KEY_D:
		this->posi.x++;
		break;
	case KEY_W:
		this->posi.y--;
		break;
	case KEY_S:
		this->posi.y++;
		break;
	default:
		break;
	}*/
}

void Boss::draw() {
	Rectangle source = Rectangle{0,0,32,32};
	Rectangle destination = Rectangle{this->posi.x * 32.0f + 16.0f, this->posi.y * 32.0f + 16.0f,32,32};

	Vector2 vec = Vector2{ 16.0f , 16.0f };

	DrawTexturePro(this->texture, source, destination, vec, 90.0f * (this->rotation - 1), WHITE);
}
