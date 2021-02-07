#include "application.h"
#include "positionconverter.h"

void app::start()
{
	// create grid
	Grid grid(10);

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
					
					// control that input is legitimate and tile does not already have a texture
					// on given coordinates
					if ( controller.isViablePlacement( grid.size(), converter.getGridCoordinates() ) 
						&& !controller.isExistingCoordinates(converter.getGridCoordinates()) )
					{
						// Coordinate is legitimate and doesn't have a texture set
						controller.insertToMap(converter.getGridCoordinates());

						std::cout << "x: " << converter.getGridCoordinates().x;
						std::cout << " y: " << converter.getGridCoordinates().y << '\n';
						

						/* TODO: ADD ITEM TO TILE */
						
					}
					else {
						std::cout << "Improper placement of item.\n";
					}
			}
		}

		window.clear();

		// Render game elements
		GridDrawer::DrawMap(window, grid);

		window.display();
	}
}

