#include <SFML/Graphics.hpp>
#include "Score.hpp"

#ifndef __PADDLE__
#define __PADDLE__

enum move { up, down };
//extern move movement;

class Paddle
{
private:
    int                 paddleID;
    int                 width;
    int                 height;
    sf::Vector2f        position;
    Score score;
public:
    Paddle(int);
    void movePaddle(move);
};

#endif
