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

void Player::Update(float deltaTime)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        sf::Vector2f position = sprite.getPosition();
        sprite.setPosition(position + sf::Vector2f(0.6, 0.0)*playerSpeed*deltaTime);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        sf::Vector2f position = sprite.getPosition();
        sprite.setPosition(position + sf::Vector2f(-0.6, 0.0) * playerSpeed * deltaTime);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        sf::Vector2f position = sprite.getPosition();
        sprite.setPosition(position + sf::Vector2f(0.0, 0.6) * playerSpeed * deltaTime);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        sf::Vector2f position = sprite.getPosition();
        sprite.setPosition(position + sf::Vector2f(0.0, -0.6) * playerSpeed * deltaTime);
    }
}

void Player::Draw(sf::RenderWindow& window)
{
    window.draw(sprite);
}

sf::Vector2f Player::getPosition() const
{
    return sprite.getPosition();
}
