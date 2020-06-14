
#ifndef CHARACTER_BASE_CLASS_H
#define CHARACTER_BASE_CLASS_H


#include <SFML/Graphics.hpp>
#include "Animation.hpp"
#include "TextureManager.hpp"
#include "TextureDefs.hpp"


class EntityBase : public sf::Sprite
{
public: 	
	EntityBase()
	{};
	EntityBase(Animation animation) :
		animation_(animation)
	{}

	~EntityBase();

	Animation animation_;
	virtual void update(int row, float deltaTime);
	
};


#endif
