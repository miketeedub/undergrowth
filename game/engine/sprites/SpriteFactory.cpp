#include "SpriteFactory.hpp"
#include "SomePlant.hpp"
#include "Textures.hpp"

EntityBase* SpriteFactory::createSprite(Textures::SpriteNames spriteType)
{
	switch (spriteType)
	{
	case Textures::MainCharacter:
		return new MainCharacter(characterTextures_->getTexture(Textures::MainCharacter));

	case Textures::SomePlant:
		return new SomePlant(characterTextures_->getTexture(Textures::SomePlant));
	}
}
