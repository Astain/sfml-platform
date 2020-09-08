#include "Player.hpp"

Player::Player():
m_circleShape(100.0f)
{
    m_circleShape.setFillColor(sf::Color::Green);
}

void Player::update()
{
    
}
void Player::render(sf::RenderWindow* target)
{
    target->draw(m_circleShape);
}
