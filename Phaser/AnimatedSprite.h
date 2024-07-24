//
// Created by Julia on 4/6/23.
//

#ifndef SFMLTUTORIAL_ANIMATEDSPRITE_H
#define SFMLTUTORIAL_ANIMATEDSPRITE_H
#include <SFMl/Graphics.hpp>
#include "Component.h"
#include "EventHandlable.h"
#include "Updatable.h"
#include <iostream>
#include <cmath>

enum directions {FORWARD, LEFT, RIGHT, BACK};

class AnimatedSprite : public Component, public sf::Sprite
{
private:
    sf::Clock clock;
    sf::IntRect intRect;
    int time = 250;
    float speed;
    sf::Keyboard::Key forwardKey = sf::Keyboard::Down,
    leftKey = sf::Keyboard::Left,
    rightKey = sf::Keyboard::Right,
    downKey = sf::Keyboard:: Up;
    void setup(sf::Texture & texture, int rows, int cols);
    void setupIntRect(sf::Vector2u imgSize, int rows, int cols);
    unsigned int width, height;

public:
    AnimatedSprite();
    AnimatedSprite(sf::Texture & texture, int rows, int cols);
    void changeDirection(directions direction);
    void animate();
    void update();
    void setForwardKey(sf::Keyboard::Key forwardKey);
    void setLeftKey(sf::Keyboard::Key leftKey);
    void setRightKey(sf::Keyboard::Key rightKey);
    void setDownKey(sf::Keyboard::Key downKey);
    float getSpeed() const;
    void setSpeed(float speed);
    int getTime() const;
    void setTime(int time);
    void eventHandler(sf::RenderWindow &window, sf::Event event) override;
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //SFMLTUTORIAL_ANIMATEDSPRITE_H
