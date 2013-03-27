#include<iostream>
using namespace std;
#include<cmath>
#include "Paddle.hpp"

const double PI = 3.14159265;

Paddle::Paddle(int playerID)
{
    paddleID = playerID;
    
    if (paddleID == 1) {
        position = sf::Vector2f(0, 250);
    } else if (paddleID == 2) {
        position = sf::Vector2f(790, 250);
    }

    paddle.setSize(sf::Vector2f(10,100));
    paddle.setFillColor(sf::Color(255,255,255));
    paddle.setPosition(position);
}

void Paddle::collision(Ball &ball)
{
    if (ball.velocity.x > 0 && paddleID == 2) {
        if (ball.position.x+ball.dimensions.x >= position.x) {
            if (ball.position.y >= position.y && ball.position.y <= position.y+100) {
                double x = (ball.position.y + ball.dimensions.y/2 - (position.y + paddle.getSize().y/2)) / paddle.getSize().y;
                ball.velocity.x     = -cos(x*70*PI/180)*10;
                ball.velocity.y     =  sin(x*70*PI/180)*10;
            }
        }
    } else if (ball.velocity.x < 0 && paddleID == 1) {
        if (ball.position.x-ball.dimensions.x <= position.x) {
            if (ball.position.y >= position.y && ball.position.y <= position.y+100) {
                double x = (position.y + paddle.getSize().y/2 - (ball.position.y + ball.dimensions.y/2)) / paddle.getSize().y;
                ball.velocity.x     =  cos(x*70*PI/180)*10;
                ball.velocity.y     = -sin(x*70*PI/180)*10;
            }
        }
    }
}

void Paddle::movePaddle(move m)
{
    if (m == up && position.y > 0) {
        position.y -= 10;
    } else if (m == down && position.y < 500) {
        position.y += 10;
    }

    paddle.setPosition(position);
}

void Paddle::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(paddle);
}
