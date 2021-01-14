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
                int column = (float)(event.mouseButton.y) / w_width * grid.get_Tile().getSize().y;
                std::cout << column << '\n';
            }
        }

        window.clear();

        GridManager::DrawMap(window, grid);

        window.display();
    }

    return 0;
}