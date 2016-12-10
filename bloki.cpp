//
// Created by klaudia on 27.11.16.
//

#include "bloki.h"

Bloki::Bloki(float startX, float startY)
{
    position.x = startX;
    position.y = startY;

    blokiShape.setSize(sf::Vector2f(50, 50));
    blokiShape.setFillColor(sf::Color(200, 250, 0));
    blokiShape.setPosition(position);
}
FloatRect Bloki::getPosition()
{
    return blokiShape.getGlobalBounds();
}

RectangleShape Bloki::getShape()
{
    return blokiShape;
}

void Bloki::update()
{
    blokiShape.setPosition(position);
}