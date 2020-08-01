#include "../includes/player.h"

Player::Player(const char* file){
    this->texture = new Texture();
    texture->loadFromFile(file);
    texture->setSmooth(true);
    this->sprite = new Sprite();
    this->sprite->setTexture(*texture);

    //rects de nave
    IntRect rect =  IntRect(476,399,138,148);
    this->sprite->setTextureRect(rect);
    this->sprite->setScale(0.5,0.5);
    
}

Player::~Player(){
    delete sprite;
    delete texture;
}

Sprite Player::getSprite(){
    return *sprite;
}