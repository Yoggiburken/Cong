#ifndef __BUTTON__
#define __BUTTON__

class Button {
    
    Font                    font; 
    Text                    text; 
    string                  textString;
    int                     textiCharacterSize;
    Color                   textColor;
    Vector2f                textPosition();
    RectangleShape          box;
    Color                   boxColor;
    Vector2f                boxSize;
    Vector2f                boxPosition;

public:
    void                    setButtonPosition();
    void                    setTextColor();
    void                    setTextFont();
    void                    setTextString();
    void                    setTextSize();
    void                    setBoxSize();
    void                    setBoxColor();
};

#endif
