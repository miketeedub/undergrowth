
#ifndef SPRITE_FACTORY

#define SPRITE_FACTORY

#include <SFML/Graphics.hpp>
#include "MainCharacter.hpp"
#include "SpriteEnum.hpp"
#include "TextureManager.hpp"
#include "EntityBase.hpp"
#include "TextureDefs.hpp"

class SpriteFactory 
{
public:
	SpriteFactory(Textures::TextureManager* characterTextures) :
		characterTextures_(characterTextures)
	{};



public:

	CharacterBase createSprite(CharacterSpriteTypes spriteType);
	Textures::TextureManager* characterTextures_;

};

#endif 
