#ifndef TEXTURE_ENUM_H
#define TEXTURE_ENUM_H

#include <SFML/Graphics.hpp>


namespace Textures
{
	enum TextureNames
	{
		//Add Texture names here
		MainCharacter_Texture,
		SomePlant_Texture
	};

	//Add path defs here
	#define MAIN_CHARACTER_PATH "engine/sprites/animation/sheets/mole_sheet.png"



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
			textureInfo[MainCharacter_Texture] = _TextureInfo(MAIN_CHARACTER_PATH, frameDims(6, 6));
		};	

		std::string getPath(TextureNames texture)
		{
			return textureInfo[texture].texturePath;
		}

		sf::Vector2u getFrameDims(TextureNames texture)
		{
			return textureInfo[texture].textureFrameDims;
		}

		std::map<TextureNames, _TextureInfo> textureInfo;
	};

}

#endif