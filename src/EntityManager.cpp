#include "EntityManager.hpp"

EntityManager* EntityManager::instance = nullptr;

EntityManager::EntityManager()
{

}

EntityManager* EntityManager::getInstance()
{
    if(instance == nullptr)
    {
        instance = new EntityManager();
    }
    return instance;
}

void EntityManager::addEntity(Entity* e)
{
    m_entities.push_back(e);
}
void EntityManager::update()
{
    for(auto& entity: m_entities)
    {
        entity->update();
    }
}

void EntityManager::render(sf::RenderWindow* target)
{
    for(auto& entity: m_entities)
    {
        entity->draw(target);
    }
}