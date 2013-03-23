#include <SFML/Graphics.hpp>

using namespace sf;

#ifndef __BALL__
#define __BALL__

class Ball: public sf::Drawable
{
private:
    sf::CircleShape             ball;
    sf::Vector2f                position;
    sf::Vector2f                velocity;
    int                         radius;
public:
                                Ball();
    void                        move();
    virtual void                draw(sf::RenderTarget&, sf::RenderStates) const;
};

#endif
