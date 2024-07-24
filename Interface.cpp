//
// Created by Julia on 5/1/23.
//

#include "Interface.h"

Interface::Interface() :
left(sf::Vector2f(100, 500), -90, sf::Color(236, 118, 154), font, " ", 10),
right(sf::Vector2f(1820, 500), 90, sf::Color(236, 118, 154), font, " ", 10)
{

}

void Interface::draw(sf::RenderTarget &target, sf::RenderStates state) const
{
    sf::Text title;
    sf::Font font;
    title.setFont(font);
    font.loadFromFile("Insight Sans SSi.ttf");
    title.setPosition({600, 900});
    title.setFillColor(sf::Color(231, 84, 128));
    title.setCharacterSize(50);
    title.setString(((*iter)->getTitle()));
    target.draw(title);

    sf::Text intro;
    intro.setFont(font);
    font.loadFromFile("Insight Sans SSi.ttf");
    intro.setPosition({50, 50});
    intro.setFillColor(sf::Color(231, 84, 128));
    intro.setCharacterSize(38);
    intro.setString("Julia Matinyan\nCRN: 37045\nCS003A\nSpr23");


    sf::Sprite s = ((*iter)->getThumbnail());
    s.setPosition({target.getSize().x / 2.f - s.getGlobalBounds().width / 2.f, target.getSize().y / 2.f - s.getGlobalBounds().height / 2.f});

    target.draw(s);
    target.draw(left);
    target.draw(right);
    target.draw(intro);
}

void Interface::update()
{
    (*iter)->update();
    (*iter)->run();
}

void Interface::EventHandler(sf::RenderWindow &window, sf::Event event)
{
    (*iter)->EventHandler(window, event);

    if (event.type == sf::Event::MouseButtonPressed || event.type == sf::Event::KeyPressed)
    {
        if (left.getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(window))) || event.key.code == sf::Keyboard::Left)
        {
            if (iter != item.begin())
                iter--;
        }
        else if (right.getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(window))) || event.key.code == sf::Keyboard::Right)
        {
            if (iter + 1 != item.end())
                iter++;
        }
    }
}

void Interface::add(Item *item)
{
    this->item.push_back(item);
    iter = this->item.begin();
}

void Interface::run()
{

}
