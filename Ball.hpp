#ifndef __BALL__
#define __BALL__

class Ball
{
private:
    sf::Vector2f                position;
    sf::Vector2f                velocity;
public:
    void move();
};

#endif
