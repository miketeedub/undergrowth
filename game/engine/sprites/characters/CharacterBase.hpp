#ifndef CHARACTER_BASE_H
#define CHARACTER_BASE_H


#include "../EntityBase.hpp"
#include "TextureDefs.hpp"


class CharacterBase : public EntityBase
{
public:
	CharacterBase()
		: EntityBase()
	{};
	CharacterBase(Textures::TextureValue* texture) :
		EntityBase(texture)
	{};


	void setAnimationSlice(Textures::CharacterMovementAnimations animation, float animationTime, bool oscillateFrames) override;
	//void setAnimationSlice(Textures::PlantMovementAnimations animation, float animationTime, bool oscillateFrames)override {};

};

#endif // !CHARACTER_BASE_H