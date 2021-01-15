#include "Grid.h"
#include "gridmanager.h"
#include <iostream>
int main()
{
    // width and height sizes for the application's window
    const int w_width = 1280;
    const int w_height = 720;

    // create application window
    sf::RenderWindow window(sf::VideoMode(w_width, w_height), "Five in a row");

    // create grid 10 x 10
    Grid grid(10);

    grid.CreateTileMap();
    int column = 0;
    int row = 0;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::MouseButtonPressed &&
                (event.mouseButton.button == sf::Mouse::Left ||
                 event.mouseButton.button == sf::Mouse::Right))
            {
                sf::Vector2i position = sf::Mouse::getPosition();
                sf::Vector2f wPosition = window.mapPixelToCoords(position);
                column = wPosition.y / w_height * grid.size();
                //row = wPosition.y / w_height * grid.size();
                std::cout << "col: " << column << '\t' << "row: " << row << '\n';
            }
        }
        sf::CircleShape circ(25.f);
        circ.setFillColor(sf::Color::Green);
        circ.setPosition(sf::Vector2f(float(column),0));
        window.clear();
       
        GridManager::DrawMap(window, grid);
        window.draw(circ);

        window.display();
    }

    return 0;
}