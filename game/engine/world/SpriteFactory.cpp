#include "SpriteFactory.hpp"



EntityBase SpriteFactory::createSprite(SpriteTypes spriteType)
{
	switch (spriteType)
	{
	case MainCharacterType:
		return MainCharacter(textures_.getTexture(MainCharacter_Texture), sf::Vector2u(2, 1), 0.3f);
	}

}
