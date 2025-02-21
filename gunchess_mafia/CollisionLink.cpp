#include "CollisionLink.h"

bool* CollisionLink::checkIfCollided(CollisionMap colMap, Character character)
{
	std::vector<std::pair<int, int>> collisions = colMap.getCollisions();

	bool* unit = new bool;
	Vector2 characterPosition = character.getPosi();

	for (std::pair<int, int> col : collisions) {
		*unit |= (characterPosition.x == col.first && characterPosition.y == col.second);
	}

	this->conditions.push_back(unit);
}

void CollisionLink::determineCourse(GameElement* element, ActionType action) {
	bool isSatisfied = false;
	for (bool* condition : this->conditions) {
		isSatisfied &= *condition;
	}

	if (!isSatisfied) {
		switch (action)
		{
		case ActionType::initAction:
			element->init();
			break;
		case ActionType::updateAction:
			element->update();
			break;
		case ActionType::drawAction:
			element->draw();
			break;
		default:
			break;
		}
	}
}
