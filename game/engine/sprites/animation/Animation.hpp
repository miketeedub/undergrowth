
#ifndef ANIMATION_H
#define ANIMATION_H


#include <SFML/Graphics.hpp>
#include "TextureManager.hpp"
#include "TextureDefs.hpp"
struct AnimationIndex
{
	//default constructor
	AnimationIndex() :
		start(0)
		, end(0)
		, current(0)
		, animationTime(0)
	{};

	AnimationIndex(int start, int end, int animationTime) :
		  start(start)
		, end(end)
		, current(0)
		, animationTime(animationTime)
	{};

	int start;
	int end;
	int current;
	float animationTime;
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

	void setAnimationIndex(int startIndex, int endIndex, float animationTime);

	void releaseTexture(void);


private:


	Textures::TextureValue* texture_;
	sf::Vector2u imageFrames_;
	sf::Vector2u currentImage;
	float totalTime;
	float switchTime;
	AnimationIndex index_;
};

#endif // !ANIMATION_H
