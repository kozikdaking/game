#include "Map.h"

void Map::Load()
{
	if (texture.loadFromFile("images/map.png"))
	{
		std::cout<<"the map has been loaded"<<std::endl;
		sprite.setTexture(texture);
		
	}
	else
	{
		std::cout << "the map has not been loaded " << std::endl;
	}
}

void Map::Initialize()
{
}

void Map::Update()
{
}

void Map::Draw(sf::RenderWindow& window)
{
	window.draw(sprite);
}
