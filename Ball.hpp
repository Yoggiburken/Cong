#include <SFML/Graphics.hpp>

using namespace sf;

#ifndef __BALL__
#define __BALL__

class Ball: public sf::Drawable
{
private:
    sf::RectangleShape          ball;
public:
    sf::Vector2f                dimensions;
    sf::Vector2f                position;
    sf::Vector2f                velocity;
                                Ball();
    void                        move();
    void                        collision();
    virtual void                draw(sf::RenderTarget&, sf::RenderStates) const;
};

#endif
