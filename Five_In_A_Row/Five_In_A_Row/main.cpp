#include "Grid.h"
#include "gridmanager.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Five in a row");
    Grid grid(10);
    //sf::RectangleShape Shape(sf::Vector2f(grid.size(), grid.size()));
    //shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        grid.CreateTileMap();

        GridManager::DrawTile(window, grid);
        GridManager::DrawMap(window, grid);

        window.display();
    }

    return 0;
}