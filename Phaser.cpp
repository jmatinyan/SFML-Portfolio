//
// Created by Julia on 5/2/23.
//

#include "Phaser.h"

Phaser::Phaser()
{
    texture.create(720, 500, 32);
    sprite.setTexture(texture.getTexture());
    texture.display();
}

const sf::Sprite &Phaser::getThumbnail() const
{
    return sprite;
}

void Phaser::run()
{
    AnimatedSprite phaser(Images::getImage(PHASER), 4, 8);
    phaser.setScale(3, 3);
    phaser.changeDirection(FORWARD);
    phaser.setSpeed(15);
    phaser.setTime(40);
    Application::addComponent(phaser);
    Application::run();

    texture.clear();
    texture.draw(phaser);
    texture.display();
}

void Phaser::EventHandler(sf::RenderWindow &window, sf::Event event)
{
    animatedSprite.eventHandler(window, event);
}

std::string Phaser::getTitle()
{
    return "Phaser";
}

void Phaser::update()
{

}
