#ifndef TEXTURE_INFO_H
#define TEXTURE_INFO_H

#include "TexturePaths.hpp"
#include "TextureDefs.hpp"

namespace Textures 
{
	
	class Textures
	{
	public:

		Textures()
		{
			/*Add Path to sprite sheet, number of animation frames in X and Y directions, and the corresponding animation indexes of each animation sequence
			*/

			textureInfo[MainCharacter]= new CharacterTextureInfo(
				MAIN_CHARACTER_PATH,
				frameDims(6, 6),
				SpriteNames::MainCharacter,
				SpriteSheetSlice(27, 29), //walk up
				SpriteSheetSlice(1, 5),	 //walk down
				SpriteSheetSlice(21, 23), //walk left
				SpriteSheetSlice(21, 23), //walk right
				SpriteSheetSlice(15, 20),
				SpriteSheetSlice(4, 5),
				SpriteSheetSlice(4, 5),
				SpriteSheetSlice(4, 5)
			);

			textureInfo[SomePlant] = new PlantTextureInfo(
				SHITTY_PLANT_PATH,
				frameDims(2, 1),
				SpriteNames::SomePlant,
				SpriteSheetSlice(0, 1),
				SpriteSheetSlice(0, 1)
			);
		};


		TextureInfo* getTexture(SpriteNames texture)
		{
			return textureInfo[texture];
		}

	private:
		std::unordered_map<SpriteNames, TextureInfo*> textureInfo;
	};


}

#endif