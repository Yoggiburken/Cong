#include <SFML/Graphics.hpp>

#ifndef __PADDLE__
#define __PADDLE__

class Paddle
{
private:
    int                 paddleID;
    sf::Vector2f        position;
public:
    Paddle();
    void move();
};

#endif
