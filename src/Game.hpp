#pragma once
#include <SFML/Graphics.hpp>
#include "Player.hpp"

class Game
{
public:

    Game();
    ~Game();
    void run();

private:

    void readInput();
    void updateDt();
    void update();
    void render();

    //Variables
    sf::RenderWindow* m_window;
    Player m_player;
};
