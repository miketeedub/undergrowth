
#ifndef MAIN_CHARACTER_SPRITE
#define MAIN_CHARACTER_SPRITE

#include <iostream>
#include "../EntityBase.hpp"

class MainCharacter : public EntityBase
{
public:
	MainCharacter()
	{};
	MainCharacter(sf::Texture* texture, sf::Vector2u imageCount, float switchTime) :
		EntityBase(Animation(texture, imageCount, switchTime))
	{
		this->setTexture(*texture);
	};
	
};

#endif
