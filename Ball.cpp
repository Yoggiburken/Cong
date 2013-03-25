#include <SFML/Graphics.hpp>
#include <iostream>
#include "Ball.hpp"

using namespace std;

Ball::Ball()
{
    position                    = sf::Vector2f(400,300);

    velocity                    = sf::Vector2f(5,0);

    dimensions                  = sf::Vector2f(10,10);

    ball.setSize(dimensions);
    ball.setPosition(position);
    ball.setFillColor(sf::Color(255,255,255));
}
void Ball::move()
{
    position.x                  += velocity.x;
    position.y                  += velocity.y;

    ball.setPosition(position);
}

void Ball::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(ball);
}
