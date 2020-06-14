#include "TextureManager.hpp"

namespace Textures {
	TextureValue* TextureManager::getTexture(TextureEnum textureName)
	{
		if (textureMap_.find(textureName) != textureMap_.end())
		{
			textureMap_[textureName].count_++;
			return &textureMap_[textureName];
		}
		else
		{
			if (loadTexture(textureName))
			{
				getTexture(textureName);
			}
			else
			{
				//TODO: exception handling
			}

		}
	}

	bool TextureManager::loadTexture(TextureEnum textureName)
	{

		sf::Texture* playerTexture = new sf::Texture();
		TextureValue texture(playerTexture, textureInfo_.getFrameDims(textureName));


		if (playerTexture->loadFromFile(textureInfo_.getPath(textureName)))
		{
			textureMap_[textureName] = texture;
			return true;
		}
		else
		{
			return false;
		}
	}

	void TextureManager::spriteReleaseTexture(TextureEnum textureName)
	{
		textureMap_[textureName].count_--;
		if (textureMap_[textureName].count_ == 0)
		{
			textureMap_.erase(textureName);
		}
	}


}