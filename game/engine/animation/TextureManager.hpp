	
#include <SFML/Graphics.hpp>
#include <memory>



struct TextureManager
{
	

public:
	TextureManager()
	{
		playerTexture.loadFromFile("../sprites/test_guy.png");
	};

	sf::Texture playerTexture;
	
};