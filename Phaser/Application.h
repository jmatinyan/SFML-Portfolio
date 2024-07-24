//
// Created by Julia on 3/29/23.
//

#ifndef SFMLTUTORIAL_APPLICATION_H
#define SFMLTUTORIAL_APPLICATION_H
#include <SFML/Graphics.hpp>
#include "Component.h"
#include "EventHandlable.h"
#include "Updatable.h"
#include <vector>

class Application {
private:
    static sf::RenderWindow window;
    static std::vector<Component*> components;
public:
    static void run();
    static void addComponent(Component &component);
};


#endif //SFMLTUTORIAL_APPLICATION_H
