#pragma once
#include <SFML/Graphics.hpp>

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
};
