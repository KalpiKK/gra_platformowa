//
// Created by klaudia on 20.11.16.
//

#ifndef PROJEKT_KOT_H
#define PROJEKT_KOT_H
#include <SFML/Graphics.hpp>
#include "bloki.h"
using namespace sf;

class Kot {
public:

    float dx, dy;
    Sprite sprite;

    Kot(Texture &texture, FloatRect re);
    FloatRect rect;

    bool podloga;
    void kolizja(int la);
    void update(float time);

};


#endif //PROJEKT_KOT_H
