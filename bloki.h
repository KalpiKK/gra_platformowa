//
// Created by klaudia on 27.11.16.
//

#ifndef PROJEKT_BLOKI_H
#define PROJEKT_BLOKI_H

#include <SFML/Graphics.hpp>
using namespace sf;

class Bloki {


public:
    Vector2f position;

    RectangleShape blokiShape;

    float szybkosc = .3f;
    Bloki(float startX, float startY);

    FloatRect getPosition();

    RectangleShape getShape();



    void update();
};

#endif //PROJEKT_BLOKI_H
