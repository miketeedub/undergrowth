#include "TextureManager.hpp"

namespace Textures
{

	TextureValue* TextureManager::getTexture(TextureNames textureName)
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


	bool TextureManager::createTexture(TextureNames textureName)
	{
		TextureValue texture(textures_.getTexture(textureName));

		textureMap_[textureName] = texture;

		return true;
		
	}

	void TextureManager::spriteReleaseTexture(TextureNames textureName)
	{
		textureMap_[textureName].count_--;
		if (textureMap_[textureName].count_ == 0)
		{
			textureMap_.erase(textureName);
		}
	}


}