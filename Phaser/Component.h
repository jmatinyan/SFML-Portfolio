//
// Created by Julia on 3/29/23.
//

#ifndef SFMLTUTORIAL_COMPONENT_H
#define SFMLTUTORIAL_COMPONENT_H
#include <SFML/Graphics.hpp>
#include "MouseEvents.h"
#include "States.h"

class Component : public States {
public:
    virtual void update() = 0;
    virtual void eventHandler(sf::RenderWindow &window, sf::Event event) = 0;
};

#endif //SFMLTUTORIAL_COMPONENT_H
