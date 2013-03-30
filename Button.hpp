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
                            Button(std::string, sf::Vector2f, bool, int, sf::Color, bool, std::string fontName=std::string("Resources/Feisar.ttf"));
    
    void                    setTextColor(sf::Color &newColor)       { textColor         = newColor; text.setColor(textColor);}
    void                    setTextFont(sf::Font &newFont)          { font              = newFont;}
    void                    setTextFont(std::string &newFont)       { font.loadFromFile(newFont);}
    void                    setTextString(std::string &newString)   { textString        = newString; text.setString(textString);}
    void                    setTextSize(const int newSize)          { textCharacterSize = newSize; text.setCharacterSize(textCharacterSize);}
    
    void                    setButtonColor(sf::Color &newColor)     { buttonColor       = newColor; button.setFillColor(buttonColor);}
    void                    setButtonSize(sf::Vector2f &newSize);

    virtual void            draw(sf::RenderTarget &target, sf::RenderStates ) const;
};

#endif
