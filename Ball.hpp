#include <SFML/Graphics.hpp>

using namespace sf;

#ifndef __BALL__
#define __BALL__

class Ball
{
private:
    sf::Vector2f                position;
    sf::Vector2f                velocity;
    int                         radius;
public:
                                Ball();
    void                        move();
};

#endif
