#include<SFML/Graphics.hpp>
#include"Button.hpp"
using namespace std;
using namespace sf;

const int                   WINDOW_WIDTH = 800;
const int                   WINDOW_HEIGHT = 600;


int main()
{
    Button title(string("CONG"), Vector2f(0,0), string("Feisar.ttf"), 30, Color(0,0,0)); 
    RenderWindow App(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Cong!");
    Event event;

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

            if(Keyboard::isKeyPressed(Keyboard::K)) {

            }
        }

        App.clear();
        App.draw(title);
        App.display();
    }
}
