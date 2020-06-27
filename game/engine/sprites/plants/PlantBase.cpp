#include "PlantBase.hpp"

void PlantBase::setAnimationSlice(Textures::PlantMovementAnimations animation, float animationTime, bool oscillateFrames)
{


	animation_.setAnimationSlice(textureInfo_->textureInfo->getAnimationSlice(animation), animationTime, oscillateFrames);
}