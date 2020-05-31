


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
	sf::RectangleShape player(sf::Vector2f(100.0f, 100.0f));
	sf::Texture playerTexture;
	playerTexture.loadFromFile("../sprites/test_guy.png");
	player.setTexture(&playerTexture);

	Animation animation(&playerTexture, sf::Vector2u(2, 1), 0.3f);
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


		window_.clear();
		window_.draw(player);
		window_.display();
	}
}

