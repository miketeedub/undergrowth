#ifndef TEXTURE_MANAGER_H
#define TEXTURE_MANAGER_H


#include <SFML/Graphics.hpp>
#include "TextureDefs.hpp"

namespace Textures {

	struct TextureValue
	{
		TextureValue()
		{};
		TextureValue(sf::Texture* texture, sf::Vector2u frames) :
			texture(texture)
			, spriteSheetFrames(frames)
			, count_(1)
		{};

		sf::Texture* texture;
		sf::Vector2u spriteSheetFrames;
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
		{};
		//TODO: load textures dynamically as needed
		sf::Texture playerTexture;

		std::map<TextureEnum, TextureValue> textureMap_;

		TextureValue* getTexture(TextureEnum texture);

		TextureInfo textureInfo_;

		bool loadTexture(TextureEnum textureName);

		void spriteReleaseTexture(TextureEnum textureName);
	};

}
#endif // !TEXTURE_MANAGER_H
