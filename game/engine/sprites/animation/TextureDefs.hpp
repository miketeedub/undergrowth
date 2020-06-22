#ifndef TEXTURE_ENUM_H
#define TEXTURE_ENUM_H

#include <SFML/Graphics.hpp>
#include <unordered_map>

namespace Textures
{
	typedef sf::Vector2u frameDims;

	struct SpriteSheetSlice
	{
		SpriteSheetSlice() :
			start(0)
			,finish(0)
		{};

		SpriteSheetSlice(int start, int finish) :
			start(start)
			, finish(finish)
		{};
		int start;
		int finish;
	};

	enum CharacterMovementAnimations
	{
		Walk_Up,
		Walk_Down,
		Walk_Left,
		Walk_Right,
		Jump_Up,
		Jump_Down,
		Jump_Left,
		Jump_Right
	};


	enum TextureNames
	{
		//Add Texture names here
		MainCharacter_Texture,
		SomePlant_Texture
	};

	//Add path defs here
	#define MAIN_CHARACTER_PATH "engine/sprites/animation/sheets/mole_sheet.png"


	class TextureInfo
	{
	public:
		virtual sf::Vector2u getFrameDims() = 0;
		virtual TextureNames getName() = 0;
		virtual SpriteSheetSlice getAnimationSlice(CharacterMovementAnimations animation) = 0;
		virtual std::string getTexturePath() = 0;
	};


	class CharacterTextureInfo : public TextureInfo
	{
	public:

		CharacterTextureInfo::CharacterTextureInfo(std::string path, frameDims dims, TextureNames name,
			SpriteSheetSlice WalkUp,
			SpriteSheetSlice WalkDown,
			SpriteSheetSlice WalkLeft,
			SpriteSheetSlice WalkRight,
			SpriteSheetSlice JumpUp,
			SpriteSheetSlice JumpDown,
			SpriteSheetSlice JumpLeft,
			SpriteSheetSlice JumpRight)
		{
			texturePath_ = path;
			dims_ = dims;
			name_ = name;
			animationSlices_[Walk_Up] = WalkUp;
			animationSlices_[Walk_Down] = WalkDown;
			animationSlices_[Walk_Left] = WalkLeft;
			animationSlices_[Walk_Right] = WalkRight;
			animationSlices_[Jump_Up] = JumpUp;
			animationSlices_[Jump_Down] = JumpDown;
			animationSlices_[Jump_Left] = JumpLeft;
			animationSlices_[Jump_Right] = JumpRight;

		};


		std::string getTexturePath()
		{
			return texturePath_;
		}

		sf::Vector2u getFrameDims()
		{
			return dims_;
		}

		TextureNames getName()
		{
			return name_;
		}

		SpriteSheetSlice getAnimationSlice(CharacterMovementAnimations animation)
		{
			return animationSlices_[animation];
		}

		std::unordered_map<CharacterMovementAnimations, SpriteSheetSlice> animationSlices_;
	
		std::string texturePath_;
		sf::Vector2u dims_;
		TextureNames name_;
	};


	class Textures
	{
	public:

		Textures()
		{
			/*Add Path to sprite sheet, number of animation frames in X and Y directions, and the corresponding animation indexes of each animation sequence
			*/
			
			textureInfo.insert({ MainCharacter_Texture, new CharacterTextureInfo(MAIN_CHARACTER_PATH,
																			frameDims(6, 6),
																			MainCharacter_Texture,
																			SpriteSheetSlice(27, 29), //walk up
																			SpriteSheetSlice(1, 5),	 //walk down
																			SpriteSheetSlice(21, 23), //walk left
																			SpriteSheetSlice(21, 23), //walk right
																			SpriteSheetSlice(15, 20),
																			SpriteSheetSlice(4, 5),
																			SpriteSheetSlice(4, 5),
																			SpriteSheetSlice(4, 5)) });

		};


		TextureInfo* getTexture(TextureNames texture)
		{
			return textureInfo[texture];
		}

	private:
		std::unordered_map<TextureNames, TextureInfo*> textureInfo;
	};
}

#endif