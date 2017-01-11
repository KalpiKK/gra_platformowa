//
// Created by klaudia on 20.11.16.
//

#include "kot.h"

int mapp[20][20] = {
                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 2, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1},
                {1, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 1},
                {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1},
                {1, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 1, 1, 1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1},
                {1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1}

        };
int mapp2[20][20] ={
                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                {1, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 1},
                {1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1},
                {1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 2, 1},
                {1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 1, 0, 2, 0, 1, 0, 0, 0, 1, 0, 0, 0, 2, 0, 1, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 1, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 1},
                {1, 0, 0, 1, 1, 1, 2, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1},
                {1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 1, 1, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 2, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1}

        };
    int mapp3[20][20] = {
                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 1},
                {1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 2, 2, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1},
                {1, 0, 1, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 2, 2, 0, 0, 0, 0, 0, 2, 1},
                {1, 0, 0, 0, 0, 0, 0, 1, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1},
                {1, 2, 2, 2, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1},
                {1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1, 1},
                {1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 2, 0, 0, 0, 0, 0, 0, 1, 1},
                {1, 0, 0, 0, 0, 0, 2, 2, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}

        };
Kot::Kot(Texture &texture, FloatRect re)
{
    dx = 0;
    dy = 0;
    rect = re;

    sprite.setTexture(texture);
    sprite.setTextureRect(IntRect(0,0,52,48));

    podloga = false;
}

void Kot::update( int poziom,Texture &kot1,Texture &kot11,Texture &kot2,Texture &kot22, int to)
{

    //na boki i kolizja
    rect.left += dx;
    if ( poziom == 1) {
        kolizja(0);
    //odrywa sie od blokow - skacze
        if (podloga == false);{
            dy += 0.006;}
    // w gore i kolizja, skok podloga =false
        rect.top += dy;
        podloga = false;
        kolizja(1);}
    if (poziom == 2){
        kolizja2(0);
        if (podloga == false);{
            dy += 0.006;}
        rect.top += dy;
        podloga = false;
        kolizja2(1);}
    if(poziom == 3){
        kolizja3(0);
        if (podloga == false);{
            dy += 0.006;}
        rect.top += dy;
        podloga = false;
        kolizja3(1);}
    //animacja chodzenia
    if (dx > 0)
    {   if (to%4==0){sprite.setTexture(kot1);sprite.setTextureRect(IntRect(0,0,52,48));}
        else{ sprite.setTexture(kot11);sprite.setTextureRect(IntRect(0,0,52,48));}}
    if (dx < 0)
    {   if (to%4==0){sprite.setTexture(kot2);sprite.setTextureRect(IntRect(0,0,52,48));}
        else{sprite.setTexture(kot22);sprite.setTextureRect(IntRect(0,0,52,48));}}

    //stop gdy nie przyciska sie klawisza
    sprite.setPosition(rect.left, rect.top);
    dx = 0;


}

void Kot::kolizja(int la){
 for(int i = rect.left / 50; i < (rect.left + rect.width) / 50; i++)
        for(int j = rect.top / 50; j < (rect.top + rect.height) / 50; j++) {
            if(mapp[j][i] == 1 ) {
                //kolizja na boki blokow
                if (dx < 0 && la == 0) {
                    rect.left = i * 50 + 50;}
                else if(dx > 0 && la == 0) {
                    rect.left = i * 50 - rect.width; }

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
void Kot::kolizja2(int la){
 for(int i = rect.left / 50; i < (rect.left + rect.width) / 50; i++)
        for(int j = rect.top / 50; j < (rect.top + rect.height) / 50; j++) {
            if(mapp2[j][i] == 1 ) {
                if (dx < 0 && la == 0) {
                    rect.left = i * 50 + 50;}
                else if(dx > 0 && la == 0) {
                    rect.left = i * 50 - rect.width; }

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
void Kot::kolizja3(int la){
 for(int i = rect.left / 50; i < (rect.left + rect.width) / 50; i++)
        for(int j = rect.top / 50; j < (rect.top + rect.height) / 50; j++) {
            if(mapp3[j][i] == 1 ) {
                if (dx < 0 && la == 0) {
                    rect.left = i * 50 + 50;}
                else if(dx > 0 && la == 0) {
                    rect.left = i * 50 - rect.width; }

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