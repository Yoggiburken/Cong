#include"Button.hpp"

Button::Button(std::string& whatTextString, sf::Vector2f& whatTextPosition, std::string& fontName, int whatTextSize, sf::Color& whatTextColor)
{
    textString          = whatTextString;
    textPosition        = whatTextPosition;
    textCharacterSize   = whatTextSize;
    textColor           = whatTextColor;

    font.loadFromFile(fontName.c_str());
    text.setString(textString);
    text.setPosition(textPosition);
    text.setCharacterSize(textCharacterSize);
    text.setColor(textColor);
}

void Button::draw(sf::RenderTarget& target) const
{
    target.draw(box);
    target.draw(text);
}
