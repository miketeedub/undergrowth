
#ifndef SOME_PLANT_SPRITE
#define SOME_PLANT_SPRITE
#include "Animation.hpp"
#include <iostream>
#include "TextureManager.hpp"
#include "PlantBase.hpp"


class SomePlant : public PlantBase
{
public:
	SomePlant()
	{};

	SomePlant(Textures::TextureValue* texture) :
		PlantBase(texture)
	{
		this->setTexture(texture->texture);
	};

};

#endif
