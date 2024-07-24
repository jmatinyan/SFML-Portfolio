//
// Created by Julia on 4/28/23.
//

#include "Button.h"

Button::Button(sf::Vector2f position, float rotation, sf::Color color, sf::Font &font, std::string textString, int charSize)
{
    triangleButton.setPointCount(3);
    triangleButton.setRadius(70.f);
    triangleButton.setOrigin(triangleButton.getGlobalBounds().left + triangleButton.getGlobalBounds().width / 2,
                             triangleButton.getGlobalBounds().top + triangleButton.getGlobalBounds().height / 2);

    position = position;
    rotation = rotation;
    color = color;

    triangleButton.setPosition(position);
    triangleButton.setRotation(rotation);
    triangleButton.setFillColor(color);

    text.setFillColor(sf::Color::White);
    text.setOrigin(text.getGlobalBounds().width / 2, text.getGlobalBounds().height / 2);
}

void Button::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    window.draw(triangleButton);
    window.draw(text);
}

bool Button::isMouseOver(sf::RenderWindow &window)
{
    sf::Vector2f mousePosition = sf::Vector2f(sf::Mouse::getPosition(window));
    return triangleButton.getGlobalBounds().contains(mousePosition);
}

sf::FloatRect Button::getGlobalBounds() const
{
    return triangleButton.getGlobalBounds();
}

void Button::run()
{

}