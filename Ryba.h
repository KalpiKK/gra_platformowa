//
// Created by klaudia on 14.12.16.
//

#ifndef PROJEKT_RYBA_H
#define PROJEKT_RYBA_H

#include <SFML/Graphics.hpp>
using namespace sf;

class Ryba {

public:
    Vector2f position;
    RectangleShape punktyShape;
    FloatRect getPosition();
    Ryba(float startX, float startY, Texture &texture);
    RectangleShape getShape();
};




#endif //PROJEKT_RYBA_H
