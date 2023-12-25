#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
class Player
{
private:
	float playerSpeed = 0.5f;
	sf::Texture texture;
	sf::Sprite sprite;
	
public:

	void Load();
	void Initialize();
	void Update(float deltaTime);
	void Draw(sf::RenderWindow& window);
	sf::Vector2f getPosition() const;
};

