#include"Button.hpp"

Button::Button( std::string whatTextString, sf::Vector2f whatTextPosition, std::string fontName, int whatTextSize, sf::Color whatTextColor)
{
    textString          = whatTextString;
    textPosition        = whatTextPosition;
    textCharacterSize   = whatTextSize;
    textColor           = whatTextColor;

    font.loadFromFile(fontName.c_str());
    
    text.setFont(font);
    text.setString(textString);
    text.setPosition(textPosition);
    text.setCharacterSize(textCharacterSize);
    text.setColor(textColor);
    
    box.setSize(sf::Vector2f(text.getGlobalBounds().width *1.1, text.getGlobalBounds().height *1.1));
    box.setPosition(sf::Vector2f(text.getGlobalBounds().left - (box.getGlobalBounds().width - text.getGlobalBounds().width)/2 
                                ,text.getGlobalBounds().top - (box.getGlobalBounds().height - text.getGlobalBounds().height)/2 ));
    box.setFillColor(sf::Color(50,50,50));
}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const 
{
    target.draw(box);
    target.draw(text);
}
