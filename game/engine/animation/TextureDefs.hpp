#ifndef TEXTURE_ENUM_H
#define TEXTURE_ENUM_H

namespace Textures
{

	enum TextureEnum
	{
		MainCharacter_Texture,
		SomePlant_Texture
	};

	//TODO: use better path 
	#define MAIN_CHARACTER_PATH "spriteImgs/animation_test.png"

	struct TextureInfo
	{
		typedef sf::Vector2u frameDims;
		struct _TextureInfo
		{
			_TextureInfo()
			{};

			_TextureInfo(std::string texturePath, frameDims textureFrameDims) :
			texturePath(texturePath)
			, textureFrameDims(textureFrameDims)
			{};
			std::string texturePath;
			sf::Vector2u textureFrameDims;
		};

		TextureInfo()
		{
			//Add paths and animation frame diminsions here
			textureInfo[MainCharacter_Texture] = _TextureInfo(MAIN_CHARACTER_PATH, frameDims(3, 3));
		};	

		std::string getPath(TextureEnum texture)
		{
			return textureInfo[texture].texturePath;
		}

		sf::Vector2u getFrameDims(TextureEnum texture)
		{
			return textureInfo[texture].textureFrameDims;
		}

		std::map<TextureEnum, _TextureInfo> textureInfo;
	};

}

#endif