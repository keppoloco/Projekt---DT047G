#pragma once
#ifndef GRID_H
#define GRID_H
#include <SFML/Graphics.hpp>
class Grid {
public:
	// Constructor taking size parameter
	Grid(int size) : grid_size(size) 
	{
		// size of tiles in grid
		tile_.setSize(sf::Vector2f(tile_size, tile_size));

		// Create the tile map
		CreateTileMap();
	}

	// Getters
	sf::RectangleShape get_Tile() const;

	std::vector<std::vector<sf::RectangleShape>> get_Map() const;
	
	sf::Vector2f getTileSize() const;
	int size() const;



private:
	int grid_size;
	const float tile_size = 50.f;
	std::vector<std::vector<sf::RectangleShape>> tile_map;
	sf::RectangleShape tile_;
	void CreateTileMap();

};



#endif //! GRID_H