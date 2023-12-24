#include <SFML/Graphics.hpp>
#include "player.h"

int main()
{
   //-------------------------------INITIALIZE----------------------------
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "GAME");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    window.setFramerateLimit(240);
   //-------------------------------INITIALIZE----------------------------
    Player player;

   //-------------------------------INITIALIZE----------------------------
 
    player.Initialize();
   //-------------------------------INITIALIZE----------------------------
   
   //--------------------------------LOAD----------------------------
   player.Load();

   //--------------------------------LOAD----------------------------
  
   //--------------------------------UPDATE----------------------------
   while (window.isOpen())
   {
       sf::Event event;
       while (window.pollEvent(event))
       {
           if (event.type == sf::Event::Closed)
               window.close();
       }

       player.Update();
       //--------------------------------UPDATE----------------------------

       //--------------------------------DRAW----------------------------
       window.clear();
       player.Draw(window);
       window.display();
   }
       //--------------------------------DRAW----------------------------
    

    return 0;
}
