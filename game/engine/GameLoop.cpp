


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
	
	TextureManager textures;

	EntityBase player0;
	player0.setScale(4.0f, 4.0f);

	//player0.createShape(100.0f);

	EntityBase player;
	
	//player.createShape(sf::Vector2f(100.0f, 100.0f));



	player0.setTexture(textures.playerTexture);
	player.setTexture(textures.playerTexture);
	
	Animation animation(&textures.playerTexture, sf::Vector2u(2, 1), 0.3f);
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

		animation.update(0, deltaTime);
		player.setTextureRect(animation.uvRect);
		player0.setTextureRect(animation.uvRect);

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		{
			player.move(-0.1f, 0.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		{
			player.move(0.1f, 0.0f);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
		{
			player.move(0.0f, -0.1f);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
		{
			player.move(0.0f, 0.1f);
		}


		window.clear();
		window.draw(player0);
		window.draw(player);
		window.display();
	}
}

