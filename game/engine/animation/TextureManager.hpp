#ifndef TEXTURE_MANAGER_H
#define TEXTURE_MANAGER_H


#include <SFML/Graphics.hpp>



struct TextureManager
{
	

public:
	TextureManager()
	{
		playerTexture.loadFromFile("../spriteImgs/test_guy.png");
	};

	sf::Texture playerTexture;
	
};

#endif // !TEXTURE_MANAGER_H
