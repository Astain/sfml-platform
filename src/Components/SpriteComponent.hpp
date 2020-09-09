#pragma once
#include "../Interfaces/Component.hpp"

namespace Component
{
class SpriteComponent : public Component
{
public:
    SpriteComponent();
    void draw(sf::RenderWindow* target) override;

private:
    sf::CircleShape m_circleShape;

};
}