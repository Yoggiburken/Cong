#ifndef __CONG__
#define __CONG__

struct Score
{
    int                     scorePaddle1;
    int                     scorePaddle2;
};

class Cong
{
private:
    bool                    inGame;
public:
    bool                    checkCollision(Paddle &p, Paddle &p, Ball &b);
}

#endif
