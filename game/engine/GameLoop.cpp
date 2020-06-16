


#include "GameLoop.hpp"

GameLoop::~GameLoop()
{
}

void GameLoop::initialize(void)
{


}

void GameLoop::loop(void)
{
}


void GameLoop::run(sf::RenderWindow& window)
{
	Textures::TextureManager textures;

	SpriteFactory spriteFactory(&textures);

	EntityBase player0 = spriteFactory.createSprite(MainCharacterType);

/*TODO: create a "Character.hpp" class that inherts from EntityBase and implements pure virtual functions, 
entity base will go to both characters and plants, will create abstract factory for both plants and characers*/

	player0.setScale(1.0f, 1.0f);

	//EntityBase player;
	


	//player0.setTexture(textures->playerTexture);
	//player.setTexture(textures->playerTexture);
	
	//Animation animation(&textures->playerTexture, sf::Vector2u(2, 1), 0.3f);
	float deltaTime = 0.0f;
	sf::Clock clock;

	while (window.isOpen())
	{
		deltaTime = clock.restart().asSeconds();

		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::Resized:
				break;
			}
		}

		//animation.update(0, deltaTime);
		//player.setTextureRect(animation.uvRect);
		//player0.setTextureRect(animation.uvRect);
		player0.update(deltaTime);

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		{
			player0.move(-0.1f, 0.0f);		
			
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		{
			player0.move(0.1f, 0.0f);
			player0.setAnimationIndex(0, 6, .1f);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
		{
			player0.move(0.0f, -0.1f);
			player0.setAnimationIndex(28, 31, .1f);

		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
		{
			player0.move(0.0f, 0.1f);
			player0.setAnimationIndex(16, 20, .1f);

		}


		window.clear();
		window.draw(player0);
		window.display();
	}
}

