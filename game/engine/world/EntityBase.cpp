
#include "EntityBase.hpp"

EntityBase::~EntityBase()
{
//TODO: use like an event manager or something to release texture, dont access texture manager directly
	textures_->spriteReleaseTexture(currentTexture_);
}

void EntityBase::update(int row, float deltaTime)
{
	animation_.update(deltaTime);
	setTextureRect(animation_.uvRect);
}
