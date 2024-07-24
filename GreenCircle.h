//
// Created by Julia on 4/28/23.
//

#ifndef CS3_PORTFOLIO_GREENCIRCLE_H
#define CS3_PORTFOLIO_GREENCIRCLE_H
#include <SFML/Graphics.hpp>
#include "Item.h"

class GreenCircle : public Item
{
private:
    sf::RenderTexture greenCircle;
    sf::Sprite sprite;
public:
    GreenCircle();
    void run();
    const sf::Sprite &getThumbnail() const override;
    std::string getTitle() override;
    void update() override;
    void EventHandler(sf::RenderWindow &window, sf::Event event) override;
};

#endif //CS3_PORTFOLIO_GREENCIRCLE_H
