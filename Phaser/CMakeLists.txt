cmake_minimum_required(VERSION 3.23)
project(SFMLtutorial)

set(CMAKE_CXX_STANDARD 14)

add_executable(SFMLtutorial Application.cpp Application.h Component.h Card.cpp Card.h Ranks.h Suits.h MouseEvents.cpp MouseEvents.h AnimatedSprite.cpp AnimatedSprite.h EventHandlable.h Updatable.h Images.cpp Images.h States.cpp States.h)
target_link_libraries(SFMLtutorial sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
