#include <iostream>

#include <SFML/Graphics.hpp>
#include "engine/Game.hpp"

int main()
{
    Game game = Game();
    game.initialize();
    game.run();

    return 0;
}