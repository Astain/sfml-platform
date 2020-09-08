#pragma once
#include "Entity.hpp"

class Player : public Entity
{
public:
    
    Player();
    void update() override;
    void draw(sf::RenderWindow* target) override;

private:
    sf::CircleShape m_circleShape;
};
