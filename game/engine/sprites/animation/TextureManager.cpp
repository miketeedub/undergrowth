#include "TextureManager.hpp"

namespace Textures
{

	TextureValue* TextureManager::getTexture(SpriteNames textureName)
	{
		if (textureMap_.find(textureName) != textureMap_.end())
		{
			textureMap_[textureName].count_++;
			return &textureMap_[textureName];
		}
		else
		{
			if (createTexture(textureName))
			{
				getTexture(textureName);
			}
			else
			{
				//TODO: exception handling
			}

		}
	}


	bool TextureManager::createTexture(SpriteNames textureName)
	{
		TextureValue texture(textures_.getTexture(textureName));

		textureMap_[textureName] = texture;

		return true;
		
	}

	void TextureManager::spriteReleaseTexture(SpriteNames textureName)
	{
		textureMap_[textureName].count_--;
		if (textureMap_[textureName].count_ == 0)
		{
			textureMap_.erase(textureName);
		}
	}


}