#include <SFML/Graphics.hpp>
#include "GreenCircle.h"
#include "Button.h"
#include "Interface.h"
#include "Array2D.h"
#include "Phaser.h"
#include "BouncingBall.h"
#include "BouncingHeart.h"
#include "Game2048.h"

//int main()
//{
//
//    sf::Texture backgroundTexture;
//    backgroundTexture.loadFromFile("laptop wallpaper.jpeg");
//    sf::Sprite backgroundSprite(backgroundTexture);
//
//    float scaleX = (float)window.getSize().x / backgroundTexture.getSize().x;
//    float scaleY = (float)window.getSize().y / backgroundTexture.getSize().y;
//    backgroundSprite.setScale(scaleX, scaleY);
//
//    sf::RenderTexture texture;
//    sf::Sprite sprite(texture.getTexture());
//    sprite.setPosition({0, 0});
//
//    Button right(sf::Vector2f(100, 500), sf::Color::Red);
//    Button left(sf::Vector2f(1720, 500), sf::Color::Blue);
//
//    while(window.isOpen())
//    {
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
//            sprite.move(-5, 0);
//        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
//            sprite.move(5, 0);
//
//        texture.draw(sprite);
//        texture.display();
//        window.draw(backgroundSprite);
//        window.draw(sprite);
//
//        window.draw(right);
//        window.draw(left);
//
//        window.display();
//        texture.display();
//    }
//
//    return 0;
//}

int main()
{
    sf::RenderWindow window({1920, 1080, 32}, "Portfolio");
    window.setFramerateLimit(60);

    Interface interface;

    GreenCircle greenCircle;
    interface.add(&greenCircle);

    Array2D array;
    interface.add(&array);

    BouncingBall ball;
    interface.add(&ball);

    Phaser phaser;
    interface.add(&phaser);

//    BouncingHeart heart;
//    interface.add(&heart);

    Game2048 game2048(Game(0, 0));
    interface.add(&game2048);


    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
           interface.EventHandler(window, event);
        }

        interface.update();
        window.clear(sf::Color(248, 197, 200));
        window.draw(interface);
        window.display();
    }
    return 0;
}