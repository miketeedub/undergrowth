
#include "EntityBase.hpp"

EntityBase::~EntityBase()
{
	textures_->spriteReleaseTexture(currentTexture_);
}

void EntityBase::update(int row, float deltaTime)
{
	animation_.update(row, deltaTime);
	setTextureRect(animation_.uvRect);
}
