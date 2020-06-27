#ifndef TEXTURE_MANAGER_H
#define TEXTURE_MANAGER_H


#include <SFML/Graphics.hpp>
#include "Textures.hpp"

namespace Textures {

	
	class TextureValue
	{
	public:
		TextureValue()
		{};
		TextureValue(TextureInfo* textureInfo) :
			 textureInfo(textureInfo)
			, count_(1)
		{
			if (texture.loadFromFile(textureInfo->getTexturePath()))
			{}
			else
			{
				//TODO: throw
			}	
		};

		sf::Texture texture;
		TextureInfo* textureInfo;
		//count for number of active sprites using texture
		int count_;

		~TextureValue()
		{};
	};


	class TextureManager
	{
	public:
		TextureManager()
		{};

		TextureValue* getTexture(SpriteNames texture);

		bool createTexture(SpriteNames textureName);

		void spriteReleaseTexture(SpriteNames textureName);
	
	private:
		Textures textures_;

		std::map<SpriteNames, TextureValue> textureMap_;


	};

	

}
#endif // !TEXTURE_MANAGER_H
