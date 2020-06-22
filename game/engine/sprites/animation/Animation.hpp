
#ifndef ANIMATION_H
#define ANIMATION_H


#include <SFML/Graphics.hpp>
#include "TextureManager.hpp"
#include "TextureDefs.hpp"

struct AnimationSequence
{
	//default constructor
	AnimationSequence() :
		start(0)
		, end(0)
		, current(0)
		, animationTime(0)
		, iterateIndexBackwards(false)
	{};

	AnimationSequence(int start, int end, int animationTime, bool oscillateFrames) :
		  start(start)
		, end(end)
		, current(0)
		, animationTime(animationTime)
		, oscillateFrames(oscillateFrames)
		, iterateIndexBackwards(false)
	{};

	int start;
	int end;
	int current;
	float animationTime;
	bool oscillateFrames;
	bool iterateIndexBackwards;
};


class Animation
{
public:
	

	Animation(Textures::TextureValue* texture_);
	Animation()
	{};
	~Animation();

	Textures::TextureNames currentTextureName_;
	sf::IntRect uvRect;


	void update(float deltaTime);

	void setAnimationSlice(Textures::SpriteSheetSlice slice, float animationTime, bool oscillateFrames);

	void releaseTexture(void);


private:


	Textures::TextureValue* texture_;
	sf::Vector2u imageFrames_;
	sf::Vector2u currentImage;
	float totalTime;
	float switchTime;
	AnimationSequence animationSlice_;
	bool iterateIndexBackwards_;
};

#endif // !ANIMATION_H
