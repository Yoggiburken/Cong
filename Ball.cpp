#include <SFML/Graphics.hpp>
#include <iostream>
#include <ctime>
#include "Ball.hpp"

using namespace std;


Ball::Ball()
{
    srand(time(NULL));
    position                    = sf::Vector2f(400,300);

    velocity                    = sf::Vector2f(10-20*(rand()%2),rand()%5-2);

    dimensions                  = sf::Vector2f(10,10);

    buffer.loadFromFile("Resources/scoreGained.wav");
    scoreGained.setBuffer(buffer);

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

        srand(time(NULL));
        scoreGained.play();
        position = sf::Vector2f(400,300);
        velocity = sf::Vector2f(10-20*(rand()%2),rand()%5-2);
    } else if (position.x + dimensions.x >= 800) {
        srand(time(NULL));
        scoreGained.play();
        position = sf::Vector2f(400,300);
        velocity = sf::Vector2f(10-20*(rand()%2),rand()%5-2);
    }
}
void Ball::move(Time &ElapsedTime)
{
    position.x                  += velocity.x*ElapsedTime.asSeconds()*50;
    position.y                  += velocity.y*ElapsedTime.asSeconds()*50;

    ball.setPosition(position);
}

void Ball::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(ball);
}
