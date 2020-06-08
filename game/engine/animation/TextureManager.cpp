#include "TextureManager.hpp"

sf::Texture* TextureManager::getTexture(TextureEnum textureName)
{
	if (textureMap_.find(textureName) != textureMap_.end())
	{
		textureMap_[textureName].count_++;
		return textureMap_[textureName].texture_;
	}
	else
	{
		return loadTexture(textureName, MAIN_CHARACTER_PATH);
		 

	}
}

sf::Texture* TextureManager::loadTexture(TextureEnum textureName, std::string path)
{
	
	sf::Texture* playerTexture = new sf::Texture();
	TextureValue texture(playerTexture);


	if (playerTexture->loadFromFile(path))
	{
		textureMap_[textureName] = texture;
		return playerTexture;
	}
}
