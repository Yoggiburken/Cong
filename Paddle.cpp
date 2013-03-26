#include "Paddle.hpp"

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
    if (ball.velocity.x > 0) {
        if (ball.position.x == position.x-10) {
            if (ball.position.y >= position.y && ball.position.y <= position.y+100) {
                ball.velocity.x *= -1;
            }
        }
    } else if (ball.velocity.x < 0) {
        if (ball.position.x == position.x+10) {
            if (ball.position.y >= position.y && ball.position.y <= position.y+100) {
                ball.velocity.x *= -1;
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
