//
// Created by Julia on 3/29/23.
//

#ifndef SFMLTUTORIAL_CARD_H
#define SFMLTUTORIAL_CARD_H
#include "Component.h"
#include "Ranks.h"
#include "Suits.h"

class Card: public Component {
private:
    sf::Sprite background;
    sf::IntRect intRect;
    static sf::Texture texture;
    void updateCard(Ranks rank, Suits suit);
public:
    Card();
    Card(Ranks rank, Suits suit);
    void eventHandler(sf::RenderWindow &window, sf::Event event);
    void setPosition(sf::Vector2f position);
    void update();

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};


#endif //SFMLTUTORIAL_CARD_H
