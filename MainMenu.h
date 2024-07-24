//
// Created by Julia on 4/18/23.
//

#ifndef INC_2048_MAINMENU_H
#define INC_2048_MAINMENU_H
#include <SFML/Graphics.hpp>
#include "Button2048.h"
#include "Game.h"

class MainMenu
{
public:
    MainMenu();
    static void run();
    void draw(sf::RenderTarget &target);
};


#endif //INC_2048_MAINMENU_H
