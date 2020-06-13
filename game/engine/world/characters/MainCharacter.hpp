
#ifndef MAIN_CHARACTER_SPRITE
#define MAIN_CHARACTER_SPRITE

#include <iostream>
#include "../EntityBase.hpp"

class MainCharacter : public EntityBase
{
public:
	MainCharacter(TextureManager* textureMgr)
    : EntityBase(textureMgr)
	{};
	MainCharacter(sf::Texture* texture, TextureManager& textures, TextureEnum textureType, sf::Vector2u imageCount, float switchTime) :
		EntityBase(Animation(texture, imageCount, switchTime), &textures, textureType)
	{
		this->setTexture(*texture);
		this->animation_.setIndex(0, 1);
	};
	

	
};

#endif
