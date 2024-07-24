//
// Created by Julia on 3/30/23.
//

#ifndef SFMLTUTORIAL_MOUSEEVENTS_H
#define SFMLTUTORIAL_MOUSEEVENTS_H
#include <SFML/Graphics.hpp>

class MouseEvents
{
public:
    static bool isHovered(const sf::FloatRect& bounds, const sf::RenderWindow& window);
    static bool isClicked(const sf::FloatRect& bounds, const sf::RenderWindow& window);
};


#endif //SFMLTUTORIAL_MOUSEEVENTS_H
