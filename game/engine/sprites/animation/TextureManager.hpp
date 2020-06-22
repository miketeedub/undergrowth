#ifndef TEXTURE_MANAGER_H
#define TEXTURE_MANAGER_H


#include <SFML/Graphics.hpp>
#include "TextureDefs.hpp"

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

		TextureValue* getTexture(TextureNames texture);

		bool createTexture(TextureNames textureName);

		void spriteReleaseTexture(TextureNames textureName);
	
	private:
		Textures textures_;

		std::map<TextureNames, TextureValue> textureMap_;


	};

	

}
#endif // !TEXTURE_MANAGER_H
