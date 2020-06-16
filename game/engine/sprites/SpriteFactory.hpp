
#ifndef SPRITE_FACTORY

#define SPRITE_FACTORY

#include <SFML/Graphics.hpp>
#include "MainCharacter.hpp"
#include "SpriteEnum.hpp"
#include "TextureManager.hpp"
#include "EntityBase.hpp"

class SpriteFactory 
{
public:
	SpriteFactory(Textures::TextureManager* textures) :
		textures_(textures)
	{};



public:
	EntityBase createSprite(SpriteTypes spriteType);
	Textures::TextureManager* textures_;

};

#endif 
