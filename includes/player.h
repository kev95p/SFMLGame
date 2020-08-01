#include <SFML/Graphics.hpp>

using namespace sf;

class Player{
    private:
        Texture* texture;
        Sprite* sprite;
    public:
        Player(const char* file);
        ~Player();
        Sprite getSprite();
};