#include<iostream>
#include"Button.hpp"


const int                   PADDING = 15;
int                         Button::buttonID = 0;

Button::Button(std::string whatTextString, sf::Vector2f whatTextPosition, bool isClickable, int whatTextSize, sf::Color whatTextColor, std::string fontName)
{ 
    font.loadFromFile(fontName.c_str());

    textString          = whatTextString;
    textCharacterSize   = whatTextSize;
    textColor           = whatTextColor;
    
    text.setFont(font);
    text.setString(textString); 
    text.setCharacterSize(textCharacterSize);
    text.setColor(textColor);
    text.setPosition(whatTextPosition);
     
    button.setSize(sf::Vector2f(text.getGlobalBounds().width, text.getGlobalBounds().height));
    button.setPosition(sf::Vector2f(text.getGlobalBounds().left - (button.getGlobalBounds().width - text.getGlobalBounds().width)/2, 
                                 text.getGlobalBounds().top - (button.getGlobalBounds().height - text.getGlobalBounds().height)/2 ));
    button.setFillColor(sf::Color(255,255,255));
}


void Button::setButtonSize(double width, double height)
{
    button.setSize(sf::Vector2f(width, height));
    button.setPosition(sf::Vector2f(text.getGlobalBounds().left - (button.getGlobalBounds().width - text.getGlobalBounds().width)/2, 
                                 text.getGlobalBounds().top - (button.getGlobalBounds().height - text.getGlobalBounds().height)/2));
}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const 
{
    target.draw(button);
    target.draw(text);
}
