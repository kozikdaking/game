#include "Enemy.h"

void Enemy::Load()
{
	if (texture.loadFromFile("images/enemy1.png"))
	{
		std::cout << "enemy has been loaded" << std::endl;
		sprite.setTexture(texture);
	}
	else
	{
		std::cout << "enemy load has been failed" << std::endl;
	}
}

void Enemy::Initialize()
{
	sprite.setScale(0.5, 0.5);
	const int screenWidth = 1920;
	const int screenHeight = 1080;
	std::srand(std::time(0));
	int losowaX = std::rand() % (screenHeight);
	int losowaY = std::rand() % (screenWidth);
	sprite.setPosition(losowaX, losowaY);
}

void Enemy::Update(const Player& player, float deltaTime)
{
	// get player pos
	sf::Vector2f playerPosition = player.getPosition();

	// dir
	sf::Vector2f direction = playerPosition - sprite.getPosition();

	// Normalizuj wektor kierunku, aby uzyskaæ jednostkowy wektor
	float length = std::sqrt(direction.x * direction.x + direction.y * direction.y);
	if (length != 0)
	{
		direction /= length;
	}

	float speed = 0.2f;  // Prêdkoœæ przeciwnika (przyk³adowa wartoœæ)

	// Przesuñ obiekt Enemy w kierunku gracza
	sprite.move(speed * direction * deltaTime);
}

void Enemy::Draw(sf::RenderWindow& window)
{
	window.draw(sprite);
}
