#ifndef PLANT_BASE_H
#define PLANT_BASE_H


#include "../EntityBase.hpp"
#include "TextureDefs.hpp"


class PlantBase : public EntityBase
{
public:
	PlantBase()
		: EntityBase()
	{};
	PlantBase(Textures::TextureValue* texture) :
		EntityBase(texture)
	{};

	void setAnimationSlice(Textures::PlantMovementAnimations animation, float animationTime, bool oscillateFrames) override;
	//void setAnimationSlice(Textures::CharacterMovementAnimations animation, float animationTime, bool oscillateFrames) override {};


};

#endif // !PLANT_BASE_H