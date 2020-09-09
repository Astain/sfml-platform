#pragma once
#include <vector>
#include <memory>
#include "Component.hpp"

class Entity
{
public:
    //Constructor
    Entity(){}

    //Destructor
    virtual ~Entity(){}

    virtual void update()
    {
        for(auto& c: m_components)
            c->update();
    }

    virtual void draw(sf::RenderWindow* target)
    {
        for(auto& c: m_components)
            c->draw(target);
    }

    template <typename T, typename... TArgs> T& addComponent(TArgs&&... args)
    {
        T* component (new T(std::forward<TArgs>(args)...));
        component->setEntity(this);

        std::unique_ptr<Component::Component> uComponent {component};

        m_components.emplace_back(std::move(uComponent));

        return *component;
    }

private:

    std::vector<std::unique_ptr<Component::Component>> m_components;
};