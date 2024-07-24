//
// Created by Julia on 4/10/23.
//

#ifndef SFMLTUTORIAL_IMAGES_H
#define SFMLTUTORIAL_IMAGES_H
#include <vector>
#include <SFML/Graphics.hpp>

enum images{
    PHASER, CARDS
};

class Images
{
private:
    static std::map<images, sf::Texture> textures;
    static std::string getPath(images image);
    static void load(images image);
public:
    static sf::Texture& getImage(images image);
};


#endif //SFMLTUTORIAL_IMAGES_H
