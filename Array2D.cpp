//
// Created by Julia on 5/1/23.
//

#include "Array2D.h"

Array2D::Array2D()
{
    array.create(700, 700, 32);
    sprite.setTexture(array.getTexture());
    array.display();
}

const sf::Sprite &Array2D::getThumbnail() const
{
    return sprite;
}

void Array2D::run()
{
    array.clear();
    array.draw(grid);
    array.display();
}

void Array2D::EventHandler(sf::RenderWindow &window, sf::Event event)
{
    grid.eventHandler(window, event);
}

std::string Array2D::getTitle()
{
    return "2D Array";
}

void Array2D::update()
{

}
