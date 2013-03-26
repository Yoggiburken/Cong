#include <SFML/Graphics.hpp>
#include "Ball.hpp"

#ifndef __PADDLE__
#define __PADDLE__

enum move { up, down };

class Paddle: public sf::Drawable
{
private:
    int                     paddleID;
    sf::Vector2f            position;
    sf::RectangleShape      paddle;
public:
                            Paddle(int);
    void                    movePaddle(move);
    void                    collision(Ball&);
    virtual void            draw(sf::RenderTarget&, sf::RenderStates) const;
};

#endif
