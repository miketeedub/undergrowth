#include "Game.hpp"
#include "Game.hpp"

Game::~Game()
{
}


void Game::initialize()
{
}

void Game::run()
{
	sf::RenderWindow window(sf::VideoMode(512, 512), "Sky Pirates", sf::Style::Close | sf::Style::Resize);


	GameLoop loop;	
	loop.run(window);
}
