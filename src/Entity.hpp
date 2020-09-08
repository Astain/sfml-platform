#pragma once
#include <SFML/Graphics.hpp>

class Entity
{
public:
    virtual void update() = 0;
    virtual void draw(sf::RenderWindow* target) = 0;
};
