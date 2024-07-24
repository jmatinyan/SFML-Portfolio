//
// Created by Julia on 5/2/23.
//

#include "BouncingBall.h"

BouncingBall::BouncingBall()
{
    ball.create(700, 500, 32);
    sprite.setTexture(ball.getTexture());
    ball.display();
}

void BouncingBall::run()
{
    circle.setRadius(50.f);
    circle.setFillColor(sf::Color::Magenta);
    if((circle.getPosition().x + (circle.getRadius() * 2) > ball.getSize().x) || (circle.getPosition().x < 0))
    {
        x = -x;
    }
    if((circle.getPosition().y + (circle.getRadius() * 2) > ball.getSize().y) || (circle.getPosition().y < 0))
    {
        y = -y;
    }
    circle.move(x, y);
    ball.clear();
    ball.draw(circle);
    ball.display();
}

const sf::Sprite &BouncingBall::getThumbnail() const
{
    return sprite;
}

std::string BouncingBall::getTitle()
{
    return "Bouncing Ball";
}

void BouncingBall::update()
{

}

void BouncingBall::EventHandler(sf::RenderWindow &window, sf::Event event)
{

}
