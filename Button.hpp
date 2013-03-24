#include<SFML/Graphics.hpp>


#ifndef __BUTTON__
#define __BUTTON__

class Button : public sf::Drawable 
{    
    sf::Font                font; 
    sf::Text                text; 
    std::string             textString;
    int                     textCharacterSize;
    sf::Color               textColor;
    sf::Vector2f            textPosition;
    sf::RectangleShape      button;
    sf::Color               buttonColor;
    sf::Vector2f            buttonSize;
    sf::Vector2f            buttonPosition;
    static int              buttonID;
    bool                    clickable;

public:
                            Button(std::string, sf::Vector2f, bool, int, sf::Color, std::string fontName=std::string("Feisar.ttf"));
    void                    setButtonPosition(void);
    void                    setTextColor(void);
    void                    setTextFont(void);
    void                    setTextString(void);
    void                    setTextSize(void);
    void                    setButtonSize(double, double);
    void                    setButtonColor(void);
    virtual void            draw(sf::RenderTarget &target, sf::RenderStates ) const;
};

#endif
