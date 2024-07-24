//
// Created by Julia on 3/29/23.
//

#include "Application.h"

sf::RenderWindow Application::window;
std::vector<Component*> Application::components;
void Application::run()
{
    sf::Event event;
    while(window.isOpen())
    {
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            for (Component *c: components)
                c->eventHandler(window, event);

            for (Component *c: components)
                c->update();

            for (Component *c: components)
                window.draw(*reinterpret_cast<sf::Drawable *>(c));
        }
    }
}

void Application::addComponent(Component &component)
{
    components.push_back(&component);
}
