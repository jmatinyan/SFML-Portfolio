//
// Created by Julia on 5/1/23.
//

#ifndef CS3_PORTFOLIO_ARRAY2D_H
#define CS3_PORTFOLIO_ARRAY2D_H
#include <SFML/Graphics.hpp>
#include "Item.h"
#include "2D_Array/SFMLGrid.h"

class Array2D : public Item
{
public:
    Array2D();
    const sf::Sprite &getThumbnail() const override;
    void run() override;
    void EventHandler(sf::RenderWindow &window, sf::Event event) override;
    std::string getTitle() override;
    void update() override;

private:
    sf::RenderTexture array;
    sf::Sprite sprite;
    SFMLGrid grid;
};


#endif //CS3_PORTFOLIO_ARRAY2D_H
