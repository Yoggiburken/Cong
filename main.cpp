#include<SFML/Graphics.hpp>

using namespace sf;


int main()
{
    RenderWindow                App(VideoMode(800, 600), "Cong");
    Event                       event;

    while(App.isOpen())
    {
        while(App.pollEvent(event))
        {
            if(event.type == Event::Closed) {
                App.close();
            }
        }
    }
}
