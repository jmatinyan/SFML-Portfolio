//
// Created by Julia on 4/10/23.
//

#include "Images.h"

std::map<images, sf::Texture> Images::textures;

std::string Images::getPath(images image)
{
    switch(image)
    {
        case PHASER: return "Phaser/images/phaserrr.png";
        case CARDS: return "Phaser/images/cards.png";
    }
    return std::string();
}

void Images::load(images image)
{
    textures[image].loadFromFile(getPath(image));
}

sf::Texture &Images::getImage(images image)
{
    load(image);
    return textures[image];
}
