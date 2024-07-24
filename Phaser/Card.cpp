//
// Created by Julia on 3/29/23.
//

#include "Card.h"
#include "Component.h"

sf::Texture Card::texture;
Card::Card()
{

}

Card::Card(Ranks rank, Suits suit)
{
    texture.loadFromFile("images/cards.png");
    background.setTexture(texture);
    intRect.width = 2925 / 13;              //building a rectangle with the card, basically cutting up the image into the cards
    intRect.height = 1260 / 4;
    updateCard(rank, suit);
}

void Card::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(background);
}

void Card::eventHandler(sf::RenderWindow &window, sf::Event event)
{
    if(MouseEvents::isClicked(background.getGlobalBounds(), window))
    {
        int r = (intRect.left/intRect.width) + 1;
        int s = (intRect.top/intRect.height) + 1;
        Ranks rank = static_cast<Ranks>(r % (KING +1));
        Suits suit = static_cast<Suits>(s % (CLUBS +1));
        updateCard(rank, suit);
    }
}

void Card::updateCard(Ranks rank, Suits suit)
{
    intRect.left = rank * intRect.width;
    intRect.top = suit * intRect.height;
    background.setTextureRect(intRect);
}

void Card::setPosition(sf::Vector2f position)
{
    background.setPosition(position);
}

void Card::update()
{

}