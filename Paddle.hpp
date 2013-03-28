#include<SFML/Audio.hpp>
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
    sf::SoundBuffer         buffer;
    sf::Sound               bounceNoise;
public:
                            Paddle(int);
    void                    movePaddle(move, sf::Time&);
    void                    collision(Ball&);
    virtual void            draw(sf::RenderTarget&, sf::RenderStates) const;
};

#endif
