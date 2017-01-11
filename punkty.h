//
// Created by klaudia on 11.12.16.
//

#ifndef PROJEKT_PUNKTY_H
#define PROJEKT_PUNKTY_H

#include <SFML/Graphics.hpp>
using namespace sf;

class Punkty {

public:
    Vector2f position;
    RectangleShape punktyShape;
    FloatRect getPosition();
    Punkty(float startX, float startY, Texture &texture);
    RectangleShape getShape();

};


#endif //PROJEKT_PUNKTY_H
