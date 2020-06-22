
#ifndef MAIN_CHARACTER_SPRITE
#define MAIN_CHARACTER_SPRITE
#include "Animation.hpp"
#include <iostream>
#include "CharacterBase.hpp"
#include "TextureManager.hpp"





class MainCharacter : public CharacterBase
{
public:
	MainCharacter()
	{};

	MainCharacter(Textures::TextureValue* texture) :
		CharacterBase(texture)
		
	{
		this->setTexture(texture->texture);
	};

};

#endif
