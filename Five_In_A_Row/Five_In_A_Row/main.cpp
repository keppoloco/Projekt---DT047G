#include "Grid.h"
#include "gridmanager.h"
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

    /*sf::View view;
    view.setSize(w_width, w_height);
    view.setCenter(window.getSize().x / 2.f, window.getSize().y / 2.f);*/

    // create grid 10 x 10
    Grid grid(10);
    grid.CreateTileMap();

    while (window.isOpen())
    {
        wMousePos = sf::Mouse::getPosition(window);

        nMousePos = window.mapPixelToCoords(wMousePos);
        gridPos.x = static_cast<unsigned>(nMousePos.x / 50.f);
        gridPos.y = static_cast<unsigned>(nMousePos.y / 50.f);

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

           /* if (event.type == sf::Event::MouseButtonPressed &&
                (event.mouseButton.button == sf::Mouse::Left ||
                 event.mouseButton.button == sf::Mouse::Right && (wMousePos.x < 500.f || wMousePos.y < 500.f)))*/
            if ( event.type == sf::Event::MouseButtonPressed && (gridPos.x < grid.size() && gridPos.y < grid.size()) )
            {
                std::cout << "grid-x: " << gridPos.x << '\n';
                std::cout << "grid-y: " << gridPos.y << '\n';
            }
        }
        window.clear();
       // window.setView(view);

        //window.setView(window.getDefaultView());

        GridManager::DrawMap(window, grid);

        window.display();
    }

    return 0;
}