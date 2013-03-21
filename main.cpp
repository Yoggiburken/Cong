#include<SFML/Graphics.hpp>
using namespace std;
using namespace sf;

const int               WINDOW_WIDTH = 800;
const int               WINDOW_HEIGHT = 600;

const string            TITLE_FONT_NAME = "Feisar.ttf";
const string            TITLE_STRING = "Cong";
const Vector2f          TITLE_SIZE(200, 50);
const Vector2f          TITLE_POSITION((WINDOW_WIDTH-TITLE_SIZE.x)/2, 50);


int main()
{
    Font                TITLE_FONT;
    Text                TITLE_TEXT;
    RectangleShape      TITLE_BOX(TITLE_SIZE);
    RenderWindow        App(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Cong");
    Event               event;

    TITLE_FONT.loadFromFile(TITLE_FONT_NAME);
    TITLE_TEXT.setString(TITLE_STRING);
    TITLE_TEXT.setFont(TITLE_FONT);
    TITLE_TEXT.setColor(Color(0,0,0));
    TITLE_TEXT.setCharacterSize(40);
    TITLE_TEXT.setPosition(Vector2f(320, 50));
    TITLE_BOX.setPosition(TITLE_POSITION);

    while(App.isOpen())
    {
        while(App.pollEvent(event))
        {
            if(event.type == Event::Closed) {
                App.close();
            }
            if(Keyboard::isKeyPressed(Keyboard::Escape)) {
                App.close();
            }
        }

        App.clear();
        App.draw(TITLE_BOX);
        App.draw(TITLE_TEXT);
        App.display();
    }
}
