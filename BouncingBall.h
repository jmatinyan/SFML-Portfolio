//
// Created by Julia on 5/2/23.
//

#ifndef CS3_PORTFOLIO_BOUNCINGBALL_H
#define CS3_PORTFOLIO_BOUNCINGBALL_H
#include <SFML/Graphics.hpp>
#include "Item.h"

class BouncingBall : public Item
{
private:
    sf::RenderTexture ball;
    sf::Sprite sprite;
    sf::CircleShape circle;
    float x = 10.f;
    float y = 10.f;
public:
    BouncingBall();
    void run();
    const sf::Sprite &getThumbnail() const override;
    std::string getTitle() override;
    void update() override;
    void EventHandler(sf::RenderWindow &window, sf::Event event) override;
};


#endif //CS3_PORTFOLIO_BOUNCINGBALL_H
