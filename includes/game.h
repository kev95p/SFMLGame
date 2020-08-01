#include <SFML/Graphics.hpp>

#include "../includes/player.h"

using namespace sf;

class Game{
    private:
        Event* event;
        RenderWindow* window;
        Player* player;

        void eventsLoop();
    public:
        Game();
        void init();
        ~Game();
};