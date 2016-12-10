//
// Created by klaudia on 20.11.16.
//

#include "kot.h"
String Map[20] = {
            {"AAAAAAAAAAAAAAAAAAAAA"},
            {"A                  A"},
            {"A                  A"},
            {"A                  A"},
           {"A                  A"},
            {"A                  A"},
            {"A                  A"},
            {"A                  A"},
           {"A                  A"},
           {"A                  A"},
            {"A                  A"},
            {"A                  A"},
           {"A                  A"},
            {"A                  A"},
            {"A                  A"},
            {"A                  A"},
           {"A                  A"},
           {"A                  A"},
            {"A     AA           A"},
            {"AAAAAAAAAAAAAAAAAAAAA"}

    };

Kot::Kot(Texture &texture, FloatRect re)
{
    dx = 0;
    dy = 0;
    rect = re;
    sprite.setTexture(texture);
    sprite.setTextureRect(IntRect(0,0,55,48));

    podloga = false;
}

void Kot::update(float time)
{
    rect.left += dx;
    kolizja(0);
    if (podloga == false);
        dy += 0.0005 ;
    rect.top += dy ;

    podloga = false;
    kolizja(1);

    sprite.setPosition(rect.left, rect.top);
    dx = 0;


}
void Kot::kolizja(int la){
 for(int i = rect.left / 50; i < (rect.left + rect.width) / 50; i++)
        for(int j = rect.top / 50; j < (rect.top + rect.height) / 50; j++) {
            if(Map[j][i] == 'A' ) {

                if(dx < 0 && la == 0) {rect.left = i * 50 + 50;}
                else if(dx > 0 && la == 0) {rect.left = i * 50 - rect.width;}

                if(dy < 0 && la == 1) {
                    rect.top = j * 50 + 50;
                    dy = 0;
                } else if(dy > 0 && la == 1) {
                    rect.top = j * 50 - rect.height;
                    dy = 0;
                    podloga = true;
                }
            }
        }
    }