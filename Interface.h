//
// Created by Julia on 5/1/23.
//

#ifndef CS3_PORTFOLIO_INTERFACE_H
#define CS3_PORTFOLIO_INTERFACE_H
#include <SFML/Graphics.hpp>
#include "Item.h"
#include "GreenCircle.h"
#include "Button.h"
#include "BouncingBall.h"
#include "BouncingHeart.h"
#include <vector>

class Interface : public sf::Drawable
{
private:
    std::vector<Item*> item;
    std::vector<Item*>::iterator iter;
    int numItems = 0;
    Button left;
    Button right;
    sf::Font font;

public:
    Interface();
    virtual void draw(sf::RenderTarget& target, sf::RenderStates state) const;
    void update();
    void EventHandler(sf::RenderWindow &window, sf::Event event);
    void add(Item* item);
    virtual void run();
};


#endif //CS3_PORTFOLIO_INTERFACE_H
