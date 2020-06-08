#include "SpriteFactory.hpp"



EntityBase SpriteFactory::createSprite(SpriteTypes spriteType)
{
	switch (spriteType)
	{
	case MainCharacterType:
		return MainCharacter(&textures_.playerTexture, sf::Vector2u(2, 1), 0.3f);
	}



}
