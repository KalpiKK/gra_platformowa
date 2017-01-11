//
// Created by klaudia on 27.11.16.
//

#include "bloki.h"

Bloki::Bloki(float startX, float startY, Texture &texture)
{
    position.x = startX;
    position.y = startY;

    blokiShape.setSize(sf::Vector2f(50, 50));
    blokiShape.setTexture(&texture);
    blokiShape.setPosition(position);
}


RectangleShape Bloki::getShape()
{
    return blokiShape;
}

