#ifndef TEXTURE_MANAGER_H
#define TEXTURE_MANAGER_H


#include <SFML/Graphics.hpp>
#include "TextureDefs.hpp"

struct TextureValue
{
	TextureValue()
	{};
	TextureValue(sf::Texture* texture) :
		texture_(texture)
		,count_(1)
	{};

	sf::Texture* texture_;
	//count for number of active sprites using texture
	
	int count_;
	~TextureValue()
	{
	};
};


class TextureManager
{
public:
	TextureManager()
	{
		playerTexture.loadFromFile("../spriteImgs/test_guy.png");
	};
	//TODO: load textures dynamically as needed
	sf::Texture playerTexture;
	
	std::map<TextureEnum, TextureValue> textureMap_;


	sf::Texture* getTexture(TextureEnum texture);

	sf::Texture* loadTexture(TextureEnum textureName, std::string path);

	void spriteReleaseTexture(TextureEnum textureName);
};

#endif // !TEXTURE_MANAGER_H
