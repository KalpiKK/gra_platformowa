//
// Created by klaudia on 11.12.16.
//

#include "punkty.h"
Punkty::Punkty(float startX, float startY,Texture &texture)
{
    position.x = startX;
    position.y = startY;
    punktyShape.setSize(sf::Vector2f(30, 30));
    punktyShape.setTexture(&texture);
    punktyShape.setPosition(position);
}
FloatRect Punkty::getPosition()
{
    return punktyShape.getGlobalBounds();
}

RectangleShape Punkty::getShape()
{
    return punktyShape;
}
