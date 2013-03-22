#include <SFML/Graphics.hpp>

#ifndef __PADDLE__
#define __PADDLE__

enum move { up, down };

class Paddle
{
private:
    int                     paddleID;
    int                     width;
    int                     height;
    sf::Vector2f            position;
public:
                            Paddle(int);
    void                    movePaddle(move);
};

#endif
