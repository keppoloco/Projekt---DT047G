#include "application.h"
#include "positionconverter.h"
#include "boarditem.h"


void addTextureOnTile(std::vector<std::vector<sf::RectangleShape>> &grid, const sf::Vector2u& coords)
{
	sf::Texture texture;
	texture.loadFromFile("board_item_x.png");

	grid[coords.x][coords.y].setTexture(&texture);
}


void app::start()
{
	// create grid
	Grid grid(10);
	sf::Texture texture;
	sf::Sprite sprite;
	while (window.isOpen())
	{

		sf::Event ev;
		while (window.pollEvent(ev))
		{
			switch (ev.type)
			{
				case sf::Event::Closed:
					window.close();
					break;
				
				case sf::Event::MouseButtonPressed:
					converter converter(handle.getMouseCoordinates(window));

					// Mouse position to normalized coordinates
					converter.posToCoords(window);

					// convert to grid coordinates
					converter.nCoordsToGridCoords(grid.getTileSize());
					
					// Check if a tile has been clicked ALSO CHECK WHETHER TILE IS USED
					if (handle.isViablePlacement(grid.size(), converter.getGridCoordinates()))
					{
						std::cout << "x: " << converter.getGridCoordinates().x;
						std::cout << " y: " << converter.getGridCoordinates().y << '\n';
						
						/* TODO: ADD ITEM TO TILE */
						auto p = grid.get_Map();
						addTextureOnTile(p, converter.getGridCoordinates());
					}
					else {
						std::cout << "Improper placement of item.\n";
					}


			}
		}

		//window.clear();

		// Render game elements
		GridDrawer::DrawMap(window, grid);

		window.display();
	}
}

