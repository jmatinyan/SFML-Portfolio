//
// Created by Julia on 5/1/23.
//

#ifndef CS3_PORTFOLIO_ITEM_H
#define CS3_PORTFOLIO_ITEM_H
#include <SFML/Graphics.hpp>

class Item
{
public:
    virtual const sf::Sprite& getThumbnail() const = 0;
    virtual std::string getTitle() = 0;
    virtual void update() = 0;
    virtual void EventHandler(sf::RenderWindow &window, sf::Event event) = 0;
    virtual void run() = 0;
};


#endif //CS3_PORTFOLIO_ITEM_H
