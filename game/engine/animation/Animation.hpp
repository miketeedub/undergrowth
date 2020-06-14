
#ifndef ANIMATION_H
#define ANIMATION_H


#include <SFML/Graphics.hpp>

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
	
	Animation(sf::Texture* texture, sf::Vector2u imageCount);
	Animation()
	{};
	~Animation();

	void update(float deltaTime);

public:
	sf::IntRect uvRect;
	void setIndex(int startIndex, int endIndex, float animationTime);
private:

	sf::Vector2u imageCount;
	sf::Vector2u currentImage;

	float totalTime;
	float switchTime;
	AnimationIndex index_;
};

#endif // !ANIMATION_H
