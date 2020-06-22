
#include "Animation.hpp"



Animation::Animation(Textures::TextureValue* texture_)
{
	totalTime = 0.0f;
	currentImage.x = 0;
	imageFrames_ = texture_->textureInfo->getFrameDims();
	uvRect.width = texture_->texture.getSize().x / float(imageFrames_.x);
	uvRect.height = texture_->texture.getSize().y / float(imageFrames_.y);
	currentTextureName_ = texture_->textureInfo->getName();
}


void Animation::releaseTexture(void)
{
	
}


Animation::~Animation()
{
}


void Animation::setAnimationSlice(Textures::SpriteSheetSlice slice, float animationTime, bool oscillateFrames)
{
	animationSlice_.start = slice.start;
	animationSlice_.end = slice.finish;
	animationSlice_.animationTime = animationTime;
	animationSlice_.current = slice.start;
	animationSlice_.oscillateFrames = oscillateFrames;
}



void Animation::update(float deltaTime)
{
	totalTime += deltaTime;

	if (totalTime >= animationSlice_.animationTime)
	{
		totalTime -= animationSlice_.animationTime;
		currentImage.y = static_cast<int> (animationSlice_.current / imageFrames_.x);
		currentImage.x = animationSlice_.current % imageFrames_.x;

		if (animationSlice_.oscillateFrames)
		{

			if (animationSlice_.current >= animationSlice_.end)
			{
				animationSlice_.iterateIndexBackwards = true;
			}
			else if (animationSlice_.current <= animationSlice_.start)
			{
				animationSlice_.iterateIndexBackwards = false;
			}
			(animationSlice_.iterateIndexBackwards) ? animationSlice_.current-- : animationSlice_.current++;
		}
		else
		{
			if (animationSlice_.current >= animationSlice_.end)
			{
				animationSlice_.current = animationSlice_.start;
			}
			else
			{
				animationSlice_.current++;
			}
		}
	}

	uvRect.left = currentImage.x * uvRect.width;
	uvRect.top = currentImage.y * uvRect.height;
}
