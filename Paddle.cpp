#include "Paddle.hpp"

Paddle::Paddle(int playerID)
{
    paddleID = playerID;
    
    if (paddleID == 1) {
        position.x = 0;
        position.y = 250;
    } else if (paddleID == 2) {
        position.x = 790;
        position.y = 250;
    }

    width  = 10;
    height = 50;
}

void Paddle::movePaddle(move m)
{
    if (m == up) {
        position.y += 10;
    } else if (m == down) {
        position.y -= 10;
    }
}

/*bool Paddle::collision()
{
    if (position.x + width + 15 <= ) {
        cout << a <<endl;
    }
}*/
