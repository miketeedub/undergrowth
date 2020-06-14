
#include "EntityBase.hpp"

EntityBase::EntityBase(Textures::TextureValue * texture)
{
	animation_ = Animation(texture);
	texture->count_++;
}

EntityBase::~EntityBase()
{
	
}

void EntityBase::update(float deltaTime)
{
	animation_.update(deltaTime);
	setTextureRect(animation_.uvRect);
}
