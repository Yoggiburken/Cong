#include<iostream>
#include"Button.hpp"

using namespace std;

const int                   PADDING = 15;
int                         Button::buttonID = 0;


Button::Button(std::string whatTextString, sf::Vector2f whatTextPosition, std::string fontName, int whatTextSize, sf::Color whatTextColor, bool clickable)
{ 
    font.loadFromFile(fontName.c_str());

    textString          = whatTextString;
    textCharacterSize   = whatTextSize;
    textColor           = whatTextColor;

    text.setFont(font);
    text.setString(textString); 
    text.setCharacterSize(textCharacterSize);
    text.setColor(textColor);
    
    box.setSize(sf::Vector2f(text.getGlobalBounds().width, text.getGlobalBounds().height));
    box.setPosition(sf::Vector2f(text.getGlobalBounds().left - (box.getGlobalBounds().width - text.getGlobalBounds().width)/2 
                                ,text.getGlobalBounds().top - (box.getGlobalBounds().height - text.getGlobalBounds().height)/2 ));
    box.setFillColor(sf::Color(50,50,50));
}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const 
{
    target.draw(box);
    target.draw(text);
}
