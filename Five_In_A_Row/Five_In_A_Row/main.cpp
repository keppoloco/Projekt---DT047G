#include "Grid.h"
#include "gridmanager.h"
#include "xboardpiece.h"
#include <iostream>
int main()
{
    // width and height sizes for the application's window
    const int w_width = 1280;
    const int w_height = 720;

    sf::Vector2u gridPos;
    sf::Vector2i wMousePos;
    sf::Vector2f nMousePos;

    // create application window
    sf::RenderWindow window(sf::VideoMode(w_width, w_height), "Five in a row");

    // initialize and create grid 10 x 10
    Grid grid(10);
    grid.CreateTileMap();

    while (window.isOpen())
    {
        // get mouse pixel position relative to window
        wMousePos = sf::Mouse::getPosition(window);

        // normalize window mouse position to coordinates
        nMousePos = window.mapPixelToCoords(wMousePos);

        // get grid coordinates
        gridPos.x = static_cast<unsigned>(nMousePos.x / grid.get_Tile().getSize().x);
        gridPos.y = static_cast<unsigned>(nMousePos.y / grid.get_Tile().getSize().y);

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if ( event.type == sf::Event::MouseButtonPressed && (gridPos.x < grid.size() && gridPos.y < grid.size()) )
            {
                std::cout << "grid-x: " << gridPos.x << '\n';
                std::cout << "grid-y: " << gridPos.y << '\n';

                boardItem* i = new itemX(gridPos);
                auto map = grid.get_Map();
                i->SetItem(map);
                i->setSprite();
            }
        }
        window.clear();

        GridManager::DrawMap(window, grid);

        window.display();
    }

    return 0;
}