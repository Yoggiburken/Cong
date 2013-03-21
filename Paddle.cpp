#include "Paddle.hpp"

using namespace std;

Paddle::Paddle(int playerID)
{
    paddleID = playerID;
}

Paddle::move(enum move)
{
    if (move == up) {
        position.x += 10;
    } else if (move == down) {
        position.y -= 10;
    }
}
