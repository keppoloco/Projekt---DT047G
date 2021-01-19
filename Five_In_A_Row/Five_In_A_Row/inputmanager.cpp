#include "inputmanager.h"

sf::Vector2i iManager::getMouseCoordinates(sf::RenderWindow& window)
{
	// return mouse position relative to window
	return sf::Mouse::getPosition(window);
}

bool iManager::isViablePlacement(const int grid_size, const sf::Vector2u Coordinates)
{
	return (Coordinates.x < grid_size && Coordinates.y < grid_size);
}
