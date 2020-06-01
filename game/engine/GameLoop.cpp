


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
	

	//sf::RectangleShape player(sf::Vector2f(100.0f, 100.0f));

	EntityBase player0;
	player0.createShape(100.0f);

	EntityBase player;
	player.createShape(sf::Vector2f(100.0f, 100.0f));


	sf::Texture playerTexture;

	playerTexture.loadFromFile("../sprites/test_guy.png");


	player0.shape_->setTexture(&playerTexture);
	player.shape_->setTexture(&playerTexture);
	
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
		player.shape_->setTextureRect(animation.uvRect);
		player0.shape_->setTextureRect(animation.uvRect);

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		{
			player.shape_->move(-0.1f, 0.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		{
			player.shape_->move(0.1f, 0.0f);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
		{
			player.shape_->move(0.0f, -0.1f);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
		{
			player.shape_->move(0.0f, 0.1f);
		}


		window.clear();
		window.draw(*player0.shape_);
		window.draw(*player.shape_);
		window.display();
	}
}

