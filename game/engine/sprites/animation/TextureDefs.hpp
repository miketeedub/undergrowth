#ifndef TEXTURE_DEFS_H
#define TEXTURE_DEFS_H

#include <SFML/Graphics.hpp>
#include <unordered_map>
#include "Textures.hpp"
#include "TexturePaths.hpp"


namespace Textures
{
	typedef sf::Vector2u frameDims;

	enum SpriteNames
	{
		//Add names here
		MainCharacter,
		SomePlant
	};

	struct SpriteSheetSlice
	{
		SpriteSheetSlice() :
			start(0)
			, finish(0)
		{};

		SpriteSheetSlice(int start, int finish) :
			start(start)
			, finish(finish)
		{};
		int start;
		int finish;
	};


	enum PlantMovementAnimations
	{
		Sway=1,
		Shake=2
	};

	enum CharacterMovementAnimations
	{
		Walk_Up=0,
		Walk_Down=1,
		Walk_Left=2,
		Walk_Right=3,
		Jump_Up=4,
		Jump_Down=5,
		Jump_Left=6,
		Jump_Right=7
	};

	class TextureInfo
	{
	public:
		virtual sf::Vector2u getFrameDims() = 0;
		virtual SpriteNames getName() = 0;
		virtual SpriteSheetSlice getAnimationSlice(int animation)=0;
		virtual std::string getTexturePath() = 0;
	};


	class CharacterTextureInfo : public TextureInfo
	{
	public:

		CharacterTextureInfo::CharacterTextureInfo(std::string path, frameDims dims, SpriteNames name,
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

		SpriteNames getName()
		{
			return name_;
		}

		SpriteSheetSlice getAnimationSlice(int animation)
		{
			return animationSlices_[animation];
		}

		std::unordered_map<int, SpriteSheetSlice> animationSlices_;
	
		std::string texturePath_;
		sf::Vector2u dims_;
		SpriteNames name_;

	};

	class PlantTextureInfo : public TextureInfo
	{
	public:

		PlantTextureInfo(std::string path, frameDims dims, SpriteNames name,
			SpriteSheetSlice Sways,
			SpriteSheetSlice Shakes)
		{
			texturePath_ = path;
			dims_ = dims;
			name_ = name;
			animationSlices_[Sway] = Sways;
			animationSlices_[Shake] = Shakes;

		};


		std::string getTexturePath()
		{
			return texturePath_;
		}

		sf::Vector2u getFrameDims()
		{
			return dims_;
		}

		SpriteNames getName()
		{
			return name_;
		}

		SpriteSheetSlice getAnimationSlice(int animation)
		{
			return animationSlices_[animation];
		}

		std::unordered_map<int, SpriteSheetSlice> animationSlices_;

		std::string texturePath_;
		sf::Vector2u dims_;
		SpriteNames name_;

	};


	
}

#endif