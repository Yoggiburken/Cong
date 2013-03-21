#include <SFML/Graphics.hpp>

#ifndef __PADDLE__
#define __PADDLE__

enum move { up, down };
//extern move movement;

class Paddle
{
private:
    int                 paddleID;
public:
    sf::Vector2f        position;
    Paddle(int);
    void movePaddle(move);
};

#endif
