#include<SFML/Graphics.hpp>
using namespace std;
using namespace sf;

const int                   WINDOW_WIDTH = 800;
const int                   WINDOW_HEIGHT = 600;

const string                FONT_FILE_NAME = "Feisar.ttf";
const string                TITLE_STRING = "CONG";
const Vector2f              TITLE_BOX_SIZE(200, 50);
const Vector2f              TITLE_POSITION((WINDOW_WIDTH-TITLE_BOX_SIZE.x)/2, 50);
const string                PLAY_BUTTON_STRING = "PLAY!";
const Vector2f              PLAY_BUTTON_SIZE(200, 50);
const Vector2f              PLAY_BUTTON_POSITION((WINDOW_WIDTH-TITLE_BOX_SIZE.x)/2, 200);


int main()
{
    Font                    FONT;
    Text                    TITLE_TEXT;
    RectangleShape          TITLE_BOX(TITLE_BOX_SIZE);
    Text                    PLAY_BUTTON_TEXT;
    RectangleShape          PLAY_BUTTON_BOX(PLAY_BUTTON_SIZE);
    RenderWindow            App(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "CONG");
    Event                   event;

    FONT.loadFromFile(FONT_FILE_NAME);
    TITLE_TEXT.setString(TITLE_STRING);
    TITLE_TEXT.setFont(FONT);
    TITLE_TEXT.setColor(Color(0,0,0));
    TITLE_TEXT.setCharacterSize(40);
    TITLE_TEXT.setPosition(Vector2f(320, 50));
    TITLE_BOX.setPosition(TITLE_POSITION);
    PLAY_BUTTON_TEXT.setString(PLAY_BUTTON_STRING);
    PLAY_BUTTON_TEXT.setFont(FONT);
    PLAY_BUTTON_TEXT.setColor(Color(0,0,0));
    PLAY_BUTTON_TEXT.setPosition(Vector2f(320, 200));
    PLAY_BUTTON_BOX.setPosition(PLAY_BUTTON_POSITION);

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
