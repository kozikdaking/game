#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include"player.h"

class Enemy
{
private:
	sf::Texture texture;
	sf::Sprite sprite;

public:
	void Load();
	void Initialize();
	void Update(const Player& player, float deltaTime);
	void Draw(sf::RenderWindow& window);
};

