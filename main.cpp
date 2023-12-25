#include <SFML/Graphics.hpp>
#include "player.h"
#include "map.h"
#include "Enemy.h"

int main()
{
   //-------------------------------INITIALIZE----------------------------
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "GAME");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    window.setFramerateLimit(240);
   //-------------------------------INITIALIZE----------------------------
    Player player;
    Map map;
    Enemy enemy;
    sf::Clock clock;

   //-------------------------------INITIALIZE----------------------------
 
    player.Initialize();
    enemy.Initialize();
   //-------------------------------INITIALIZE----------------------------
   
   //--------------------------------LOAD----------------------------
   map.Load();
   player.Load();
   enemy.Load();

   //--------------------------------LOAD----------------------------
  
   //--------------------------------UPDATE----------------------------
   while (window.isOpen())
   {
       sf::Time deltaTime = clock.restart();
       double deltaTimeSeconds = deltaTime.asMilliseconds();
       sf::Event event;
       while (window.pollEvent(event))
       {
           if (event.type == sf::Event::Closed)
               window.close();
       }
       
       player.Update(deltaTimeSeconds);
       enemy.Update(player, deltaTimeSeconds);

  
       //--------------------------------UPDATE----------------------------

       //--------------------------------DRAW----------------------------
       window.clear();
       map.Draw(window);
       enemy.Draw(window);
       player.Draw(window);
       window.display();
   }
       //--------------------------------DRAW----------------------------
    

    return 0;
}
