#ifndef GAME
#define GAME

#include "GameLoop.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>


class Game 
{
public:

	Game()
	{};

	~Game();

	void intialize();
	void run();


	sf::Clock clock;


};

#endif // !GAME
