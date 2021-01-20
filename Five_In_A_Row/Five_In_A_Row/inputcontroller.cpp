#include "inputcontroller.h"

bool iController::isViablePlacement(const int grid_size, const sf::Vector2u coordinates)
{
	return (coordinates.x < grid_size && coordinates.y < grid_size);
}

bool iController::hasTextureSet(const sf::Vector2u coords)
{
	return (gridMap.find(coords) != gridMap.end());
}

bool iController::isEmptyMap() const
{
	return gridMap.empty();
}

void iController::insertToMap(const sf::Vector2u coords)
{
	gridMap.insert(std::pair<sf::Vector2u, bool>(coords,true));
}

