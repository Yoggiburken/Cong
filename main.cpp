#include<SFML/Graphics.hpp>
#include"Button.hpp"
#include"Ball.hpp"
using namespace std;
using namespace sf;

const int                   WINDOW_WIDTH = 800;
const int                   WINDOW_HEIGHT = 600;


int main()
{
    Button title(string("CONG"), Vector2f(100,100), string("Feisar.ttf"), 50, Color(0,0,0)); 

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
