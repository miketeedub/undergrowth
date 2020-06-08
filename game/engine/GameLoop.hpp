#ifndef GAME_LOOP_H
#define GAME_LOOP_H

#include "Animation.hpp"

#include <SFML/Graphics.hpp>
#include "EntityBase.hpp"
#include "TextureManager.hpp"
#include "SpriteFactory.hpp"
#include "SpriteEnum.hpp"


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
