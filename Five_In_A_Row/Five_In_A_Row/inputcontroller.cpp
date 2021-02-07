#include "inputcontroller.h"

bool iController::isViablePlacement(const int grid_size, const sf::Vector2u coordinates)
{
	return (coordinates.x < grid_size && coordinates.y < grid_size);
}

bool iController::isExistingCoordinates(const sf::Vector2u coords)
{
	std::pair<unsigned int, unsigned int> tmp_pairVertex;
	tmp_pairVertex.first = coords.x;
	tmp_pairVertex.second = coords.y;

	return (gridMap.find(tmp_pairVertex) != gridMap.end());
}

bool iController::isEmptyMap() const
{
	return gridMap.empty(); 
}

void iController::insertToMap(const sf::Vector2u coords)
{
	std::pair<unsigned int, unsigned int> tmp_pairVertex;
	tmp_pairVertex.first = coords.x;
	tmp_pairVertex.second = coords.y;

	gridMap.insert(std::pair<std::pair<unsigned int, unsigned int>, bool>(tmp_pairVertex,true));
}

