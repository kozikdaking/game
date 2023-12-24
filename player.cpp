#include "player.h"

void Player::Load()
{
   
    if (texture.loadFromFile("images/player.png"))
    {
        std::cout << "Player image has been loaded" << std::endl;
      
    }
    else
    {
        std::cout << "Player image load has been failed" << std::endl;
    }
    sprite.setTexture(texture);
    sprite.setPosition(sf::Vector2f(600, 800));
}

void Player::Initialize()
{
    sprite.setScale(0.4f, 0.4f);
    
    
}

void Player::Update()
{
    
}

void Player::Draw(sf::RenderWindow& window)
{
    window.draw(sprite);
}
