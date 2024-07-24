//
// Created by Julia on 4/6/23.
//

#include "AnimatedSprite.h"

AnimatedSprite::AnimatedSprite()
{

}

AnimatedSprite::AnimatedSprite(sf::Texture &texture, int rows, int cols)
{
    setup(texture, rows, cols);
}

void AnimatedSprite::setup(sf::Texture &texture, int rows, int cols)
{
    width = texture.getSize().x;
    height = texture.getSize().y;
    setTexture(texture);
    setupIntRect(texture.getSize(), rows, cols);
}


void AnimatedSprite::animate()
{
    if(clock.getElapsedTime().asMilliseconds() > time)
    {
        setTextureRect(intRect);
        if(intRect.left >= width - intRect.width*2)
            intRect.left = 0;
        else
            intRect.left += intRect.width;
        clock.restart();
        setTextureRect(intRect);
    }
}

void AnimatedSprite::setupIntRect(sf::Vector2u imgSize, int rows, int cols)
{
    intRect.width = std::round(imgSize.x / static_cast<float>(cols));
    intRect.height = imgSize.y / rows;
    intRect.left = 0;
    intRect.top = 0;
    setTextureRect(intRect);
}

int AnimatedSprite::getTime() const
{
    return time;
}

void AnimatedSprite::setTime(int time)
{
    AnimatedSprite::time = time;
}

void AnimatedSprite::update()
{
    if(check_state(MOVING))
    {
        animate();
    }
}

void AnimatedSprite::eventHandler(sf::RenderWindow &window, sf::Event event)
{
    sf::Vector2f velocity;
    if(sf::Keyboard::isKeyPressed(forwardKey))
    {
        changeDirection(FORWARD);
        velocity.x = 0;
        velocity.y = speed;
    }
    else if(sf::Keyboard::isKeyPressed(downKey))
    {
        changeDirection(BACK);
        velocity.x = 0;
        velocity.y = -speed;
    }
    else if(sf::Keyboard::isKeyPressed(leftKey))
    {
        changeDirection(LEFT);
        velocity.x = -speed;
        velocity.y = 0;
    }
    else if(sf::Keyboard::isKeyPressed(rightKey))
    {
        changeDirection(RIGHT);
        velocity.x = speed;
        velocity.y = 0;
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
    {
        toggle_state(MOVING);
        while(sf::Keyboard::isKeyPressed(sf::Keyboard::Space));
    }
    move(velocity);
}

void AnimatedSprite::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    sf::Sprite s = (*this);
    target.draw(s);
}

void AnimatedSprite::changeDirection(directions direction)
{
    intRect.top = direction * intRect.height;
}

float AnimatedSprite::getSpeed() const
{
    return speed;
}

void AnimatedSprite::setSpeed(float speed)
{
    AnimatedSprite::speed = speed;
}

void AnimatedSprite::setForwardKey(sf::Keyboard::Key forwardKey)
{
    AnimatedSprite::forwardKey = forwardKey;
}

void AnimatedSprite::setLeftKey(sf::Keyboard::Key leftKey)
{
    AnimatedSprite::leftKey = leftKey;
}

void AnimatedSprite::setRightKey(sf::Keyboard::Key rightKey)
{
    AnimatedSprite::rightKey = rightKey;
}

void AnimatedSprite::setDownKey(sf::Keyboard::Key downKey)
{
    AnimatedSprite::downKey = downKey;
}



