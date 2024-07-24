//
// Created by Julia on 5/2/23.
//

#ifndef CS3_PORTFOLIO_PHASER_H
#define CS3_PORTFOLIO_PHASER_H
#include <SFML/Graphics.hpp>
#include "Phaser/Application.h"
#include "Phaser/AnimatedSprite.h"
#include "Phaser/Images.h"
#include "Item.h"

class Phaser : public Item
{
public:
    Phaser();
    const sf::Sprite &getThumbnail() const override;
    void run() override;
    void EventHandler(sf::RenderWindow &window, sf::Event event) override;
    std::string getTitle() override;
    void update() override;

private:
    sf::RenderTexture texture;
    sf::Sprite sprite;
    AnimatedSprite animatedSprite;
    Application application;
};


#endif //CS3_PORTFOLIO_PHASER_H
