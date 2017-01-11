//
// Created by klaudia on 14.12.16.
//

#include "Ryba.h"
Ryba::Ryba(float startX, float startY, Texture &texture)
{
    position.x = startX;
    position.y = startY;
    punktyShape.setSize(sf::Vector2f(50, 50));
    punktyShape.setTexture(&texture);
    punktyShape.setPosition(position);
}
FloatRect Ryba::getPosition()
{
    return punktyShape.getGlobalBounds();
}

RectangleShape Ryba::getShape()
{
    return punktyShape;
}
