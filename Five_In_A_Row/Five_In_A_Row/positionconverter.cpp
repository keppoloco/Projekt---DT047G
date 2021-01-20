#include "positionconverter.h"

void converter::posToCoords(sf::RenderWindow &window)
{
	// Normalize window mouse position to coordinates
	nMousePos = window.mapPixelToCoords(wMousePos);	
}

void converter::nCoordsToGridCoords(const sf::Vector2f& tile_size)
{
	// Convert value type and divide with size of tile in grid
	gridPos.x = static_cast<unsigned>(nMousePos.x) / tile_size.x;
	gridPos.y = static_cast<unsigned>(nMousePos.y) / tile_size.y;
}

sf::Vector2u converter::getGridCoordinates() const
{
	return gridPos;
}
