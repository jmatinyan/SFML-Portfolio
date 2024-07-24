cmake_minimum_required(VERSION 3.23)
project(cs3_portfolio)

set(CMAKE_CXX_STANDARD 14)

add_executable(cs3_portfolio main.cpp GreenCircle.cpp GreenCircle.h Button.cpp Button.h Interface.cpp Interface.h Item.cpp Item.h 2D_Array/SFMLGrid.h 2D_Array/SFMLGrid.cpp Array2D.cpp Array2D.h
        Phaser.cpp Phaser.h Phaser/Application.cpp Phaser/Application.h Phaser/Component.h Phaser/Card.cpp Phaser/Card.h Phaser/Ranks.h Phaser/Suits.h Phaser/MouseEvents.cpp Phaser/MouseEvents.h
        Phaser/AnimatedSprite.cpp Phaser/AnimatedSprite.h Phaser/EventHandlable.h Phaser/Updatable.h Phaser/Images.cpp Phaser/Images.h Phaser/States.cpp Phaser/States.h
        BouncingBall.cpp BouncingBall.h BouncingHeart.cpp BouncingHeart.h
        Game.h Game.cpp GameColors.cpp GameColors.h GameSizes.h MainMenu.cpp MainMenu.h Tile.cpp Tile.h Game2048.cpp Game2048.h Button2048.cpp Button2048.h)

target_link_libraries(cs3_portfolio sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
