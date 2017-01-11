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
    void kolizja2(int la);
    void kolizja3(int la);
    void update(int poziom, Texture &kot1,Texture &kot11,Texture &kot2,Texture &kot22, int to);

};


#endif //PROJEKT_KOT_H
