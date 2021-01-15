#include "xboardpiece.h"

void itemX::SetItem(std::vector<std::vector<sf::RectangleShape>>& grid)
{
	// Coordinates clicked in grid
	sf::Vector2u pos = getCoords();

	sf::Texture item;

	// get the texture from parent class
	//sf::Texture item = GetItem();

	// name / file path for picture
	std::string file_path = getItemName();

	item.loadFromFile(file_path);

	grid[pos.x][pos.y].setTexture(&item);
}
