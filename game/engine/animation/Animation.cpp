
#include "Animation.hpp"


Animation::Animation(Textures::TextureValue* texture_)
{
	totalTime = 0.0f;
	currentImage.x = 0;
	imageFrames_ = texture_->spriteSheetFrames;
	uvRect.width = texture_->texture->getSize().x / float(imageFrames_.x);
	uvRect.height = texture_->texture->getSize().y / float(imageFrames_.y);
	currentTextureName_ = texture_->textureName;
}

void Animation::releaseTexture(void)
{
	
}


Animation::~Animation()
{
}

void Animation::setAnimationIndex(int startIndex, int endIndex, float animationTime)
{
	index_.start = startIndex;
	index_.end = endIndex;
	index_.animationTime = animationTime;
	index_.current = startIndex;
}


void Animation::update(float deltaTime)
{
	
	totalTime += deltaTime;

	if (totalTime >= index_.animationTime)
	{
		totalTime -= index_.animationTime;
		currentImage.y = static_cast<int> (index_.current / imageFrames_.x);
		currentImage.x = index_.current % imageFrames_.x;
		
		index_.current++;

		if (index_.current > index_.end)
		{
			index_.current = index_.start;
		}
		
	}

	uvRect.left = currentImage.x * uvRect.width;
	uvRect.top = currentImage.y * uvRect.height;
}
