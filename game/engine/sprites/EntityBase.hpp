
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
	EntityBase(Textures::TextureValue* texture);

	~EntityBase();

	Animation animation_;
	
	
	virtual void update(float deltaTime);
	
	void setAnimationIndex(int start, int end, float animationSpeed);

	
};


#endif
