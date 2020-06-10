
#ifndef CHARACTER_BASE_CLASS_H
#define CHARACTER_BASE_CLASS_H


#include <SFML/Graphics.hpp>
#include "Animation.hpp"
#include "TextureManager.hpp"
#include "TextureDefs.hpp"


class EntityBase : public sf::Sprite
{
public: 	
	EntityBase(TextureManager* textureMgr):
		textures_(textureMgr)
	{};
	EntityBase(Animation animation, TextureManager* textures, TextureEnum currentTexture) :
		animation_(animation)
		, textures_(textures)
		, currentTexture_(currentTexture)
	{}

	~EntityBase();

	Animation animation_;
	virtual void update(int row, float deltaTime);
	TextureEnum currentTexture_;
	TextureManager* textures_;
};


#endif
