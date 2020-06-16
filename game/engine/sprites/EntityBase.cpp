
#include "EntityBase.hpp"

EntityBase::EntityBase(Textures::TextureValue * texture)
{
	animation_ = Animation(texture);
	texture->count_++;
}

EntityBase::~EntityBase()
{
	
}

void EntityBase::setAnimationIndex(int startFrame, int endFrame, float animationSpeed)
{
	animation_.setAnimationIndex(startFrame, endFrame, animationSpeed);
}

void EntityBase::update(float deltaTime)
{
	animation_.update(deltaTime);
	setTextureRect(animation_.uvRect);
}
