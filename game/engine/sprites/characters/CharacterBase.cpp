#include "CharacterBase.hpp"



void CharacterBase::setAnimationSlice(Textures::CharacterMovementAnimations animation, float animationTime, bool oscillateFrames)
{
	
	
	animation_.setAnimationSlice(textureInfo_->textureInfo->getAnimationSlice(animation), animationTime, oscillateFrames);
}

