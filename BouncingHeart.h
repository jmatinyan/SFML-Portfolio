//
// Created by Julia on 5/2/23.
//

#ifndef CS3_PORTFOLIO_BOUNCINGHEART_H
#define CS3_PORTFOLIO_BOUNCINGHEART_H
#include <SFML/Graphics.hpp>
#include "Item.h"

class BouncingHeart : public Item
{
private:
    sf::RenderTexture heart;
    sf::Sprite sprite;
    sf::ConvexShape convex;
    float x = 7.f;
    float y = 7.f;

public:
    BouncingHeart();
    void run();
    const sf::Sprite &getThumbnail() const override;
    std::string getTitle() override;
    void update() override;
    void EventHandler(sf::RenderWindow &window, sf::Event event) override;
};


#endif //CS3_PORTFOLIO_BOUNCINGHEART_H
