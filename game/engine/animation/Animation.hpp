
#ifndef ANIMATION_H
#define ANIMATION_H


#include <SFML/Graphics.hpp>

struct AnimationIndex
{
	int start = 0;
	int end= 0;
	int current = 0;
};

class Animation
{
public:
	
	Animation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);
	Animation()
	{};
	~Animation();

	void update(float deltaTime);

public:
	sf::IntRect uvRect;
	void setIndex(int startIndex, int endIndex);
private:

	sf::Vector2u imageCount;
	sf::Vector2u currentImage;

	float totalTime;
	float switchTime;
	AnimationIndex index_;
};

#endif // !ANIMATION_H
