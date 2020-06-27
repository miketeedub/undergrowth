


#include "GameLoop.hpp"
#include "plants/PlantBase.hpp"
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

	EntityBase* player0 = spriteFactory.createSprite(Textures::SpriteNames::MainCharacter);
	

	EntityBase* plant0 = spriteFactory.createSprite(Textures::SpriteNames::SomePlant);


	player0->setScale(1.0f, 1.0f);
	plant0->setAnimationSlice(Textures::PlantMovementAnimations::Shake, .05, true);


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

		plant0->updateAnimation(deltaTime);
		player0->updateAnimation(deltaTime);

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		{
			player0->move(-0.1f, 0.0f);	
			player0->setAnimationSlice(Textures::CharacterMovementAnimations::Walk_Left, .05, true);
			
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		{
			player0->move(0.1f, 0.0f);
			player0->setAnimationSlice(Textures::CharacterMovementAnimations::Walk_Right, .05, true);
			
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
		{


			player0->move(0.0f, -0.1f);
			player0->setAnimationSlice(Textures::CharacterMovementAnimations::Walk_Up, .05, true);
		
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
		{
			player0->move(0.0f, 0.1f);
			player0->setAnimationSlice(Textures::CharacterMovementAnimations::Walk_Down, .05, true);


		}


		window.clear();
		window.draw(*player0);
		window.draw(*plant0);
		window.display();
	}
}

