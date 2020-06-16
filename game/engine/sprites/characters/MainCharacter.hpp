
#ifndef MAIN_CHARACTER_SPRITE
#define MAIN_CHARACTER_SPRITE
#include "Animation.hpp"
#include <iostream>
#include "CharacterBase.hpp"
#include "TextureManager.hpp"

enum MainCharacterMovementAnimation
{
	Walk_Up,
	Walk_Down,
	Walk_Left,
	Walk_Right,
	Jump_Up,
	Jump_Down,
	Jump_Left,
	Jump_Right
};



class MainCharacter : public CharacterBase
{
public:
	MainCharacter()
	{};

	MainCharacter(Textures::TextureValue* texture) :
		CharacterBase(texture)
		
	{
		this->setTexture(*texture->texture);
	};
	

	void updateAnimationDirection(MainCharacterMovementAnimation direction);
	
};

#endif
