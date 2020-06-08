
#include "EntityBase.hpp"

void EntityBase::update(int row, float deltaTime)
{
	animation_.update(row, deltaTime);
	setTextureRect(animation_.uvRect);
}
