//
// Created by Julia on 5/6/23.
//

#include "Game2048.h"

Game2048::Game2048(Game game) : game(game)
{
    texture.create(700, 700, 32);
    sprite.setTexture(texture.getTexture());
    texture.display();
}

const sf::Sprite &Game2048::getThumbnail() const
{
    return sprite;
}

void Game2048::run()
{
    MainMenu mainMenu;
    texture.clear();
    MainMenu::run();
    //texture.draw(game);
    texture.display();
}

void Game2048::EventHandler(sf::RenderWindow &window, sf::Event event)
{
    game.eventHandler(event);
}

std::string Game2048::getTitle()
{
    return "2048";
}

void Game2048::update()
{

}
