#include "Player.hpp"
#include "Components/SpriteComponent.hpp"

Player::Player()
{
    addComponent<Component::SpriteComponent>();
}
