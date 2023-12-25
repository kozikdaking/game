#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
class Map
{
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	void Load();
	void Initialize();
	void Update();
	void Draw(sf::RenderWindow&window);
};

