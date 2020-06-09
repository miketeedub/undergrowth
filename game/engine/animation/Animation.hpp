
#ifndef ANIMATION_H
#define ANIMATION_H


#include <SFML/Graphics.hpp>


class Animation
{
public:
	
	Animation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);
	Animation()
	{};
	~Animation();

	void update(int row, float deltaTime);

public:
	sf::IntRect uvRect;

private:

	sf::Vector2u imageCount;
	sf::Vector2u currentImage;

	float totalTime;
	float switchTime;

};

#endif // !ANIMATION_H
