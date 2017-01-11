//
// Created by klaudia on 10.01.17.
//

#ifndef PROJEKT_BUM_H
#define PROJEKT_BUM_H
#include <SFML/Graphics.hpp>
using namespace sf;

class Bum {


public:
    Vector2f position;
    RectangleShape blokiShape;

    Bum(float startX, float startY, Texture &texture);
    RectangleShape getShape();
    void lata();
    FloatRect getPosition();


};




#endif //PROJEKT_BUM_H
