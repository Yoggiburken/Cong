#include<SFML/Graphics.hpp>
#include"Button.hpp"
#include"Ball.hpp"
using namespace std;
using namespace sf;

const int                   WINDOW_WIDTH = 800;
const int                   WINDOW_HEIGHT = 600;


int main()
{
<<<<<<< HEAD
    Button title(string("CONG"), Vector2f(100,100), string("Feisar.ttf"), 50, Color(0,0,0)); 
=======
    Button title(string("CONG"), Vector2f(WINDOW_WIDTH/2, 0), string("Feisar.ttf"), 50, Color(255,255,255), false);
    Button play(string("PLAY"), Vector2f(WINDOW_WIDTH/2, 0), string("Feisar.ttf"), 30, Color(0,0,0), true);

    Ball ball;

>>>>>>> 477292d58d319ef607f46acc4f31fd1d006cf84c
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
