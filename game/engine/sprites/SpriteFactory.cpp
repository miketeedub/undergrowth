#include "SpriteFactory.hpp"


CharacterBase SpriteFactory::createSprite(CharacterSpriteTypes spriteType)
{
	switch (spriteType)
	{
	case MainCharacterType:
		return MainCharacter(characterTextures_->getTexture(Textures::MainCharacter_Texture));
	}
}
