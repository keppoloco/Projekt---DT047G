#include "Grid.h"

void Grid::CreateTileMap()
{
	// Fetch size of board
	int size_ = size();

	tile_map.resize(size_, std::vector<sf::RectangleShape>());

	for (int x = 0; x < size_; x++) {
		tile_map[x].resize(size_, sf::RectangleShape());
		for (int y = 0; y < size_; y++)
		{
			tile_map[x][y].setSize(sf::Vector2f(size_, size_));
			tile_map[x][y].setFillColor(sf::Color::White);
			tile_map[x][y].setOutlineThickness(1.0f);
			tile_map[x][y].setOutlineColor(sf::Color::Black);
			tile_map[x][y].setPosition(x * size_, y * size_);
		}
	}
}

int Grid::size() const
{
	return tile_size;
}

sf::RectangleShape Grid::get_Tile() const
{
	return tile_;
}

std::vector<std::vector<sf::RectangleShape>> Grid::get_Map() const
{
	return tile_map;
}