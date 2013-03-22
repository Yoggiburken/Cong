#include"Button.hpp"


void Button::draw(sf::RenderTarget& target) const
{
    target.draw(box);
    target.draw(text);
}
