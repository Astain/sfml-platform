#include "SpriteComponent.hpp"

Component::SpriteComponent::SpriteComponent()
{
    m_circleShape.setRadius(10);
    m_circleShape.setFillColor(sf::Color::Green);
}

void Component::SpriteComponent::draw(sf::RenderWindow* target)
{
    target->draw(m_circleShape);
}