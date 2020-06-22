
#include "EntityBase.hpp"


EntityBase::~EntityBase()
{
	
}


void EntityBase::updateAnimation(float deltaTime)
{
	animation_.update(deltaTime);
	setTextureRect(animation_.uvRect);
}

