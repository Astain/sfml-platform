#pragma once
#include <vector>
#include "Entity.hpp"

class EntityManager
{

public:
    static EntityManager* getInstance();

    void update();
    void render(sf::RenderWindow* target);
    
    void addEntity(Entity* e);

private:
    
    EntityManager();

    std::vector<Entity*> m_entities;
    static EntityManager* instance;

};
