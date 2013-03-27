#include <SFML/Graphics.hpp>
#include <iostream>
#include "Ball.hpp"

using namespace std;

Ball::Ball()
{
    position                    = sf::Vector2f(400,300);

    velocity                    = sf::Vector2f(10,2);

    dimensions                  = sf::Vector2f(10,10);

    ball.setSize(dimensions);
    ball.setPosition(position);
    ball.setFillColor(sf::Color(255,255,255));
}

void Ball::collision()
{
    if (position.y <= 0 && velocity.y < 0) {
        velocity.y *= -1;
    } else if (position.y >= 600 - dimensions.y && velocity.y > 0) {
        velocity.y *= -1;
    }
    if (position.x < 0) {
       //dö 
    } else if (position.x + dimensions.x >= 800) {
        //dö
    }
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
