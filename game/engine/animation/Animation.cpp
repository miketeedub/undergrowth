
#include "Animation.hpp"


Animation::Animation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime)
{
	this->imageCount = imageCount;
	this->switchTime = switchTime;
	totalTime = 0.0f;
	currentImage.x = 0;

	uvRect.width = texture->getSize().x / float(imageCount.x);
	uvRect.height = texture->getSize().y / float(imageCount.y);

}


Animation::~Animation()
{
}

void Animation::setIndex(int startIndex, int endIndex)
{
	index_.start = startIndex;
	index_.end = endIndex;
	index_.current = startIndex;
}





void Animation::update(float deltaTime)
{
	

	totalTime += deltaTime;

	if (totalTime >= switchTime)
	{
		totalTime -= switchTime;
		currentImage.y = static_cast<int> (index_.current / imageCount.x);
		currentImage.x = index_.current % imageCount.x;
		
		index_.current++;

		if (index_.current > index_.end)
		{
			index_.current = index_.start;
		}
		
	}

	uvRect.left = currentImage.x * uvRect.width;
	uvRect.top = currentImage.y * uvRect.height;
}
