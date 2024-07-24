//
// Created by Julia on 4/28/23.
//

#include "GreenCircle.h"
#include <SFML/Graphics.hpp>

GreenCircle::GreenCircle()
{
    greenCircle.create(700, 700, 32);
    sprite.setTexture(greenCircle.getTexture());
    sprite.setPosition({100, 100});
    greenCircle.display();
}

void GreenCircle::run()
{
    sf::CircleShape shape(330.f);
    shape.setFillColor(sf::Color::Green);
    greenCircle.clear();
    greenCircle.draw(shape);
    greenCircle.display();
}

const sf::Sprite &GreenCircle::getThumbnail() const
{
    return sprite;
}

std::string GreenCircle::getTitle()
{
//    sf::Text title("Green Circle", sf::Font(), 40);
//    title.setFillColor(sf::Color(231, 84, 128));
//    title.setStyle(sf::Text::Bold);
//    title.setPosition(100, 50);
//    greenCircle.draw(title);
    return "Green Cirlce";
}

void GreenCircle::update()
{

}

void GreenCircle::EventHandler(sf::RenderWindow &window, sf::Event event)
{

}
