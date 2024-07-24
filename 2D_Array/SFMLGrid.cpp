//
// Created by Julia on 4/3/23.
//

#include "SFMLGrid.h"

void SFMLGrid::createArray()
{
    arr = new sf::RectangleShape*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new sf::RectangleShape[cols];
    }
}

void SFMLGrid::fillArray()
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            arr[i][j] = newRectangleShape(j * 50, i * 50);
        }
    }
}

sf::RectangleShape SFMLGrid::newRectangleShape(float x, float y)
{
    sf::RectangleShape rect(sf::Vector2f(50, 50));
    sf::Color color(rand() % 256, rand() % 256, rand() % 256); // generate a random color
    rect.setFillColor(color);
    rect.setPosition(x, y);
    return rect;
}

void SFMLGrid::deleteArray()
{
    for (int i = 0; i < rows; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

// Default constructor
SFMLGrid::SFMLGrid()
{
    rows = 1;
    cols = 1;
    createArray();
    fillArray();
}

// Copy constructor
SFMLGrid::SFMLGrid(const SFMLGrid& other)
{
    rows = other.rows;
    cols = other.cols;
    createArray();
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            arr[i][j] = other.arr[i][j];
        }
    }
}

// Assignment operator
SFMLGrid& SFMLGrid::operator=(const SFMLGrid& other)
        {
    if (this != &other)
    {
        deleteArray();
        rows = other.rows;
        cols = other.cols;
        createArray();
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                arr[i][j] = other.arr[i][j];
            }
        }
    }
    return *this;
}

// Destructor
SFMLGrid::~SFMLGrid()
{
    deleteArray();
}

void SFMLGrid::draw(sf::RenderTarget& window, sf::RenderStates states) const
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            window.draw(arr[i][j], states);
        }
    }
}

void SFMLGrid::eventHandler(sf::RenderWindow& window, sf::Event event)
{
    if (event.type == sf::Event::KeyPressed)
    {
        if (event.key.code == sf::Keyboard::Up)
        {
            deleteArray();
            rows--;
            cols--;
            createArray();
            fillArray();
        }
        else if (event.key.code == sf::Keyboard::Down)
        {
            deleteArray();
            rows++;
            cols++;
            createArray();
            fillArray();
        }
    }
}
