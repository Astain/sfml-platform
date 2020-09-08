#pragma once
#include <SFML/Graphics.hpp>

class Player
{
public:
    
    Player();

    void render(sf::RenderWindow* target);
    void update();
private:
    sf::CircleShape m_circleShape;
};
