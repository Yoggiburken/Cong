#include <SFML/Graphics.hpp>
#include "Ball.hpp"

using namespace sf;

Ball::Ball()
{
    position.x  = 400;
    position.y  = 400;

    velocity.x  = 10;
    velocity.y  = 3;

    radius      = 5;
}
void Ball::move()
{
    position.x += velocity.x;
    position.y += velocity.y;
}
