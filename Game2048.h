//
// Created by Julia on 5/6/23.
//

#ifndef CS3_PORTFOLIO_GAME2048_H
#define CS3_PORTFOLIO_GAME2048_H
#include <SFML/Graphics.hpp>
#include "Item.h"
#include "Button2048.h"
#include "Game.h"

class Game2048 : public Item
{
public:
    Game2048(Game game);
    const sf::Sprite &getThumbnail() const override;
    void run() override;
    void EventHandler(sf::RenderWindow &window, sf::Event event) override;
    std::string getTitle() override;
    void update() override;

private:
    sf::RenderTexture texture;
    sf::Sprite sprite;
    Game game;

};


#endif //CS3_PORTFOLIO_GAME2048_H
