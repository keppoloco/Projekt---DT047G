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
			tile_map[x][y].setSize(sf::Vector2f(tile_.getSize().x, tile_.getSize().y));
			tile_map[x][y].setFillColor(sf::Color::White);
			tile_map[x][y].setOutlineThickness(1.0f);
			tile_map[x][y].setOutlineColor(sf::Color::Black);
			tile_map[x][y].setPosition(x * tile_.getSize().x, y * tile_.getSize().y);
		}
	}
}

int Grid::size() const
{
	return grid_size;
}

sf::Vector2f Grid::getTileSize() const
{
	return tile_.getSize();
}

sf::RectangleShape Grid::get_Tile() const
{
	return tile_;
}

std::vector<std::vector<sf::RectangleShape>> Grid::get_Map() const
{
	return tile_map;
}
