#include<SFML/Graphics.hpp>
#include"Button.hpp"
#include"Ball.hpp"
using namespace std;
using namespace sf;

const int                   WINDOW_WIDTH = 800;
const int                   WINDOW_HEIGHT = 600;


int main()
{
    Button title(string("CONG"), Vector2f(WINDOW_WIDTH/2, 0), string("Feisar.ttf"), 50, Color(255,255,255), false);
    Button play(string("PLAY"), Vector2f(WINDOW_WIDTH/2, 0), string("Feisar.ttf"), 30, Color(0,0,0), true);

    Ball ball;

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
        }
        App.clear();
        App.draw(title);
        //App.draw(play);
        App.draw(ball);
        App.display();
    }
}
