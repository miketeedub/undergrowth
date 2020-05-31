#ifndef GAME_LOOP
#define GAME_LOOP

#include "Animation.hpp"

#include <SFML/Graphics.hpp>


class GameLoop 
{

public:
	GameLoop() 
		
	{};


	~GameLoop();

public:
	void initialize(void);
	void loop(void);
	void run(sf::RenderWindow& window);

	
};

#endif
