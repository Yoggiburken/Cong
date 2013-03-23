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
    sf::RectangleShape      box;
    sf::Color               boxColor;
    sf::Vector2f            boxSize;
    sf::Vector2f            boxPosition;
    static int              buttonID;
    bool                    clickable;

public:
                            Button(std::string, sf::Vector2f, std::string, int, sf::Color);
    void                    setButtonPosition(void);
    void                    setTextColor(void);
    void                    setTextFont(void);
    void                    setTextString(void);
    void                    setTextSize(void);
    void                    setBoxSize(void);
    void                    setBoxColor(void);
    void                    davidCenter(void);
    virtual void            draw(sf::RenderTarget &target, sf::RenderStates ) const;
};

#endif
