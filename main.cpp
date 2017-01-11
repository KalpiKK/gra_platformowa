#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "kot.h"
#include "punkty.h"
#include "Ryba.h"
#include "bum.h"

using namespace std;

int serce = 3;
int prawo = 1;int z = 0;
int r = 150;
int main()

{
    int map[20][20] = {
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
    int map2[20][20] = {
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
    int map3[20][20] = {
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
    int map1[20][20] = {
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
    int map22[20][20] = {
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
    int map33[20][20] = {
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
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Neeche!");

    Texture imgpunkty;
    imgpunkty.loadFromFile("/home/klaudia/PycharmProjects/nechee/bonus.png");
    Texture imgryba;
    imgryba.loadFromFile("/home/klaudia/PycharmProjects/nechee/ryba.png");

    Texture bloki1;
    bloki1.loadFromFile("/home/klaudia/PycharmProjects/nechee/blok1.png");
    Texture plansza1;
    plansza1.loadFromFile("/home/klaudia/PycharmProjects/nechee/mapa1.png");

    Texture bloki2;
    bloki2.loadFromFile("/home/klaudia/PycharmProjects/nechee/blok2.png");
    Texture plansza2;
    plansza2.loadFromFile("/home/klaudia/PycharmProjects/nechee/mapa2.png");

    Texture bloki3;
    bloki3.loadFromFile("/home/klaudia/PycharmProjects/nechee/blok3.png");
    Texture plansza3;
    plansza3.loadFromFile("/home/klaudia/PycharmProjects/nechee/mapa3.png");

    Texture kot1;
    kot1.loadFromFile("/home/klaudia/PycharmProjects/nechee/kot1.png");
    Texture kot11;
    kot11.loadFromFile("/home/klaudia/PycharmProjects/nechee/kot11.png");
    Texture kot2;
    kot2.loadFromFile("/home/klaudia/PycharmProjects/nechee/kot2.png");
    Texture kot22;
    kot22.loadFromFile("/home/klaudia/PycharmProjects/nechee/kot22.png");

    Texture li;
    li.loadFromFile("/home/klaudia/PycharmProjects/nechee/kot1.png");


    Kot kot (kot1, FloatRect(60,890,55,48));


    int x = 0;
    int po = 0;
    int punktow = 0;
    sf::Texture tekstura;
    tekstura.loadFromFile("/home/klaudia/PycharmProjects/nechee/menu.png");
    sf::Sprite menu;
    menu.setTexture(tekstura);
    while (window.isOpen()) {


        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }



        if (Keyboard::isKeyPressed(Keyboard::S)){
            x = 1;
            window.clear();
            po = 0;
            sf::Event event;

            for (int mapX = 0; mapX < 20; mapX++) {
                for (int mapY = 0; mapY < 20; mapY++) {
                    if (map1[mapY][mapX] == 2) {
                        map[mapY][mapX] = 2;
                    }
                    if (map22[mapY][mapX] == 2) {
                        map2[mapY][mapX] = 2;
                    }
                    if (map33[mapY][mapX] == 2) {
                        map3[mapY][mapX] = 2;
                    }
                        }}



        }
        if (x == 1)
        {

            window.clear();
            sf::Sprite plansz1;
            plansz1.setTexture(plansza1);
            window.draw(plansz1);


            if (po == 0) {
                 if (z<1000){
                z=z+1;}
            if (z==1000){
                z=0;}


            Bum bum(z,r,li);
            window.draw(bum.getShape());

             if(bum.getPosition().intersects(kot.sprite.getGlobalBounds())){
                 serce --;
                 kot.rect.left = 60;
                            kot.rect.top = 850;
                 if (serce==0){
                    x = 0;
                }
             }


            for (int mapX = 0; mapX < 20; mapX++) {
                for (int mapY = 0; mapY < 20; mapY++) {
                    if (map[mapY][mapX] == 1) {
                        Bloki bloki(mapX * 50, mapY * 50,bloki1);
                        window.draw(bloki.getShape());
                    }
                    if (map[mapY][mapX] == 2) {
                        Punkty punkty(mapX * 50, mapY * 50, imgpunkty);
                        window.draw(punkty.getShape());


                        if (punkty.getPosition().intersects(kot.sprite.getGlobalBounds())) {

                            map[mapY][mapX] = 0;
                            punktow = punktow - 1;
                        }

                    }


                    if (map[mapY][mapX] == 3) {
                        Ryba ryba(mapX * 50, mapY * 50,imgryba);
                        window.draw(ryba.getShape());
                        if (ryba.getPosition().intersects(kot.sprite.getGlobalBounds())&& punktow == -15 ) {
                            window.clear();
                            kot.rect.left = 60;
                            kot.rect.top = 850;
                            po = 1;
                            break;


                        }}


            }
                }
            }
            if (po == 1){


                window.clear();
            sf::Sprite plansz2;
            plansz2.setTexture(plansza2);
            window.draw(plansz2);
                            for (int mapX = 0; mapX < 20; mapX++) {
                             for (int mapY = 0; mapY < 20; mapY++) {
                                 if (map2[mapY][mapX] == 1) {
                                    Bloki bloki(mapX * 50, mapY * 50,bloki2);
                                    window.draw(bloki.getShape());}
                                if (map2[mapY][mapX] ==2) {
                                    Punkty punkty(mapX * 50, mapY * 50,imgpunkty);
                                     window.draw(punkty.getShape());

                        if (punkty.getPosition().intersects(kot.sprite.getGlobalBounds())) {
                            map2[mapY][mapX] = 0;
                            punktow = punktow - 1;
                        }}
                             if (map2[mapY][mapX] == 3) {
                        Ryba ryba(mapX * 50, mapY * 50,imgryba);
                        window.draw(ryba.getShape());
                        if (ryba.getPosition().intersects(kot.sprite.getGlobalBounds())&& punktow == -35) {
                            window.clear();
                             kot.rect.left = 60;
                kot.rect.top = 850;
                            po = 2;
                            break;
                        }}
                             }}
                        }
            if (po == 2){
                window.clear();
            sf::Sprite plansz3;
            plansz3.setTexture(plansza3);
            window.draw(plansz3);

                            for (int mapX = 0; mapX < 20; mapX++) {
                             for (int mapY = 0; mapY < 20; mapY++) {
                                 if (map3[mapY][mapX] == 1) {
                                    Bloki bloki(mapX * 50, mapY * 50,bloki3);
                                    window.draw(bloki.getShape());}
                                if (map3[mapY][mapX] ==2) {
                                    Punkty punkty(mapX * 50, mapY * 50,imgpunkty);
                                     window.draw(punkty.getShape());


                        if (punkty.getPosition().intersects(kot.sprite.getGlobalBounds())) {
                            map3[mapY][mapX] = 0;
                            punktow = punktow - 1;
                        }}
                             if (map3[mapY][mapX] == 3) {
                        Ryba ryba(mapX * 50, mapY * 50,imgryba);
                        window.draw(ryba.getShape());
                        if (ryba.getPosition().intersects(kot.sprite.getGlobalBounds()) && punktow == -63) {
                            window.clear();
                            x=0;
                            kot.rect.left = 60;
                            kot.rect.top = 850;
                            break;
                        }}
                             }}
                        }
            //spada i zycie
            if (kot.rect.top > 950)  {
                kot.rect.left = 60;
                kot.rect.top = 850;
                serce--;

                if (serce==0){
                    x = 0;
                }
                else{continue;}
            }
                 sf::Font font;
                font.loadFromFile("/home/klaudia/PycharmProjects/nechee/Hanged Letters.ttf");

                 sf::Text text;
                text.setFont(font);
                text.setCharacterSize(50);
                text.setColor(sf::Color::Black);
                text.setStyle(sf::Text::Bold);
                if (serce == 3){
                    text.setString(" LIFE: 3");
                }
                if (serce == 2) {
                    text.setString(" LIFE: 2");
                }
                if (serce ==1) {
                    text.setString(" LIFE: 1");
                }
                window.draw(text);

            if (Keyboard::isKeyPressed(Keyboard::Right)) {
                kot.dx = 0.8;
                prawo = prawo + 1;
            }
            if (Keyboard::isKeyPressed(Keyboard::Left)) {
                kot.dx = -0.9;
                prawo = prawo +1;
            }
            if (Keyboard::isKeyPressed(Keyboard::Up)) {
                //tylko z podlogi sie odbija
                if (kot.podloga == true) {
                    kot.podloga = false;
                    kot.dy = -1.4;
                }
            }
            if (po ==0){
            kot.update(1,kot1,kot11,kot2,kot22,prawo);
            window.draw(kot.sprite);
            window.display();
            }

            if (po ==1){
                kot.update( 2,kot1,kot11,kot2,kot22,prawo);
            window.draw(kot.sprite);
            window.display();
            }
            if (po ==2){
            kot.update(3,kot1,kot11,kot2,kot22,prawo);
            window.draw(kot.sprite);
            window.display();
            }

        }
        else
        {window.draw(menu);window.display();
        serce = 3;
        punktow = 0; po = 0;
        map[20][20] = map1[20][20];}
    }
    return 0;
}