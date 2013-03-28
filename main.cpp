#include<SFML/Graphics.hpp>
#include"Button.hpp"
#include"Ball.hpp"
#include"Paddle.hpp"
using namespace std;
using namespace sf;

const int                   WINDOW_WIDTH = 800;
const int                   WINDOW_HEIGHT = 600;

int main()
{
    Button title(string("CONG"), Vector2f(100,100), false, 50, Color(0,0,0));
    Button play(string("PLAY"), Vector2f(200,100), false, 40, Color(0,0,0));
    Ball ball;

    Paddle paddleLeft(1);
    Paddle paddleRight(2);

    RenderWindow App(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Cong!");
    Event event;
    Time ElapsedTime;
    Clock clock;
    

    App.setVerticalSyncEnabled(true);

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

        paddleLeft.collision(ball);
        paddleRight.collision(ball);
        ElapsedTime = clock.getElapsedTime();
        clock.restart();

        if (Keyboard::isKeyPressed(Keyboard::C)) {
            paddleLeft.movePaddle(down, ElapsedTime);
        }

        if (Keyboard::isKeyPressed(Keyboard::D)) {
            paddleLeft.movePaddle(up, ElapsedTime);
        }

        if (Keyboard::isKeyPressed(Keyboard::K)) {
            paddleRight.movePaddle(up, ElapsedTime);
        }

        if (Keyboard::isKeyPressed(Keyboard::M)) {
            paddleRight.movePaddle(down, ElapsedTime);
        }

        ball.collision();

        ball.move(ElapsedTime);

        App.clear();
        App.draw(title);
        App.draw(play);
        App.draw(ball);
        App.draw(paddleLeft);
        App.draw(paddleRight);
        App.display();
    }
}
