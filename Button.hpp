#include<SFML/Graphics.hpp>


#ifndef __BUTTON__
#define __BUTTON__

class Button : public sf::Drawable {
    
    sf::Font                font; 
    sf::Text                text; 
    std::string             textString;
    int                     textiCharacterSize;
    sf::Color               textColor;
    sf::Vector2f            textPosition();
    sf::RectangleShape      box;
    sf::Color               boxColor;
    sf::Vector2f            boxSize;
    sf::Vector2f            boxPosition;

public:
    void                    setButtonPosition();
    void                    setTextColor();
    void                    setTextFont();
    void                    setTextString();
    void                    setTextSize();
    void                    setBoxSize();
    void                    setBoxColor();
    virtual void            draw(sf::RenderTarget &target) const;
};

#endif
