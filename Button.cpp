#include<iostream>
#include"Button.hpp"

using namespace std;

int Button::buttonID = 0;

const int               OFFSET = 100;

Button::Button( std::string whatTextString, sf::Vector2f whatTextPosition, std::string fontName, int whatTextSize, sf::Color whatTextColor)
{
    textString          = whatTextString;
    textPosition        = sf::Vector2f(whatTextPosition.x-2*whatTextSize, 
                                whatTextPosition.y+whatTextSize/2+(OFFSET)*buttonID);
    textCharacterSize   = whatTextSize;
    textColor           = whatTextColor;

    font.loadFromFile(fontName.c_str());

    text.setFont(font);
    text.setString(textString);
    text.setPosition(textPosition);
    text.setCharacterSize(textCharacterSize);
    text.setColor(textColor);
    
    box.setSize(sf::Vector2f(text.getGlobalBounds().width+whatTextSize, text.getGlobalBounds().height+whatTextSize/2));
    box.setPosition(textPosition.x-whatTextSize/2, textPosition.y);
    box.setFillColor(sf::Color(100,100,100));
    buttonID++;
}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const 
{
    target.draw(box);
    target.draw(text);
}
