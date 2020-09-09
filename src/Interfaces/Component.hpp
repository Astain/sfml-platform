#pragma once
#include <cstddef>
#include <SFML/Graphics.hpp>

class Entity;

namespace Component
{
using ComponentId = std::size_t;

inline ComponentId getComponentId()
{
    static ComponentId lastId = 0;
    return lastId++;
}

class Component
{
public:
    //Constructor
    Component(): m_id(getComponentId())
    {

    }
    //Destructor
    virtual ~Component(){}

    virtual void init(){}
    virtual void update(){}
    virtual void draw(sf::RenderWindow* target){}

    void setEntity(Entity* e) { m_entity = e; }
    ComponentId getId(){ return m_id; }

protected:
    Entity* m_entity;

private:
    ComponentId m_id;
};
}