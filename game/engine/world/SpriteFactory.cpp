#include "SpriteFactory.hpp"



EntityBase SpriteFactory::createSprite(SpriteTypes spriteType)
{
	switch (spriteType)
	{
	case MainCharacterType:
		return MainCharacter(textures_->getTexture(Textures::MainCharacter_Texture));
	}

}
