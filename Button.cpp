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
    
    box.setFillColor(sf::Color(100,100,100));
    box.setSize(sf::Vector2f(text.getGlobalBounds().width, text.getGlobalBounds().height));
}

void Button::davidCenter()
{
    sf::FloatRect textRect = text.getLocalBounds();
    text.setOrigin( textRect.left + textRect.width/2.f, textRect.top );
    text.setPosition(sf::Vector2f(whatTextPosition));

    sf::FloatRect boxRect = box.getLocalBounds();
    box.setOrigin( boxRect.left + boxRect.width/2.f, boxRect.top );
    box.setPosition(sf::Vector2f(whatTextPosition));
}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const 
{
    target.draw(box);
    target.draw(text);
}
