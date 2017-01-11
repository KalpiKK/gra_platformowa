//
// Created by klaudia on 10.01.17.
//

#include "bum.h"


Bum::Bum(float startX, float startY, Texture &texture)
{
    position.x = startX;
    position.y = startY;

    blokiShape.setSize(sf::Vector2f(50, 50));
    blokiShape.setTexture(&texture);
    blokiShape.setPosition(position);
}

void Bum::lata()
{ if (position.x <0) {
        position.x = position.x + 4;
    }
    if (position.x >1000) {
        position.x = position.x - 4;
    }
    if (position.y <0) {
        position.x = position.x + 4;
    }
    if (position.y >1000) {
        position.x = position.x - 4;
    }
}
RectangleShape Bum::getShape()
{
    return blokiShape;
}
FloatRect Bum::getPosition()
{
    return blokiShape.getGlobalBounds();
}