
#ifndef MAIN_CHARACTER_SPRITE
#define MAIN_CHARACTER_SPRITE

#include <iostream>
#include "../EntityBase.hpp"

class MainCharacter : public EntityBase
{
public:
	MainCharacter()
	{};
	MainCharacter(sf::Texture* texture, TextureManager& textures, TextureEnum textureType, sf::Vector2u imageCount, float switchTime) :
		EntityBase(Animation(texture, imageCount, switchTime), &textures, textureType)
	{
		this->setTexture(*texture);
	};
	

	
};

#endif
