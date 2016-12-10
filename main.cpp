#include <SFML/Graphics.hpp>
#include "kot.h"
#include "bloki.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

class Mapa {
public:
    char mapa1();
    //void mapa2();
    //void mapa3();
};
char Mapa::mapa1(){
    sf::Texture texture;
    texture.loadFromFile("/home/klaudia/PycharmProjects/nechee/mapa3.png");
    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(0, 0);
}

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Neeche!");

    //sf::Texture gracz;
    //gracz.loadFromFile("/home/klaudia/PycharmProjects/nechee/kot.png");
    //sf::Sprite kot;
    //kot.setTexture(gracz);
    //kot.setPosition(0, 950);
    //char Mapa::mapa()
    Texture lista;
    lista.loadFromFile("/home/klaudia/PycharmProjects/nechee/kot.png");
    Kot kot (lista, FloatRect(60,890,55,48));

    Clock timer;
    float time;
     int map[20][20] = {
                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}

        };


    while (window.isOpen()) {

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        window.clear();
        time = timer.getElapsedTime().asMicroseconds();
        timer.restart();
        time /= 1000;


        //Bloki blok(500, 500);
        //window.draw(blok.getShape());

        for (int mapX = 0; mapX < 20; mapX++) {
            for (int mapY = 0; mapY < 20; mapY++) {
                if (map[mapY][mapX] == 1) {
                    Bloki bloki(mapX * 50, mapY * 50);


                    //     cout << "First sentence." << endl;

                    window.draw(bloki.getShape());
                }
            }
        }


        if (Keyboard::isKeyPressed(Keyboard::Right)) {
            kot.dx = 0.5;
        }
        if (Keyboard::isKeyPressed(Keyboard::Left)) {
            kot.dx = -0.5;
        }
        if (Keyboard::isKeyPressed(Keyboard::Up)) {
            if (kot.podloga == true) {
                kot.podloga = false;
                kot.dy = -0.3;
            }
        }

        kot.update(time);


        window.draw(kot.sprite);
        window.display();
    }

    return 0;
}