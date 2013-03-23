#include <SFML/Graphics.hpp>
#include "Ball.hpp"

using namespace sf;

Ball::Ball()
{
    position                    = sf::Vector2f(400,300);

    velocity                    = sf::Vector2f(10,3);

    radius                      = 5;

    ball.setRadius(radius);
    ball.setPosition(position);
    ball.setFillColor(sf::Color(255,0,0));
}
void Ball::move()
{
    position.x                  += velocity.x;
    position.y                  += velocity.y;
}

void Ball::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(ball);
}
