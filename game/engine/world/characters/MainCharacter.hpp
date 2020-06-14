
#ifndef MAIN_CHARACTER_SPRITE
#define MAIN_CHARACTER_SPRITE
#include <filesystem>
#include <direct.h>
#include "Animation.hpp"
#include <iostream>
#include "../EntityBase.hpp"

class MainCharacter : public EntityBase
{
public:
	MainCharacter(TextureManager* textureMgr)
    : EntityBase(textureMgr)
	{};
	MainCharacter(sf::Texture* texture, TextureManager& textures, TextureEnum textureType, sf::Vector2u imageCount) :
		EntityBase(Animation(texture, imageCount), &textures, textureType)
		, walkRight_(0,6,.3f)
	{
		this->setTexture(*texture);
		this->animation_.setIndex(0, 6, .3f);

	};
	
	AnimationIndex walkRight_;
};

#endif
