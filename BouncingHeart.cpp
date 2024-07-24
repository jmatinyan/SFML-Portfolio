//
// Created by Julia on 5/2/23.
//

#include "BouncingHeart.h"

BouncingHeart::BouncingHeart()
{
    heart.create(720, 500, 32);
    sprite.setTexture(heart.getTexture());
    heart.display();
}

void BouncingHeart::run()
{
    convex.setPointCount(10);
    convex.setPoint(0, sf::Vector2f(0, 0));
    convex.setPoint(1, sf::Vector2f(50, 0));
    convex.setPoint(2, sf::Vector2f(80, 50));
    convex.setPoint(3, sf::Vector2f(110, 0));
    convex.setPoint(4, sf::Vector2f(160, 0));
    convex.setPoint(5, sf::Vector2f(180, 50));
    convex.setPoint(6, sf::Vector2f(180, 100));
    convex.setPoint(7, sf::Vector2f(80, 170));
    convex.setPoint(8, sf::Vector2f(-20, 100));
    convex.setPoint(9, sf::Vector2f(-20, 50));
    convex.setPoint(10, sf::Vector2f(0, 0));
    convex.setFillColor(sf::Color(231, 84, 128));
    sf::Vector2f pos = convex.getPosition();
    if(pos.x + convex.getGlobalBounds().width >= heart.getSize().x && x > 0) {
        x = -x;
        pos.x = heart.getSize().x - convex.getGlobalBounds().width;
    }
    else if(pos.x <= 0 && x < 0) {
        x = -x;
        pos.x = 0;
    }
    if(pos.y + convex.getGlobalBounds().height >= heart.getSize().y && y > 0) {
        y = -y;
        pos.y = heart.getSize().y - convex.getGlobalBounds().height;
    }
    else if(pos.y <= 0 && y < 0) {
        y = -y;
        pos.y = 0;
    }
    convex.move(x, y);
    heart.clear();
    heart.draw(convex);
    heart.display();
}

const sf::Sprite &BouncingHeart::getThumbnail() const
{
    return sprite;
}

std::string BouncingHeart::getTitle()
{
    return "Limited Edition - Bouncing Heart";
}

void BouncingHeart::update()
{

}

void BouncingHeart::EventHandler(sf::RenderWindow &window, sf::Event event)
{

}
