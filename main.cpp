#include<SFML/Graphics.hpp>

using namespace sf;

const int               WINDOW_WIDTH = 800;
const int               WINDOW_HEIGHT = 600;
const int               TITLE_WIDTH = 100;
const int               TITLE_HEIGHT = 20;
const Vector2f          TITLE_POSITION(WINDOW_WIDTH/2 - TITLE_WIDTH, 50);

int main()
{
    RenderWindow                App(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Cong");
    Event                       event;
    RectangleShape              title(Vector2f(100,20));
    title.setPosition(TITLE_POSITION);

    while(App.isOpen())
    {
        while(App.pollEvent(event))
        {
            if(event.type == Event::Closed) {
                App.close();
            }
        }

        App.clear();
        App.draw(title);
        App.display();
    }
}
