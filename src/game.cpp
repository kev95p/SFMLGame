#include "../includes/game.h"

using namespace sf;


Game::Game(){
    window = new RenderWindow(VideoMode(1280, 720), "Starship game");
    player = new Player("assets/starship.png");
    event = new Event();
}


void Game::init(){
 
    while (window->isOpen())
    {

        eventsLoop();

        window->clear();
        window->draw(player->getSprite());
        window->display();
    }
}

void Game::eventsLoop(){
        while (window->pollEvent(*event))
        {
            if (event->type == Event::Closed){
                window->close();
            }
               
        }
}

Game::~Game(){
    delete window;
    delete event;
    delete player;

}