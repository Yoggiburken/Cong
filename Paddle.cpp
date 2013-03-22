#include "Paddle.hpp"

Paddle::Paddle(int playerID)
{
    paddleID = playerID;
    
    if (paddleID == 1) {
        position.x = 0;
        position.y = 0;
    } else if (paddleID == 2) {
        position.x = 700;
        position.y = 0;
    }
}

void Paddle::movePaddle(move m)
{
    if (m == up) {
        position.y += 10;
    } else if (m == down) {
        position.y -= 10;
    }
}
