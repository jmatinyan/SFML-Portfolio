//
// Created by Julia on 4/28/23.
//

#ifndef CS3_PORTFOLIO_BUTTON_H
#define CS3_PORTFOLIO_BUTTON_H

#include <SFML/Graphics.hpp>
#include <string>

class Button : public sf::Drawable
{
private:
    sf::CircleShape triangleButton;
    sf::Text text;
    sf::Vector2f position;
    sf::Color color;
public:
    Button(sf::Vector2f position, float rotation, sf::Color color, sf::Font &font, std::string textString, int charSize);
    void draw(sf::RenderTarget &window, sf::RenderStates states) const;
    bool isMouseOver(sf::RenderWindow& window);
    sf::FloatRect getGlobalBounds() const;
    void run();
};

#endif //CS3_PORTFOLIO_BUTTON_H
