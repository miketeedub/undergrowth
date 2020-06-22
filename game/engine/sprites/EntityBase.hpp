
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
	EntityBase(Textures::TextureValue* texture) :
		textureInfo_(texture)
		, animation_(texture)
	{};

	~EntityBase();


	void updateAnimation(float deltaTime);

	Textures::TextureValue* textureInfo_;
	Animation animation_;
};


#endif
