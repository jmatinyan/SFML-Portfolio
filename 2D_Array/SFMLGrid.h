//
// Created by Julia on 4/3/23.
//

#ifndef INC_2D_ARRAY_SFMLGRID_H
#define INC_2D_ARRAY_SFMLGRID_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class SFMLGrid : public sf::Drawable
{
private:
    sf::RectangleShape** arr;
    int rows, cols;
    void createArray();
    void fillArray();
    sf::RectangleShape newRectangleShape(float x, float y);
    void deleteArray();
public:
    SFMLGrid();
    SFMLGrid(const SFMLGrid& other); // Copy constructor
    SFMLGrid& operator=(const SFMLGrid& other); // Assignment operator
    ~SFMLGrid(); // Destructor
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void eventHandler(sf::RenderWindow& window, sf::Event event);
};


#endif //INC_2D_ARRAY_SFMLGRID_H
