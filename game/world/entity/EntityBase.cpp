
#include "EntityBase.hpp"




void EntityBase::test(void)
{

	sf::Texture playerTexture;
	playerTexture.loadFromFile("../sprites/test_guys.png");
	shape_->setTexture(&playerTexture);
	
}

void EntityBase::createShape(float radius)
{
	shape_ = std::make_unique < sf::CircleShape>(radius);
}

void EntityBase::createShape(sf::Vector2f size)
{
	shape_= std::make_unique < sf::RectangleShape>(size);
}
